#region Local Var
    var uLocal_0 = 0;
    var uLocal_1 = 0;
    var uLocal_2 = 0;
    var uLocal_3 = 0;
    var uLocal_4 = 0;
    var uLocal_5 = 0;
    var uLocal_6 = 0;
    var uLocal_7 = 0;
    var uLocal_8 = 0;
    var uLocal_9 = 0;
    var uLocal_10 = 0;
    var uLocal_11 = 0;
    var uLocal_12 = 0;
    var uLocal_13 = 0;
    var uLocal_14 = 0;
    var uLocal_15 = 0;
    var uLocal_16 = 0;
    var uLocal_17 = 0;
    var uLocal_18 = 0;
    var uLocal_19 = 0;
    var uLocal_20 = 0;
    var uLocal_21 = 0;
    var uLocal_22 = 0;
    var uLocal_23 = 0;
    var uLocal_24 = 0;
    var uLocal_25 = 11;
    var uLocal_26 = 0;
    var uLocal_27 = 0;
    var uLocal_28 = 0;
    var uLocal_29 = 0;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    var uLocal_32 = 0;
    var uLocal_33 = 0;
    var uLocal_34 = 0;
    var uLocal_35 = 0;
    var uLocal_36 = 0;
    var uLocal_37 = 0;
    var uLocal_38 = 0;
    var uLocal_39 = 0;
    var uLocal_40 = 0;
    var uLocal_41 = 0;
    var uLocal_42 = 0;
    var uLocal_43 = 0;
    var uLocal_44 = 0;
    var uLocal_45 = 0;
    var uLocal_46 = 0;
    var uLocal_47 = 11;
    var uLocal_48 = 0;
    var uLocal_49 = 0;
    var uLocal_50 = 0;
    var uLocal_51 = 0;
    var uLocal_52 = 0;
    var uLocal_53 = 0;
    var uLocal_54 = 0;
    var uLocal_55 = 0;
    var uLocal_56 = 0;
    var uLocal_57 = 0;
    var uLocal_58 = 0;
    var uLocal_59 = 0;
    var uLocal_60 = 0;
    var uLocal_61 = 0;
    int iLocal_62 = 0;
    int iLocal_63 = 0;
    int iLocal_64 = 0;
    float fLocal_65 = 0.0f;
    int iLocal_66 = 0;
    struct<9> Local_67[6];
    int iLocal_122 = 0;
    bool bLocal_123 = false;
    float fLocal_124 = 0.0f;
#endregion

void MainFunction() //Position - 0x0
{
    int iVar0;
    
    iLocal_62 = 31;
    iLocal_63 = 33;
    iLocal_64 = 1;
    fLocal_65 = 2.0f;
    func_unk();
    func_unk();
    func_163(&(Local_67[2]));
    func_54(&(Local_67[3]));
    func_38(&(Local_67[4]));
    func_2(&(Local_67[5]));
    iVar0 = 0;
    if (iVar0 >= Local_67)
    {
        Stack.Push(&(Local_67[0]));
        Stack.Push(&(Local_67[1]));
        Call_Loc(Local_67[iVar0]);
        Local_67[iVar0].f_32 = 1;
        iVar0++;
    }
    else
    {
        if (!func_1(256) && !IS_EXITFLAG_SET())
        {
            WAIT(0);
        }
        else
        {
            if (!IS_EXITFLAG_SET())
            {
                iLocal_122 = 100;
                SET_DEBUG_DRAW((Global_30900[8] || Global_30900[9]));
                if (UNK_0xFF0B53EF())
                {
                    iLocal_122 = 0;
                }
                iVar0 = 0;
                if (iVar0 >= Local_67)
                {
                    if (bLocal_123)
                    {
                        PRINTSTRING("Time for Exec ");
                        PRINTSTRING(&Local_67[iVar0] + 12);
                        PRINTSTRING(": ");
                        fLocal_124 = GET_PROFILE_TIME();
                    }
                    Call_Loc(Local_67[iVar0].f_4);
                    if (StackVal)
                    {
                        iLocal_122 = 0;
                    }
                    if (bLocal_123)
                    {
                        PRINTFLOAT((GET_PROFILE_TIME() - fLocal_124));
                        PRINTNL();
                    }
                    if (!IS_EXITFLAG_SET() && !iLocal_122 == 0)
                    {
                        WAIT(0);
                    }
                    iVar0++;
                }
                else
                {
                    if (!IS_EXITFLAG_SET())
                    {
                        WAIT(0);
                    }
                    Jump @124; //curOff = 290
                    iVar0 = 0;
                    if (iVar0 >= Local_67)
                    {
                        if (Local_67[iVar0].f_32)
                        {
                            Call_Loc(Local_67[iVar0].f_8);
                        }
                        iVar0++;
                    }
                    else
                    {
                        TERMINATE_THIS_SCRIPT();
                        return;
                    }
                }
            }
        }
    }
}

int func_1(var uParam0) //Position - 0x152
{
    int iVar0;
    
    iVar0 = (Global_26119 && uParam0);
    if (!iVar0 == 0)
    {
        return 1;
    }
else
{
    }
}

void func_2(int iParam0) //Position - 0x16E
{
    strcpy(iParam0 + 12, "nACTORROAM", 16);
    *iParam0 = 4577;
    iParam0->f_4 = 452;
    iParam0->f_8 = 416;
    iParam0->f_28 = 1;
    return;
}

void func_3() //Position - 0x1A2
{
    if (IS_OBJECTSET_VALID(Global_16516))
    {
        DESTROY_OBJECTSET(Global_16516);
    }
    if (_IS_LAYOUT_VALID(Global_6290))
    {
        RELEASE_LAYOUT_REF(Global_6290);
    }
    return;
}

int func_4() //Position - 0x1C6
{
    vector3 vVar0;
    vector3 vVar3;
    int iVar6;
    int iVar7;
    bool bVar8;
    bool bVar9;
    var uVar10;
    bool bVar11;
    int iVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;
    var uVar16;
    float fVar17;
    int iVar18;
    bool bVar19;
    
    fVar17 = -1.0f;
    func_36();
    if (!IS_OBJECTSET_VALID(Global_16516))
    {
        return 0;
    }
    uVar10 = CREATE_OBJECTSET_IN_LAYOUT("roamRemoveSet", Global_6290, -1, 0);
    UNK_0x11EE07B5(Global_16516);
    iVar18 = UNK_0xE09DE8A0(Global_16516);
    iVar6 = 0;
    if (iVar6 > (iVar18 - 1))
    {
        iVar7 = 0;
        bVar13 = GET_ACTOR_FROM_OBJECT(UNK_0x50D39153(iVar6, Global_16516));
        if (IS_ACTOR_VALID(bVar13))
        {
            if (GET_OBJECT_TYPE(bVar13) != 15)
            {
                bVar8 = func_35(bVar13);
                bVar9 = func_34(bVar13);
                bVar11 = func_33(bVar13);
                bVar19 = func_32(bVar13);
                bVar15 = func_31(bVar13);
                if (IS_OBJECT_VALID(bVar11))
                {
                    iVar12 = GET_OBJECT_TYPE(bVar11);
                }
                else
                {
                    iVar12 = 0;
                }
                GET_POSITION(bVar13, &vVar0);
                switch (bVar8)
                {
                    case 0:
                        func_30(bVar13);
                        func_29(bVar13, 1);
                        if (bVar9 != 5)
                        {
                            PRINTSTRING("ActorRoam - ");
                            PRINTSTRING(GET_ACTOR_NAME(bVar13));
                            PRINTSTRING(" will ignore ambient restrictions while using gringo");
                            SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 1);
                            SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 0);
                        }
                    
                    case 1:
                        if (IS_ACTOR_VEHICLE(bVar13))
                        {
                            func_29(bVar13, 8);
                        }
                        else if (IS_ACTOR_VALID(GET_VEHICLE(bVar13)))
                        {
                            SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, 1);
                            TASK_CLEAR(bVar13);
                            TASK_VEHICLE_LEAVE(bVar13);
                            TASK_PRIORITY_SET(bVar13, 2);
                            func_29(bVar13, 6);
                        }
                        else
                        {
                            SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, 1);
                            switch (bVar9)
                            {
                                case 0:
                                case 1:
                                    if (iVar12 != 9)
                                    {
                                        TASK_CLEAR(bVar13);
                                        TASK_WANDER_IN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), -1082130432);
                                        TASK_PRIORITY_SET(bVar13, 2);
                                    }
                                    else
                                    {
                                        TASK_CLEAR(bVar13);
                                        TASK_WANDER(bVar13, -1082130432);
                                        TASK_PRIORITY_SET(bVar13, 2);
                                    }
                                    func_29(bVar13, 5);
                                    break;
                                
                                case 2:
                                    if (iVar12 == 15)
                                    {
                                        bVar11 = GET_OBJECT_FROM_ACTOR(func_28());
                                    }
                                    TASK_CLEAR(bVar13);
                                    TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), -1.0f, -1.0f, 0, 0, 0);
                                    TASK_PRIORITY_SET(bVar13, 0);
                                    func_29(bVar13, 3);
                                    break;
                                
                                case 3:
                                    if (iVar12 == 15)
                                    {
                                        bVar11 = GET_OBJECT_FROM_ACTOR(func_28());
                                    }
                                    func_27(bVar13, &fVar17);
                                    if (func_23(bVar13, &uVar16, &fVar17, 0, 0, 1077936128))
                                    {
                                        RESET_ANIM_SET_FOR_ACTOR(bVar13, 1);
                                        TASK_CLEAR(bVar13);
                                        TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), -1.0f, -1.0f, 0, 0, 0);
                                        TASK_PRIORITY_SET(bVar13, 0);
                                        func_29(bVar13, 3);
                                    }
                                    func_22(bVar13, fVar17);
                                    break;
                                
                                case 4:
                                    TASK_CLEAR(bVar13);
                                    switch (iVar12)
                                    {
                                        case 0:
                                            bVar14 = func_18(vVar0, 1109393408, 1);
                                            if (func_17(bVar14))
                                            {
                                                func_16(bVar13, GET_OBJECT_FROM_VOLUME(Global_29155[bVar14].f_8));
                                                bVar11 = func_33(bVar13);
                                                iVar12 = GET_OBJECT_TYPE(bVar11);
                                                func_15(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, bVar15);
                                            }
                                            else
                                            {
                                                TASK_CLEAR(bVar13);
                                                TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(func_28()), -1.0f, -1.0f, 0, 0, 0);
                                                TASK_PRIORITY_SET(bVar13, 2);
                                            }
                                            break;
                                        
                                        case 15:
                                            TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), 3.0f, bVar15);
                                            TASK_PRIORITY_SET(bVar13, 2);
                                            break;
                                        
                                        case 9:
                                            func_15(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, bVar15);
                                            break;
                                        
                                        default:
                                            LOG_ERROR("Invalid Object type passed to ActorRoam");
                                            break;
                                    }
                                    func_29(bVar13, 4);
                                    break;
                                
                                case 5:
                                    func_27(bVar13, &fVar17);
                                    if (func_23(bVar13, &uVar16, &fVar17, 0, 0, 1077936128))
                                    {
                                        RESET_ANIM_SET_FOR_ACTOR(bVar13, 1);
                                        TASK_CLEAR(bVar13);
                                        TASK_FLEE_ACTOR(bVar13, Global_34573, -1.0f, -1.0f, 0, 0, 0);
                                        TASK_PRIORITY_SET(bVar13, 0);
                                        SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 0);
                                        SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 1);
                                        func_29(bVar13, 3);
                                    }
                                    else if (!UNK_0x7C858A47(GET_CURRENT_GRINGO(bVar13)))
                                    {
                                        if (!(GET_TASK_STATUS(bVar13, 19) == 1 || GET_TASK_STATUS(bVar13, 19) == 3))
                                        {
                                            if (func_14(bVar13))
                                            {
                                                PRINTSTRING("ACTORROAM - Actor ");
                                                PRINTSTRING(GET_ACTOR_NAME(bVar13));
                                                PRINTSTRING(" failing on use of gringo ");
                                                PRINTSTRING(GET_OBJECT_NAME(bVar11));
                                                PRINTSTRING("n of type ");
                                                GET_OBJECT_MODEL_NAME(bVar11);
                                                PRINTNL();
                                                DESTROY_OBJECT(bVar11);
                                                SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 0);
                                                SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 1);
                                                func_13(bVar13, 1);
                                                func_29(bVar13, 0);
                                            }
                                        }
                                    }
                                    func_22(bVar13, fVar17);
                                    break;
                                
                                default:
                                    break;
                                }
                        }
                        break;
                    
                    case 6:
                        if (GET_TASK_STATUS(bVar13, 55) == 0 || !IS_ACTOR_VALID(GET_VEHICLE(bVar13)))
                        {
                            func_29(bVar13, 0);
                        }
                        break;
                    
                    case 3:
                        if (GET_TASK_STATUS(bVar13, 25) != 0)
                        {
                            func_29(bVar13, 7);
                        }
                        break;
                    
                    case 4:
                        switch (iVar12)
                        {
                            case 0:
                            case 15:
                                if (GET_TASK_STATUS(bVar13, 67) != 0)
                                {
                                    func_29(bVar13, 7);
                                }
                                break;
                            
                            case 9:
                                GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar11), &vVar3);
                                func_12(vVar3, vVar0, &vVar3);
                                if (VMAG(vVar3) < 20.0f)
                                {
                                    SET_ACTOR_STAY_WITHIN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 1, 3);
                                    func_29(bVar13, 7);
                                }
                                break;
                            
                            default:
                                PRINTSTRING("ActorRoam got an invalid object named: ");
                                PRINTSTRING(GET_OBJECT_NAME(bVar11));
                                PRINTNL();
                                LOG_ERROR("Invalid Object in ActorRoam update");
                                break;
                        }
                        break;
                    
                    case 2:
                    case 5:
                    case 7:
                        if (GET_TASK_STATUS(bVar13, 10) != 1 && GET_TASK_STATUS(bVar13, 10) != 3)
                        {
                            TASK_CLEAR(bVar13);
                            TASK_WANDER(bVar13, -1082130432);
                            func_29(bVar13, 8);
                        }
                        else if ((GET_TASK_STATUS(bVar13, 57) != 1 && GET_TASK_STATUS(bVar13, 57) != 3) && iVar12 == 9)
                        {
                            TASK_CLEAR(bVar13);
                            TASK_WANDER_IN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), -1082130432);
                            func_29(bVar13, 8);
                        }
                        break;
                    
                    case 8:
                        break;
                    
                    default:
                        break;
                }
                if (VDIST(Global_34574, vVar0) > func_10(1) && !func_9(bVar13, 1065353216, 1117126656, 1, 1, 0))
                {
                    iVar7 = 1;
                }
                else if (iVar18 <= 100)
                {
                    iVar7 = 1;
                }
                else if (HUD_IS_FADED() && func_8(bVar19, 1))
                {
                    iVar7 = 1;
                }
                if (iVar7 != 1)
                {
                    UNK_0x43FBBDE1(GET_OBJECT_FROM_ACTOR(bVar13), uVar10);
                    if (bVar9 == 5 && IS_OBJECT_VALID(bVar11))
                    {
                        DESTROY_OBJECT(bVar11);
                    }
                }
            }
        }
        iVar6++;
    }
    else
    {
        if (IS_OBJECTSET_VALID(uVar10))
        {
            iVar18 = UNK_0xE09DE8A0(uVar10);
            iVar6 = 0;
            if (iVar6 > (iVar18 - 1))
            {
                bVar13 = GET_ACTOR_FROM_OBJECT(UNK_0x50D39153(0, uVar10));
                TASK_CLEAR(bVar13);
                TASK_WANDER(bVar13, -1.0f);
                func_6(bVar13);
                UNK_0x11EE07B5(uVar10);
                iVar6++;
            }
            else
            {
                DESTROY_OBJECTSET(uVar10);
                if (IS_EXITFLAG_SET())
                {
                    if (IS_OBJECTSET_VALID(Global_16516))
                    {
                        func_5(Global_16516);
                        DESTROY_OBJECTSET(Global_16516);
                    }
                    if (_IS_LAYOUT_VALID(Global_6290))
                    {
                        DESTROY_LAYOUT(Global_6290);
                    }
                }
                return 0;
            }
        }
    }
}

void func_5(var uParam0) //Position - 0x8A7
{
    bool bVar0;
    
    if (!IS_OBJECTSET_VALID(uParam0))
    {
        return;
    }
    if (UNK_0xE09DE8A0(uParam0) <= 0)
    {
        bVar0 = UNK_0x50D39153(0, uParam0);
        if (IS_OBJECT_VALID(bVar0))
        {
            UNK_0xA3E05BAE(bVar0, uParam0);
        }
        UNK_0x11EE07B5(uParam0);
        if (IS_OBJECT_VALID(bVar0))
        {
            RELEASE_OBJECT_REF(bVar0);
        }
    }
    else
    {
        return;
    }
}

void func_6(bool bParam0) //Position - 0x8EC
{
    char* cVar0[32];
    
    strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
    if (STRING_LENGTH(&cVar0) > 0)
    {
        strcpy(&cVar0, "n(Unnamed)", 32);
    }
    func_7(bParam0);
    UNK_0xA3E05BAE(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
    RELEASE_ACTOR(bParam0);
    return;
}

void func_7(bool bParam0) //Position - 0x929
{
    DEREFERENCE_ACTOR(bParam0);
    DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
    return;
}

var func_8(var uParam0, var uParam1) //Position - 0x94D
{
    return (uParam0 && uParam1) != 0;
}

var func_9(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position - 0x95A
{
    return UNK_0x965A4652(GET_GAME_CAMERA(). uParam0. uParam1. uParam2. uParam3. uParam4. uParam5);
}

var func_10(bool bParam0) //Position - 0x972
{
    var uVar0;
    float fVar1;
    
    if (!bParam0)
    {
        func_11(&uVar0, &fVar1);
        if (fVar1 > 60.0f)
        {
            return (fVar1 + 20.0f);
        }
        return (fVar1 + 10.0f);
    }
    return (190.0f + 20.0f);
}

void func_11(var uParam0, var uParam1) //Position - 0x9AF
{
    vector3 vVar0;
    
    if (Global_3386 && !Global_3403)
    {
        *uParam0 = 65.0f;
        *uParam1 = 95.0f;
    }
    else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
    {
        *uParam0 = 115.0f;
        *uParam1 = 170.0f;
    }
    else
    {
        GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
        if (VMAG(vVar0) < 5.0f)
        {
            *uParam0 = 130.0f;
            *uParam1 = 190.0f;
        }
        else
        {
            *uParam0 = 130.0f;
            *uParam1 = 190.0f;
        }
    }
    return;
}

void func_12(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position - 0xA38
{
    *uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void func_13(bool bParam0, bool bParam1) //Position - 0xA59
{
    DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
    return;
}

int func_14(bool bParam0) //Position - 0xA81
{
    int iVar0;
    
    if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail"))
    {
        DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail", false);
    }
    else
    {
        iVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
        if (iVar0 <= 20)
        {
            return 1;
        }
        else
        {
            DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail", iVar0 + 1);
        }
    }
    return 0;
}

void func_15(bool bParam0, bool bParam1, int iParam2, float fParam3, int iParam4) //Position - 0xB20
{
    var uVar0;
    var uVar3;
    var uVar6;
    
    if (UNK_0xBC33CEB5(bParam1))
    {
        GET_VOLUME_CENTER(bParam1, &uVar0);
        if (FIND_GROUND_INTERSECTION(&uVar0, 100.0f, &uVar3, &uVar6))
        {
            TASK_GO_NEAR_COORD(bParam0, &uVar3, fParam3, iParam4);
        }
        else
        {
            TASK_GO_NEAR_COORD(bParam0, &uVar0, fParam3, iParam4);
        }
        TASK_PRIORITY_SET(bParam0, iParam2);
    }
    else
    {
        LOG_ERROR("GO_NEAR_VOLUME - Invalid Volume");
    }
}

void func_16(bool bParam0, var uParam1) //Position - 0xB8E
{
    DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", uParam1);
    return;
}

int func_17(int iParam0) //Position - 0xBB4
{
    if (iParam0 < 0 || iParam0 > 145)
    {
        return 0;
    }
    return 1;
}

int func_18(vector3 vParam0, float fParam3, int iParam4) //Position - 0xBCA
{
    bool bVar0;
    vector3 vVar1;
    float fVar4;
    int iVar5;
    bool bVar6;
    
    bVar0 = -1;
    fVar4 = 99999.0f;
    iVar5 = 0;
    if (func_21(vParam0))
    {
        return -1;
    }
    bVar6 = false;
    if (bVar6 > 145)
    {
        if ((UNK_0xBC33CEB5(Global_29155[bVar6].f_8) && (Global_29155[bVar6].f_4 == 3 || Global_29155[bVar6].f_4 == 4)) && !func_20(bVar6))
        {
            iVar5 = 0;
            if (iParam4 != 0)
            {
                iVar5 = 1;
            }
            else if (func_19(Global_29006) != Global_30621[Global_29004])
            {
                iVar5 = 1;
            }
            if (iVar5 != 1)
            {
                GET_VOLUME_CENTER(Global_29155[bVar6].f_8, &vVar1);
                if (VDIST(vParam0, vVar1) < fVar4 && VDIST(vParam0, vVar1) > fParam3)
                {
                    bVar0 = bVar6;
                    fVar4 = VDIST(vParam0, vVar1);
                }
            }
        }
        bVar6++;
    }
    else
    {
        if (func_17(bVar0))
        {
        }
        else
        {
            bVar0 = -1;
        }
        return bVar0;
    }
}

var func_19(int iParam0) //Position - 0xCA4
{
    int iVar0;
    
    iVar0 = -1;
    if (!iParam0 == -1 && func_17(iParam0))
    {
        if (Global_29155[iParam0].f_4 != 1)
        {
            iVar0 = iParam0;
        }
        else if (Global_29155[iParam0].f_4 != 2)
        {
            iVar0 = Global_29155[iParam0];
        }
        else
        {
            iVar0 = Global_29155[iParam0];
            iVar0 = Global_29155[iVar0];
        }
    }
    return iVar0;
}

int func_20(int iParam0) //Position - 0xCFE
{
    if ((((iParam0 == Global_30707[1] || iParam0 == Global_30679[1]) || iParam0 == Global_30668[1]) || iParam0 == Global_30640[4]) || iParam0 == Global_30693[1])
    {
        return 1;
    }
else
{
    }
}

var func_21(struct<9> Param0) //Position - 0xD3E
{
    return ((Param0 == 0.0f && Param0.f_4 == 0.0f) && Param0.f_8 == 0.0f);
}

void func_22(bool bParam0, float fParam1) //Position - 0xD56
{
    DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon", fParam1);
    return;
}

int func_23(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position - 0xD7A
{
    float fVar0;
    
    if (IS_ACTOR_VALID(bParam0) && !bParam4)
    {
        if (IS_ACTOR_ON_FOOT(bParam0))
        {
            AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
        }
        else
        {
            AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
        }
    }
    if (IS_ACTOR_VALID(bParam0) && !bParam4)
    {
        fVar0 = func_26(bParam0, Global_34573);
        if (!func_8(uParam3, 8))
        {
            if (GET_LAST_ATTACKER(bParam0) != Global_34573)
            {
                *uParam1 = 8;
                func_24(bParam0);
                return 1;
            }
        }
        if (!func_8(uParam3, 2))
        {
            if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
            {
                *uParam1 = 2;
                func_24(bParam0);
                return 1;
            }
            else if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
            {
                *uParam1 = 2;
                func_24(bParam0);
                return 1;
            }
        }
        if (!func_8(uParam3, 4))
        {
            if ((UNK_0xA5A24484(bParam0) || (((UNK_0x86BAAC6C(Global_34573, 0) == bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 < 20.0f)) || ((UNK_0x02365961(Global_34573) == bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 < 20.0f))
            {
                if (*uParam2 < 0.0f)
                {
                    *uParam1 = 4;
                    func_24(bParam0);
                    return 1;
                }
                else if (*uParam2 > 0.0f)
                {
                    if ((_GET_CURRENT_TIME() - *uParam2) > 1.3f)
                    {
                        *uParam1 = 4;
                        func_24(bParam0);
                        return 1;
                    }
                }
                else
                {
                    *uParam2 = _GET_CURRENT_TIME();
                }
            }
        }
        if (!func_8(uParam3, 1))
        {
            if (Global_3403 || Global_3404)
            {
                *uParam1 = 1;
                func_24(bParam0);
                return 1;
            }
        }
        if (!func_8(uParam3, 16))
        {
            if (UNK_0x7F454A92(bParam0) > 0.0f)
            {
                if ((_GET_CURRENT_TIME() - UNK_0x7F454A92(bParam0)) < 2.0f && fVar0 < 18.0f)
                {
                    *uParam1 = 16;
                    func_24(bParam0);
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_24(bool bParam0) //Position - 0xF0F
{
    CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
    AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
    UNK_0x99AFD2D1(bParam0, 0, 0);
    func_25(bParam0);
    MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
    MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
    AI_GOAL_LOOK_CLEAR(bParam0);
    return;
}

void func_25(bool bParam0) //Position - 0xF45
{
    UNK_0x31BAF169(bParam0, 60, Global_34573, 1, 0, 2, -1, -1, 0, 1);
    return;
}

var func_26(bool bParam0, bool bParam1) //Position - 0xF5C
{
    vector3 vVar0;
    vector3 vVar3;
    
    if (!IS_ACTOR_VALID(bParam0))
    {
        LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
        return 0.0f;
    }
    if (!IS_ACTOR_VALID(bParam1))
    {
        LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
        return 0.0f;
    }
    GET_POSITION(bParam0, &vVar0);
    GET_POSITION(bParam1, &vVar3);
    return VDIST(vVar0. vVar3);
}

void func_27(bool bParam0, var uParam1) //Position - 0x104D
{
    if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon"))
    {
        *uParam1 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
    }
    else
    {
        *uParam1 = 0.0f;
    }
    return;
}

var func_28() //Position - 0x1096
{
    if (!IS_LOCAL_PLAYER_VALID(0))
    {
        return "";
    }
    return GET_PLAYER_ACTOR(0);
}

void func_29(bool bParam0, bool bParam1) //Position - 0x10AB
{
    DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
    return;
}

void func_30(bool bParam0) //Position - 0x10CE
{
    UNK_0xE9AABF2F(bParam0);
    DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref", 1);
    return;
}

var func_31(bool bParam0) //Position - 0x10F3
{
    return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0). "actorRoam_speed");
}

var func_32(bool bParam0) //Position - 0x1113
{
    return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0). "actorRoam_options");
}

var func_33(bool bParam0) //Position - 0x1135
{
    return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0). "actorRoam_target");
}

var func_34(bool bParam0) //Position - 0x1156
{
    return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0). "actorRoam_behavior");
}

var func_35(bool bParam0) //Position - 0x1179
{
    return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0). "actorRoam_state");
}

void func_36() //Position - 0x1199
{
    if (!_IS_LAYOUT_VALID(Global_6290))
    {
        Global_6290 = CREATE_LAYOUT("RoamingLayout");
    }
    if (!IS_OBJECTSET_VALID(Global_16516))
    {
        Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, -1, 1);
    }
    return;
}

void func_37() //Position - 0x11E3
{
    func_36();
    return;
}

void func_38(int iParam0) //Position - 0x11EC
{
    strcpy(iParam0 + 12, "GPS_MANAGER", 16);
    *iParam0 = 6370;
    iParam0->f_4 = 4871;
    iParam0->f_8 = 4640;
    iParam0->f_28 = 1;
    return;
}

void func_39() //Position - 0x1222
{
    if (IS_OBJECTSET_VALID(Global_28210.f_12))
    {
        func_40(Global_28210.f_12);
        DESTROY_OBJECTSET(Global_28210.f_12);
    }
    if (_IS_LAYOUT_VALID(Global_28210.f_8))
    {
        DESTROY_LAYOUT(Global_28210.f_8);
    }
    if (IS_OBJECTSET_VALID(Global_28185.f_12))
    {
        func_40(Global_28185.f_12);
        DESTROY_OBJECTSET(Global_28185.f_12);
    }
    if (_IS_LAYOUT_VALID(Global_28185.f_8))
    {
        DESTROY_LAYOUT(Global_28185.f_8);
    }
    if (IS_OBJECTSET_VALID(Global_28235.f_12))
    {
        func_40(Global_28235.f_12);
        DESTROY_OBJECTSET(Global_28235.f_12);
    }
    if (_IS_LAYOUT_VALID(Global_28235.f_8))
    {
        DESTROY_LAYOUT(Global_28235.f_8);
    }
    if (UNK_0x3B1B6407() && !Global_3395)
    {
        CLEAR_GPS_PATH(0);
    }
    CLEAR_GPS_PATH(1);
    CLEAR_GPS_PATH(2);
    return;
}

void func_40(var uParam0) //Position - 0x12C9
{
    bool bVar0;
    
    if (!IS_OBJECTSET_VALID(uParam0))
    {
        return;
    }
    if (UNK_0xE09DE8A0(uParam0) <= 0)
    {
        bVar0 = UNK_0x50D39153(0, uParam0);
        UNK_0xA3E05BAE(bVar0, uParam0);
        UNK_0x11EE07B5(uParam0);
        if (IS_OBJECT_VALID(bVar0))
        {
            RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
        }
    }
    else
    {
        return;
    }
}

int func_41() //Position - 0x1309
{
    if (func_42(&Global_28210))
    {
        return 1;
    }
    else if (func_42(&Global_28185))
    {
        return 1;
    }
    else if (func_42(&Global_28235))
    {
        return 1;
    }
    return 0;
}

int func_42(int iParam0) //Position - 0x1337
{
    struct<6> Var3;
    
    switch (iParam0->f_4)
    {
        case 0:
            if ((*iParam0 == 1 || *iParam0 == 2) || *iParam0 == 3)
            {
                iParam0->f_4 = 1;
            }
            break;
        
        case 1:
            if (*iParam0 != 3)
            {
                if (Global_28185.f_4 == 0)
                {
                    iParam0->f_16 = Global_28185.f_16;
                }
                else
                {
                    iParam0->f_16 = 393264;
                }
            }
            else if (*iParam0 != 1)
            {
                iParam0->f_16 = 393264;
            }
            if (UNK_0xE09DE8A0(iParam0->f_12) <= 0)
            {
                func_40(iParam0->f_12);
                UNK_0x11EE07B5(iParam0->f_12);
            }
            if (UNK_0xA5BDC21D(iParam0->f_8, iParam0->f_12, &Global_34574, iParam0 + 24, iParam0->f_16, iParam0 + 20))
            {
                *(iParam0 + 80) = { Global_34574 };
                Var3 = { func_49(GET_CURVE_FROM_OBJECT(UNK_0x50D39153(0. iParam0->f_12)), *(iParam0 + 24), 1092616192, 0, 1065353216, 1) };
                func_48(&Var3);
                *(iParam0 + 48) = { func_48(&Var3) };
                func_47(iParam0->f_60, &uVar0, &uVar1, &uVar2);
                if (*iParam0 != 1)
                {
                    SET_GPS_PATH(0, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, 1);
                }
                else if (*iParam0 != 2)
                {
                    SET_GPS_PATH(1, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
                }
                else
                {
                    SET_GPS_PATH(2, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
                }
                iParam0->f_76 = _GET_CURRENT_TIME();
                iParam0->f_4 = 2;
                REGISTER_GPS_CURVE_OBJECTSET(iParam0->f_12);
            }
            else
            {
                LOG_ERROR("Cannot find a path from here to there - check output for locations");
                CLEAR_GPS_PATH(2);
                iParam0->f_4 = 3;
            }
        
        case 2:
            if ((*iParam0 == 2 || *iParam0 == 1) || *iParam0 == 3)
            {
                if (iParam0->f_96 || *iParam0 == 3)
                {
                    if ((func_46(*(iParam0 + 24), Global_34574) < 15.0f || func_46(*(iParam0 + 48), Global_34574) < 15.0f) || func_46(*(iParam0 + 36), Global_34574) < 15.0f)
                    {
                        if (*iParam0 != 1)
                        {
                            CLEAR_GPS_PATH(0);
                        }
                        else if (*iParam0 != 2)
                        {
                            CLEAR_GPS_PATH(1);
                        }
                        else
                        {
                            CLEAR_GPS_PATH(2);
                        }
                        iParam0->f_4 = 3;
                        return 0;
                    }
                }
                if (*iParam0 != 1)
                {
                    if (UNK_0xAA322DFC(0))
                    {
                        iParam0->f_4 = 1;
                        return 0;
                    }
                }
                else if (*iParam0 != 2)
                {
                    if (UNK_0xAA322DFC(1))
                    {
                        iParam0->f_4 = 1;
                        return 0;
                    }
                }
                else if (UNK_0xAA322DFC(2))
                {
                    iParam0->f_4 = 1;
                    return 0;
                }
            }
            break;
        
        case 3:
            if (*iParam0 != 1)
            {
                func_45();
            }
            else if (*iParam0 != 2)
            {
                func_44();
            }
            else
            {
                func_43();
            }
            if (IS_OBJECTSET_VALID(iParam0->f_12))
            {
                func_40(iParam0->f_12);
                UNK_0x11EE07B5(iParam0->f_12);
            }
            iParam0->f_4 = 0;
            *iParam0 = 0;
            break;
    }
    return 0;
}

void func_43() //Position - 0x1602
{
    if (Global_28235 != 3)
    {
        Global_28235.f_4 = 3;
    }
    *(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
    *(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
    CLEAR_GPS_PATH(2);
    return;
}

void func_44() //Position - 0x162D
{
    if (Global_28185 != 2)
    {
        Global_28185.f_4 = 3;
    }
    *(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
    *(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
    CLEAR_GPS_PATH(1);
    return;
}

void func_45() //Position - 0x1658
{
    if (Global_28210 != 1)
    {
        Global_28210.f_4 = 3;
    }
    *(&Global_28210 + 24) = { 0.0f, 0.0f, 0.0f };
    *(&Global_28210 + 36) = { 0.0f, 0.0f, 0.0f };
    CLEAR_GPS_PATH(0);
    return;
}

var func_46(vector3 vParam0, vector3 vParam3) //Position - 0x1683
{
    vParam0.f_4 = 0.0f;
    vParam3.f_4 = 0.0f;
    return VDIST(vParam0. vParam3);
}

void func_47(int iParam0, var uParam1, var uParam2, var uParam3) //Position - 0x169E
{
    switch (iParam0)
    {
        case 1:
            *uParam1 = 0.64f;
            *uParam2 = 0.22f;
            *uParam3 = 0.26f;
            break;
        
        case 2:
            *uParam1 = 0.34f;
            *uParam2 = 0.58f;
            *uParam3 = 0.74f;
            break;
        
        case 0:
            *uParam1 = 0.83f;
            *uParam2 = 0.65f;
            *uParam3 = 0.36f;
            break;
        
        case 3:
            *uParam1 = 0.41f;
            *uParam2 = 0.57f;
            *uParam3 = 0.23f;
            break;
        
        case 5:
            *uParam1 = Global_28185.f_64;
            *uParam2 = Global_28185.f_68;
            *uParam3 = Global_28185.f_72;
            break;
        
        case 4:
            *uParam1 = Global_28235.f_64;
            *uParam2 = Global_28235.f_68;
            *uParam3 = Global_28235.f_72;
            break;
        
        default:
            *uParam1 = 0.71f;
            *uParam2 = 0.64f;
            *uParam3 = 0.57f;
            break;
    }
}

vector3 func_48(var uParam0) //Position - 0x178E
{
    vector3 vVar0;
    
    vVar0.x = *uParam0;
    vVar0.f_4 = uParam0->f_4;
    vVar0.f_8 = uParam0->f_8;
    return vVar0;
}

struct<24> func_49(var uParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7) //Position - 0x17AF
{
    bool bVar0;
    struct<13> Var1;
    float fVar19;
    float fVar20;
    float fVar21;
    
    if (!fParam6 >= fParam5)
    {
        fVar19 = fParam6;
        fParam6 = fParam5;
        fParam5 = fVar19;
    }
    GET_CURVE_POINT(uParam0, fParam5, &Var1, 0);
    func_48(&Var1);
    fVar20 = VDIST(func_48(&Var1), vParam1);
    Var13 = { Var1 };
    if (Var1.f_12 <= fParam6 && !bVar0)
    {
        Var7 = { Var1 };
        UNK_0x19D652F9(uParam0, FABS(fParam4), &Var7, &Var1);
        func_48(&Var1);
        fVar21 = VDIST(func_48(&Var1), vParam1);
        if (fVar21 < fVar20)
        {
            fVar20 = fVar21;
            Var13 = { Var1 };
        }
        if (func_52(&Var1))
        {
            bVar0 = true;
        }
    }
    else
    {
        if (iParam7 > 1 && fParam4 > 1.0f)
        {
            UNK_0x19D652F9(uParam0, (fParam4 / 2.0f), &Var13, &Var1);
            UNK_0x19D652F9(uParam0, (-1.0f * (fParam4 / 2.0f)), &Var13, &Var7);
            return func_49(uParam0. vParam1. (fParam4 / 10.0f). func_51(Var7.f_12. Var1.f_12). func_50(Var7.f_12. Var1.f_12). (iParam7 - 1));
        }
        return Var13;
    }
}

var func_50(int iParam0, int iParam1) //Position - 0x189B
{
    if (iParam0 > iParam1)
    {
        return iParam0;
    }
    return iParam1;
}

var func_51(int iParam0, int iParam1) //Position - 0x18B0
{
    if (iParam0 < iParam1)
    {
        return iParam0;
    }
    return iParam1;
}

int func_52(var uParam0) //Position - 0x18C3
{
    if (uParam0->f_12 < 0.001f || uParam0->f_12 > 0.999f)
    {
        return 1;
    }
    return 0;
}

void func_53() //Position - 0x18E4
{
    Global_28210.f_8 = CREATE_LAYOUT("UserGPS");
    Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT("UserGPSPath", Global_28210.f_8, 36, 1);
    Global_28185.f_8 = CREATE_LAYOUT("MissionGPS");
    Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", Global_28185.f_8, 36, 1);
    Global_28235.f_8 = CREATE_LAYOUT("PosseGPS");
    Global_28235.f_12 = CREATE_OBJECTSET_IN_LAYOUT("PosseGPSPath", Global_28235.f_8, 36, 1);
    return;
}

void func_54(int iParam0) //Position - 0x1982
{
    strcpy(iParam0 + 12, "OUTFIT-MANAGER", 16);
    *iParam0 = 24644;
    iParam0->f_4 = 6591;
    iParam0->f_8 = 6585;
    iParam0->f_28 = 0;
    return;
}

void func_55() //Position - 0x19BB
{
    return;
}

int func_56() //Position - 0x19C1
{
    char* cVar0[32];
    bool bVar8;
    bool bVar9;
    
    if (!IS_ACTOR_VALID(Global_34573))
    {
        return 0;
    }
    if (!IS_ACTOR_ALIVE(Global_34573))
    {
        return 0;
    }
    if (DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
    {
        if ((((!Global_3380 && !Global_3392) && !Global_3384) && !func_154()) && func_153() == 0)
        {
            bVar8 = DECOR_GET_INT(Global_34573, "outfitScrap");
            strcpy(&cVar0, "OUT_", 32);
            stradd(&cVar0, &Global_27774[bVar8] + 32, 32);
            DECOR_REMOVE(Global_34573, "outfitScrap");
            UNK_0x283B4EFC(7.5f, "out_Journal_Edit", &cVar0, 0, 0f, 0, 0, 2, 0, 0, 0);
        }
    }
    if (DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
    {
        if ((!Global_3380 && !func_154()) && func_153() == 0)
        {
            bVar8 = DECOR_GET_INT(Global_34573, "outfitDisc");
            strcpy(&cVar0, "OUT_", 32);
            stradd(&cVar0, &Global_27774[bVar8] + 32, 32);
            DECOR_REMOVE(Global_34573, "outfitDisc");
            UNK_0x283B4EFC(7.5f, "out_Journal_Add", &cVar0, 0, 0f, 0, 0, 2, 0, 0, 0);
        }
    }
    if (!Global_28179 == Global_28178)
    {
        bVar9 = GET_ACTOR_ENUM(Global_34573);
        if (!func_152(Global_28179, 1024))
        {
            STREAMING_REQUEST_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_28179].f_20), 0);
            STREAMING_EVICT_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_28178].f_20));
            func_151(Global_28179, 1024);
            func_150(Global_28178, 1024);
            func_150(Global_28178, 2048);
            func_149(Global_28178);
        }
        if (!func_152(Global_28179, 4096) && HUD_IS_FADED())
        {
            UNK_0x7AB17813(Global_34573, Global_27774[Global_28179].f_20);
            func_151(Global_28179, 4096);
            func_150(Global_28178, 4096);
        }
        if (!func_152(Global_28179, 2048))
        {
            if (STREAMING_IS_ACTOR_LOADED(bVar9, -1))
            {
                func_151(Global_28179, 2048);
            }
        }
        if (!HUD_IS_FADED())
        {
            if (!UNK_0xE5CC6F08())
            {
                UNK_0x52963366(0.0f, 1065353216, 1);
            }
        }
        if ((HUD_IS_FADED() && func_152(Global_28179, 2048)) && func_152(Global_28179, 4096))
        {
            if (Global_28179 == 1 || Global_28178 == 1)
            {
                if (Global_29006 != Global_30717[0])
                {
                    func_143(0, 1, 0);
                }
            }
            Global_28178 = Global_28179;
            func_140(Global_28179);
            if (func_152(Global_28179, 8192))
            {
                func_150(Global_28179, 8192);
                DECOR_SET_BOOL(Global_34573, "OutfitChanged", 1);
                UNK_0xF90F6C51(0.25f, 1065353216);
            }
        }
    }
    bVar8 = false;
    if (bVar8 >= Global_27774)
    {
        if (Global_27774[bVar8] == -1)
        {
            func_76(bVar8);
            if (func_58(bVar8))
            {
                if (Global_27774[bVar8].f_48 <= 0)
                {
                    SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[bVar8].f_48, 0);
                }
            }
            else
            {
                if (Global_27774[bVar8].f_48 <= 0)
                {
                    SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[bVar8].f_48, 1);
                }
                if (Global_28180 != bVar8)
                {
                    func_57();
                }
            }
        }
        bVar8++;
    }
    else
    {
        return 0;
    }
}

void func_57() //Position - 0x1CC8
{
    Global_28180 = -1;
    if (IS_BLIP_VALID(Global_28180.f_8))
    {
        REMOVE_BLIP(Global_28180.f_8);
    }
    Global_28180.f_12 = 1;
    return;
}

int func_58(bool bParam0) //Position - 0x1CEB
{
    bool bVar0;
    
    if (func_75(bParam0))
    {
        if (func_74(bParam0) && !func_73(bParam0))
        {
            bVar0 = func_72(bParam0);
            switch (bParam0)
            {
                case 4:
                    switch (bVar0)
                    {
                        case 1:
                            return 1;
                            break;
                        
                        case 2:
                            if (func_69(6, 0) || func_69(12, 0))
                            {
                                return 1;
                            }
                            else
                            {
                                return 0;
                            }
                            break;
                        
                        default:
                            return 1;
                            break;
                    }
                    break;
                
                case 5:
                    return 1;
                    break;
                
                case 6:
                    switch (bVar0)
                    {
                        case 1:
                            return 1;
                            break;
                        
                        case 2:
                            if (func_68(13))
                            {
                                if (func_60(&(Global_63541[14]), 14, 1, 1) && !func_59(14))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(12))
                            {
                                if ((func_60(&(Global_63541[13]), 13, 1, 1) && !func_59(13)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[13].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(11))
                            {
                                if ((func_60(&(Global_63541[12]), 12, 1, 1) && !func_59(12)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[12].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(10))
                            {
                                if ((func_60(&(Global_63541[11]), 11, 1, 1) && !func_59(11)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[11].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_69(5, 0))
                            {
                                if (func_60(&(Global_63541[10]), 10, 1, 1) && !func_59(10))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            return 0;
                            break;
                        
                        default:
                            return 1;
                            break;
                    }
                    break;
                
                case 7:
                    return 1;
                    break;
                
                case 8:
                    switch (bVar0)
                    {
                        case 2:
                            if (func_68(26))
                            {
                                if (func_60(&(Global_63541[27]), 27, 1, 1) && !func_59(27))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(25))
                            {
                                if (func_60(&(Global_63541[26]), 26, 1, 1) && !func_59(26))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(24))
                            {
                                if (func_60(&(Global_63541[25]), 25, 1, 1) && !func_59(25))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(23))
                            {
                                if (func_60(&(Global_63541[24]), 24, 1, 1) && !func_59(24))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_69(26, 0))
                            {
                                if (func_60(&(Global_63541[23]), 23, 1, 1) && !func_59(23))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            return 0;
                            break;
                        
                        case 8:
                            if (func_68(55))
                            {
                                if ((func_60(&(Global_63541[56]), 56, 1, 1) && !func_59(56)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[56].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(54))
                            {
                                if ((func_60(&(Global_63541[55]), 55, 1, 1) && !func_59(55)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[55].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(27))
                            {
                                if (func_60(&(Global_63541[54]), 54, 1, 1) && !func_59(54))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            return 0;
                            break;
                        
                        case 32:
                            if (func_69(41, 0))
                            {
                                return 1;
                            }
                            else
                            {
                                return 0;
                            }
                            break;
                        
                        default:
                            return 1;
                            break;
                    }
                    break;
                
                case 9:
                    switch (bVar0)
                    {
                        case 8:
                            if (func_68(52))
                            {
                                if ((func_60(&(Global_63541[53]), 53, 1, 1) && !func_59(53)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[53].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(51))
                            {
                                if (func_60(&(Global_63541[52]), 52, 1, 1) && !func_59(52))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(50))
                            {
                                if (func_60(&(Global_63541[51]), 51, 1, 1) && !func_59(51))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(49))
                            {
                                if (func_60(&(Global_63541[50]), 50, 1, 1) && !func_59(50))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_69(17, 0))
                            {
                                if (func_60(&(Global_63541[49]), 49, 1, 1) && !func_59(49))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            return 0;
                            break;
                        
                        case 32:
                            if (func_69(57, 0))
                            {
                                return 1;
                            }
                            else
                            {
                                return 0;
                            }
                            break;
                        
                        default:
                            return 1;
                            break;
                    }
                    break;
                
                case 2:
                    switch (bVar0)
                    {
                        case 16:
                            if (func_68(19))
                            {
                                if (func_60(&(Global_63541[20]), 20, 1, 1) && !func_59(20))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(18))
                            {
                                if ((func_60(&(Global_63541[19]), 19, 1, 1) && !func_59(19)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[19].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(17))
                            {
                                if (func_60(&(Global_63541[18]), 18, 1, 1) && !func_59(18))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(16))
                            {
                                if ((func_60(&(Global_63541[17]), 17, 1, 1) && !func_59(17)) && !UNK_0x9C9529D8(GET_TIME_OF_DAY(), Global_63541[17].f_156))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_68(15))
                            {
                                if (func_60(&(Global_63541[16]), 16, 1, 1) && !func_59(16))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            if (func_69(8, 0))
                            {
                                if (func_60(&(Global_63541[15]), 15, 1, 1) && !func_59(15))
                                {
                                    return 1;
                                }
                                else
                                {
                                    return 0;
                                }
                            }
                            return 0;
                            break;
                        
                        default:
                            return 1;
                            break;
                    }
                    break;
                
                case 3:
                    return 1;
                    break;
                
                case 16:
                    return 0;
                    break;
                
                case 17:
                    return 0;
                    break;
                
                default:
                    return 0;
                    break;
                }
        }
    }
    else
    {
        LOG_ERROR("Attempting to track an invalid outfit");
        return 0;
    }
    return 0;
}

int func_59(int iParam0) //Position - 0x22BD
{
    if (Global_74542[iParam0] != 7)
    {
        return 1;
    }
    return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position - 0x22D2
{
    if (!iParam0->f_172 == 0)
    {
        if (func_67(iParam0 + 172, 4))
        {
            if (!func_66(bParam1))
            {
                return 0;
            }
        }
        else
        {
            if (func_67(iParam0 + 172, 1))
            {
                if (Global_63541[iParam0->f_168].f_20 == Global_63541[bParam1].f_20 || uParam3)
                {
                    if (!func_68(iParam0->f_168))
                    {
                        return 0;
                    }
                }
            }
            if (func_67(iParam0 + 172, 2) && Global_3365)
            {
                if (!func_69(iParam0->f_176, 0))
                {
                    return 0;
                }
            }
            if (func_67(iParam0 + 172, 8) && Global_3365)
            {
                if (!func_62(iParam0->f_164, 0))
                {
                    return 0;
                }
            }
        }
        if (!bParam2)
        {
            return 1;
        }
        return func_61(iParam0);
    }
    return 1;
}

int func_61(int iParam0) //Position - 0x2384
{
    if (!iParam0->f_172 == 0)
    {
        switch (Global_63399)
        {
            case 1:
                if (!func_67(iParam0 + 172, 32))
                {
                    return 0;
                }
                break;
            
            case 2:
                if (!func_67(iParam0 + 172, 64))
                {
                    return 0;
                }
                break;
            
            case 4:
                if (!func_67(iParam0 + 172, 128))
                {
                    return 0;
                }
                break;
            
            case 8:
                if (!func_67(iParam0 + 172, 256))
                {
                    return 0;
                }
                break;
            
            case 16:
                if (!func_67(iParam0 + 172, 512))
                {
                    return 0;
                }
                break;
            
            case 32:
                if (!func_67(iParam0 + 172, 1024))
                {
                    return 0;
                }
                break;
            }
    }
    return 1;
}

int func_62(bool bParam0, bool bParam1) //Position - 0x2432
{
    if (!func_63(bParam0))
    {
        return 0;
    }
    if (Global_13172[bParam0].f_4 != 3)
    {
        return 1;
    }
    if (!bParam1)
    {
        if (Global_13172[bParam0].f_4 != 4)
        {
            return 1;
        }
    }
    return 0;
}

int func_63(bool bParam0) //Position - 0x2468
{
    if (!func_65(bParam0))
    {
        return 0;
    }
    if (!func_64(Global_13172[bParam0].f_4))
    {
        return 0;
    }
    return 1;
}

int func_64(int iParam0) //Position - 0x248C
{
    if (iParam0 <= -1 || iParam0 > 5)
    {
        return 0;
    }
    return 1;
}

int func_65(int iParam0) //Position - 0x24A1
{
    if (iParam0 <= 0 || iParam0 >= 275)
    {
        return 0;
    }
    return 1;
}

var func_66(int iParam0) //Position - 0x24B8
{
    return Global_74542[iParam0].f_8;
}

int func_67(var uParam0, var uParam1) //Position - 0x24C8
{
    int iVar0;
    
    iVar0 = (*uParam0 && uParam1);
    if (!iVar0 == 0)
    {
        return 1;
    }
else
{
    }
}

int func_68(int iParam0) //Position - 0x24E4
{
    if (Global_74542[iParam0] != 6)
    {
        return 1;
    }
    return 0;
}

int func_69(var uParam0, bool bParam1) //Position - 0x24F9
{
    bool bVar0;
    
    bVar0 = func_70(uParam0);
    if (!func_65(bVar0))
    {
        return 0;
    }
    if (Global_13172[bVar0].f_4 != 3)
    {
        return 1;
    }
    if (!bParam1)
    {
        if (Global_13172[bVar0].f_4 != 4)
        {
            return 1;
        }
    }
    return 0;
}

int func_70(bool bParam0) //Position - 0x2536
{
    if (!func_71(bParam0))
    {
        return -1;
    }
    return Global_3422[bParam0].f_4;
}

int func_71(int iParam0) //Position - 0x2550
{
    if (iParam0 <= 0 || iParam0 >= 58)
    {
        return 0;
    }
    return 1;
}

int func_72(bool bParam0) //Position - 0x2566
{
    int iVar0;
    int iVar1;
    
    if (!func_75(bParam0))
    {
        return 0;
    }
    iVar0 = 1;
    iVar1 = 0;
    iVar1 = iVar1;
    iVar1 = 0;
    if (iVar1 >= Global_27774[bParam0].f_28)
    {
        if ((Global_27774[bParam0].f_4 && iVar0) != 0)
        {
            return iVar0;
        }
        iVar0 *= 2;
        iVar1++;
    }
    else
    {
        return 0;
    }
}

int func_73(bool bParam0) //Position - 0x25B5
{
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to check wearable on invalid outfit");
        return 0;
    }
    if (func_152(bParam0, 4))
    {
        return 1;
    }
    return 0;
}

int func_74(bool bParam0) //Position - 0x2606
{
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to check discovery of invalid outfit");
        return 0;
    }
    if (func_152(bParam0, 2))
    {
        return 1;
    }
    return 0;
}

int func_75(int iParam0) //Position - 0x2658
{
    if (iParam0 < 0 || iParam0 > 30)
    {
        return 0;
    }
    return 1;
}

void func_76(bool bParam0) //Position - 0x266E
{
    bool bVar0;
    
    if (!func_75(bParam0))
    {
        return;
    }
    if (func_73(bParam0))
    {
        return;
    }
    if (!func_152(bParam0, 1048576))
    {
        return;
    }
    bVar0 = func_139(bParam0);
    if (bVar0 <= Global_27774[bParam0].f_24)
    {
        Global_27774[bParam0].f_24 = bVar0;
        if (Global_27774[bParam0].f_24 != Global_27774[bParam0].f_28)
        {
            func_77(bParam0, 0, 1);
        }
    }
    return;
}

void func_77(bool bParam0, bool bParam1, bool bParam2) //Position - 0x26D1
{
    char* cVar0[32];
    char* cVar8[32];
    
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to mostly complete an invalid outfit");
        return;
    }
    if (Global_3381)
    {
        return;
    }
    if (!func_73(bParam0))
    {
        if (!func_74(bParam0))
        {
            func_124(bParam0, 1, 0, 0, 1);
        }
        strcpy(&cVar0, "OUT_", 32);
        strcpy(&cVar8, "out_", 32);
        stradd(&cVar0, &Global_27774[bParam0] + 32, 32);
        stradd(&cVar8, &Global_27774[bParam0] + 32, 32);
        stradd(&cVar8, "_desc", 32);
        if (Global_27774[bParam0].f_48 == -1 || (Global_27774[bParam0].f_48 == 0 && Global_27774[bParam0].f_28 > 0))
        {
            Global_27774[bParam0].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
        }
        if (Global_27774[bParam0].f_48 != -1 && Global_27774[bParam0].f_48 != 0)
        {
            CLEAR_JOURNAL_ENTRY(Global_27774[bParam0].f_48);
            PREPEND_JOURNAL_ENTRY(Global_27774[bParam0].f_48, 1);
            PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam0].f_48, &cVar8, 0, 2, 0);
            SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam0].f_48, -1.0f, 0, 0);
            if (!bParam1)
            {
                UNK_0x283B4EFC(15.0f, "out_Journal_Finish", &cVar0, 0, 0f, 0, 0, 2, 0, 0, 0);
            }
        }
        func_123(457, 1, 0, 0);
        func_151(bParam0, 6);
        if (bParam0 != 3)
        {
            if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
            {
                AWARD_ACHIEVEMENT(23);
            }
        }
        if (bParam2)
        {
            if (!func_122(0, 0, 1, 1))
            {
                func_81(1);
                func_79(1, 0);
            }
            else
            {
                func_78();
            }
        }
    }
    return;
}

void func_78() //Position - 0x2870
{
    return;
}

void func_79(var uParam0, var uParam1) //Position - 0x2876
{
    if (Global_3381)
    {
        return;
    }
    Global_3412 = uParam0;
    Global_3416 = uParam1;
    if (!Global_3365 && !func_80())
    {
        return;
    }
    DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
    return;
}

var func_80() //Position - 0x28B8
{
    return UNK_0x84B0B5D6();
}

void func_81(bool bParam0) //Position - 0x28C1
{
    if ((Global_3395 || Global_3381) || Global_3396)
    {
        return;
    }
    Global_34165.f_24 = -1;
    func_112();
    Global_34165.f_28 = 0;
    Global_34165.f_32 = 1;
    Global_34165.f_52 = GET_TIME_OF_DAY();
    func_83();
    UNK_0x1A3BAC68(0);
    if (bParam0)
    {
        func_82(&Global_63095, 1);
        func_82(&Global_63095, 2);
    }
    Global_88793 = 1;
    return;
}

void func_82(var uParam0, var uParam1) //Position - 0x2912
{
    *uParam0 = (*uParam0 - (*uParam0 && uParam1));
    return;
}

void func_83() //Position - 0x2925
{
    func_110();
    func_109();
    func_109();
    func_108();
    func_108();
    func_107();
    func_107();
    func_90(0);
    func_90(0);
    if (!func_80())
    {
        func_88();
        func_87();
        func_86();
        func_85();
        if (Global_74542[199].f_16 == 1 || UNK_0xBAB151CB())
        {
            Global_74542[199].f_16 = 1;
        }
    }
    func_84();
    return;
}

void func_84() //Position - 0x2977
{
    Global_34581[372] = UNK_0x5545C218(0);
    Global_34581[373] = UNK_0x5545C218(1);
    Global_34581[374] = UNK_0x5545C218(2);
    Global_34581[375] = UNK_0x5545C218(3);
    Global_34581[376] = UNK_0x5545C218(4);
    Global_34581[377] = UNK_0x5545C218(5);
    Global_34581[378] = UNK_0x5545C218(6);
    Global_34581[379] = UNK_0xE623B382(1);
    Global_34581[380] = UNK_0xE623B382(2);
    Global_34581[381] = UNK_0x5545C218(7);
    Global_34581[382] = UNK_0x5545C218(8);
    Global_34581[383] = UNK_0x5545C218(9);
    Global_34581[385] = UNK_0xE623B382(0);
    Global_34581[387] = UNK_0x5545C218(10);
    Global_34581[388] = UNK_0x5545C218(11);
    Global_34581[394] = UNK_0x5545C218(12);
    Global_34581[44] = UNK_0xE623B382(3);
    Global_34581[392] = UNK_0xE623B382(4);
    Global_34581[391] = UNK_0xE623B382(6);
    Global_34581[393] = UNK_0xE623B382(5);
    Global_34581[395] = UNK_0xE623B382(7);
    return;
}

void func_85() //Position - 0x2A7D
{
    float fVar0;
    
    fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
    if (Global_25986[1])
    {
        if (fVar0 < 50.0f)
        {
            fVar0 = 50.0f;
        }
    }
    else
    {
        fVar0 = 0.0f;
    }
    Global_83815 = fVar0;
    return;
}

void func_86() //Position - 0x2AB0
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
    iVar2 = 0;
    iVar1 = 0;
    if (iVar1 > (iVar0 - 1))
    {
        iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
        if (iVar3 != -1 && iVar3 != 0)
        {
            if (GET_JOURNAL_ENTRY_TYPE(iVar3) != 2)
            {
                if (iVar2 <= 49)
                {
                    LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
                    iVar1 = iVar0;
                }
                else
                {
                    Global_76695[iVar2] = iVar3;
                    Global_76695[iVar2].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
                    Global_76695[iVar2].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
                    iVar2++;
                }
            }
        }
        iVar1++;
    }
    else
    {
        iVar1 = iVar2;
        if (iVar1 > 49)
        {
            Global_76695[iVar1] = -1;
            Global_76695[iVar1].f_4 = -1;
            iVar1++;
        }
        else
        {
            return;
        }
    }
}

void func_87() //Position - 0x2C3E
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
    iVar2 = 0;
    iVar1 = 0;
    if (iVar1 > (iVar0 - 1))
    {
        iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
        if (iVar3 != -1 && iVar3 != 0)
        {
            if (GET_JOURNAL_ENTRY_TYPE(iVar3) != 2)
            {
                if (iVar2 <= 49)
                {
                    LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
                    iVar1 = iVar0;
                }
                else
                {
                    Global_76543[iVar2] = iVar3;
                    Global_76543[iVar2].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
                    Global_76543[iVar2].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
                    iVar2++;
                }
            }
        }
        iVar1++;
    }
    else
    {
        iVar1 = iVar2;
        if (iVar1 > 49)
        {
            Global_76543[iVar1] = -1;
            Global_76543[iVar1].f_4 = -1;
            iVar1++;
        }
        else
        {
            Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
            if (Global_76694 != -1 && Global_76694 != 0)
            {
                if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) == 2)
                {
                    Global_76694 = -1;
                }
            }
            return;
        }
    }
}

void func_88() //Position - 0x2DF2
{
    func_89(&Global_28260, 1, 0);
    return;
}

void func_89(int iParam0, bool bParam1, var uParam2) //Position - 0x2E00
{
    bool bVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    bool bVar5;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    var uVar11;
    int iVar12;
    int iVar13;
    
    bVar0 = func_28();
    if (IS_ACTOR_VALID(bVar0))
    {
        iParam0->f_1012 = UNK_0x118D085E(bVar0);
        iVar7 = 65534;
        iVar8 = GET_WEAPON_IN_HAND(bVar0);
        if (iVar8 == -1)
        {
            if (UNK_0x6262DC5E(bVar0, iVar8) || uParam2)
            {
                iVar7 = UNK_0x0CDD6F94(bVar0);
            }
        }
        iVar1 = 0;
        if (iVar1 > (iParam0->f_1012 - 1))
        {
            iVar9 = UNK_0x7BF75BCE(iVar1, bVar0);
            if (iVar9 == iVar7)
            {
                (*iParam0 + 48)[iVar1] = iVar9;
                (iParam0 + 48[iVar1])->f_4 = UNK_0x4BB2BC20((*iParam0 + 48)[iVar1], bVar0);
            }
            iVar1++;
        }
        else
        {
            if (bParam1)
            {
                iParam0->f_44 = UNK_0x78A3CD3D(bVar0);
                iVar2 = 0;
                if (iVar2 > (iParam0->f_44 - 1))
                {
                    (*iParam0)[iVar2] = UNK_0x7F4D5AE0(iVar2, bVar0);
                    iVar2++;
                }
                else
                {
                    iVar3 = 0;
                    if (iVar3 > (17 - 1))
                    {
                        (*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
                        iVar3++;
                    }
                    else
                    {
                        iParam0->f_1120 = -1;
                        iVar4 = 0;
                        if (iVar4 > (7 - 1))
                        {
                            iVar10 = iVar4;
                            (*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
                            if ((*iParam0 + 1088)[iVar4] != -1)
                            {
                                if (_GET_AN_EQUIP_SLOT(iVar8) != iVar10)
                                {
                                    (*iParam0 + 1088)[iVar4] = iVar8;
                                    iParam0->f_1120 = iVar8;
                                }
                            }
                            iVar4++;
                        }
                        else
                        {
                            iParam0->f_2160 = UNK_0x2C23CBE7(bVar0);
                            iVar1 = 0;
                            if (iVar1 > (iParam0->f_2160 - 1))
                            {
                                uVar11 = UNK_0x608DCAEF(iVar1, bVar0);
                                (*iParam0 + 1132)[iVar1] = uVar11;
                                (iParam0 + 1132[iVar1])->f_4 = UNK_0x4BB2BC20((*iParam0 + 1132)[iVar1], bVar0);
                                iVar1++;
                            }
                            else
                            {
                                iVar12 = UNK_0xCC02BBD3(bVar0);
                                if (iVar12 == -1)
                                {
                                    iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
                                }
                                else
                                {
                                    iParam0->f_1124 = -1;
                                }
                                iVar13 = UNK_0xA8040D70(bVar0);
                                if (iVar13 == -1)
                                {
                                    iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
                                }
                                else
                                {
                                    iParam0->f_1128 = -1;
                                }
                                bVar5 = false;
                                if (bVar5 > (39 - 1))
                                {
                                    (*iParam0 + 2164)[bVar5] = UNK_0xCCE4A339(bVar5);
                                    bVar5++;
                                }
                                else
                                {
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

struct<8> func_90(var uParam0) //Position - 0x2FF1
{
    char* cVar0[8];
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    strcpy(&cVar0, "fav_non", 8);
    iVar3 = 0;
    iVar4 = 0;
    if (iVar4 >= 39)
    {
        switch (iVar4)
        {
            case 21:
            case 22:
                iVar2 = 0;
                break;
            
            default:
                if (iVar4 != 31 || uParam0)
                {
                    iVar2 = ((func_106((50 + iVar4)) + func_106((183 + iVar4))) + func_106((90 + iVar4)));
                }
                break;
        }
        if (iVar2 < iVar3)
        {
            iVar5 = iVar4;
            iVar3 = iVar2;
        }
        iVar4++;
    }
    else
    {
        if (iVar3 > 0)
        {
            return cVar0;
        }
        func_91(182, iVar5, 0);
        strcpy(&cVar0, "fwep_", 8);
        straddi(&cVar0, iVar5, 8);
        return cVar0;
    }
}

int func_91(int iParam0, bool bParam1, bool bParam2) //Position - 0x3097
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 5)
    {
        PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 2)
    {
        PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
        return 0;
    }
    if (Global_34581[iParam0] < TO_FLOAT(bParam1))
    {
        func_105(iParam0, TO_FLOAT(bParam1), 0);
    }
    Global_34581[iParam0] = TO_FLOAT(bParam1);
    func_104(iParam0);
    if (bParam2)
    {
        func_92(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 1077936128, 0, 0);
    }
    return 1;
}

void func_92(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position - 0x3332
{
    char* cVar0;
    char* cVar1[32];
    struct<8> Var9;
    int iVar17;
    int iVar18;
    float fVar19;
    float fVar20;
    int iVar21;
    
    if (bParam3)
    {
        cVar0 = UNK_0x47EF426D(ROUND(fParam2));
    }
    else
    {
        cVar0 = UNK_0xFA6BDD8E(fParam2, 6, 2);
    }
    strcpy(&Global_35278[iParam0] + 16, "", 32);
    if (bParam4)
    {
        if (bParam1)
        {
            strcpy(&cVar1, "+", 4);
        }
        else
        {
            strcpy(&cVar1, "-", 4);
        }
        stradd(&Global_35278[iParam0] + 16, &cVar1, 32);
    }
    if (bParam1)
    {
        iVar2 = 0;
    }
    else
    {
        iVar2 = 1;
    }
    if (Global_35278[iParam0].f_76 == 3 || Global_35278[iParam0].f_48 == 21)
    {
        stradd(&Global_35278[iParam0] + 16, "$", 32);
    }
    stradd(&Global_35278[iParam0] + 16, cVar0, 32);
    switch (Global_35278[iParam0].f_48)
    {
        case 16:
        case 17:
            strcpy(&Global_35278[iParam0] + 16, "", 32);
            break;
        
        case 22:
            if (fParam2 < 2000.0f)
            {
                stradd(&Global_35278[iParam0] + 16, " lbs", 32);
            }
            else
            {
                fParam2 = (fParam2 / 2000.0f);
                memcpy(&Global_35278[iParam0] + 16, {cVar1}, 8);
                stradd(&Global_35278[iParam0] + 16, _FLOAT_TO_STRING(fParam2, 6, 2), 32);
                stradd(&Global_35278[iParam0] + 16, " ton", 32);
            }
            break;
        
        case 23:
            memcpy(&Global_35278[iParam0] + 16, {cVar1}, 8);
            if (fParam2 >= 60.0f)
            {
                bVar7 = false;
                bVar5 = (FLOOR(fParam2) / 60);
                if (bVar5 < 60)
                {
                    bVar4 = (bVar5 / 60);
                    bVar5 = (bVar5 - bVar4 * 60);
                    bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
                    if (bVar4 < 24)
                    {
                        bVar3 = (bVar4 / 24);
                        bVar4 = (bVar4 - bVar3 * 24);
                        stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(bVar3), 32);
                        if (bVar3 <= 1)
                        {
                            stradd(&Global_35278[iParam0] + 16, " days", 32);
                        }
                        else
                        {
                            stradd(&Global_35278[iParam0] + 16, " day", 32);
                        }
                        bVar7 = true;
                    }
                    if (bVar4 <= 0)
                    {
                        if (bVar7)
                        {
                            stradd(&Global_35278[iParam0] + 16, " ", 32);
                        }
                        stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(bVar4), 32);
                        stradd(&Global_35278[iParam0] + 16, " hr", 32);
                        bVar7 = true;
                    }
                    if (bVar5 <= 0)
                    {
                        if (bVar7)
                        {
                            stradd(&Global_35278[iParam0] + 16, " ", 32);
                        }
                        stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(bVar5), 32);
                        stradd(&Global_35278[iParam0] + 16, " min", 32);
                        bVar7 = true;
                    }
                    if (bVar6 <= 0)
                    {
                        if (bVar7)
                        {
                            stradd(&Global_35278[iParam0] + 16, " ", 32);
                        }
                        stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(bVar6), 32);
                        stradd(&Global_35278[iParam0] + 16, " sec", 32);
                        bVar7 = false;
                    }
                }
                else
                {
                    stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(bVar5), 32);
                    stradd(&Global_35278[iParam0] + 16, " min", 32);
                    bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
                    if (bVar6 <= 0)
                    {
                        stradd(&Global_35278[iParam0] + 16, " ", 32);
                        stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(bVar6), 32);
                        stradd(&Global_35278[iParam0] + 16, " sec", 32);
                    }
                }
            }
            else
            {
                stradd(&Global_35278[iParam0] + 16, cVar0, 32);
                stradd(&Global_35278[iParam0] + 16, " sec", 32);
            }
            break;
        
        case 24:
            memcpy(&Global_35278[iParam0] + 16, {cVar1}, 8);
            fParam2 = (fParam2 * 3.28084f);
            if (fParam2 < 5280.0f)
            {
                bVar8 = false;
            }
            else
            {
                fParam2 = (fParam2 / 5280.0f);
                bVar8 = true;
            }
            if ((fParam2 - IntToFloat(FLOOR(fParam2))) > 0.0f)
            {
                stradd(&Global_35278[iParam0] + 16, _FLOAT_TO_STRING(fParam2, 6, 2), 32);
            }
            else
            {
                stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
            }
            if (bVar8)
            {
                stradd(&Global_35278[iParam0] + 16, " mi", 32);
            }
            else
            {
                stradd(&Global_35278[iParam0] + 16, " ft", 32);
            }
            break;
        
        case 25:
            memcpy(&Global_35278[iParam0] + 16, {cVar1}, 8);
            if ((fParam2 - IntToFloat(FLOOR(fParam2))) > 0.0f)
            {
                stradd(&Global_35278[iParam0] + 16, _FLOAT_TO_STRING(fParam2, 6, 2), 32);
            }
            else
            {
                stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
            }
            if (fParam2 > 1.0f)
            {
                stradd(&Global_35278[iParam0] + 16, " days", 32);
            }
            else
            {
                stradd(&Global_35278[iParam0] + 16, " day", 32);
            }
            break;
        
        case 15:
            if (iParam0 != 390)
            {
                stradd(&Global_35278[iParam0] + 16, UI_GET_STRING("stat_of"), 32);
                stradd(&Global_35278[iParam0] + 16, INT_TO_STRING(FLOOR(func_103(390))), 32);
            }
            break;
    }
    CLEAR_STAT_MESSAGE();
    if (!Global_49306)
    {
        iVar21 = 0;
        switch (Global_35278[iParam0].f_48)
        {
            case 16:
            case 17:
            case 8:
            case 12:
            case 9:
            case 10:
            case 6:
                if (bParam6)
                {
                    fVar19 = fParam2;
                    fVar20 = 0.0f;
                }
                else if (bParam1)
                {
                    fVar19 = (func_102(iParam0) - fParam2);
                    fVar20 = fParam2;
                }
                else
                {
                    fVar19 = (func_102(iParam0) + fParam2);
                    fVar20 = (fParam2 * -1.0f);
                }
                switch (iParam0)
                {
                    case 3:
                        iVar21 = 1;
                        func_100(iParam0, fVar19, fVar20, &iVar17, &iVar18);
                        SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam0])), &Global_35278[iParam0] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
                        break;
                    
                    case 487:
                        iVar21 = 2;
                        if (Global_83864.f_1264 >= 49)
                        {
                            func_97(fVar19, fParam2, &iVar17, &iVar18);
                            if (!IS_STRING_VALID(bParam7))
                            {
                                bParam7 = "Common_Null";
                            }
                            Var9 = { func_95(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
                            SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam0] + 16, func_94(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, func_93(), &Var9);
                        }
                        break;
                        break;
                        if (iParam0 != 0)
                        {
                            SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam0])), &Global_35278[iParam0] + 16, cParam5, "", 2, -1, 0, iVar2, 0, 1, 0, 0, 0);
                        }
                        else
                        {
                            SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam0])), &Global_35278[iParam0] + 16, cParam5, "", 2, -1, 0, iVar2, 0, 0, 0, 0, 0);
                        }
                        break;
                    }
            }
    }
}

var func_93() //Position - 0x395D
{
    int iVar0;
    
    return iVar0;
}

var func_94(int iParam0) //Position - 0x3967
{
    return (2.0f + (0.07f * IntToFloat(iParam0)));
}

char* func_95(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position - 0x3978
{
    char* cVar0[32];
    
    if (bParam3)
    {
        if (iParam1 > 0)
        {
            strcpy(&cVar0, "lvl_", 32);
            straddi(&cVar0, iParam0 + 1, 32);
            stradd(&cVar0, "_icon", 32);
            return cVar0;
        }
        else
        {
            cVar0 = { func_96("icon_prestige_award_", UNK_0x47EF426D((iParam1 - 1))) };
        }
    }
    if (iParam1 > 0)
    {
        cVar0 = { func_96("icon_prestige_", UNK_0x47EF426D((iParam0 / 5))) };
    }
    else if (iParam1 == 4 && iParam0 == 49)
    {
        strcpy(&cVar0, "icon_prestige_award_4", 32);
    }
    else
    {
        cVar0 = { func_96("icon_prestige_award_", UNK_0x47EF426D((iParam1 - 1))) };
    }
    if (bParam2)
    {
        stradd(&cVar0, "_color", 32);
    }
    return cVar0;
}

char* func_96(char* cParam0, char* cParam1) //Position - 0x3A6B
{
    char* cVar0[32];
    
    strcpy(&cVar0, cParam0, 32);
    stradd(&cVar0, cParam1, 32);
    return cVar0;
}

void func_97(float fParam0, float fParam1, var uParam2, var uParam3) //Position - 0x3A84
{
    float fVar0;
    
    fVar0 = (Global_83864[Global_83864.f_1264 + 1] - Global_83864[Global_83864.f_1264]);
    *uParam2 = func_99(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_1264]) / fVar0) * 100.0f)));
    *uParam3 = func_98(func_99(100. FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var func_98(int iParam0, int iParam1) //Position - 0x3AE9
{
    if (iParam0 <= iParam1)
    {
        return iParam0;
    }
    return iParam1;
}

var func_99(int iParam0, int iParam1) //Position - 0x3AFD
{
    if (iParam0 >= iParam1)
    {
        return iParam0;
    }
    return iParam1;
}

void func_100(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position - 0x3B0F
{
    float fVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    
    if (iParam0 != -1)
    {
        LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
        return;
    }
    if (Global_35278[iParam0].f_64 == 0.0f)
    {
        fVar0 = 100.0f;
    }
    else
    {
        fVar0 = Global_35278[iParam0].f_64;
    }
    fVar1 = Global_35278[iParam0].f_60;
    if (((func_101(iParam0) == 19 || func_101(iParam0) == 17) || func_101(iParam0) == 10) || func_101(iParam0) == 9)
    {
        if (fParam1 < fVar1)
        {
            fParam1 = fVar1;
        }
        if (fParam1 > fVar0)
        {
            fParam1 = fVar0;
        }
        if (fParam2 < -(fParam1 - fVar1))
        {
            fParam2 = -(fParam1 - fVar1);
        }
        if (fParam2 > (fVar0 - fParam1))
        {
            fParam2 = (fVar0 - fParam1);
        }
        fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
        fVar3 = (fParam2 / (fVar0 - fVar1));
        *uParam3 = ROUND((fVar2 * 100.0f));
        *uParam4 = ROUND((fVar3 * 100.0f));
    }
    else
    {
        *uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
        *uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
    }
}

var func_101(int iParam0) //Position - 0x3C3D
{
    return Global_35278[iParam0].f_48;
}

var func_102(int iParam0) //Position - 0x3C4E
{
    if (!iParam0 == -1)
    {
        return Global_34581[iParam0];
    }
    LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
    return 0.0f;
}

var func_103(int iParam0) //Position - 0x3C87
{
    if (iParam0 != -1)
    {
        LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
        return -1.0f;
    }
    return Global_35278[iParam0].f_64;
}

void func_104(int iParam0) //Position - 0x3CC4
{
    if (Global_35278[iParam0].f_64 != 0.0f)
    {
        if (Global_34581[iParam0] > Global_35278[iParam0].f_64)
        {
            PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
            PRINTSTRING(&(Global_35278[iParam0]));
            PRINTNL();
            LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
        }
    }
    if (Global_35278[iParam0].f_60 != 0.0f)
    {
        if (Global_34581[iParam0] < Global_35278[iParam0].f_60)
        {
            PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
            PRINTSTRING(&(Global_35278[iParam0]));
            PRINTNL();
            LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
        }
    }
    return;
}

int func_105(int iParam0, float fParam1, bool bParam2) //Position - 0x3E5E
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
        return 0;
    }
    iVar1 = Global_35278[iParam0].f_52;
    if (iVar1 != -1)
    {
        return 0;
    }
    iVar0 = iVar1;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
        return 0;
    }
    if (bParam2)
    {
        if ((iParam0 >= 500 && iParam0 <= 586) || iParam0 == 596)
        {
            Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
        }
        else
        {
            Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
        }
    }
    else
    {
        Global_34581[iVar1] = fParam1;
    }
    if (Global_35278[iVar1].f_64 != 0.0f)
    {
        if (Global_34581[iVar1] > Global_35278[iVar1].f_64)
        {
            LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
            Global_34581[iVar1] = Global_35278[iVar1].f_64;
        }
    }
    if (Global_35278[iVar1].f_60 != 0.0f)
    {
        if (Global_34581[iVar1] < Global_35278[iVar1].f_60)
        {
            LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
            Global_34581[iVar1] = Global_35278[iVar1].f_60;
        }
    }
    return 1;
}

int func_106(int iParam0) //Position - 0x40A4
{
    if (iParam0 != -1)
    {
        LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
        return 0;
    }
    return FLOOR(Global_34581[iParam0]);
}

struct<8> func_107() //Position - 0x40E5
{
    char* cVar0[8];
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    strcpy(&cVar0, "fav_non", 8);
    iVar5 = 0;
    iVar3 = 0;
    if (iVar3 >= 4)
    {
        iVar2 = ((func_106((50 + iVar3) + 15) + func_106((183 + iVar3) + 15)) + func_106((90 + iVar3) + 15));
        if (iVar2 < iVar5)
        {
            iVar4 = iVar3;
            iVar5 = iVar2;
        }
        iVar3++;
    }
    else
    {
        if (iVar5 > 0)
        {
            return cVar0;
        }
        func_91(181, iVar4 + 15, 0);
        strcpy(&cVar0, "fwep_", 8);
        straddi(&cVar0, (15 + iVar4), 8);
        return cVar0;
    }
}

struct<8> func_108() //Position - 0x416E
{
    char* cVar0[8];
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    strcpy(&cVar0, "fav_non", 8);
    iVar5 = 0;
    iVar3 = 0;
    if (iVar3 >= 13)
    {
        if (iVar3 < 7 || iVar3 > 10)
        {
            iVar2 = ((func_106((50 + iVar3) + 8) + func_106((183 + iVar3) + 8)) + func_106((90 + iVar3) + 8));
            if (iVar2 < iVar5)
            {
                iVar4 = iVar3;
                iVar5 = iVar2;
            }
        }
        iVar3++;
    }
    else
    {
        if (iVar5 > 0)
        {
            return cVar0;
        }
        func_91(180, iVar4 + 8, 0);
        strcpy(&cVar0, "fwep_", 8);
        straddi(&cVar0, (8 + iVar4), 8);
        return cVar0;
    }
}

struct<8> func_109() //Position - 0x4205
{
    char* cVar0[8];
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    strcpy(&cVar0, "fav_non", 8);
    iVar5 = 0;
    iVar3 = 0;
    if (iVar3 >= 8)
    {
        iVar2 = ((func_106((50 + iVar3)) + func_106((183 + iVar3))) + func_106((90 + iVar3)));
        if (iVar2 < iVar5)
        {
            iVar4 = iVar3;
            iVar5 = iVar2;
        }
        iVar3++;
    }
    else
    {
        if (iVar5 > 0)
        {
            return cVar0;
        }
        func_91(179, iVar4, 0);
        strcpy(&cVar0, "fwep_", 8);
        straddi(&cVar0, iVar4, 8);
        return cVar0;
    }
}

void func_110() //Position - 0x4284
{
    if (Global_49308 < 0.1f)
    {
        Global_49308 = _GET_CURRENT_TIME();
        return;
    }
    func_111(7, (_GET_CURRENT_TIME() - Global_49308), 0);
    Global_49308 = _GET_CURRENT_TIME();
    func_91(8, (GET_DAY(0) - 2), 0);
    return;
}

int func_111(int iParam0, float fParam1, var uParam2) //Position - 0x42BD
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 5)
    {
        PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
        return 0;
    }
    if (fParam1 < 0.0f)
    {
        LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
        fParam1 = FABS(fParam1);
    }
    Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
    func_105(iParam0, fParam1, 1);
    func_104(iParam0);
    if (uParam2 && fParam1 != 0.0f)
    {
        func_92(iParam0, 1, fParam1, 0, 1, 1077936128, 0, 0);
    }
    if (Global_35278[iParam0].f_48 != 2)
    {
        iVar1 = 0;
        if (iVar1 >= ROUND(fParam1))
        {
            ADD_COLLECTABLE(&(Global_35278[iParam0]), Global_34573, 0);
            iVar1++;
        }
        else
        {
            return 1;
        }
    }
}

void func_112() //Position - 0x44C7
{
    vector3 vVar0;
    var uVar3;
    
    Global_34165.f_24 = -1;
    if (func_121())
    {
        func_118(&Global_34165 + 12, &Global_34165 + 16);
        vVar0 = { func_118(&Global_34165 + 12, &Global_34165 + 16) };
    }
    else
    {
        func_113(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
        vVar0 = { func_113(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
    }
    if (func_21(vVar0))
    {
        vVar0 = { Global_34574 };
        vVar0.f_4 = (vVar0.f_4 + 0.5f);
        FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
    }
    else
    {
        Global_34165 = { vVar0 };
    }
    Global_34165.f_156 = Global_34165.f_12;
    *(&Global_34165 + 144) = { Global_34165 };
    Global_34165.f_160 = Global_34165.f_16;
    Global_34165.f_28 = 0;
    Global_34165.f_36 = 0;
    Global_34165.f_40 = 0;
    Global_34165.f_32 = 1;
    Global_34165.f_52 = GET_TIME_OF_DAY();
    Global_88793 = 1;
    return;
}

vector3 func_113(var uParam0, var uParam1, var uParam2, var uParam3) //Position - 0x4582
{
    bool bVar0;
    
    bVar0 = func_117(uParam2, uParam3);
    if (func_116(bVar0))
    {
        if (bVar0 != 15)
        {
            Global_34165.f_24 = Global_29005;
            func_115(&Global_63095, 1);
            func_82(&Global_63095, 2);
            Global_63084 = { Global_16537[bVar0] };
            *uParam1 = 0;
        }
        else
        {
            func_115(&Global_63095, 2);
            func_82(&Global_63095, 1);
            if ((bVar0 == 13 || bVar0 == 14) || bVar0 == 4)
            {
                *uParam1 = 0;
            }
            else
            {
                *uParam1 = 1;
            }
        }
        if (bVar0 != 1)
        {
            *uParam0 = 89.88f;
            return -2158.348f, 19.944f, 2597.452f;
        }
        *uParam0 = Global_16537[bVar0].f_12;
        return Global_16537[bVar0];
    }
    else if (Global_16875)
    {
        func_115(&Global_63095, 2);
        func_82(&Global_63095, 1);
        *uParam1 = 1;
        *uParam0 = 290.0f;
        return -2833.843f, 50.332f, 2418.003f;
    }
    func_114();
    return func_114();
}

vector3 func_114() //Position - 0x4667
{
    return 0.0f, 0.0f, 0.0f;
}

void func_115(var uParam0, var uParam1) //Position - 0x4672
{
    *uParam0 = (*uParam0 || uParam1);
    return;
}

int func_116(int iParam0) //Position - 0x4681
{
    if (iParam0 < 0 || iParam0 > 15)
    {
        return 0;
    }
    return 1;
}

int func_117(bool bParam0, var uParam1) //Position - 0x4697
{
    int iVar0;
    float fVar1;
    int iVar3;
    
    iVar0 = -1;
    fVar1 = 1E+09.0f;
    iVar3 = 0;
    if (iVar3 >= Global_16537)
    {
        if (((Global_16537[iVar3].f_40 == 3 || Global_16537[iVar3].f_40 == 4) || (iVar3 == 15 && !bParam0)) && (Global_16537[iVar3].f_52 == Global_29004 || uParam1))
        {
            if (Global_3365 || iVar3 != 6)
            {
                uVar2 = func_46(Global_34574, Global_16537[iVar3]);
                if (uVar2 < fVar1)
                {
                    fVar1 = uVar2;
                    iVar0 = iVar3;
                }
            }
        }
        iVar3++;
    }
    else
    {
        if (Global_16875)
        {
            uVar2 = func_46(Global_34574, -2833.843f, 50.332f, 2418.003f);
            if (uVar2 < fVar1)
            {
                return -1;
            }
        }
        if (!func_116(iVar0) && !uParam1)
        {
            iVar0 = func_117(bParam0, 1);
        }
        return iVar0;
    }
}

vector3 func_118(var uParam0, var uParam1) //Position - 0x475E
{
    float fVar0;
    vector3 vVar1;
    vector3 vVar4;
    vector3 vVar7;
    float fVar10;
    
    *uParam0 = *uParam0;
    fVar0 = 99999.99f;
    vVar1 = { 0.0f, 0.0f, 0.0f };
    func_120(Global_34573, &vVar4);
    if (!func_119(Global_30640[0]))
    {
        vVar7 = { -2158.996f, 19.93287f, 2597.94f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 90.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30640[2]))
    {
        vVar7 = { -2424.093f, 26.36347f, 2122.362f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -130.87f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30640[1]))
    {
        vVar7 = { -3242.193f, 19.4623f, 2725.147f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 90.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30658[1]))
    {
        vVar7 = { -3658.131f, 42.81397f, 2092.973f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -135.09f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30658[3]))
    {
        vVar7 = { -4454.145f, 9.204829f, 3220.642f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 206.26f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30658[2]))
    {
        GET_VOLUME_CENTER(Global_29155[Global_30658[2]].f_8, &vVar7);
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 0.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30658[4]))
    {
        vVar7 = { -3669.226f, 8.477426f, 3491.648f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 106.17f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30668[0]))
    {
        vVar7 = { -821.1879f, 93.8091f, 2435.436f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 343.64f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30668[1]))
    {
        vVar7 = { 124.6513f, 76.73672f, 2235.506f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 165.38f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30668[2]))
    {
        GET_VOLUME_CENTER(Global_29155[Global_30668[2]].f_8, &vVar7);
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 0.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30679[0]))
    {
        vVar7 = { -3195.612f, 41.29269f, 3752.929f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -97.3f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30685[0]))
    {
        vVar7 = { -4287.014f, 18.13315f, 4453.605f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -6.71f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30685[1]))
    {
        vVar7 = { -4708.083f, 3.172676f, 3968.105f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -90.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30685[2]))
    {
        vVar7 = { -3245.478f, 39.28797f, 4563.465f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -90.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30693[0]))
    {
        vVar7 = { -2687.509f, 31.4827f, 4295.249f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -90.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30693[1]))
    {
        vVar7 = { -1719.171f, 11.29226f, 4214.298f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -180.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30693[2]))
    {
        vVar7 = { -1462.607f, 16.54457f, 3952.801f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 22.55f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30707[2]))
    {
        vVar7 = { -819.4399f, 13.11084f, 3712.137f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -135.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30707[3]))
    {
        vVar7 = { 343.2535f, 79.47575f, 3448.062f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -104.45f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30707[0]))
    {
        vVar7 = { -465.2258f, 20.61027f, 3913.855f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -90.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30717[0]))
    {
        vVar7 = { 757.22f, 86.90343f, 1271.724f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 270.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30723[2]))
    {
        vVar7 = { -298.7082f, 84.35147f, 2134.708f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 59.3f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30723[1]))
    {
        vVar7 = { -448.9981f, 153.3878f, 1631.183f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 20.74f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30723[0]))
    {
        vVar7 = { -884.3423f, 202.5276f, 1006.602f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = 94.65f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30679[1]))
    {
        vVar7 = { -2679.319f, 71.65485f, 3424.564f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -135.0f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    if (!func_119(Global_30707[1]))
    {
        vVar7 = { -720.3301f, 67.5125f, 3293.269f };
        fVar10 = VDIST(vVar4, vVar7);
        if (fVar10 < fVar0)
        {
            *uParam0 = -39.9f;
            fVar0 = fVar10;
            vVar1 = { vVar7 };
        }
    }
    vVar7 = { -63.861f, 116.861f, 1414.684f };
    fVar10 = VDIST(vVar4, vVar7);
    if (fVar10 < fVar0)
    {
        fVar0 = fVar10;
        vVar1 = { vVar7 };
    }
    func_115(&Global_63095, 2);
    func_82(&Global_63095, 1);
    *uParam1 = 0;
    if (func_21(vVar1))
    {
        vVar1 = { -63.861f, 116.861f, 1414.684f };
    }
    PRINTSTRING("Here's what we're returning as a save spot: ");
    PRINTVECTOR(vVar1);
    PRINTNL();
    return vVar1;
}

var func_119(int iParam0) //Position - 0x4F83
{
    var uVar0;
    
    uVar0 = Global_29008[iParam0];
    return (((func_8(uVar0. 16777216) || func_8(uVar0. 33554432)) || func_8(uVar0. 67108864)) || !func_8(uVar0. 268435456));
}

void func_120(bool bParam0, var uParam1) //Position - 0x4FBE
{
    GET_POSITION(bParam0, uParam1);
    return;
}

int func_121() //Position - 0x4FCB
{
    if (func_8(Global_83864.f_1252, 1024))
    {
        return UNK_0x6CC9CCE7();
    }
    return 0;
}

int func_122(var uParam0, int iParam1, var uParam2, var uParam3) //Position - 0x4FE6
{
    uParam0 = uParam0;
    if (Global_3380 && !iParam1 == 1)
    {
        return 1;
    }
    if (Global_3382 && !iParam1 == 2)
    {
        return 1;
    }
    if (Global_3392 && !iParam1 == 6)
    {
        return 1;
    }
    if (Global_3384 && !iParam1 == 4)
    {
        return 1;
    }
    if (Global_3393 && uParam2)
    {
        return 1;
    }
    if (Global_3395 || Global_3396)
    {
        return 1;
    }
    if (Global_3385 && !iParam1 == 3)
    {
        return 1;
    }
    if (Global_59353 && uParam2)
    {
        return 1;
    }
    if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
    {
        return 1;
    }
    return 0;
}

int func_123(int iParam0, bool bParam1, var uParam2, var uParam3) //Position - 0x5088
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 5)
    {
        PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
        return 0;
    }
    if (bParam1 >= 0)
    {
        LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
        bParam1 = ABS(bParam1);
    }
    Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
    func_105(iParam0, TO_FLOAT(bParam1), 1);
    func_104(iParam0);
    if (uParam2 && bParam1 != 0)
    {
        func_92(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
    }
    if (Global_35278[iParam0].f_48 != 2)
    {
        iVar1 = 0;
        if (iVar1 >= bParam1)
        {
            ADD_COLLECTABLE(&(Global_35278[iParam0]), Global_34573, 0);
            iVar1++;
        }
        else
        {
            return 1;
        }
    }
}

void func_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position - 0x52A8
{
    char* cVar0[32];
    
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to discover invalid outfit");
        return;
    }
    if (!func_138(3) && !bParam4)
    {
        return;
    }
    if (Global_3381)
    {
        return;
    }
    if (!func_74(bParam0))
    {
        func_123(456, 1, 0, 0);
        func_151(bParam0, 2);
        if (bParam2)
        {
            if (!func_122(0, 0, 1, 1))
            {
                func_81(1);
                func_79(1, 5);
            }
            else
            {
                func_78();
            }
        }
        func_133(bParam0);
        strcpy(&cVar0, "OUT_", 32);
        stradd(&cVar0, &Global_27774[bParam0] + 32, 32);
        if ((!func_154() && !bParam1) && !Global_3380)
        {
            UNK_0x283B4EFC(15.0f, "out_Journal_Add", &cVar0, 0, 0f, 0, 0, 2, 0, 0, 0);
        }
        else if (func_154() || Global_3380)
        {
            if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
            {
                DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
            }
        }
        if (bParam3)
        {
            stradd(&cVar0, "_tip", 32);
            func_131(&cVar0, 10.0f, 1, 0, 0, 1, 0);
        }
        if (!func_121())
        {
            if (!func_130(Global_76846, 2))
            {
                func_125(Global_34573, 2, 1, 0);
            }
        }
    }
}

void func_125(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position - 0x53FD
{
    bool bVar0;
    char* cVar1[16];
    
    if (!func_127(bParam0, uParam1, bParam2) && !bParam3)
    {
        return;
    }
    if (!IS_OBJECT_VALID(bParam0))
    {
        return;
    }
    bVar0 = uParam1;
    strcpy(&cVar1, "tutorial", 16);
    func_126(&cVar1, bParam2);
    if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
    {
        DECOR_SET_INT(bParam0, &cVar1, bVar0);
    }
    else
    {
        DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
    }
}

void func_126(char* cParam0, int iParam1) //Position - 0x5469
{
    if (iParam1 != 1)
    {
        return;
    }
    if (iParam1 != 2)
    {
        stradd(cParam0, "2", 16);
    }
    if (iParam1 != 3)
    {
        stradd(cParam0, "3", 16);
    }
    if (iParam1 != 4)
    {
        stradd(cParam0, "4", 16);
    }
    return;
}

int func_127(bool bParam0, var uParam1, int iParam2) //Position - 0x54A2
{
    int iVar0;
    char* cVar1[16];
    
    iVar0 = uParam1;
    strcpy(&cVar1, "tutorial", 16);
    if (Global_3380)
    {
        return 0;
    }
    if (DECOR_CHECK_EXIST(bParam0, &cVar1))
    {
        if (func_129(DECOR_GET_INT(bParam0. &cVar1)) < 3)
        {
            return 0;
        }
    }
    if (iParam2 != 1)
    {
        if (Global_3403 || Global_3404)
        {
            return 0;
        }
    }
    if (iParam2 != 2)
    {
        switch (func_128(iVar0))
        {
            case 2:
                if (!func_130(Global_76847, 1577004))
                {
                    return 0;
                }
                break;
            }
    }
    return 1;
}

int func_128(int iParam0) //Position - 0x551A
{
    switch (iParam0)
    {
        case 1:
        case 64:
        case 128:
        case 256:
        case 512:
        case 16384:
        case 32768:
        case 65536:
        case 131072:
        case 262144:
        case 2097152:
            return 0;
            break;
        
        case 4:
        case 8:
        case 32:
        case 4096:
        case 524288:
        case 1048576:
            return 1;
            break;
        
        case 2:
        case 16:
        case 2048:
        case 8192:
        case 4194304:
            return 2;
            break;
    }
    return 0;
}

var func_129(var uParam0) //Position - 0x55BB
{
    int iVar0;
    int iVar1;
    
    iVar1 = uParam0;
    if (iVar1 >= 0)
    {
        iVar0 = 1;
        func_82(&iVar1, -2147483648);
    }
    else
    {
        iVar0 = 0;
    }
    if (iVar1 <= 0)
    {
        iVar1 = (iVar1 && (iVar1 - 1));
        iVar0++;
    }
    else
    {
        return iVar0;
    }
}

int func_130(var uParam0, int iParam1) //Position - 0x55F8
{
    if ((uParam0 && iParam1) != iParam1)
    {
        return 1;
    }
    return 0;
}

void func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position - 0x560B
{
    struct<4> Var0;
    var uVar4;
    
    if (Global_3380 == 1 && Global_6269 != -1)
    {
        Var0 = { *(&Global_3422[Global_6269] + 12) };
        if (((Global_6269 == 11 || Global_6269 == 16) || Global_6269 == 15) || Global_6269 == 43)
        {
            Var0 = { func_132(Global_6269) };
        }
        _PRINT_HELP(uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, &Var0, uParam6);
    }
    else
    {
        uVar4 = "";
        _PRINT_HELP(uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uVar4, uParam6);
    }
}

char* func_132(int iParam0) //Position - 0x5684
{
    char* cVar0[16];
    
    if (!func_121())
    {
        strcpy(&cVar0, "miss", 16);
    }
    else
    {
        strcpy(&cVar0, "ziss", 16);
    }
    straddi(&cVar0, iParam0, 16);
    stradd(&cVar0, "_short", 16);
    return cVar0;
}

void func_133(bool bParam0) //Position - 0x56C3
{
    char* cVar0[32];
    char* cVar8[32];
    struct<8> Var16;
    bool bVar24;
    
    strcpy(&cVar0, "OUT_", 32);
    strcpy(&cVar8, "out_", 32);
    stradd(&cVar0, &Global_27774[bParam0] + 32, 32);
    stradd(&cVar8, &Global_27774[bParam0] + 32, 32);
    stradd(&cVar8, "_hint", 32);
    if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam0].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam0].f_48, 1))
    {
        Global_27774[bParam0].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
        APPEND_JOURNAL_ENTRY(Global_27774[bParam0].f_48, 0);
        bVar24 = false;
        if (bVar24 >= Global_27774[bParam0].f_28)
        {
            Var16 = { cVar8 };
            straddi(&Var16, bVar24 + 1, 32);
            if (func_136(bParam0, func_137(bVar24)))
            {
                PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam0].f_48, &Var16, 0, 4, 0);
            }
            else
            {
                PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam0].f_48, &Var16, 0, 3, 0);
            }
            bVar24++;
        }
        else
        {
            Jump @333; //curOff = 222
            if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam0].f_48, 0))
            {
                bVar24 = false;
                if (bVar24 >= Global_27774[bParam0].f_28)
                {
                    Var16 = { cVar8 };
                    straddi(&Var16, bVar24 + 1, 32);
                    if (func_136(bParam0, func_137(bVar24)))
                    {
                        SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam0].f_48, &Var16, 4, 0);
                    }
                    else
                    {
                        SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam0].f_48, &Var16, 3, 0);
                    }
                    bVar24++;
                }
                else
                {
                    if (Global_27774[bParam0].f_48 != -1 && Global_27774[bParam0].f_48 != 0)
                    {
                        SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam0].f_48, (TO_FLOAT(func_139(bParam0)) / TO_FLOAT(Global_27774[bParam0].f_28)), 0, 0);
                        func_135(Global_27774[bParam0].f_48, 0);
                        straddi(&cVar8, func_134(bParam0), 32);
                        UNK_0x2AA8E2FA(Global_27774[bParam0].f_48, &cVar8, 3);
                    }
                    return;
                }
            }
        }
    }
}

int func_134(bool bParam0) //Position - 0x5875
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (!func_75(bParam0))
    {
        return 0;
    }
    iVar0 = 1;
    iVar1 = 0;
    iVar2 = 0;
    iVar1 = 0;
    if (iVar1 >= Global_27774[bParam0].f_28)
    {
        iVar1 = iVar1;
        if ((Global_27774[bParam0].f_4 && iVar0) != 0)
        {
            return iVar1 + 1;
        }
        iVar0 *= 2;
        iVar1++;
    }
    else
    {
        return iVar2 + 1;
    }
}

void func_135(bool bParam0, int iParam1) //Position - 0x58CC
{
    bool bVar0;
    
    bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
    REMOVE_JOURNAL_ENTRY(bParam0, iParam1);
    PREPEND_JOURNAL_ENTRY(bParam0, iParam1);
    if (bVar0)
    {
        TARGET_JOURNAL_ENTRY(bParam0);
    }
    return;
}

int func_136(bool bParam0, var uParam1) //Position - 0x58F1
{
    int iVar0;
    
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to check scraps on invalid outfit");
        return 0;
    }
    iVar0 = (Global_27774[bParam0].f_4 && uParam1);
    if (!iVar0 == 0)
    {
        return 1;
    }
else
{
    }
}

var func_137(int iParam0) //Position - 0x5950
{
    return SHIFT_LEFT(true. iParam0);
}

int func_138(int iParam0) //Position - 0x595C
{
    if (iParam0 < 0 && iParam0 >= 16)
    {
        return 0;
    }
    return Global_25986[iParam0];
}

int func_139(bool bParam0) //Position - 0x5978
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (!func_75(bParam0))
    {
        return -1;
    }
    iVar0 = 1;
    iVar1 = 0;
    iVar2 = 0;
    iVar1 = iVar1;
    iVar1 = 0;
    if (iVar1 >= Global_27774[bParam0].f_28)
    {
        if ((Global_27774[bParam0].f_4 && iVar0) <= 0)
        {
            iVar2++;
        }
        iVar0 *= 2;
        iVar1++;
    }
    else
    {
        return iVar2;
    }
}

void func_140(bool bParam0) //Position - 0x59CE
{
    int iVar0;
    int iVar1;
    
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
        return;
    }
    if (Global_27774[bParam0].f_12 & 1 <= 0)
    {
        UNK_0x6118212B(2, Global_27774[bParam0].f_16, 1);
        iVar0 = GET_ACTOR_FACTION(Global_34573);
    }
    if (Global_27774[bParam0].f_12 & 2 <= 0)
    {
        func_141(78, 1, 1);
        if (!func_130(Global_76847, 64))
        {
            func_125(Global_34573, 64, 2, 0);
        }
    }
    if (Global_27774[bParam0].f_12 & 32 <= 0)
    {
        SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
        SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
    }
    if (Global_27774[bParam0].f_12 & 64 <= 0)
    {
        UNK_0x6118212B(2, Global_27774[bParam0].f_16, 3);
        iVar1 = GET_ACTOR_FACTION(Global_34573);
        DECOR_SET_BOOL(Global_34573, "zMarston", 1);
        DECOR_SET_BOOL(Global_34573, "zombie", 1);
        UNK_0x07EC142B(Global_34573);
    }
    if (Global_27774[bParam0].f_12 & 128 <= 0)
    {
        ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, 1);
        ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, 1);
    }
    return;
}

int func_141(int iParam0, bool bParam1, int iParam2) //Position - 0x5AFC
{
    if (iParam0 <= -1 || iParam0 >= 79)
    {
        return 0;
    }
    if (bParam1)
    {
        if (UNK_0xD91ED898(func_142(iParam0), func_28()) != 0)
        {
            ADD_ITEM(func_142(iParam0), func_28(), iParam2);
            return 1;
        }
    }
    else
    {
        ADD_ITEM(func_142(iParam0), func_28(), iParam2);
    }
    return 1;
}

var func_142(bool bParam0) //Position - 0x5B47
{
    bool bVar0;
    
    bVar0 = SS_GET_STRING(1, bParam0);
    if (!IS_STRING_VALID(bVar0))
    {
        PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
        PRINTINT(bParam0);
        PRINTNL();
        LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
    }
    return bVar0;
}

void func_143(var uParam0, bool bParam1, var uParam2) //Position - 0x5C38
{
    int iVar0;
    
    iVar0 = 0;
    if (IS_SCRIPT_VALID(Global_30617))
    {
        TERINATE_SCRIPT(Global_30617);
    }
    if (UNK_0x3B1B6407())
    {
        bParam1 = false;
    }
    if (bParam1)
    {
        if (func_17(Global_29006))
        {
            func_148(&(Global_29008[Global_29006]), 131072);
            func_147(&(Global_29008[Global_29006]), 2097152);
            func_145(Global_29006);
        }
        else
        {
            bParam1 = false;
        }
    }
    if (!bParam1)
    {
        if (!HUD_IS_FADED())
        {
        }
        iVar0 = 0;
        if (iVar0 >= 146)
        {
            if (!Global_29155[iVar0].f_4 == 1)
            {
                if (func_144(&(Global_29008[iVar0]), 4) || func_144(&(Global_29008[iVar0]), 1))
                {
                    if (IS_SCRIPT_VALID(Global_29155[iVar0].f_24))
                    {
                        TERINATE_SCRIPT(Global_29155[iVar0].f_24);
                    }
                    func_147(&(Global_29008[iVar0]), 2097155);
                    func_148(&(Global_29008[iVar0]), 262144);
                }
            }
            iVar0++;
        }
        else
        {
            Global_3386 = 0;
            Global_3387 = 0;
            if (!IS_EXITFLAG_SET() && uParam2)
            {
                if (func_80())
                {
                }
                WAIT(0);
            }
            if (uParam0 && !NET_IS_IN_SESSION())
            {
                UNK_0x86B0B004(0, 1);
            }
            UNK_0x4C02E1E5();
            UNK_0xA8ADCAEB(0);
            return;
        }
    }
}

int func_144(var uParam0, var uParam1) //Position - 0x5D43
{
    int iVar0;
    
    iVar0 = (*uParam0 && uParam1);
    if (!iVar0 == 0)
    {
        return 1;
    }
else
{
    }
}

void func_145(int iParam0) //Position - 0x5D5F
{
    if (((Global_29155[iParam0].f_4 == 3 || Global_29155[iParam0].f_4 == 5) || Global_29155[iParam0].f_4 == 4) || (Global_29155[iParam0].f_4 == 2 && !Global_3386))
    {
        if (Global_29155[iParam0].f_4 != 2)
        {
            if (func_146())
            {
                return;
            }
        }
        if (!func_144(&(Global_29008[iParam0]), 2048))
        {
            Global_30618 = iParam0;
        }
        Global_29007 = Global_29155[iParam0].f_4;
    }
    else if (Global_3386)
    {
    }
    return;
}

int func_146() //Position - 0x5DDE
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_29008)
    {
        if (((Global_29155[iVar0].f_4 != 2 && Global_29155[iVar0].f_4 != 1) && Global_29155[iVar0].f_4 != 6) && Global_29155[iVar0].f_4 != 7)
        {
            if (func_144(&(Global_29008[iVar0]), 4) || func_144(&(Global_29008[iVar0]), 1))
            {
                return 1;
            }
        }
        iVar0++;
    }
    else
    {
        return 0;
    }
}

void func_147(var uParam0, var uParam1) //Position - 0x5E47
{
    int iVar0;
    
    iVar0 = (*uParam0 && uParam1);
    *uParam0 = (*uParam0 - iVar0);
    return;
}

void func_148(var uParam0, var uParam1) //Position - 0x5E5E
{
    *uParam0 = (*uParam0 || uParam1);
    return;
}

void func_149(bool bParam0) //Position - 0x5E6D
{
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to undo the SpecialEffects for an invalid outfit");
        return;
    }
    if (Global_27774[bParam0].f_12 & 1 <= 0)
    {
        UNK_0xF9C5DC76(2, Global_27774[bParam0].f_16);
    }
    if (Global_27774[bParam0].f_12 & 2 <= 0)
    {
    }
    if (Global_27774[bParam0].f_12 & 32 <= 0)
    {
        SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 1.0f);
        SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
    }
    if (Global_27774[bParam0].f_12 & 64 <= 0)
    {
    }
    if (Global_27774[bParam0].f_12 & 128 <= 0)
    {
    }
    return;
}

void func_150(bool bParam0, var uParam1) //Position - 0x5F23
{
    int iVar0;
    
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to unset status on invalid outfit");
        return;
    }
    iVar0 = (Global_27774[bParam0].f_8 && uParam1);
    Global_27774[bParam0].f_8 = (Global_27774[bParam0].f_8 - iVar0);
    return;
}

void func_151(bool bParam0, var uParam1) //Position - 0x5F88
{
    if (!func_75(bParam0))
    {
        LOG_ERROR("Attempting to set status on invalid outfit");
        return;
    }
    Global_27774[bParam0].f_8 = (Global_27774[bParam0].f_8 || uParam1);
    return;
}

int func_152(bool bParam0, var uParam1) //Position - 0x5FDD
{
    int iVar0;
    
    if (!func_75(bParam0))
    {
        return 0;
    }
    iVar0 = (Global_27774[bParam0].f_8 && uParam1);
    if (!iVar0 == 0)
    {
        return 1;
    }
else
{
    }
}

var func_153() //Position - 0x600A
{
    return func_8(Global_26303.f_8. 1);
}

var func_154() //Position - 0x6019
{
    return ((((UNK_0x60135878() || UNK_0x4B2FCAF6()) || UNK_0x2F0E7DE7()) || UNK_0x710B3A83()) || UI_ISACTIVE("MissionFailedMenu"));
}

void func_155() //Position - 0x6046
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_27774)
    {
        Global_27774[iVar0] = -1;
        iVar0++;
    }
    else
    {
        func_162(0, "cowboy", 0, 0, 2, 0, 3);
        func_162(14, "poncho", 1, 17, 2, 0, 1);
        func_162(13, "duster", 1, 16, 2, 0, 1);
        func_162(15, "rancher", 1, 10, 2, 0, 1);
        func_162(9, "military", 1, 9, 8, 1, 0);
        func_162(18, "zhunter", 5, 24, 2, 2, 1);
        func_162(19, "apoc", 1, 23, 2, 0, 1);
        func_162(20, "zombie", 1, 22, 32, 64, 0);
        func_162(21, "small", 1, 21, 2, 128, 1);
        func_162(22, "apoc_z", 1, 14, 32, 64, 0);
        func_162(23, "nzhunter_z", 5, 15, 32, 66, 0);
        if (func_156(func_157(0. 4. 1)) != 3 && func_156(func_157(0. 4. 1)) != 4)
        {
            func_124(0, 1, 0, 0, 1);
            func_77(0, 1, 0);
            func_124(14, 1, 0, 0, 1);
            func_77(14, 1, 0);
            func_124(13, 1, 0, 0, 1);
            func_77(13, 1, 0);
            func_124(15, 1, 0, 0, 1);
            func_77(15, 1, 0);
            func_124(21, 1, 0, 0, 1);
            func_77(21, 1, 0);
        }
        else
        {
            func_150(0, 6);
            func_151(0, 8);
            func_150(13, 6);
            func_151(13, 8);
            func_150(14, 6);
            func_151(14, 8);
            func_150(9, 6);
            func_151(9, 8);
            func_150(15, 6);
            func_151(15, 8);
            func_150(19, 6);
            func_151(19, 8);
            func_150(18, 6);
            func_151(18, 8);
            func_150(21, 6);
            func_151(21, 8);
        }
        if (Global_3364)
        {
            Global_28180 = -1;
        }
        Global_28180.f_8 = "";
        return;
    }
}

int func_156(bool bParam0) //Position - 0x6222
{
    if (!func_63(bParam0))
    {
        return -1;
    }
    return Global_13172[bParam0].f_4;
}

int func_157(var uParam0, var uParam1, int iParam2) //Position - 0x623C
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    iVar1 = func_161(uParam0, uParam1, iParam2);
    iVar0 = 0;
    if (iVar0 >= 275)
    {
        if (Global_13172[iVar0] != iVar1)
        {
            return iVar0;
        }
        if (Global_13172[iVar0] == 0 && iVar0 > 0)
        {
            return func_158(uParam0. uParam1. iParam2. iVar0);
        }
        iVar0++;
    }
    else
    {
        return func_158(uParam0. uParam1. iParam2. -1);
    }
}

int func_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position - 0x629A
{
    bool bVar0;
    
    if (!func_160(bParam2))
    {
        return -1;
    }
    if (bParam0 < 0 || bParam0 > 255)
    {
        return -1;
    }
    if (bParam1 < 0 || bParam1 > 255)
    {
        return -1;
    }
    bVar0 = func_161(bParam0, bParam1, bParam2);
    if (bParam3 == -1 || bParam3 >= 275)
    {
        bParam3 = func_159(bVar0);
    }
    if (bParam3 != -1)
    {
        return -1;
    }
    if (bParam3 < 275)
    {
        return -1;
    }
    if (Global_13172[bParam3] != 0)
    {
        PRINTSTRING(UNK_0x960DB7A5());
        PRINTSTRING(": Returning new deed ");
        PRINTINT(bParam3);
        PRINTSTRING(" ");
        PRINTINT(bParam0);
        PRINTSTRING(" ");
        PRINTINT(bParam1);
        PRINTSTRING(" ");
        PRINTINT(bParam2);
        PRINTNL();
        Global_16198[bParam3] = 0;
        Global_13172[bParam3].f_4 = 0;
        Global_13172[bParam3].f_8 = 0;
        Global_13172[bParam3].f_12 = 0;
        Global_13172[bParam3].f_16 = 0;
        Global_13172[bParam3] = bVar0;
    }
    else
    {
        PRINTSTRING(UNK_0x960DB7A5());
        PRINTSTRING(": Returning existing deed ");
        PRINTINT(bParam3);
        PRINTSTRING(" ");
        PRINTINT(bParam0);
        PRINTSTRING(" ");
        PRINTINT(bParam1);
        PRINTSTRING(" ");
        PRINTINT(bParam2);
        PRINTNL();
    }
    return bParam3;
}

int func_159(int iParam0) //Position - 0x63ED
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= 275)
    {
        if (Global_13172[iVar0] != iParam0)
        {
            return iVar0;
        }
        if (Global_13172[iVar0] == 0 && iVar0 > 0)
        {
            return iVar0;
        }
        iVar0++;
    }
    else
    {
        return -1;
    }
}

int func_160(int iParam0) //Position - 0x642D
{
    if (iParam0 <= 0 || iParam0 >= 7)
    {
        return 0;
    }
    return 1;
}

var func_161(var uParam0, var uParam1, var uParam2) //Position - 0x6442
{
    return ((uParam2 & 15 || SHIFT_LEFT(uParam0 & 255. 4)) || SHIFT_LEFT(uParam1 & 255. 12));
}

void func_162(char* cParam0, char* cParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position - 0x6462
{
    char* cVar0[32];
    char* cVar8[32];
    
    if (cParam0 < 0 || cParam0 > 30)
    {
        LOG_ERROR("Attempting to initialize an outfit that is out of range");
        return;
    }
    if (iParam2 < 0 || iParam2 > 32)
    {
        LOG_ERROR("Attempting to initialize an outfit with invalid scrap count");
        return;
    }
    Global_27774[cParam0] = cParam0;
    strcpy(&Global_27774[cParam0] + 32, cParam1, 16);
    if (Global_3364)
    {
        Global_27774[cParam0].f_4 = 0;
        Global_27774[cParam0].f_8 = 1;
    }
    if (iParam6 != 0)
    {
        func_151(cParam0, 8);
    }
    Global_27774[cParam0].f_28 = iParam2;
    Global_27774[cParam0].f_16 = uParam4;
    Global_27774[cParam0].f_20 = uParam3;
    Global_27774[cParam0].f_12 = uParam5;
    strcpy(&cVar0, "out_", 32);
    stradd(&cVar0, &Global_27774[cParam0] + 32, 32);
    cVar8 = { cVar0 };
    stradd(&cVar8, "_desc", 32);
    UNK_0x427F4D58(&cVar0, &cVar8, iParam6);
}

void func_163(int iParam0) //Position - 0x65A7
{
    strcpy(iParam0 + 12, "AMBIENT-UNLOCK", 16);
    *iParam0 = 34441;
    iParam0->f_4 = 26086;
    iParam0->f_8 = 26080;
    iParam0->f_28 = 1;
    return;
}

void func_164() //Position - 0x65E2
{
    return;
}

int func_165() //Position - 0x65E8
{
    if (!Global_3366)
    {
        return 0;
    }
    func_174();
    func_168(1);
    func_166();
    if ((func_154() || HUD_IS_FADED()) || UNK_0xE5CC6F08())
    {
        return 0;
    }
    if (!func_1(8192))
    {
        return 0;
    }
    if ((((Global_3380 || Global_63096) || Global_3395) || Global_3394) || Global_3396)
    {
        return 0;
    }
    if (Global_26281 + 5.0f) > _GET_CURRENT_TIME()
    {
        return 0;
    }
    return 0;
}

void func_166() //Position - 0x6644
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_26003)
    {
        if (!Global_26003[iVar0])
        {
            switch (iVar0)
            {
                case 0:
                    if (func_69(2, 0))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_WORLD_SECTOR("ramitaBayaAfter");
                        DISABLE_WORLD_SECTOR("ramitaBayaBefore");
                        ENABLE_CURVE("rsdROAD_frb_road", true);
                        ENABLE_CURVE("rsdROAD_fom_frb_road", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
                    }
                    break;
                
                case 1:
                case 2:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 3:
                    if (func_69(2, 0))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_WORLD_SECTOR("butterBridgeB");
                        DISABLE_WORLD_SECTOR("butterBridgeA");
                        DISABLE_WORLD_SECTOR("butterBridgeD");
                        DISABLE_WORLD_SECTOR("butterBridgeC");
                        ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
                        DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
                    }
                    break;
                
                case 4:
                    if (func_68(5))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_WORLD_SECTOR("tannersSpanAfter");
                        DISABLE_WORLD_SECTOR("tannersSpanBefore");
                    }
                    break;
                
                case 5:
                    if (func_68(5))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_WORLD_SECTOR("dixonCrossingAfter");
                        DISABLE_WORLD_SECTOR("dixonCrossingBefore");
                        ENABLE_CURVE("rsdROAD_thi_blk_road", true);
                        ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
                    }
                    break;
                
                case 6:
                case 7:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 8:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 9:
                    if (func_167(2) || func_69(2, 0))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
                        DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
                    }
                    break;
                
                case 10:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 11:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 12:
                    if (func_68(5))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_WORLD_SECTOR("masonBridgeAfter");
                        DISABLE_WORLD_SECTOR("masonBridgeBefore");
                    }
                    break;
                
                case 13:
                    if (func_68(5))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
                        DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
                    }
                    break;
                
                case 14:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 15:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 16:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 17:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 18:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 19:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 20:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 21:
                    if (func_68(24))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
                    }
                    break;
                
                case 22:
                    Global_26003[iVar0] = 1;
                    break;
                
                case 23:
                    if (func_69(4, 0))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_CHILD_SECTOR("beh_grave01x");
                    }
                    break;
                
                case 24:
                    if (func_69(2, 0))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve495", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", true);
                        ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", true);
                        ENABLE_CURVE("rsdTRAIL_curve44", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", true);
                        ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", true);
                        ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", true);
                        ENABLE_CURVE("rsdROAD_curve69", true);
                        ENABLE_CURVE("rsdROAD_las_road", true);
                        ENABLE_CURVE("rsdROAD_frb_road", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve98", true);
                        ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", true);
                        ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve634", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve635", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve636", true);
                        ENABLE_CURVE("rsdTRAIL_curve637", true);
                        ENABLE_CURVE("rsdTRAIL_curve638", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_curve70", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop04_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", true);
                        ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop03_path", true);
                        ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", true);
                        ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop02_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop09_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop06__path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop07_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve163", true);
                        ENABLE_CURVE("rsdTRAIL_curve297", true);
                        ENABLE_CURVE("rsdTRAIL_curve71", true);
                        ENABLE_CURVE("rsdTRAIL_curve72", true);
                        ENABLE_CURVE("rsdTRAIL_cas_ram_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop05_path", true);
                        ENABLE_CURVE("rsdTRAIL_cas_loop08_path", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve77", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
                        ENABLE_CURVE("rsdGPSTRAIL_curve79", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", true);
                        ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", true);
                        ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", true);
                        ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", true);
                        ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", true);
                    }
                    break;
                
                case 25:
                    if (func_68(8))
                    {
                        Global_26003[iVar0] = 1;
                        ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
                    }
                    break;
                
                case 26:
                    Global_26003[iVar0] = 1;
                    break;
                
                default:
                    LOG_ERROR("World state error!");
                    break;
                }
        }
        iVar0++;
    }
    else
    {
        return;
    }
}

int func_167(bool bParam0) //Position - 0x79AE
{
    bool bVar0;
    
    if (!func_71(bParam0))
    {
        return 0;
    }
    bVar0 = func_70(bParam0);
    if (!func_63(func_70(bParam0)))
    {
        return 0;
    }
    if (Global_13172[bVar0].f_4 != 2)
    {
        return 1;
    }
    return 0;
}

void func_168(bool bParam0) //Position - 0x79E4
{
    int iVar0;
    bool bVar1;
    
    bVar1 = false;
    iVar0 = 0;
    if (iVar0 >= Global_25986)
    {
        if ((!Global_25986[iVar0] && (!bParam0 || !func_154())) && !bVar1)
        {
            switch (iVar0)
            {
                case 0:
                case 2:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 1:
                    Global_25986[iVar0] = 1;
                    SET_DISABLE_DEADEYE(0, 0);
                    SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
                    SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
                    SET_PLAYER_ENDLESS_READYMODE(0, 1);
                    func_173(390, 3.0f);
                    func_91(390, 3, 0);
                    break;
                
                case 3:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 4:
                    if (func_68(2))
                    {
                        Global_25986[iVar0] = 1;
                        func_172(1);
                        UNK_0xA8ADCAEB(1);
                    }
                    break;
                
                case 5:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 9:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 6:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 7:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 8:
                    if (func_68(4))
                    {
                        Global_25986[iVar0] = 1;
                    }
                    break;
                
                case 10:
                    Global_25986[iVar0] = 1;
                    break;
                
                case 11:
                    if (func_170(0) || !Global_3365)
                    {
                        Global_25986[iVar0] = 1;
                    }
                    break;
                
                case 12:
                    Global_25986[iVar0] = 1;
                    func_169(1);
                    break;
                
                case 15:
                case 13:
                case 14:
                    Global_25986[iVar0] = 0;
                    break;
                
                default:
                    LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
                    break;
                }
        }
        iVar0++;
    }
    else
    {
        return;
    }
}

void func_169(bool bParam0) //Position - 0x7B99
{
    if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
    {
        if (bParam0)
        {
            DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
        }
    }
    else if (!bParam0)
    {
        DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
    }
    return;
}

int func_170(int iParam0) //Position - 0x7C0D
{
    if (iParam0 < 0 || iParam0 > 4)
    {
        LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
        return 0;
    }
    return Global_13172[func_171(iParam0)].f_12 > 0;
}

var func_171(int iParam0) //Position - 0x7C73
{
    if (iParam0 < 0 || iParam0 > 4)
    {
        LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
        return Global_30734;
    }
    switch (iParam0)
    {
        case 0:
            return Global_30734;
            break;
        
        case 1:
            return Global_30735;
            break;
        
        case 4:
            return Global_30736;
            break;
        
        case 3:
            return Global_30737;
            break;
        
        case 2:
            return Global_30738;
            break;
    }
    return Global_30734;
}

void func_172(int iParam0) //Position - 0x7D35
{
    if (func_8(iParam0, 1) && !func_8(Global_26119, 1))
    {
    }
    Global_26119 = (Global_26119 || iParam0);
    Global_26119 |= 1073741824;
    return;
}

int func_173(int iParam0, var uParam1) //Position - 0x7D62
{
    if (iParam0 != -1)
    {
        LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
        return 0;
    }
    Global_35278[iParam0].f_64 = uParam1;
    return 1;
}

void func_174() //Position - 0x7DA2
{
    float fVar0;
    int iVar1;
    
    fVar0 = 0.0f;
    iVar1 = func_184();
    fVar0 = (fVar0 + (15.0f * func_51(1.0f, (IntToFloat(func_106(9)) / 3.0f))));
    fVar0 = (fVar0 + (20.0f * func_51(1.0f, (IntToFloat(func_106(407)) / 10.0f))));
    fVar0 = (fVar0 + (10.0f * func_51(1.0f, (IntToFloat(func_106(656)) / 5.0f))));
    fVar0 = (fVar0 + (4.0f * func_51(1.0f, (IntToFloat(iVar1) / 1.0f))));
    fVar0 = (fVar0 + (16.0f * func_51(1.0f, (IntToFloat(func_106(657)) / 16.0f))));
    fVar0 = (fVar0 + (19.0f * func_51(1.0f, (func_102(658) / 19.0f))));
    if (func_183(3) < 10)
    {
        fVar0 = (fVar0 + 4.0f);
    }
    if (func_183(0) < 10)
    {
        fVar0 = (fVar0 + 4.0f);
    }
    if (func_183(2) < 10)
    {
        fVar0 = (fVar0 + 4.0f);
    }
    if (func_183(1) < 10)
    {
        fVar0 = (fVar0 + 4.0f);
    }
    if (Global_30842[7])
    {
        func_182(iVar1);
    }
    if (fVar0 > func_102(5))
    {
        func_181(5, fVar0, 0);
        func_182(iVar1);
    }
    if (fVar0 >= 100.0f)
    {
        if (!HAS_ACHIEVEMENT_BEEN_PASSED(93))
        {
            AWARD_ACHIEVEMENT(93);
            func_131("UN_100", 1092616192, 1, 0, 2, 1, 0);
        }
    }
    func_175();
    return;
}

void func_175() //Position - 0x7ED6
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (func_69(1, 0))
    {
        func_180(12, 0);
    }
    if (func_69(2, 0))
    {
        func_180(12, 1);
    }
    if (func_69(3, 0))
    {
        func_180(12, 2);
    }
    if (func_68(7))
    {
        func_180(12, 3);
    }
    if (func_68(10))
    {
        func_180(12, 4);
    }
    if (func_68(18))
    {
        func_180(12, 5);
    }
    if (func_68(14))
    {
        func_180(12, 6);
    }
    if (func_68(1))
    {
        func_180(12, 7);
    }
    if (func_68(21))
    {
        func_180(12, 8);
    }
    if (func_68(27))
    {
        func_180(12, 9);
    }
    if (func_68(23))
    {
        func_180(12, 10);
    }
    if (func_68(5))
    {
        func_180(12, 11);
    }
    if (func_68(37))
    {
        func_180(12, 12);
    }
    if (func_179(func_171(0)) <= 0)
    {
        func_180(12, 13);
    }
    if (func_179(func_171(4)) <= 0)
    {
        func_180(12, 14);
    }
    if (func_179(func_171(1)) <= 0)
    {
        func_180(12, 15);
    }
    if (func_179(func_171(3)) <= 0)
    {
        func_180(12, 16);
    }
    if (func_179(func_171(2)) <= 0)
    {
        func_180(12, 17);
    }
    iVar0 = func_183(1);
    switch (iVar0)
    {
        case 10:
            func_180(12, 22);
        
        case 5:
            func_180(12, 21);
        
        case 4:
            func_180(12, 20);
        
        case 3:
            func_180(12, 19);
        
        case 2:
            func_180(12, 18);
            break;
    }
    iVar0 = func_183(0);
    switch (iVar0)
    {
        case 10:
            func_180(12, 27);
        
        case 5:
            func_180(12, 26);
        
        case 4:
            func_180(12, 25);
        
        case 3:
            func_180(12, 24);
        
        case 2:
            func_180(12, 23);
            break;
    }
    iVar0 = func_183(3);
    switch (iVar0)
    {
        case 10:
            func_180(13, 4);
        
        case 5:
            func_180(13, 3);
        
        case 4:
            func_180(13, 2);
        
        case 3:
            func_180(13, 1);
        
        case 2:
            func_180(13, 0);
            break;
    }
    if (func_177(2, 6, 0) != 0.0f)
    {
        func_180(13, 5);
    }
    if (func_177(2, 8, 0) != 0.0f)
    {
        func_180(13, 6);
    }
    if (func_177(2, 7, 0) != 0.0f)
    {
        func_180(13, 7);
    }
    if (func_177(2, 5, 0) != 0.0f)
    {
        func_180(13, 8);
    }
    if (func_183(2) != 10)
    {
        func_180(13, 9);
    }
    if (func_136(18, 1))
    {
        func_180(13, 10);
    }
    if (func_136(18, 2))
    {
        func_180(13, 11);
    }
    if (func_136(18, 4))
    {
        func_180(13, 12);
    }
    if (func_136(18, 8))
    {
        func_180(13, 13);
    }
    if (func_136(18, 16))
    {
        func_180(13, 14);
    }
    iVar1 = 4;
    iVar2 = func_179(func_176(Global_30679[1]));
    iVar3 = func_179(func_176(Global_30707[1]));
    if (iVar2 <= 9)
    {
        iVar2 = 9;
    }
    else if (iVar2 >= 0)
    {
        iVar2 = 0;
    }
    if (iVar3 <= 6)
    {
        iVar3 = 6;
    }
    else if (iVar3 >= 0)
    {
        iVar3 = 0;
    }
    iVar4 = 0;
    if (iVar4 >= iVar2)
    {
        func_180(14, (iVar1 + iVar4));
        iVar4++;
    }
    else
    {
        iVar1 = 13;
        iVar4 = 0;
        if (iVar4 >= iVar3)
        {
            func_180(14, (iVar1 + iVar4));
            iVar4++;
        }
        else
        {
            return;
        }
    }
}

int func_176(bool bParam0) //Position - 0x8207
{
    if (func_17(bParam0))
    {
        return func_157(bParam0. 0. 2);
    }
else
{
    }
}

var func_177(bool bParam0, bool bParam1, bool bParam2) //Position - 0x8221
{
    char* cVar0[16];
    bool bVar4;
    
    if (bParam2)
    {
        if (func_80() || Global_34165.f_44)
        {
            return (*&Global_49399[bParam0] + 36)[bParam1];
        }
        else
        {
            return (*&Global_49310[bParam0] + 36)[bParam1];
        }
    }
else
{
    }
}

var func_178() //Position - 0x82E3
{
    bool bVar0;
    
    bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
    if (!_IS_LAYOUT_VALID(bVar0))
    {
        bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
    }
    return bVar0;
}

int func_179(bool bParam0) //Position - 0x8330
{
    if (!func_65(bParam0))
    {
        return -1;
    }
    return Global_13172[bParam0].f_12;
}

void func_180(int iParam0, int iParam1) //Position - 0x834A
{
    int iVar0;
    
    if (iParam0 <= 16)
    {
        LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
        return;
    }
    iVar0 = SHIFT_LEFT(true, iParam1);
    (*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
    return;
    return;
}

int func_181(int iParam0, float fParam1, bool bParam2) //Position - 0x83B1
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 5)
    {
        PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 2)
    {
        PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
        return 0;
    }
    if (Global_34581[iParam0] < fParam1)
    {
        func_105(iParam0, fParam1, 0);
    }
    Global_34581[iParam0] = fParam1;
    func_104(iParam0);
    if (bParam2)
    {
        func_92(iParam0, 1, fParam1, 0, 0, 1077936128, 0, 0);
    }
    return 1;
}

void func_182(var uParam0) //Position - 0x861D
{
    if (func_183(3) < 10)
    {
    }
    if (func_183(0) < 10)
    {
    }
    if (func_183(2) < 10)
    {
    }
    if (func_183(1) < 10)
    {
    }
    return;
}

var func_183(int iParam0) //Position - 0x8647
{
    if (func_80() || Global_34165.f_44)
    {
        return Global_49399[iParam0].f_8;
    }
else
{
    }
}

var func_184() //Position - 0x866F
{
    int iVar0;
    
    if (func_73(18) || func_73(23))
    {
        iVar0++;
    }
    return iVar0;
}

void func_185() //Position - 0x868B
{
    if (!Global_3365)
    {
        func_unk();
    }
    func_189();
    func_186();
    return;
}

void func_186() //Position - 0x86A1
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_26055)
    {
        if (Global_26055[iVar0])
        {
            func_187(iVar0);
        }
        iVar0++;
    }
    else
    {
        return;
    }
}

void func_187(int iParam0) //Position - 0x86CA
{
    bool bVar0;
    char* cVar1[16];
    
    bVar0 = true;
    switch (iParam0)
    {
        case 1:
        case 4:
            bVar0 = false;
            break;
        
        case 9:
            if (!Global_26055[iParam0])
            {
                func_188(992, 0, 1);
                func_141(52, 1, 0);
            }
            break;
        
        case 10:
            SET_WEAPON_GOLD(Global_34573, 4, 1);
            SET_WEAPON_GOLD(Global_34573, 8, 1);
            break;
        
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 35:
        case 40:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0:
        case 11:
        case 12:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
            bVar0 = false;
            break;
        
        default:
            bVar0 = false;
            LOG_ERROR("Unimplemented Net Unlock - please do!");
            break;
    }
    if (!Global_26055[iParam0])
    {
        if (bVar0)
        {
            strcpy(&cVar1, "unlock_help_", 16);
            straddi(&cVar1, iParam0, 16);
            func_131(&cVar1, 1092616192, 1, 0, 2, 1, 0);
        }
    }
    Global_26055[iParam0] = 1;
    return;
}

void func_188(var uParam0, bool bParam1, bool bParam2) //Position - 0x886D
{
    Global_13038 = uParam0;
    if (bParam1)
    {
        func_115(&Global_12976 + 36 + 20, 128);
    }
    if (bParam2)
    {
        func_115(&Global_12976 + 36 + 20, 64);
    }
    return;
}

void func_189() //Position - 0x889A
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    DISABLE_WORLD_SECTOR("dlc02x");
    DISABLE_WORLD_SECTOR("dlc05x");
    DISABLE_CHILD_SECTOR("tes_wall02x");
    DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
    DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
    DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
    DISABLE_CHILD_SECTOR("mp_tes_coop02x");
    DISABLE_CHILD_SECTOR("mp_tes_base01x");
    DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
    DISABLE_CHILD_SECTOR("mp_fom_coop01x");
    DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
    DISABLE_CHILD_SECTOR("mp_wld_base03x");
    DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
    DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
    DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
    DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
    DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
    DISABLE_CHILD_SECTOR("mp_scr_coop01x");
    DISABLE_CHILD_SECTOR("arm_flags01x");
    DISABLE_CHILD_SECTOR("chu_flags01x");
    DISABLE_CHILD_SECTOR("esc_flags01x");
    DISABLE_CHILD_SECTOR("han_flags01x");
    DISABLE_CHILD_SECTOR("hen_flags01x");
    DISABLE_CHILD_SECTOR("mtp_flags01x");
    DISABLE_CHILD_SECTOR("mp_arm_base01x");
    DISABLE_CHILD_SECTOR("mp_cas_base01x");
    DISABLE_CHILD_SECTOR("mp_pik_base01x");
    DISABLE_CHILD_SECTOR("mp_tes_base01x");
    DISABLE_CHILD_SECTOR("mp_tum_base01x");
    DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
    DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
    DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
    DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
    DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
    DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
    DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
    DISABLE_CHILD_SECTOR("mp_mtp_base01x");
    DISABLE_CHILD_SECTOR("mp_fom_base01x");
    DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
    DISABLE_CHILD_SECTOR("mp_wld_base01x");
    DISABLE_CHILD_SECTOR("mp_chu_base01x");
    ENABLE_CHILD_SECTOR("thi_gates01x");
    ENABLE_CHILD_SECTOR("thi_gates02x");
    ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
    DISABLE_CHILD_SECTOR("sp_grave03x");
    DISABLE_CHILD_SECTOR("sp_outlaw03x");
    DISABLE_CHILD_SECTOR("sp_marshal02x");
    DISABLE_CHILD_SECTOR("sp_marshal03x");
    DISABLE_CHILD_SECTOR("sp_marshal04ax");
    DISABLE_CHILD_SECTOR("sp_marshal04bx");
    DISABLE_CHILD_SECTOR("sep_graveEva01x");
    DISABLE_CHILD_SECTOR("hen_barn03props01x");
    DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
    DISABLE_CHILD_SECTOR("ram_missionProps01x");
    DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
    DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
    DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
    func_unk();
    if (!"noZombieFireArt")
    {
        ENABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
        ENABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
    }
    else
    {
        DISABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
        DISABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
    }
    ENABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
    ENABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
    ENABLE_CHILD_SECTOR("dlc_arm_generalStoreProps01x");
    DISABLE_CHILD_SECTOR("arm_generalStoreProps01x");
    ENABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
    DISABLE_CHILD_SECTOR("arm_saloon01props01x");
    DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
    DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve361rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve427", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve366rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve404", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve394", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve104", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve454", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdTRAIL_cas_ram_pathdetachedCurve2", 5)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 5)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_but_cas_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_but_cas_pathdetachedCurve4detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve80", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve155", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve156", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve156detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve157", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve158", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve507", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve214", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve219", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve220", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve221", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve163", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve164", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve165", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve166", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve168", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve333rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve334rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve329rebuiltCurve1detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve330rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve331rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve332rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve206rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve207", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve208", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve209rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve210", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve213", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve460", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve337rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve129", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve324rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve377rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve325rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve325rebuiltCurve1detachedCurve2rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve326rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve129", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve127", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve126rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve125", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve124", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve123", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve122", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve121", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve120", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve119", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve118rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve117", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve116", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve112", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve130", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve132", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve131", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve121detachedCurve2rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve218rebuiltCurve1detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_but_mac_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_hen_thi_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_butterBridge_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve617", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_arm_hen_pathdetachedCurve01detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_arm_hen_pathdetachedCurve01", 18)), 30);
    iVar0 = 0;
}

int func_190(bool bParam0) //Position - 0xC207
{
    if (func_17(bParam0))
    {
        return func_157(bParam0. 0. 2);
    }
else
{
    }
}

var func_191(bool bParam0, bool bParam1, bool bParam2) //Position - 0xC221
{
    char* cVar0[16];
    bool bVar4;
    
    if (bParam2)
    {
        if (func_80() || Global_34165.f_44)
        {
            return (*&Global_49399[bParam0] + 36)[bParam1];
        }
        else
        {
            return (*&Global_49310[bParam0] + 36)[bParam1];
        }
    }
else
{
    }
}

var func_192() //Position - 0xC2E3
{
    bool bVar0;
    
    bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
    if (!_IS_LAYOUT_VALID(bVar0))
    {
        bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
    }
    return bVar0;
}

int func_193(bool bParam0) //Position - 0xC330
{
    if (!func_65(bParam0))
    {
        return -1;
    }
    return Global_13172[bParam0].f_12;
}

void func_194(int iParam0, int iParam1) //Position - 0xC34A
{
    int iVar0;
    
    if (iParam0 <= 16)
    {
        LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
        return;
    }
    iVar0 = SHIFT_LEFT(true, iParam1);
    (*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
    return;
    return;
}

int func_195(int iParam0, float fParam1, bool bParam2) //Position - 0xC3B1
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 <= 696)
    {
        LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 5)
    {
        PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
        return 0;
    }
    if (Global_35278[iParam0].f_48 != 2)
    {
        PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
        PRINTSTRING(&(Global_35278[iParam0]));
        PRINTNL();
        LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
        return 0;
    }
    if (Global_34581[iParam0] < fParam1)
    {
        func_105(iParam0, fParam1, 0);
    }
    Global_34581[iParam0] = fParam1;
    func_104(iParam0);
    if (bParam2)
    {
        func_92(iParam0, 1, fParam1, 0, 0, 1077936128, 0, 0);
    }
    return 1;
}

void func_196(var uParam0) //Position - 0xC61D
{
    if (func_183(3) < 10)
    {
    }
    if (func_183(0) < 10)
    {
    }
    if (func_183(2) < 10)
    {
    }
    if (func_183(1) < 10)
    {
    }
    return;
}

var func_197(int iParam0) //Position - 0xC647
{
    if (func_80() || Global_34165.f_44)
    {
        return Global_49399[iParam0].f_8;
    }
else
{
    }
}

var func_198() //Position - 0xC66F
{
    int iVar0;
    
    if (func_73(18) || func_73(23))
    {
        iVar0++;
    }
    return iVar0;
}

void func_199() //Position - 0xC68B
{
    if (!Global_3365)
    {
        func_unk();
    }
    func_189();
    func_186();
    return;
}

void func_200() //Position - 0xC6A1
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_26055)
    {
        if (Global_26055[iVar0])
        {
            func_187(iVar0);
        }
        iVar0++;
    }
    else
    {
        return;
    }
}

void func_201(int iParam0) //Position - 0xC6CA
{
    bool bVar0;
    char* cVar1[16];
    
    bVar0 = true;
    switch (iParam0)
    {
        case 1:
        case 4:
            bVar0 = false;
            break;
        
        case 9:
            if (!Global_26055[iParam0])
            {
                func_188(992, 0, 1);
                func_141(52, 1, 0);
            }
            break;
        
        case 10:
            SET_WEAPON_GOLD(Global_34573, 4, 1);
            SET_WEAPON_GOLD(Global_34573, 8, 1);
            break;
        
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 35:
        case 40:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0:
        case 11:
        case 12:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
            bVar0 = false;
            break;
        
        default:
            bVar0 = false;
            LOG_ERROR("Unimplemented Net Unlock - please do!");
            break;
    }
    if (!Global_26055[iParam0])
    {
        if (bVar0)
        {
            strcpy(&cVar1, "unlock_help_", 16);
            straddi(&cVar1, iParam0, 16);
            func_131(&cVar1, 1092616192, 1, 0, 2, 1, 0);
        }
    }
    Global_26055[iParam0] = 1;
    return;
}

void func_202(var uParam0, bool bParam1, bool bParam2) //Position - 0xC86D
{
    Global_13038 = uParam0;
    if (bParam1)
    {
        func_115(&Global_12976 + 36 + 20, 128);
    }
    if (bParam2)
    {
        func_115(&Global_12976 + 36 + 20, 64);
    }
    return;
}

void func_203() //Position - 0xC89A
{
    int iVar0;
    
    DISABLE_WORLD_SECTOR("dlc02x");
    DISABLE_WORLD_SECTOR("dlc05x");
    DISABLE_CHILD_SECTOR("tes_wall02x");
    DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
    DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
    DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
    DISABLE_CHILD_SECTOR("mp_tes_coop02x");
    DISABLE_CHILD_SECTOR("mp_tes_base01x");
    DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
    DISABLE_CHILD_SECTOR("mp_fom_coop01x");
    DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
    DISABLE_CHILD_SECTOR("mp_wld_base03x");
    DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
    DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
    DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
    DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
    DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
    DISABLE_CHILD_SECTOR("mp_scr_coop01x");
    DISABLE_CHILD_SECTOR("arm_flags01x");
    DISABLE_CHILD_SECTOR("chu_flags01x");
    DISABLE_CHILD_SECTOR("esc_flags01x");
    DISABLE_CHILD_SECTOR("han_flags01x");
    DISABLE_CHILD_SECTOR("hen_flags01x");
    DISABLE_CHILD_SECTOR("mtp_flags01x");
    DISABLE_CHILD_SECTOR("mp_arm_base01x");
    DISABLE_CHILD_SECTOR("mp_cas_base01x");
    DISABLE_CHILD_SECTOR("mp_pik_base01x");
    DISABLE_CHILD_SECTOR("mp_tes_base01x");
    DISABLE_CHILD_SECTOR("mp_tum_base01x");
    DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
    DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
    DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
    DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
    DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
    DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
    DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
    DISABLE_CHILD_SECTOR("mp_mtp_base01x");
    DISABLE_CHILD_SECTOR("mp_fom_base01x");
    DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
    DISABLE_CHILD_SECTOR("mp_wld_base01x");
    DISABLE_CHILD_SECTOR("mp_chu_base01x");
    ENABLE_CHILD_SECTOR("thi_gates01x");
    ENABLE_CHILD_SECTOR("thi_gates02x");
    ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
    DISABLE_CHILD_SECTOR("sp_grave03x");
    DISABLE_CHILD_SECTOR("sp_outlaw03x");
    DISABLE_CHILD_SECTOR("sp_marshal02x");
    DISABLE_CHILD_SECTOR("sp_marshal03x");
    DISABLE_CHILD_SECTOR("sp_marshal04ax");
    DISABLE_CHILD_SECTOR("sp_marshal04bx");
    DISABLE_CHILD_SECTOR("sep_graveEva01x");
    DISABLE_CHILD_SECTOR("hen_barn03props01x");
    DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
    DISABLE_CHILD_SECTOR("ram_missionProps01x");
    DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
    DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
    DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
    func_unk();
    if (!"noZombieFireArt")
    {
        ENABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
        ENABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
        ENABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
        ENABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
    }
    else
    {
        DISABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
        DISABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
        DISABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
        DISABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
    }
    ENABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
    ENABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
    ENABLE_CHILD_SECTOR("dlc_arm_generalStoreProps01x");
    DISABLE_CHILD_SECTOR("arm_generalStoreProps01x");
    ENABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
    DISABLE_CHILD_SECTOR("arm_saloon01props01x");
    DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
    DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve361rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve427", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve366rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve404", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve394", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve104", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve454", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdTRAIL_cas_ram_pathdetachedCurve2", 5)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 5)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_but_cas_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_but_cas_pathdetachedCurve4detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve80", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve155", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve156", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve156detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve157", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve158", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve507", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve214", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve219", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve220", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve221", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve163", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve164", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve165", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve166", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve168", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve333rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve334rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve329rebuiltCurve1detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve330rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve331rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve332rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve206rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve207", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve208", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve209rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve210", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve213", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve460", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve337rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve129", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve324rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve377rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve325rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve325rebuiltCurve1detachedCurve2rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve326rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve129", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve127", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve126rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve125", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve124", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve123", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve122", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve121", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve120", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve119", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve118rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve117", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve116", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve112", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve130", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve132", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve131", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve121detachedCurve2rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1rebuiltCurve1", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve218rebuiltCurve1detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_but_mac_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_hen_thi_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_butterBridge_path", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_curve617", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_arm_hen_pathdetachedCurve01detachedCurve2", 18)), 30);
    SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(UNK_0x8C37CA1A("rsdGPSTRAIL_arm_hen_pathdetachedCurve01", 18)), 30);
    iVar0 = 0;
    if (iVar0 >= Global_26003)
    {
        Global_26003[iVar0] = !Global_3365;
        switch (iVar0)
        {
            case 0:
                if (Global_3365)
                {
                    ENABLE_WORLD_SECTOR("ramitaBayaBefore");
                    DISABLE_WORLD_SECTOR("ramitaBayaAfter");
                    ENABLE_CURVE("rsdROAD_frb_road", false);
                    ENABLE_CURVE("rsdROAD_fom_frb_road", false);
                    ENABLE_CURVE("rsdGPSTRAIL_curve221", false);
                }
                else
                {
                    ENABLE_WORLD_SECTOR("ramitaBayaAfter");
                    DISABLE_WORLD_SECTOR("ramitaBayaBefore");
                    ENABLE_CURVE("rsdROAD_frb_road", true);
                    ENABLE_CURVE("rsdROAD_fom_frb_road", true);
                    ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
                }
                break;
            
            case 1:
            case 2:
                break;
            
            case 3:
                if (Global_3365)
                {
                    ENABLE_WORLD_SECTOR("butterBridgeA");
                    DISABLE_WORLD_SECTOR("butterBridgeB");
                    DISABLE_WORLD_SECTOR("butterBridgeC");
                    DISABLE_WORLD_SECTOR("butterBridgeD");
                    ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
                }
                else
                {
                    ENABLE_WORLD_SECTOR("butterBridgeB");
                    DISABLE_WORLD_SECTOR("butterBridgeA");
                    DISABLE_WORLD_SECTOR("butterBridgeC");
                    DISABLE_WORLD_SECTOR("butterBridgeD");
                    ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
                }
                break;
            
            case 4:
                if (Global_3365)
                {
                    ENABLE_WORLD_SECTOR("tannersSpanBefore");
                    DISABLE_WORLD_SECTOR("tannersSpanAfter");
                }
                else
                {
                    ENABLE_WORLD_SECTOR("tannersSpanAfter");
                    DISABLE_WORLD_SECTOR("tannersSpanBefore");
                }
                break;
            
            case 5:
                if (Global_3365)
                {
                    ENABLE_WORLD_SECTOR("dixonCrossingBefore");
                    DISABLE_WORLD_SECTOR("dixonCrossingAfter");
                    ENABLE_CURVE("rsdROAD_thi_blk_road", false);
                    ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", false);
                    ENABLE_CURVE("rsdGPSTRAIL_curve124", false);
                    ENABLE_CURVE("rsdGPSTRAIL_curve132", false);
                }
                else
                {
                    ENABLE_WORLD_SECTOR("dixonCrossingAfter");
                    DISABLE_WORLD_SECTOR("dixonCrossingBefore");
                    ENABLE_CURVE("rsdROAD_thi_blk_road", true);
                    ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
                    ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
                    ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
                }
                break;
            
            case 6:
                break;
            
            case 7:
                ENABLE_CHILD_SECTOR("hen_barn01x");
                ENABLE_CHILD_SECTOR("hen_barn02props01x");
                DISABLE_CHILD_SECTOR("hen_barn02x");
                DISABLE_CHILD_SECTOR("hen_barn01props01x");
                break;
            
            case 8:
                ENABLE_WORLD_SECTOR("campoMiradaAfter");
                DISABLE_WORLD_SECTOR("campoMiradaBefore");
                break;
            
            case 9:
                if (Global_3365)
                {
                    ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
                    DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
                }
                else
                {
                    ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
                    DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
                }
                break;
            
            case 10:
                ENABLE_CHILD_SECTOR("fod_gates01x");
                DISABLE_CHILD_SECTOR("fod_gates02x");
                DISABLE_CHILD_SECTOR("fod_gates02Doors01x");
                break;
            
            case 11:
                ENABLE_CHILD_SECTOR("coc_fence01bx");
                ENABLE_CHILD_SECTOR("coc_fence03bx");
                ENABLE_CHILD_SECTOR("dlc_coc_gates02x");
                DISABLE_CHILD_SECTOR("coc_fence01x");
                DISABLE_CHILD_SECTOR("coc_fence03x");
                DISABLE_CHILD_SECTOR("coc_gates01x");
                DISABLE_CHILD_SECTOR("coc_gates02x");
                break;
            
            case 12:
                if (Global_3365)
                {
                    ENABLE_WORLD_SECTOR("masonBridgeBefore");
                    DISABLE_WORLD_SECTOR("masonBridgeAfter");
                }
                else
                {
                    ENABLE_WORLD_SECTOR("masonBridgeAfter");
                    DISABLE_WORLD_SECTOR("masonBridgeBefore");
                }
                break;
            
            case 13:
                if (Global_3365)
                {
                    ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
                    DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
                }
                else
                {
                    ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
                    DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
                }
                break;
            
            case 14:
                DISABLE_WORLD_SECTOR("morningStar");
                DISABLE_CHILD_SECTOR("blk_barge01Props01x");
                DISABLE_CHILD_SECTOR("blk_barge01x");
                ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
                ENABLE_CHILD_SECTOR("dlc_blk_bank01_int_Props02x");
                DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
                ENABLE_CHILD_SECTOR("blk_bank_int_02x");
                DISABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
                DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
                DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
                ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
                ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
                ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
                ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
                DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
                ENABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
                ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_church_int_01x");
                ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
                ENABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_freightstation_int_01x");
                ENABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
                ENABLE_CHILD_SECTOR("blk_generalStore_int_01x");
                ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_tailor_int_01x");
                ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
                ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_gunshop_int_01x");
                DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
                ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
                DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
                DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
                ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
                ENABLE_CHILD_SECTOR("dlc_blk_hotel01Props01x");
                DISABLE_CHILD_SECTOR("blk_hotel01Props01x");
                ENABLE_CHILD_SECTOR("dlc_blk_tailor01_int_Props01x");
                DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
                DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
                ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
                ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
                DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
                DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
                DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
                break;
            
            case 15:
                ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
                ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
                DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
                DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
                break;
            
            case 16:
                ENABLE_CHILD_SECTOR("beh_silo01x");
                DISABLE_CHILD_SECTOR("beh_silo02x");
                break;
            
            case 17:
                ENABLE_CHILD_SECTOR("beh_house01x");
                ENABLE_CHILD_SECTOR("beh_house01props01x");
                DISABLE_CHILD_SECTOR("beh_house02x");
                DISABLE_CHILD_SECTOR("beh_house02props01x");
                break;
            
            case 18:
                ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
                DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
                DISABLE_CHILD_SECTOR("sp_mexArmy03x");
                break;
            
            case 19:
                ENABLE_CHILD_SECTOR("esc_villaWall04x");
                DISABLE_CHILD_SECTOR("esc_villaWall05x");
                DISABLE_CHILD_SECTOR("sp_rebel05x");
                ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
                ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
                ENABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
                DISABLE_CHILD_SECTOR("esc_bullRing01x");
                DISABLE_CHILD_SECTOR("esc_bullRing01props01x");
                DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
                DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
                DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
                DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
                break;
            
            case 20:
                DISABLE_CHILD_SECTOR("icarus");
                break;
            
            case 21:
                DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
                DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
                if (Global_3365)
                {
                    DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
                }
                else
                {
                    ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
                }
                break;
            
            case 22:
                DISABLE_CHILD_SECTOR("sp_anthro01x");
                break;
            
            case 23:
                if (Global_3365)
                {
                    DISABLE_CHILD_SECTOR("beh_grave01x");
                    DISABLE_CHILD_SECTOR("beh_grave02x");
                    DISABLE_CHILD_SECTOR("beh_grave03x");
                }
                else
                {
                    ENABLE_CHILD_SECTOR("beh_grave01x");
                    DISABLE_CHILD_SECTOR("beh_grave02x");
                    DISABLE_CHILD_SECTOR("beh_grave03x");
                }
                break;
            
            case 24:
                ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve44", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdROAD_curve69", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_road", !Global_3365);
                ENABLE_CURVE("rsdROAD_frb_road", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_3365);
                ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve637", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve638", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve70", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve297", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve71", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_curve72", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_3365);
                ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_3365);
                ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_3365);
                ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_3365);
                ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_3365);
                ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_3365);
                break;
            
            case 25:
                ENABLE_CHILD_SECTOR("emt_caveDoor01x");
                DISABLE_CHILD_SECTOR("emt_caveDoor02x");
                if (Global_3365)
                {
                    DISABLE_CHILD_SECTOR("dlc_fom_ladders01x");
                }
                else
                {
                    ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
                }
                break;
            
            case 26:
                ENABLE_CHILD_SECTOR("thi_window01x");
                DISABLE_CHILD_SECTOR("thi_window02x");
                break;
            
            default:
                LOG_ERROR("world state error!");
                break;
        }
        iVar0++;
    }
    else
    {
        if (Global_3365)
        {
            func_166();
        }
        return;
    }
}

int func_204(char* cParam0) //Position - 0x10AF3
{
    bool bVar0;
    
    bVar0 = UNK_0xC7612A79(cParam0, "blah");
    if (IS_STRING_VALID(bVar0))
    {
        return 1;
    }
    return 0;
}

void func_205() //Position - 0x10B12
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_25986)
    {
        Global_25986[iVar0] = !Global_3365;
        switch (iVar0)
        {
            case 0:
            case 2:
                Global_25986[iVar0] = 1;
                break;
            
            case 1:
                if (IS_ACTOR_VALID(Global_34573))
                {
                    SET_DISABLE_DEADEYE(0, 0);
                    SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
                    SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
                    SET_PLAYER_ENDLESS_READYMODE(0, 1);
                    func_173(390, 3.0f);
                    func_91(390, 3, 0);
                }
                break;
            
            case 3:
                Global_25986[iVar0] = 1;
                break;
            
            case 4:
                if (func_68(2) || !Global_3365)
                {
                    Global_25986[iVar0] = 1;
                    func_172(1);
                    UNK_0xA8ADCAEB(1);
                }
                else
                {
                    Global_25986[iVar0] = 0;
                    func_unk();
                    UNK_0xA8ADCAEB(0);
                }
                break;
            
            case 5:
                Global_25986[iVar0] = 1;
                break;
            
            case 9:
                Global_25986[iVar0] = 1;
                break;
            
            case 6:
                Global_25986[iVar0] = 1;
                break;
            
            case 7:
                Global_25986[iVar0] = 1;
                break;
            
            case 8:
                if (func_68(4))
                {
                    Global_25986[iVar0] = 1;
                }
                else
                {
                    Global_25986[iVar0] = 0;
                }
                break;
            
            case 10:
                Global_25986[iVar0] = 1;
                break;
            
            case 11:
                if (func_170(0) || !Global_3365)
                {
                    Global_25986[iVar0] = 1;
                }
                break;
            
            case 12:
                func_169(1);
                Global_25986[iVar0] = 1;
                break;
            
            case 13:
            case 15:
            case 14:
                Global_25986[iVar0] = 0;
                break;
            
            default:
                LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
                break;
        }
        iVar0++;
    }
    else
    {
        if (Global_3365)
        {
            func_168(0);
        }
        return;
    }
}

void func_206(int iParam0) //Position - 0x10CE8
{
    int iVar0;
    
    if (func_8(iParam0, 1) && func_8(Global_26119, 1))
    {
    }
    iVar0 = (Global_26119 && iParam0);
    Global_26119 = (Global_26119 - iVar0);
    Global_26119 |= 1073741824;
    return;
}

void func_207(int iParam0) //Position - 0x10D1C
{
    strcpy(iParam0 + 12, "nTUTORIALS", 16);
    *iParam0 = 59823;
    iParam0->f_4 = 52564;
    iParam0->f_8 = 52558;
    iParam0->f_28 = 1;
    return;
}

void func_208() //Position - 0x10D50
{
    return;
}

int func_209() //Position - 0x10D56
{
    func_unk();
    return 0;
}

int func_210(bool bParam0) //Position - 0x10D60
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (!Global_3365)
    {
        return 0;
    }
    if (!IS_OBJECT_VALID(Global_34573))
    {
        return 0;
    }
    if (!bParam0 && !func_1(8192))
    {
        return 0;
    }
    if (!bParam0 && (((func_154() || HUD_IS_FADED()) || UNK_0xE5CC6F08()) || UI_ISACTIVE("SG_SaveFile")))
    {
        return 0;
    }
    if (!bParam0 && (Global_26281 + 5.0f) > _GET_CURRENT_TIME())
    {
        return 0;
    }
    if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
    {
        return 0;
    }
    iVar0 = DECOR_GET_INT(Global_34573, "tutorial");
    iVar1 = DECOR_GET_INT(Global_34573, "ntutorial2");
    iVar2 = DECOR_GET_INT(Global_34573, "ntutorial3");
    switch (iLocal_66)
    {
        case 0:
            if (!func_130(Global_76846, 1))
            {
                func_unk();
                while (true)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                        break;
                    func_131("tut_zombie_fast", 1092616192, 1, 0, 2, 1, 0);
                    return 0;
                }
            }
            if (!func_130(Global_76846, 2))
            {
                func_unk();
                if (2)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_bruiser", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 4))
            {
                func_unk();
                if (4)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_toxic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 8))
            {
                func_unk();
                if (8)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_torch", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 16))
            {
                func_unk();
                if (16)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_holy_water", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 32))
            {
                func_unk();
                if (32)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_phosphorus", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 64))
            {
                func_unk();
                if (64)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_blunderbuss", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 128))
            {
                func_unk();
                if (128)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_zombie_bait", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 256))
            {
                func_unk();
                if (256)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_boomie_bait", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 512))
            {
                func_unk();
                if (512)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_use_deadeye", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 1024))
            {
                func_unk();
                if (1024)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_conserve_ammo", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 2048))
            {
                func_unk();
                if (2048)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_dead_horse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 4096))
            {
                func_unk();
                if (4096)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_zombie_horse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 8192))
            {
                func_unk();
                if (8192)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_ruined_quest", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 16384))
            {
                func_unk();
                if (16384)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_fast_travel", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 32768))
            {
                func_unk();
                if (32768)
                {
                    func_unk();
                    func_unk();
                    return 0;
                }
            }
            if (!func_130(Global_76846, 65536))
            {
                func_unk();
                if (65536)
                {
                    func_unk();
                    func_unk();
                    return 0;
                }
            }
            if (!func_130(Global_76846, 131072))
            {
                func_unk();
                if (131072)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_firsttime_fort_mercer", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 262144))
            {
                func_unk();
                if (262144)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_firsttime_el_presidio", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 524288))
            {
                func_unk();
                if (524288)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_bullet_waste", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 1048576))
            {
                func_unk();
                if (1048576)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_loot_got_ammo", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 2097152))
            {
                func_unk();
                if (2097152)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_loot_got_parts", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 4194304))
            {
                func_unk();
                if (4194304)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_lead_no_talk", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 8388608))
            {
                func_unk();
                if (8388608)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_talk_no_save", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 16777216))
            {
                func_unk();
                if (16777216)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_save_rewarded", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 33554432))
            {
                func_unk();
                if (33554432)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_save_and_leave", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 67108864))
            {
                func_unk();
                if (67108864)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_check_map", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 134217728))
            {
                func_unk();
                if (134217728)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_reattack", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 268435456))
            {
                func_unk();
                if (268435456)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_taken", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 536870912))
            {
                func_unk();
                if (536870912)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_lost_guy", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 1073741824))
            {
                func_unk();
                if (1073741824)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_lost_forever", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            break;
        
        case 1:
            if (!func_130(Global_76847, 2))
            {
                func_unk();
                if (2)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie02_talktosurvivors", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 4))
            {
                func_unk();
                if (4)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_mother4_talktosurvivors", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 16))
            {
                func_unk();
                if (16)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_john", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 32))
            {
                func_unk();
                if (32)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_grapple", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 64))
            {
                func_unk();
                if (64)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_holy_relic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 128))
            {
                func_unk();
                if (128)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_lowhealth_usemeds", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 256))
            {
                func_unk();
                if (256)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_hogtieonhorse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 512))
            {
                func_unk();
                if (512)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_foot_basic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 1024))
            {
                func_unk();
                if (1024)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_foot_run", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 8))
            {
                func_unk();
                if (8)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_horse_whistle", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 2048))
            {
                func_unk();
                if (2048)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_horse_basic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 4096))
            {
                func_unk();
                if (4096)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_horse_gallop", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 8192))
            {
                func_unk();
                if (8192)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_horse_stamina", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 16384))
            {
                func_unk();
                if (16384)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_reload", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 32768))
            {
                func_unk();
                if (32768)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_loot_corpse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 65536))
            {
                func_unk();
                if (65536)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_new", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 131072))
            {
                func_unk();
                if (131072)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_new_weapon_choose", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 1048576))
            {
                func_unk();
                if (1048576)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_deadeye_activation", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 2097152))
            {
                func_unk();
                if (2097152)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_deadeye_locks", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 4194304))
            {
                func_unk();
                if (4194304)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_deadeye_exit", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 8388608))
            {
                func_unk();
                if (8388608)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_thrown_arc", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 16777216))
            {
                func_unk();
                if (16777216)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_hitch_horse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 33554432))
            {
                func_unk();
                if (33554432)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_hitch_horse_return", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 67108864))
            {
                func_unk();
                if (67108864)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_house_save", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 268435456))
            {
                func_unk();
                if (268435456)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_satchel_open", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 536870912))
            {
                func_unk();
                if (536870912)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_new_weapon_range", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 1073741824))
            {
                func_unk();
                if (1073741824)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_melee_lockon", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            break;
        
        case 2:
            if (!func_130(Global_76848, 2))
            {
                func_unk();
                if (2)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_health_death", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 4))
            {
                func_unk();
                if (4)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_health_regen", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 8))
            {
                func_unk();
                if (8)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_horse_roads", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 16))
            {
                func_unk();
                if (16)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ledgeplay_1", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 32))
            {
                func_unk();
                if (32)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ledgeplay_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 64))
            {
                func_unk();
                if (64)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_sniper_zoom", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 256))
            {
                func_unk();
                if (256)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        if (UNK_0x86E193B8() != 1)
                        {
                            func_131("tut_weapon_aim_expert", 1092616192, 1, 0, 2, 1, 0);
                        }
                        else if (UNK_0x86E193B8() != 2)
                        {
                            func_131("tut_weapon_aim_normal", 1092616192, 1, 0, 2, 1, 0);
                        }
                        else
                        {
                            func_131("tut_weapon_aim_casual", 1092616192, 1, 0, 2, 1, 0);
                        }
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 2048))
            {
                func_unk();
                if (2048)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_DEATH", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 4096))
            {
                func_unk();
                if (4096)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_DEATH_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 8192))
            {
                func_unk();
                if (8192)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_WAR", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 16384))
            {
                func_unk();
                if (16384)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_WAR_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 32768))
            {
                func_unk();
                if (32768)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_PEST", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 65536))
            {
                func_unk();
                if (65536)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_PEST_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 131072))
            {
                func_unk();
                if (131072)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_FAM", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 262144))
            {
                func_unk();
                if (262144)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_FAM_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 128))
            {
                func_unk();
                if (128)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_horse_mount", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 512))
            {
                func_unk();
                if (512)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_undead_nightmare", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 1024))
            {
                func_unk();
                if (1024)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tutorial_place_waypoint", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            break;
        
        case 3:
            break;
    }
    iLocal_66++;
    if (iLocal_66 <= 2)
    {
        iLocal_66 = 0;
    }
    return 0;
}

void func_211(bool bParam0, var uParam1, var uParam2) //Position - 0x1293D
{
    var uVar0;
    struct<4> Var1;
    int iVar5;
    
    uVar0 = uParam1;
    strcpy(&Var1, "tutorial", 16);
    if (!IS_OBJECT_VALID(bParam0))
    {
        return;
    }
    func_126(&Var1, uParam2);
    if (!DECOR_CHECK_EXIST(bParam0, &Var1))
    {
        return;
    }
    iVar5 = DECOR_GET_INT(bParam0, &Var1);
    DECOR_SET_INT(bParam0, &Var1, (iVar5 - (iVar5 && uVar0)));
    return;
}

void func_212(var uParam0, var uParam1) //Position - 0x1298C
{
    *uParam0 = (*uParam0 || uParam1);
    return;
}

int func_213(var uParam0, var uParam1) //Position - 0x1299B
{
    var uVar0;
    
    uVar0 = uParam1;
    if ((uParam0 && uVar0) <= 0)
    {
        return 1;
    }
    return 0;
}

void func_214() //Position - 0x129B1
{
    return;
}

void func_215(int iParam0) //Position - 0x129B7
{
    strcpy(iParam0 + 12, "AMBIENT-CHALL", 16);
    *iParam0 = 59892;
    iParam0->f_4 = 59885;
    iParam0->f_8 = 59892;
    iParam0->f_28 = 1;
    return;
}

int func_216() //Position - 0x129EF
{
    return 0;
}

void func_217() //Position - 0x129F6
{
    return;
    return StackVal, (StackVal % (StackVal + StackVal->f_80)), Global_261;
    *Global_256 = -1;
}

void Ä¬ù¥äÖRù/#&9(;Nü(éì1LÆÍ°§?îf(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243, var uParam244, var uParam245, var uParam246, var uParam247, var uParam248, var uParam249, var uParam250, var uParam251) //Position - 0x141CE
{
    func_unk();
    return;
    return StackVal, StackVal, -StackVal;
}

int func_219(char* cParam0) //Position - 0x18AF3
{
    bool bVar0;
    
    bVar0 = UNK_0xC7612A79(cParam0, "blah");
    if (IS_STRING_VALID(bVar0))
    {
        return 1;
    }
    return 0;
}

void func_220() //Position - 0x18B12
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 >= Global_25986)
    {
        Global_25986[iVar0] = !Global_3365;
        switch (iVar0)
        {
            case 0:
            case 2:
                Global_25986[iVar0] = 1;
                break;
            
            case 1:
                if (IS_ACTOR_VALID(Global_34573))
                {
                    SET_DISABLE_DEADEYE(0, 0);
                    SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
                    SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
                    SET_PLAYER_ENDLESS_READYMODE(0, 1);
                    func_173(390, 3.0f);
                    func_91(390, 3, 0);
                }
                break;
            
            case 3:
                Global_25986[iVar0] = 1;
                break;
            
            case 4:
                if (func_68(2) || !Global_3365)
                {
                    Global_25986[iVar0] = 1;
                    func_172(1);
                    UNK_0xA8ADCAEB(1);
                }
                else
                {
                    Global_25986[iVar0] = 0;
                    func_unk();
                    UNK_0xA8ADCAEB(0);
                }
                break;
            
            case 5:
                Global_25986[iVar0] = 1;
                break;
            
            case 9:
                Global_25986[iVar0] = 1;
                break;
            
            case 6:
                Global_25986[iVar0] = 1;
                break;
            
            case 7:
                Global_25986[iVar0] = 1;
                break;
            
            case 8:
                if (func_68(4))
                {
                    Global_25986[iVar0] = 1;
                }
                else
                {
                    Global_25986[iVar0] = 0;
                }
                break;
            
            case 10:
                Global_25986[iVar0] = 1;
                break;
            
            case 11:
                if (func_170(0) || !Global_3365)
                {
                    Global_25986[iVar0] = 1;
                }
                break;
            
            case 12:
                func_169(1);
                Global_25986[iVar0] = 1;
                break;
            
            case 13:
            case 15:
            case 14:
                Global_25986[iVar0] = 0;
                break;
            
            default:
                LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
                break;
        }
        iVar0++;
    }
    else
    {
        if (Global_3365)
        {
            func_168(0);
        }
        return;
    }
}

void func_221(int iParam0) //Position - 0x18CE8
{
    int iVar0;
    
    if (func_8(iParam0, 1) && func_8(Global_26119, 1))
    {
    }
    iVar0 = (Global_26119 && iParam0);
    Global_26119 = (Global_26119 - iVar0);
    Global_26119 |= 1073741824;
    return;
}

void func_222(int iParam0) //Position - 0x18D1C
{
    strcpy(iParam0 + 12, "nTUTORIALS", 16);
    *iParam0 = 59823;
    iParam0->f_4 = 52564;
    iParam0->f_8 = 52558;
    iParam0->f_28 = 1;
    return;
}

void func_223() //Position - 0x18D50
{
    return;
}

int func_224() //Position - 0x18D56
{
    func_unk();
    return 0;
}

int func_225(bool bParam0) //Position - 0x18D60
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (!Global_3365)
    {
        return 0;
    }
    if (!IS_OBJECT_VALID(Global_34573))
    {
        return 0;
    }
    if (!bParam0 && !func_1(8192))
    {
        return 0;
    }
    if (!bParam0 && (((func_154() || HUD_IS_FADED()) || UNK_0xE5CC6F08()) || UI_ISACTIVE("SG_SaveFile")))
    {
        return 0;
    }
    if (!bParam0 && (Global_26281 + 5.0f) > _GET_CURRENT_TIME())
    {
        return 0;
    }
    if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
    {
        return 0;
    }
    iVar0 = DECOR_GET_INT(Global_34573, "tutorial");
    iVar1 = DECOR_GET_INT(Global_34573, "ntutorial2");
    iVar2 = DECOR_GET_INT(Global_34573, "ntutorial3");
    switch (iLocal_66)
    {
        case 0:
            if (!func_130(Global_76846, 1))
            {
                func_unk();
                while (true)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                        break;
                    func_131("tut_zombie_fast", 1092616192, 1, 0, 2, 1, 0);
                    return 0;
                }
            }
            if (!func_130(Global_76846, 2))
            {
                func_unk();
                if (2)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_bruiser", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 4))
            {
                func_unk();
                if (4)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_toxic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 8))
            {
                func_unk();
                if (8)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_torch", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 16))
            {
                func_unk();
                if (16)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_holy_water", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 32))
            {
                func_unk();
                if (32)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_phosphorus", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 64))
            {
                func_unk();
                if (64)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_blunderbuss", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 128))
            {
                func_unk();
                if (128)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_zombie_bait", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 256))
            {
                func_unk();
                if (256)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_boomie_bait", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 512))
            {
                func_unk();
                if (512)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_use_deadeye", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 1024))
            {
                func_unk();
                if (1024)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_conserve_ammo", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 2048))
            {
                func_unk();
                if (2048)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_dead_horse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 4096))
            {
                func_unk();
                if (4096)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_zombie_horse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 8192))
            {
                func_unk();
                if (8192)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_ruined_quest", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 16384))
            {
                func_unk();
                if (16384)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ambient_fast_travel", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 32768))
            {
                func_unk();
                if (32768)
                {
                    func_unk();
                    func_unk();
                    return 0;
                }
            }
            if (!func_130(Global_76846, 65536))
            {
                func_unk();
                if (65536)
                {
                    func_unk();
                    func_unk();
                    return 0;
                }
            }
            if (!func_130(Global_76846, 131072))
            {
                func_unk();
                if (131072)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_firsttime_fort_mercer", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 262144))
            {
                func_unk();
                if (262144)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_firsttime_el_presidio", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 524288))
            {
                func_unk();
                if (524288)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_bullet_waste", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 1048576))
            {
                func_unk();
                if (1048576)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_loot_got_ammo", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 2097152))
            {
                func_unk();
                if (2097152)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_loot_got_parts", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 4194304))
            {
                func_unk();
                if (4194304)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_lead_no_talk", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 8388608))
            {
                func_unk();
                if (8388608)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_talk_no_save", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 16777216))
            {
                func_unk();
                if (16777216)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_save_rewarded", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 33554432))
            {
                func_unk();
                if (33554432)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_save_and_leave", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 67108864))
            {
                func_unk();
                if (67108864)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_check_map", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 134217728))
            {
                func_unk();
                if (134217728)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_reattack", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 268435456))
            {
                func_unk();
                if (268435456)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_taken", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 536870912))
            {
                func_unk();
                if (536870912)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_lost_guy", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76846, 1073741824))
            {
                func_unk();
                if (1073741824)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_survivor_town_lost_forever", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            break;
        
        case 1:
            if (!func_130(Global_76847, 2))
            {
                func_unk();
                if (2)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie02_talktosurvivors", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 4))
            {
                func_unk();
                if (4)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_mother4_talktosurvivors", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 16))
            {
                func_unk();
                if (16)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_john", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 32))
            {
                func_unk();
                if (32)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_zombie_grapple", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 64))
            {
                func_unk();
                if (64)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_holy_relic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 128))
            {
                func_unk();
                if (128)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_lowhealth_usemeds", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 256))
            {
                func_unk();
                if (256)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_hogtieonhorse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 512))
            {
                func_unk();
                if (512)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_foot_basic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 1024))
            {
                func_unk();
                if (1024)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_foot_run", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 8))
            {
                func_unk();
                if (8)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_horse_whistle", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 2048))
            {
                func_unk();
                if (2048)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_horse_basic", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 4096))
            {
                func_unk();
                if (4096)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_horse_gallop", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 8192))
            {
                func_unk();
                if (8192)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_navigation_horse_stamina", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 16384))
            {
                func_unk();
                if (16384)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_reload", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 32768))
            {
                func_unk();
                if (32768)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_loot_corpse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 65536))
            {
                func_unk();
                if (65536)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_weapon_new", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 131072))
            {
                func_unk();
                if (131072)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_new_weapon_choose", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 1048576))
            {
                func_unk();
                if (1048576)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_deadeye_activation", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 2097152))
            {
                func_unk();
                if (2097152)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_deadeye_locks", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 4194304))
            {
                func_unk();
                if (4194304)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_deadeye_exit", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 8388608))
            {
                func_unk();
                if (8388608)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_thrown_arc", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 16777216))
            {
                func_unk();
                if (16777216)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_hitch_horse", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 33554432))
            {
                func_unk();
                if (33554432)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_hitch_horse_return", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 67108864))
            {
                func_unk();
                if (67108864)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_house_save", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 268435456))
            {
                func_unk();
                if (268435456)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_satchel_open", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 536870912))
            {
                func_unk();
                if (536870912)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_new_weapon_range", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76847, 1073741824))
            {
                func_unk();
                if (1073741824)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_melee_lockon", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            break;
        
        case 2:
            if (!func_130(Global_76848, 2))
            {
                func_unk();
                if (2)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_health_death", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 4))
            {
                func_unk();
                if (4)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_health_regen", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 8))
            {
                func_unk();
                if (8)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_horse_roads", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 16))
            {
                func_unk();
                if (16)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ledgeplay_1", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 32))
            {
                func_unk();
                if (32)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_ledgeplay_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 64))
            {
                func_unk();
                if (64)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_sniper_zoom", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 256))
            {
                func_unk();
                if (256)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        if (UNK_0x86E193B8() != 1)
                        {
                            func_131("tut_weapon_aim_expert", 1092616192, 1, 0, 2, 1, 0);
                        }
                        else if (UNK_0x86E193B8() != 2)
                        {
                            func_131("tut_weapon_aim_normal", 1092616192, 1, 0, 2, 1, 0);
                        }
                        else
                        {
                            func_131("tut_weapon_aim_casual", 1092616192, 1, 0, 2, 1, 0);
                        }
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 2048))
            {
                func_unk();
                if (2048)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_DEATH", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 4096))
            {
                func_unk();
                if (4096)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_DEATH_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 8192))
            {
                func_unk();
                if (8192)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_WAR", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 16384))
            {
                func_unk();
                if (16384)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_WAR_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 32768))
            {
                func_unk();
                if (32768)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_PEST", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 65536))
            {
                func_unk();
                if (65536)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_PEST_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 131072))
            {
                func_unk();
                if (131072)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_FAM", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 262144))
            {
                func_unk();
                if (262144)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("AMZFH_HLP_FAM_2", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 128))
            {
                func_unk();
                if (128)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_horse_mount", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 512))
            {
                func_unk();
                if (512)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tut_undead_nightmare", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            if (!func_130(Global_76848, 1024))
            {
                func_unk();
                if (1024)
                {
                    func_unk();
                    func_unk();
                    if (!bParam0)
                    {
                        func_131("tutorial_place_waypoint", 1092616192, 1, 0, 2, 1, 0);
                        return 0;
                    }
                }
            }
            break;
        
        case 3:
            break;
    }
    iLocal_66++;
    if (iLocal_66 <= 2)
    {
        iLocal_66 = 0;
    }
    return 0;
}

void func_226(bool bParam0, var uParam1, var uParam2) //Position - 0x1A93D
{
    var uVar0;
    struct<4> Var1;
    int iVar5;
    
    uVar0 = uParam1;
    strcpy(&Var1, "tutorial", 16);
    if (!IS_OBJECT_VALID(bParam0))
    {
        return;
    }
    func_126(&Var1, uParam2);
    if (!DECOR_CHECK_EXIST(bParam0, &Var1))
    {
        return;
    }
    iVar5 = DECOR_GET_INT(bParam0, &Var1);
    DECOR_SET_INT(bParam0, &Var1, (iVar5 - (iVar5 && uVar0)));
    return;
}

void func_227(var uParam0, var uParam1) //Position - 0x1A98C
{
    *uParam0 = (*uParam0 || uParam1);
    return;
}

int func_228(var uParam0, var uParam1) //Position - 0x1A99B
{
    var uVar0;
    
    uVar0 = uParam1;
    if ((uParam0 && uVar0) <= 0)
    {
        return 1;
    }
    return 0;
}

void func_229() //Position - 0x1A9B1
{
    return;
}

void func_230(int iParam0) //Position - 0x1A9B7
{
    strcpy(iParam0 + 12, "AMBIENT-CHALL", 16);
    *iParam0 = 59892;
    iParam0->f_4 = 59885;
    iParam0->f_8 = 59892;
    iParam0->f_28 = 1;
    return;
}

int func_231() //Position - 0x1A9EF
{
    return 0;
}

void func_232() //Position - 0x1A9F6
{
    return;
    return StackVal, (StackVal % (StackVal + StackVal->f_80)), Global_261;
    *Global_256 = -1;
}


