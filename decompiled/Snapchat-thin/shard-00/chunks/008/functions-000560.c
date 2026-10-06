/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ab36b8; end: 100ab37bb;  */

void FUN_100ab36b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126c2828);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  puVar2 = puVar1;
  func_0x000107c43638(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100ab37bc; end: 100ab389f;  */

void FUN_100ab37bc(long param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  FUN_100ab36b8();
  func_0x000107c61180();
  func_0x000107c61428(param_2 + 0x10,auStack_58,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2;
  func_0x000107c61170(uVar1);
  if ((param_3 & 1) != 0) {
    func_0x000105b3ebe4();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      uVar1 = 0;
      func_0x000100bf9c98(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      lVar2 = param_1;
      func_0x000107c5fc54(param_1,uVar1);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61428(param_4 + 0x10,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    *(long *)(param_4 + 0x10) = lVar2;
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 100ab38a0; end: 100ab38ab; +[SCSnapchattersIncomingFriendsSyncToken table] */

undefined * FUN_100ab38a0(void)

{
  return &UNK_10f50d44a;
}



/* Entry: 100ab38ac; end: 100ab39eb; +[SCSnapchattersIncomingFriendsSyncToken immutableObjectParse:bufferSize:] */

void FUN_100ab38ac(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c2828;
  func_0x000107c610f4(PTR_PTR_1126c2828);
  lVar7 = (long)*piVar1;
  puVar8 = (ushort *)((long)piVar1 - lVar7);
  uVar5 = *puVar8;
  if (uVar5 < 5) {
    uVar9 = 0;
LAB_100ab3920:
    uVar10 = 0;
LAB_100ab3924:
    puVar11 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar8[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)piVar1 + (ulong)puVar8[2]);
    }
    if (uVar5 < 7) goto LAB_100ab3920;
    if ((ulong)puVar8[3] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)piVar1 + (ulong)puVar8[3]);
    }
    if (uVar5 < 9) goto LAB_100ab3924;
    if ((ulong)puVar8[4] == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar8[4]);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar7 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar7);
    }
    if ((10 < uVar5) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar7)), uVar6 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar6);
      goto LAB_100ab392c;
    }
  }
  uVar4 = 0;
LAB_100ab392c:
  func_0x000107c46314(puVar3,param_2,uVar9,uVar10,puVar11,uVar4);
  func_0x000107c61170(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100ab39ec; end: 100ab3aa3; -[SCSnapchattersIncomingFriendsSyncToken initWithCursor:lastFullSyncTs:rankingProfileId:lastFullRankTs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100ab39ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112707540;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791250) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791254) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791258);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791258) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279125c) = param_6;
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100ab3aa4; end: 100ab3aab;  */

void FUN_100ab3aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100ab3aac; end: 100ab3ad7;  */

void FUN_100ab3aac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ab3ad8; end: 100ab476f;  */

/* WARNING: Possible PIC construction at 0x000100ab3bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab468c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab469c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab4690) */
/* WARNING: Removing unreachable block (ram,0x000100ab46a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab3ad8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long lStack_90;
  ulong uStack_88;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar24 = param_1 + 0x38;
  func_0x000107c61148();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(ulong *)(param_1 + 0x48);
  uVar19 = *(ulong *)(param_1 + 0x50);
  plVar12 = *(long **)(param_1 + 0x58);
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  uVar18 = *(ulong *)(param_1 + 0x30);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(uVar18);
  if (lVar24 == 0) goto code_r0x000107c61170;
  func_0x000107c61174(lVar6);
  uVar23 = uVar18;
  lStack_90 = lVar6;
  func_0x000107c61184();
  lVar6 = lVar24 + _DAT_11278eb4c;
  uStack_88 = uVar23;
  FUN_1004e7b90(lVar6,uVar19);
  if (lVar6 == 0) {
    uVar23 = 1;
  }
  else {
    uVar23 = *(ulong *)(lVar6 + 0x18);
  }
  func_0x000107c3f7dc();
  if (uVar5 < uVar23) {
    uVar5 = *(ulong *)(lVar24 + _DAT_11278eb14);
    func_0x000107c306ec(uVar5,uVar1,uVar19,uVar2);
    func_0x000107c61180();
    func_0x000107c5330c();
    if (uVar5 != 0) {
      uVar19 = uVar5;
      func_0x000107c49cec();
      uVar18 = uVar5;
      if ((uVar19 & 1) == 0) {
        func_0x000100c547dc(&lStack_90,uVar5);
      }
      goto code_r0x000107c61170;
    }
    func_0x000100c547dc(&lStack_90,0);
  }
  else {
    plVar22 = (long *)(lVar24 + _DAT_11278eb50);
    uVar5 = plVar22[1];
    if (uVar5 != 0) {
      uVar7 = uVar5 - 1;
      if ((uVar5 & uVar7) == 0) {
        uVar23 = uVar7 & uVar19;
      }
      else {
        uVar23 = uVar19;
        if (uVar5 <= uVar19) {
          uVar23 = 0;
          if (uVar5 != 0) {
            uVar23 = uVar19 / uVar5;
          }
          uVar23 = uVar19 - uVar23 * uVar5;
        }
      }
      puVar8 = *(undefined8 **)(*plVar22 + uVar23 * 8);
      if (puVar8 != (undefined8 *)0x0) {
        for (plVar21 = (long *)*puVar8; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          uVar9 = plVar21[1];
          if (uVar9 == uVar19) {
            if (plVar21[2] == uVar19) goto LAB_100ab3f80;
          }
          else {
            if ((uVar5 & uVar7) == 0) {
              uVar9 = uVar9 & uVar7;
            }
            else if (uVar5 <= uVar9) {
              uVar16 = 0;
              if (uVar5 != 0) {
                uVar16 = uVar9 / uVar5;
              }
              uVar9 = uVar9 - uVar16 * uVar5;
            }
            if (uVar9 != uVar23) break;
          }
        }
      }
    }
    plVar21 = (long *)0x40;
    func_0x000107c60e20();
    plVar20 = plVar22 + 2;
    uStack_68 = 1;
    *plVar21 = 0;
    plVar21[1] = uVar19;
    plVar21[2] = uVar19;
    plVar21[4] = 0;
    plVar21[3] = 0;
    plVar21[6] = 0;
    plVar21[5] = 0;
    *(undefined4 *)(plVar21 + 7) = 0x3f800000;
    plStack_78 = plVar21;
    plStack_70 = plVar20;
    if ((uVar5 == 0) || (*(float *)(plVar22 + 4) * (float)uVar5 < (float)(plVar22[3] + 1))) {
      uVar23 = 1;
      if (2 < uVar5) {
        uVar23 = (ulong)((uVar5 & uVar5 - 1) != 0);
      }
      uVar23 = uVar23 | uVar5 << 1;
      uVar7 = (ulong)((float)(plVar22[3] + 1) / *(float *)(plVar22 + 4));
      if (uVar23 <= uVar7) {
        uVar23 = uVar7;
      }
      if (uVar23 - 1 == 0) {
        uVar23 = 2;
      }
      else if ((uVar23 & uVar23 - 1) != 0) {
        func_0x000107c60c44();
        uVar5 = plVar22[1];
      }
      if (uVar5 < uVar23) {
LAB_100ab3d44:
        if (uVar23 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_100ab46d8;
        }
        lVar24 = uVar23 << 3;
        func_0x000107c60e20();
        lVar6 = *plVar22;
        *plVar22 = lVar24;
        if (lVar6 != 0) {
          func_0x000107c60e14();
          lVar24 = *plVar22;
        }
        plVar22[1] = uVar23;
        func_0x000107c60ee4(lVar24,uVar23 << 3);
        plVar10 = (long *)plVar22[2];
        uVar5 = uVar23;
        if (plVar10 != (long *)0x0) {
          uVar7 = plVar10[1];
          uVar9 = uVar23 - 1;
          if ((uVar23 & uVar9) == 0) {
            uVar7 = uVar7 & uVar9;
          }
          else if (uVar23 <= uVar7) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar7 / uVar23;
            }
            uVar7 = uVar7 - uVar16 * uVar23;
          }
          *(long **)(lVar24 + uVar7 * 8) = plVar20;
          plVar13 = (long *)*plVar10;
          while (plVar13 != (long *)0x0) {
            uVar16 = plVar13[1];
            if ((uVar23 & uVar9) == 0) {
              uVar16 = uVar16 & uVar9;
            }
            else if (uVar23 <= uVar16) {
              uVar3 = 0;
              if (uVar23 != 0) {
                uVar3 = uVar16 / uVar23;
              }
              uVar16 = uVar16 - uVar3 * uVar23;
            }
            plVar11 = plVar13;
            if (uVar16 != uVar7) {
              if (*(long *)(lVar24 + uVar16 * 8) == 0) {
                *(long **)(lVar24 + uVar16 * 8) = plVar10;
                uVar7 = uVar16;
              }
              else {
                *plVar10 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar24 + uVar16 * 8);
                **(long **)(lVar24 + uVar16 * 8) = (long)plVar13;
                plVar11 = plVar10;
              }
            }
            plVar10 = plVar11;
            plVar13 = (long *)*plVar11;
          }
        }
      }
      else if (uVar23 < uVar5) {
        uVar7 = (ulong)((float)(ulong)plVar22[3] / *(float *)(plVar22 + 4));
        if ((uVar5 < 3) || ((uVar5 & uVar5 - 1) != 0)) {
          func_0x000107c60c44();
        }
        else if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
        if (uVar23 <= uVar7) {
          uVar23 = uVar7;
        }
        if (uVar23 < uVar5) {
          if (uVar23 != 0) goto LAB_100ab3d44;
          lVar24 = *plVar22;
          *plVar22 = 0;
          if (lVar24 != 0) {
            func_0x000107c60e14();
          }
          plVar22[1] = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = plVar22[1];
        }
      }
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar23 = uVar5 - 1 & uVar19;
      }
      else {
        uVar23 = uVar19;
        if (uVar5 <= uVar19) {
          uVar23 = 0;
          if (uVar5 != 0) {
            uVar23 = uVar19 / uVar5;
          }
          uVar23 = uVar19 - uVar23 * uVar5;
        }
      }
    }
    lVar24 = *plVar22;
    plVar10 = *(long **)(lVar24 + uVar23 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar21 = *plVar20;
      *plVar20 = (long)plVar21;
      *(long **)(lVar24 + uVar23 * 8) = plVar20;
      if (*plVar21 != 0) {
        uVar19 = *(ulong *)(*plVar21 + 8);
        if ((uVar5 & uVar5 - 1) == 0) {
          uVar19 = uVar19 & uVar5 - 1;
        }
        else if (uVar5 <= uVar19) {
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar19 / uVar5;
          }
          uVar19 = uVar19 - uVar7 * uVar5;
        }
        *(long **)(lVar24 + uVar19 * 8) = plVar21;
      }
    }
    else {
      *plVar21 = *plVar10;
      *plVar10 = (long)plVar21;
    }
    plVar22[3] = plVar22[3] + 1;
LAB_100ab3f80:
    uVar19 = plVar21[4];
    if (uVar19 != 0) {
      uVar5 = uVar19 - 1;
      if ((uVar19 & uVar5) == 0) {
        uVar23 = uVar5 & uVar2;
      }
      else {
        uVar23 = uVar2;
        if (uVar19 <= uVar2) {
          uVar23 = 0;
          if (uVar19 != 0) {
            uVar23 = uVar2 / uVar19;
          }
          uVar23 = uVar2 - uVar23 * uVar19;
        }
      }
      puVar8 = *(undefined8 **)(plVar21[3] + uVar23 * 8);
      if (puVar8 != (undefined8 *)0x0) {
        for (plVar22 = (long *)*puVar8; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
          uVar7 = plVar22[1];
          if (uVar7 == uVar2) {
            if (plVar22[2] == uVar2) goto LAB_100ab4314;
          }
          else {
            if ((uVar19 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar19 <= uVar7) {
              uVar9 = 0;
              if (uVar19 != 0) {
                uVar9 = uVar7 / uVar19;
              }
              uVar7 = uVar7 - uVar9 * uVar19;
            }
            if (uVar7 != uVar23) break;
          }
        }
      }
    }
    plVar22 = (long *)0x40;
    func_0x000107c60e20();
    plVar20 = plVar21 + 5;
    uStack_68 = 1;
    *plVar22 = 0;
    plVar22[1] = uVar2;
    plVar22[2] = uVar2;
    plVar22[4] = 0;
    plVar22[3] = 0;
    plVar22[6] = 0;
    plVar22[5] = 0;
    *(undefined4 *)(plVar22 + 7) = 0x3f800000;
    plStack_78 = plVar22;
    plStack_70 = plVar20;
    if ((uVar19 == 0) || (*(float *)(plVar21 + 7) * (float)uVar19 < (float)(plVar21[6] + 1))) {
      uVar5 = 1;
      if (2 < uVar19) {
        uVar5 = (ulong)((uVar19 & uVar19 - 1) != 0);
      }
      uVar5 = uVar5 | uVar19 << 1;
      uVar23 = (ulong)((float)(plVar21[6] + 1) / *(float *)(plVar21 + 7));
      if (uVar5 <= uVar23) {
        uVar5 = uVar23;
      }
      if (uVar5 - 1 == 0) {
        uVar5 = 2;
      }
      else if ((uVar5 & uVar5 - 1) != 0) {
        func_0x000107c60c44();
        uVar19 = plVar21[4];
      }
      if (uVar19 < uVar5) {
LAB_100ab40e0:
        uVar19 = uVar5;
        if (uVar19 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_100ab46d8;
        }
        lVar24 = uVar19 << 3;
        func_0x000107c60e20();
        lVar6 = plVar21[3];
        plVar21[3] = lVar24;
        if (lVar6 != 0) {
          func_0x000107c60e14();
          lVar24 = plVar21[3];
        }
        plVar21[4] = uVar19;
        func_0x000107c60ee4(lVar24,uVar19 << 3);
        plVar10 = (long *)plVar21[5];
        if (plVar10 != (long *)0x0) {
          uVar5 = plVar10[1];
          uVar23 = uVar19 - 1;
          if ((uVar19 & uVar23) == 0) {
            uVar5 = uVar5 & uVar23;
          }
          else if (uVar19 <= uVar5) {
            uVar7 = 0;
            if (uVar19 != 0) {
              uVar7 = uVar5 / uVar19;
            }
            uVar5 = uVar5 - uVar7 * uVar19;
          }
          *(long **)(lVar24 + uVar5 * 8) = plVar20;
          plVar13 = (long *)*plVar10;
          while (plVar13 != (long *)0x0) {
            uVar7 = plVar13[1];
            if ((uVar19 & uVar23) == 0) {
              uVar7 = uVar7 & uVar23;
            }
            else if (uVar19 <= uVar7) {
              uVar9 = 0;
              if (uVar19 != 0) {
                uVar9 = uVar7 / uVar19;
              }
              uVar7 = uVar7 - uVar9 * uVar19;
            }
            plVar11 = plVar13;
            if (uVar7 != uVar5) {
              if (*(long *)(lVar24 + uVar7 * 8) == 0) {
                *(long **)(lVar24 + uVar7 * 8) = plVar10;
                uVar5 = uVar7;
              }
              else {
                *plVar10 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar24 + uVar7 * 8);
                **(long **)(lVar24 + uVar7 * 8) = (long)plVar13;
                plVar11 = plVar10;
              }
            }
            plVar10 = plVar11;
            plVar13 = (long *)*plVar11;
          }
        }
      }
      else if (uVar5 < uVar19) {
        uVar23 = (ulong)((float)(ulong)plVar21[6] / *(float *)(plVar21 + 7));
        if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
          func_0x000107c60c44();
        }
        else if (1 < uVar23) {
          uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
        }
        if (uVar5 <= uVar23) {
          uVar5 = uVar23;
        }
        if (uVar5 < uVar19) {
          if (uVar5 != 0) goto LAB_100ab40e0;
          lVar24 = plVar21[3];
          plVar21[3] = 0;
          if (lVar24 != 0) {
            func_0x000107c60e14();
          }
          uVar19 = 0;
          plVar21[4] = 0;
        }
        else {
          uVar19 = plVar21[4];
        }
      }
      if ((uVar19 & uVar19 - 1) == 0) {
        uVar23 = uVar19 - 1 & uVar2;
      }
      else {
        uVar23 = uVar2;
        if (uVar19 <= uVar2) {
          uVar5 = 0;
          if (uVar19 != 0) {
            uVar5 = uVar2 / uVar19;
          }
          uVar23 = uVar2 - uVar5 * uVar19;
        }
      }
    }
    lVar24 = plVar21[3];
    plVar10 = *(long **)(lVar24 + uVar23 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar22 = *plVar20;
      *plVar20 = (long)plVar22;
      *(long **)(lVar24 + uVar23 * 8) = plVar20;
      if (*plVar22 != 0) {
        uVar5 = *(ulong *)(*plVar22 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar5 = uVar5 & uVar19 - 1;
        }
        else if (uVar19 <= uVar5) {
          uVar2 = 0;
          if (uVar19 != 0) {
            uVar2 = uVar5 / uVar19;
          }
          uVar5 = uVar5 - uVar2 * uVar19;
        }
        *(long **)(lVar24 + uVar5 * 8) = plVar22;
      }
    }
    else {
      *plVar22 = *plVar10;
      *plVar10 = (long)plVar22;
    }
    plVar21[6] = plVar21[6] + 1;
LAB_100ab4314:
    plVar20 = (long *)plVar22[4];
    if (plVar20 != (long *)0x0) {
      uVar19 = (long)plVar20 - 1;
      if (((ulong)plVar20 & uVar19) == 0) {
        plVar21 = (long *)(uVar19 & (ulong)plVar12);
      }
      else {
        plVar21 = plVar12;
        if (plVar20 <= plVar12) {
          uVar5 = 0;
          if (plVar20 != (long *)0x0) {
            uVar5 = (ulong)plVar12 / (ulong)plVar20;
          }
          plVar21 = (long *)((long)plVar12 - uVar5 * (long)plVar20);
        }
      }
      plVar10 = *(long **)(plVar22[3] + (long)plVar21 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_100ab43a0;
            plVar13 = (long *)plVar10[1];
            if (plVar13 != plVar12) break;
            if ((long *)plVar10[2] == plVar12) goto LAB_100ab467c;
          }
          if (((ulong)plVar20 & uVar19) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar19);
          }
          else if (plVar20 <= plVar13) {
            uVar5 = 0;
            if (plVar20 != (long *)0x0) {
              uVar5 = (ulong)plVar13 / (ulong)plVar20;
            }
            plVar13 = (long *)((long)plVar13 - uVar5 * (long)plVar20);
          }
        } while (plVar13 == plVar21);
      }
    }
LAB_100ab43a0:
    plVar13 = (long *)0x28;
    func_0x000107c60e20();
    uVar19 = uStack_88;
    lVar24 = lStack_90;
    plVar10 = plVar22 + 5;
    uStack_68 = 1;
    *plVar13 = 0;
    plVar13[1] = (long)plVar12;
    plVar13[2] = (long)plVar12;
    lStack_90 = 0;
    uStack_88 = 0;
    plVar13[4] = uVar19;
    plVar13[3] = lVar24;
    plStack_78 = plVar13;
    plStack_70 = plVar10;
    if ((plVar20 == (long *)0x0) ||
       (*(float *)(plVar22 + 7) * (float)plVar20 < (float)(plVar22[6] + 1))) {
      uVar19 = 1;
      if ((long *)0x2 < plVar20) {
        uVar19 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
      }
      plVar21 = (long *)(uVar19 | (long)plVar20 << 1);
      plVar11 = (long *)(long)((float)(plVar22[6] + 1) / *(float *)(plVar22 + 7));
      if (plVar21 <= plVar11) {
        plVar21 = plVar11;
      }
      if ((long)plVar21 - 1U == 0) {
        plVar21 = (long *)0x2;
      }
      else if (((ulong)plVar21 & (long)plVar21 - 1U) != 0) {
        func_0x000107c60c44();
        plVar20 = (long *)plVar22[4];
      }
      if (plVar20 < plVar21) {
LAB_100ab4458:
        plVar20 = plVar21;
        if ((ulong)plVar20 >> 0x3d != 0) {
          func_0x000104bd35f4();
LAB_100ab46d8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ab46dc);
          (*pcVar4)();
        }
        lVar24 = (long)plVar20 << 3;
        func_0x000107c60e20();
        lVar6 = plVar22[3];
        plVar22[3] = lVar24;
        if (lVar6 != 0) {
          func_0x000107c60e14();
          lVar24 = plVar22[3];
        }
        plVar22[4] = (long)plVar20;
        func_0x000107c60ee4(lVar24,(long)plVar20 << 3);
        plVar21 = (long *)plVar22[5];
        if (plVar21 != (long *)0x0) {
          plVar11 = (long *)plVar21[1];
          uVar19 = (long)plVar20 - 1;
          if (((ulong)plVar20 & uVar19) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar19);
          }
          else if (plVar20 <= plVar11) {
            uVar5 = 0;
            if (plVar20 != (long *)0x0) {
              uVar5 = (ulong)plVar11 / (ulong)plVar20;
            }
            plVar11 = (long *)((long)plVar11 - uVar5 * (long)plVar20);
          }
          *(long **)(lVar24 + (long)plVar11 * 8) = plVar10;
          plVar14 = (long *)*plVar21;
          while (plVar14 != (long *)0x0) {
            plVar17 = (long *)plVar14[1];
            if (((ulong)plVar20 & uVar19) == 0) {
              plVar17 = (long *)((ulong)plVar17 & uVar19);
            }
            else if (plVar20 <= plVar17) {
              uVar5 = 0;
              if (plVar20 != (long *)0x0) {
                uVar5 = (ulong)plVar17 / (ulong)plVar20;
              }
              plVar17 = (long *)((long)plVar17 - uVar5 * (long)plVar20);
            }
            plVar15 = plVar14;
            if (plVar17 != plVar11) {
              if (*(long *)(lVar24 + (long)plVar17 * 8) == 0) {
                *(long **)(lVar24 + (long)plVar17 * 8) = plVar21;
                plVar11 = plVar17;
              }
              else {
                *plVar21 = *plVar14;
                *plVar14 = **(undefined8 **)(lVar24 + (long)plVar17 * 8);
                **(long **)(lVar24 + (long)plVar17 * 8) = (long)plVar14;
                plVar15 = plVar21;
              }
            }
            plVar21 = plVar15;
            plVar14 = (long *)*plVar15;
          }
        }
      }
      else if (plVar21 < plVar20) {
        plVar11 = (long *)(long)((float)(ulong)plVar22[6] / *(float *)(plVar22 + 7));
        if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
          func_0x000107c60c44();
        }
        else if ((long *)0x1 < plVar11) {
          plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
        }
        if (plVar21 <= plVar11) {
          plVar21 = plVar11;
        }
        if (plVar21 < plVar20) {
          if (plVar21 != (long *)0x0) goto LAB_100ab4458;
          lVar24 = plVar22[3];
          plVar22[3] = 0;
          if (lVar24 != 0) {
            func_0x000107c60e14();
          }
          plVar20 = (long *)0x0;
          plVar22[4] = 0;
        }
        else {
          plVar20 = (long *)plVar22[4];
        }
      }
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        plVar21 = (long *)((long)plVar20 - 1U & (ulong)plVar12);
      }
      else {
        plVar21 = plVar12;
        if (plVar20 <= plVar12) {
          uVar19 = 0;
          if (plVar20 != (long *)0x0) {
            uVar19 = (ulong)plVar12 / (ulong)plVar20;
          }
          plVar21 = (long *)((long)plVar12 - uVar19 * (long)plVar20);
        }
      }
    }
    lVar24 = plVar22[3];
    plVar12 = *(long **)(lVar24 + (long)plVar21 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar13 = *plVar10;
      *plVar10 = (long)plVar13;
      *(long **)(lVar24 + (long)plVar21 * 8) = plVar10;
      if (*plVar13 != 0) {
        plVar12 = *(long **)(*plVar13 + 8);
        if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
          plVar12 = (long *)((ulong)plVar12 & (long)plVar20 - 1U);
        }
        else if (plVar20 <= plVar12) {
          uVar19 = 0;
          if (plVar20 != (long *)0x0) {
            uVar19 = (ulong)plVar12 / (ulong)plVar20;
          }
          plVar12 = (long *)((long)plVar12 - uVar19 * (long)plVar20);
        }
        *(long **)(lVar24 + (long)plVar12 * 8) = plVar13;
      }
    }
    else {
      *plVar13 = *plVar12;
      *plVar12 = (long)plVar13;
    }
    plVar22[6] = plVar22[6] + 1;
  }
LAB_100ab467c:
  FUN_100ab4778(&lStack_90);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 100ab4770; end: 100ab4777; -[SCDocObject changesTimestamp] */

undefined8 FUN_100ab4770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100ab4778; end: 100ab47f7;  */

long * FUN_100ab4778(long *param_1)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*param_1 != 0) {
    lStack_28 = param_1[1];
    param_1[1] = 0;
    puStack_48 = puVar1;
    uStack_40 = 0xc0000000;
    puStack_38 = &UNK_100c58d1c;
    puStack_30 = &UNK_110848088;
    FUN_10007380c(*param_1,&puStack_48);
  }
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(*param_1);
  return param_1;
}



/* Entry: 100ab47f8; end: 100ab4833;  */

void FUN_100ab47f8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100ab4834; end: 100ab4847;  */

void FUN_100ab4834(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_a8,0,0);
    uVar16 = *(ulong *)(lVar2 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      uVar14 = uVar16 & 0xffffffffffffff8;
      if (uVar16 >> 0x3e == 0) {
        uVar17 = *(ulong *)(uVar14 + 0x10);
      }
      else {
        uVar17 = uVar16;
        if (-1 < (long)uVar16) {
          uVar17 = uVar14;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar16);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar18 = 0;
      while (uVar17 != uVar18) {
        if ((uVar16 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab4aa4);
            (*pcVar5)();
          }
          uVar6 = *(ulong *)(uVar16 + uVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar18;
          func_0x0001016bb928(uVar18,uVar16,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab4aa0);
          (*pcVar5)();
        }
        uVar7 = uVar6;
        func_0x0001016bbd24();
        func_0x000107c61170(uVar6);
        uVar18 = uVar18 + 1;
        if (uVar7 != 0) {
          puVar9 = puVar10;
          func_0x000107c61550();
          if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
             (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            func_0x0001016bbae4(0,puVar8 + 1,1,puVar10);
          }
          uVar6 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar18 = *(ulong *)(uVar6 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar18) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x0001016bbae4(puVar10,uVar18 + 1,1,puVar9);
            uVar6 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar6 + 0x10) = uVar18 + 1;
          *(ulong *)(uVar6 + uVar18 * 8 + 0x20) = uVar7;
          uVar18 = uVar1;
        }
      }
      func_0x000107c6142c(uVar16);
    }
  }
  func_0x000107c61428(lVar11 + 0x10,auStack_78,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  if (lVar11 == 0) {
    func_0x000107c6142c(puVar10);
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_90,0,0);
    uVar15 = *(undefined8 *)(lVar3 + 0x10);
    uVar12 = uVar15;
    func_0x000107c61174(uVar15);
    func_0x000100ab4ab8(uVar15,PTR___swiftEmptyArrayStorage_11034f1c8,puVar10,uVar4,uVar13);
    func_0x000107c6142c(puVar10);
    func_0x000107c61574(lVar11);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 100ab4848; end: 100ab4e47;  */

void FUN_100ab4848(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_2 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
    uVar11 = *(ulong *)(param_3 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      uVar9 = uVar11 & 0xffffffffffffff8;
      if (uVar11 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar9 + 0x10);
      }
      else {
        uVar12 = uVar11;
        if (-1 < (long)uVar11) {
          uVar12 = uVar9;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar11);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar13 = 0;
      while (uVar12 != uVar13) {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab4aa4);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar13;
          func_0x0001016bb928(uVar13,uVar11,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab4aa0);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x0001016bbd24();
        func_0x000107c61170(uVar3);
        uVar13 = uVar13 + 1;
        if (uVar4 != 0) {
          puVar6 = puVar7;
          func_0x000107c61550();
          if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
             (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar5 = puVar7;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            func_0x0001016bbae4(0,puVar5 + 1,1,puVar7);
          }
          uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar13 = *(ulong *)(uVar3 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar13) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
            func_0x0001016bbae4(puVar7,uVar13 + 1,1,puVar6);
            uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar3 + 0x10) = uVar13 + 1;
          *(ulong *)(uVar3 + uVar13 * 8 + 0x20) = uVar4;
          uVar13 = uVar1;
        }
      }
      func_0x000107c6142c(uVar11);
    }
  }
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    func_0x000107c6142c(puVar7);
  }
  else {
    func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
    uVar10 = *(undefined8 *)(param_5 + 0x10);
    uVar8 = uVar10;
    func_0x000107c61174(uVar10);
    func_0x000100ab4ab8(uVar10,PTR___swiftEmptyArrayStorage_11034f1c8,puVar7,param_6,param_7);
    func_0x000107c6142c(puVar7);
    func_0x000107c61574(param_4);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100ab4e48; end: 100ab4eaf; +[IncomingFriendSyncRequest descriptor] */

void FUN_100ab4e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7910,
                        &PTR____CFConstantStringClassReference_110eee618,&PTR_DAT_1132901d8,
                        &PTR_s_syncToken_1132903b0,7,0x30,0x1c);
    puRam000000011372dff8 = puVar1;
  }
  return;
}



/* Entry: 100ab4eb0; end: 100ab4f23; -[SCLegacyMediaServices initWithLegacyMediaCache:] */

undefined1 * FUN_100ab4eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc978;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ab4f24; end: 100ab5073; -[SCLegacyMediaEntryPoint _clearCacheOnBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab4f24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272acd4);
  *(undefined **)(param_1 + _DAT_11272acd4) = puVar1;
  func_0x000107c61170(uVar5);
  param_1 = param_1 + _DAT_11272acd8;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x000107c5c320(lVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100ab5074; end: 100ab518b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ab5074(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126a7908;
    func_0x000107c610f8(PTR_PTR_1126a7908);
    func_0x000107c61174();
    func_0x000107c453e4(puVar2);
    lVar3 = param_1;
    func_0x000107c41080();
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab5180);
      (*pcVar1)();
    }
    func_0x000107c53cd4(puVar2,param_2,lVar3);
    lVar3 = param_1;
    func_0x000107c4a9e4();
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab5184);
      (*pcVar1)();
    }
    func_0x000107c55a3c(puVar2,param_2,lVar3);
    lVar3 = param_1;
    func_0x000107c4f8c0(param_1);
    func_0x000107c61180();
    func_0x000107c57b14(puVar2,param_2,lVar3);
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c4a9dc();
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab5188);
      (*pcVar1)();
    }
    func_0x000107c55a38(puVar2,param_2,lVar3);
    lVar3 = *(long *)(unaff_x20 + _DAT_112dc06d8);
    func_0x000107c3d968();
    if (lVar3 < -999) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab518c);
      (*pcVar1)();
    }
    func_0x000107c55a00(puVar2,param_2,lVar3 / 1000);
    func_0x000107c61170(param_1);
  }
  return puVar2;
}



/* Entry: 100ab518c; end: 100ab51f3; +[SyncToken descriptor] */

void FUN_100ab518c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb79b0,
                        &PTR____CFConstantStringClassReference_110eee658,&PTR_DAT_1132901d8,
                        &PTR_s_cursor_113290250,5,0x30,0x1c);
    puRam000000011372e008 = puVar1;
  }
  return;
}



/* Entry: 100ab51f4; end: 100ab5203; -[SCSnapchattersIncomingFriendsSyncToken cursor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab51f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791250);
}



/* Entry: 100ab5204; end: 100ab5237;  */

void FUN_100ab5204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ab5238; end: 100ab524b;  */

void FUN_100ab5238(void)

{
  return;
}



/* Entry: 100ab524c; end: 100ab525b; -[SCSnapchattersIncomingFriendsSyncToken lastFullSyncTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab524c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791254);
}



/* Entry: 100ab525c; end: 100ab526b; -[SCSnapchattersIncomingFriendsSyncToken rankingProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab525c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791258);
}



/* Entry: 100ab526c; end: 100ab5297; -[SCSnapchattersIncomingFriendsSyncToken lastFullRankTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab526c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279125c);
}



/* Entry: 100ab5298; end: 100ab547f;  */

undefined * FUN_100ab5298(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab5480);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001016bb618(0,param_3,param_4);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        FUN_100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*param_2)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        func_0x0001016bb618(0,param_3,param_4);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        FUN_100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 100ab5480; end: 100ab549b;  */

undefined * FUN_100ab5480(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab5480);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001016bb618(0,0x112dc0708,&PTR_PTR_1126db240);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        FUN_100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*(code *)&UNK_1016bb914)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        func_0x0001016bb618(0,0x112dc0708,&PTR_PTR_1126db240);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        FUN_100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 100ab549c; end: 100ab551b; -[SCSCLegacyTalkServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab549c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbdc20,0);
  func_0x000107c61614(param_1 + _DAT_112fbdc28,0);
  *(undefined8 *)(param_1 + _DAT_112fbdc30) = 0;
  *(undefined8 *)(param_1 + _DAT_112fbdc38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ab551c; end: 100ab55c7; -[SCSCLegacyTalkServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ab551c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100ab55c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ab55c8; end: 100ab57cb;  */

void FUN_100ab55c8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0e7fa20)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f1805e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52528();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0e7f9f0)) {
        uVar2 = 0xd00000000000001b;
        func_0x000107c605b8(0xd00000000000001b,0x800000010f180610,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AdlActiveUserSessionScopeGraphBridge/SCSCLegacyTalkServicesSaberEntryPoint.swift"
                              ,0x50,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab57cc);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58408();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ab57cc; end: 100ab57d7; -[SCSCLegacyTalkServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab57cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdc20;
  func_0x000107c61428(param_1 + _DAT_112fbdc20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab57d8; end: 100ab582b;  */

void FUN_100ab57d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab582c; end: 100ab586b;  */

undefined1 FUN_100ab582c(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113022508,auStack_38,0,0);
  return uRam0000000113022508;
}



/* Entry: 100ab586c; end: 100ab5993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ab586c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126ae748;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3d7fc();
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100ab5d64();
  lVar4 = 0x112d38300;
  FUN_1000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dc06c0))[1];
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112dc06c0);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  *(undefined **)(lVar4 + 0x30) = puVar3;
  *(undefined8 *)(lVar4 + 0x38) = param_2;
  func_0x000107c61434();
  lVar5 = lVar4;
  FUN_1001830b8(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100ab5dc4((undefined8 *)(lVar4 + 0x20));
  lVar4 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  puVar3 = puVar2;
  func_0x000107c3d704(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 100ab5994; end: 100ab599b; -[SCNGrpcCallOptionsBuilder addPreferredLocale] */

void FUN_100ab5994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addPreferredLocale__11259c470,0);
  return;
}



/* Entry: 100ab599c; end: 100ab5a83; -[SCNGrpcCallOptionsBuilder addPreferredLocale:] */

long FUN_100ab599c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4ecb0();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c51804(puVar4,param_2,&PTR____CFConstantStringClassReference_110deb478);
    func_0x000107c61180();
    func_0x000107c56bcc(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110dbeff8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c56bcc(uVar5,param_2,param_3,&PTR____CFConstantStringClassReference_110dbeff8);
  }
  return param_1;
}



/* Entry: 100ab5a84; end: 100ab5a8f; -[SCSCLegacyTalkServicesSaberEntryPoint setAdlActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab5a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdc28;
  func_0x000107c61428(param_1 + _DAT_112fbdc28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab5a90; end: 100ab5af3; -[SCSCLegacyTalkServicesSaberEntryPoint setSCLegacyTalkServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab5a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbdc30;
  func_0x000107c61428(param_1 + _DAT_112fbdc30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ab5af4; end: 100ab5b1b; -[SCSCLegacyTalkServicesSaberEntryPoint begin] */

void FUN_100ab5af4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ab5b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ab5b1c; end: 100ab5c9f;  */

/* WARNING: Possible PIC construction at 0x000100ab5c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab5c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab5c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab5c20) */
/* WARNING: Removing unreachable block (ram,0x000100ab5c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab5b1c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d9c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e60();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ab5d44();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fbdb58);
        *(undefined8 *)(lVar2 + _DAT_112fbd630) = uVar6;
        *(long *)(lVar2 + _DAT_112fbd638) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fbd638);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100ab5ca0; end: 100ab5cab; -[SCSCLegacyTalkServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab5ca0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdc20;
  func_0x000107c61428(param_1 + _DAT_112fbdc20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab5cac; end: 100ab5cef;  */

void FUN_100ab5cac(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab5cf0; end: 100ab5cfb; -[SCSCLegacyTalkServicesSaberEntryPoint adlActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab5cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdc28;
  func_0x000107c61428(param_1 + _DAT_112fbdc28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab5cfc; end: 100ab5d43; -[SCSCLegacyTalkServicesSaberEntryPoint sCLegacyTalkServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab5cfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbdc30;
  func_0x000107c61428(param_1 + _DAT_112fbdc30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ab5d44; end: 100ab5d63;  */

void FUN_100ab5d44(void)

{
  func_0x000107c61168(&PTR_PTR_11290b638);
  return;
}



/* Entry: 100ab5d64; end: 100ab5d73;  */

undefined1  [16] FUN_100ab5d64(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x1130223f8,auStack_38,0,0);
  auVar1._8_8_ = uRam0000000113022400;
  auVar1._0_8_ = uRam00000001130223f8;
  func_0x000107c61434(uRam0000000113022400);
  return auVar1;
}



/* Entry: 100ab5d74; end: 100ab5e0b;  */

undefined1  [16] FUN_100ab5d74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1,auStack_38,0,0);
  uVar2 = *param_1;
  uVar1 = *param_2;
  func_0x000107c61434(uVar1);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 100ab5e0c; end: 100ab5e33; -[SCNGrpcCallOptionsBuilder addHeaders:] */

long FUN_100ab5e0c(long param_1)

{
  func_0x000107c3d66c(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 100ab5e34; end: 100ab5e37;  */

void FUN_100ab5e34(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100ab5e38; end: 100ab5f1b; -[UNIFriendRequests incomingFriendSyncWithRequest:callOptionsBuilder:handler:] */

/* WARNING: Possible PIC construction at 0x000100ab5eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab5ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab5ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab5ed0) */
/* WARNING: Removing unreachable block (ram,0x000100ab5eb0) */
/* WARNING: Removing unreachable block (ram,0x000100ab5efc) */

void FUN_100ab5e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126ae988;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR_PTR_1126b84c0;
  func_0x000107c61158(PTR_PTR_1126b84c0);
  func_0x000107c46c68(puVar1,param_2,param_5,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100ab5f1c; end: 100ab5f83; +[IncomingFriendSyncResponse descriptor] */

void FUN_100ab5f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7960,
                        &PTR____CFConstantStringClassReference_110eee638,&PTR_DAT_1132901d8,
                        &PTR_s_metadata_1132902f0,6,0x30,0x1c);
    puRam000000011372e000 = puVar1;
  }
  return;
}



/* Entry: 100ab5f84; end: 100ab6317; -[SCSnapchattersFetchService fetchFriendsWithDeltaFriendToken:deltaIncomingFriendToken:callbackQueue:completionBlock:] */

void FUN_100ab5f84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_100ab6318();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4adac();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c56bd8(puVar1);
  }
  puVar3 = PTR_PTR_1126db110;
  func_0x000107c61160();
  func_0x000107c54c9c();
  func_0x000107c611b0();
  func_0x000107c524c8(puVar3);
  func_0x000107c611b0();
  if (lRam000000011372ddd8 != -1) {
    FUN_10002a2fc(0x11372ddd8,&PTR___NSConcreteGlobalBlock_110ab73f8);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54720(puVar3);
  func_0x000107c611b0();
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5cb0c();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x000107c44f60(uVar7);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c3ac40(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x000107c61180();
  func_0x000107c61174(puVar6);
  uVar9 = uVar8;
  func_0x000107c3ecec(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x000107c44f4c(uVar7);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61174(param_6);
  func_0x000107c5c2f4(uVar8);
  func_0x000107c611b0();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bef8b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1568,PTR_s_addFriendsAmiFriendsRoutingTagFr_11259bc68);
  return;
}



/* Entry: 100ab6318; end: 100ab6323;  */

void FUN_100ab6318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1568,PTR_s_addFriendsAmiFriendsRoutingTagFr_11259bc68);
  return;
}



/* Entry: 100ab6324; end: 100ab6333; +[_TtC16AddFriendsTweaks18SCAddFriendsTweaks addFriendsAmiFriendsRoutingTagFromTweak] */

void FUN_100ab6324(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113022290,auStack_38,0,0);
  uVar1 = uRam0000000113022298;
  uVar2 = uRam0000000113022290;
  func_0x000107c61434(uRam0000000113022298);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100ab6334; end: 100ab639b;  */

void FUN_100ab6334(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3,auStack_38,0,0);
  uVar2 = *param_3;
  uVar1 = *param_4;
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100ab639c; end: 100ab6403; -[SCSojuMessageBuilder init] */

undefined1 * FUN_100ab639c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a970;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c4cda4();
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ab6404; end: 100ab640f; +[SOJUFriendsRequestBuilder messageClass] */

void FUN_100ab6404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0a50);
  return;
}



/* Entry: 100ab6410; end: 100ab64b7; -[SCSojuMessage init] */

undefined1 * FUN_100ab6410(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a968;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c433f0();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar5);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c433e8();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c40808();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar5;
    func_0x000107c61170(uVar3);
    lVar4 = *(long *)((long)puVar1 + 0x10);
    if (lVar4 != 0) {
      func_0x000107c60ee8(lVar4,8);
      *(long *)((long)puVar1 + 0x18) = lVar4;
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ab64b8; end: 100ab6d1f; +[SCSojuMessage fieldsRegistry] */

undefined1 * FUN_100ab64b8(undefined *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined1 *puStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  long lStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  long lStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 auStack_178 [5];
  undefined8 auStack_150 [5];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  puVar3 = PTR_s_fieldsRegistry_1125c8c08;
  puStack_408 = param_1;
  func_0x000107c61134(param_1,PTR_s_fieldsRegistry_1125c8c08);
  func_0x000107c61180();
  puStack_420 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar18 = PTR_PTR_1126e1330;
    func_0x000107c61160();
    func_0x000107c4fc54(puStack_408);
    func_0x000107c43950(puVar18);
    func_0x000107c61188(puStack_408,puVar3,puVar18,1);
    puVar3 = puStack_408;
    puStack_420 = puVar18;
    func_0x000107c60b14();
    func_0x000107c61180();
    puVar18 = puVar3;
    func_0x000107c5c170();
    func_0x000107c61180();
    puVar4 = puVar18;
    func_0x000107c60af0();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar3);
    puVar3 = puStack_420;
    func_0x000107c433e8();
    func_0x000107c61180();
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    func_0x000107c61174();
    puStack_418 = puVar3;
    func_0x000107c4080c();
    if (puVar3 != (undefined *)0x0) {
      lStack_410 = *plStack_1b0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lStack_410) {
            func_0x000107c61128(puStack_418);
          }
          lVar19 = *(long *)(lStack_1b8 + (long)puVar18 * 8);
          lVar5 = lVar19;
          func_0x000107c433bc();
          lVar6 = lVar19;
          func_0x000107c433d0(lVar19);
          func_0x000107c612e0();
          lVar7 = lVar6;
          func_0x000107c613d0();
          func_0x000107c61174(lVar19);
          lVar8 = lVar19;
          func_0x000107c433bc();
          puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_120 = 0xc0000000;
          puStack_118 = &UNK_100c353f8;
          puStack_110 = &UNK_110a1e860;
          ppuVar9 = &puStack_128;
          lStack_108 = lVar8;
          func_0x000107c61184(ppuVar9);
          ppuVar10 = ppuVar9;
          func_0x000107c6103c();
          func_0x000107c61170(ppuVar9);
          lVar11 = lVar19;
          func_0x000107c433d0(lVar19);
          func_0x000107c60eec(puStack_408,lVar11,ppuVar10,&DAT_10f7412b2);
          if (puVar4 != (undefined *)0x0) {
            lVar11 = lVar6;
            FUN_100ae9c40(lVar6,lVar7);
            lVar12 = lVar19;
            func_0x000107c5ab78();
            bVar2 = (int)lVar12 == 0;
            puVar13 = auStack_150;
            if (bVar2) {
              puVar13 = auStack_178;
            }
            *puVar13 = PTR___NSConcreteStackBlock_11034bd00;
            pcVar1 = FUN_100ae9fb8;
            if (bVar2) {
              pcVar1 = FUN_100aea1d0;
            }
            puVar13[1] = 0xc0000000;
            puVar13[2] = pcVar1;
            puVar13[3] = &UNK_110d5c2f8;
            puVar13[4] = lVar8;
            func_0x000107c61184();
            puVar14 = puVar13;
            func_0x000107c6103c();
            func_0x000107c61170(puVar13);
            func_0x000107c60eec(puVar4,lVar11,puVar14,&UNK_10f7ac000);
          }
          func_0x000107c61170(lVar19);
          lVar8 = lVar19;
          func_0x000107c4cda4();
          if (lVar8 == 0) {
            lVar8 = lVar19;
            func_0x000107c433d8();
            if (lVar8 < 3) {
              if (lVar8 == 0) {
                puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_1e0 = 0xc0000000;
                puStack_1d8 = &UNK_100c36fe4;
                puStack_1d0 = &UNK_110d5c3a8;
                ppuVar9 = &puStack_1e8;
                lStack_1c8 = lVar5;
                func_0x000107c61184(ppuVar9);
                ppuVar15 = ppuVar9;
                func_0x000107c6103c();
                puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_208 = 0xc0000000;
                puStack_200 = &UNK_10b79f574;
                puStack_1f8 = &UNK_110d5c3c8;
                ppuVar10 = &puStack_210;
                lStack_1f0 = lVar5;
                func_0x000107c61184(ppuVar10);
                ppuVar16 = ppuVar10;
                func_0x000107c6103c();
                FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,"B",ppuVar15,ppuVar16);
              }
              else if (lVar8 == 1) {
                puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_230 = 0xc0000000;
                puStack_228 = &UNK_100c37fd8;
                puStack_220 = &UNK_110d5c3e8;
                ppuVar9 = &puStack_238;
                lStack_218 = lVar5;
                func_0x000107c61184(ppuVar9);
                ppuVar15 = ppuVar9;
                func_0x000107c6103c();
                puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_258 = 0xc0000000;
                puStack_250 = &UNK_10b79f5f4;
                puStack_248 = &UNK_110d5c408;
                ppuVar10 = &puStack_260;
                lStack_240 = lVar5;
                func_0x000107c61184(ppuVar10);
                ppuVar16 = ppuVar10;
                func_0x000107c6103c();
                FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,"i",ppuVar15,ppuVar16);
              }
              else {
                if (lVar8 != 2) goto LAB_100ab6c4c;
                puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_280 = 0xc0000000;
                puStack_278 = &UNK_10b79f674;
                puStack_270 = &UNK_110d5c428;
                ppuVar9 = &puStack_288;
                lStack_268 = lVar5;
                func_0x000107c61184(ppuVar9);
                ppuVar15 = ppuVar9;
                func_0x000107c6103c();
                puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_2a8 = 0xc0000000;
                puStack_2a0 = &UNK_10b79f6bc;
                puStack_298 = &UNK_110d5c448;
                ppuVar10 = &puStack_2b0;
                lStack_290 = lVar5;
                func_0x000107c61184(ppuVar10);
                ppuVar16 = ppuVar10;
                func_0x000107c6103c();
                FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,"q",ppuVar15,ppuVar16);
              }
            }
            else if (lVar8 < 5) {
              if (lVar8 == 3) {
                puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_2d0 = 0xc0000000;
                puStack_2c8 = &UNK_10b79f73c;
                puStack_2c0 = &UNK_110d5c468;
                ppuVar9 = &puStack_2d8;
                lStack_2b8 = lVar5;
                func_0x000107c61184(ppuVar9);
                ppuVar15 = ppuVar9;
                func_0x000107c6103c();
                puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_2f8 = 0xc0000000;
                puStack_2f0 = &UNK_10b79f78c;
                puStack_2e8 = &UNK_110d5c488;
                ppuVar10 = &puStack_300;
                lStack_2e0 = lVar5;
                func_0x000107c61184(ppuVar10);
                ppuVar16 = ppuVar10;
                func_0x000107c6103c();
                FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,&DAT_10f3dc184,ppuVar15,ppuVar16
                             );
              }
              else {
                if (lVar8 != 4) goto LAB_100ab6c4c;
                puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_320 = 0xc0000000;
                puStack_318 = &UNK_10b79f814;
                puStack_310 = &UNK_110d5c4a8;
                ppuVar9 = &puStack_328;
                lStack_308 = lVar5;
                func_0x000107c61184(ppuVar9);
                ppuVar15 = ppuVar9;
                func_0x000107c6103c();
                puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_348 = 0xc0000000;
                puStack_340 = &UNK_10b79f864;
                puStack_338 = &UNK_110d5c4c8;
                ppuVar10 = &puStack_350;
                lStack_330 = lVar5;
                func_0x000107c61184(ppuVar10);
                ppuVar16 = ppuVar10;
                func_0x000107c6103c();
                FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,"d",ppuVar15,ppuVar16);
              }
            }
            else if (lVar8 == 5) {
              puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_370 = 0xc0000000;
              puStack_368 = &UNK_100c35908;
              puStack_360 = &UNK_110d5c428;
              ppuVar9 = &puStack_378;
              lStack_358 = lVar5;
              func_0x000107c61184(ppuVar9);
              ppuVar15 = ppuVar9;
              func_0x000107c6103c();
              puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_398 = 0xc0000000;
              puStack_390 = &UNK_10b79f8ec;
              puStack_388 = &UNK_110d5c448;
              ppuVar10 = &puStack_3a0;
              lStack_380 = lVar5;
              func_0x000107c61184(ppuVar10);
              ppuVar16 = ppuVar10;
              func_0x000107c6103c();
              FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,"q",ppuVar15,ppuVar16);
            }
            else {
              if ((lVar8 != 6) || (lVar8 = lVar19, func_0x000107c5c1d0(), lVar8 == 0))
              goto LAB_100ab6c4c;
              lVar8 = lVar19;
              func_0x000107c5c1d0();
              lVar11 = lVar19;
              func_0x000107c429ac();
              puStack_3d0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_3c8 = 0xc0000000;
              puStack_3c0 = &UNK_100c35310;
              puStack_3b8 = &UNK_110d5c4e8;
              ppuVar9 = &puStack_3d0;
              lStack_3b0 = lVar5;
              lStack_3a8 = lVar8;
              func_0x000107c61184(ppuVar9);
              ppuVar15 = ppuVar9;
              func_0x000107c6103c();
              puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_3f8 = 0xc0000000;
              puStack_3f0 = &UNK_10b79f96c;
              puStack_3e8 = &UNK_110d5c508;
              ppuVar10 = &puStack_400;
              lStack_3e0 = lVar5;
              lStack_3d8 = lVar11;
              func_0x000107c61184(ppuVar10);
              ppuVar16 = ppuVar10;
              func_0x000107c6103c();
              FUN_100ae9d38(puStack_408,puVar4,lVar19,lVar6,lVar7,"q",ppuVar15,ppuVar16);
            }
            func_0x000107c61170(ppuVar10);
            func_0x000107c61170(ppuVar9);
          }
LAB_100ab6c4c:
          puVar18 = puVar18 + 1;
        } while (puVar3 != puVar18);
        puVar3 = puStack_418;
        func_0x000107c4080c();
      } while (puVar3 != (undefined *)0x0);
    }
    func_0x000107c61170(puStack_418);
    func_0x000107c61170(puStack_418);
  }
  puVar3 = puStack_408;
  func_0x000107c611a8(puStack_408);
  puVar18 = puVar3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_420);
    return puStack_420;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(puStack_408);
  puVar4 = puVar18;
  func_0x000107c60bd8();
  ppuVar9 = &puStack_450;
  puStack_438 = puVar3;
  pcStack_428 = FUN_100ab6d20;
  puStack_448 = PTR_PTR_11270a978;
  puStack_450 = puVar4;
  puStack_440 = puVar18;
  puStack_430 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&puStack_450,PTR_s_init_1125d9248);
  if (ppuVar9 != (undefined **)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar17 = *(undefined8 *)((long)ppuVar9 + 8);
    *(undefined **)((long)ppuVar9 + 8) = puVar3;
    func_0x000107c61170(uVar17);
  }
  return (undefined1 *)ppuVar9;
}



/* Entry: 100ab6d20; end: 100ab6d8b; -[SCSojuMessageFieldsRegistry init] */

undefined1 * FUN_100ab6d20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a978;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ab6d8c; end: 100ab6e3f; +[SOJUFriendsRequest registerMessageFields:] */

void FUN_100ab6d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_friendsSyncToken_1125cc328;
  func_0x000107c61174(param_3);
  FUN_100ab6e40(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_100ab6e40(param_3,param_2,PTR_s_requestTokenOnlyDeprecated_112545a00,
                &PTR____CFConstantStringClassReference_110f7e258,2,0,in_x6,in_x7,0,0);
  func_0x000100ae9b7c();
  FUN_100ab6e40();
  func_0x000100ae9b7c();
  FUN_100ab6e40();
  func_0x000100ae9b7c();
  FUN_100ab6e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ab6e40; end: 100ab6e4b;  */

void FUN_100ab6e40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 100ab6e4c; end: 100ab6f13; -[SCSojuMessageFieldsRegistry appendFieldWithSEL:jsonFieldNameOverride:jsonNamingStrategy:type:messageClass:stringToEnumFunc:enumToStringFunc:fieldSpecifier:] */

/* WARNING: Possible PIC construction at 0x000100ab6ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab6ee4) */

void FUN_100ab6e4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e1338;
  func_0x000107c61174(param_4);
  func_0x000107c610f4(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c40808();
  func_0x000107c45488(puVar1,param_2,param_3,param_4,param_7,param_6,param_10,param_5,param_8,
                      param_9,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100ab6f14; end: 100ab6feb; -[SCSojuMessageField initWitFieldSel:jsonFieldNameOverride:messageClass:fieldType:fieldSpecifier:jsonNamingStategy:stringToEnumFunc:enumToStringFunc:fieldIndex:] */

long FUN_100ab6f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x000107c60b18();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_5;
    func_0x000107c61170(uVar1);
    *(undefined8 *)(param_1 + 0x28) = param_6;
    *(undefined8 *)(param_1 + 0x30) = param_3;
    *(undefined8 *)(param_1 + 0x38) = param_7;
    *(undefined8 *)(param_1 + 0x40) = param_8;
    *(undefined8 *)(param_1 + 0x50) = param_9;
    *(undefined8 *)(param_1 + 0x58) = param_10;
    *(undefined8 *)(param_1 + 0x48) = param_11;
  }
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 100ab6fec; end: 100ab701f; -[GPBCodedOutputStream writeUInt64:value:] */

void FUN_100ab6fec(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x000100298744(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_4;
  if (0x7f < param_4) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_1003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_4 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_4;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 100ab7020; end: 100ab70cb;  */

void FUN_100ab7020(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  FUN_1000fbca4(auStack_48,param_2);
  FUN_1000fbca4(auStack_60,param_3);
  func_0x000100ab7324(lVar1 + 0x30,auStack_48,auStack_60);
  func_0x000107c60ca0(auStack_60);
  func_0x000107c60ca0(auStack_48);
  func_0x000100626e9c();
  return;
}



/* Entry: 100ab70cc; end: 100ab7303;  */

undefined1  [16]
FUN_100ab70cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x26;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  plVar5 = param_1 + 3;
  FUN_100102e7c();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x26 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_100ab7198;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          FUN_1000e107c(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_100ab72cc;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x26);
    }
  }
LAB_100ab7198:
  FUN_100ab733c(aplStack_78,param_1,plVar5,param_3,param_4);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_10028b120(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar3 + (long)unaff_x26 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      plVar5 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1002aa08c(aplStack_78);
  uVar1 = 1;
LAB_100ab72cc:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 100ab7304; end: 100ab733b;  */

void FUN_100ab7304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100ab70cc(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 100ab733c; end: 100ab73bf;  */

void FUN_100ab733c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uVar2 = *param_4;
  puVar1[3] = param_4[1];
  puVar1[2] = uVar2;
  puVar1[4] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar2 = *param_5;
  puVar1[6] = param_5[1];
  puVar1[5] = uVar2;
  puVar1[7] = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  return;
}



/* Entry: 100ab73c0; end: 100ab743f; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab73c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf120,0);
  func_0x000107c61614(param_1 + _DAT_112fdf128,0);
  *(undefined8 *)(param_1 + _DAT_112fdf130) = 0;
  *(undefined8 *)(param_1 + _DAT_112fdf138) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ab7440; end: 100ab74eb; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ab7440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100ab74ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ab74ec; end: 100ab76ef;  */

void FUN_100ab74ec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd00000000000002d;
    if (((param_2 == -0x2fffffffffffffd3) && (param_3 == -0x7ffffffef0e6af80)) ||
       (func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57a48();
    }
    else {
      if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e6af50)) {
        uVar2 = 0xd00000000000002b;
        func_0x000107c605b8(0xd00000000000002b,0x800000010f1950b0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PushActiveUserSessionScopeGraphBridge/SCSCNativeNotificationHandlingServicesSaberEntryPoint.swift"
                              ,0x61,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab76f0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c586a4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ab76f0; end: 100ab76fb; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab76f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf120;
  func_0x000107c61428(param_1 + _DAT_112fdf120,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab76fc; end: 100ab774f;  */

void FUN_100ab76fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab7750; end: 100ab775b; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint setPushActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7750(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf128;
  func_0x000107c61428(param_1 + _DAT_112fdf128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab775c; end: 100ab77bf; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint setSCNativeNotificationHandlingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab775c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf130;
  func_0x000107c61428(param_1 + _DAT_112fdf130,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ab77c0; end: 100ab77e7; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint begin] */

void FUN_100ab77c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ab77e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ab77e8; end: 100ab796b;  */

/* WARNING: Possible PIC construction at 0x000100ab78e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab78f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab7914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab78ec) */
/* WARNING: Removing unreachable block (ram,0x000100ab78fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab77e8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6b8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c510fc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ab7a10();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fdf070);
        *(undefined8 *)(lVar2 + _DAT_112fdeb88) = uVar6;
        *(long *)(lVar2 + _DAT_112fdeb90) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fdeb90);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100ab796c; end: 100ab7977; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab796c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf120;
  func_0x000107c61428(param_1 + _DAT_112fdf120,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab7978; end: 100ab79bb;  */

void FUN_100ab7978(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab79bc; end: 100ab79c7; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint pushActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab79bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf128;
  func_0x000107c61428(param_1 + _DAT_112fdf128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab79c8; end: 100ab7a0f; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint sCNativeNotificationHandlingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab79c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf130;
  func_0x000107c61428(param_1 + _DAT_112fdf130,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ab7a10; end: 100ab7a2f;  */

void FUN_100ab7a10(void)

{
  func_0x000107c61168(&PTR_PTR_11291d818);
  return;
}



/* Entry: 100ab7a30; end: 100ab7aaf; -[SCSCNetworkImageServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7a30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc03c0,0);
  func_0x000107c61614(param_1 + _DAT_112fc03c8,0);
  *(undefined8 *)(param_1 + _DAT_112fc03d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fc03d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ab7ab0; end: 100ab7b5b; -[SCSCNetworkImageServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ab7ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100ab7b5c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ab7b5c; end: 100ab7d5f;  */

void FUN_100ab7b5c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd00000000000002b;
    if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0e7db60)) ||
       (func_0x000107c605b8(0xd00000000000002b,0x800000010f1824a0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c534ec();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0e7db30)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f1824d0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CmActiveUserSessionScopeGraphBridge/SCSCNetworkImageServicesSaberEntryPoint.swift"
                              ,0x51,2,0x2f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab7d60);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c586b4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ab7d60; end: 100ab7d6b; -[SCSCNetworkImageServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc03c0;
  func_0x000107c61428(param_1 + _DAT_112fc03c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab7d6c; end: 100ab7dbf;  */

void FUN_100ab7d6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab7dc0; end: 100ab7dcb; -[SCSCNetworkImageServicesSaberEntryPoint setCmActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc03c8;
  func_0x000107c61428(param_1 + _DAT_112fc03c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ab7dcc; end: 100ab7e2f; -[SCSCNetworkImageServicesSaberEntryPoint setSCNetworkImageServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc03d0;
  func_0x000107c61428(param_1 + _DAT_112fc03d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ab7e30; end: 100ab7e57; -[SCSCNetworkImageServicesSaberEntryPoint begin] */

void FUN_100ab7e30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ab7e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ab7e58; end: 100ab7fdb;  */

/* WARNING: Possible PIC construction at 0x000100ab7f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab7f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab7f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab7f5c) */
/* WARNING: Removing unreachable block (ram,0x000100ab7f6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7e58(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fc78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5110c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ab8080();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fc0328);
        *(undefined8 *)(lVar2 + _DAT_112fc02e0) = uVar6;
        *(long *)(lVar2 + _DAT_112fc02e8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fc02e8);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100ab7fdc; end: 100ab7fe7; -[SCSCNetworkImageServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab7fdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc03c0;
  func_0x000107c61428(param_1 + _DAT_112fc03c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab7fe8; end: 100ab802b;  */

void FUN_100ab7fe8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab802c; end: 100ab8037; -[SCSCNetworkImageServicesSaberEntryPoint cmActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab802c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc03c8;
  func_0x000107c61428(param_1 + _DAT_112fc03c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab8038; end: 100ab807f; -[SCSCNetworkImageServicesSaberEntryPoint sCNetworkImageServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab8038(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc03d0;
  func_0x000107c61428(param_1 + _DAT_112fc03d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ab8080; end: 100ab809f;  */

void FUN_100ab8080(void)

{
  func_0x000107c61168(&PTR_PTR_11290dc70);
  return;
}



/* Entry: 100ab80a0; end: 100ab811f; -[SCSCNotificationDataServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab80a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf168,0);
  func_0x000107c61614(param_1 + _DAT_112fdf170,0);
  *(undefined8 *)(param_1 + _DAT_112fdf178) = 0;
  *(undefined8 *)(param_1 + _DAT_112fdf180) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ab8120; end: 100ab81cb; -[SCSCNotificationDataServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ab8120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100ab81cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ab81cc; end: 100ab83cf;  */

void FUN_100ab81cc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6af80)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e6aeb0)) {
          uVar2 = 0xd000000000000021;
          func_0x000107c605b8(0xd000000000000021,0x800000010f195150,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PushActiveUserSessionScopeGraphBridge/SCSCNotificationDataServicesSaberEntryPoint.swift"
                                ,0x57,2,0x36,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab83d0);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c586c0();
        goto LAB_100ab8258;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a48();
  }
LAB_100ab8258:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ab83d0; end: 100ab83db; -[SCSCNotificationDataServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab83d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf168;
  func_0x000107c61428(param_1 + _DAT_112fdf168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


