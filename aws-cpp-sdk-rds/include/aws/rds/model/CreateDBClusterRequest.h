/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API CreateDBClusterRequest : public RDSRequest
  {
  public:
    CreateDBClusterRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>A list of EC2 Availability Zones that instances in the DB cluster can be created in. For information on regions and Availability Zones, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions and Availability Zones</a>. </p>
    */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    /*
     <p>A list of EC2 Availability Zones that instances in the DB cluster can be created in. For information on regions and Availability Zones, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions and Availability Zones</a>. </p>
    */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /*
     <p>A list of EC2 Availability Zones that instances in the DB cluster can be created in. For information on regions and Availability Zones, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions and Availability Zones</a>. </p>
    */
    inline CreateDBClusterRequest&  WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /*
     <p>A list of EC2 Availability Zones that instances in the DB cluster can be created in. For information on regions and Availability Zones, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions and Availability Zones</a>. </p>
    */
    inline CreateDBClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /*
     <p>A list of EC2 Availability Zones that instances in the DB cluster can be created in. For information on regions and Availability Zones, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions and Availability Zones</a>. </p>
    */
    inline CreateDBClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /*
     <p>The number of days for which automated backups are retained. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Default: 1 </p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 35</li> </ul>
    */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    /*
     <p>The number of days for which automated backups are retained. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Default: 1 </p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 35</li> </ul>
    */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /*
     <p>The number of days for which automated backups are retained. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Default: 1 </p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 35</li> </ul>
    */
    inline CreateDBClusterRequest&  WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified CharacterSet. </p>
    */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }
    /*
     <p>A value that indicates that the DB cluster should be associated with the specified CharacterSet. </p>
    */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified CharacterSet. </p>
    */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified CharacterSet. </p>
    */
    inline CreateDBClusterRequest&  WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified CharacterSet. </p>
    */
    inline CreateDBClusterRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}

    /*
     <p>The name for your database of up to 8 alpha-numeric characters. If you do not provide a name, Amazon RDS will not create a database in the DB cluster you are creating.</p>
    */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    /*
     <p>The name for your database of up to 8 alpha-numeric characters. If you do not provide a name, Amazon RDS will not create a database in the DB cluster you are creating.</p>
    */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /*
     <p>The name for your database of up to 8 alpha-numeric characters. If you do not provide a name, Amazon RDS will not create a database in the DB cluster you are creating.</p>
    */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /*
     <p>The name for your database of up to 8 alpha-numeric characters. If you do not provide a name, Amazon RDS will not create a database in the DB cluster you are creating.</p>
    */
    inline CreateDBClusterRequest&  WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /*
     <p>The name for your database of up to 8 alpha-numeric characters. If you do not provide a name, Amazon RDS will not create a database in the DB cluster you are creating.</p>
    */
    inline CreateDBClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

    /*
     <p>The DB cluster identifier. This parameter is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens.</li> <li>First character must be a letter.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul> <p>Example: <code>my-cluster1</code></p>
    */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    /*
     <p>The DB cluster identifier. This parameter is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens.</li> <li>First character must be a letter.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul> <p>Example: <code>my-cluster1</code></p>
    */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /*
     <p>The DB cluster identifier. This parameter is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens.</li> <li>First character must be a letter.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul> <p>Example: <code>my-cluster1</code></p>
    */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /*
     <p>The DB cluster identifier. This parameter is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens.</li> <li>First character must be a letter.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul> <p>Example: <code>my-cluster1</code></p>
    */
    inline CreateDBClusterRequest&  WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /*
     <p>The DB cluster identifier. This parameter is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens.</li> <li>First character must be a letter.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul> <p>Example: <code>my-cluster1</code></p>
    */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /*
     <p> The name of the DB cluster parameter group to associate with this DB cluster. If this argument is omitted, <code>default.aurora5.6</code> for the specified engine will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }
    /*
     <p> The name of the DB cluster parameter group to associate with this DB cluster. If this argument is omitted, <code>default.aurora5.6</code> for the specified engine will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /*
     <p> The name of the DB cluster parameter group to associate with this DB cluster. If this argument is omitted, <code>default.aurora5.6</code> for the specified engine will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /*
     <p> The name of the DB cluster parameter group to associate with this DB cluster. If this argument is omitted, <code>default.aurora5.6</code> for the specified engine will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline CreateDBClusterRequest&  WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /*
     <p> The name of the DB cluster parameter group to associate with this DB cluster. If this argument is omitted, <code>default.aurora5.6</code> for the specified engine will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}

    /*
     <p>A list of EC2 VPC security groups to associate with this DB cluster. </p>
    */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    /*
     <p>A list of EC2 VPC security groups to associate with this DB cluster. </p>
    */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /*
     <p>A list of EC2 VPC security groups to associate with this DB cluster. </p>
    */
    inline CreateDBClusterRequest&  WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /*
     <p>A list of EC2 VPC security groups to associate with this DB cluster. </p>
    */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p>A list of EC2 VPC security groups to associate with this DB cluster. </p>
    */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p>A DB subnet group to associate with this DB cluster. </p>
    */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    /*
     <p>A DB subnet group to associate with this DB cluster. </p>
    */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p>A DB subnet group to associate with this DB cluster. </p>
    */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /*
     <p>A DB subnet group to associate with this DB cluster. </p>
    */
    inline CreateDBClusterRequest&  WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p>A DB subnet group to associate with this DB cluster. </p>
    */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p>The name of the database engine to be used for this DB cluster. </p> <p>Valid Values: <code>aurora</code></p>
    */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    /*
     <p>The name of the database engine to be used for this DB cluster. </p> <p>Valid Values: <code>aurora</code></p>
    */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /*
     <p>The name of the database engine to be used for this DB cluster. </p> <p>Valid Values: <code>aurora</code></p>
    */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /*
     <p>The name of the database engine to be used for this DB cluster. </p> <p>Valid Values: <code>aurora</code></p>
    */
    inline CreateDBClusterRequest&  WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /*
     <p>The name of the database engine to be used for this DB cluster. </p> <p>Valid Values: <code>aurora</code></p>
    */
    inline CreateDBClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /*
     <p>The version number of the database engine to use. </p> <p> <b>Aurora</b> </p> <p>Example: <code>5.6.0</code></p>
    */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    /*
     <p>The version number of the database engine to use. </p> <p> <b>Aurora</b> </p> <p>Example: <code>5.6.0</code></p>
    */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /*
     <p>The version number of the database engine to use. </p> <p> <b>Aurora</b> </p> <p>Example: <code>5.6.0</code></p>
    */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /*
     <p>The version number of the database engine to use. </p> <p> <b>Aurora</b> </p> <p>Example: <code>5.6.0</code></p>
    */
    inline CreateDBClusterRequest&  WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /*
     <p>The version number of the database engine to use. </p> <p> <b>Aurora</b> </p> <p>Example: <code>5.6.0</code></p>
    */
    inline CreateDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /*
     <p> The port number on which the instances in the DB cluster accept connections. </p> <p> Default: <code>3306</code></p>
    */
    inline long GetPort() const{ return m_port; }
    /*
     <p> The port number on which the instances in the DB cluster accept connections. </p> <p> Default: <code>3306</code></p>
    */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /*
     <p> The port number on which the instances in the DB cluster accept connections. </p> <p> Default: <code>3306</code></p>
    */
    inline CreateDBClusterRequest&  WithPort(long value) { SetPort(value); return *this;}

    /*
     <p> The name of the master user for the client DB cluster. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li> <li>First character must be a letter.</li> <li>Cannot be a reserved word for the chosen database engine.</li> </ul>
    */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    /*
     <p> The name of the master user for the client DB cluster. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li> <li>First character must be a letter.</li> <li>Cannot be a reserved word for the chosen database engine.</li> </ul>
    */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /*
     <p> The name of the master user for the client DB cluster. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li> <li>First character must be a letter.</li> <li>Cannot be a reserved word for the chosen database engine.</li> </ul>
    */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /*
     <p> The name of the master user for the client DB cluster. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li> <li>First character must be a letter.</li> <li>Cannot be a reserved word for the chosen database engine.</li> </ul>
    */
    inline CreateDBClusterRequest&  WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /*
     <p> The name of the master user for the client DB cluster. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li> <li>First character must be a letter.</li> <li>Cannot be a reserved word for the chosen database engine.</li> </ul>
    */
    inline CreateDBClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /*
     <p>The password for the master database user. This password can contain any printable ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from 8 to 41 characters. </p>
    */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    /*
     <p>The password for the master database user. This password can contain any printable ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from 8 to 41 characters. </p>
    */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /*
     <p>The password for the master database user. This password can contain any printable ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from 8 to 41 characters. </p>
    */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /*
     <p>The password for the master database user. This password can contain any printable ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from 8 to 41 characters. </p>
    */
    inline CreateDBClusterRequest&  WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /*
     <p>The password for the master database user. This password can contain any printable ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from 8 to 41 characters. </p>
    */
    inline CreateDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified option group. </p> <p>Permanent options cannot be removed from an option group. The option group cannot be removed from a DB cluster once it is associated with a DB cluster. </p>
    */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    /*
     <p>A value that indicates that the DB cluster should be associated with the specified option group. </p> <p>Permanent options cannot be removed from an option group. The option group cannot be removed from a DB cluster once it is associated with a DB cluster. </p>
    */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified option group. </p> <p>Permanent options cannot be removed from an option group. The option group cannot be removed from a DB cluster once it is associated with a DB cluster. </p>
    */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified option group. </p> <p>Permanent options cannot be removed from an option group. The option group cannot be removed from a DB cluster once it is associated with a DB cluster. </p>
    */
    inline CreateDBClusterRequest&  WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /*
     <p>A value that indicates that the DB cluster should be associated with the specified option group. </p> <p>Permanent options cannot be removed from an option group. The option group cannot be removed from a DB cluster once it is associated with a DB cluster. </p>
    */
    inline CreateDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /*
     <p>The daily time range during which automated backups are created if automated backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p> <ul> <li>Must be in the format <code>hh24:mi-hh24:mi</code>.</li> <li>Times should be in Universal Coordinated Time (UTC).</li> <li>Must not conflict with the preferred maintenance window.</li> <li>Must be at least 30 minutes.</li> </ul>
    */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    /*
     <p>The daily time range during which automated backups are created if automated backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p> <ul> <li>Must be in the format <code>hh24:mi-hh24:mi</code>.</li> <li>Times should be in Universal Coordinated Time (UTC).</li> <li>Must not conflict with the preferred maintenance window.</li> <li>Must be at least 30 minutes.</li> </ul>
    */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /*
     <p>The daily time range during which automated backups are created if automated backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p> <ul> <li>Must be in the format <code>hh24:mi-hh24:mi</code>.</li> <li>Times should be in Universal Coordinated Time (UTC).</li> <li>Must not conflict with the preferred maintenance window.</li> <li>Must be at least 30 minutes.</li> </ul>
    */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /*
     <p>The daily time range during which automated backups are created if automated backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p> <ul> <li>Must be in the format <code>hh24:mi-hh24:mi</code>.</li> <li>Times should be in Universal Coordinated Time (UTC).</li> <li>Must not conflict with the preferred maintenance window.</li> <li>Must be at least 30 minutes.</li> </ul>
    */
    inline CreateDBClusterRequest&  WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p>The daily time range during which automated backups are created if automated backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p> <ul> <li>Must be in the format <code>hh24:mi-hh24:mi</code>.</li> <li>Times should be in Universal Coordinated Time (UTC).</li> <li>Must not conflict with the preferred maintenance window.</li> <li>Must be at least 30 minutes.</li> </ul>
    */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p>The weekly time range during which system maintenance can occur, in Universal Coordinated Time (UTC). </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code></p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region, occurring on a random day of the week. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
    */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    /*
     <p>The weekly time range during which system maintenance can occur, in Universal Coordinated Time (UTC). </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code></p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region, occurring on a random day of the week. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
    */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /*
     <p>The weekly time range during which system maintenance can occur, in Universal Coordinated Time (UTC). </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code></p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region, occurring on a random day of the week. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
    */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /*
     <p>The weekly time range during which system maintenance can occur, in Universal Coordinated Time (UTC). </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code></p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region, occurring on a random day of the week. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
    */
    inline CreateDBClusterRequest&  WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /*
     <p>The weekly time range during which system maintenance can occur, in Universal Coordinated Time (UTC). </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code></p> <p>Default: A 30-minute window selected at random from an 8-hour block of time per region, occurring on a random day of the week. To see the time blocks available, see <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html"> Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
    */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CreateDBClusterRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;
    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;
    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws