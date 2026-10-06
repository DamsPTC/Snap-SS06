/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a428454; end: 10a42861b;  */

void FUN_10a428454(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  FUN_10a0d4f94(&lStack_60,*(undefined8 *)(param_2 + 0x170),lVar9,uVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_60 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lStack_60 + 0x180) & 0xfffc;
  *(ushort *)(lStack_60 + 0x180) = uVar3 | *(ushort *)(lStack_60 + 0x180) & 1 | uVar2;
  *(ushort *)(lStack_60 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  lStack_50 = lStack_60;
  plStack_48 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar9 = lStack_60;
  *(undefined1 *)(lStack_60 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
  if (lStack_60 == param_2) {
    uVar8 = *(undefined8 *)(param_2 + 0x228);
    *(undefined1 *)(lStack_60 + 0x230) = *(undefined1 *)(param_2 + 0x230);
    *(undefined8 *)(lStack_60 + 0x228) = uVar8;
  }
  else {
    *(undefined4 *)(lStack_60 + 0x220) = *(undefined4 *)(param_2 + 0x220);
    FUN_10a0d51f8(lStack_60 + 0x200,*(undefined8 *)(param_2 + 0x210),0);
    uVar8 = *(undefined8 *)(param_2 + 0x228);
    *(undefined1 *)(lVar9 + 0x230) = *(undefined1 *)(param_2 + 0x230);
    *(undefined8 *)(lVar9 + 0x228) = uVar8;
    *(undefined4 *)(lVar9 + 600) = *(undefined4 *)(param_2 + 600);
    FUN_10a0d59e4(lVar9 + 0x238,*(undefined8 *)(param_2 + 0x248),0);
  }
  *param_1 = lStack_60;
  param_1[1] = (long)plStack_58;
  return;
}



/* Entry: 10a42861c; end: 10a42865b;  */

void FUN_10a42861c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 9);
  FUN_10a44a358(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a42865c; end: 10a428a3b;  */

void FUN_10a42865c(undefined4 param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined4 uStack_88;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  plVar6 = (long *)(param_2 + 0x48);
  FUN_10a440978(plVar6);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110bd64a8);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110bd64a8);
    plVar4 = param_3;
    (**(code **)(*param_3 + 0x208))();
    if ((int)plVar4 != 0) {
      iVar13 = 0;
      plVar1 = (long *)(param_2 + 0x58);
      do {
        (**(code **)(*param_3 + 0x218))(param_3,iVar13);
        (**(code **)(*param_3 + 0xa0))(&plStack_78,param_3,&PTR_DAT_110bd9390);
        (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110bd64c8);
        plStack_98 = plStack_70;
        plStack_a0 = plStack_78;
        lStack_90 = lStack_68;
        plVar5 = (long *)0x38;
        uStack_88 = param_1;
        __Znwm();
        lStack_68 = 0;
        *plVar5 = 0;
        plVar5[1] = 0;
        plStack_78 = plVar5;
        plStack_70 = plVar6;
        FUN_10a0d09b4(plVar5 + 2,&plStack_a0);
        plVar3 = plStack_78;
        *(undefined4 *)(plVar5 + 6) = uStack_88;
        lStack_68 = CONCAT71(lStack_68._1_7_,1);
        plVar5[1] = plVar5[5];
        uVar8 = plStack_78[5];
        plStack_78[1] = uVar8;
        uVar7 = *(ulong *)(param_2 + 0x50);
        if (uVar7 != 0) {
          uVar9 = uVar7 - 1;
          if ((uVar7 & uVar9) == 0) {
            uVar10 = uVar9 & uVar8;
          }
          else {
            uVar10 = uVar8;
            if (uVar7 <= uVar8) {
              uVar10 = 0;
              if (uVar7 != 0) {
                uVar10 = uVar8 / uVar7;
              }
              uVar10 = uVar8 - uVar10 * uVar7;
            }
          }
          plVar5 = *(long **)(*plVar6 + uVar10 * 8);
          if (plVar5 != (long *)0x0) {
            do {
              while( true ) {
                plVar5 = (long *)*plVar5;
                if (plVar5 == (long *)0x0) goto LAB_10a428814;
                uVar12 = plVar5[1];
                if (uVar12 != uVar8) break;
                if (plVar5[5] == uVar8) {
                  plStack_78 = (long *)0x0;
                  if (plVar3 != (long *)0x0) {
                    func_0x00010a0d60d8(&plStack_70,plVar3);
                  }
                  goto LAB_10a428904;
                }
              }
              if ((uVar7 & uVar9) == 0) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar7 <= uVar12) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar12 / uVar7;
                }
                uVar12 = uVar12 - uVar2 * uVar7;
              }
            } while (uVar12 == uVar10);
          }
        }
LAB_10a428814:
        fVar14 = (float)(*(long *)(param_2 + 0x60) + 1);
        if ((uVar7 == 0) || (*(float *)(param_2 + 0x68) * (float)uVar7 < fVar14)) {
          uVar8 = 1;
          if (2 < uVar7) {
            uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
          }
          uVar8 = uVar8 | uVar7 << 1;
          uVar7 = (ulong)(fVar14 / *(float *)(param_2 + 0x68));
          if (uVar8 <= uVar7) {
            uVar8 = uVar7;
          }
          FUN_10a1f9fe4(plVar6,uVar8);
          uVar7 = *(ulong *)(param_2 + 0x50);
          uVar8 = plVar3[1];
        }
        uVar9 = uVar7 - 1;
        if ((uVar7 & uVar9) == 0) {
          uVar8 = uVar9 & uVar8;
        }
        else if (uVar7 <= uVar8) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar8 / uVar7;
          }
          uVar8 = uVar8 - uVar10 * uVar7;
        }
        lVar11 = *plVar6;
        plVar5 = *(long **)(lVar11 + uVar8 * 8);
        if (plVar5 == (long *)0x0) {
          *plVar3 = *plVar1;
          *plVar1 = (long)plVar3;
          *(long **)(lVar11 + uVar8 * 8) = plVar1;
          if (*plVar3 != 0) {
            uVar8 = *(ulong *)(*plVar3 + 8);
            if ((uVar7 & uVar9) == 0) {
              uVar8 = uVar8 & uVar9;
            }
            else if (uVar7 <= uVar8) {
              uVar9 = 0;
              if (uVar7 != 0) {
                uVar9 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar9 * uVar7;
            }
            plVar5 = (long *)(*plVar6 + uVar8 * 8);
            goto LAB_10a4288f4;
          }
        }
        else {
          *plVar3 = *plVar5;
LAB_10a4288f4:
          *plVar5 = (long)plVar3;
        }
        *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_10a428904:
        param_1 = uStack_88;
        FUN_10a428274(uStack_88,*(undefined4 *)(param_2 + 0x3c),param_2,&plStack_a0);
        (**(code **)(*param_3 + 0x220))(param_3);
        if (lStack_90 < 0) {
          __ZdlPv(plStack_a0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != (int)plVar4);
    }
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  plVar6 = param_3;
  (**(code **)(*param_3 + 0x58))(param_3,&PTR_DAT_110bd64e8,*(undefined1 *)(param_2 + 0x38));
  *(char *)(param_2 + 0x38) = (char)plVar6;
  (**(code **)(*param_3 + 0x58))(param_3,&PTR_s_enabled_110bd6508,0);
  *(char *)(param_2 + 0x40) = (char)param_3;
  return;
}



/* Entry: 10a428a3c; end: 10a428b2f;  */

void FUN_10a428a3c(long param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd64a8);
  for (plVar1 = *(long **)(param_1 + 0x58); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110bd9390,plVar1 + 2);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(plVar1 + 6),param_2,&PTR_DAT_110bd64c8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd64e8,*(undefined1 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010a428b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_enabled_110bd6508,*(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 10a428b30; end: 10a428b77;  */

bool FUN_10a428b30(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x10;
  FUN_10a44a390();
  if (lVar2 == 0) {
    param_1 = param_1 + 0x48;
    func_0x00010a44a430(param_1,param_2);
    bVar1 = param_1 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10a428b78; end: 10a428c03;  */

void FUN_10a428b78(undefined4 param_1,long param_2)

{
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  FUN_10a0d09b4(auStack_60);
  param_2 = param_2 + 0x48;
  puStack_38 = (undefined1 *)auStack_60;
  FUN_10a1f9da4(param_2,auStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  *(undefined4 *)(param_2 + 0x30) = param_1;
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10a428c04; end: 10a428f83;  */

void FUN_10a428c04(float param_1,float param_2,long param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  float fVar10;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  float fStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  float fStack_88;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar1 = (long *)(param_3 + 0x10);
  plVar7 = plVar1;
  func_0x00010a44a4d0(plVar1,param_4[3]);
  if (plVar7 == (long *)0x0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_a0,*param_4,param_4[1]);
    }
    else {
      lStack_98 = param_4[1];
      lStack_a0 = *param_4;
      lStack_90 = param_4[2];
    }
    fStack_88 = param_1;
    if (lStack_90 < 0) {
      func_0x000107c3192c(&lStack_d0,lStack_a0,lStack_98);
    }
    else {
      lStack_c8 = lStack_98;
      lStack_d0 = lStack_a0;
      lStack_c0 = lStack_90;
    }
    uStack_ac = 0x7f7fffff;
    uVar9 = param_4[3];
    uVar8 = *(ulong *)(param_3 + 0x18);
    fStack_b8 = fStack_88;
    fStack_b0 = param_2;
    if (uVar8 != 0) {
      uVar3 = uVar8 - 1;
      if ((uVar8 & uVar3) == 0) {
        unaff_x25 = uVar3 & uVar9;
      }
      else {
        unaff_x25 = uVar9;
        if (uVar8 <= uVar9) {
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar6 = uVar9 / uVar8;
          }
          unaff_x25 = uVar9 - uVar6 * uVar8;
        }
      }
      puVar5 = *(undefined8 **)(*plVar1 + unaff_x25 * 8);
      if (puVar5 != (undefined8 *)0x0) {
        for (plVar7 = (long *)*puVar5; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          uVar6 = plVar7[1];
          if (uVar6 == uVar9) {
            if (plVar7[5] == uVar9) goto LAB_10a428ed8;
          }
          else {
            if ((uVar8 & uVar3) == 0) {
              uVar6 = uVar6 & uVar3;
            }
            else if (uVar8 <= uVar6) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar2 * uVar8;
            }
            if (uVar6 != unaff_x25) break;
          }
        }
      }
    }
    plVar7 = (long *)0x58;
    __Znwm();
    uStack_68 = 0;
    *plVar7 = 0;
    plVar7[1] = uVar9;
    plStack_78 = plVar7;
    plStack_70 = plVar1;
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(plVar7 + 2,*param_4,param_4[1]);
      uVar3 = param_4[3];
    }
    else {
      lVar4 = *param_4;
      plVar7[3] = param_4[1];
      plVar7[2] = lVar4;
      plVar7[4] = param_4[2];
      uVar3 = uVar9;
    }
    plVar7[5] = uVar3;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[10] = 0;
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    fVar10 = (float)(*(long *)(param_3 + 0x28) + 1);
    if ((uVar8 == 0) || (*(float *)(param_3 + 0x30) * (float)uVar8 < fVar10)) {
      uVar3 = 1;
      if (2 < uVar8) {
        uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
      }
      uVar3 = uVar3 | uVar8 << 1;
      uVar8 = (ulong)(fVar10 / *(float *)(param_3 + 0x30));
      if (uVar3 <= uVar8) {
        uVar3 = uVar8;
      }
      FUN_10a44a56c(plVar1,uVar3);
      uVar8 = *(ulong *)(param_3 + 0x18);
      if ((uVar8 & uVar8 - 1) == 0) {
        unaff_x25 = uVar8 - 1 & uVar9;
      }
      else {
        unaff_x25 = uVar9;
        if (uVar8 <= uVar9) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar9 / uVar8;
          }
          unaff_x25 = uVar9 - uVar3 * uVar8;
        }
      }
    }
    lVar4 = *plVar1;
    plVar7 = *(long **)(lVar4 + unaff_x25 * 8);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)(param_3 + 0x20);
      *plStack_78 = *plVar7;
      *plVar7 = (long)plStack_78;
      *(long **)(lVar4 + unaff_x25 * 8) = plVar7;
      if (*plStack_78 != 0) {
        uVar9 = *(ulong *)(*plStack_78 + 8);
        if ((uVar8 & uVar8 - 1) == 0) {
          uVar9 = uVar9 & uVar8 - 1;
        }
        else if (uVar8 <= uVar9) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar3 * uVar8;
        }
        *(long **)(*plVar1 + uVar9 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar7;
      *plVar7 = (long)plStack_78;
    }
    *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + 1;
    plVar7 = plStack_78;
LAB_10a428ed8:
    if (*(char *)((long)plVar7 + 0x47) < '\0') {
      __ZdlPv(plVar7[6]);
    }
    plVar7[7] = lStack_c8;
    plVar7[6] = lStack_d0;
    plVar7[8] = lStack_c0;
    *(float *)(plVar7 + 9) = fStack_b8;
    plVar7[10] = CONCAT44(uStack_ac,fStack_b0);
    if (lStack_90 < 0) {
      __ZdlPv(lStack_a0);
    }
  }
  else if (*(float *)(plVar7 + 9) != param_1) {
    *(float *)(plVar7 + 9) = param_1;
    fVar10 = *(float *)(plVar7 + 10);
    *(float *)(plVar7 + 10) = param_2;
    *(float *)((long)plVar7 + 0x54) = param_2 - fVar10;
  }
  return;
}



/* Entry: 10a428f84; end: 10a42904f;  */

ulong FUN_10a428f84(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined1 uStack_89;
  undefined1 *puStack_88;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  puVar4 = auStack_50;
  FUN_10a0d09b4(auStack_50);
  lVar1 = param_2 + 0x10;
  FUN_10a44a390(lVar1,auStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (lVar1 == 0) {
    FUN_10a0d09b4(auStack_50,param_3);
    param_2 = param_2 + 0x48;
    func_0x00010a44a430(param_2,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if (param_2 == 0) {
      puVar2 = &UNK_10f6579d3;
      FUN_10a00946c();
      if (cStack_39 < '\0') {
        __ZdlPv(auStack_50[0]);
      }
      __Unwind_Resume();
      FUN_10a0d09b4(auStack_b0);
      puVar3 = puVar2;
      FUN_10a428b30(puVar2,auStack_b0);
      if (cStack_99 < '\0') {
        __ZdlPv(auStack_b0[0]);
      }
      if ((int)puVar3 != 0) {
        FUN_10a0d09b4(auStack_b0,puVar4);
        puVar2 = puVar2 + 0x10;
        puStack_88 = (undefined1 *)auStack_b0;
        FUN_10a44a73c(puVar2,auStack_b0,&UNK_10dd5b8f9,&puStack_88,&uStack_89);
        *(undefined4 *)(puVar2 + 0x48) = 0;
        if (cStack_99 < '\0') {
          __ZdlPv(auStack_b0[0]);
        }
      }
      return CONCAT44(uVar7,uVar6);
    }
    puVar5 = (uint *)(param_2 + 0x30);
  }
  else {
    puVar5 = (uint *)(lVar1 + 0x48);
  }
  return (ulong)*puVar5;
}



/* Entry: 10a429050; end: 10a429117;  */

void FUN_10a429050(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  FUN_10a0d09b4(auStack_60);
  lVar1 = param_1;
  FUN_10a428b30(param_1,auStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if ((int)lVar1 != 0) {
    FUN_10a0d09b4(auStack_60,param_2);
    param_1 = param_1 + 0x10;
    puStack_38 = (undefined1 *)auStack_60;
    FUN_10a44a73c(param_1,auStack_60,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  return;
}



/* Entry: 10a429118; end: 10a429207;  */

void FUN_10a429118(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    puVar3 = (undefined8 *)0x0;
    do {
      if (puVar3 < (undefined8 *)param_1[2]) {
        FUN_10a0cf46c(param_1,plVar4 + 2);
        puVar3 = puVar3 + 3;
      }
      else {
        puVar3 = param_1;
        func_0x000107c281ec(param_1,plVar4 + 2);
      }
      param_1[1] = puVar3;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  for (plVar4 = *(long **)(param_2 + 0x58); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    lVar2 = param_2 + 0x10;
    FUN_10a44a390(lVar2,plVar4 + 2);
    if (lVar2 == 0) {
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_10a0cf46c(param_1,plVar4 + 2);
        puVar3 = (undefined8 *)(uVar1 + 0x18);
      }
      else {
        puVar3 = param_1;
        func_0x000107c281ec(param_1,plVar4 + 2);
      }
      param_1[1] = puVar3;
    }
  }
  return;
}



/* Entry: 10a429208; end: 10a429407;  */

void FUN_10a429208(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  bool bVar26;
  long *unaff_x27;
  long *plVar27;
  long *unaff_x28;
  long *plVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined1 auStack_110 [96];
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  FUN_10a198a74(param_2,*(undefined8 *)(param_1 + 0x28));
  plVar23 = (long *)*param_2;
  plVar8 = plVar23;
  for (plVar12 = *(long **)(param_1 + 0x20); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    fVar31 = *(float *)(plVar12 + 9);
    if (0.001 < ABS(fVar31)) {
      lVar14 = (long)*(char *)((long)plVar12 + 0x47);
      if (lVar14 < 0) {
        lVar20 = plVar12[6];
        lVar14 = plVar12[7];
      }
      else {
        lVar20 = (long)(plVar12 + 6);
      }
      uVar33 = *(undefined4 *)((long)plVar12 + 0x54);
      *plVar8 = lVar20;
      plVar8[1] = lVar14;
      *(float *)(plVar8 + 2) = fVar31;
      *(undefined4 *)((long)plVar8 + 0x14) = uVar33;
      plVar8 = plVar8 + 3;
    }
  }
  plVar12 = (long *)0x0;
  if (plVar8 != plVar23) {
    plVar12 = (long *)(LZCOUNT(((long)plVar8 - (long)plVar23 >> 3) * -0x5555555555555555) * -2 +
                      0x7e);
  }
  FUN_10a198a74(param_2);
  plVar10 = (long *)0x1;
  bVar26 = true;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar23;
  plVar24 = plVar8;
  plVar25 = plVar12;
  do {
    plVar11 = plVar24 + -3;
    plVar28 = plVar24 + -6;
    plVar27 = plVar24 + -9;
    plVar18 = plVar7;
LAB_10a437440:
    plVar7 = plVar18;
    uVar15 = (long)plVar24 - (long)plVar7;
    uVar13 = ((long)uVar15 >> 3) * -0x5555555555555555;
    if (uVar13 - 2 != 0 && 1 < (long)uVar13) {
      if (uVar13 == 3) {
        fVar31 = *(float *)((long)plVar7 + 0x2c);
        if (fVar31 < *(float *)((long)plVar7 + 0x14)) {
          if (fVar31 <= *(float *)((long)plVar24 + -4)) {
            lStack_88 = plVar7[1];
            lStack_90 = *plVar7;
            lStack_80 = plVar7[2];
            plVar7[1] = plVar7[4];
            *plVar7 = plVar7[3];
            plVar7[2] = plVar7[5];
            plVar7[4] = lStack_88;
            plVar7[3] = lStack_90;
            plVar7[5] = lStack_80;
            if (*(float *)((long)plVar7 + 0x2c) <= *(float *)((long)plVar24 + -4)) break;
            lStack_88 = plVar7[4];
            lStack_90 = plVar7[3];
            lStack_80 = plVar7[5];
            lVar14 = plVar24[-1];
            lVar20 = *plVar11;
            plVar7[4] = plVar24[-2];
            plVar7[3] = lVar20;
            plVar7[5] = lVar14;
          }
          else {
            lStack_88 = plVar7[1];
            lStack_90 = *plVar7;
            lStack_80 = plVar7[2];
            lVar20 = plVar24[-2];
            lVar14 = *plVar11;
            plVar7[2] = plVar24[-1];
            plVar7[1] = lVar20;
            *plVar7 = lVar14;
          }
          plVar24[-1] = lStack_80;
          plVar24[-2] = lStack_88;
          *plVar11 = lStack_90;
          break;
        }
        if (fVar31 <= *(float *)((long)plVar24 + -4)) break;
        lStack_88 = plVar7[4];
        lStack_90 = plVar7[3];
        lStack_80 = plVar7[5];
        lVar14 = plVar24[-1];
        lVar20 = *plVar11;
        plVar7[4] = plVar24[-2];
        plVar7[3] = lVar20;
        plVar7[5] = lVar14;
        plVar24[-1] = lStack_80;
        plVar24[-2] = lStack_88;
        *plVar11 = lStack_90;
      }
      else {
        if (uVar13 != 4) {
          if (uVar13 != 5) goto LAB_10a437480;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_10a4384c0;
          plVar8 = plVar7 + 3;
          plVar12 = plVar7 + 6;
          plVar10 = plVar7 + 9;
          goto FUN_10a4384c4;
        }
        fVar32 = *(float *)((long)plVar7 + 0x2c);
        fVar31 = *(float *)((long)plVar7 + 0x44);
        if (*(float *)((long)plVar7 + 0x14) <= fVar32) {
          if (fVar31 < fVar32) {
            lVar14 = plVar7[5];
            lVar17 = plVar7[4];
            lVar20 = plVar7[3];
            plVar7[4] = plVar7[7];
            plVar7[3] = plVar7[6];
            plVar7[5] = plVar7[8];
            plVar7[7] = lVar17;
            plVar7[6] = lVar20;
            plVar7[8] = lVar14;
            if (*(float *)((long)plVar7 + 0x2c) < *(float *)((long)plVar7 + 0x14)) {
              lStack_88 = plVar7[1];
              lStack_90 = *plVar7;
              lStack_80 = plVar7[2];
              plVar7[1] = plVar7[4];
              *plVar7 = plVar7[3];
              plVar7[2] = plVar7[5];
              plVar7[4] = lStack_88;
              plVar7[3] = lStack_90;
              plVar7[5] = lStack_80;
            }
          }
        }
        else {
          if (fVar32 <= fVar31) {
            lStack_88 = plVar7[1];
            lStack_90 = *plVar7;
            lStack_80 = plVar7[2];
            plVar7[1] = plVar7[4];
            *plVar7 = plVar7[3];
            plVar7[2] = plVar7[5];
            plVar7[4] = lStack_88;
            plVar7[3] = lStack_90;
            plVar7[5] = lStack_80;
            if (*(float *)((long)plVar7 + 0x2c) <= fVar31) goto LAB_10a4383e0;
            lVar14 = plVar7[5];
            lVar17 = plVar7[4];
            lVar20 = plVar7[3];
            plVar7[4] = plVar7[7];
            plVar7[3] = plVar7[6];
            plVar7[5] = plVar7[8];
            plVar7[7] = lVar17;
            plVar7[6] = lVar20;
          }
          else {
            lStack_88 = plVar7[1];
            lStack_90 = *plVar7;
            lVar14 = plVar7[2];
            plVar7[1] = plVar7[7];
            *plVar7 = plVar7[6];
            plVar7[2] = plVar7[8];
            plVar7[7] = lStack_88;
            plVar7[6] = lStack_90;
            lStack_80 = lVar14;
          }
          plVar7[8] = lVar14;
        }
LAB_10a4383e0:
        if (*(float *)((long)plVar7 + 0x44) <= *(float *)((long)plVar24 + -4)) break;
        lStack_88 = plVar7[7];
        lStack_90 = plVar7[6];
        lStack_80 = plVar7[8];
        lVar14 = plVar24[-1];
        lVar20 = *plVar11;
        plVar7[7] = plVar24[-2];
        plVar7[6] = lVar20;
        plVar7[8] = lVar14;
        plVar24[-1] = lStack_80;
        plVar24[-2] = lStack_88;
        *plVar11 = lStack_90;
        if (*(float *)((long)plVar7 + 0x2c) <= *(float *)((long)plVar7 + 0x44)) break;
        lVar14 = plVar7[5];
        lVar17 = plVar7[4];
        lVar20 = plVar7[3];
        plVar7[4] = plVar7[7];
        plVar7[3] = plVar7[6];
        plVar7[5] = plVar7[8];
        plVar7[7] = lVar17;
        plVar7[6] = lVar20;
        plVar7[8] = lVar14;
      }
      if (*(float *)((long)plVar7 + 0x2c) < *(float *)((long)plVar7 + 0x14)) {
        lStack_88 = plVar7[1];
        lStack_90 = *plVar7;
        lStack_80 = plVar7[2];
        plVar7[1] = plVar7[4];
        *plVar7 = plVar7[3];
        plVar7[2] = plVar7[5];
        plVar7[4] = lStack_88;
        plVar7[3] = lStack_90;
        plVar7[5] = lStack_80;
      }
      break;
    }
    if (uVar13 < 2) break;
    if (uVar13 == 2) {
      if (*(float *)((long)plVar24 + -4) < *(float *)((long)plVar7 + 0x14)) {
        lStack_88 = plVar7[1];
        lStack_90 = *plVar7;
        lStack_80 = plVar7[2];
        lVar20 = plVar24[-2];
        lVar14 = plVar24[-3];
        plVar7[2] = plVar24[-1];
        plVar7[1] = lVar20;
        *plVar7 = lVar14;
        plVar24[-1] = lStack_80;
        plVar24[-2] = lStack_88;
        plVar24[-3] = lStack_90;
      }
      break;
    }
LAB_10a437480:
    if ((long)uVar15 < 0x240) {
      if (bVar26 == false) {
        if ((plVar7 != plVar24) && (plVar25 = plVar7 + 3, plVar25 != plVar24)) {
          lVar17 = -0x18;
          lVar14 = 0;
          lVar20 = 0x18;
          do {
            fVar31 = *(float *)((long)plVar7 + lVar14 + 0x2c);
            if (fVar31 < *(float *)((long)plVar7 + lVar14 + 0x14)) {
              lStack_88 = plVar25[1];
              lStack_90 = *plVar25;
              lVar29 = plVar25[2];
              lStack_80 = CONCAT44(lStack_80._4_4_,(int)lVar29);
              plVar18 = plVar25;
              lVar14 = lVar17;
              do {
                plVar11 = plVar18;
                plVar11[1] = plVar11[-2];
                *plVar11 = plVar11[-3];
                plVar11[2] = plVar11[-1];
                if (lVar14 == 0) {
LAB_10a438314:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a438318);
                  (*pcVar5)();
                }
                lVar14 = lVar14 + 0x18;
                plVar18 = plVar11 + -3;
              } while (fVar31 < *(float *)((long)plVar11 + -0x1c));
              *(int *)(plVar11 + -1) = (int)lVar29;
              plVar11[-2] = lStack_88;
              plVar11[-3] = lStack_90;
              *(float *)((long)plVar11 + -4) = fVar31;
            }
            plVar25 = plVar25 + 3;
            lVar17 = lVar17 + -0x18;
            lVar14 = lVar20;
            lVar20 = lVar20 + 0x18;
          } while (plVar25 != plVar24);
        }
        break;
      }
      if ((plVar7 == plVar24) || (plVar7 + 3 == plVar24)) break;
      lVar14 = 0;
      plVar25 = plVar7;
      plVar18 = plVar7 + 3;
      goto LAB_10a437ee8;
    }
    if (plVar25 == (long *)0x0) {
      if (plVar7 == plVar24) break;
      uVar19 = uVar13 - 2 >> 1;
      uVar21 = uVar19;
      goto LAB_10a437f84;
    }
    plVar18 = plVar7 + (uVar13 >> 1) * 3;
    fVar31 = *(float *)((long)plVar24 + -4);
    if (uVar15 < 0xc01) {
      fVar32 = *(float *)((long)plVar7 + 0x14);
      if (*(float *)((long)plVar18 + 0x14) <= fVar32) {
        if (fVar31 < fVar32) {
          lStack_88 = plVar7[1];
          lStack_90 = *plVar7;
          lStack_80 = plVar7[2];
          lVar20 = plVar24[-2];
          lVar14 = *plVar11;
          plVar7[2] = plVar24[-1];
          plVar7[1] = lVar20;
          *plVar7 = lVar14;
          plVar24[-1] = lStack_80;
          plVar24[-2] = lStack_88;
          *plVar11 = lStack_90;
          if (*(float *)((long)plVar7 + 0x14) < *(float *)((long)plVar18 + 0x14)) {
            lStack_88 = plVar18[1];
            lStack_90 = *plVar18;
            lStack_80 = plVar18[2];
            lVar20 = plVar7[1];
            lVar14 = *plVar7;
            plVar18[2] = plVar7[2];
            plVar18[1] = lVar20;
            *plVar18 = lVar14;
            plVar7[2] = lStack_80;
            plVar7[1] = lStack_88;
            *plVar7 = lStack_90;
          }
        }
      }
      else {
        if (fVar32 <= fVar31) {
          lStack_88 = plVar18[1];
          lStack_90 = *plVar18;
          lStack_80 = plVar18[2];
          lVar20 = plVar7[1];
          lVar14 = *plVar7;
          plVar18[2] = plVar7[2];
          plVar18[1] = lVar20;
          *plVar18 = lVar14;
          plVar7[2] = lStack_80;
          plVar7[1] = lStack_88;
          *plVar7 = lStack_90;
          if (*(float *)((long)plVar7 + 0x14) <= *(float *)((long)plVar24 + -4)) goto LAB_10a437a8c;
          lStack_88 = plVar7[1];
          lStack_90 = *plVar7;
          lStack_80 = plVar7[2];
          lVar20 = plVar24[-2];
          lVar14 = *plVar11;
          plVar7[2] = plVar24[-1];
          plVar7[1] = lVar20;
          *plVar7 = lVar14;
        }
        else {
          lStack_88 = plVar18[1];
          lStack_90 = *plVar18;
          lStack_80 = plVar18[2];
          lVar20 = plVar24[-2];
          lVar14 = *plVar11;
          plVar18[2] = plVar24[-1];
          plVar18[1] = lVar20;
          *plVar18 = lVar14;
        }
        plVar24[-1] = lStack_80;
        plVar24[-2] = lStack_88;
        *plVar11 = lStack_90;
      }
    }
    else {
      fVar32 = *(float *)((long)plVar18 + 0x14);
      if (*(float *)((long)plVar7 + 0x14) <= fVar32) {
        if (fVar31 < fVar32) {
          lVar29 = plVar18[1];
          lVar20 = *plVar18;
          lVar14 = plVar18[2];
          lVar30 = plVar24[-2];
          lVar17 = *plVar11;
          plVar18[2] = plVar24[-1];
          plVar18[1] = lVar30;
          *plVar18 = lVar17;
          plVar24[-1] = lVar14;
          plVar24[-2] = lVar29;
          *plVar11 = lVar20;
          if (*(float *)((long)plVar18 + 0x14) < *(float *)((long)plVar7 + 0x14)) {
            lVar29 = plVar7[1];
            lVar20 = *plVar7;
            lVar14 = plVar7[2];
            lVar30 = plVar18[1];
            lVar17 = *plVar18;
            plVar7[2] = plVar18[2];
            plVar7[1] = lVar30;
            *plVar7 = lVar17;
            plVar18[2] = lVar14;
            plVar18[1] = lVar29;
            *plVar18 = lVar20;
          }
        }
      }
      else {
        if (fVar32 <= fVar31) {
          lVar29 = plVar7[1];
          lVar20 = *plVar7;
          lVar14 = plVar7[2];
          lVar30 = plVar18[1];
          lVar17 = *plVar18;
          plVar7[2] = plVar18[2];
          plVar7[1] = lVar30;
          *plVar7 = lVar17;
          plVar18[2] = lVar14;
          plVar18[1] = lVar29;
          *plVar18 = lVar20;
          if (*(float *)((long)plVar18 + 0x14) <= *(float *)((long)plVar24 + -4))
          goto LAB_10a437680;
          lStack_88 = plVar18[1];
          lStack_90 = *plVar18;
          lStack_80 = plVar18[2];
          lVar20 = plVar24[-2];
          lVar14 = *plVar11;
          plVar18[2] = plVar24[-1];
          plVar18[1] = lVar20;
          *plVar18 = lVar14;
        }
        else {
          lStack_88 = plVar7[1];
          lStack_90 = *plVar7;
          lStack_80 = plVar7[2];
          lVar20 = plVar24[-2];
          lVar14 = *plVar11;
          plVar7[2] = plVar24[-1];
          plVar7[1] = lVar20;
          *plVar7 = lVar14;
        }
        plVar24[-1] = lStack_80;
        plVar24[-2] = lStack_88;
        *plVar11 = lStack_90;
      }
LAB_10a437680:
      plVar6 = plVar18 + -3;
      fVar31 = *(float *)((long)plVar18 + -4);
      if (*(float *)((long)plVar7 + 0x2c) <= fVar31) {
        if (*(float *)((long)plVar24 + -0x1c) < fVar31) {
          lVar29 = plVar18[-2];
          lVar20 = *plVar6;
          lVar14 = plVar18[-1];
          lVar30 = plVar24[-5];
          lVar17 = *plVar28;
          plVar18[-1] = plVar24[-4];
          plVar18[-2] = lVar30;
          *plVar6 = lVar17;
          plVar24[-4] = lVar14;
          plVar24[-5] = lVar29;
          *plVar28 = lVar20;
          if (*(float *)((long)plVar18 + -4) < *(float *)((long)plVar7 + 0x2c)) {
            lVar29 = plVar7[4];
            lVar17 = plVar7[3];
            lVar14 = plVar7[5];
            lVar20 = plVar18[-1];
            lVar30 = *plVar6;
            plVar7[4] = plVar18[-2];
            plVar7[3] = lVar30;
            plVar7[5] = lVar20;
            plVar18[-1] = lVar14;
            plVar18[-2] = lVar29;
            *plVar6 = lVar17;
          }
        }
      }
      else {
        if (fVar31 <= *(float *)((long)plVar24 + -0x1c)) {
          lVar29 = plVar7[4];
          lVar17 = plVar7[3];
          lVar14 = plVar7[5];
          lVar20 = plVar18[-1];
          lVar30 = *plVar6;
          plVar7[4] = plVar18[-2];
          plVar7[3] = lVar30;
          plVar7[5] = lVar20;
          plVar18[-1] = lVar14;
          plVar18[-2] = lVar29;
          *plVar6 = lVar17;
          if (*(float *)((long)plVar18 + -4) <= *(float *)((long)plVar24 + -0x1c))
          goto LAB_10a437814;
          lVar30 = plVar18[-2];
          lVar17 = *plVar6;
          lVar14 = plVar18[-1];
          lVar29 = plVar24[-5];
          lVar20 = *plVar28;
          plVar18[-1] = plVar24[-4];
          plVar18[-2] = lVar29;
          *plVar6 = lVar20;
        }
        else {
          lVar30 = plVar7[4];
          lVar17 = plVar7[3];
          lVar14 = plVar7[5];
          lVar20 = plVar24[-4];
          lVar29 = *plVar28;
          plVar7[4] = plVar24[-5];
          plVar7[3] = lVar29;
          plVar7[5] = lVar20;
        }
        plVar24[-4] = lVar14;
        plVar24[-5] = lVar30;
        *plVar28 = lVar17;
      }
LAB_10a437814:
      fVar31 = *(float *)((long)plVar18 + 0x2c);
      if (*(float *)((long)plVar7 + 0x44) <= fVar31) {
        if (*(float *)((long)plVar24 + -0x34) < fVar31) {
          lVar29 = plVar18[4];
          lVar20 = plVar18[3];
          lVar14 = plVar18[5];
          lVar30 = plVar24[-8];
          lVar17 = *plVar27;
          plVar18[5] = plVar24[-7];
          plVar18[4] = lVar30;
          plVar18[3] = lVar17;
          plVar24[-7] = lVar14;
          plVar24[-8] = lVar29;
          *plVar27 = lVar20;
          if (*(float *)((long)plVar18 + 0x2c) < *(float *)((long)plVar7 + 0x44)) {
            lVar29 = plVar7[7];
            lVar17 = plVar7[6];
            lVar14 = plVar7[8];
            lVar20 = plVar18[5];
            lVar30 = plVar18[3];
            plVar7[7] = plVar18[4];
            plVar7[6] = lVar30;
            plVar7[8] = lVar20;
            plVar18[5] = lVar14;
            plVar18[4] = lVar29;
            plVar18[3] = lVar17;
          }
        }
      }
      else {
        if (fVar31 <= *(float *)((long)plVar24 + -0x34)) {
          lVar29 = plVar7[7];
          lVar17 = plVar7[6];
          lVar14 = plVar7[8];
          lVar20 = plVar18[5];
          lVar30 = plVar18[3];
          plVar7[7] = plVar18[4];
          plVar7[6] = lVar30;
          plVar7[8] = lVar20;
          plVar18[5] = lVar14;
          plVar18[4] = lVar29;
          plVar18[3] = lVar17;
          if (*(float *)((long)plVar18 + 0x2c) <= *(float *)((long)plVar24 + -0x34))
          goto LAB_10a437930;
          lVar30 = plVar18[4];
          lVar17 = plVar18[3];
          lVar14 = plVar18[5];
          lVar29 = plVar24[-8];
          lVar20 = *plVar27;
          plVar18[5] = plVar24[-7];
          plVar18[4] = lVar29;
          plVar18[3] = lVar20;
        }
        else {
          lVar30 = plVar7[7];
          lVar17 = plVar7[6];
          lVar14 = plVar7[8];
          lVar20 = plVar24[-7];
          lVar29 = *plVar27;
          plVar7[7] = plVar24[-8];
          plVar7[6] = lVar29;
          plVar7[8] = lVar20;
        }
        plVar24[-7] = lVar14;
        plVar24[-8] = lVar30;
        *plVar27 = lVar17;
      }
LAB_10a437930:
      fVar31 = *(float *)((long)plVar18 + 0x14);
      if (*(float *)((long)plVar18 + -4) <= fVar31) {
        if (*(float *)((long)plVar18 + 0x2c) < fVar31) {
          lVar17 = plVar18[1];
          lVar20 = *plVar18;
          lVar14 = plVar18[2];
          plVar18[1] = plVar18[4];
          *plVar18 = plVar18[3];
          plVar18[2] = plVar18[5];
          plVar18[5] = lVar14;
          plVar18[4] = lVar17;
          plVar18[3] = lVar20;
          if (*(float *)((long)plVar18 + 0x14) < *(float *)((long)plVar18 + -4)) {
            lVar17 = plVar18[-2];
            lVar20 = *plVar6;
            lVar14 = plVar18[-1];
            plVar18[-2] = plVar18[1];
            *plVar6 = *plVar18;
            plVar18[-1] = plVar18[2];
            plVar18[2] = lVar14;
            plVar18[1] = lVar17;
            *plVar18 = lVar20;
          }
        }
      }
      else {
        if (fVar31 <= *(float *)((long)plVar18 + 0x2c)) {
          lVar17 = plVar18[-2];
          lVar20 = *plVar6;
          lVar14 = plVar18[-1];
          plVar18[-2] = plVar18[1];
          *plVar6 = *plVar18;
          plVar18[-1] = plVar18[2];
          plVar18[2] = lVar14;
          plVar18[1] = lVar17;
          *plVar18 = lVar20;
          if (*(float *)((long)plVar18 + 0x14) <= *(float *)((long)plVar18 + 0x2c))
          goto LAB_10a437a5c;
          lStack_88 = plVar18[1];
          lStack_90 = *plVar18;
          lStack_80 = plVar18[2];
          plVar18[1] = plVar18[4];
          *plVar18 = plVar18[3];
          plVar18[2] = plVar18[5];
        }
        else {
          lStack_88 = plVar18[-2];
          lStack_90 = *plVar6;
          lStack_80 = plVar18[-1];
          plVar18[-2] = plVar18[4];
          *plVar6 = plVar18[3];
          plVar18[-1] = plVar18[5];
        }
        plVar18[5] = lStack_80;
        plVar18[4] = lStack_88;
        plVar18[3] = lStack_90;
      }
LAB_10a437a5c:
      lStack_88 = plVar7[1];
      lStack_90 = *plVar7;
      lStack_80 = plVar7[2];
      lVar20 = plVar18[1];
      lVar14 = *plVar18;
      plVar7[2] = plVar18[2];
      plVar7[1] = lVar20;
      *plVar7 = lVar14;
      plVar18[2] = lStack_80;
      plVar18[1] = lStack_88;
      *plVar18 = lStack_90;
    }
LAB_10a437a8c:
    plVar25 = (long *)((long)plVar25 + -1);
    if (bVar26) {
      fVar31 = *(float *)((long)plVar7 + 0x14);
    }
    else {
      fVar31 = *(float *)((long)plVar7 + 0x14);
      if (fVar31 <= *(float *)((long)plVar7 + -4)) {
        lStack_a8 = plVar7[1];
        lStack_b0 = *plVar7;
        uStack_a0 = (undefined4)plVar7[2];
        plVar6 = plVar7 + 3;
        if (*(float *)((long)plVar24 + -4) <= fVar31) {
          do {
            plVar18 = plVar6;
            if (plVar24 <= plVar18) break;
            plVar6 = plVar18 + 3;
          } while (*(float *)((long)plVar18 + 0x14) <= fVar31);
        }
        else {
          do {
            plVar18 = plVar6;
            if (plVar18 == plVar24) goto LAB_10a438314;
            plVar6 = plVar18 + 3;
          } while (*(float *)((long)plVar18 + 0x14) <= fVar31);
        }
        plVar6 = plVar24;
        plVar9 = plVar24;
        if (plVar18 < plVar24) {
          do {
            if (plVar9 == plVar7) goto LAB_10a438314;
            plVar6 = plVar9 + -3;
            pfVar1 = (float *)((long)plVar9 + -4);
            plVar9 = plVar6;
          } while (fVar31 < *pfVar1);
        }
        while (plVar18 < plVar6) {
          lStack_88 = plVar18[1];
          lStack_90 = *plVar18;
          lStack_80 = plVar18[2];
          lVar20 = plVar6[1];
          lVar14 = *plVar6;
          plVar18[2] = plVar6[2];
          plVar18[1] = lVar20;
          *plVar18 = lVar14;
          plVar6[2] = lStack_80;
          plVar6[1] = lStack_88;
          *plVar6 = lStack_90;
          plVar9 = plVar18;
          do {
            plVar18 = plVar9 + 3;
            if (plVar18 == plVar24) goto LAB_10a438314;
            pfVar1 = (float *)((long)plVar9 + 0x2c);
            plVar16 = plVar6;
            plVar9 = plVar18;
          } while (*pfVar1 <= fVar31);
          do {
            if (plVar16 == plVar7) goto LAB_10a438314;
            plVar6 = plVar16 + -3;
            pfVar1 = (float *)((long)plVar16 + -4);
            plVar16 = plVar6;
          } while (fVar31 < *pfVar1);
        }
        plVar6 = plVar18 + -3;
        if (plVar6 != plVar7) {
          lVar20 = plVar18[-2];
          lVar14 = *plVar6;
          plVar7[2] = plVar18[-1];
          plVar7[1] = lVar20;
          *plVar7 = lVar14;
        }
        bVar26 = false;
        *(undefined4 *)(plVar18 + -1) = uStack_a0;
        plVar18[-2] = lStack_a8;
        *plVar6 = lStack_b0;
        *(float *)((long)plVar18 + -4) = fVar31;
        goto LAB_10a437440;
      }
    }
    lVar14 = 0;
    lStack_a8 = plVar7[1];
    lStack_b0 = *plVar7;
    uStack_a0 = (undefined4)plVar7[2];
    do {
      if ((long *)((long)plVar7 + lVar14 + 0x18) == plVar24) goto LAB_10a438314;
      lVar20 = lVar14 + 0x2c;
      lVar14 = lVar14 + 0x18;
    } while (*(float *)((long)plVar7 + lVar20) < fVar31);
    plVar8 = (long *)((long)plVar7 + lVar14);
    plVar23 = plVar24;
    if (lVar14 == 0x18) {
      do {
        plVar6 = plVar23;
        if (plVar23 <= plVar8) break;
        plVar6 = plVar23 + -3;
        pfVar1 = (float *)((long)plVar23 + -4);
        plVar23 = plVar6;
      } while (fVar31 <= *pfVar1);
    }
    else {
      do {
        if (plVar23 == plVar7) goto LAB_10a438314;
        plVar6 = plVar23 + -3;
        pfVar1 = (float *)((long)plVar23 + -4);
        plVar23 = plVar6;
      } while (fVar31 <= *pfVar1);
    }
    plVar9 = plVar6;
    plVar18 = plVar8;
    plVar23 = plVar8;
    if (plVar8 < plVar6) {
      do {
        lStack_88 = plVar23[1];
        lStack_90 = *plVar23;
        lStack_80 = plVar23[2];
        lVar20 = plVar9[1];
        lVar14 = *plVar9;
        plVar23[2] = plVar9[2];
        plVar23[1] = lVar20;
        *plVar23 = lVar14;
        plVar9[2] = lStack_80;
        plVar9[1] = lStack_88;
        *plVar9 = lStack_90;
        do {
          plVar18 = plVar23 + 3;
          if (plVar18 == plVar24) goto LAB_10a438314;
          pfVar1 = (float *)((long)plVar23 + 0x2c);
          plVar23 = plVar18;
        } while (*pfVar1 < fVar31);
        do {
          if (plVar9 == plVar7) goto LAB_10a438314;
          plVar16 = plVar9 + -3;
          pfVar1 = (float *)((long)plVar9 + -4);
          plVar9 = plVar16;
        } while (fVar31 <= *pfVar1);
      } while (plVar18 < plVar16);
    }
    plVar9 = plVar18 + -3;
    if (plVar9 != plVar7) {
      lVar20 = plVar18[-2];
      lVar14 = *plVar9;
      plVar7[2] = plVar18[-1];
      plVar7[1] = lVar20;
      *plVar7 = lVar14;
    }
    *(undefined4 *)(plVar18 + -1) = uStack_a0;
    plVar18[-2] = lStack_a8;
    *plVar9 = lStack_b0;
    *(float *)((long)plVar18 + -4) = fVar31;
    if (plVar8 < plVar6) goto LAB_10a437c28;
    plVar6 = plVar7;
    FUN_10a43870c(plVar7,plVar9);
    plVar23 = plVar18;
    plVar8 = plVar24;
    FUN_10a43870c();
    if ((int)plVar23 == 0) goto code_r0x00010a437c18;
    plVar24 = plVar9;
  } while (((ulong)plVar6 & 1) == 0);
  goto LAB_10a438488;
LAB_10a437ee8:
  do {
    fVar31 = *(float *)((long)plVar25 + 0x2c);
    if (fVar31 < *(float *)((long)plVar25 + 0x14)) {
      lStack_88 = plVar18[1];
      lStack_90 = *plVar18;
      lVar20 = plVar18[2];
      lStack_80 = CONCAT44(lStack_80._4_4_,(int)lVar20);
      lVar17 = lVar14;
      do {
        lVar29 = lVar17;
        puVar3 = (undefined8 *)((long)plVar7 + lVar29);
        puVar3[4] = puVar3[1];
        puVar3[3] = *puVar3;
        puVar3[5] = puVar3[2];
        plVar25 = plVar7;
        if (lVar29 == 0) goto LAB_10a437f48;
        lVar17 = lVar29 + -0x18;
      } while (fVar31 < *(float *)((long)puVar3 + -4));
      plVar25 = (long *)((long)plVar7 + lVar29);
LAB_10a437f48:
      *(int *)(plVar25 + 2) = (int)lVar20;
      plVar25[1] = lStack_88;
      *plVar25 = lStack_90;
      *(float *)((long)plVar25 + 0x14) = fVar31;
    }
    plVar11 = plVar18 + 3;
    lVar14 = lVar14 + 0x18;
    plVar25 = plVar18;
    plVar18 = plVar11;
  } while (plVar11 != plVar24);
  goto LAB_10a438488;
code_r0x00010a437c18:
  if (((ulong)plVar6 & 1) == 0) {
LAB_10a437c28:
    plVar10 = (long *)(ulong)bVar26;
    plVar12 = plVar25;
    FUN_10a4373e4();
    bVar26 = false;
    plVar23 = plVar7;
    plVar8 = plVar9;
  }
  goto LAB_10a437440;
LAB_10a437f84:
  do {
    if ((long)uVar21 <= (long)uVar19) {
      uVar22 = uVar21 << 1 | 1;
      plVar23 = plVar7 + uVar22 * 3;
      uVar2 = uVar21 * 2 + 2;
      if (((long)uVar2 < (long)uVar13) &&
         (*(float *)((long)plVar23 + 0x14) < *(float *)((long)plVar23 + 0x2c))) {
        plVar23 = plVar23 + 3;
        uVar22 = uVar2;
      }
      plVar25 = plVar7 + uVar21 * 3;
      fVar31 = *(float *)((long)plVar25 + 0x14);
      if (fVar31 <= *(float *)((long)plVar23 + 0x14)) {
        lVar17 = plVar25[1];
        lVar20 = *plVar25;
        lVar14 = plVar25[2];
        do {
          plVar18 = plVar23;
          lVar30 = plVar18[1];
          lVar29 = *plVar18;
          plVar25[2] = plVar18[2];
          plVar25[1] = lVar30;
          *plVar25 = lVar29;
          if ((long)uVar19 < (long)uVar22) break;
          uVar4 = uVar22 << 1 | 1;
          plVar23 = plVar7 + uVar4 * 3;
          uVar2 = uVar22 * 2 + 2;
          uVar22 = uVar4;
          if (((long)uVar2 < (long)uVar13) &&
             (*(float *)((long)plVar23 + 0x14) < *(float *)((long)plVar23 + 0x2c))) {
            plVar23 = plVar23 + 3;
            uVar22 = uVar2;
          }
          plVar25 = plVar18;
        } while (fVar31 <= *(float *)((long)plVar23 + 0x14));
        *(int *)(plVar18 + 2) = (int)lVar14;
        plVar18[1] = lVar17;
        *plVar18 = lVar20;
        *(float *)((long)plVar18 + 0x14) = fVar31;
      }
    }
    bVar26 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar26);
  lVar14 = (uVar15 >> 3) * -0x5555555555555555;
  do {
    lStack_88 = plVar7[1];
    lStack_90 = *plVar7;
    lStack_80 = plVar7[2];
    plVar25 = plVar7;
    uVar13 = 0;
    do {
      plVar23 = (long *)(uVar13 * 2);
      uVar15 = uVar13 << 1 | 1;
      plVar18 = plVar25 + uVar13 * 3 + 3;
      if (((long)((long)plVar23 + 2U) < lVar14) &&
         (*(float *)((long)plVar25 + uVar13 * 0x18 + 0x2c) <
          *(float *)((long)plVar25 + uVar13 * 0x18 + 0x44))) {
        plVar18 = plVar25 + uVar13 * 3 + 6;
        uVar15 = (long)plVar23 + 2U;
      }
      lVar17 = plVar18[1];
      lVar20 = *plVar18;
      plVar25[2] = plVar18[2];
      plVar25[1] = lVar17;
      *plVar25 = lVar20;
      plVar25 = plVar18;
      uVar13 = uVar15;
    } while ((long)uVar15 <= (long)(lVar14 - 2U >> 1));
    plVar25 = plVar24 + -3;
    if (plVar18 == plVar25) {
      plVar18[2] = lStack_80;
      plVar18[1] = lStack_88;
      *plVar18 = lStack_90;
    }
    else {
      lVar17 = plVar24[-2];
      lVar20 = *plVar25;
      plVar18[2] = plVar24[-1];
      plVar18[1] = lVar17;
      *plVar18 = lVar20;
      plVar24[-1] = lStack_80;
      plVar24[-2] = lStack_88;
      *plVar25 = lStack_90;
      uVar13 = (long)plVar18 + (0x18 - (long)plVar7);
      if (0x18 < (long)uVar13) {
        uVar13 = (uVar13 >> 3) * -0x5555555555555555 - 2 >> 1;
        fVar31 = *(float *)((long)plVar18 + 0x14);
        if (*(float *)((long)(plVar7 + uVar13 * 3) + 0x14) < fVar31) {
          lStack_a8 = plVar18[1];
          lStack_b0 = *plVar18;
          uStack_a0 = (undefined4)plVar18[2];
          plVar24 = plVar7 + uVar13 * 3;
          do {
            plVar11 = plVar24;
            lVar17 = plVar11[1];
            lVar20 = *plVar11;
            plVar18[2] = plVar11[2];
            plVar18[1] = lVar17;
            *plVar18 = lVar20;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            plVar18 = plVar11;
            plVar24 = plVar7 + uVar13 * 3;
          } while (*(float *)((long)(plVar7 + uVar13 * 3) + 0x14) < fVar31);
          *(undefined4 *)(plVar11 + 2) = uStack_a0;
          plVar11[1] = lStack_a8;
          *plVar11 = lStack_b0;
          *(float *)((long)plVar11 + 0x14) = fVar31;
        }
      }
    }
    bVar26 = 2 < lVar14;
    lVar14 = lVar14 + -1;
    plVar24 = plVar25;
  } while (bVar26);
LAB_10a438488:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_10a4384c0:
  plVar11 = param_5;
  plVar7 = plVar23;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_110;
  unaff_x27 = plVar27;
  unaff_x28 = plVar28;
FUN_10a4384c4:
  *(long **)((long)register0x00000008 + -0x10) = unaff_x28;
  *(long **)((long)register0x00000008 + -8) = unaff_x27;
  fVar31 = *(float *)((long)plVar8 + 0x14);
  if (*(float *)((long)plVar7 + 0x14) <= fVar31) {
    if (*(float *)((long)plVar12 + 0x14) < fVar31) {
      lVar14 = plVar8[2];
      lVar29 = plVar8[1];
      lVar17 = *plVar8;
      lVar20 = plVar12[2];
      lVar30 = *plVar12;
      plVar8[1] = plVar12[1];
      *plVar8 = lVar30;
      plVar8[2] = lVar20;
      plVar12[1] = lVar29;
      *plVar12 = lVar17;
      plVar12[2] = lVar14;
      if (*(float *)((long)plVar8 + 0x14) < *(float *)((long)plVar7 + 0x14)) {
        lVar14 = plVar7[2];
        lVar29 = plVar7[1];
        lVar17 = *plVar7;
        lVar20 = plVar8[2];
        lVar30 = *plVar8;
        plVar7[1] = plVar8[1];
        *plVar7 = lVar30;
        plVar7[2] = lVar20;
        plVar8[1] = lVar29;
        *plVar8 = lVar17;
        plVar8[2] = lVar14;
      }
    }
  }
  else {
    if (fVar31 <= *(float *)((long)plVar12 + 0x14)) {
      lVar14 = plVar7[2];
      lVar29 = plVar7[1];
      lVar17 = *plVar7;
      lVar20 = plVar8[2];
      lVar30 = *plVar8;
      plVar7[1] = plVar8[1];
      *plVar7 = lVar30;
      plVar7[2] = lVar20;
      plVar8[1] = lVar29;
      *plVar8 = lVar17;
      plVar8[2] = lVar14;
      if (*(float *)((long)plVar8 + 0x14) <= *(float *)((long)plVar12 + 0x14)) goto LAB_10a4385b0;
      lVar14 = plVar8[2];
      lVar29 = plVar8[1];
      lVar17 = *plVar8;
      lVar20 = plVar12[2];
      lVar30 = *plVar12;
      plVar8[1] = plVar12[1];
      *plVar8 = lVar30;
      plVar8[2] = lVar20;
    }
    else {
      lVar14 = plVar7[2];
      lVar29 = plVar7[1];
      lVar17 = *plVar7;
      lVar20 = plVar12[2];
      lVar30 = *plVar12;
      plVar7[1] = plVar12[1];
      *plVar7 = lVar30;
      plVar7[2] = lVar20;
    }
    plVar12[1] = lVar29;
    *plVar12 = lVar17;
    plVar12[2] = lVar14;
  }
LAB_10a4385b0:
  if (*(float *)((long)plVar10 + 0x14) < *(float *)((long)plVar12 + 0x14)) {
    lVar14 = plVar12[2];
    lVar29 = plVar12[1];
    lVar17 = *plVar12;
    lVar20 = plVar10[2];
    lVar30 = *plVar10;
    plVar12[1] = plVar10[1];
    *plVar12 = lVar30;
    plVar12[2] = lVar20;
    plVar10[1] = lVar29;
    *plVar10 = lVar17;
    plVar10[2] = lVar14;
    if (*(float *)((long)plVar12 + 0x14) < *(float *)((long)plVar8 + 0x14)) {
      lVar14 = plVar8[2];
      lVar29 = plVar8[1];
      lVar17 = *plVar8;
      lVar20 = plVar12[2];
      lVar30 = *plVar12;
      plVar8[1] = plVar12[1];
      *plVar8 = lVar30;
      plVar8[2] = lVar20;
      plVar12[1] = lVar29;
      *plVar12 = lVar17;
      plVar12[2] = lVar14;
      if (*(float *)((long)plVar8 + 0x14) < *(float *)((long)plVar7 + 0x14)) {
        lVar14 = plVar7[2];
        lVar29 = plVar7[1];
        lVar17 = *plVar7;
        lVar20 = plVar8[2];
        lVar30 = *plVar8;
        plVar7[1] = plVar8[1];
        *plVar7 = lVar30;
        plVar7[2] = lVar20;
        plVar8[1] = lVar29;
        *plVar8 = lVar17;
        plVar8[2] = lVar14;
      }
    }
  }
  if (*(float *)((long)plVar11 + 0x14) < *(float *)((long)plVar10 + 0x14)) {
    lVar14 = plVar10[2];
    lVar29 = plVar10[1];
    lVar17 = *plVar10;
    lVar20 = plVar11[2];
    lVar30 = *plVar11;
    plVar10[1] = plVar11[1];
    *plVar10 = lVar30;
    plVar10[2] = lVar20;
    plVar11[1] = lVar29;
    *plVar11 = lVar17;
    plVar11[2] = lVar14;
    if (*(float *)((long)plVar10 + 0x14) < *(float *)((long)plVar12 + 0x14)) {
      lVar14 = plVar12[2];
      lVar29 = plVar12[1];
      lVar17 = *plVar12;
      lVar20 = plVar10[2];
      lVar30 = *plVar10;
      plVar12[1] = plVar10[1];
      *plVar12 = lVar30;
      plVar12[2] = lVar20;
      plVar10[1] = lVar29;
      *plVar10 = lVar17;
      plVar10[2] = lVar14;
      if (*(float *)((long)plVar12 + 0x14) < *(float *)((long)plVar8 + 0x14)) {
        lVar14 = plVar8[2];
        lVar29 = plVar8[1];
        lVar17 = *plVar8;
        lVar20 = plVar12[2];
        lVar30 = *plVar12;
        plVar8[1] = plVar12[1];
        *plVar8 = lVar30;
        plVar8[2] = lVar20;
        plVar12[1] = lVar29;
        *plVar12 = lVar17;
        plVar12[2] = lVar14;
        if (*(float *)((long)plVar8 + 0x14) < *(float *)((long)plVar7 + 0x14)) {
          lVar14 = plVar7[2];
          lVar29 = plVar7[1];
          lVar17 = *plVar7;
          lVar20 = plVar8[2];
          lVar30 = *plVar8;
          plVar7[1] = plVar8[1];
          *plVar7 = lVar30;
          plVar7[2] = lVar20;
          plVar8[1] = lVar29;
          *plVar8 = lVar17;
          plVar8[2] = lVar14;
        }
      }
    }
  }
  return;
}



/* Entry: 10a429408; end: 10a4294bb;  */

undefined1  [16] FUN_10a429408(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f652b9b;
  return auVar1;
}



/* Entry: 10a4294bc; end: 10a42a48f;  */

void FUN_10a4294bc(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined **ppuVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652b9b,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9f10;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd9f10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f6579ef,FUN_10a44a980,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a07,FUN_10a44ab80,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a1f,FUN_10a44ac80,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a45,FUN_10a44ad38,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f598d6c,FUN_10a44ae9c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a65,FUN_10a44af54,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a6f,FUN_10a44b00c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a7f,FUN_10a44b140,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657a97,FUN_10a44b228,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657aa5,FUN_10a44b310,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f657ab9,FUN_10a44b3f8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f64b3f2,FUN_10a44b4c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f64b404,FUN_10a44b604,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f64b413,FUN_10a44b6bc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a42a470;
    FUN_10a054dac(param_1,&UNK_10f64b424,FUN_10a44b78c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657acd,FUN_10a44b888,FUN_10a44b950);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657ae0,FUN_10a44bf54,FUN_10a44c00c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f60c3a9,FUN_10a44c118,FUN_10a44c1d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f60c3ae,FUN_10a44c2d8,FUN_10a44c394);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f417690,FUN_10a44c498,FUN_10a44c558);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657af7,FUN_10a44c64c,FUN_10a44c70c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0dc,FUN_10a44c810,FUN_10a44c8cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657afe,FUN_10a44c9d0,FUN_10a44caec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6389e8,FUN_10a44cc44,FUN_10a44cd00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657b06,FUN_10a44ce04,FUN_10a44cec0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b6a9,FUN_10a44cfa4,FUN_10a44d070);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b16,FUN_10a44d134,FUN_10a44d1f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b2a,FUN_10a44d2f4,FUN_10a44d3d8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657b43,FUN_10a44d718,FUN_10a44d7d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657932,FUN_10a44d930,FUN_10a44da20);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657925,FUN_10a44dc3c,FUN_10a44dd2c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b4f,FUN_10a44dec4,FUN_10a44dfb4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f645883,FUN_10a44e06c,FUN_10a44e158);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657b5c,FUN_10a44e244,FUN_10a44e334);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b67,FUN_10a44e430,FUN_10a44e524);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b79,FUN_10a44e640,FUN_10a44e734);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b91,FUN_10a44e82c,FUN_10a44e920);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657ba3,FUN_10a44ea18,FUN_10a44eb18);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f645864,FUN_10a44ec84,FUN_10a44ed7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657bbb,FUN_10a44ee4c,FUN_10a44ef0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f657bc6,FUN_10a44efe0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657be6,FUN_10a44f148,FUN_10a44f23c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657bf7,FUN_10a44f304,FUN_10a44f3ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657c08,FUN_10a44f4fc,FUN_10a44f5e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657c1b,FUN_10a44f6f4,FUN_10a44f828);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f657c20,FUN_10a44fad4,0);
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar8 == (undefined *)0x0) {
LAB_10a42a1d4:
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      pcVar6 = FUN_10a45088c;
      pcVar9 = FUN_10a4509a8;
LAB_10a42a248:
      FUN_10a052828(param_1,&DAT_10f658172,pcVar6,pcVar9);
    }
  }
  else {
    FUN_10a3c8488();
    if (0x123 < *(int *)(ppuVar8 + 3)) goto LAB_10a42a1d4;
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      pcVar6 = FUN_10a450f0c;
      pcVar9 = FUN_10a450fd0;
      goto LAB_10a42a248;
    }
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar5
                 );
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652b9b,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f657910;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f656650;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a42a470;
      FUN_10a054dac(param_1,&UNK_10f657c2c,FUN_10a44fc28,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a42a470;
      FUN_10a054dac(param_1,&UNK_10f657c4e,FUN_10a44fce4,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a42a470;
      FUN_10a054dac(param_1,&UNK_10f657c71,FUN_10a44fd98,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a42a470;
      FUN_10a054dac(param_1,&UNK_10f657c89,FUN_10a44fee8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a42a470:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a42a474);
  (*pcVar6)();
}



/* Entry: 10a42a490; end: 10a42a5ff;  */

undefined8 * FUN_10a42a490(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a42a600; end: 10a42a6f3;  */

void FUN_10a42a600(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_2;
  if (((lVar6 == 0) || (lVar5 = *(long *)(lVar6 + 0x268), lVar5 == 0)) ||
     (___dynamic_cast(lVar5,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), lVar5 != 0)) {
    plStack_38 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    lStack_40 = lVar6;
    FUN_10a015bec(param_1 + 0x28,&lStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    FUN_10ae06f30(0,1,&UNK_10f657ca8,&UNK_10f657cda,0x74,&UNK_10f657d5b,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a42a6f4; end: 10a42a827;  */

void FUN_10a42a6f4(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  
  FUN_10a426f78();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110be0450,1);
  *(char *)(param_1 + 0x60) = (char)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c02188,0);
  *(char *)(param_1 + 0x61) = (char)plVar1;
  uVar2 = *(undefined4 *)(param_1 + 100);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd6568);
  *(undefined4 *)(param_1 + 100) = uVar2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd6588,*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0x68) = (int)param_2;
  return;
}



/* Entry: 10a42a828; end: 10a42a9ff;  */

void FUN_10a42a828(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_2;
  if (((lVar6 == 0) || (lVar5 = *(long *)(lVar6 + 0x268), lVar5 == 0)) ||
     (___dynamic_cast(lVar5,&PTR_DAT_110bb3788,&PTR_DAT_110c5e408,0), lVar5 != 0)) {
    plStack_38 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    lStack_40 = lVar6;
    FUN_10a015bec(param_1 + 0x28,&lStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    FUN_10ae06f30(0,1,&UNK_10f657ca8,&UNK_10f657d94,0x8c,&UNK_10f657e1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a42aa00; end: 10a42aa6f;  */

void FUN_10a42aa00(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plStack_28;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110bcf758;
  param_1[7] = (long)&PTR_DAT_110bcf7b0;
  param_1[0xd] = (long)&PTR_DAT_110bcf7d0;
  param_1[0x16] = (long)&PTR_DAT_110bcf840;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[0x17] = (long)&PTR_DAT_110bcf870;
  func_0x00010a004e5c(param_1 + 0x3f);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110bcfec8;
  param_1[7] = (long)&PTR_DAT_110bcff20;
  param_1[0xd] = (long)&PTR_DAT_110bcff40;
  param_1[0x16] = (long)&PTR_DAT_110bcffb0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[0x17] = (long)&PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = (long)&PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  plStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&plStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a42aa70; end: 10a42af47;  */

undefined8 * FUN_10a42aa70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_40;
  long *plStack_38;
  
  param_1[0xee] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xf1) = 0x100;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  puVar4 = param_1;
  FUN_10a38a7f0(param_1,&PTR_PTR_110bd68f8,param_2,param_3);
  FUN_10a0040d0(puVar4 + 0x41,&PTR_PTR_110bd6918);
  *param_1 = &PTR_FUN_110bd65c0;
  param_1[2] = &PTR_DAT_110bd66f0;
  param_1[7] = &PTR_DAT_110bd6748;
  param_1[0xd] = &PTR_DAT_110bd6768;
  param_1[0xee] = &PTR_DAT_110bd68b8;
  param_1[0x16] = &PTR_DAT_110bd67d8;
  param_1[0x17] = &PTR_DAT_110bd6808;
  param_1[0x41] = &PTR_DAT_110bd6840;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0x3f8000003f800000;
  param_1[0x4c] = 0x42c800003f800000;
  *(undefined4 *)(param_1 + 0x4e) = 0x41200000;
  *(undefined2 *)(param_1 + 0x51) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x54) = 3;
  puVar4 = (undefined8 *)0x88;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_110bd9bb8;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xe] = 0;
  puVar4[3] = &PTR_DAT_110bd6d80;
  puVar4[5] = &PTR_DAT_110bd6de0;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0x3f800000;
  param_1[0x55] = puVar4 + 3;
  param_1[0x56] = puVar4;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_110bd9c08;
  puVar4[3] = &PTR_DAT_110bc9e98;
  puVar4[5] = 0;
  puVar4[4] = 0;
  *(undefined2 *)(puVar4 + 6) = 0x200;
  *(undefined1 *)((long)puVar4 + 0x32) = 3;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0x3f8000003a03126f;
  *(undefined8 *)((long)puVar4 + 0x34) = 0x3f8000003e99999a;
  *(undefined8 *)((long)puVar4 + 0x44) = 0x3d4ccccd3f800000;
  *(undefined1 *)((long)puVar4 + 0x4c) = 0;
  param_1[0x5a] = puVar4 + 3;
  param_1[0x5b] = puVar4;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  param_1[0x5f] = 0;
  param_1[0x7f] = 0x3f800000;
  param_1[0x7e] = 0;
  param_1[0x81] = 0x3f80000000000000;
  param_1[0x80] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0x3f800000;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0x3f80000000000000;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0x3f800000;
  param_1[0x85] = 0;
  param_1[0x84] = 0x3f80000000000000;
  param_1[0x87] = 0x3f800000;
  param_1[0x86] = 0;
  param_1[0x89] = 0x3f80000000000000;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0x3f800000;
  param_1[0x91] = 0x3f80000000000000;
  param_1[0x90] = 0;
  param_1[0x8f] = 0x3f800000;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0x3f80000000000000;
  param_1[0x99] = 0x3f80000000000000;
  param_1[0x98] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0x3f800000;
  param_1[0x95] = 0;
  param_1[0x94] = 0x3f80000000000000;
  param_1[0x97] = 0x3f800000;
  param_1[0x96] = 0;
  param_1[0x9a] = 1;
  _memcpy(param_1 + 0x9b,&UNK_10e4b527c,0x110);
  *(undefined2 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)((long)param_1 + 0x6fa) = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110bf7fc8;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *(undefined8 *)((long)puVar4 + 0x4d) = 0;
  *(undefined8 *)((long)puVar4 + 0x45) = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  param_1[0xeb] = puVar4 + 3;
  param_1[0xec] = puVar4;
  FUN_10a5cf1fc(param_1 + 0xeb);
  uVar7 = NEON_fmov(0x3f800000,4);
  param_1[0xed] = uVar7;
  *(undefined4 *)(param_1 + 0x4e) = 0x41a00000;
  *(undefined2 *)(param_1 + 0x51) = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0xffffffffffffffff;
  param_1[0x4d] = 0x3f8000003f8df3b6;
  param_1[0x4c] = 0x447a00003f800000;
  *(undefined1 *)(param_1 + 0x57) = 0;
  plVar5 = (long *)0x90;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110bd9c58;
  *(undefined1 *)(plVar5 + 4) = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xe] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_DAT_110bd6cc8;
  plVar5[5] = (long)&PTR_DAT_110bd6d28;
  *(undefined1 *)(plVar5 + 0xf) = 0;
  *(undefined8 *)((long)plVar5 + 0x84) = 0x3f80000000000000;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0;
  *(undefined1 *)((long)plVar5 + 0x8c) = 0;
  plStack_38 = plVar5;
  func_0x00010a42a91c(param_1 + 0x46,&plStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)0x50;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110bd3090;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c458a0;
  *(undefined2 *)(plVar5 + 6) = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[7] = 0;
  plStack_38 = plVar5;
  FUN_10a3cfaa4(param_1 + 0x5c,&plStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar6 = param_1[0x5c];
  *(undefined1 *)(lVar6 + 0x18) = 1;
  *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 3;
  return param_1;
}



/* Entry: 10a42af48; end: 10a42b1b3;  */

void FUN_10a42af48(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110bd65c0;
  param_1[2] = &PTR_DAT_110bd66f0;
  param_1[7] = &PTR_DAT_110bd6748;
  param_1[0xd] = &PTR_DAT_110bd6768;
  param_1[0xee] = &PTR_DAT_110bd68b8;
  param_1[0x16] = &PTR_DAT_110bd67d8;
  param_1[0x17] = &PTR_DAT_110bd6808;
  param_1[0x41] = &PTR_DAT_110bd6840;
  plVar4 = (long *)param_1[0xe4];
  if ((plVar4 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) {
    plVar5 = (long *)param_1[0xe3];
    plStack_40 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5,param_1[0xe5]);
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        if (((ulong)plVar5 & 1) == 0) goto LAB_10a42b09c;
      }
      else if ((int)plVar5 == 0) goto LAB_10a42b09c;
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar4 = param_1 + 0x2a;
        if (*(char *)((long)param_1 + 0x167) < '\0') {
          plVar4 = (long *)*plVar4;
        }
        func_0x00010ae06f08(0,1,&UNK_10f657ca8,&UNK_10f657e65,0xb9,&UNK_10f657e9a,in_x6,in_x7,plVar4
                           );
      }
      FUN_10a3ebff0(param_1 + 0xe3);
    }
  }
LAB_10a42b09c:
  func_0x00010a004e5c(param_1 + 0xeb);
  func_0x00010a05248c(param_1 + 0xe9);
  if (param_1[0xe8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xe4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a3f90e8(param_1 + 0xe0);
  func_0x00010a3f7034(param_1 + 0x5c);
  FUN_10a450070(param_1 + 0x5a);
  FUN_10a06a560(param_1 + 0x58);
  FUN_10a3f9020(param_1 + 0x55);
  func_0x00010a1f7460(param_1 + 0x4f);
  func_0x00010a2021cc(param_1 + 0x4a);
  plStack_40 = param_1 + 0x46;
  FUN_10a3f9078(&plStack_40);
  param_1[0x41] = &PTR_DAT_110bd8cf8;
  param_1[0xee] = &PTR_FUN_110bd8d70;
  func_0x00010a004e5c(param_1 + 0x44);
  func_0x00010a004e04(param_1 + 0x42);
  *param_1 = &PTR_FUN_110bd89f0;
  param_1[2] = &PTR_DAT_110bcf758;
  param_1[7] = &PTR_DAT_110bcf7b0;
  param_1[0xd] = &PTR_DAT_110bcf7d0;
  param_1[0xee] = &PTR_DAT_110bd8b28;
  param_1[0x16] = &PTR_DAT_110bcf840;
  param_1[0x17] = &PTR_DAT_110bcf870;
  func_0x00010a004e5c(param_1 + 0x3f);
  FUN_10a3c59d8(param_1,&PTR_PTR_110bd6900);
  return;
}



/* Entry: 10a42b1b4; end: 10a42b1f7;  */

void FUN_10a42b1b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110bd65c0;
  param_1[2] = &PTR_DAT_110bd66f0;
  param_1[7] = &PTR_DAT_110bd6748;
  param_1[0xd] = &PTR_DAT_110bd6768;
  param_1[0xee] = &PTR_DAT_110bd68b8;
  param_1[0x16] = &PTR_DAT_110bd67d8;
  param_1[0x17] = &PTR_DAT_110bd6808;
  param_1[0x41] = &PTR_DAT_110bd6840;
  plVar4 = (long *)param_1[0xe4];
  if ((plVar4 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) {
    plVar5 = (long *)param_1[0xe3];
    plStack_40 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5,param_1[0xe5]);
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        if (((ulong)plVar5 & 1) == 0) goto LAB_10a42b09c;
      }
      else if ((int)plVar5 == 0) goto LAB_10a42b09c;
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar4 = param_1 + 0x2a;
        if (*(char *)((long)param_1 + 0x167) < '\0') {
          plVar4 = (long *)*plVar4;
        }
        func_0x00010ae06f08(0,1,&UNK_10f657ca8,&UNK_10f657e65,0xb9,&UNK_10f657e9a,in_x6,in_x7,plVar4
                           );
      }
      FUN_10a3ebff0(param_1 + 0xe3);
    }
  }
LAB_10a42b09c:
  func_0x00010a004e5c(param_1 + 0xeb);
  func_0x00010a05248c(param_1 + 0xe9);
  if (param_1[0xe8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xe4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a3f90e8(param_1 + 0xe0);
  func_0x00010a3f7034(param_1 + 0x5c);
  FUN_10a450070(param_1 + 0x5a);
  FUN_10a06a560(param_1 + 0x58);
  FUN_10a3f9020(param_1 + 0x55);
  func_0x00010a1f7460(param_1 + 0x4f);
  func_0x00010a2021cc(param_1 + 0x4a);
  plStack_40 = param_1 + 0x46;
  FUN_10a3f9078(&plStack_40);
  param_1[0x41] = &PTR_DAT_110bd8cf8;
  param_1[0xee] = &PTR_FUN_110bd8d70;
  func_0x00010a004e5c(param_1 + 0x44);
  func_0x00010a004e04(param_1 + 0x42);
  *param_1 = &PTR_FUN_110bd89f0;
  param_1[2] = &PTR_DAT_110bcf758;
  param_1[7] = &PTR_DAT_110bcf7b0;
  param_1[0xd] = &PTR_DAT_110bcf7d0;
  param_1[0xee] = &PTR_DAT_110bd8b28;
  param_1[0x16] = &PTR_DAT_110bcf840;
  param_1[0x17] = &PTR_DAT_110bcf870;
  func_0x00010a004e5c(param_1 + 0x3f);
  FUN_10a3c59d8(param_1,&PTR_PTR_110bd6900);
  return;
}



/* Entry: 10a42b1f8; end: 10a42b29b;  */

void FUN_10a42b1f8(void)

{
  FUN_10a42af48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a42b29c; end: 10a42b2cb;  */

void FUN_10a42b29c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a42af48((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a42b2cc; end: 10a42b397;  */

undefined8 FUN_10a42b2cc(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == param_1) {
LAB_10a42b368:
    if (lVar4 != param_1) {
      return *(undefined8 *)(lVar4 + 0x28);
    }
  }
  else {
    do {
      lVar2 = *(long *)(lVar4 + 0x28);
      if (((lVar2 != 0) && ((*(ushort *)(lVar2 + 0x180) & 0x17) == 0)) &&
         (*(char *)(lVar2 + 0x6f8) != '\x01')) {
        uStack_68 = *(undefined8 *)(lVar2 + 0x298);
        uStack_70 = *(undefined8 *)(lVar2 + 0x290);
        uVar3 = *(ulong *)(lVar2 + 0x290);
        puVar1 = &uStack_58;
        uStack_60 = param_2;
        uStack_58 = param_3;
        FUN_10a3c8d60(puVar1,(ulong)&uStack_70 | 8);
        if ((uVar3 & param_2) != 0 || ((ulong)puVar1 & 0xffff) != 0) goto LAB_10a42b368;
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != param_1);
  }
  return 0;
}



/* Entry: 10a42b398; end: 10a42b497;  */

void FUN_10a42b398(long param_1)

{
  long *plVar1;
  long lVar2;
  
  do {
    if (param_1 == 0) {
      return;
    }
    for (lVar2 = *(long *)(param_1 + 0x158); lVar2 != param_1 + 0x150; lVar2 = *(long *)(lVar2 + 8))
    {
      if (*(long *)(lVar2 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar2 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
        if (plVar1 != (long *)0x0) {
          return;
        }
      }
    }
    param_1 = *(long *)(param_1 + 0x188);
  } while( true );
}



/* Entry: 10a42b498; end: 10a42b51b;  */

void FUN_10a42b498(long param_1)

{
  long lVar1;
  undefined1 auStack_c0 [40];
  long lStack_98;
  long lStack_90;
  
  FUN_10a42b51c(auStack_c0);
  lVar1 = *(long *)(param_1 + 0x178);
  if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar1);
  }
  FUN_10a42bc0c(param_1 + 0x2f8,auStack_c0,lVar1 + 0xc0);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a42b51c; end: 10a42b7bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a42b51c(undefined1 *param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_1b0 [8];
  long lStack_1a8;
  undefined8 auStack_1a0 [20];
  long lStack_100;
  undefined1 auStack_f8 [160];
  undefined1 uStack_58;
  
  bVar9 = false;
  lVar17 = *(long *)(param_2 + 0x170);
  bVar5 = *(byte *)(param_2 + 0x6f8);
  auStack_1b0[0] = 0;
  uStack_58 = 0;
  uVar18 = 0;
  if (((bVar5 & 1) == 0) && (*(int *)(param_2 + 0x2a0) == 3)) {
    if (*(char *)(lVar17 + 0x1150) == '\x01') {
      uVar18 = *(undefined1 *)(lVar17 + 0xff8);
      lStack_1a8 = *(long *)(lVar17 + 0x1000);
      auStack_1b0[0] = uVar18;
      if (lStack_1a8 != 0) {
        _memcpy(auStack_1a0,lVar17 + 0x1008,lStack_1a8 * 0x50);
      }
      lStack_100 = *(long *)(lVar17 + 0x10a8);
      if (lStack_100 != 0) {
        _memcpy(auStack_f8,lVar17 + 0x10b0,lStack_100 * 0x50);
      }
      bVar9 = true;
      uStack_58 = 1;
    }
    else {
      bVar9 = false;
      uVar18 = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xc) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 4) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x1c) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x14) = 0x7fc000007fc00000;
  *(undefined4 *)(param_1 + 0x24) = 0x7fa00000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x94) = 3;
  uVar7 = NEON_fmov(0x3f800000,4);
  uVar19 = (undefined4)uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *param_1 = *(undefined1 *)(param_2 + 0x288);
  param_1[1] = uVar18;
  bVar5 = *(byte *)(param_2 + 0x6f9) | bVar5 << 2;
  param_1[2] = bVar5;
  FUN_10a42b7bc(param_2);
  *(undefined4 *)(param_1 + 4) = uVar19;
  FUN_10a42bae4(param_2);
  uVar20 = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 8) = uVar19;
  *(undefined4 *)(param_1 + 0xc) = uVar20;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x768);
  lVar13 = *(long *)(param_2 + 0x278);
  if (lVar13 != 0) {
    param_1[2] = bVar5 | 2;
    pauVar1 = (undefined1 (*) [12])(lVar13 + 0x24);
    uVar19 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x2c) >> 0x20);
    uVar7 = *(undefined8 *)*pauVar1;
    auVar21._12_4_ = uVar19;
    auVar21._0_12_ = *pauVar1;
    auVar6._12_4_ = uVar19;
    auVar6._0_12_ = *pauVar1;
    auVar21 = NEON_ext(auVar21,auVar6,8,1);
    *(int *)(param_1 + 0x18) = (int)uVar7;
    *(int *)(param_1 + 0x1c) = auVar21._0_4_;
    *(int *)(param_1 + 0x20) = (int)((ulong)uVar7 >> 0x20);
    *(int *)(param_1 + 0x24) = auVar21._4_4_;
  }
  if (bVar9) {
    lVar12 = param_2;
    FUN_10a42b8d8();
    lVar13 = 0xb0;
    if ((int)lVar12 == 0) {
      lVar13 = 8;
    }
    FUN_10a42bb6c(param_1 + 0x28,*(undefined8 *)(auStack_1b0 + lVar13));
    uVar14 = *(ulong *)(auStack_1b0 + lVar13);
    if (uVar14 != 0) {
      lVar13 = 0;
      uVar15 = 0;
      lVar4 = 0xb8;
      if ((int)lVar12 == 0) {
        lVar4 = 0x10;
      }
      do {
        uVar16 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) * -0x3333333333333333;
        if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10a42b798);
          (*pcVar11)();
        }
        puVar2 = (undefined8 *)(auStack_1b0 + lVar13 + lVar4);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar13);
        uVar7 = puVar2[4];
        uVar8 = puVar2[6];
        uVar10 = puVar2[7];
        puVar3[5] = puVar2[5];
        puVar3[4] = uVar7;
        puVar3[7] = uVar10;
        puVar3[6] = uVar8;
        uVar7 = puVar2[8];
        puVar3[9] = puVar2[9];
        puVar3[8] = uVar7;
        uVar10 = *puVar2;
        uVar8 = puVar2[3];
        uVar7 = puVar2[2];
        puVar3[1] = puVar2[1];
        *puVar3 = uVar10;
        puVar3[3] = uVar8;
        puVar3[2] = uVar7;
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 0x50;
      } while (uVar14 != uVar15);
    }
  }
  if (*(int *)(param_2 + 0x2a0) == 3) {
    FUN_10a42b8d8();
    lVar13 = 0x50;
    if ((int)param_2 == 0) {
      lVar13 = 0;
    }
    lVar17 = lVar17 + lVar13;
    uVar7 = *(undefined8 *)(lVar17 + 0x60);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar17 + 0x68);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    uVar7 = *(undefined8 *)(lVar17 + 0x90);
    uVar8 = *(undefined8 *)(lVar17 + 0xa0);
    uVar10 = *(undefined8 *)(lVar17 + 0xa8);
    uVar25 = *(undefined8 *)(lVar17 + 0x78);
    uVar24 = *(undefined8 *)(lVar17 + 0x70);
    uVar23 = *(undefined8 *)(lVar17 + 0x88);
    uVar22 = *(undefined8 *)(lVar17 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar17 + 0x98);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    *(undefined8 *)(param_1 + 0x88) = uVar10;
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    *(undefined8 *)(param_1 + 0x58) = uVar25;
    *(undefined8 *)(param_1 + 0x50) = uVar24;
    *(undefined8 *)(param_1 + 0x68) = uVar23;
    *(undefined8 *)(param_1 + 0x60) = uVar22;
    if ((param_1[0x90] & 1) == 0) {
      param_1[0x90] = 1;
    }
  }
  return;
}



/* Entry: 10a42b7bc; end: 10a42b843;  */

float FUN_10a42b7bc(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if ((*(uint *)(param_1 + 0x2a0) & 0xfffffffe) == 2) {
    lVar2 = param_1;
    FUN_10a42b844();
    if (lVar2 != 0) {
      return *(float *)(lVar2 + 0x10) * 0.017453292;
    }
    lVar3 = param_1;
    FUN_10a42b8d8();
    lVar2 = 0xb0;
    if ((int)lVar3 == 0) {
      lVar2 = 0x60;
    }
    pfVar1 = (float *)(*(long *)(param_1 + 0x170) + lVar2);
    if ((0.0 < *pfVar1) && (fVar4 = pfVar1[1], 0.0 < fVar4)) {
      return fVar4;
    }
  }
  return *(float *)(param_1 + 0x268);
}



/* Entry: 10a42b844; end: 10a42b8d7;  */

long FUN_10a42b844(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010ab6e4c8(&lStack_30,*(undefined8 *)(param_1 + 0x250));
  if (lStack_30 == 0) {
    lStack_30 = 0;
  }
  else {
    FUN_10a1ed130();
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return lStack_30;
}



/* Entry: 10a42b8d8; end: 10a42b9d7;  */

undefined1 * FUN_10a42b8d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar7 = &puStack_40;
  puStack_40 = &UNK_10f658729;
  uStack_38 = 0x4f;
  if (*(long **)(param_2 + 0x230) != *(long **)(param_2 + 0x238)) {
    lVar9 = **(long **)(param_2 + 0x230);
    lVar2 = *(long *)(lVar9 + 0x28);
    plVar3 = *(long **)(lVar9 + 0x30);
    if (plVar3 != (long *)0x0) {
      plVar11 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar9 = *(long *)(*(long *)(param_2 + 0x170) + 0xbf8);
    plVar11 = *(long **)(*(long *)(param_2 + 0x170) + 0xc00);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (plVar3 != (long *)0x0) {
      plVar11 = plVar3 + 1;
      do {
        lVar10 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return (undefined1 *)(ulong)(lVar2 != 0 && lVar2 == lVar9);
  }
  FUN_10a0edfc4();
  fVar12 = (float)param_1;
  if ((0.0 < fVar12) && (fVar12 < 3.1415927)) {
    if (*(float *)((long)ppuVar7 + 0x268) != fVar12) {
      *(undefined1 *)((long)ppuVar7 + 0x2f0) = 1;
    }
    *(float *)((long)ppuVar7 + 0x268) = fVar12;
    return (undefined1 *)ppuVar7;
  }
  func_0x000107c2b054(auStack_a8,&UNK_10f657eea);
  __ZNSt3__19to_stringEf(&puStack_c0,param_1);
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    puStack_c0 = (undefined1 *)&puStack_c0;
  }
  puVar8 = auStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,puStack_c0,uStack_b8);
  uStack_88 = puVar8[1];
  uStack_90 = *puVar8;
  uStack_80 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10a0029c0(&uStack_90);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a42ba98);
  (*pcVar6)();
}



/* Entry: 10a42b9d8; end: 10a42bae3;  */

void FUN_10a42b9d8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  fVar3 = (float)param_1;
  if ((0.0 < fVar3) && (fVar3 < 3.1415927)) {
    if (*(float *)(param_2 + 0x268) != fVar3) {
      *(undefined1 *)(param_2 + 0x2f0) = 1;
    }
    *(float *)(param_2 + 0x268) = fVar3;
    return;
  }
  func_0x000107c2b054(auStack_68,&UNK_10f657eea);
  __ZNSt3__19to_stringEf(&puStack_80,param_1);
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    puStack_80 = (undefined1 *)&puStack_80;
  }
  puVar2 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,puStack_80,uStack_78);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  uStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10a0029c0(&uStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a42ba98);
  (*pcVar1)();
}



/* Entry: 10a42bae4; end: 10a42bb6b;  */

float FUN_10a42bae4(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if ((*(uint *)(param_1 + 0x2a0) | 2) == 3) {
    lVar2 = param_1;
    FUN_10a42b844();
    if (lVar2 != 0) {
      return (float)*(int *)(lVar2 + 4) / (float)*(int *)(lVar2 + 8);
    }
    lVar3 = param_1;
    FUN_10a42b8d8();
    lVar2 = 0xb0;
    if ((int)lVar3 == 0) {
      lVar2 = 0x60;
    }
    pfVar1 = (float *)(*(long *)(param_1 + 0x170) + lVar2);
    fVar4 = *pfVar1;
    if ((0.0 < fVar4) && (0.0 < pfVar1[1])) {
      return fVar4;
    }
  }
  return *(float *)(param_1 + 0x26c);
}



/* Entry: 10a42bb6c; end: 10a42bc0b;  */

ulong * FUN_10a42bb6c(ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar5 = (long)(param_1[1] - *param_1) >> 4;
  bVar1 = param_2 < (ulong)(lVar5 * -0x3333333333333333);
  puVar4 = (ulong *)(param_2 + lVar5 * 0x3333333333333333);
  if (bVar1 || puVar4 == (ulong *)0x0) {
    if (bVar1) {
      param_1[1] = *param_1 + param_2 * 0x50;
    }
    return param_1;
  }
  puVar7 = (undefined8 *)param_1[1];
  if ((ulong *)(((long)(param_1[2] - (long)puVar7) >> 4) * -0x3333333333333333) < puVar4) {
    lVar5 = (long)puVar7 - *param_1;
    uVar6 = (long)puVar4 + (lVar5 >> 4) * -0x3333333333333333;
    if (0x333333333333333 < uVar6) {
      FUN_10a1915d0();
      puVar3 = param_1 + 1;
      uVar10 = *param_1;
      puVar2 = puVar4 + 1;
      uVar11 = *puVar4;
      uVar6 = uVar10;
      if (uVar11 <= uVar10) {
        uVar6 = uVar11;
      }
      lVar5 = 0;
      if (uVar10 <= uVar11) {
        lVar5 = uVar11 - uVar10;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar12 = *puVar2;
        uVar14 = puVar2[3];
        uVar13 = puVar2[2];
        puVar3[1] = puVar2[1];
        *puVar3 = uVar12;
        puVar3[3] = uVar14;
        puVar3[2] = uVar13;
        uVar13 = puVar2[5];
        uVar12 = puVar2[4];
        uVar15 = puVar2[7];
        uVar14 = puVar2[6];
        uVar16 = puVar2[8];
        uVar18 = puVar2[0xb];
        uVar17 = puVar2[10];
        puVar3[9] = puVar2[9];
        puVar3[8] = uVar16;
        puVar3[0xb] = uVar18;
        puVar3[10] = uVar17;
        puVar3[5] = uVar13;
        puVar3[4] = uVar12;
        puVar3[7] = uVar15;
        puVar3[6] = uVar14;
        puVar3 = puVar3 + 0xc;
        puVar2 = puVar2 + 0xc;
      }
      if (uVar10 < uVar11) {
        do {
          uVar6 = *puVar2;
          uVar11 = puVar2[3];
          uVar10 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar6;
          puVar3[3] = uVar11;
          puVar3[2] = uVar10;
          uVar10 = puVar2[5];
          uVar6 = puVar2[4];
          uVar12 = puVar2[7];
          uVar11 = puVar2[6];
          uVar13 = puVar2[8];
          uVar15 = puVar2[0xb];
          uVar14 = puVar2[10];
          puVar3[9] = puVar2[9];
          puVar3[8] = uVar13;
          puVar3[0xb] = uVar15;
          puVar3[10] = uVar14;
          puVar3[5] = uVar10;
          puVar3[4] = uVar6;
          puVar3[7] = uVar12;
          puVar3[6] = uVar11;
          puVar2 = puVar2 + 0xc;
          puVar3 = puVar3 + 0xc;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (*param_1 < *puVar4) {
        *param_1 = *puVar4;
      }
      else {
        FUN_10a005d64(param_1);
      }
      return param_1;
    }
    lVar9 = (long)(param_1[2] - *param_1) >> 4;
    uVar10 = lVar9 * -0x6666666666666666;
    if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
      uVar10 = uVar6;
    }
    if (0x199999999999998 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar10 = 0x333333333333333;
    }
    if (uVar10 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_10a1915e4();
    }
    puVar8 = (undefined8 *)((long)puVar2 + lVar5);
    puVar7 = puVar8;
    do {
      puVar7[1] = 0;
      *puVar7 = 0x3f800000;
      puVar7[3] = 0;
      puVar7[2] = 0x3f80000000000000;
      puVar7[5] = 0x3f800000;
      puVar7[4] = 0;
      puVar7[7] = 0x3f80000000000000;
      puVar7[6] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7 = puVar7 + 10;
    } while (puVar7 != puVar8 + (long)puVar4 * 10);
    uVar6 = (long)puVar8 - (param_1[1] - *param_1);
    _memcpy(uVar6);
    puVar3 = (ulong *)*param_1;
    *param_1 = uVar6;
    param_1[1] = (ulong)(puVar8 + (long)puVar4 * 10);
    param_1[2] = (ulong)(puVar2 + uVar10 * 10);
    param_1 = (ulong *)0x0;
    if (puVar3 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return puVar3;
    }
  }
  else {
    puVar8 = puVar7;
    if (puVar4 != (ulong *)0x0) {
      puVar8 = puVar7 + (long)puVar4 * 10;
      do {
        puVar7[1] = 0;
        *puVar7 = 0x3f800000;
        puVar7[3] = 0;
        puVar7[2] = 0x3f80000000000000;
        puVar7[5] = 0x3f800000;
        puVar7[4] = 0;
        puVar7[7] = 0x3f80000000000000;
        puVar7[6] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7 = puVar7 + 10;
      } while (puVar7 != puVar8);
    }
    param_1[1] = (ulong)puVar8;
  }
  return param_1;
}



/* Entry: 10a42bc0c; end: 10a42c997;  */

void FUN_10a42bc0c(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float fVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  float fStack_328;
  undefined4 uStack_324;
  float fStack_320;
  float fStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  if (param_2[1] == '\0') {
    uStack_c8 = param_3[1];
    uStack_d0 = *param_3;
    uStack_b8 = param_3[3];
    uStack_c0 = param_3[2];
    uStack_b0 = param_3[4];
    fStack_a8 = (float)param_3[5];
    uStack_a4 = (undefined4)((ulong)param_3[5] >> 0x20);
    uStack_98 = (undefined4)param_3[7];
    uStack_94 = (undefined4)((ulong)param_3[7] >> 0x20);
    fStack_a0 = (float)param_3[6];
    fStack_9c = (float)((ulong)param_3[6] >> 0x20);
    lVar8 = 200;
    if (*(ulong *)(param_1 + 0x1d8) < 2) {
      lVar8 = 0x1e0;
    }
    lVar8 = param_1 + lVar8;
    if (*param_2 == '\0') {
      if (((byte)param_2[2] >> 1 & 1) != 0) {
        fVar13 = *(float *)(param_2 + 0x18);
        fVar15 = *(float *)(param_2 + 0x1c);
        fVar16 = *(float *)(param_2 + 0x20);
        fVar17 = *(float *)(param_2 + 0x24);
        fVar18 = *(float *)(param_2 + 0x10);
        fVar19 = *(float *)(param_2 + 0x14);
        fVar20 = fVar15 - fVar13;
        fVar22 = fVar17 - fVar16;
        *(float *)(lVar8 + 0x50) = (fVar18 + fVar18) / fVar20;
        *(undefined8 *)(lVar8 + 0x5c) = 0;
        *(undefined8 *)(lVar8 + 0x54) = 0;
        *(float *)(lVar8 + 100) = (fVar18 + fVar18) / fVar22;
        *(undefined8 *)(lVar8 + 0x68) = 0;
        *(float *)(lVar8 + 0x70) = (fVar13 + fVar15) / fVar20;
        *(float *)(lVar8 + 0x74) = (fVar16 + fVar17) / fVar22;
        *(float *)(lVar8 + 0x78) = -(fVar18 + fVar19) / (fVar19 - fVar18);
        *(undefined4 *)(lVar8 + 0x7c) = 0xbf800000;
        *(undefined8 *)(lVar8 + 0x80) = 0;
        *(float *)(lVar8 + 0x88) = (fVar18 * fVar19 * -2.0) / (fVar19 - fVar18);
        fVar13 = 0.0;
        goto LAB_10a42c808;
      }
      fVar15 = *(float *)(param_2 + 8);
      fVar16 = *(float *)(param_2 + 0x10);
      fVar17 = *(float *)(param_2 + 0x14);
      fVar13 = *(float *)(param_2 + 4) * 0.5;
      _tanf();
      *(float *)(lVar8 + 0x50) = 1.0 / (fVar15 * fVar13);
      *(undefined8 *)(lVar8 + 0x5c) = 0;
      *(undefined8 *)(lVar8 + 0x54) = 0;
      *(float *)(lVar8 + 100) = 1.0 / fVar13;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = 0;
      *(float *)(lVar8 + 0x78) = -(fVar16 + fVar17) / (fVar17 - fVar16);
      *(undefined4 *)(lVar8 + 0x7c) = 0xbf800000;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(float *)(lVar8 + 0x88) = (fVar16 * fVar17 * -2.0) / (fVar17 - fVar16);
      *(undefined4 *)(lVar8 + 0x8c) = 0;
      if (param_2[0x90] != '\x01') goto LAB_10a42c810;
      func_0x000109519fd0(&fStack_350,&uStack_d0,param_2 + 0x50);
      uStack_c8 = CONCAT44(fStack_344,fStack_348);
      uStack_d0 = CONCAT44(fStack_34c,fStack_350);
      uStack_c0 = CONCAT44(fStack_33c,fStack_340);
      uStack_b8 = uStack_338;
      fStack_a8 = fStack_328;
      uStack_a4 = uStack_324;
      uStack_b0 = uStack_330;
      uStack_98 = (undefined4)uStack_318;
      uStack_94 = (undefined4)(uStack_318 >> 0x20);
      fStack_a0 = fStack_320;
      fStack_9c = fStack_31c;
      if ((param_2[0x90] & 1U) == 0) goto LAB_10a42c930;
      *(float *)(lVar8 + 0x70) = *(float *)(param_2 + 0x48) * -2.0 + 1.0;
      fVar13 = *(float *)(param_2 + 0x4c) * -2.0 + 1.0;
      lVar10 = 0x74;
    }
    else {
      fVar15 = *(float *)(param_2 + 8);
      fVar13 = *(float *)(param_2 + 0xc);
      fVar16 = *(float *)(param_2 + 0x10);
      fVar17 = *(float *)(param_2 + 0x14);
      fVar18 = fVar17 - fVar16;
      *(undefined8 *)(lVar8 + 0x5c) = 0;
      *(undefined8 *)(lVar8 + 0x54) = 0;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = 0;
      *(float *)(lVar8 + 0x78) = -2.0 / fVar18;
      *(undefined4 *)(lVar8 + 0x7c) = 0;
      fVar15 = fVar13 * fVar15 * 0.5;
      fVar13 = fVar13 * 0.5;
      *(float *)(lVar8 + 0x50) = 2.0 / (fVar15 + fVar15);
      *(float *)(lVar8 + 100) = 2.0 / (fVar13 + fVar13);
      *(ulong *)(lVar8 + 0x80) =
           CONCAT44(-(fVar13 - fVar13) / (fVar13 + fVar13),-(fVar15 - fVar15) / (fVar15 + fVar15));
      *(float *)(lVar8 + 0x88) = -(fVar16 + fVar17) / fVar18;
      fVar13 = 1.0;
LAB_10a42c808:
      lVar10 = 0x8c;
    }
    *(float *)(lVar8 + lVar10) = fVar13;
LAB_10a42c810:
    fStack_110 = *(float *)(param_2 + 0x98);
    fStack_fc = *(float *)(param_2 + 0x9c);
    fStack_10c = fStack_110 * 0.0;
    fStack_100 = fStack_fc * 0.0;
    uStack_f0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    fStack_e4 = 0.0;
    uStack_e0 = 0;
    fStack_e8 = 1.0;
    uStack_d4 = 0x3f800000;
    fStack_108 = fStack_10c;
    fStack_104 = fStack_10c;
    fStack_f8 = fStack_100;
    fStack_f4 = fStack_100;
    func_0x000109519fd0(&fStack_350,&fStack_110,lVar8 + 0x50);
    *(ulong *)(lVar8 + 0x58) = CONCAT44(fStack_344,fStack_348);
    *(ulong *)(lVar8 + 0x50) = CONCAT44(fStack_34c,fStack_350);
    *(undefined8 *)(lVar8 + 0x68) = uStack_338;
    *(ulong *)(lVar8 + 0x60) = CONCAT44(fStack_33c,fStack_340);
    *(ulong *)(lVar8 + 0x78) = CONCAT44(uStack_324,fStack_328);
    *(undefined8 *)(lVar8 + 0x70) = uStack_330;
    *(ulong *)(lVar8 + 0x88) = uStack_318;
    *(ulong *)(lVar8 + 0x80) = CONCAT44(fStack_31c,fStack_320);
    if ((param_2[2] & 1U) == 0) {
      fStack_148 = (float)uStack_c8;
      fStack_144 = (float)((ulong)uStack_c8 >> 0x20);
      fStack_150 = (float)uStack_d0;
      fStack_14c = (float)((ulong)uStack_d0 >> 0x20);
      uStack_138 = uStack_b8;
      fStack_140 = (float)uStack_c0;
      fStack_13c = (float)((ulong)uStack_c0 >> 0x20);
      uStack_128 = CONCAT44(uStack_a4,fStack_a8);
      uStack_118 = CONCAT44(uStack_94,uStack_98);
      uStack_120 = CONCAT44(fStack_9c,fStack_a0);
      uStack_130 = uStack_b0;
    }
    else {
      func_0x00010a008c90(&fStack_150,&uStack_d0);
    }
    func_0x0001094f5708(&fStack_350,&fStack_150);
    *(ulong *)(lVar8 + 0x18) = CONCAT44(fStack_344,fStack_348);
    *(ulong *)(lVar8 + 0x10) = CONCAT44(fStack_34c,fStack_350);
    *(undefined8 *)(lVar8 + 0x28) = uStack_338;
    *(ulong *)(lVar8 + 0x20) = CONCAT44(fStack_33c,fStack_340);
    *(ulong *)(lVar8 + 0x38) = CONCAT44(uStack_324,fStack_328);
    *(undefined8 *)(lVar8 + 0x30) = uStack_330;
    *(ulong *)(lVar8 + 0x48) = uStack_318;
    *(ulong *)(lVar8 + 0x40) = CONCAT44(fStack_31c,fStack_320);
    func_0x000109519fd0(&fStack_350,lVar8 + 0x50,lVar8 + 0x10);
    *(ulong *)(lVar8 + 0x98) = CONCAT44(fStack_344,fStack_348);
    *(ulong *)(lVar8 + 0x90) = CONCAT44(fStack_34c,fStack_350);
    *(undefined8 *)(lVar8 + 0xa8) = uStack_338;
    *(ulong *)(lVar8 + 0xa0) = CONCAT44(fStack_33c,fStack_340);
    *(ulong *)(lVar8 + 0xb8) = CONCAT44(uStack_324,fStack_328);
    *(undefined8 *)(lVar8 + 0xb0) = uStack_330;
    *(ulong *)(lVar8 + 200) = uStack_318;
    *(ulong *)(lVar8 + 0xc0) = CONCAT44(fStack_31c,fStack_320);
    func_0x0001094f5708(&fStack_350,lVar8 + 0x90);
    *(ulong *)(lVar8 + 0xd8) = CONCAT44(fStack_344,fStack_348);
    *(ulong *)(lVar8 + 0xd0) = CONCAT44(fStack_34c,fStack_350);
    *(undefined8 *)(lVar8 + 0xe8) = uStack_338;
    *(ulong *)(lVar8 + 0xe0) = CONCAT44(fStack_33c,fStack_340);
    *(ulong *)(lVar8 + 0xf8) = CONCAT44(uStack_324,fStack_328);
    *(undefined8 *)(lVar8 + 0xf0) = uStack_330;
    *(ulong *)(lVar8 + 0x108) = uStack_318;
    *(ulong *)(lVar8 + 0x100) = CONCAT44(fStack_31c,fStack_320);
    FUN_10a005cac(&fStack_350,lVar8 + 0x90,1);
    FUN_10a438da0(param_1,&fStack_350);
    return;
  }
  uStack_388 = param_3[1];
  uStack_390 = *param_3;
  uStack_378 = param_3[3];
  uStack_380 = param_3[2];
  uStack_368 = param_3[5];
  uStack_370 = param_3[4];
  uStack_358 = param_3[7];
  uStack_360 = param_3[6];
  fStack_350 = 1.1316663e-29;
  fStack_34c = 1.4013e-45;
  fStack_348 = 6.5861e-44;
  fStack_344 = 0.0;
  if (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) == 0) {
    pfVar7 = &fStack_350;
    FUN_10a0edfc4();
    if (puStack_168 != (undefined4 *)0x0) {
      puStack_160 = puStack_168;
      __ZdlPv();
    }
    __Unwind_Resume();
    FUN_10a5ae998(*(undefined8 *)(pfVar7 + 0x7e),&PTR_DAT_110bcf9d0,*(undefined8 *)(pfVar7 + 0x5c),
                  pfVar7);
    FUN_10a5ae998(*(undefined8 *)(pfVar7 + 0x1d6),&PTR_DAT_110bd9f10,*(undefined8 *)(pfVar7 + 0x5c),
                  pfVar7);
    lVar8 = *(long *)(pfVar7 + 0x5c);
    plVar2 = (long *)((long)(pfVar7 + 0x82) + *(long *)(*(long *)(pfVar7 + 0x82) + -0x18));
    if ((*(byte *)(plVar2 + 3) & 1) == 0) {
      *(undefined1 *)(plVar2 + 3) = 1;
      plVar2[2] = lVar8;
      if (lVar8 != 0) {
        plVar2[1] = *(long *)(*(long *)(lVar8 + 0x850) + 0x2c);
      }
      (**(code **)(*plVar2 + 0x18))();
    }
    lVar10 = *(long *)(pfVar7 + 0x88);
    if (*(long *)(lVar10 + 0x20) == 0) {
      *(long *)(lVar10 + 0x30) = lVar8;
      lVar14 = *(long *)(lVar10 + 0x18);
      if (*(long *)(lVar10 + 0x18) != 0) {
        plVar2 = (long *)(*(long *)(lVar10 + 0x18) + 0x10);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a3cf744(lVar8,&stack0xfffffffffffffc40,&PTR_DAT_110b99f08,pfVar7 + 0x82);
      if (lVar14 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if ((int)lVar8 != 0) {
        *(int *)(lVar10 + 0x38) = (int)lVar8;
        *(undefined1 *)(lVar10 + 0x3c) = 1;
      }
    }
    else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&uStack_390);
      return;
    }
    return;
  }
  lVar8 = *(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 4;
  uVar9 = lVar8 * -0x3333333333333333;
  uVar11 = *(ulong *)(param_1 + 0x1d8);
  lVar8 = uVar11 + lVar8 * 0x3333333333333333;
  if ((uVar11 < uVar9 || lVar8 == 0) && (uVar9 - uVar11 != 0)) {
    puVar12 = (undefined8 *)(param_1 + uVar11 * 0x110 + 0x1e0);
    do {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[3] = 0;
      puVar12[2] = 0x3f800000;
      puVar12[5] = 0;
      puVar12[4] = 0x3f80000000000000;
      puVar12[7] = 0x3f800000;
      puVar12[6] = 0;
      puVar12[9] = 0x3f80000000000000;
      puVar12[8] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0x3f800000;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0x3f80000000000000;
      puVar12[0xf] = 0x3f800000;
      puVar12[0xe] = 0;
      puVar12[0x11] = 0x3f80000000000000;
      puVar12[0x10] = 0;
      puVar12[0x13] = 0;
      puVar12[0x12] = 0x3f800000;
      puVar12[0x15] = 0;
      puVar12[0x14] = 0x3f80000000000000;
      puVar12[0x17] = 0x3f800000;
      puVar12[0x16] = 0;
      puVar12[0x19] = 0x3f80000000000000;
      puVar12[0x18] = 0;
      puVar12[0x1b] = 0;
      puVar12[0x1a] = 0x3f800000;
      puVar12[0x1d] = 0;
      puVar12[0x1c] = 0x3f80000000000000;
      puVar12[0x1f] = 0x3f800000;
      puVar12[0x1e] = 0;
      puVar12[0x21] = 0x3f80000000000000;
      puVar12[0x20] = 0;
      puVar12 = puVar12 + 0x22;
      bVar6 = lVar8 != -1;
      lVar8 = lVar8 + 1;
    } while (bVar6);
  }
  *(ulong *)(param_1 + 0x1d8) = uVar9;
  fStack_348 = (float)uStack_388;
  fStack_344 = (float)((ulong)uStack_388 >> 0x20);
  fStack_350 = (float)uStack_390;
  fStack_34c = (float)((ulong)uStack_390 >> 0x20);
  fStack_340 = (float)uStack_380;
  fStack_33c = (float)((ulong)uStack_380 >> 0x20);
  fStack_328 = (float)uStack_368;
  uStack_324 = (undefined4)((ulong)uStack_368 >> 0x20);
  fStack_320 = (float)uStack_360;
  fStack_31c = (float)((ulong)uStack_360 >> 0x20);
  lVar8 = 200;
  if (uVar9 < 2) {
    lVar8 = 0x1e0;
  }
  lVar8 = param_1 + lVar8;
  uStack_338 = uStack_378;
  uStack_330 = uStack_370;
  uStack_318 = uStack_358;
  if (*param_2 == '\0') {
    if (((byte)param_2[2] >> 1 & 1) != 0) {
      fVar13 = *(float *)(param_2 + 0x18);
      fVar15 = *(float *)(param_2 + 0x1c);
      fVar16 = *(float *)(param_2 + 0x20);
      fVar17 = *(float *)(param_2 + 0x24);
      fVar18 = *(float *)(param_2 + 0x10);
      fVar19 = *(float *)(param_2 + 0x14);
      fVar20 = fVar15 - fVar13;
      fVar22 = fVar17 - fVar16;
      *(float *)(lVar8 + 0x50) = (fVar18 + fVar18) / fVar20;
      *(undefined8 *)(lVar8 + 0x5c) = 0;
      *(undefined8 *)(lVar8 + 0x54) = 0;
      *(float *)(lVar8 + 100) = (fVar18 + fVar18) / fVar22;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(float *)(lVar8 + 0x70) = (fVar13 + fVar15) / fVar20;
      *(float *)(lVar8 + 0x74) = (fVar16 + fVar17) / fVar22;
      *(float *)(lVar8 + 0x78) = -(fVar18 + fVar19) / (fVar19 - fVar18);
      *(undefined4 *)(lVar8 + 0x7c) = 0xbf800000;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(float *)(lVar8 + 0x88) = (fVar18 * fVar19 * -2.0) / (fVar19 - fVar18);
      fVar13 = 0.0;
      goto LAB_10a42c060;
    }
    fVar15 = *(float *)(param_2 + 8);
    fVar16 = *(float *)(param_2 + 0x10);
    fVar17 = *(float *)(param_2 + 0x14);
    fVar13 = *(float *)(param_2 + 4) * 0.5;
    _tanf();
    *(float *)(lVar8 + 0x50) = 1.0 / (fVar15 * fVar13);
    *(undefined8 *)(lVar8 + 0x5c) = 0;
    *(undefined8 *)(lVar8 + 0x54) = 0;
    *(float *)(lVar8 + 100) = 1.0 / fVar13;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(float *)(lVar8 + 0x78) = -(fVar16 + fVar17) / (fVar17 - fVar16);
    *(undefined4 *)(lVar8 + 0x7c) = 0xbf800000;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(float *)(lVar8 + 0x88) = (fVar16 * fVar17 * -2.0) / (fVar17 - fVar16);
    *(undefined4 *)(lVar8 + 0x8c) = 0;
    if (param_2[0x90] == '\x01') {
      func_0x000109519fd0(&uStack_d0,&fStack_350,param_2 + 0x50);
      fStack_348 = (float)uStack_c8;
      fStack_344 = (float)((ulong)uStack_c8 >> 0x20);
      fStack_350 = (float)uStack_d0;
      fStack_34c = (float)((ulong)uStack_d0 >> 0x20);
      uStack_338 = uStack_b8;
      fStack_340 = (float)uStack_c0;
      fStack_33c = (float)((ulong)uStack_c0 >> 0x20);
      uStack_318 = CONCAT44(uStack_94,uStack_98);
      fStack_328 = fStack_a8;
      uStack_324 = uStack_a4;
      uStack_330 = uStack_b0;
      fStack_320 = fStack_a0;
      fStack_31c = fStack_9c;
      if ((param_2[0x90] & 1U) == 0) goto LAB_10a42c930;
      *(float *)(lVar8 + 0x70) = *(float *)(param_2 + 0x48) * -2.0 + 1.0;
      fVar13 = *(float *)(param_2 + 0x4c) * -2.0 + 1.0;
      lVar10 = 0x74;
      goto LAB_10a42c064;
    }
  }
  else {
    fVar15 = *(float *)(param_2 + 8);
    fVar13 = *(float *)(param_2 + 0xc);
    fVar16 = *(float *)(param_2 + 0x10);
    fVar17 = *(float *)(param_2 + 0x14);
    fVar18 = fVar17 - fVar16;
    *(undefined8 *)(lVar8 + 0x5c) = 0;
    *(undefined8 *)(lVar8 + 0x54) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(float *)(lVar8 + 0x78) = -2.0 / fVar18;
    *(undefined4 *)(lVar8 + 0x7c) = 0;
    fVar15 = fVar13 * fVar15 * 0.5;
    fVar13 = fVar13 * 0.5;
    *(float *)(lVar8 + 0x50) = 2.0 / (fVar15 + fVar15);
    *(float *)(lVar8 + 100) = 2.0 / (fVar13 + fVar13);
    *(ulong *)(lVar8 + 0x80) =
         CONCAT44(-(fVar13 - fVar13) / (fVar13 + fVar13),-(fVar15 - fVar15) / (fVar15 + fVar15));
    *(float *)(lVar8 + 0x88) = -(fVar16 + fVar17) / fVar18;
    fVar13 = 1.0;
LAB_10a42c060:
    lVar10 = 0x8c;
LAB_10a42c064:
    *(float *)(lVar8 + lVar10) = fVar13;
  }
  fVar13 = *(float *)(param_2 + 0x98) * 0.0;
  uStack_d0 = CONCAT44(fVar13,*(float *)(param_2 + 0x98));
  uStack_c8 = CONCAT44(fVar13,fVar13);
  fVar13 = *(float *)(param_2 + 0x9c) * 0.0;
  uStack_c0 = CONCAT44(*(float *)(param_2 + 0x9c),fVar13);
  uStack_b8 = CONCAT44(fVar13,fVar13);
  uStack_b0 = 0;
  fStack_9c = 0.0;
  uStack_98 = 0;
  uStack_a4 = 0;
  fStack_a0 = 0.0;
  fStack_a8 = 1.0;
  uStack_94 = 0x3f800000;
  func_0x000109519fd0(&fStack_110,&uStack_d0,lVar8 + 0x50);
  *(ulong *)(lVar8 + 0x58) = CONCAT44(fStack_104,fStack_108);
  *(ulong *)(lVar8 + 0x50) = CONCAT44(fStack_10c,fStack_110);
  *(ulong *)(lVar8 + 0x68) = CONCAT44(fStack_f4,fStack_f8);
  *(ulong *)(lVar8 + 0x60) = CONCAT44(fStack_fc,fStack_100);
  *(ulong *)(lVar8 + 0x78) = CONCAT44(fStack_e4,fStack_e8);
  *(undefined8 *)(lVar8 + 0x70) = uStack_f0;
  *(ulong *)(lVar8 + 0x88) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(lVar8 + 0x80) = CONCAT44(uStack_dc,uStack_e0);
  if ((param_2[2] & 1U) == 0) {
    fStack_148 = fStack_348;
    fStack_144 = fStack_344;
    fStack_150 = fStack_350;
    fStack_14c = fStack_34c;
    uStack_138 = uStack_338;
    fStack_140 = fStack_340;
    fStack_13c = fStack_33c;
    uStack_128 = CONCAT44(uStack_324,fStack_328);
    uStack_120 = CONCAT44(fStack_31c,fStack_320);
    uStack_130 = uStack_330;
    uStack_118 = uStack_318;
  }
  else {
    func_0x00010a008c90(&fStack_150,&fStack_350);
  }
  func_0x0001094f5708(&fStack_110,&fStack_150);
  *(ulong *)(lVar8 + 0x18) = CONCAT44(fStack_104,fStack_108);
  *(ulong *)(lVar8 + 0x10) = CONCAT44(fStack_10c,fStack_110);
  *(ulong *)(lVar8 + 0x28) = CONCAT44(fStack_f4,fStack_f8);
  *(ulong *)(lVar8 + 0x20) = CONCAT44(fStack_fc,fStack_100);
  *(ulong *)(lVar8 + 0x38) = CONCAT44(fStack_e4,fStack_e8);
  *(undefined8 *)(lVar8 + 0x30) = uStack_f0;
  *(ulong *)(lVar8 + 0x48) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(lVar8 + 0x40) = CONCAT44(uStack_dc,uStack_e0);
  func_0x000109519fd0(&fStack_110,lVar8 + 0x50,lVar8 + 0x10);
  *(ulong *)(lVar8 + 0x98) = CONCAT44(fStack_104,fStack_108);
  *(ulong *)(lVar8 + 0x90) = CONCAT44(fStack_10c,fStack_110);
  *(ulong *)(lVar8 + 0xa8) = CONCAT44(fStack_f4,fStack_f8);
  *(ulong *)(lVar8 + 0xa0) = CONCAT44(fStack_fc,fStack_100);
  *(ulong *)(lVar8 + 0xb8) = CONCAT44(fStack_e4,fStack_e8);
  *(undefined8 *)(lVar8 + 0xb0) = uStack_f0;
  *(ulong *)(lVar8 + 200) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(lVar8 + 0xc0) = CONCAT44(uStack_dc,uStack_e0);
  func_0x0001094f5708(&fStack_110,lVar8 + 0x90);
  *(ulong *)(lVar8 + 0xd8) = CONCAT44(fStack_104,fStack_108);
  *(ulong *)(lVar8 + 0xd0) = CONCAT44(fStack_10c,fStack_110);
  *(ulong *)(lVar8 + 0xe8) = CONCAT44(fStack_f4,fStack_f8);
  *(ulong *)(lVar8 + 0xe0) = CONCAT44(fStack_fc,fStack_100);
  *(ulong *)(lVar8 + 0xf8) = CONCAT44(fStack_e4,fStack_e8);
  *(undefined8 *)(lVar8 + 0xf0) = uStack_f0;
  *(ulong *)(lVar8 + 0x108) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(lVar8 + 0x100) = CONCAT44(uStack_dc,uStack_e0);
  FUN_10a187130(&puStack_168,
                (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 4) * -0x3333333333333333);
  if (param_2[1] != '\x01') {
LAB_10a42c1fc:
    bVar3 = param_2[2];
    fVar13 = *(float *)(param_2 + 0xc);
    fVar16 = *(float *)(param_2 + 0x10);
    fVar17 = *(float *)(param_2 + 0x14);
    fVar15 = *(float *)(param_2 + 0x98) * 0.0;
    uStack_d0 = CONCAT44(fVar15,*(float *)(param_2 + 0x98));
    uStack_c8 = CONCAT44(fVar15,fVar15);
    fVar15 = *(float *)(param_2 + 0x9c) * 0.0;
    uStack_c0 = CONCAT44(*(float *)(param_2 + 0x9c),fVar15);
    uStack_b8 = CONCAT44(fVar15,fVar15);
    uStack_b0 = 0;
    fStack_9c = 0.0;
    uStack_98 = 0;
    uStack_a4 = 0;
    fStack_a0 = 0.0;
    fStack_a8 = 1.0;
    uStack_94 = 0x3f800000;
    if (*param_2 == '\0') {
      fStack_e8 = SQRT((float)uStack_370 * (float)uStack_370 + uStack_370._4_4_ * uStack_370._4_4_ +
                       (float)uStack_368 * (float)uStack_368);
      fVar13 = (float)((ulong)uStack_390 >> 0x20);
      fVar15 = (float)((ulong)uStack_380 >> 0x20);
      fStack_110 = SQRT((float)uStack_390 * (float)uStack_390 + fVar13 * fVar13 +
                        (float)uStack_388 * (float)uStack_388);
      fStack_fc = SQRT((float)uStack_380 * (float)uStack_380 + fVar15 * fVar15 +
                       (float)uStack_378 * (float)uStack_378);
      fStack_10c = fStack_110 * 0.0;
      fStack_100 = fStack_fc * 0.0;
      fStack_f8 = fStack_fc * 0.0;
      fStack_e4 = fStack_e8 * 0.0;
      uStack_f0 = CONCAT44(fStack_e4,fStack_e4);
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0x3f800000;
      uVar21 = NEON_fmov(0x3f800000,4);
      fStack_150 = (float)uVar21 / fStack_110;
      fVar15 = (float)((ulong)uVar21 >> 0x20);
      fStack_13c = fVar15 / fStack_fc;
      fStack_14c = fStack_150 * 0.0;
      fStack_140 = fStack_13c * 0.0;
      fVar13 = (1.0 / fStack_e8) * 0.0;
      uStack_138 = CONCAT44(fStack_13c * 0.0,fStack_13c * 0.0);
      uStack_130 = CONCAT44(fVar13,fVar13);
      uStack_128 = CONCAT44(fVar13,1.0 / fStack_e8);
      uStack_120 = 0;
      uStack_118 = 0x3f80000000000000;
      fStack_148 = fStack_14c;
      fStack_144 = fStack_14c;
      fStack_108 = fStack_10c;
      fStack_104 = fStack_10c;
      fStack_f4 = fStack_f8;
      FUN_10a187130(&lStack_180,*(undefined8 *)(param_1 + 0x1d8));
      if (*(long *)(param_1 + 0x1d8) == 0) {
        uVar11 = lStack_178 - lStack_180 >> 6;
      }
      else {
        lVar10 = 0;
        lVar8 = 0;
        uVar9 = 0;
        fVar13 = -(fVar16 + fVar17) / (fVar17 - fVar16);
        puVar12 = (undefined8 *)(param_1 + 0x1f0);
        do {
          uVar11 = (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 4) *
                   -0x3333333333333333;
          if (uVar11 < uVar9 || uVar11 - uVar9 == 0) goto LAB_10a42c930;
          lVar14 = *(long *)(param_2 + 0x28) + lVar10;
          fStack_350 = *(float *)(lVar14 + 0x40) + *(float *)(lVar14 + 0x40);
          fStack_33c = *(float *)(lVar14 + 0x44) + *(float *)(lVar14 + 0x44);
          uStack_330 = CONCAT44(fVar15 + (float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20) *
                                         -2.0,
                                (float)uVar21 + (float)*(undefined8 *)(lVar14 + 0x48) * -2.0);
          fStack_31c = 0.0;
          fStack_348 = 0.0;
          fStack_344 = 0.0;
          fStack_34c = 0.0;
          fStack_340 = 0.0;
          uStack_338 = 0;
          uStack_324 = 0xbf800000;
          fStack_320 = 0.0;
          uStack_318 = (ulong)(uint)((fVar16 * -2.0 * fVar17) / (fVar17 - fVar16));
          puVar12[9] = 0;
          puVar12[8] = (ulong)(uint)fStack_350;
          puVar12[0xb] = 0;
          puVar12[10] = (ulong)(uint)fStack_33c << 0x20;
          puVar12[0xd] = CONCAT44(0xbf800000,fVar13);
          puVar12[0xc] = uStack_330;
          puVar12[0xf] = uStack_318;
          puVar12[0xe] = 0;
          fStack_328 = fVar13;
          if (param_2[1] == '\x01') {
            if ((ulong)((long)puStack_160 - (long)puStack_168 >> 6) <= uVar9) goto LAB_10a42c930;
            *(float *)((long)puVar12 + 0x44) = *(float *)((long)puVar12 + 0x44) * 0.5;
            *(float *)((long)puVar12 + 0x54) = *(float *)((long)puVar12 + 0x54) * 0.5;
            *(float *)((long)puVar12 + 100) = *(float *)((long)puVar12 + 100) * 0.5;
            *(float *)((long)puVar12 + 0x74) = *(float *)((long)puVar12 + 0x74) * 0.5;
            func_0x000109519fd0(&uStack_200,(long)puStack_168 + lVar8,&uStack_d0);
            func_0x000109519fd0(&uStack_1c0,&uStack_200,puVar12 + 8);
            puVar12[9] = uStack_1b8;
            puVar12[8] = uStack_1c0;
            puVar12[0xb] = uStack_1a8;
            puVar12[10] = uStack_1b0;
            puVar12[0xd] = uStack_198;
            puVar12[0xc] = uStack_1a0;
            puVar12[0xf] = uStack_188;
            puVar12[0xe] = uStack_190;
          }
          func_0x000109519fd0(&uStack_200,&fStack_150,lVar14);
          func_0x000109519fd0(&uStack_1c0,&uStack_200,&fStack_110);
          func_0x000109519fd0(&uStack_200,&uStack_390,&uStack_1c0);
          if ((bVar3 & 1) == 0) {
            uStack_278 = uStack_1f8;
            uStack_280 = uStack_200;
            uStack_268 = uStack_1e8;
            uStack_270 = uStack_1f0;
            uStack_258 = uStack_1d8;
            uStack_260 = uStack_1e0;
            uStack_248 = uStack_1c8;
            uStack_250 = uStack_1d0;
          }
          else {
            func_0x00010a008c90(&uStack_280,&uStack_200);
          }
          func_0x0001094f5708(&uStack_240,&uStack_280);
          puVar12[1] = uStack_238;
          *puVar12 = uStack_240;
          puVar12[3] = uStack_228;
          puVar12[2] = uStack_230;
          puVar12[5] = uStack_218;
          puVar12[4] = uStack_220;
          puVar12[7] = uStack_208;
          puVar12[6] = uStack_210;
          func_0x000109519fd0(&uStack_280,&uStack_d0,&fStack_350);
          func_0x000109519fd0(&uStack_240,&uStack_280,puVar12);
          uVar11 = lStack_178 - lStack_180 >> 6;
          if (uVar11 <= uVar9) goto LAB_10a42c930;
          puVar1 = (undefined8 *)(lStack_180 + lVar8);
          puVar1[5] = uStack_218;
          puVar1[4] = uStack_220;
          puVar1[7] = uStack_208;
          puVar1[6] = uStack_210;
          puVar1[1] = uStack_238;
          *puVar1 = uStack_240;
          puVar1[3] = uStack_228;
          puVar1[2] = uStack_230;
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x40;
          lVar10 = lVar10 + 0x50;
          puVar12 = puVar12 + 0x22;
        } while (uVar9 < *(ulong *)(param_1 + 0x1d8));
      }
      FUN_10a005cac(&fStack_350,lStack_180,uVar11);
      FUN_10a438da0(param_1,&fStack_350);
      if (lStack_180 != 0) {
        lStack_178 = lStack_180;
        __ZdlPv();
      }
    }
    else {
      fVar15 = *(float *)(param_2 + 8) * fVar13 * 0.5;
      if (param_2[1] != '\x01') {
        fVar13 = fVar13 * 0.5;
      }
      fStack_344 = 0.0;
      fStack_340 = 0.0;
      fStack_34c = 0.0;
      fStack_348 = 0.0;
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_324 = 0;
      fStack_328 = -2.0 / (fVar17 - fVar16);
      fStack_350 = 2.0 / (fVar15 + fVar15);
      fStack_33c = 2.0 / (fVar13 + fVar13);
      fStack_320 = -(fVar15 - fVar15) / (fVar15 + fVar15);
      fStack_31c = -(fVar13 - fVar13) / (fVar13 + fVar13);
      uStack_318 = CONCAT44(0x3f800000,-(fVar16 + fVar17) / (fVar17 - fVar16));
      func_0x000109519fd0(&fStack_110,&uStack_d0,&fStack_350);
      if ((bVar3 & 1) == 0) {
        fStack_348 = (float)uStack_388;
        fStack_344 = (float)((ulong)uStack_388 >> 0x20);
        fStack_350 = (float)uStack_390;
        fStack_34c = (float)((ulong)uStack_390 >> 0x20);
        uStack_338 = uStack_378;
        fStack_340 = (float)uStack_380;
        fStack_33c = (float)((ulong)uStack_380 >> 0x20);
        fStack_328 = (float)uStack_368;
        uStack_324 = (undefined4)((ulong)uStack_368 >> 0x20);
        uStack_330 = uStack_370;
        uStack_318 = uStack_358;
        fStack_320 = (float)uStack_360;
        fStack_31c = (float)((ulong)uStack_360 >> 0x20);
      }
      else {
        func_0x00010a008c90(&fStack_350,&uStack_390);
      }
      func_0x0001094f5708(&fStack_150,&fStack_350);
      uVar9 = *(ulong *)(param_1 + 0x1d8);
      if (uVar9 != 0) {
        lVar8 = 0;
        uVar11 = 0;
        puVar12 = (undefined8 *)(param_1 + 0x230);
        do {
          if (param_2[1] == '\x01') {
            if ((ulong)((long)puStack_160 - (long)puStack_168 >> 6) <= uVar11) goto LAB_10a42c930;
            func_0x000109519fd0(&fStack_350,(long)puStack_168 + lVar8,&fStack_110);
            puVar12[1] = CONCAT44(fStack_344,fStack_348);
            *puVar12 = CONCAT44(fStack_34c,fStack_350);
            puVar12[3] = uStack_338;
            puVar12[2] = CONCAT44(fStack_33c,fStack_340);
            puVar12[5] = CONCAT44(uStack_324,fStack_328);
            puVar12[4] = uStack_330;
            puVar12[7] = uStack_318;
            puVar12[6] = CONCAT44(fStack_31c,fStack_320);
            uVar9 = *(ulong *)(param_1 + 0x1d8);
          }
          else {
            puVar12[1] = CONCAT44(fStack_104,fStack_108);
            *puVar12 = CONCAT44(fStack_10c,fStack_110);
            puVar12[3] = CONCAT44(fStack_f4,fStack_f8);
            puVar12[2] = CONCAT44(fStack_fc,fStack_100);
            puVar12[5] = CONCAT44(fStack_e4,fStack_e8);
            puVar12[4] = uStack_f0;
            puVar12[7] = CONCAT44(uStack_d4,uStack_d8);
            puVar12[6] = CONCAT44(uStack_dc,uStack_e0);
          }
          puVar12[-7] = CONCAT44(fStack_144,fStack_148);
          puVar12[-8] = CONCAT44(fStack_14c,fStack_150);
          puVar12[-5] = uStack_138;
          puVar12[-6] = CONCAT44(fStack_13c,fStack_140);
          puVar12[-3] = uStack_128;
          puVar12[-4] = uStack_130;
          puVar12[-1] = uStack_118;
          puVar12[-2] = uStack_120;
          uVar11 = uVar11 + 1;
          puVar12 = puVar12 + 0x22;
          lVar8 = lVar8 + 0x40;
        } while (uVar11 < uVar9);
      }
      func_0x000109519fd0(&uStack_1c0,&fStack_110,&fStack_150);
      FUN_10a005cac(&fStack_350,&uStack_1c0,1);
      FUN_10a438da0(param_1,&fStack_350);
    }
    if (*(long *)(param_1 + 0x1d8) != 0) {
      uVar9 = 0;
      lVar8 = param_1 + 0x1f0;
      do {
        func_0x000109519fd0(&fStack_350,lVar8 + 0x40,lVar8);
        *(ulong *)(lVar8 + 0x88) = CONCAT44(fStack_344,fStack_348);
        *(ulong *)(lVar8 + 0x80) = CONCAT44(fStack_34c,fStack_350);
        *(undefined8 *)(lVar8 + 0x98) = uStack_338;
        *(ulong *)(lVar8 + 0x90) = CONCAT44(fStack_33c,fStack_340);
        *(ulong *)(lVar8 + 0xa8) = CONCAT44(uStack_324,fStack_328);
        *(undefined8 *)(lVar8 + 0xa0) = uStack_330;
        *(ulong *)(lVar8 + 0xb8) = uStack_318;
        *(ulong *)(lVar8 + 0xb0) = CONCAT44(fStack_31c,fStack_320);
        func_0x0001094f5708(&fStack_350,lVar8 + 0x80);
        *(ulong *)(lVar8 + 200) = CONCAT44(fStack_344,fStack_348);
        *(ulong *)(lVar8 + 0xc0) = CONCAT44(fStack_34c,fStack_350);
        *(undefined8 *)(lVar8 + 0xd8) = uStack_338;
        *(ulong *)(lVar8 + 0xd0) = CONCAT44(fStack_33c,fStack_340);
        *(ulong *)(lVar8 + 0xe8) = CONCAT44(uStack_324,fStack_328);
        *(undefined8 *)(lVar8 + 0xe0) = uStack_330;
        *(ulong *)(lVar8 + 0xf8) = uStack_318;
        *(ulong *)(lVar8 + 0xf0) = CONCAT44(fStack_31c,fStack_320);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x110;
      } while (uVar9 < *(ulong *)(param_1 + 0x1d8));
    }
    if (puStack_168 != (undefined4 *)0x0) {
      puStack_160 = puStack_168;
      __ZdlPv();
    }
    return;
  }
  if (puStack_160 != puStack_168) {
    *puStack_168 = 0x3f800000;
    *(undefined8 *)(puStack_168 + 3) = 0;
    *(undefined8 *)(puStack_168 + 1) = 0;
    puStack_168[5] = 0x3f800000;
    *(undefined8 *)(puStack_168 + 6) = 0;
    *(undefined8 *)(puStack_168 + 8) = 0;
    *(undefined8 *)(puStack_168 + 0xc) = 0x3f00000000000000;
    *(undefined8 *)(puStack_168 + 10) = 0x3f800000;
    *(undefined8 *)(puStack_168 + 0xe) = 0x3f80000000000000;
    if (0x40 < (ulong)((long)puStack_160 - (long)puStack_168)) {
      puStack_168[0x10] = 0x3f800000;
      *(undefined8 *)(puStack_168 + 0x13) = 0;
      *(undefined8 *)(puStack_168 + 0x11) = 0;
      puStack_168[0x15] = 0x3f800000;
      *(undefined8 *)(puStack_168 + 0x16) = 0;
      *(undefined8 *)(puStack_168 + 0x18) = 0;
      *(undefined8 *)(puStack_168 + 0x1c) = 0xbf00000000000000;
      *(undefined8 *)(puStack_168 + 0x1a) = 0x3f800000;
      *(undefined8 *)(puStack_168 + 0x1e) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0xbf80000000000000;
      goto LAB_10a42c1fc;
    }
  }
LAB_10a42c930:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a42c934);
  (*pcVar5)();
}



/* Entry: 10a42c998; end: 10a42ca43;  */

void FUN_10a42c998(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x1f8),&PTR_DAT_110bcf9d0,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x758),&PTR_DAT_110bd9f10,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x208 + *(long *)(*(long *)(param_1 + 0x208) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x220);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x208);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a42ca44; end: 10a42ca73;  */

void FUN_10a42ca44(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x1f8));
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x758));
  plVar3 = *(long **)(param_1 + 0x220);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a42ca74; end: 10a42cae7;  */

void FUN_10a42ca74(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x230);
  while( true ) {
    if (plVar2 == *(long **)(param_1 + 0x238)) {
      return;
    }
    if ((*plVar2 != 0) && (cVar1 = *(char *)(*plVar2 + 0x60), cVar1 == '\x04' || cVar1 == '\x01'))
    break;
    plVar2 = plVar2 + 2;
  }
  *(undefined1 *)(param_2 + 0x569) = 1;
  return;
}



/* Entry: 10a42cae8; end: 10a42cd4b;  */

void FUN_10a42cae8(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_a8 = FUN_10a45015c;
  ppuStack_a0 = &PTR_DAT_110bd9c98;
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0x38);
  plVar4 = (long *)*puVar7;
  lStack_98 = param_1;
  (**(code **)(*plVar4 + 0x30))(&uStack_c0,plVar4,puVar7,&pcStack_a8,0);
  lVar6 = lStack_b8;
  if (lStack_b8 != 0) {
    plVar4 = (long *)(lStack_b8 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + 0x58);
  if (puVar7 < *(undefined8 **)(param_1 + 0x60)) {
    *puVar7 = uStack_c0;
    puVar7[1] = lStack_b8;
    puVar12 = puVar7 + 3;
    puVar7[2] = uStack_b0;
LAB_10a42cc98:
    *(undefined8 **)(param_1 + 0x58) = puVar12;
    FUN_10a42cd4c(param_1 + 0x718,&uStack_c0);
    if (lStack_b8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x50);
    uVar9 = ((long)puVar7 - (long)puVar11 >> 3) * -0x5555555555555555 + 1;
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      lVar8 = (long)*(undefined8 **)(param_1 + 0x60) - (long)puVar11 >> 3;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        uVar10 = uVar9;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar10 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar10) {
          func_0x000109ffded8();
          goto LAB_10a42cd0c;
        }
        puVar5 = (undefined8 *)(uVar10 * 0x18);
        __Znwm();
      }
      puVar12 = (undefined8 *)((long)puVar5 + ((long)puVar7 - (long)puVar11));
      *puVar12 = uStack_c0;
      puVar12[1] = lVar6;
      puVar12[2] = uStack_b0;
      puVar12 = puVar12 + 3;
      puVar13 = puVar11;
      puVar14 = puVar5;
      if (puVar11 != puVar7) {
        do {
          *puVar14 = 0;
          puVar14[1] = 0;
          uVar16 = puVar13[1];
          uVar15 = *puVar13;
          *puVar13 = 0;
          puVar13[1] = 0;
          lVar6 = puVar14[1];
          puVar14[1] = uVar16;
          *puVar14 = uVar15;
          if (lVar6 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar14[2] = puVar13[2];
          puVar13[2] = 0;
          puVar13 = puVar13 + 3;
          puVar14 = puVar14 + 3;
        } while (puVar13 != puVar7);
        do {
          FUN_10a3ebfbc(puVar11);
          puVar11 = puVar11 + 3;
        } while (puVar11 != puVar7);
        puVar11 = *(undefined8 **)(param_1 + 0x50);
      }
      *(undefined8 **)(param_1 + 0x50) = puVar5;
      *(undefined8 **)(param_1 + 0x58) = puVar12;
      *(undefined8 **)(param_1 + 0x60) = puVar5 + uVar10 * 3;
      if (puVar11 != (undefined8 *)0x0) {
        __ZdlPv(puVar11);
      }
      goto LAB_10a42cc98;
    }
  }
  FUN_10a450148();
LAB_10a42cd0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a42cd10);
  (*pcVar3)();
}



/* Entry: 10a42cd4c; end: 10a42cdbb;  */

undefined8 * FUN_10a42cd4c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = param_2[1];
  uVar7 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = param_1[1];
  param_1[1] = uVar8;
  *param_1 = uVar7;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = uVar3;
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar2);
  }
  return param_1;
}



/* Entry: 10a42cdbc; end: 10a42cdd3;  */

void FUN_10a42cdbc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_68;
  
  lStack_98 = param_1 + -0x68;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_a8 = FUN_10a45015c;
  ppuStack_a0 = &PTR_DAT_110bd9c98;
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x110) + 0x38);
  plVar4 = (long *)*puVar7;
  (**(code **)(*plVar4 + 0x30))(&uStack_c0,plVar4,puVar7,&pcStack_a8,0);
  lVar6 = lStack_b8;
  if (lStack_b8 != 0) {
    plVar4 = (long *)(lStack_b8 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + -0x10);
  if (puVar7 < *(undefined8 **)(param_1 + -8)) {
    *puVar7 = uStack_c0;
    puVar7[1] = lStack_b8;
    puVar12 = puVar7 + 3;
    puVar7[2] = uStack_b0;
LAB_10a42cc98:
    *(undefined8 **)(param_1 + -0x10) = puVar12;
    FUN_10a42cd4c(param_1 + 0x6b0,&uStack_c0);
    if (lStack_b8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + -0x18);
    uVar9 = ((long)puVar7 - (long)puVar11 >> 3) * -0x5555555555555555 + 1;
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      lVar8 = (long)*(undefined8 **)(param_1 + -8) - (long)puVar11 >> 3;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        uVar10 = uVar9;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar10 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar10) {
          func_0x000109ffded8();
          goto LAB_10a42cd0c;
        }
        puVar5 = (undefined8 *)(uVar10 * 0x18);
        __Znwm();
      }
      puVar12 = (undefined8 *)((long)puVar5 + ((long)puVar7 - (long)puVar11));
      *puVar12 = uStack_c0;
      puVar12[1] = lVar6;
      puVar12[2] = uStack_b0;
      puVar12 = puVar12 + 3;
      puVar13 = puVar11;
      puVar14 = puVar5;
      if (puVar11 != puVar7) {
        do {
          *puVar14 = 0;
          puVar14[1] = 0;
          uVar16 = puVar13[1];
          uVar15 = *puVar13;
          *puVar13 = 0;
          puVar13[1] = 0;
          lVar6 = puVar14[1];
          puVar14[1] = uVar16;
          *puVar14 = uVar15;
          if (lVar6 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar14[2] = puVar13[2];
          puVar13[2] = 0;
          puVar13 = puVar13 + 3;
          puVar14 = puVar14 + 3;
        } while (puVar13 != puVar7);
        do {
          FUN_10a3ebfbc(puVar11);
          puVar11 = puVar11 + 3;
        } while (puVar11 != puVar7);
        puVar11 = *(undefined8 **)(param_1 + -0x18);
      }
      *(undefined8 **)(param_1 + -0x18) = puVar5;
      *(undefined8 **)(param_1 + -0x10) = puVar12;
      *(undefined8 **)(param_1 + -8) = puVar5 + uVar10 * 3;
      if (puVar11 != (undefined8 *)0x0) {
        __ZdlPv(puVar11);
      }
      goto LAB_10a42cc98;
    }
  }
  FUN_10a450148();
LAB_10a42cd0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a42cd10);
  (*pcVar3)();
}



/* Entry: 10a42cdd4; end: 10a42d01f;  */

undefined8 * FUN_10a42cdd4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a42d020; end: 10a42d067;  */

float FUN_10a42d020(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_2 * 2.0 + -1.0;
  fVar3 = param_2[1] * -2.0 + 1.0;
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    FUN_10a42b498(param_1);
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  lVar1 = 200;
  if (*(ulong *)(param_1 + 0x4d0) < 2) {
    lVar1 = 0x1e0;
  }
  param_1 = param_1 + lVar1;
  return (fVar2 * *(float *)(param_1 + 0x3c8) + fVar3 * *(float *)(param_1 + 0x3d8) +
         *(float *)(param_1 + 1000) * 1.0 + *(float *)(param_1 + 0x3f8)) /
         ((float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) * fVar2 +
          (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) * fVar3 +
         (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) * 1.0 +
         (float)((ulong)*(undefined8 *)(param_1 + 0x400) >> 0x20));
}



/* Entry: 10a42d068; end: 10a42d13b;  */

float FUN_10a42d068(float param_1,float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_1 * 2.0 + -1.0;
  fVar6 = param_2 * -2.0 + 1.0;
  fVar2 = 1.0;
  fVar4 = fVar5;
  fVar1 = fVar6;
  func_0x00010a42cf34(fVar5,fVar6,0x3f800000);
  fVar3 = -1.0;
  func_0x00010a42cf34(fVar5,fVar6,0xbf800000,param_4);
  fVar4 = fVar4 - fVar5;
  return fVar5 + param_3 * fVar4 * (1.0 / SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
                                               fVar4 * fVar4 + (fVar1 - fVar6) * (fVar1 - fVar6)));
}



/* Entry: 10a42d13c; end: 10a42d16b;  */

float FUN_10a42d13c(float param_1)

{
  func_0x00010a42ce48();
  return (param_1 + 1.0) * 0.5;
}



/* Entry: 10a42d16c; end: 10a42d21b;  */

float FUN_10a42d16c(float param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_1 * 2.0 + -1.0;
  fVar6 = param_2 * -2.0 + 1.0;
  fVar3 = 1.0;
  fVar1 = fVar5;
  fVar2 = fVar6;
  func_0x00010a42cf34(fVar5,fVar6,0x3f800000);
  fVar4 = -1.0;
  func_0x00010a42cf34(fVar5,fVar6,0xbf800000,param_3);
  fVar1 = fVar1 - fVar5;
  return fVar1 * (1.0 / SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
                             fVar1 * fVar1 + (fVar2 - fVar6) * (fVar2 - fVar6)));
}



/* Entry: 10a42d21c; end: 10a42d23b;  */

float FUN_10a42d21c(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1 * 2.0 + -1.0;
  fVar3 = param_2 * -2.0 + 1.0;
  if (*(char *)(param_3 + 0x2f0) == '\x01') {
    FUN_10a42b498(param_3);
    *(undefined1 *)(param_3 + 0x2f0) = 0;
  }
  lVar1 = 200;
  if (*(ulong *)(param_3 + 0x4d0) < 2) {
    lVar1 = 0x1e0;
  }
  param_3 = param_3 + lVar1;
  return (fVar2 * *(float *)(param_3 + 0x3c8) + fVar3 * *(float *)(param_3 + 0x3d8) +
         *(float *)(param_3 + 1000) * -1.0 + *(float *)(param_3 + 0x3f8)) /
         ((float)((ulong)*(undefined8 *)(param_3 + 0x3d0) >> 0x20) * fVar2 +
          (float)((ulong)*(undefined8 *)(param_3 + 0x3e0) >> 0x20) * fVar3 +
         (float)((ulong)*(undefined8 *)(param_3 + 0x3f0) >> 0x20) * -1.0 +
         (float)((ulong)*(undefined8 *)(param_3 + 0x400) >> 0x20));
}



/* Entry: 10a42d23c; end: 10a42d3b7;  */

float FUN_10a42d23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f0 [120];
  long *plStack_78;
  
  FUN_10a25eec8(auStack_f0,*(undefined8 *)(*(long *)(param_4 + 0x170) + 0x8c0));
  FUN_10a0f0374(param_1,param_2,param_3,auStack_f0);
  lVar4 = *(long *)(param_4 + 0x178);
  if ((*(byte *)(lVar4 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar4);
  }
  fVar5 = *(float *)(lVar4 + 0xc0);
  fVar7 = *(float *)(lVar4 + 0xd0);
  fVar8 = *(float *)(lVar4 + 0xe0);
  fVar6 = *(float *)(lVar4 + 0xf0);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return (float)param_1 * fVar5 + (float)param_2 * fVar7 + (float)param_3 * fVar8 + fVar6;
}



/* Entry: 10a42d3b8; end: 10a42d57b;  */

float FUN_10a42d3b8(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e0 [44];
  float fStack_b4;
  undefined8 uStack_ac;
  float fStack_a4;
  undefined8 uStack_9c;
  float fStack_94;
  undefined8 uStack_8c;
  float fStack_84;
  long *plStack_68;
  
  FUN_10a25eec8(auStack_e0,*(undefined8 *)(*(long *)(param_4 + 0x170) + 0x8c0));
  lVar4 = *(long *)(param_4 + 0x178);
  if ((*(byte *)(lVar4 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar4);
  }
  fVar7 = *(float *)(lVar4 + 0xc0);
  fVar8 = *(float *)(lVar4 + 0xd0);
  fVar5 = *(float *)(lVar4 + 0xe0);
  fVar6 = *(float *)(lVar4 + 0xf0);
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return fVar7 * ((float)auStack_e0._36_8_ * param_1 + (float)uStack_ac * param_2 +
                 (float)uStack_9c * param_3 + (float)uStack_8c) +
         fVar8 * (SUB84(auStack_e0._36_8_,4) * param_1 + (float)((ulong)uStack_ac >> 0x20) * param_2
                 + (float)((ulong)uStack_9c >> 0x20) * param_3 + (float)((ulong)uStack_8c >> 0x20))
         + (param_1 * fStack_b4 + param_2 * fStack_a4 + param_3 * fStack_94 + fStack_84) * fVar5 +
           fVar6;
}



/* Entry: 10a42d57c; end: 10a42e0df;  */

/* WARNING: Removing unreachable block (ram,0x00010a42df6c) */

void FUN_10a42d57c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  long lStack_1a0;
  code *pcStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a38a8c0();
  fVar15 = *(float *)(param_5 + 0x268);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd93b0);
  uVar17 = 0x3c8efa35;
  *(float *)(param_5 + 0x268) = fVar15 * 0.017453292;
  uVar16 = *(undefined4 *)(param_5 + 0x264);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd93d0);
  *(undefined4 *)(param_5 + 0x264) = uVar16;
  uVar16 = *(undefined4 *)(param_5 + 0x260);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd93f0);
  *(undefined4 *)(param_5 + 0x260) = uVar16;
  plVar13 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bd6938,*(undefined1 *)(param_5 + 0x2b8));
  *(char *)(param_5 + 0x2b8) = (char)plVar13;
  uVar16 = *(undefined4 *)(param_5 + 0x270);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd9410);
  *(undefined4 *)(param_5 + 0x270) = uVar16;
  plVar13 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bd6958);
  if ((int)plVar13 != 0) {
    plVar13 = param_6;
    (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110bd6958);
    uVar16 = 3;
    if ((int)plVar13 == 0) {
      uVar16 = 0;
    }
    *(undefined4 *)(param_5 + 0x2a0) = uVar16;
  }
  FUN_10a3c92c8(param_5 + 0x290,param_6);
  uVar16 = *(undefined4 *)(param_5 + 0x26c);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6978);
  *(undefined4 *)(param_5 + 0x26c) = uVar16;
  plVar13 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd6998,*(undefined4 *)(param_5 + 0x2a0));
  *(int *)(param_5 + 0x2a0) = (int)plVar13;
  plVar13 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd69b8,0);
  *(char *)(param_5 + 0x288) = (char)plVar13;
  plVar13 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd69d8,0);
  *(char *)(param_5 + 0x289) = (char)plVar13;
  plVar13 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bd69f8);
  if ((int)plVar13 == 0) {
    ppuStack_f0 = (undefined **)&UNK_10f658729;
    ppuStack_e8 = (undefined **)0x4f;
    if (*(long **)(param_5 + 0x230) != *(long **)(param_5 + 0x238)) {
      (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bd6a18,**(long **)(param_5 + 0x230) + 100)
      ;
      ppuStack_f0 = (undefined **)&UNK_10f658729;
      ppuStack_e8 = (undefined **)0x4f;
      if (*(long **)(param_5 + 0x230) == *(long **)(param_5 + 0x238)) {
        FUN_10a0edfc4(&ppuStack_f0);
        goto LAB_10a42e034;
      }
      lVar5 = **(long **)(param_5 + 0x230);
      *(undefined4 *)(lVar5 + 100) = uVar16;
      *(undefined4 *)(lVar5 + 0x68) = uVar17;
      *(undefined4 *)(lVar5 + 0x6c) = param_3;
      *(undefined4 *)(lVar5 + 0x70) = param_4;
      plVar13 = param_6;
      (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd6a38,0);
      ppuStack_f0 = (undefined **)&UNK_10f658729;
      ppuStack_e8 = (undefined **)0x4f;
      if (*(long **)(param_5 + 0x230) == *(long **)(param_5 + 0x238)) {
        FUN_10a0edfc4(&ppuStack_f0);
        goto LAB_10a42e034;
      }
      lVar5 = **(long **)(param_5 + 0x230);
      *(char *)(lVar5 + 0x74) = (char)plVar13;
      plVar13 = param_6;
      (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110bd6a58,*(undefined4 *)(lVar5 + 0x58));
      ppuStack_f0 = (undefined **)&UNK_10f658729;
      ppuStack_e8 = (undefined **)0x4f;
      if (*(long **)(param_5 + 0x230) == *(long **)(param_5 + 0x238)) {
        FUN_10a0edfc4(&ppuStack_f0);
        goto LAB_10a42e034;
      }
      *(int *)(**(long **)(param_5 + 0x230) + 0x58) = (int)plVar13;
      pcStack_130 = FUN_10a450188;
      ppuStack_128 = &PTR_FUN_110bd9cb0;
      lStack_120 = param_5;
      FUN_10a02d928(param_6,&PTR_DAT_110bd6a78,&pcStack_130,0);
      (*(code *)*ppuStack_128)(&ppuStack_128);
      pcStack_170 = FUN_10a450234;
      ppuStack_168 = &PTR_FUN_110bd9cc8;
      lStack_160 = param_5;
      FUN_10a02d928(param_6,&PTR_DAT_110bd6a98,&pcStack_170,0);
      (*(code *)*ppuStack_168)(&ppuStack_168);
      uStack_1b0 = 0x10a4502fc;
      ppuStack_1a8 = &PTR_DAT_110bd9ce0;
      lStack_1a0 = param_5;
      FUN_10a02d928(param_6,&PTR_DAT_110bd6ab8,&uStack_1b0,0);
      (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
      goto LAB_10a42da50;
    }
LAB_10a42e008:
    FUN_10a0edfc4(&ppuStack_f0);
  }
  else {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110bd69f8);
    plVar13 = param_6;
    (**(code **)(*param_6 + 0x208))();
    lVar5 = *(long *)(param_5 + 0x238);
    lVar12 = *(long *)(param_5 + 0x230);
    while (lVar5 != lVar12) {
      lVar5 = lVar5 + -0x10;
      FUN_10a3f90e8();
    }
    *(long *)(param_5 + 0x238) = lVar12;
    FUN_10a42e0e0(param_5 + 0x230,(ulong)plVar13 & 0xffffffff);
    if ((int)plVar13 != 0) {
      uVar14 = 0;
      do {
        ppuVar6 = (undefined **)0x90;
        __Znwm();
        ppuVar6[1] = (undefined *)0x0;
        ppuVar6[2] = (undefined *)0x0;
        *ppuVar6 = (undefined *)&PTR_DAT_110bd9c58;
        *(undefined1 *)(ppuVar6 + 4) = 0;
        ppuVar6[7] = (undefined *)0x0;
        ppuVar6[6] = (undefined *)0x0;
        ppuVar6[9] = (undefined *)0x0;
        ppuVar6[8] = (undefined *)0x0;
        ppuVar6[0xb] = (undefined *)0x0;
        ppuVar6[10] = (undefined *)0x0;
        ppuVar6[0xd] = (undefined *)0x0;
        ppuVar6[0xc] = (undefined *)0x0;
        ppuVar6[0xe] = (undefined *)0x0;
        ppuStack_f0 = ppuVar6 + 3;
        *ppuStack_f0 = (undefined *)&PTR_DAT_110bd6cc8;
        ppuVar6[5] = (undefined *)&PTR_DAT_110bd6d28;
        *(undefined1 *)(ppuVar6 + 0xf) = 0;
        *(undefined8 *)((long)ppuVar6 + 0x84) = 0x3f80000000000000;
        *(undefined8 *)((long)ppuVar6 + 0x7c) = 0;
        *(undefined1 *)((long)ppuVar6 + 0x8c) = 0;
        ppuStack_e8 = ppuVar6;
        func_0x00010a42a91c(param_5 + 0x230,&ppuStack_f0);
        ppuVar6 = ppuStack_e8;
        if (ppuStack_e8 != (undefined **)0x0) {
          ppuVar1 = ppuStack_e8 + 1;
          do {
            puVar10 = *ppuVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar3) {
              *ppuVar1 = puVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar10 == (undefined *)0x0) {
            (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
          }
        }
        if ((ulong)(*(long *)(param_5 + 0x238) - *(long *)(param_5 + 0x230) >> 4) <= uVar14)
        goto LAB_10a42e034;
        (**(code **)(*param_6 + 0x1e8))
                  (param_6,uVar14,*(undefined8 *)(*(long *)(param_5 + 0x230) + uVar14 * 0x10));
        uVar14 = uVar14 + 1;
      } while (uVar14 != ((ulong)plVar13 & 0xffffffff));
    }
    (**(code **)(*param_6 + 0x220))(param_6);
LAB_10a42da50:
    if (*(long **)(param_5 + 0x230) != *(long **)(param_5 + 0x238)) {
      ppuStack_f0 = (undefined **)&UNK_10f657f0e;
      ppuStack_e8 = (undefined **)0x26;
      if (**(long **)(param_5 + 0x230) != 0) {
        plVar13 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bde478);
        if ((int)plVar13 == 0) {
          plVar13 = param_6;
          (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bd6ad8);
          if ((int)plVar13 != 0) {
            plVar13 = param_6;
            (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bd6ad8,0);
            uVar8 = 4;
            if ((int)plVar13 == 0) {
              uVar8 = 0;
            }
            plVar9 = *(long **)(param_5 + 0x238);
            for (plVar13 = *(long **)(param_5 + 0x230); plVar13 != plVar9; plVar13 = plVar13 + 2) {
              *(undefined1 *)(*plVar13 + 0x60) = uVar8;
            }
            goto LAB_10a42db28;
          }
        }
        else {
          plVar13 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bde478,0);
          plVar11 = *(long **)(param_5 + 0x238);
          for (plVar9 = *(long **)(param_5 + 0x230); plVar9 != plVar11; plVar9 = plVar9 + 2) {
            *(char *)(*plVar9 + 0x60) = (char)plVar13;
          }
LAB_10a42db28:
          *(undefined1 *)(param_5 + 0x248) = 1;
        }
        ppuStack_f0 = (undefined **)&UNK_10f657f35;
        ppuStack_e8 = (undefined **)0x2e;
        if (*(long *)(param_5 + 0x2a8) == 0) {
          FUN_10a0edfc4(&ppuStack_f0);
          goto LAB_10a42e034;
        }
        (**(code **)(*param_6 + 0x1f8))(param_6,&PTR_DAT_110bd6af8);
        plVar13 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bd6b18);
        if ((int)plVar13 == 0) {
          plVar13 = param_6;
          (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be0450);
          if ((int)plVar13 != 0) {
            lVar5 = *(long *)(param_5 + 0x2a8);
            plVar13 = param_6;
            (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110be0450,1);
            uVar8 = SUB81(plVar13,0);
            goto LAB_10a42dbd4;
          }
        }
        else {
          plVar13 = param_6;
          (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110bd6b18);
          uVar8 = SUB81(plVar13,0);
          lVar5 = *(long *)(param_5 + 0x2a8);
LAB_10a42dbd4:
          *(undefined1 *)(lVar5 + 0x60) = uVar8;
        }
        plVar13 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c02188);
        if ((int)plVar13 != 0) {
          lVar5 = *(long *)(param_5 + 0x2a8);
          plVar13 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c02188,0);
          *(char *)(lVar5 + 0x61) = (char)plVar13;
        }
        plVar13 = param_6;
        (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd6b38,0);
        *(char *)(param_5 + 0x730) = (char)plVar13;
        plVar13 = param_6;
        (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd6b58,0);
        *(char *)(*(long *)(param_5 + 0x2d0) + 0x18) = (char)plVar13;
        plVar9 = param_6;
        (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd6b78,2);
        plVar13 = (long *)(param_5 + 0x2d0);
        *(char *)(*plVar13 + 0x19) = (char)plVar9;
        plVar9 = param_6;
        (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bd6b98,3);
        *(char *)(*plVar13 + 0x1a) = (char)plVar9;
        uVar16 = 0x3e99999a;
        (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6bb8);
        *(undefined4 *)(*plVar13 + 0x1c) = uVar16;
        uVar16 = 0x3f800000;
        (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6bd8);
        *(undefined4 *)(*plVar13 + 0x20) = uVar16;
        uVar16 = 0x3a03126f;
        (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6bf8);
        *(undefined4 *)(*plVar13 + 0x24) = uVar16;
        uVar16 = 0x3f000000;
        (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6c18);
        *(undefined4 *)(*plVar13 + 0x28) = uVar16;
        uVar16 = 0x3f800000;
        (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6c38);
        *(undefined4 *)(*plVar13 + 0x2c) = uVar16;
        uVar16 = 0x3d4ccccd;
        (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bd6c58);
        *(undefined4 *)(*plVar13 + 0x30) = uVar16;
        plVar13 = *(long **)(param_5 + 0x2c8);
        *(undefined8 *)(param_5 + 0x2c8) = 0;
        *(undefined8 *)(param_5 + 0x2c0) = 0;
        if (plVar13 != (long *)0x0) {
          plVar9 = plVar13 + 1;
          do {
            lVar5 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bd6c78);
        if ((int)plVar13 == 0) {
          plVar13 = param_6;
          (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bd6c98);
          if ((int)plVar13 != 0) {
            uStack_1f0 = 0x10a450568;
            ppuStack_1e8 = &PTR_DAT_110bd9d10;
            ppuStack_f0 = (undefined **)0x10a450568;
            ppuStack_e8 = &PTR_DAT_110bd9d10;
            uStack_a0 = CONCAT17(10,(undefined7)uStack_a0);
            uStack_b0 = 0x6963617254796172;
            uStack_a8 = CONCAT53(uStack_a8._3_5_,0x676e);
            pcStack_98 = FUN_10a450328;
            ppuStack_90 = &PTR_FUN_110bd9cf8;
            puVar7 = (undefined8 *)0x58;
            lStack_1e0 = param_5;
            lStack_e0 = param_5;
            __Znwm();
            *puVar7 = 0x10a450568;
            puVar7[1] = &PTR_DAT_110bd9d10;
            puVar7[2] = param_5;
            puVar7[9] = uStack_a8;
            puVar7[8] = uStack_b0;
            puVar7[10] = uStack_a0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            puStack_88 = puVar7;
            func_0x000107c2b054(auStack_208,&UNK_10f656650);
            (**(code **)(*param_6 + 0x250))(param_6,&PTR_DAT_110bd6c98,&pcStack_98,0,auStack_208);
            if (cStack_1f1 < '\0') {
              __ZdlPv(auStack_208[0]);
            }
            (*(code *)*ppuStack_90)(&ppuStack_90);
            (*(code *)*ppuStack_e8)(&ppuStack_e8);
            (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
          }
        }
        else {
          (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110bd6c78);
          FUN_10a02f100(&ppuStack_f0,param_6,*(undefined8 *)(param_5 + 0x170));
          FUN_10a02eeb0(param_5 + 0x2c0,&ppuStack_f0);
          ppuVar6 = ppuStack_e8;
          if (ppuStack_e8 != (undefined **)0x0) {
            ppuVar1 = ppuStack_e8 + 1;
            do {
              puVar10 = *ppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar3) {
                *ppuVar1 = puVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar10 == (undefined *)0x0) {
              (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
            }
          }
          (**(code **)(*param_6 + 0x220))(param_6);
        }
        FUN_10a20248c(param_6,&PTR_DAT_110bb3700,param_5 + 0x250);
        *(undefined1 *)(param_5 + 0x2f0) = 1;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
        goto LAB_10a42e008;
      }
    }
    ppuStack_e8 = (undefined **)0x26;
    ppuStack_f0 = (undefined **)&UNK_10f657f0e;
    FUN_10a0edfc4(&ppuStack_f0);
  }
LAB_10a42e034:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a42e038);
  (*pcVar4)();
}



/* Entry: 10a42e0e0; end: 10a42e177;  */

/* WARNING: Type propagation algorithm not settling */

long ****** FUN_10a42e0e0(long ******param_1,long ******param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long *******ppppppplVar5;
  code *pcVar6;
  undefined **ppuVar7;
  code *******pppppppcVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  long ******pppppplVar13;
  undefined8 *extraout_x8;
  long *****ppppplVar14;
  long ****pppplVar15;
  long ******pppppplVar16;
  long ****pppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******unaff_x23;
  undefined **unaff_x24;
  code *******pppppppcVar20;
  undefined **unaff_x25;
  long ******unaff_x26;
  undefined8 uVar21;
  code ******ppppppcVar22;
  code ******ppppppcVar23;
  code *******pppppppcStack_298;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  code *******pppppppcStack_258;
  long ******pppppplStack_250;
  long *****ppppplStack_248;
  long lStack_218;
  long ******pppppplStack_210;
  long *******ppppppplStack_208;
  long ******pppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long ******pppppplStack_1e0;
  long ******pppppplStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long ******pppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long ******pppppplStack_1a0;
  undefined **ppuStack_198;
  long ******pppppplStack_190;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long ******pppppplStack_150;
  long lStack_118;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  long ******pppppplStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long ******pppppplStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long ******pppppplStack_38;
  
  ppppplVar12 = *param_1;
  if (param_2 <= (long ******)((long)param_1[2] - (long)ppppplVar12 >> 4)) {
    return param_1;
  }
  if ((ulong)param_2 >> 0x3c == 0) {
    ppppplVar14 = param_1[1];
    pppppplVar13 = param_1;
    pppppplStack_38 = param_1;
    FUN_10a438bc4();
    ppppplVar12 = (long *****)((long)pppppplVar13 + ((long)ppppplVar14 - (long)ppppplVar12));
    ppppplVar14 = (long *****)((long)ppppplVar12 - ((long)param_1[1] - (long)*param_1));
    _memcpy(ppppplVar14);
    ppppplStack_58 = *param_1;
    *param_1 = ppppplVar14;
    param_1[1] = ppppplVar12;
    ppppplStack_40 = param_1[2];
    param_1[2] = (long *****)(pppppplVar13 + (long)param_2 * 2);
    pppppplVar13 = &ppppplStack_58;
    ppppplStack_50 = ppppplStack_58;
    ppppplStack_48 = ppppplStack_58;
    func_0x00010a438bf8(pppppplVar13);
    return pppppplVar13;
  }
  FUN_10a438bb0();
  ppppppplVar11 = &pppppplStack_b0;
  pcStack_68 = FUN_10a42e178;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10a3c7928();
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc89e8,*(undefined4 *)((long)param_1 + 500));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc8a08,*(undefined4 *)(param_1 + 0x3e));
  (*(code *)(*param_2)[0xc])(*(float *)(param_1 + 0x4d) * 57.29578,param_2,&PTR_DAT_110bd93b0);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)((long)param_1 + 0x264),param_2,&PTR_DAT_110bd93d0);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1 + 0x4c),param_2,&PTR_DAT_110bd93f0);
  (*(code *)(*param_2)[0xe])(param_2,&PTR_DAT_110bd6938,*(undefined1 *)(param_1 + 0x57));
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1 + 0x4e),param_2,&PTR_DAT_110bd9410);
  (*(code *)(*param_2)[0xb])(param_2,&PTR_DAT_110bd0108,param_1[0x52]);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)((long)param_1 + 0x26c),param_2,&PTR_DAT_110bd6978);
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6998,*(undefined4 *)(param_1 + 0x54));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd69b8,*(undefined1 *)(param_1 + 0x51));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd69d8,*(undefined1 *)((long)param_1 + 0x289));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6b38,*(undefined1 *)(param_1 + 0xe6));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6b58,*(undefined1 *)(param_1[0x5a] + 3));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6b78,*(undefined1 *)((long)param_1[0x5a] + 0x19));
  ppppppplVar9 = (long *******)(ulong)*(byte *)((long)param_1[0x5a] + 0x1a);
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6b98);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)((long)param_1[0x5a] + 0x1c),param_2,&PTR_DAT_110bd6bb8)
  ;
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1[0x5a] + 4),param_2,&PTR_DAT_110bd6bd8);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)((long)param_1[0x5a] + 0x24),param_2,&PTR_DAT_110bd6bf8)
  ;
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1[0x5a] + 5),param_2,&PTR_DAT_110bd6c18);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)((long)param_1[0x5a] + 0x2c),param_2,&PTR_DAT_110bd6c38)
  ;
  ppuVar7 = &PTR_DAT_110bd6c58;
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1[0x5a] + 6),param_2,&PTR_DAT_110bd6c58);
  pppppplVar13 = (long ******)param_1[0x58];
  if (pppppplVar13 != (long ******)0x0) {
    ppppplStack_a8 = param_1[0x59];
    ppppplStack_a0 = (long *****)&UNK_10f6588ea;
    pppppplStack_98 = (long ******)0x18;
    if (ppppplStack_a8 != (long *****)0x0) {
      ppppplVar12 = ppppplStack_a8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
        if (bVar4) {
          *ppppplVar12 = (long ****)((long)*ppppplVar12 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar7 = &PTR_DAT_110bd6c98;
    pppppplStack_b0 = pppppplVar13;
    (*(code *)(*param_2)[0x21])(param_2,&PTR_DAT_110bd6c98,&pppppplStack_b0,&ppppplStack_a0);
    ppppplVar12 = ppppplStack_a8;
    ppppppplVar9 = ppppppplVar11;
    if (ppppplStack_a8 != (long *****)0x0) {
      ppppplVar14 = ppppplStack_a8 + 1;
      do {
        pppplVar15 = *ppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
        if (bVar4) {
          *ppppplVar14 = (long ****)((long)pppplVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppplVar15 == (long ****)0x0) {
        (*(code *)(*ppppplStack_a8)[2])(ppppplStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
        ppppppplVar9 = ppppppplVar11;
      }
    }
  }
  ppppplStack_a0 = (long *****)&UNK_10f657f64;
  pppppplStack_98 = (long ******)0x3f;
  if (param_1[0x46] != param_1[0x47]) {
    ppppplStack_a0 = (long *****)&UNK_10f657f35;
    pppppplStack_98 = (long ******)0x2e;
    if (param_1[0x55] != (long *****)0x0) {
      (*(code *)(*param_2)[3])(param_2,&PTR_DAT_110bd69f8);
      ppppplVar14 = param_1[0x47];
      for (ppppplVar12 = param_1[0x46]; ppppplVar12 != ppppplVar14; ppppplVar12 = ppppplVar12 + 2) {
        (*(code *)(*param_2)[0x25])(param_2,*ppppplVar12,0);
      }
      (*(code *)(*param_2)[4])(param_2);
      (*(code *)(*param_2)[0x23])(param_2,&PTR_DAT_110bd6af8,param_1[0x55]);
      pppppplStack_98 = (long ******)param_1[0x4b];
      ppppplStack_a0 = param_1[0x4a];
      if (param_1[0x4b] != (long *****)0x0) {
        ppppplVar12 = param_1[0x4b] + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
          if (bVar4) {
            *ppppplVar12 = (long ****)((long)*ppppplVar12 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*(code *)(*param_2)[0x21])
                (param_2,&PTR_DAT_110bb3700,&ppppplStack_a0,&stack0xffffffffffffff70);
      pppppplVar13 = pppppplStack_98;
      if (pppppplStack_98 != (long ******)0x0) {
        pppppplVar16 = pppppplStack_98 + 1;
        do {
          ppppplVar12 = *pppppplVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
          if (bVar4) {
            *pppppplVar16 = (long *****)((long)ppppplVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppplVar12 == (long *****)0x0) {
          (*(code *)(*pppppplStack_98)[2])(pppppplStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
          param_2 = pppppplVar13;
        }
      }
      return param_2;
    }
  }
  pppppplVar13 = &ppppplStack_a0;
  FUN_10a0edfc4();
  func_0x00010a052384(&pppppplStack_b0);
  __Unwind_Resume();
  pcStack_b8 = FUN_10a42e5b4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c0 = &puStack_70;
  if (ppppppplVar9 == (long *******)0x0) {
    pppppplVar16 = pppppplVar13;
    pppppplVar10 = (long ******)ppuVar7;
    func_0x00010a0fda30();
  }
  else {
    unaff_x23 = (long *******)&ppppppplStack_160;
    ppppppplStack_158 = (long *******)pppppplVar13[9];
    ppppppplStack_160 = (long *******)pppppplVar13[8];
    ppppppplVar11 = ppppppplVar9 + 0x11;
    func_0x00010a35bf90(ppppppplVar11,&ppppppplStack_160);
    ppppppplVar19 = (long *******)((ulong)unaff_x23 | 8);
    ppppppplVar18 = unaff_x23;
    if (ppppppplVar11 != (long *******)0x0) {
      ppppppplVar19 = ppppppplVar11 + 5;
      ppppppplVar18 = ppppppplVar11 + 4;
    }
    pppppplVar10 = *ppppppplVar19;
    pppppplVar16 = *ppppppplVar18;
  }
  FUN_10a0d67c8(&pppppplStack_1b0,pppppplVar13[0x2e],pppppplVar16,pppppplVar10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppppplStack_1b0 + 0x2a,pppppplVar13 + 0x2a);
  uVar1 = (*(ushort *)(pppppplVar13 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(pppppplStack_1b0 + 0x30) & 0xfffc;
  *(ushort *)(pppppplStack_1b0 + 0x30) = uVar2 | *(ushort *)(pppppplStack_1b0 + 0x30) & 1 | uVar1;
  *(ushort *)(pppppplStack_1b0 + 0x30) = uVar2 | uVar1 | *(ushort *)(pppppplVar13 + 0x30) & 1;
  ppppppplStack_160 = (long *******)pppppplStack_1b0;
  ppppppplStack_158 = ppppppplStack_1a8;
  if (ppppppplStack_1a8 != (long *******)0x0) {
    ppppppplVar11 = ppppppplStack_1a8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
      if (bVar4) {
        *ppppppplVar11 = (long ******)((long)*ppppppplVar11 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3c7ce8(ppuVar7,&ppppppplStack_160);
  ppppppplVar11 = ppppppplStack_158;
  if (ppppppplStack_158 != (long *******)0x0) {
    ppppppplVar19 = ppppppplStack_158 + 1;
    do {
      pppppplVar16 = *ppppppplVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
      if (bVar4) {
        *ppppppplVar19 = (long ******)((long)pppppplVar16 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppplVar16 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_158)[2])(ppppppplStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar11);
    }
  }
  *(undefined4 *)(pppppplStack_1b0 + 0x4e) = *(undefined4 *)(pppppplVar13 + 0x4e);
  ppppplVar12 = pppppplVar13[0x4c];
  pppppplStack_1b0[0x4d] = pppppplVar13[0x4d];
  pppppplStack_1b0[0x4c] = ppppplVar12;
  *(undefined2 *)(pppppplStack_1b0 + 0x51) = *(undefined2 *)(pppppplVar13 + 0x51);
  *(undefined4 *)(pppppplStack_1b0 + 0x54) = *(undefined4 *)(pppppplVar13 + 0x54);
  ppppplVar12 = pppppplVar13[0x52];
  pppppplStack_1b0[0x53] = pppppplVar13[0x53];
  pppppplStack_1b0[0x52] = ppppplVar12;
  pppppplStack_1b0[0x3e] = pppppplVar13[0x3e];
  *(undefined1 *)(pppppplStack_1b0 + 0xe6) = *(undefined1 *)(pppppplVar13 + 0xe6);
  ppppppplVar11 = (long *******)pppppplVar13[0x5b];
  FUN_10a42cdd4(pppppplStack_1b0 + 0x5a,pppppplVar13[0x5a]);
  if (pppppplVar13[0x58] != (long *****)0x0) {
    ppppppplVar11 = ppppppplVar9;
    FUN_10a02e800(pppppplVar13[0x58],pppppplStack_1b0 + 0x58);
  }
  ppppplVar12 = pppppplVar13[0x4a];
  pppppplStack_1a0 = (long ******)0x10a4506b4;
  ppuStack_198 = &PTR_FUN_110bd9d28;
  pppppplStack_190 = pppppplStack_1b0 + 0x4a;
  if (ppppplVar12 == (long *****)0x0) {
    ppppppplStack_160 = (long *******)0x0;
    FUN_10a2e9e64(&pppppplStack_1a0,&ppppppplStack_160);
    ppppppplVar19 = (long *******)0x0;
  }
  else if (ppppppplVar9 == (long *******)0x0) {
    FUN_10a450620(&ppppppplStack_160,ppppplVar12);
    FUN_10a450594(&pppppplStack_1a0,&ppppppplStack_160);
    ppppppplVar19 = ppppppplStack_158;
    if (ppppppplStack_158 != (long *******)0x0) {
      ppppppplVar19 = ppppppplStack_158 + 1;
      do {
        pppppplVar16 = *ppppppplVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
        if (bVar4) {
          *ppppppplVar19 = (long ******)((long)pppppplVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10a42e870:
      ppppppplVar19 = ppppppplStack_158;
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_158)[2])(ppppppplStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar19);
      }
    }
  }
  else {
    unaff_x24 = (undefined **)ppppplVar12[8];
    unaff_x23 = (long *******)ppppplVar12[9];
    if (*(char *)(ppppppplVar9 + 0x17) == '\x01') {
      ppppppplStack_160 = (long *******)0x10a4506b4;
      ppppppplStack_158 = (long *******)&PTR_FUN_110bd9d28;
      ppppppplVar11 = unaff_x23;
      pppppplStack_150 = pppppplStack_1b0 + 0x4a;
      FUN_10a069d9c(ppppppplVar9,unaff_x24,unaff_x23,&ppppppplStack_160);
    }
    else {
      ppppppplVar19 = ppppppplVar9 + 0x11;
      ppppppplStack_160 = (long *******)unaff_x24;
      ppppppplStack_158 = unaff_x23;
      func_0x00010a35bf90(ppppppplVar19,&ppppppplStack_160);
      ppppppplVar18 = (long *******)&ppppppplStack_158;
      ppppppplVar5 = (long *******)&ppppppplStack_160;
      if (ppppppplVar19 != (long *******)0x0) {
        ppppppplVar18 = ppppppplVar19 + 5;
        ppppppplVar5 = ppppppplVar19 + 4;
      }
      unaff_x25 = (undefined **)*ppppppplVar18;
      unaff_x26 = *ppppppplVar5;
      if (((long ******)unaff_x24 == unaff_x26) && (unaff_x23 == (long *******)unaff_x25)) {
        FUN_10a450620(&ppppppplStack_160,ppppplVar12);
        FUN_10a450594(&pppppplStack_1a0,&ppppppplStack_160);
        ppppppplVar19 = ppppppplStack_158;
        if (ppppppplStack_158 != (long *******)0x0) {
          ppppppplVar19 = ppppppplStack_158 + 1;
          do {
            pppppplVar16 = *ppppppplVar19;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
            if (bVar4) {
              *ppppppplVar19 = (long ******)((long)pppppplVar16 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a42e870;
        }
        goto LAB_10a42e8d0;
      }
      ppppppplStack_160 = (long *******)pppppplStack_1a0;
      (*(code *)ppuStack_198[3])(&ppppppplStack_158,&ppuStack_198);
      ppppppplVar11 = (long *******)unaff_x25;
      FUN_10a069d9c(ppppppplVar9,unaff_x26,unaff_x25,&ppppppplStack_160);
    }
    (*(code *)*ppppppplStack_158)(&ppppppplStack_158);
    ppppppplVar19 = (long *******)&ppppppplStack_160;
  }
LAB_10a42e8d0:
  (*(code *)*ppuStack_198)(&ppuStack_198);
  if ((pppppplStack_1b0[0x46] == pppppplStack_1b0[0x47]) ||
     (*pppppplStack_1b0[0x46] == (long ****)0x0)) {
LAB_10a42ecc8:
    ppppppplStack_158 = (long *******)0x3c;
    ppppppplStack_160 = (long *******)&UNK_10f657fa4;
    FUN_10a0edfc4(&ppppppplStack_160);
LAB_10a42ecd0:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a42ecd4);
    (*pcVar6)();
  }
  ppppppplStack_160 = (long *******)&UNK_10f657fa4;
  ppppppplStack_158 = (long *******)0x3c;
  if (pppppplStack_1b0[0x55] == (long *****)0x0) goto LAB_10a42ecc8;
  ppppplVar12 = (long *****)((long)pppppplVar13[0x47] - (long)pppppplVar13[0x46] >> 4);
  pppppplVar16 = pppppplStack_1b0 + 0x46;
  FUN_10a42e0e0();
  if (pppppplVar13[0x47] != pppppplVar13[0x46]) {
    unaff_x23 = (long *******)0x0;
    unaff_x24 = &PTR_DAT_110bd9c58;
    unaff_x25 = &PTR_DAT_110bd6cc8;
    uStack_1b8 = 0x3f80000000000000;
    uStack_1c0 = 0;
    do {
      pppppplVar16 = pppppplStack_1b0;
      if (unaff_x23 != (long *******)0x0) {
        ppppppplVar11 = (long *******)0x90;
        __Znwm();
        ppppppplVar11[1] = (long ******)0x0;
        ppppppplVar11[2] = (long ******)0x0;
        *ppppppplVar11 = (long ******)&PTR_DAT_110bd9c58;
        *(undefined1 *)(ppppppplVar11 + 4) = 0;
        ppppppplVar11[7] = (long ******)0x0;
        ppppppplVar11[6] = (long ******)0x0;
        ppppppplVar11[9] = (long ******)0x0;
        ppppppplVar11[8] = (long ******)0x0;
        ppppppplVar11[0xb] = (long ******)0x0;
        ppppppplVar11[10] = (long ******)0x0;
        ppppppplVar11[0xd] = (long ******)0x0;
        ppppppplVar11[0xc] = (long ******)0x0;
        ppppppplVar11[0xe] = (long ******)0x0;
        ppppppplStack_160 = ppppppplVar11 + 3;
        *ppppppplStack_160 = (long ******)&PTR_DAT_110bd6cc8;
        ppppppplVar11[5] = (long ******)&PTR_DAT_110bd6d28;
        *(undefined1 *)(ppppppplVar11 + 0xf) = 0;
        *(undefined8 *)((long)ppppppplVar11 + 0x84) = uStack_1b8;
        *(undefined8 *)((long)ppppppplVar11 + 0x7c) = uStack_1c0;
        *(undefined1 *)((long)ppppppplVar11 + 0x8c) = 0;
        ppppppplStack_158 = ppppppplVar11;
        func_0x00010a42a91c(pppppplVar16 + 0x46,&ppppppplStack_160);
        ppppppplVar11 = ppppppplStack_158;
        if (ppppppplStack_158 != (long *******)0x0) {
          ppppppplVar19 = ppppppplStack_158 + 1;
          do {
            pppppplVar16 = *ppppppplVar19;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
            if (bVar4) {
              *ppppppplVar19 = (long ******)((long)pppppplVar16 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppplVar16 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_158)[2])(ppppppplStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar11);
          }
        }
      }
      if (((long *******)((long)pppppplStack_1b0[0x47] - (long)pppppplStack_1b0[0x46] >> 4) <=
           unaff_x23) ||
         ((long *******)((long)pppppplVar13[0x47] - (long)pppppplVar13[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      ppppppplVar19 = (long *******)((long)unaff_x23 * 0x10);
      pppplVar15 = pppppplStack_1b0[0x46][(long)unaff_x23 * 2];
      pppplVar17 = pppppplVar13[0x46][(long)unaff_x23 * 2];
      *(undefined1 *)(pppplVar15 + 0xc) = *(undefined1 *)(pppplVar17 + 0xc);
      uVar21 = *(undefined8 *)((long)pppplVar17 + 100);
      *(undefined8 *)((long)pppplVar15 + 0x6c) = *(undefined8 *)((long)pppplVar17 + 0x6c);
      *(undefined8 *)((long)pppplVar15 + 100) = uVar21;
      if (((long *******)((long)pppppplStack_1b0[0x47] - (long)pppppplStack_1b0[0x46] >> 4) <=
           unaff_x23) ||
         ((long *******)((long)pppppplVar13[0x47] - (long)pppppplVar13[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      pppplVar15 = pppppplStack_1b0[0x46][(long)unaff_x23 * 2];
      pppplVar17 = pppppplVar13[0x46][(long)unaff_x23 * 2];
      *(undefined1 *)((long)pppplVar15 + 0x74) = *(undefined1 *)((long)pppplVar17 + 0x74);
      FUN_10a42ed70(pppplVar17[5],pppplVar15 + 5,ppppppplVar9);
      if (((long *******)((long)pppppplVar13[0x47] - (long)pppppplVar13[0x46] >> 4) <= unaff_x23) ||
         ((long *******)((long)pppppplStack_1b0[0x47] - (long)pppppplStack_1b0[0x46] >> 4) <=
          unaff_x23)) goto LAB_10a42ecd0;
      FUN_10a42ed70(pppppplVar13[0x46][(long)unaff_x23 * 2][7],
                    pppppplStack_1b0[0x46][(long)unaff_x23 * 2] + 7,ppppppplVar9);
      if (((long *******)((long)pppppplVar13[0x47] - (long)pppppplVar13[0x46] >> 4) <= unaff_x23) ||
         ((long *******)((long)pppppplStack_1b0[0x47] - (long)pppppplStack_1b0[0x46] >> 4) <=
          unaff_x23)) goto LAB_10a42ecd0;
      pppppplVar16 = (long ******)pppppplVar13[0x46][(long)unaff_x23 * 2][9];
      ppppplVar12 = (long *****)(pppppplStack_1b0[0x46][(long)unaff_x23 * 2] + 9);
      ppppppplVar11 = ppppppplVar9;
      FUN_10a42ed70();
      if ((long *******)((long)pppppplStack_1b0[0x47] - (long)pppppplStack_1b0[0x46] >> 4) <=
          unaff_x23) goto LAB_10a42ecd0;
      ppppppplVar18 = (long *******)((long)pppppplVar13[0x47] - (long)pppppplVar13[0x46] >> 4);
      if (ppppppplVar18 <= unaff_x23) goto LAB_10a42ecd0;
      *(undefined4 *)(pppppplStack_1b0[0x46][(long)unaff_x23 * 2] + 0xb) =
           *(undefined4 *)(pppppplVar13[0x46][(long)unaff_x23 * 2] + 0xb);
      unaff_x23 = (long *******)((long)unaff_x23 + 1);
      unaff_x26 = pppppplStack_1b0;
    } while (unaff_x23 < ppppppplVar18);
  }
  if (pppppplVar13[0x55] != (long *****)0x0) {
    ppppppplVar11 = (long *******)0x88;
    __Znwm();
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)&PTR_FUN_110bd9bb8;
    *(undefined1 *)(ppppppplVar11 + 4) = 0;
    ppppppplVar11[7] = (long ******)0x0;
    ppppppplVar11[6] = (long ******)0x0;
    ppppppplVar11[9] = (long ******)0x0;
    ppppppplVar11[8] = (long ******)0x0;
    ppppppplVar11[0xb] = (long ******)0x0;
    ppppppplVar11[10] = (long ******)0x0;
    ppppppplVar11[0xd] = (long ******)0x0;
    ppppppplVar11[0xc] = (long ******)0x0;
    ppppppplVar11[0xe] = (long ******)0x0;
    ppppppplStack_160 = ppppppplVar11 + 3;
    *ppppppplStack_160 = (long ******)&PTR_DAT_110bd6d80;
    ppppppplVar11[5] = (long ******)&PTR_DAT_110bd6de0;
    *(undefined2 *)(ppppppplVar11 + 0xf) = 0;
    *(undefined8 *)((long)ppppppplVar11 + 0x7c) = 0x3f800000;
    ppppppplStack_158 = ppppppplVar11;
    FUN_10a42efb4(pppppplStack_1b0 + 0x55,&ppppppplStack_160);
    ppppppplVar19 = ppppppplStack_158;
    if (ppppppplStack_158 != (long *******)0x0) {
      ppppppplVar11 = ppppppplStack_158 + 1;
      do {
        pppppplVar16 = *ppppppplVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
        if (bVar4) {
          *ppppppplVar11 = (long ******)((long)pppppplVar16 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppplVar16 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_158)[2])(ppppppplStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar19);
      }
    }
    ppppplVar12 = pppppplStack_1b0[0x55];
    ppppplVar14 = pppppplVar13[0x55];
    *(undefined2 *)(ppppplVar12 + 0xc) = *(undefined2 *)(ppppplVar14 + 0xc);
    *(undefined4 *)((long)ppppplVar12 + 100) = *(undefined4 *)((long)ppppplVar14 + 100);
    *(undefined4 *)(ppppplVar12 + 0xd) = *(undefined4 *)(ppppplVar14 + 0xd);
    FUN_10a42ed70(ppppplVar14[5],ppppplVar12 + 5,ppppppplVar9);
    FUN_10a42ed70(pppppplVar13[0x55][7],pppppplStack_1b0[0x55] + 7,ppppppplVar9);
    pppppplVar16 = (long ******)pppppplVar13[0x55][9];
    ppppplVar12 = pppppplStack_1b0[0x55] + 9;
    ppppppplVar11 = ppppppplVar9;
    FUN_10a42ed70();
    *(undefined4 *)(pppppplStack_1b0[0x55] + 0xb) = *(undefined4 *)(pppppplVar13[0x55] + 0xb);
  }
  *extraout_x8 = pppppplStack_1b0;
  extraout_x8[1] = ppppppplStack_1a8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pppppplVar16;
  }
  ___stack_chk_fail();
  (*(code *)*ppppppplStack_158)(ppppppplVar19 + 1);
  (*(code *)*ppuStack_198)(&ppuStack_198);
  FUN_10a0d6a2c(&pppppplStack_1b0);
  pppppplVar10 = pppppplVar16;
  __Unwind_Resume();
  pppppplStack_210 = unaff_x26;
  ppppppplStack_208 = (long *******)unaff_x25;
  pppppplStack_200 = (long ******)unaff_x24;
  ppppppplStack_1f8 = unaff_x23;
  ppppppplStack_1f0 = ppppppplVar19;
  ppppppplStack_1e8 = ppppppplVar9;
  pppppplStack_1e0 = pppppplVar13;
  pppppplStack_1d8 = pppppplVar16;
  pppuStack_1d0 = &ppuStack_c0;
  pcStack_1c8 = FUN_10a42ed70;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcStack_298 = (code *******)FUN_10a4507a0;
  ppppplStack_290 = (long *****)&PTR_FUN_110bd9d48;
  ppppplStack_288 = ppppplVar12;
  if (pppppplVar10 == (long ******)0x0) {
    pppppppcStack_258 = (code *******)0x0;
    pppppppcVar20 = (code *******)&pppppppcStack_258;
    FUN_10a2e9e64(&pppppppcStack_298);
    goto LAB_10a42ef1c;
  }
  if (ppppppplVar11 == (long *******)0x0) {
    FUN_10a2e9f70(&pppppppcStack_258,pppppplVar10);
    pppppppcVar20 = (code *******)&pppppppcStack_258;
    FUN_10a2e9ee4(&pppppppcStack_298);
    if (pppppplStack_250 == (long ******)0x0) goto LAB_10a42ef1c;
    pppppplVar13 = pppppplStack_250 + 1;
    do {
      ppppplVar12 = *pppppplVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
      if (bVar4) {
        *pppppplVar13 = (long *****)((long)ppppplVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_10a42ef00:
    pppppplVar13 = pppppplStack_250;
    if (ppppplVar12 == (long *****)0x0) {
      (*(code *)(*pppppplStack_250)[2])(pppppplStack_250);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
    }
  }
  else {
    pppppppcVar8 = (code *******)pppppplVar10[8];
    pppppplVar13 = (long ******)pppppplVar10[9];
    if (*(char *)(ppppppplVar11 + 0x17) == '\x01') {
      pppppppcStack_258 = (code *******)FUN_10a4507a0;
      pppppplStack_250 = (long ******)&PTR_FUN_110bd9d48;
      ppppplStack_248 = ppppplVar12;
      FUN_10a069d9c(ppppppplVar11,pppppppcVar8,pppppplVar13,&pppppppcStack_258);
      pppppppcVar20 = pppppppcVar8;
    }
    else {
      ppppppplVar9 = ppppppplVar11 + 0x11;
      pppppppcStack_258 = pppppppcVar8;
      pppppplStack_250 = pppppplVar13;
      func_0x00010a35bf90(ppppppplVar9,&pppppppcStack_258);
      ppppppplVar19 = &pppppplStack_250;
      pppppppcVar20 = (code *******)&pppppppcStack_258;
      if (ppppppplVar9 != (long *******)0x0) {
        ppppppplVar19 = ppppppplVar9 + 5;
        pppppppcVar20 = (code *******)(ppppppplVar9 + 4);
      }
      pppppplVar16 = *ppppppplVar19;
      pppppppcVar20 = (code *******)*pppppppcVar20;
      if (pppppppcVar8 == pppppppcVar20 && pppppplVar13 == pppppplVar16) {
        FUN_10a2e9f70(&pppppppcStack_258,pppppplVar10);
        pppppppcVar20 = (code *******)&pppppppcStack_258;
        FUN_10a2e9ee4(&pppppppcStack_298);
        if (pppppplStack_250 == (long ******)0x0) goto LAB_10a42ef1c;
        pppppplVar13 = pppppplStack_250 + 1;
        do {
          ppppplVar12 = *pppppplVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
          if (bVar4) {
            *pppppplVar13 = (long *****)((long)ppppplVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10a42ef00;
      }
      pppppppcStack_258 = pppppppcStack_298;
      (*(code *)ppppplStack_290[3])(&pppppplStack_250,&ppppplStack_290);
      FUN_10a069d9c(ppppppplVar11,pppppppcVar20,pppppplVar16,&pppppppcStack_258);
    }
    (*(code *)*pppppplStack_250)(&pppppplStack_250);
  }
LAB_10a42ef1c:
  pppppplVar13 = &ppppplStack_290;
  (*(code *)*ppppplStack_290)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return pppppplVar13;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&pppppppcStack_258);
  (*(code *)*ppppplStack_290)(&ppppplStack_290);
  __Unwind_Resume();
  ppppppcVar23 = pppppppcVar20[1];
  ppppppcVar22 = *pppppppcVar20;
  *pppppppcVar20 = (code ******)0x0;
  pppppppcVar20[1] = (code ******)0x0;
  ppppplVar12 = pppppplVar13[1];
  pppppplVar13[1] = (long *****)ppppppcVar23;
  *pppppplVar13 = (long *****)ppppppcVar22;
  if (ppppplVar12 != (long *****)0x0) {
    ppppplVar14 = ppppplVar12 + 1;
    do {
      pppplVar15 = *ppppplVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
      if (bVar4) {
        *ppppplVar14 = (long ****)((long)pppplVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppplVar15 == (long ****)0x0) {
      (*(code *)(*ppppplVar12)[2])(ppppplVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
    }
  }
  return pppppplVar13;
}



/* Entry: 10a42e178; end: 10a42e5b3;  */

long ***** FUN_10a42e178(long param_1,long *****param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long ******pppppplVar7;
  code *pcVar8;
  undefined **ppuVar9;
  code ******ppppppcVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  long ******pppppplVar13;
  long *****ppppplVar14;
  undefined8 *extraout_x8;
  long ***ppplVar15;
  long ****pppplVar16;
  long lVar17;
  long *****ppppplVar18;
  long ***ppplVar19;
  long ******pppppplVar20;
  long ****pppplVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long ******pppppplVar24;
  long ******unaff_x23;
  undefined **unaff_x24;
  code ******ppppppcVar25;
  undefined **unaff_x25;
  long *****unaff_x26;
  undefined8 uVar26;
  code *****pppppcVar27;
  code *****pppppcVar28;
  code *****pppppcStack_238;
  long ***ppplStack_230;
  long ***ppplStack_228;
  code *****pppppcStack_1f8;
  long ****pppplStack_1f0;
  long ***ppplStack_1e8;
  long lStack_1b8;
  long ****pppplStack_1b0;
  long *****ppppplStack_1a8;
  long ****pppplStack_1a0;
  long *****ppppplStack_198;
  long *****ppppplStack_190;
  long *****ppppplStack_188;
  long ****pppplStack_180;
  long ****pppplStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long ****pppplStack_150;
  long *****ppppplStack_148;
  long ****pppplStack_140;
  undefined **ppuStack_138;
  long ****pppplStack_130;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long ****pppplStack_f0;
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  long ****pppplStack_50;
  long *plStack_48;
  long ***ppplStack_40;
  long ****pppplStack_38;
  
  pppppplVar13 = (long ******)&pppplStack_50;
  FUN_10a3c7928();
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc89e8,*(undefined4 *)(param_1 + 500));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc8a08,*(undefined4 *)(param_1 + 0x1f0));
  (*(code *)(*param_2)[0xc])(*(float *)(param_1 + 0x268) * 57.29578,param_2,&PTR_DAT_110bd93b0);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1 + 0x264),param_2,&PTR_DAT_110bd93d0);
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1 + 0x260),param_2,&PTR_DAT_110bd93f0);
  (*(code *)(*param_2)[0xe])(param_2,&PTR_DAT_110bd6938,*(undefined1 *)(param_1 + 0x2b8));
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1 + 0x270),param_2,&PTR_DAT_110bd9410);
  (*(code *)(*param_2)[0xb])(param_2,&PTR_DAT_110bd0108,*(undefined8 *)(param_1 + 0x290));
  (*(code *)(*param_2)[0xc])(*(undefined4 *)(param_1 + 0x26c),param_2,&PTR_DAT_110bd6978);
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6998,*(undefined4 *)(param_1 + 0x2a0));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd69b8,*(undefined1 *)(param_1 + 0x288));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd69d8,*(undefined1 *)(param_1 + 0x289));
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6b38,*(undefined1 *)(param_1 + 0x730));
  (*(code *)(*param_2)[8])
            (param_2,&PTR_DAT_110bd6b58,*(undefined1 *)(*(long *)(param_1 + 0x2d0) + 0x18));
  (*(code *)(*param_2)[8])
            (param_2,&PTR_DAT_110bd6b78,*(undefined1 *)(*(long *)(param_1 + 0x2d0) + 0x19));
  pppppplVar11 = (long ******)(ulong)*(byte *)(*(long *)(param_1 + 0x2d0) + 0x1a);
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bd6b98);
  (*(code *)(*param_2)[0xc])
            (*(undefined4 *)(*(long *)(param_1 + 0x2d0) + 0x1c),param_2,&PTR_DAT_110bd6bb8);
  (*(code *)(*param_2)[0xc])
            (*(undefined4 *)(*(long *)(param_1 + 0x2d0) + 0x20),param_2,&PTR_DAT_110bd6bd8);
  (*(code *)(*param_2)[0xc])
            (*(undefined4 *)(*(long *)(param_1 + 0x2d0) + 0x24),param_2,&PTR_DAT_110bd6bf8);
  (*(code *)(*param_2)[0xc])
            (*(undefined4 *)(*(long *)(param_1 + 0x2d0) + 0x28),param_2,&PTR_DAT_110bd6c18);
  (*(code *)(*param_2)[0xc])
            (*(undefined4 *)(*(long *)(param_1 + 0x2d0) + 0x2c),param_2,&PTR_DAT_110bd6c38);
  ppuVar9 = &PTR_DAT_110bd6c58;
  (*(code *)(*param_2)[0xc])
            (*(undefined4 *)(*(long *)(param_1 + 0x2d0) + 0x30),param_2,&PTR_DAT_110bd6c58);
  ppppplVar14 = *(long ******)(param_1 + 0x2c0);
  if (ppppplVar14 != (long *****)0x0) {
    plStack_48 = *(long **)(param_1 + 0x2c8);
    ppplStack_40 = (long ***)&UNK_10f6588ea;
    pppplStack_38 = (long ****)0x18;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuVar9 = &PTR_DAT_110bd6c98;
    pppplStack_50 = (long ****)ppppplVar14;
    (*(code *)(*param_2)[0x21])(param_2,&PTR_DAT_110bd6c98,&pppplStack_50,&ppplStack_40);
    plVar1 = plStack_48;
    pppppplVar11 = pppppplVar13;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar17 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        pppppplVar11 = pppppplVar13;
      }
    }
  }
  ppplStack_40 = (long ***)&UNK_10f657f64;
  pppplStack_38 = (long ****)0x3f;
  if (*(long *)(param_1 + 0x230) != *(long *)(param_1 + 0x238)) {
    ppplStack_40 = (long ***)&UNK_10f657f35;
    pppplStack_38 = (long ****)0x2e;
    if (*(long *)(param_1 + 0x2a8) != 0) {
      (*(code *)(*param_2)[3])(param_2,&PTR_DAT_110bd69f8);
      puVar23 = *(undefined8 **)(param_1 + 0x238);
      for (puVar22 = *(undefined8 **)(param_1 + 0x230); puVar22 != puVar23; puVar22 = puVar22 + 2) {
        (*(code *)(*param_2)[0x25])(param_2,*puVar22,0);
      }
      (*(code *)(*param_2)[4])(param_2);
      (*(code *)(*param_2)[0x23])(param_2,&PTR_DAT_110bd6af8,*(undefined8 *)(param_1 + 0x2a8));
      pppplStack_38 = *(long *****)(param_1 + 600);
      ppplStack_40 = *(long ****)(param_1 + 0x250);
      if (*(long *)(param_1 + 600) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 600) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (*(code *)(*param_2)[0x21])(param_2,&PTR_DAT_110bb3700,&ppplStack_40,&stack0xffffffffffffffd0)
      ;
      ppppplVar14 = (long *****)pppplStack_38;
      if ((long *****)pppplStack_38 != (long *****)0x0) {
        ppppplVar18 = (long *****)(pppplStack_38 + 1);
        do {
          pppplVar16 = *ppppplVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
          if (bVar6) {
            *ppppplVar18 = (long ****)((long)pppplVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar16 == (long ****)0x0) {
          (*(code *)(*pppplStack_38)[2])(pppplStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar14);
          param_2 = ppppplVar14;
        }
      }
      return param_2;
    }
  }
  ppppplVar14 = (long *****)&ppplStack_40;
  FUN_10a0edfc4();
  func_0x00010a052384(&pppplStack_50);
  __Unwind_Resume();
  pcStack_58 = FUN_10a42e5b4;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if (pppppplVar11 == (long ******)0x0) {
    ppppplVar18 = ppppplVar14;
    ppppplVar12 = (long *****)ppuVar9;
    func_0x00010a0fda30();
  }
  else {
    unaff_x23 = &ppppplStack_100;
    ppppplStack_f8 = (long *****)ppppplVar14[9];
    ppppplStack_100 = (long *****)ppppplVar14[8];
    pppppplVar13 = pppppplVar11 + 0x11;
    func_0x00010a35bf90(pppppplVar13,&ppppplStack_100);
    pppppplVar24 = (long ******)((ulong)unaff_x23 | 8);
    pppppplVar20 = unaff_x23;
    if (pppppplVar13 != (long ******)0x0) {
      pppppplVar24 = pppppplVar13 + 5;
      pppppplVar20 = pppppplVar13 + 4;
    }
    ppppplVar12 = *pppppplVar24;
    ppppplVar18 = *pppppplVar20;
  }
  FUN_10a0d67c8(&pppplStack_150,ppppplVar14[0x2e],ppppplVar18,ppppplVar12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppplStack_150 + 0x2a,ppppplVar14 + 0x2a);
  uVar3 = (*(ushort *)(ppppplVar14 + 0x30) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(pppplStack_150 + 0x30) & 0xfffc;
  *(ushort *)(pppplStack_150 + 0x30) = uVar4 | *(ushort *)(pppplStack_150 + 0x30) & 1 | uVar3;
  *(ushort *)(pppplStack_150 + 0x30) = uVar4 | uVar3 | *(ushort *)(ppppplVar14 + 0x30) & 1;
  ppppplStack_100 = (long *****)pppplStack_150;
  ppppplStack_f8 = ppppplStack_148;
  if ((long ******)ppppplStack_148 != (long ******)0x0) {
    pppppplVar13 = (long ******)(ppppplStack_148 + 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
      if (bVar6) {
        *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(ppuVar9,&ppppplStack_100);
  ppppplVar18 = ppppplStack_f8;
  if ((long ******)ppppplStack_f8 != (long ******)0x0) {
    pppppplVar13 = (long ******)(ppppplStack_f8 + 1);
    do {
      ppppplVar12 = *pppppplVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
      if (bVar6) {
        *pppppplVar13 = (long *****)((long)ppppplVar12 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppplVar12 == (long *****)0x0) {
      (*(code *)(*ppppplStack_f8)[2])(ppppplStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
    }
  }
  *(undefined4 *)(pppplStack_150 + 0x4e) = *(undefined4 *)(ppppplVar14 + 0x4e);
  pppplVar16 = ppppplVar14[0x4c];
  pppplStack_150[0x4d] = (long ***)ppppplVar14[0x4d];
  pppplStack_150[0x4c] = (long ***)pppplVar16;
  *(undefined2 *)(pppplStack_150 + 0x51) = *(undefined2 *)(ppppplVar14 + 0x51);
  *(undefined4 *)(pppplStack_150 + 0x54) = *(undefined4 *)(ppppplVar14 + 0x54);
  pppplVar16 = ppppplVar14[0x52];
  pppplStack_150[0x53] = (long ***)ppppplVar14[0x53];
  pppplStack_150[0x52] = (long ***)pppplVar16;
  pppplStack_150[0x3e] = (long ***)ppppplVar14[0x3e];
  *(undefined1 *)(pppplStack_150 + 0xe6) = *(undefined1 *)(ppppplVar14 + 0xe6);
  pppppplVar13 = (long ******)ppppplVar14[0x5b];
  FUN_10a42cdd4(pppplStack_150 + 0x5a,ppppplVar14[0x5a]);
  if (ppppplVar14[0x58] != (long ****)0x0) {
    pppppplVar13 = pppppplVar11;
    FUN_10a02e800(ppppplVar14[0x58],pppplStack_150 + 0x58);
  }
  pppplVar16 = ppppplVar14[0x4a];
  pppplStack_140 = (long ****)0x10a4506b4;
  ppuStack_138 = &PTR_FUN_110bd9d28;
  pppplStack_130 = pppplStack_150 + 0x4a;
  if (pppplVar16 == (long ****)0x0) {
    ppppplStack_100 = (long *****)0x0;
    FUN_10a2e9e64(&pppplStack_140,&ppppplStack_100);
    pppppplVar24 = (long ******)0x0;
  }
  else if (pppppplVar11 == (long ******)0x0) {
    FUN_10a450620(&ppppplStack_100,pppplVar16);
    FUN_10a450594(&pppplStack_140,&ppppplStack_100);
    pppppplVar24 = (long ******)ppppplStack_f8;
    if ((long ******)ppppplStack_f8 != (long ******)0x0) {
      pppppplVar24 = (long ******)(ppppplStack_f8 + 1);
      do {
        ppppplVar18 = *pppppplVar24;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar24,0x10);
        if (bVar6) {
          *pppppplVar24 = (long *****)((long)ppppplVar18 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10a42e870:
      pppppplVar24 = (long ******)ppppplStack_f8;
      if (ppppplVar18 == (long *****)0x0) {
        (*(code *)(*ppppplStack_f8)[2])(ppppplStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar24);
      }
    }
  }
  else {
    unaff_x24 = (undefined **)pppplVar16[8];
    unaff_x23 = (long ******)pppplVar16[9];
    if (*(char *)(pppppplVar11 + 0x17) == '\x01') {
      ppppplStack_100 = (long *****)0x10a4506b4;
      ppppplStack_f8 = (long *****)&PTR_FUN_110bd9d28;
      pppppplVar13 = unaff_x23;
      pppplStack_f0 = pppplStack_150 + 0x4a;
      FUN_10a069d9c(pppppplVar11,unaff_x24,unaff_x23,&ppppplStack_100);
    }
    else {
      pppppplVar24 = pppppplVar11 + 0x11;
      ppppplStack_100 = (long *****)unaff_x24;
      ppppplStack_f8 = (long *****)unaff_x23;
      func_0x00010a35bf90(pppppplVar24,&ppppplStack_100);
      pppppplVar20 = &ppppplStack_f8;
      pppppplVar7 = &ppppplStack_100;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplVar20 = pppppplVar24 + 5;
        pppppplVar7 = pppppplVar24 + 4;
      }
      unaff_x25 = (undefined **)*pppppplVar20;
      unaff_x26 = *pppppplVar7;
      if (((long *****)unaff_x24 == unaff_x26) && (unaff_x23 == (long ******)unaff_x25)) {
        FUN_10a450620(&ppppplStack_100,pppplVar16);
        FUN_10a450594(&pppplStack_140,&ppppplStack_100);
        pppppplVar24 = (long ******)ppppplStack_f8;
        if ((long ******)ppppplStack_f8 != (long ******)0x0) {
          pppppplVar24 = (long ******)(ppppplStack_f8 + 1);
          do {
            ppppplVar18 = *pppppplVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar24,0x10);
            if (bVar6) {
              *pppppplVar24 = (long *****)((long)ppppplVar18 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a42e870;
        }
        goto LAB_10a42e8d0;
      }
      ppppplStack_100 = (long *****)pppplStack_140;
      (*(code *)ppuStack_138[3])(&ppppplStack_f8,&ppuStack_138);
      pppppplVar13 = (long ******)unaff_x25;
      FUN_10a069d9c(pppppplVar11,unaff_x26,unaff_x25,&ppppplStack_100);
    }
    (*(code *)*ppppplStack_f8)(&ppppplStack_f8);
    pppppplVar24 = &ppppplStack_100;
  }
LAB_10a42e8d0:
  (*(code *)*ppuStack_138)(&ppuStack_138);
  if ((pppplStack_150[0x46] == pppplStack_150[0x47]) ||
     ((long ***)*pppplStack_150[0x46] == (long ***)0x0)) {
LAB_10a42ecc8:
    ppppplStack_f8 = (long *****)0x3c;
    ppppplStack_100 = (long *****)&UNK_10f657fa4;
    FUN_10a0edfc4(&ppppplStack_100);
LAB_10a42ecd0:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a42ecd4);
    (*pcVar8)();
  }
  ppppplStack_100 = (long *****)&UNK_10f657fa4;
  ppppplStack_f8 = (long *****)0x3c;
  if ((long ****)pppplStack_150[0x55] == (long ****)0x0) goto LAB_10a42ecc8;
  pppplVar16 = (long ****)((long)ppppplVar14[0x47] - (long)ppppplVar14[0x46] >> 4);
  ppppplVar18 = (long *****)(pppplStack_150 + 0x46);
  FUN_10a42e0e0();
  if (ppppplVar14[0x47] != ppppplVar14[0x46]) {
    unaff_x23 = (long ******)0x0;
    unaff_x24 = &PTR_DAT_110bd9c58;
    unaff_x25 = &PTR_DAT_110bd6cc8;
    uStack_158 = 0x3f80000000000000;
    uStack_160 = 0;
    do {
      pppplVar16 = pppplStack_150;
      if (unaff_x23 != (long ******)0x0) {
        pppppplVar13 = (long ******)0x90;
        __Znwm();
        pppppplVar13[1] = (long *****)0x0;
        pppppplVar13[2] = (long *****)0x0;
        *pppppplVar13 = (long *****)&PTR_DAT_110bd9c58;
        *(undefined1 *)(pppppplVar13 + 4) = 0;
        pppppplVar13[7] = (long *****)0x0;
        pppppplVar13[6] = (long *****)0x0;
        pppppplVar13[9] = (long *****)0x0;
        pppppplVar13[8] = (long *****)0x0;
        pppppplVar13[0xb] = (long *****)0x0;
        pppppplVar13[10] = (long *****)0x0;
        pppppplVar13[0xd] = (long *****)0x0;
        pppppplVar13[0xc] = (long *****)0x0;
        pppppplVar13[0xe] = (long *****)0x0;
        ppppplStack_100 = (long *****)(pppppplVar13 + 3);
        *ppppplStack_100 = (long ****)&PTR_DAT_110bd6cc8;
        pppppplVar13[5] = (long *****)&PTR_DAT_110bd6d28;
        *(undefined1 *)(pppppplVar13 + 0xf) = 0;
        *(undefined8 *)((long)pppppplVar13 + 0x84) = uStack_158;
        *(undefined8 *)((long)pppppplVar13 + 0x7c) = uStack_160;
        *(undefined1 *)((long)pppppplVar13 + 0x8c) = 0;
        ppppplStack_f8 = (long *****)pppppplVar13;
        func_0x00010a42a91c(pppplVar16 + 0x46,&ppppplStack_100);
        ppppplVar18 = ppppplStack_f8;
        if ((long ******)ppppplStack_f8 != (long ******)0x0) {
          pppppplVar13 = (long ******)(ppppplStack_f8 + 1);
          do {
            ppppplVar12 = *pppppplVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
            if (bVar6) {
              *pppppplVar13 = (long *****)((long)ppppplVar12 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppplVar12 == (long *****)0x0) {
            (*(code *)(*ppppplStack_f8)[2])(ppppplStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
          }
        }
      }
      if (((long ******)((long)pppplStack_150[0x47] - (long)pppplStack_150[0x46] >> 4) <= unaff_x23)
         || ((long ******)((long)ppppplVar14[0x47] - (long)ppppplVar14[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      pppppplVar24 = (long ******)((long)unaff_x23 * 0x10);
      ppplVar15 = (long ***)pppplStack_150[0x46][(long)unaff_x23 * 2];
      ppplVar19 = ppppplVar14[0x46][(long)unaff_x23 * 2];
      *(undefined1 *)(ppplVar15 + 0xc) = *(undefined1 *)(ppplVar19 + 0xc);
      uVar26 = *(undefined8 *)((long)ppplVar19 + 100);
      *(undefined8 *)((long)ppplVar15 + 0x6c) = *(undefined8 *)((long)ppplVar19 + 0x6c);
      *(undefined8 *)((long)ppplVar15 + 100) = uVar26;
      if (((long ******)((long)pppplStack_150[0x47] - (long)pppplStack_150[0x46] >> 4) <= unaff_x23)
         || ((long ******)((long)ppppplVar14[0x47] - (long)ppppplVar14[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      ppplVar15 = (long ***)pppplStack_150[0x46][(long)unaff_x23 * 2];
      ppplVar19 = ppppplVar14[0x46][(long)unaff_x23 * 2];
      *(undefined1 *)((long)ppplVar15 + 0x74) = *(undefined1 *)((long)ppplVar19 + 0x74);
      FUN_10a42ed70(ppplVar19[5],ppplVar15 + 5,pppppplVar11);
      if (((long ******)((long)ppppplVar14[0x47] - (long)ppppplVar14[0x46] >> 4) <= unaff_x23) ||
         ((long ******)((long)pppplStack_150[0x47] - (long)pppplStack_150[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      FUN_10a42ed70(ppppplVar14[0x46][(long)unaff_x23 * 2][7],
                    pppplStack_150[0x46][(long)unaff_x23 * 2] + 7,pppppplVar11);
      if (((long ******)((long)ppppplVar14[0x47] - (long)ppppplVar14[0x46] >> 4) <= unaff_x23) ||
         ((long ******)((long)pppplStack_150[0x47] - (long)pppplStack_150[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      ppppplVar18 = (long *****)ppppplVar14[0x46][(long)unaff_x23 * 2][9];
      pppplVar16 = (long ****)(pppplStack_150[0x46][(long)unaff_x23 * 2] + 9);
      pppppplVar13 = pppppplVar11;
      FUN_10a42ed70();
      if ((long ******)((long)pppplStack_150[0x47] - (long)pppplStack_150[0x46] >> 4) <= unaff_x23)
      goto LAB_10a42ecd0;
      pppppplVar20 = (long ******)((long)ppppplVar14[0x47] - (long)ppppplVar14[0x46] >> 4);
      if (pppppplVar20 <= unaff_x23) goto LAB_10a42ecd0;
      *(undefined4 *)(pppplStack_150[0x46][(long)unaff_x23 * 2] + 0xb) =
           *(undefined4 *)(ppppplVar14[0x46][(long)unaff_x23 * 2] + 0xb);
      unaff_x23 = (long ******)((long)unaff_x23 + 1);
      unaff_x26 = (long *****)pppplStack_150;
    } while (unaff_x23 < pppppplVar20);
  }
  if (ppppplVar14[0x55] != (long ****)0x0) {
    pppppplVar13 = (long ******)0x88;
    __Znwm();
    pppppplVar13[1] = (long *****)0x0;
    pppppplVar13[2] = (long *****)0x0;
    *pppppplVar13 = (long *****)&PTR_FUN_110bd9bb8;
    *(undefined1 *)(pppppplVar13 + 4) = 0;
    pppppplVar13[7] = (long *****)0x0;
    pppppplVar13[6] = (long *****)0x0;
    pppppplVar13[9] = (long *****)0x0;
    pppppplVar13[8] = (long *****)0x0;
    pppppplVar13[0xb] = (long *****)0x0;
    pppppplVar13[10] = (long *****)0x0;
    pppppplVar13[0xd] = (long *****)0x0;
    pppppplVar13[0xc] = (long *****)0x0;
    pppppplVar13[0xe] = (long *****)0x0;
    ppppplStack_100 = (long *****)(pppppplVar13 + 3);
    *ppppplStack_100 = (long ****)&PTR_DAT_110bd6d80;
    pppppplVar13[5] = (long *****)&PTR_DAT_110bd6de0;
    *(undefined2 *)(pppppplVar13 + 0xf) = 0;
    *(undefined8 *)((long)pppppplVar13 + 0x7c) = 0x3f800000;
    ppppplStack_f8 = (long *****)pppppplVar13;
    FUN_10a42efb4(pppplStack_150 + 0x55,&ppppplStack_100);
    pppppplVar24 = (long ******)ppppplStack_f8;
    if ((long ******)ppppplStack_f8 != (long ******)0x0) {
      pppppplVar13 = (long ******)(ppppplStack_f8 + 1);
      do {
        ppppplVar18 = *pppppplVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
        if (bVar6) {
          *pppppplVar13 = (long *****)((long)ppppplVar18 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppplVar18 == (long *****)0x0) {
        (*(code *)(*ppppplStack_f8)[2])(ppppplStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar24);
      }
    }
    pppplVar16 = (long ****)pppplStack_150[0x55];
    pppplVar21 = ppppplVar14[0x55];
    *(undefined2 *)(pppplVar16 + 0xc) = *(undefined2 *)(pppplVar21 + 0xc);
    *(undefined4 *)((long)pppplVar16 + 100) = *(undefined4 *)((long)pppplVar21 + 100);
    *(undefined4 *)(pppplVar16 + 0xd) = *(undefined4 *)(pppplVar21 + 0xd);
    FUN_10a42ed70(pppplVar21[5],pppplVar16 + 5,pppppplVar11);
    FUN_10a42ed70(ppppplVar14[0x55][7],pppplStack_150[0x55] + 7,pppppplVar11);
    ppppplVar18 = (long *****)ppppplVar14[0x55][9];
    pppplVar16 = (long ****)(pppplStack_150[0x55] + 9);
    pppppplVar13 = pppppplVar11;
    FUN_10a42ed70();
    *(undefined4 *)(pppplStack_150[0x55] + 0xb) = *(undefined4 *)(ppppplVar14[0x55] + 0xb);
  }
  *extraout_x8 = pppplStack_150;
  extraout_x8[1] = ppppplStack_148;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppplVar18;
  }
  ___stack_chk_fail();
  (*(code *)*ppppplStack_f8)(pppppplVar24 + 1);
  (*(code *)*ppuStack_138)(&ppuStack_138);
  FUN_10a0d6a2c(&pppplStack_150);
  ppppplVar12 = ppppplVar18;
  __Unwind_Resume();
  pppplStack_1b0 = (long ****)unaff_x26;
  ppppplStack_1a8 = (long *****)unaff_x25;
  pppplStack_1a0 = (long ****)unaff_x24;
  ppppplStack_198 = (long *****)unaff_x23;
  ppppplStack_190 = (long *****)pppppplVar24;
  ppppplStack_188 = (long *****)pppppplVar11;
  pppplStack_180 = (long ****)ppppplVar14;
  pppplStack_178 = (long ****)ppppplVar18;
  ppuStack_170 = &puStack_60;
  pcStack_168 = FUN_10a42ed70;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcStack_238 = (code *****)FUN_10a4507a0;
  ppplStack_230 = (long ***)&PTR_FUN_110bd9d48;
  ppplStack_228 = (long ***)pppplVar16;
  if (ppppplVar12 == (long *****)0x0) {
    pppppcStack_1f8 = (code *****)0x0;
    ppppppcVar25 = &pppppcStack_1f8;
    FUN_10a2e9e64(&pppppcStack_238);
    goto LAB_10a42ef1c;
  }
  if (pppppplVar13 == (long ******)0x0) {
    FUN_10a2e9f70(&pppppcStack_1f8,ppppplVar12);
    ppppppcVar25 = &pppppcStack_1f8;
    FUN_10a2e9ee4(&pppppcStack_238);
    if ((long *****)pppplStack_1f0 == (long *****)0x0) goto LAB_10a42ef1c;
    ppppplVar14 = (long *****)(pppplStack_1f0 + 1);
    do {
      pppplVar16 = *ppppplVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
      if (bVar6) {
        *ppppplVar14 = (long ****)((long)pppplVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10a42ef00:
    pppplVar21 = pppplStack_1f0;
    if (pppplVar16 == (long ****)0x0) {
      (*(code *)(*pppplStack_1f0)[2])(pppplStack_1f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar21);
    }
  }
  else {
    ppppppcVar10 = (code ******)ppppplVar12[8];
    ppppplVar14 = (long *****)ppppplVar12[9];
    if (*(char *)(pppppplVar13 + 0x17) == '\x01') {
      pppppcStack_1f8 = (code *****)FUN_10a4507a0;
      pppplStack_1f0 = (long ****)&PTR_FUN_110bd9d48;
      ppplStack_1e8 = (long ***)pppplVar16;
      FUN_10a069d9c(pppppplVar13,ppppppcVar10,ppppplVar14,&pppppcStack_1f8);
      ppppppcVar25 = ppppppcVar10;
    }
    else {
      pppppplVar11 = pppppplVar13 + 0x11;
      pppppcStack_1f8 = (code *****)ppppppcVar10;
      pppplStack_1f0 = (long ****)ppppplVar14;
      func_0x00010a35bf90(pppppplVar11,&pppppcStack_1f8);
      pppppplVar24 = (long ******)&pppplStack_1f0;
      ppppppcVar25 = &pppppcStack_1f8;
      if (pppppplVar11 != (long ******)0x0) {
        pppppplVar24 = pppppplVar11 + 5;
        ppppppcVar25 = (code ******)(pppppplVar11 + 4);
      }
      ppppplVar18 = *pppppplVar24;
      ppppppcVar25 = (code ******)*ppppppcVar25;
      if (ppppppcVar10 == ppppppcVar25 && ppppplVar14 == ppppplVar18) {
        FUN_10a2e9f70(&pppppcStack_1f8,ppppplVar12);
        ppppppcVar25 = &pppppcStack_1f8;
        FUN_10a2e9ee4(&pppppcStack_238);
        if ((long *****)pppplStack_1f0 == (long *****)0x0) goto LAB_10a42ef1c;
        ppppplVar14 = (long *****)(pppplStack_1f0 + 1);
        do {
          pppplVar16 = *ppppplVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
          if (bVar6) {
            *ppppplVar14 = (long ****)((long)pppplVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a42ef00;
      }
      pppppcStack_1f8 = pppppcStack_238;
      (*(code *)ppplStack_230[3])(&pppplStack_1f0,&ppplStack_230);
      FUN_10a069d9c(pppppplVar13,ppppppcVar25,ppppplVar18,&pppppcStack_1f8);
    }
    (*(code *)*pppplStack_1f0)(&pppplStack_1f0);
  }
LAB_10a42ef1c:
  ppppplVar14 = (long *****)&ppplStack_230;
  (*(code *)*ppplStack_230)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    func_0x00010a05248c(&pppppcStack_1f8);
    (*(code *)*ppplStack_230)(&ppplStack_230);
    __Unwind_Resume();
    pppppcVar28 = ppppppcVar25[1];
    pppppcVar27 = *ppppppcVar25;
    *ppppppcVar25 = (code *****)0x0;
    ppppppcVar25[1] = (code *****)0x0;
    pppplVar16 = ppppplVar14[1];
    ppppplVar14[1] = (long ****)pppppcVar28;
    *ppppplVar14 = (long ****)pppppcVar27;
    if (pppplVar16 != (long ****)0x0) {
      pppplVar21 = pppplVar16 + 1;
      do {
        ppplVar15 = *pppplVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar21,0x10);
        if (bVar6) {
          *pppplVar21 = (long ***)((long)ppplVar15 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppplVar15 == (long ***)0x0) {
        (*(code *)(*pppplVar16)[2])(pppplVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar16);
      }
    }
    return ppppplVar14;
  }
  return ppppplVar14;
}



/* Entry: 10a42e5b4; end: 10a42ed6f;  */

long ***** FUN_10a42e5b4(undefined8 *param_1,long *****param_2,long *****param_3,long ******param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long ******pppppplVar5;
  code *pcVar6;
  code ******ppppppcVar7;
  long *****ppppplVar8;
  long ******pppppplVar9;
  long ***ppplVar10;
  long *****ppppplVar11;
  long ***ppplVar12;
  long ******pppppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ******pppppplVar16;
  long ******unaff_x23;
  long *****ppppplVar17;
  undefined **unaff_x24;
  code ******ppppppcVar18;
  undefined **unaff_x25;
  long *****unaff_x26;
  undefined8 uVar19;
  code *****pppppcVar20;
  code *****pppppcVar21;
  code *****pppppcStack_1e8;
  long ***ppplStack_1e0;
  long ***ppplStack_1d8;
  code *****pppppcStack_1a8;
  long ****pppplStack_1a0;
  long ***ppplStack_198;
  long lStack_168;
  long ****pppplStack_160;
  long *****ppppplStack_158;
  long ****pppplStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long ****pppplStack_100;
  long *****ppppplStack_f8;
  long ****pppplStack_f0;
  undefined **ppuStack_e8;
  long ****pppplStack_e0;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == (long ******)0x0) {
    ppppplVar11 = param_2;
    ppppplVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    unaff_x23 = &ppppplStack_b0;
    ppppplStack_a8 = (long *****)param_2[9];
    ppppplStack_b0 = (long *****)param_2[8];
    pppppplVar9 = param_4 + 0x11;
    func_0x00010a35bf90(pppppplVar9,&ppppplStack_b0);
    pppppplVar16 = (long ******)((ulong)unaff_x23 | 8);
    pppppplVar13 = unaff_x23;
    if (pppppplVar9 != (long ******)0x0) {
      pppppplVar16 = pppppplVar9 + 5;
      pppppplVar13 = pppppplVar9 + 4;
    }
    ppppplVar8 = *pppppplVar16;
    ppppplVar11 = *pppppplVar13;
  }
  FUN_10a0d67c8(&pppplStack_100,param_2[0x2e],ppppplVar11,ppppplVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppplStack_100 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(pppplStack_100 + 0x30) & 0xfffc;
  *(ushort *)(pppplStack_100 + 0x30) = uVar2 | *(ushort *)(pppplStack_100 + 0x30) & 1 | uVar1;
  *(ushort *)(pppplStack_100 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  ppppplStack_b0 = (long *****)pppplStack_100;
  ppppplStack_a8 = ppppplStack_f8;
  if ((long ******)ppppplStack_f8 != (long ******)0x0) {
    pppppplVar9 = (long ******)(ppppplStack_f8 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
      if (bVar4) {
        *pppppplVar9 = (long *****)((long)*pppppplVar9 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3c7ce8(param_3,&ppppplStack_b0);
  ppppplVar11 = ppppplStack_a8;
  if ((long ******)ppppplStack_a8 != (long ******)0x0) {
    pppppplVar9 = (long ******)(ppppplStack_a8 + 1);
    do {
      ppppplVar8 = *pppppplVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
      if (bVar4) {
        *pppppplVar9 = (long *****)((long)ppppplVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppplVar8 == (long *****)0x0) {
      (*(code *)(*ppppplStack_a8)[2])(ppppplStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
    }
  }
  *(undefined4 *)(pppplStack_100 + 0x4e) = *(undefined4 *)(param_2 + 0x4e);
  pppplVar15 = param_2[0x4c];
  pppplStack_100[0x4d] = (long ***)param_2[0x4d];
  pppplStack_100[0x4c] = (long ***)pppplVar15;
  *(undefined2 *)(pppplStack_100 + 0x51) = *(undefined2 *)(param_2 + 0x51);
  *(undefined4 *)(pppplStack_100 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  pppplVar15 = param_2[0x52];
  pppplStack_100[0x53] = (long ***)param_2[0x53];
  pppplStack_100[0x52] = (long ***)pppplVar15;
  pppplStack_100[0x3e] = (long ***)param_2[0x3e];
  *(undefined1 *)(pppplStack_100 + 0xe6) = *(undefined1 *)(param_2 + 0xe6);
  pppppplVar9 = (long ******)param_2[0x5b];
  FUN_10a42cdd4(pppplStack_100 + 0x5a,param_2[0x5a]);
  if (param_2[0x58] != (long ****)0x0) {
    pppppplVar9 = param_4;
    FUN_10a02e800(param_2[0x58],pppplStack_100 + 0x58);
  }
  pppplVar15 = param_2[0x4a];
  pppplStack_e0 = pppplStack_100 + 0x4a;
  pppplStack_f0 = (long ****)0x10a4506b4;
  ppuStack_e8 = &PTR_FUN_110bd9d28;
  if (pppplVar15 == (long ****)0x0) {
    ppppplStack_b0 = (long *****)0x0;
    FUN_10a2e9e64(&pppplStack_f0,&ppppplStack_b0);
    pppppplVar16 = (long ******)0x0;
  }
  else if (param_4 == (long ******)0x0) {
    FUN_10a450620(&ppppplStack_b0,pppplVar15);
    FUN_10a450594(&pppplStack_f0,&ppppplStack_b0);
    pppppplVar16 = (long ******)ppppplStack_a8;
    if ((long ******)ppppplStack_a8 != (long ******)0x0) {
      pppppplVar16 = (long ******)(ppppplStack_a8 + 1);
      do {
        ppppplVar11 = *pppppplVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
        if (bVar4) {
          *pppppplVar16 = (long *****)((long)ppppplVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10a42e870:
      pppppplVar16 = (long ******)ppppplStack_a8;
      if (ppppplVar11 == (long *****)0x0) {
        (*(code *)(*ppppplStack_a8)[2])(ppppplStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
      }
    }
  }
  else {
    unaff_x24 = (undefined **)pppplVar15[8];
    unaff_x23 = (long ******)pppplVar15[9];
    if (*(char *)(param_4 + 0x17) == '\x01') {
      ppppplStack_b0 = (long *****)0x10a4506b4;
      ppppplStack_a8 = (long *****)&PTR_FUN_110bd9d28;
      pppppplVar9 = unaff_x23;
      pppplStack_a0 = pppplStack_e0;
      FUN_10a069d9c(param_4,unaff_x24,unaff_x23,&ppppplStack_b0);
    }
    else {
      pppppplVar16 = param_4 + 0x11;
      ppppplStack_b0 = (long *****)unaff_x24;
      ppppplStack_a8 = (long *****)unaff_x23;
      func_0x00010a35bf90(pppppplVar16,&ppppplStack_b0);
      pppppplVar13 = &ppppplStack_a8;
      pppppplVar5 = &ppppplStack_b0;
      if (pppppplVar16 != (long ******)0x0) {
        pppppplVar13 = pppppplVar16 + 5;
        pppppplVar5 = pppppplVar16 + 4;
      }
      unaff_x25 = (undefined **)*pppppplVar13;
      unaff_x26 = *pppppplVar5;
      if (((long *****)unaff_x24 == unaff_x26) && (unaff_x23 == (long ******)unaff_x25)) {
        FUN_10a450620(&ppppplStack_b0,pppplVar15);
        FUN_10a450594(&pppplStack_f0,&ppppplStack_b0);
        pppppplVar16 = (long ******)ppppplStack_a8;
        if ((long ******)ppppplStack_a8 != (long ******)0x0) {
          pppppplVar16 = (long ******)(ppppplStack_a8 + 1);
          do {
            ppppplVar11 = *pppppplVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
            if (bVar4) {
              *pppppplVar16 = (long *****)((long)ppppplVar11 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a42e870;
        }
        goto LAB_10a42e8d0;
      }
      ppppplStack_b0 = (long *****)pppplStack_f0;
      (*(code *)ppuStack_e8[3])(&ppppplStack_a8,&ppuStack_e8);
      pppppplVar9 = (long ******)unaff_x25;
      FUN_10a069d9c(param_4,unaff_x26,unaff_x25,&ppppplStack_b0);
    }
    (*(code *)*ppppplStack_a8)(&ppppplStack_a8);
    pppppplVar16 = &ppppplStack_b0;
  }
LAB_10a42e8d0:
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  if ((pppplStack_100[0x46] == pppplStack_100[0x47]) ||
     ((long ***)*pppplStack_100[0x46] == (long ***)0x0)) {
LAB_10a42ecc8:
    ppppplStack_a8 = (long *****)0x3c;
    ppppplStack_b0 = (long *****)&UNK_10f657fa4;
    FUN_10a0edfc4(&ppppplStack_b0);
LAB_10a42ecd0:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a42ecd4);
    (*pcVar6)();
  }
  ppppplStack_b0 = (long *****)&UNK_10f657fa4;
  ppppplStack_a8 = (long *****)0x3c;
  if ((long ****)pppplStack_100[0x55] == (long ****)0x0) goto LAB_10a42ecc8;
  pppplVar15 = (long ****)((long)param_2[0x47] - (long)param_2[0x46] >> 4);
  ppppplVar11 = (long *****)(pppplStack_100 + 0x46);
  FUN_10a42e0e0();
  if (param_2[0x47] != param_2[0x46]) {
    unaff_x23 = (long ******)0x0;
    unaff_x24 = &PTR_DAT_110bd9c58;
    unaff_x25 = &PTR_DAT_110bd6cc8;
    uStack_108 = 0x3f80000000000000;
    uStack_110 = 0;
    do {
      pppplVar15 = pppplStack_100;
      if (unaff_x23 != (long ******)0x0) {
        pppppplVar9 = (long ******)0x90;
        __Znwm();
        pppppplVar9[1] = (long *****)0x0;
        pppppplVar9[2] = (long *****)0x0;
        *pppppplVar9 = (long *****)&PTR_DAT_110bd9c58;
        *(undefined1 *)(pppppplVar9 + 4) = 0;
        pppppplVar9[7] = (long *****)0x0;
        pppppplVar9[6] = (long *****)0x0;
        pppppplVar9[9] = (long *****)0x0;
        pppppplVar9[8] = (long *****)0x0;
        pppppplVar9[0xb] = (long *****)0x0;
        pppppplVar9[10] = (long *****)0x0;
        pppppplVar9[0xd] = (long *****)0x0;
        pppppplVar9[0xc] = (long *****)0x0;
        pppppplVar9[0xe] = (long *****)0x0;
        ppppplStack_b0 = (long *****)(pppppplVar9 + 3);
        *ppppplStack_b0 = (long ****)&PTR_DAT_110bd6cc8;
        pppppplVar9[5] = (long *****)&PTR_DAT_110bd6d28;
        *(undefined1 *)(pppppplVar9 + 0xf) = 0;
        *(undefined8 *)((long)pppppplVar9 + 0x84) = uStack_108;
        *(undefined8 *)((long)pppppplVar9 + 0x7c) = uStack_110;
        *(undefined1 *)((long)pppppplVar9 + 0x8c) = 0;
        ppppplStack_a8 = (long *****)pppppplVar9;
        func_0x00010a42a91c(pppplVar15 + 0x46,&ppppplStack_b0);
        ppppplVar11 = ppppplStack_a8;
        if ((long ******)ppppplStack_a8 != (long ******)0x0) {
          pppppplVar9 = (long ******)(ppppplStack_a8 + 1);
          do {
            ppppplVar8 = *pppppplVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
            if (bVar4) {
              *pppppplVar9 = (long *****)((long)ppppplVar8 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppplVar8 == (long *****)0x0) {
            (*(code *)(*ppppplStack_a8)[2])(ppppplStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
          }
        }
      }
      if (((long ******)((long)pppplStack_100[0x47] - (long)pppplStack_100[0x46] >> 4) <= unaff_x23)
         || ((long ******)((long)param_2[0x47] - (long)param_2[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      pppppplVar16 = (long ******)((long)unaff_x23 * 0x10);
      ppplVar10 = (long ***)pppplStack_100[0x46][(long)unaff_x23 * 2];
      ppplVar12 = param_2[0x46][(long)unaff_x23 * 2];
      *(undefined1 *)(ppplVar10 + 0xc) = *(undefined1 *)(ppplVar12 + 0xc);
      uVar19 = *(undefined8 *)((long)ppplVar12 + 100);
      *(undefined8 *)((long)ppplVar10 + 0x6c) = *(undefined8 *)((long)ppplVar12 + 0x6c);
      *(undefined8 *)((long)ppplVar10 + 100) = uVar19;
      if (((long ******)((long)pppplStack_100[0x47] - (long)pppplStack_100[0x46] >> 4) <= unaff_x23)
         || ((long ******)((long)param_2[0x47] - (long)param_2[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      ppplVar10 = (long ***)pppplStack_100[0x46][(long)unaff_x23 * 2];
      ppplVar12 = param_2[0x46][(long)unaff_x23 * 2];
      *(undefined1 *)((long)ppplVar10 + 0x74) = *(undefined1 *)((long)ppplVar12 + 0x74);
      FUN_10a42ed70(ppplVar12[5],ppplVar10 + 5,param_4);
      if (((long ******)((long)param_2[0x47] - (long)param_2[0x46] >> 4) <= unaff_x23) ||
         ((long ******)((long)pppplStack_100[0x47] - (long)pppplStack_100[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      FUN_10a42ed70(param_2[0x46][(long)unaff_x23 * 2][7],
                    pppplStack_100[0x46][(long)unaff_x23 * 2] + 7,param_4);
      if (((long ******)((long)param_2[0x47] - (long)param_2[0x46] >> 4) <= unaff_x23) ||
         ((long ******)((long)pppplStack_100[0x47] - (long)pppplStack_100[0x46] >> 4) <= unaff_x23))
      goto LAB_10a42ecd0;
      ppppplVar11 = (long *****)param_2[0x46][(long)unaff_x23 * 2][9];
      pppplVar15 = (long ****)(pppplStack_100[0x46][(long)unaff_x23 * 2] + 9);
      pppppplVar9 = param_4;
      FUN_10a42ed70();
      if ((long ******)((long)pppplStack_100[0x47] - (long)pppplStack_100[0x46] >> 4) <= unaff_x23)
      goto LAB_10a42ecd0;
      pppppplVar13 = (long ******)((long)param_2[0x47] - (long)param_2[0x46] >> 4);
      if (pppppplVar13 <= unaff_x23) goto LAB_10a42ecd0;
      *(undefined4 *)(pppplStack_100[0x46][(long)unaff_x23 * 2] + 0xb) =
           *(undefined4 *)(param_2[0x46][(long)unaff_x23 * 2] + 0xb);
      unaff_x23 = (long ******)((long)unaff_x23 + 1);
      unaff_x26 = (long *****)pppplStack_100;
    } while (unaff_x23 < pppppplVar13);
  }
  if (param_2[0x55] != (long ****)0x0) {
    pppppplVar9 = (long ******)0x88;
    __Znwm();
    pppppplVar9[1] = (long *****)0x0;
    pppppplVar9[2] = (long *****)0x0;
    *pppppplVar9 = (long *****)&PTR_FUN_110bd9bb8;
    *(undefined1 *)(pppppplVar9 + 4) = 0;
    pppppplVar9[7] = (long *****)0x0;
    pppppplVar9[6] = (long *****)0x0;
    pppppplVar9[9] = (long *****)0x0;
    pppppplVar9[8] = (long *****)0x0;
    pppppplVar9[0xb] = (long *****)0x0;
    pppppplVar9[10] = (long *****)0x0;
    pppppplVar9[0xd] = (long *****)0x0;
    pppppplVar9[0xc] = (long *****)0x0;
    pppppplVar9[0xe] = (long *****)0x0;
    ppppplStack_b0 = (long *****)(pppppplVar9 + 3);
    *ppppplStack_b0 = (long ****)&PTR_DAT_110bd6d80;
    pppppplVar9[5] = (long *****)&PTR_DAT_110bd6de0;
    *(undefined2 *)(pppppplVar9 + 0xf) = 0;
    *(undefined8 *)((long)pppppplVar9 + 0x7c) = 0x3f800000;
    ppppplStack_a8 = (long *****)pppppplVar9;
    FUN_10a42efb4(pppplStack_100 + 0x55,&ppppplStack_b0);
    pppppplVar16 = (long ******)ppppplStack_a8;
    if ((long ******)ppppplStack_a8 != (long ******)0x0) {
      pppppplVar9 = (long ******)(ppppplStack_a8 + 1);
      do {
        ppppplVar11 = *pppppplVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar9,0x10);
        if (bVar4) {
          *pppppplVar9 = (long *****)((long)ppppplVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar11 == (long *****)0x0) {
        (*(code *)(*ppppplStack_a8)[2])(ppppplStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
      }
    }
    pppplVar15 = (long ****)pppplStack_100[0x55];
    pppplVar14 = param_2[0x55];
    *(undefined2 *)(pppplVar15 + 0xc) = *(undefined2 *)(pppplVar14 + 0xc);
    *(undefined4 *)((long)pppplVar15 + 100) = *(undefined4 *)((long)pppplVar14 + 100);
    *(undefined4 *)(pppplVar15 + 0xd) = *(undefined4 *)(pppplVar14 + 0xd);
    FUN_10a42ed70(pppplVar14[5],pppplVar15 + 5,param_4);
    FUN_10a42ed70(param_2[0x55][7],pppplStack_100[0x55] + 7,param_4);
    ppppplVar11 = (long *****)param_2[0x55][9];
    pppplVar15 = (long ****)(pppplStack_100[0x55] + 9);
    pppppplVar9 = param_4;
    FUN_10a42ed70();
    *(undefined4 *)(pppplStack_100[0x55] + 0xb) = *(undefined4 *)(param_2[0x55] + 0xb);
  }
  *param_1 = pppplStack_100;
  param_1[1] = ppppplStack_f8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppplVar11;
  }
  ___stack_chk_fail();
  (*(code *)*ppppplStack_a8)(pppppplVar16 + 1);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  FUN_10a0d6a2c(&pppplStack_100);
  ppppplVar8 = ppppplVar11;
  __Unwind_Resume();
  pcStack_118 = FUN_10a42ed70;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcStack_1e8 = (code *****)FUN_10a4507a0;
  ppplStack_1e0 = (long ***)&PTR_FUN_110bd9d48;
  ppplStack_1d8 = (long ***)pppplVar15;
  pppplStack_160 = (long ****)unaff_x26;
  ppppplStack_158 = (long *****)unaff_x25;
  pppplStack_150 = (long ****)unaff_x24;
  ppppplStack_148 = (long *****)unaff_x23;
  ppppplStack_140 = (long *****)pppppplVar16;
  ppppplStack_138 = (long *****)param_4;
  pppplStack_130 = (long ****)param_2;
  pppplStack_128 = (long ****)ppppplVar11;
  puStack_120 = &stack0xfffffffffffffff0;
  if (ppppplVar8 == (long *****)0x0) {
    pppppcStack_1a8 = (code *****)0x0;
    ppppppcVar18 = &pppppcStack_1a8;
    FUN_10a2e9e64(&pppppcStack_1e8);
    goto LAB_10a42ef1c;
  }
  if (pppppplVar9 == (long ******)0x0) {
    FUN_10a2e9f70(&pppppcStack_1a8,ppppplVar8);
    ppppppcVar18 = &pppppcStack_1a8;
    FUN_10a2e9ee4(&pppppcStack_1e8);
    if ((long *****)pppplStack_1a0 == (long *****)0x0) goto LAB_10a42ef1c;
    ppppplVar11 = (long *****)(pppplStack_1a0 + 1);
    do {
      pppplVar15 = *ppppplVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppplVar11,0x10);
      if (bVar4) {
        *ppppplVar11 = (long ****)((long)pppplVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_10a42ef00:
    pppplVar14 = pppplStack_1a0;
    if (pppplVar15 == (long ****)0x0) {
      (*(code *)(*pppplStack_1a0)[2])(pppplStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
    }
  }
  else {
    ppppppcVar7 = (code ******)ppppplVar8[8];
    ppppplVar11 = (long *****)ppppplVar8[9];
    if (*(char *)(pppppplVar9 + 0x17) == '\x01') {
      pppppcStack_1a8 = (code *****)FUN_10a4507a0;
      pppplStack_1a0 = (long ****)&PTR_FUN_110bd9d48;
      ppplStack_198 = (long ***)pppplVar15;
      FUN_10a069d9c(pppppplVar9,ppppppcVar7,ppppplVar11,&pppppcStack_1a8);
      ppppppcVar18 = ppppppcVar7;
    }
    else {
      pppppplVar16 = pppppplVar9 + 0x11;
      pppppcStack_1a8 = (code *****)ppppppcVar7;
      pppplStack_1a0 = (long ****)ppppplVar11;
      func_0x00010a35bf90(pppppplVar16,&pppppcStack_1a8);
      pppppplVar13 = (long ******)&pppplStack_1a0;
      ppppppcVar18 = &pppppcStack_1a8;
      if (pppppplVar16 != (long ******)0x0) {
        pppppplVar13 = pppppplVar16 + 5;
        ppppppcVar18 = (code ******)(pppppplVar16 + 4);
      }
      ppppplVar17 = *pppppplVar13;
      ppppppcVar18 = (code ******)*ppppppcVar18;
      if (ppppppcVar7 == ppppppcVar18 && ppppplVar11 == ppppplVar17) {
        FUN_10a2e9f70(&pppppcStack_1a8,ppppplVar8);
        ppppppcVar18 = &pppppcStack_1a8;
        FUN_10a2e9ee4(&pppppcStack_1e8);
        if ((long *****)pppplStack_1a0 == (long *****)0x0) goto LAB_10a42ef1c;
        ppppplVar11 = (long *****)(pppplStack_1a0 + 1);
        do {
          pppplVar15 = *ppppplVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar11,0x10);
          if (bVar4) {
            *ppppplVar11 = (long ****)((long)pppplVar15 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10a42ef00;
      }
      pppppcStack_1a8 = pppppcStack_1e8;
      (*(code *)ppplStack_1e0[3])(&pppplStack_1a0,&ppplStack_1e0);
      FUN_10a069d9c(pppppplVar9,ppppppcVar18,ppppplVar17,&pppppcStack_1a8);
    }
    (*(code *)*pppplStack_1a0)(&pppplStack_1a0);
  }
LAB_10a42ef1c:
  ppppplVar11 = (long *****)&ppplStack_1e0;
  (*(code *)*ppplStack_1e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    func_0x00010a05248c(&pppppcStack_1a8);
    (*(code *)*ppplStack_1e0)(&ppplStack_1e0);
    __Unwind_Resume();
    pppppcVar21 = ppppppcVar18[1];
    pppppcVar20 = *ppppppcVar18;
    *ppppppcVar18 = (code *****)0x0;
    ppppppcVar18[1] = (code *****)0x0;
    pppplVar15 = ppppplVar11[1];
    ppppplVar11[1] = (long ****)pppppcVar21;
    *ppppplVar11 = (long ****)pppppcVar20;
    if (pppplVar15 != (long ****)0x0) {
      pppplVar14 = pppplVar15 + 1;
      do {
        ppplVar10 = *pppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
        if (bVar4) {
          *pppplVar14 = (long ***)((long)ppplVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppplVar10 == (long ***)0x0) {
        (*(code *)(*pppplVar15)[2])(pppplVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar15);
      }
    }
    return ppppplVar11;
  }
  return ppppplVar11;
}



/* Entry: 10a42ed70; end: 10a42efb3;  */

undefined *** FUN_10a42ed70(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined ***pppuVar4;
  code *****pppppcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  code *****pppppcVar9;
  code ****ppppcVar10;
  code ****ppppcVar11;
  code ****ppppcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  code ****ppppcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcStack_d8 = (code ****)FUN_10a4507a0;
  ppuStack_d0 = &PTR_FUN_110bd9d48;
  uStack_c8 = param_2;
  if (param_1 == 0) {
    ppppcStack_98 = (code ****)0x0;
    pppppcVar9 = &ppppcStack_98;
    FUN_10a2e9e64(&ppppcStack_d8);
    goto LAB_10a42ef1c;
  }
  if (param_3 == 0) {
    FUN_10a2e9f70(&ppppcStack_98,param_1);
    pppppcVar9 = &ppppcStack_98;
    FUN_10a2e9ee4(&ppppcStack_d8);
    if (ppuStack_90 == (undefined **)0x0) goto LAB_10a42ef1c;
    ppuVar7 = ppuStack_90 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar2) {
        *ppuVar7 = puVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_10a42ef00:
    ppuVar7 = ppuStack_90;
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  else {
    pppppcVar5 = *(code ******)(param_1 + 0x40);
    ppuVar7 = *(undefined ***)(param_1 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      ppppcStack_98 = (code ****)FUN_10a4507a0;
      ppuStack_90 = &PTR_FUN_110bd9d48;
      uStack_88 = param_2;
      FUN_10a069d9c(param_3,pppppcVar5,ppuVar7,&ppppcStack_98);
      pppppcVar9 = pppppcVar5;
    }
    else {
      lVar3 = param_3 + 0x88;
      ppppcStack_98 = (code ****)pppppcVar5;
      ppuStack_90 = ppuVar7;
      func_0x00010a35bf90(lVar3,&ppppcStack_98);
      pppuVar4 = &ppuStack_90;
      pppppcVar9 = &ppppcStack_98;
      if (lVar3 != 0) {
        pppuVar4 = (undefined ***)(lVar3 + 0x28);
        pppppcVar9 = (code *****)(lVar3 + 0x20);
      }
      ppuVar8 = *pppuVar4;
      pppppcVar9 = (code *****)*pppppcVar9;
      if (pppppcVar5 == pppppcVar9 && ppuVar7 == ppuVar8) {
        FUN_10a2e9f70(&ppppcStack_98,param_1);
        pppppcVar9 = &ppppcStack_98;
        FUN_10a2e9ee4(&ppppcStack_d8);
        if (ppuStack_90 == (undefined **)0x0) goto LAB_10a42ef1c;
        ppuVar7 = ppuStack_90 + 1;
        do {
          puVar6 = *ppuVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar2) {
            *ppuVar7 = puVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_10a42ef00;
      }
      ppppcStack_98 = ppppcStack_d8;
      (*(code *)ppuStack_d0[3])(&ppuStack_90,&ppuStack_d0);
      FUN_10a069d9c(param_3,pppppcVar9,ppuVar8,&ppppcStack_98);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
  }
LAB_10a42ef1c:
  pppuVar4 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a05248c(&ppppcStack_98);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    __Unwind_Resume();
    ppppcVar11 = pppppcVar9[1];
    ppppcVar10 = *pppppcVar9;
    *pppppcVar9 = (code ****)0x0;
    pppppcVar9[1] = (code ****)0x0;
    ppuVar7 = pppuVar4[1];
    pppuVar4[1] = (undefined **)ppppcVar11;
    *pppuVar4 = (undefined **)ppppcVar10;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar8 = ppuVar7 + 1;
      do {
        puVar6 = *ppuVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar2) {
          *ppuVar8 = puVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar6 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 10a42efb4; end: 10a42f017;  */

undefined8 * FUN_10a42efb4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a42f018; end: 10a42f073;  */

/* WARNING: Removing unreachable block (ram,0x00010a42f770) */
/* WARNING: Removing unreachable block (ram,0x00010a42f740) */
/* WARNING: Removing unreachable block (ram,0x00010a42f730) */
/* WARNING: Removing unreachable block (ram,0x00010a42f760) */
/* WARNING: Removing unreachable block (ram,0x00010a42f790) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a42f018(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long ***ppplVar16;
  long *plVar17;
  undefined8 *extraout_x8;
  ulong uVar18;
  long lVar19;
  long ******pppppplVar20;
  long *******ppppppplStack_3b0;
  ulong uStack_3a8;
  byte bStack_399;
  long *******ppppppplStack_398;
  ulong uStack_390;
  byte bStack_381;
  long *******ppppppplStack_380;
  ulong uStack_378;
  byte bStack_369;
  long *******appppppplStack_368 [2];
  char cStack_351;
  long *******ppppppplStack_350;
  long ******pppppplStack_348;
  long ******pppppplStack_340;
  long *******appppppplStack_338 [2];
  char cStack_321;
  long *******ppppppplStack_320;
  long ******pppppplStack_318;
  long ******pppppplStack_310;
  long *******appppppplStack_308 [2];
  char cStack_2f1;
  long *******ppppppplStack_2f0;
  long ******pppppplStack_2e8;
  long ******pppppplStack_2e0;
  long *******appppppplStack_2d8 [2];
  char cStack_2c1;
  long *******ppppppplStack_2c0;
  long ******pppppplStack_2b8;
  long ******pppppplStack_2b0;
  long *******ppppppplStack_2a8;
  ulong uStack_2a0;
  byte bStack_291;
  long *******ppppppplStack_290;
  ulong uStack_288;
  byte bStack_279;
  long *******appppppplStack_278 [2];
  char cStack_261;
  long *******ppppppplStack_260;
  long ******pppppplStack_258;
  long ******pppppplStack_250;
  long *******ppppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  long *******ppppppplStack_220;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  long *******ppppppplStack_200;
  long ******pppppplStack_1f8;
  long ******pppppplStack_1f0;
  long *******ppppppplStack_1e0;
  long ******pppppplStack_1d8;
  long ******pppppplStack_1d0;
  long *******ppppppplStack_1c0;
  long ******pppppplStack_1b8;
  long ******pppppplStack_1b0;
  long *******ppppppplStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long ******pppppplStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  long *****ppppplStack_160;
  long *****ppppplStack_158;
  long *****ppppplStack_150;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ******pppppplStack_100;
  long **pplStack_f8;
  long **pplStack_f0;
  long *******ppppppplStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar9 = &puStack_20;
  if ((*(long **)(param_1 + 0x230) != *(long **)(param_1 + 0x238)) &&
     (**(long **)(param_1 + 0x230) != 0)) {
    return (long *******)(param_1 + 0x230);
  }
  uStack_18 = 0x35;
  puStack_20 = &UNK_10f657fe1;
  FUN_10a0edfc4();
  ppuVar10 = &puStack_50;
  plVar17 = (long *)*param_2;
  if ((long *)param_2[1] == plVar17) {
    puStack_50 = &UNK_10f658017;
    uStack_48 = 0x39;
  }
  else {
    puStack_50 = &UNK_10f658017;
    uStack_48 = 0x39;
    if ((ulong)(param_2[1] - (long)plVar17) < 0x41) {
      puStack_50 = &UNK_10f657fe1;
      uStack_48 = 0x35;
      if (*plVar17 != 0) {
        ppppppplVar13 = (long *******)((long)ppuVar9 + 0x230);
        FUN_10a438e74(ppppppplVar13);
        lVar19 = *param_2;
        *(long *)((long)ppuVar9 + 0x238) = param_2[1];
        *(long *)((long)ppuVar9 + 0x230) = lVar19;
        *(long *)((long)ppuVar9 + 0x240) = param_2[2];
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        if (*(char *)((long)ppuVar9 + 0x248) == '\x01') {
          plVar17 = *(long **)((long)ppuVar9 + 0x230);
          uVar18 = *(long *)((long)ppuVar9 + 0x238) - (long)plVar17 >> 4;
          if (1 < uVar18) {
            uVar3 = *(undefined1 *)(*plVar17 + 0x60);
            lVar19 = uVar18 - 1;
            do {
              plVar17 = plVar17 + 2;
              *(undefined1 *)(*plVar17 + 0x60) = uVar3;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
        }
        return ppppppplVar13;
      }
    }
  }
  FUN_10a0edfc4();
  puVar11 = &stack0xffffffffffffff90;
  if (*param_2 != 0) {
    lVar19 = param_2[1];
    pppppplVar20 = (long ******)*param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar17 = *(long **)((long)ppuVar10 + 0x2b0);
    *(long *)((long)ppuVar10 + 0x2b0) = lVar19;
    *(long *******)((long)ppuVar10 + 0x2a8) = pppppplVar20;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        lVar19 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    return (long *******)((long)ppuVar10 + 0x2a8);
  }
  FUN_10a0edfc4();
  FUN_10a3c829c(&ppppppplStack_e8);
  uVar18 = uStack_e0;
  if (-1 < (char)bStack_d1) {
    uVar18 = (ulong)bStack_d1;
  }
  FUN_10a003c90(appppppplStack_278,uVar18 + 7,&ppppppplStack_290);
  ppppppplVar13 = appppppplStack_278[0];
  if (-1 < cStack_261) {
    ppppppplVar13 = (long *******)appppppplStack_278;
  }
  if (uVar18 != 0) {
    ppppppplVar12 = ppppppplStack_e8;
    if (-1 < (char)bStack_d1) {
      ppppppplVar12 = (long *******)&ppppppplStack_e8;
    }
    _memmove(ppppppplVar13,ppppppplVar12,uVar18);
  }
  puVar2 = (undefined4 *)((long)ppppppplVar13 + uVar18);
  *(undefined4 *)((long)puVar2 + 3) = 0x203a766f;
  *puVar2 = 0x6f66202c;
  *(undefined1 *)((long)puVar2 + 7) = 0;
  FUN_10a42b7bc(puVar11);
  __ZNSt3__19to_stringEf(&ppppppplStack_290);
  ppppppplVar13 = ppppppplStack_290;
  if (-1 < (char)bStack_279) {
    uStack_288 = (ulong)bStack_279;
    ppppppplVar13 = (long *******)&ppppppplStack_290;
  }
  ppppppplVar12 = (long *******)appppppplStack_278;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,uStack_288);
  pppppplStack_258 = ppppppplVar12[1];
  ppppppplStack_260 = (long *******)*ppppppplVar12;
  pppppplStack_250 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  ppppppplVar13 = (long *******)&ppppppplStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar13,&UNK_10f644f26,10);
  pppppplStack_238 = ppppppplVar13[1];
  ppppppplStack_240 = (long *******)*ppppppplVar13;
  pppppplStack_230 = ppppppplVar13[2];
  ppppppplVar13[1] = (long ******)0x0;
  ppppppplVar13[2] = (long ******)0x0;
  *ppppppplVar13 = (long ******)0x0;
  FUN_10a42bae4(puVar11);
  __ZNSt3__19to_stringEf(&ppppppplStack_2a8);
  ppppppplVar13 = ppppppplStack_2a8;
  if (-1 < (char)bStack_291) {
    uStack_2a0 = (ulong)bStack_291;
    ppppppplVar13 = (long *******)&ppppppplStack_2a8;
  }
  ppppppplVar12 = (long *******)&ppppppplStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,uStack_2a0);
  pppppplStack_218 = ppppppplVar12[1];
  ppppppplStack_220 = (long *******)*ppppppplVar12;
  pppppplStack_210 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  if ((*(long **)(puVar11 + 0x238) == *(long **)(puVar11 + 0x230)) ||
     (lVar19 = **(long **)(puVar11 + 0x230), lVar19 == 0)) {
    func_0x000107c2b054(&ppppppplStack_2c0,&UNK_10f656650);
    bVar5 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_2d8,*(undefined1 *)(lVar19 + 0x60));
    ppppppplVar13 = (long *******)appppppplStack_2d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar13,0,&UNK_10f658086,0x17);
    pppppplStack_2b8 = ppppppplVar13[1];
    ppppppplStack_2c0 = (long *******)*ppppppplVar13;
    pppppplStack_2b0 = ppppppplVar13[2];
    ppppppplVar13[1] = (long ******)0x0;
    ppppppplVar13[2] = (long ******)0x0;
    *ppppppplVar13 = (long ******)0x0;
    bVar5 = true;
  }
  pppppplVar20 = pppppplStack_2b8;
  ppppppplVar13 = ppppppplStack_2c0;
  if (-1 < (long)pppppplStack_2b0) {
    pppppplVar20 = (long ******)((ulong)pppppplStack_2b0 >> 0x38);
    ppppppplVar13 = (long *******)&ppppppplStack_2c0;
  }
  ppppppplVar12 = (long *******)&ppppppplStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,pppppplVar20);
  pppppplStack_1f8 = ppppppplVar12[1];
  ppppppplStack_200 = (long *******)*ppppppplVar12;
  pppppplStack_1f0 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar11 + 0x238) - *(long *)(puVar11 + 0x230)) < 0x11) ||
     (lVar19 = *(long *)(*(long *)(puVar11 + 0x230) + 0x10), lVar19 == 0)) {
    func_0x000107c2b054(&ppppppplStack_2f0,&UNK_10f656650);
    bVar8 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_308,*(undefined1 *)(lVar19 + 0x60));
    ppppppplVar13 = (long *******)appppppplStack_308;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar13,0,&UNK_10f65809e,0x17);
    pppppplStack_2e8 = ppppppplVar13[1];
    ppppppplStack_2f0 = (long *******)*ppppppplVar13;
    pppppplStack_2e0 = ppppppplVar13[2];
    ppppppplVar13[1] = (long ******)0x0;
    ppppppplVar13[2] = (long ******)0x0;
    *ppppppplVar13 = (long ******)0x0;
    bVar8 = true;
  }
  pppppplVar20 = pppppplStack_2e8;
  ppppppplVar13 = ppppppplStack_2f0;
  if (-1 < (long)pppppplStack_2e0) {
    pppppplVar20 = (long ******)((ulong)pppppplStack_2e0 >> 0x38);
    ppppppplVar13 = (long *******)&ppppppplStack_2f0;
  }
  ppppppplVar12 = (long *******)&ppppppplStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,pppppplVar20);
  pppppplStack_1d8 = ppppppplVar12[1];
  ppppppplStack_1e0 = (long *******)*ppppppplVar12;
  pppppplStack_1d0 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar11 + 0x238) - *(long *)(puVar11 + 0x230)) < 0x21) ||
     (lVar19 = *(long *)(*(long *)(puVar11 + 0x230) + 0x20), lVar19 == 0)) {
    func_0x000107c2b054(&ppppppplStack_320,&UNK_10f656650);
    bVar7 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_338,*(undefined1 *)(lVar19 + 0x60));
    ppppppplVar13 = (long *******)appppppplStack_338;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar13,0,&UNK_10f6580b6,0x17);
    pppppplStack_318 = ppppppplVar13[1];
    ppppppplStack_320 = (long *******)*ppppppplVar13;
    pppppplStack_310 = ppppppplVar13[2];
    ppppppplVar13[1] = (long ******)0x0;
    ppppppplVar13[2] = (long ******)0x0;
    *ppppppplVar13 = (long ******)0x0;
    bVar7 = true;
  }
  pppppplVar20 = pppppplStack_318;
  ppppppplVar13 = ppppppplStack_320;
  if (-1 < (long)pppppplStack_310) {
    pppppplVar20 = (long ******)((ulong)pppppplStack_310 >> 0x38);
    ppppppplVar13 = (long *******)&ppppppplStack_320;
  }
  ppppppplVar12 = (long *******)&ppppppplStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,pppppplVar20);
  pppppplStack_1b8 = ppppppplVar12[1];
  ppppppplStack_1c0 = (long *******)*ppppppplVar12;
  pppppplStack_1b0 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar11 + 0x238) - *(long *)(puVar11 + 0x230)) < 0x31) ||
     (lVar19 = *(long *)(*(long *)(puVar11 + 0x230) + 0x30), lVar19 == 0)) {
    func_0x000107c2b054(&ppppppplStack_350,&UNK_10f656650);
    bVar6 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_368,*(undefined1 *)(lVar19 + 0x60));
    ppppppplVar13 = (long *******)appppppplStack_368;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar13,0,&UNK_10f6580ce,0x17);
    pppppplStack_348 = ppppppplVar13[1];
    ppppppplStack_350 = (long *******)*ppppppplVar13;
    pppppplStack_340 = ppppppplVar13[2];
    ppppppplVar13[1] = (long ******)0x0;
    ppppppplVar13[2] = (long ******)0x0;
    *ppppppplVar13 = (long ******)0x0;
    bVar6 = true;
  }
  pppppplVar20 = pppppplStack_348;
  ppppppplVar13 = ppppppplStack_350;
  if (-1 < (long)pppppplStack_340) {
    pppppplVar20 = (long ******)((ulong)pppppplStack_340 >> 0x38);
    ppppppplVar13 = (long *******)&ppppppplStack_350;
  }
  ppppppplVar12 = (long *******)&ppppppplStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,pppppplVar20);
  pppppplStack_198 = ppppppplVar12[1];
  ppppppplStack_1a0 = (long *******)*ppppppplVar12;
  pppppplStack_190 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  ppppppplVar13 = (long *******)&ppppppplStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar13,&UNK_10f6580e6,0x14);
  pppppplStack_178 = ppppppplVar13[1];
  pppppplStack_180 = *ppppppplVar13;
  pppppplStack_170 = ppppppplVar13[2];
  ppppppplVar13[1] = (long ******)0x0;
  ppppppplVar13[2] = (long ******)0x0;
  *ppppppplVar13 = (long ******)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_380,*(undefined1 *)(*(long *)(puVar11 + 0x2a8) + 0x60));
  ppppppplVar13 = ppppppplStack_380;
  if (-1 < (char)bStack_369) {
    uStack_378 = (ulong)bStack_369;
    ppppppplVar13 = (long *******)&ppppppplStack_380;
  }
  pppppplVar20 = (long ******)&pppppplStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppplVar20,ppppppplVar13,uStack_378);
  ppppplStack_158 = pppppplVar20[1];
  ppppplStack_160 = *pppppplVar20;
  ppppplStack_150 = pppppplVar20[2];
  pppppplVar20[1] = (long *****)0x0;
  pppppplVar20[2] = (long *****)0x0;
  *pppppplVar20 = (long *****)0x0;
  ppppplVar14 = (long *****)&ppppplStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppplVar14,&UNK_10f6580fb,0x16);
  pppplStack_138 = ppppplVar14[1];
  pppplStack_140 = *ppppplVar14;
  pppplStack_130 = ppppplVar14[2];
  ppppplVar14[1] = (long ****)0x0;
  ppppplVar14[2] = (long ****)0x0;
  *ppppplVar14 = (long ****)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_398,*(undefined1 *)(*(long *)(puVar11 + 0x2a8) + 0x61));
  ppppppplVar13 = ppppppplStack_398;
  if (-1 < (char)bStack_381) {
    uStack_390 = (ulong)bStack_381;
    ppppppplVar13 = (long *******)&ppppppplStack_398;
  }
  pppplVar15 = (long ****)&pppplStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppplVar15,ppppppplVar13,uStack_390);
  ppplStack_118 = pppplVar15[1];
  ppplStack_120 = *pppplVar15;
  ppplStack_110 = pppplVar15[2];
  pppplVar15[1] = (long ***)0x0;
  pppplVar15[2] = (long ***)0x0;
  *pppplVar15 = (long ***)0x0;
  ppplVar16 = (long ***)&ppplStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppplVar16,&UNK_10f658112,0x10);
  pplStack_f8 = ppplVar16[1];
  pppppplStack_100 = (long ******)*ppplVar16;
  pplStack_f0 = ppplVar16[2];
  ppplVar16[1] = (long **)0x0;
  ppplVar16[2] = (long **)0x0;
  *ppplVar16 = (long **)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_3b0,puVar11[0x730]);
  ppppppplVar13 = ppppppplStack_3b0;
  if (-1 < (char)bStack_399) {
    uStack_3a8 = (ulong)bStack_399;
    ppppppplVar13 = (long *******)&ppppppplStack_3b0;
  }
  ppppppplVar12 = &pppppplStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,ppppppplVar13,uStack_3a8);
  pppppplVar20 = *ppppppplVar12;
  extraout_x8[1] = ppppppplVar12[1];
  *extraout_x8 = pppppplVar20;
  extraout_x8[2] = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  if ((char)bStack_399 < '\0') {
    __ZdlPv(ppppppplStack_3b0);
    ppppppplVar12 = ppppppplStack_3b0;
  }
  if ((char)bStack_381 < '\0') {
    __ZdlPv(ppppppplStack_398);
    ppppppplVar12 = ppppppplStack_398;
  }
  if ((char)bStack_369 < '\0') {
    __ZdlPv(ppppppplStack_380);
    ppppppplVar12 = ppppppplStack_380;
  }
  if ((long)pppppplStack_190 < 0) {
    ppppppplVar12 = ppppppplStack_1a0;
    __ZdlPv(ppppppplStack_1a0);
  }
  if ((long)pppppplStack_340 < 0) {
    ppppppplVar12 = ppppppplStack_350;
    __ZdlPv(ppppppplStack_350);
  }
  if ((bVar6) && (cStack_351 < '\0')) {
    __ZdlPv(appppppplStack_368[0]);
    ppppppplVar12 = appppppplStack_368[0];
  }
  if ((long)pppppplStack_1b0 < 0) {
    ppppppplVar12 = ppppppplStack_1c0;
    __ZdlPv(ppppppplStack_1c0);
  }
  if ((long)pppppplStack_310 < 0) {
    ppppppplVar12 = ppppppplStack_320;
    __ZdlPv(ppppppplStack_320);
  }
  if ((bVar7) && (cStack_321 < '\0')) {
    __ZdlPv(appppppplStack_338[0]);
    ppppppplVar12 = appppppplStack_338[0];
  }
  if ((long)pppppplStack_1d0 < 0) {
    ppppppplVar12 = ppppppplStack_1e0;
    __ZdlPv(ppppppplStack_1e0);
  }
  if ((long)pppppplStack_2e0 < 0) {
    ppppppplVar12 = ppppppplStack_2f0;
    __ZdlPv(ppppppplStack_2f0);
  }
  if ((bVar8) && (cStack_2f1 < '\0')) {
    __ZdlPv(appppppplStack_308[0]);
    ppppppplVar12 = appppppplStack_308[0];
  }
  if ((long)pppppplStack_1f0 < 0) {
    ppppppplVar12 = ppppppplStack_200;
    __ZdlPv(ppppppplStack_200);
  }
  if ((long)pppppplStack_2b0 < 0) {
    ppppppplVar12 = ppppppplStack_2c0;
    __ZdlPv(ppppppplStack_2c0);
  }
  if ((bVar5) && (cStack_2c1 < '\0')) {
    __ZdlPv(appppppplStack_2d8[0]);
    ppppppplVar12 = appppppplStack_2d8[0];
  }
  if ((long)pppppplStack_210 < 0) {
    ppppppplVar12 = ppppppplStack_220;
    __ZdlPv(ppppppplStack_220);
  }
  if ((char)bStack_291 < '\0') {
    __ZdlPv(ppppppplStack_2a8);
    ppppppplVar12 = ppppppplStack_2a8;
  }
  if ((long)pppppplStack_230 < 0) {
    ppppppplVar12 = ppppppplStack_240;
    __ZdlPv(ppppppplStack_240);
  }
  if ((long)pppppplStack_250 < 0) {
    ppppppplVar12 = ppppppplStack_260;
    __ZdlPv(ppppppplStack_260);
  }
  if ((char)bStack_279 < '\0') {
    __ZdlPv(ppppppplStack_290);
    ppppppplVar12 = ppppppplStack_290;
  }
  if (cStack_261 < '\0') {
    __ZdlPv(appppppplStack_278[0]);
    ppppppplVar12 = appppppplStack_278[0];
  }
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppppppplStack_e8);
    ppppppplVar12 = ppppppplStack_e8;
  }
  return ppppppplVar12;
}



/* Entry: 10a42f074; end: 10a42f14f;  */

/* WARNING: Removing unreachable block (ram,0x00010a42f770) */
/* WARNING: Removing unreachable block (ram,0x00010a42f740) */
/* WARNING: Removing unreachable block (ram,0x00010a42f730) */
/* WARNING: Removing unreachable block (ram,0x00010a42f760) */
/* WARNING: Removing unreachable block (ram,0x00010a42f790) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a42f074(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  long *plVar16;
  undefined8 *extraout_x8;
  ulong uVar17;
  long lVar18;
  long ******pppppplVar19;
  long *******ppppppplStack_390;
  ulong uStack_388;
  byte bStack_379;
  long *******ppppppplStack_378;
  ulong uStack_370;
  byte bStack_361;
  long *******ppppppplStack_360;
  ulong uStack_358;
  byte bStack_349;
  long *******appppppplStack_348 [2];
  char cStack_331;
  long *******ppppppplStack_330;
  long ******pppppplStack_328;
  long ******pppppplStack_320;
  long *******appppppplStack_318 [2];
  char cStack_301;
  long *******ppppppplStack_300;
  long ******pppppplStack_2f8;
  long ******pppppplStack_2f0;
  long *******appppppplStack_2e8 [2];
  char cStack_2d1;
  long *******ppppppplStack_2d0;
  long ******pppppplStack_2c8;
  long ******pppppplStack_2c0;
  long *******appppppplStack_2b8 [2];
  char cStack_2a1;
  long *******ppppppplStack_2a0;
  long ******pppppplStack_298;
  long ******pppppplStack_290;
  long *******ppppppplStack_288;
  ulong uStack_280;
  byte bStack_271;
  long *******ppppppplStack_270;
  ulong uStack_268;
  byte bStack_259;
  long *******appppppplStack_258 [2];
  char cStack_241;
  long *******ppppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  long *******ppppppplStack_220;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  long *******ppppppplStack_200;
  long ******pppppplStack_1f8;
  long ******pppppplStack_1f0;
  long *******ppppppplStack_1e0;
  long ******pppppplStack_1d8;
  long ******pppppplStack_1d0;
  long *******ppppppplStack_1c0;
  long ******pppppplStack_1b8;
  long ******pppppplStack_1b0;
  long *******ppppppplStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long *******ppppppplStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  long ******pppppplStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long *****ppppplStack_130;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ******pppppplStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  long *******ppppppplStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar9 = &puStack_30;
  plVar16 = (long *)*param_2;
  if ((long *)param_2[1] == plVar16) {
    puStack_30 = &UNK_10f658017;
    uStack_28 = 0x39;
  }
  else {
    puStack_30 = &UNK_10f658017;
    uStack_28 = 0x39;
    if ((ulong)(param_2[1] - (long)plVar16) < 0x41) {
      puStack_30 = &UNK_10f657fe1;
      uStack_28 = 0x35;
      if (*plVar16 != 0) {
        ppppppplVar12 = (long *******)(param_1 + 0x230);
        FUN_10a438e74(ppppppplVar12);
        lVar18 = *param_2;
        *(long *)(param_1 + 0x238) = param_2[1];
        *(long *)(param_1 + 0x230) = lVar18;
        *(long *)(param_1 + 0x240) = param_2[2];
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        if (*(char *)(param_1 + 0x248) == '\x01') {
          plVar16 = *(long **)(param_1 + 0x230);
          uVar17 = *(long *)(param_1 + 0x238) - (long)plVar16 >> 4;
          if (1 < uVar17) {
            uVar3 = *(undefined1 *)(*plVar16 + 0x60);
            lVar18 = uVar17 - 1;
            do {
              plVar16 = plVar16 + 2;
              *(undefined1 *)(*plVar16 + 0x60) = uVar3;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
        }
        return ppppppplVar12;
      }
    }
  }
  FUN_10a0edfc4();
  puVar10 = &stack0xffffffffffffffb0;
  if (*param_2 != 0) {
    lVar18 = param_2[1];
    pppppplVar19 = (long ******)*param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar16 = *(long **)((long)ppuVar9 + 0x2b0);
    *(long *)((long)ppuVar9 + 0x2b0) = lVar18;
    *(long *******)((long)ppuVar9 + 0x2a8) = pppppplVar19;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar18 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return (long *******)((long)ppuVar9 + 0x2a8);
  }
  FUN_10a0edfc4();
  FUN_10a3c829c(&ppppppplStack_c8);
  uVar17 = uStack_c0;
  if (-1 < (char)bStack_b1) {
    uVar17 = (ulong)bStack_b1;
  }
  FUN_10a003c90(appppppplStack_258,uVar17 + 7,&ppppppplStack_270);
  ppppppplVar12 = appppppplStack_258[0];
  if (-1 < cStack_241) {
    ppppppplVar12 = (long *******)appppppplStack_258;
  }
  if (uVar17 != 0) {
    ppppppplVar11 = ppppppplStack_c8;
    if (-1 < (char)bStack_b1) {
      ppppppplVar11 = (long *******)&ppppppplStack_c8;
    }
    _memmove(ppppppplVar12,ppppppplVar11,uVar17);
  }
  puVar2 = (undefined4 *)((long)ppppppplVar12 + uVar17);
  *(undefined4 *)((long)puVar2 + 3) = 0x203a766f;
  *puVar2 = 0x6f66202c;
  *(undefined1 *)((long)puVar2 + 7) = 0;
  FUN_10a42b7bc(puVar10);
  __ZNSt3__19to_stringEf(&ppppppplStack_270);
  ppppppplVar12 = ppppppplStack_270;
  if (-1 < (char)bStack_259) {
    uStack_268 = (ulong)bStack_259;
    ppppppplVar12 = (long *******)&ppppppplStack_270;
  }
  ppppppplVar11 = (long *******)appppppplStack_258;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,uStack_268);
  pppppplStack_238 = ppppppplVar11[1];
  ppppppplStack_240 = (long *******)*ppppppplVar11;
  pppppplStack_230 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  ppppppplVar12 = (long *******)&ppppppplStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,&UNK_10f644f26,10);
  pppppplStack_218 = ppppppplVar12[1];
  ppppppplStack_220 = (long *******)*ppppppplVar12;
  pppppplStack_210 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  FUN_10a42bae4(puVar10);
  __ZNSt3__19to_stringEf(&ppppppplStack_288);
  ppppppplVar12 = ppppppplStack_288;
  if (-1 < (char)bStack_271) {
    uStack_280 = (ulong)bStack_271;
    ppppppplVar12 = (long *******)&ppppppplStack_288;
  }
  ppppppplVar11 = (long *******)&ppppppplStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,uStack_280);
  pppppplStack_1f8 = ppppppplVar11[1];
  ppppppplStack_200 = (long *******)*ppppppplVar11;
  pppppplStack_1f0 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  if ((*(long **)(puVar10 + 0x238) == *(long **)(puVar10 + 0x230)) ||
     (lVar18 = **(long **)(puVar10 + 0x230), lVar18 == 0)) {
    func_0x000107c2b054(&ppppppplStack_2a0,&UNK_10f656650);
    bVar5 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_2b8,*(undefined1 *)(lVar18 + 0x60));
    ppppppplVar12 = (long *******)appppppplStack_2b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar12,0,&UNK_10f658086,0x17);
    pppppplStack_298 = ppppppplVar12[1];
    ppppppplStack_2a0 = (long *******)*ppppppplVar12;
    pppppplStack_290 = ppppppplVar12[2];
    ppppppplVar12[1] = (long ******)0x0;
    ppppppplVar12[2] = (long ******)0x0;
    *ppppppplVar12 = (long ******)0x0;
    bVar5 = true;
  }
  pppppplVar19 = pppppplStack_298;
  ppppppplVar12 = ppppppplStack_2a0;
  if (-1 < (long)pppppplStack_290) {
    pppppplVar19 = (long ******)((ulong)pppppplStack_290 >> 0x38);
    ppppppplVar12 = (long *******)&ppppppplStack_2a0;
  }
  ppppppplVar11 = (long *******)&ppppppplStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,pppppplVar19);
  pppppplStack_1d8 = ppppppplVar11[1];
  ppppppplStack_1e0 = (long *******)*ppppppplVar11;
  pppppplStack_1d0 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar10 + 0x238) - *(long *)(puVar10 + 0x230)) < 0x11) ||
     (lVar18 = *(long *)(*(long *)(puVar10 + 0x230) + 0x10), lVar18 == 0)) {
    func_0x000107c2b054(&ppppppplStack_2d0,&UNK_10f656650);
    bVar8 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_2e8,*(undefined1 *)(lVar18 + 0x60));
    ppppppplVar12 = (long *******)appppppplStack_2e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar12,0,&UNK_10f65809e,0x17);
    pppppplStack_2c8 = ppppppplVar12[1];
    ppppppplStack_2d0 = (long *******)*ppppppplVar12;
    pppppplStack_2c0 = ppppppplVar12[2];
    ppppppplVar12[1] = (long ******)0x0;
    ppppppplVar12[2] = (long ******)0x0;
    *ppppppplVar12 = (long ******)0x0;
    bVar8 = true;
  }
  pppppplVar19 = pppppplStack_2c8;
  ppppppplVar12 = ppppppplStack_2d0;
  if (-1 < (long)pppppplStack_2c0) {
    pppppplVar19 = (long ******)((ulong)pppppplStack_2c0 >> 0x38);
    ppppppplVar12 = (long *******)&ppppppplStack_2d0;
  }
  ppppppplVar11 = (long *******)&ppppppplStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,pppppplVar19);
  pppppplStack_1b8 = ppppppplVar11[1];
  ppppppplStack_1c0 = (long *******)*ppppppplVar11;
  pppppplStack_1b0 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar10 + 0x238) - *(long *)(puVar10 + 0x230)) < 0x21) ||
     (lVar18 = *(long *)(*(long *)(puVar10 + 0x230) + 0x20), lVar18 == 0)) {
    func_0x000107c2b054(&ppppppplStack_300,&UNK_10f656650);
    bVar7 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_318,*(undefined1 *)(lVar18 + 0x60));
    ppppppplVar12 = (long *******)appppppplStack_318;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar12,0,&UNK_10f6580b6,0x17);
    pppppplStack_2f8 = ppppppplVar12[1];
    ppppppplStack_300 = (long *******)*ppppppplVar12;
    pppppplStack_2f0 = ppppppplVar12[2];
    ppppppplVar12[1] = (long ******)0x0;
    ppppppplVar12[2] = (long ******)0x0;
    *ppppppplVar12 = (long ******)0x0;
    bVar7 = true;
  }
  pppppplVar19 = pppppplStack_2f8;
  ppppppplVar12 = ppppppplStack_300;
  if (-1 < (long)pppppplStack_2f0) {
    pppppplVar19 = (long ******)((ulong)pppppplStack_2f0 >> 0x38);
    ppppppplVar12 = (long *******)&ppppppplStack_300;
  }
  ppppppplVar11 = (long *******)&ppppppplStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,pppppplVar19);
  pppppplStack_198 = ppppppplVar11[1];
  ppppppplStack_1a0 = (long *******)*ppppppplVar11;
  pppppplStack_190 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar10 + 0x238) - *(long *)(puVar10 + 0x230)) < 0x31) ||
     (lVar18 = *(long *)(*(long *)(puVar10 + 0x230) + 0x30), lVar18 == 0)) {
    func_0x000107c2b054(&ppppppplStack_330,&UNK_10f656650);
    bVar6 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_348,*(undefined1 *)(lVar18 + 0x60));
    ppppppplVar12 = (long *******)appppppplStack_348;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar12,0,&UNK_10f6580ce,0x17);
    pppppplStack_328 = ppppppplVar12[1];
    ppppppplStack_330 = (long *******)*ppppppplVar12;
    pppppplStack_320 = ppppppplVar12[2];
    ppppppplVar12[1] = (long ******)0x0;
    ppppppplVar12[2] = (long ******)0x0;
    *ppppppplVar12 = (long ******)0x0;
    bVar6 = true;
  }
  pppppplVar19 = pppppplStack_328;
  ppppppplVar12 = ppppppplStack_330;
  if (-1 < (long)pppppplStack_320) {
    pppppplVar19 = (long ******)((ulong)pppppplStack_320 >> 0x38);
    ppppppplVar12 = (long *******)&ppppppplStack_330;
  }
  ppppppplVar11 = (long *******)&ppppppplStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,pppppplVar19);
  pppppplStack_178 = ppppppplVar11[1];
  ppppppplStack_180 = (long *******)*ppppppplVar11;
  pppppplStack_170 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  ppppppplVar12 = (long *******)&ppppppplStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar12,&UNK_10f6580e6,0x14);
  pppppplStack_158 = ppppppplVar12[1];
  pppppplStack_160 = *ppppppplVar12;
  pppppplStack_150 = ppppppplVar12[2];
  ppppppplVar12[1] = (long ******)0x0;
  ppppppplVar12[2] = (long ******)0x0;
  *ppppppplVar12 = (long ******)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_360,*(undefined1 *)(*(long *)(puVar10 + 0x2a8) + 0x60));
  ppppppplVar12 = ppppppplStack_360;
  if (-1 < (char)bStack_349) {
    uStack_358 = (ulong)bStack_349;
    ppppppplVar12 = (long *******)&ppppppplStack_360;
  }
  pppppplVar19 = (long ******)&pppppplStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppplVar19,ppppppplVar12,uStack_358);
  ppppplStack_138 = pppppplVar19[1];
  ppppplStack_140 = *pppppplVar19;
  ppppplStack_130 = pppppplVar19[2];
  pppppplVar19[1] = (long *****)0x0;
  pppppplVar19[2] = (long *****)0x0;
  *pppppplVar19 = (long *****)0x0;
  ppppplVar13 = (long *****)&ppppplStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppplVar13,&UNK_10f6580fb,0x16);
  pppplStack_118 = ppppplVar13[1];
  pppplStack_120 = *ppppplVar13;
  pppplStack_110 = ppppplVar13[2];
  ppppplVar13[1] = (long ****)0x0;
  ppppplVar13[2] = (long ****)0x0;
  *ppppplVar13 = (long ****)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_378,*(undefined1 *)(*(long *)(puVar10 + 0x2a8) + 0x61));
  ppppppplVar12 = ppppppplStack_378;
  if (-1 < (char)bStack_361) {
    uStack_370 = (ulong)bStack_361;
    ppppppplVar12 = (long *******)&ppppppplStack_378;
  }
  pppplVar14 = (long ****)&pppplStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppplVar14,ppppppplVar12,uStack_370);
  ppplStack_f8 = pppplVar14[1];
  ppplStack_100 = *pppplVar14;
  ppplStack_f0 = pppplVar14[2];
  pppplVar14[1] = (long ***)0x0;
  pppplVar14[2] = (long ***)0x0;
  *pppplVar14 = (long ***)0x0;
  ppplVar15 = (long ***)&ppplStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppplVar15,&UNK_10f658112,0x10);
  pplStack_d8 = ppplVar15[1];
  pppppplStack_e0 = (long ******)*ppplVar15;
  pplStack_d0 = ppplVar15[2];
  ppplVar15[1] = (long **)0x0;
  ppplVar15[2] = (long **)0x0;
  *ppplVar15 = (long **)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_390,puVar10[0x730]);
  ppppppplVar12 = ppppppplStack_390;
  if (-1 < (char)bStack_379) {
    uStack_388 = (ulong)bStack_379;
    ppppppplVar12 = (long *******)&ppppppplStack_390;
  }
  ppppppplVar11 = &pppppplStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,ppppppplVar12,uStack_388);
  pppppplVar19 = *ppppppplVar11;
  extraout_x8[1] = ppppppplVar11[1];
  *extraout_x8 = pppppplVar19;
  extraout_x8[2] = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  if ((char)bStack_379 < '\0') {
    __ZdlPv(ppppppplStack_390);
    ppppppplVar11 = ppppppplStack_390;
  }
  if ((char)bStack_361 < '\0') {
    __ZdlPv(ppppppplStack_378);
    ppppppplVar11 = ppppppplStack_378;
  }
  if ((char)bStack_349 < '\0') {
    __ZdlPv(ppppppplStack_360);
    ppppppplVar11 = ppppppplStack_360;
  }
  if ((long)pppppplStack_170 < 0) {
    ppppppplVar11 = ppppppplStack_180;
    __ZdlPv(ppppppplStack_180);
  }
  if ((long)pppppplStack_320 < 0) {
    ppppppplVar11 = ppppppplStack_330;
    __ZdlPv(ppppppplStack_330);
  }
  if ((bVar6) && (cStack_331 < '\0')) {
    __ZdlPv(appppppplStack_348[0]);
    ppppppplVar11 = appppppplStack_348[0];
  }
  if ((long)pppppplStack_190 < 0) {
    ppppppplVar11 = ppppppplStack_1a0;
    __ZdlPv(ppppppplStack_1a0);
  }
  if ((long)pppppplStack_2f0 < 0) {
    ppppppplVar11 = ppppppplStack_300;
    __ZdlPv(ppppppplStack_300);
  }
  if ((bVar7) && (cStack_301 < '\0')) {
    __ZdlPv(appppppplStack_318[0]);
    ppppppplVar11 = appppppplStack_318[0];
  }
  if ((long)pppppplStack_1b0 < 0) {
    ppppppplVar11 = ppppppplStack_1c0;
    __ZdlPv(ppppppplStack_1c0);
  }
  if ((long)pppppplStack_2c0 < 0) {
    ppppppplVar11 = ppppppplStack_2d0;
    __ZdlPv(ppppppplStack_2d0);
  }
  if ((bVar8) && (cStack_2d1 < '\0')) {
    __ZdlPv(appppppplStack_2e8[0]);
    ppppppplVar11 = appppppplStack_2e8[0];
  }
  if ((long)pppppplStack_1d0 < 0) {
    ppppppplVar11 = ppppppplStack_1e0;
    __ZdlPv(ppppppplStack_1e0);
  }
  if ((long)pppppplStack_290 < 0) {
    ppppppplVar11 = ppppppplStack_2a0;
    __ZdlPv(ppppppplStack_2a0);
  }
  if ((bVar5) && (cStack_2a1 < '\0')) {
    __ZdlPv(appppppplStack_2b8[0]);
    ppppppplVar11 = appppppplStack_2b8[0];
  }
  if ((long)pppppplStack_1f0 < 0) {
    ppppppplVar11 = ppppppplStack_200;
    __ZdlPv(ppppppplStack_200);
  }
  if ((char)bStack_271 < '\0') {
    __ZdlPv(ppppppplStack_288);
    ppppppplVar11 = ppppppplStack_288;
  }
  if ((long)pppppplStack_210 < 0) {
    ppppppplVar11 = ppppppplStack_220;
    __ZdlPv(ppppppplStack_220);
  }
  if ((long)pppppplStack_230 < 0) {
    ppppppplVar11 = ppppppplStack_240;
    __ZdlPv(ppppppplStack_240);
  }
  if ((char)bStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
    ppppppplVar11 = ppppppplStack_270;
  }
  if (cStack_241 < '\0') {
    __ZdlPv(appppppplStack_258[0]);
    ppppppplVar11 = appppppplStack_258[0];
  }
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(ppppppplStack_c8);
    ppppppplVar11 = ppppppplStack_c8;
  }
  return ppppppplVar11;
}



/* Entry: 10a42f150; end: 10a42f18b;  */

/* WARNING: Removing unreachable block (ram,0x00010a42f770) */
/* WARNING: Removing unreachable block (ram,0x00010a42f740) */
/* WARNING: Removing unreachable block (ram,0x00010a42f730) */
/* WARNING: Removing unreachable block (ram,0x00010a42f760) */
/* WARNING: Removing unreachable block (ram,0x00010a42f790) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a42f150(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long ***ppplVar14;
  undefined8 *extraout_x8;
  long lVar15;
  long *plVar16;
  long ******pppppplVar17;
  long *******ppppppplStack_360;
  ulong uStack_358;
  byte bStack_349;
  long *******ppppppplStack_348;
  ulong uStack_340;
  byte bStack_331;
  long *******ppppppplStack_330;
  ulong uStack_328;
  byte bStack_319;
  long *******appppppplStack_318 [2];
  char cStack_301;
  long *******ppppppplStack_300;
  long ******pppppplStack_2f8;
  long ******pppppplStack_2f0;
  long *******appppppplStack_2e8 [2];
  char cStack_2d1;
  long *******ppppppplStack_2d0;
  long ******pppppplStack_2c8;
  long ******pppppplStack_2c0;
  long *******appppppplStack_2b8 [2];
  char cStack_2a1;
  long *******ppppppplStack_2a0;
  long ******pppppplStack_298;
  long ******pppppplStack_290;
  long *******appppppplStack_288 [2];
  char cStack_271;
  long *******ppppppplStack_270;
  long ******pppppplStack_268;
  long ******pppppplStack_260;
  long *******ppppppplStack_258;
  ulong uStack_250;
  byte bStack_241;
  long *******ppppppplStack_240;
  ulong uStack_238;
  byte bStack_229;
  long *******appppppplStack_228 [2];
  char cStack_211;
  long *******ppppppplStack_210;
  long ******pppppplStack_208;
  long ******pppppplStack_200;
  long *******ppppppplStack_1f0;
  long ******pppppplStack_1e8;
  long ******pppppplStack_1e0;
  long *******ppppppplStack_1d0;
  long ******pppppplStack_1c8;
  long ******pppppplStack_1c0;
  long *******ppppppplStack_1b0;
  long ******pppppplStack_1a8;
  long ******pppppplStack_1a0;
  long *******ppppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long *******ppppppplStack_170;
  long ******pppppplStack_168;
  long ******pppppplStack_160;
  long *******ppppppplStack_150;
  long ******pppppplStack_148;
  long ******pppppplStack_140;
  long ******pppppplStack_130;
  long ******pppppplStack_128;
  long ******pppppplStack_120;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ******pppppplStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  long *******ppppppplStack_98;
  ulong uStack_90;
  byte bStack_81;
  
  puVar9 = &stack0xffffffffffffffe0;
  if (*param_2 != 0) {
    lVar15 = param_2[1];
    pppppplVar17 = (long ******)*param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar16 = *(long **)(param_1 + 0x2b0);
    *(long *)(param_1 + 0x2b0) = lVar15;
    *(long *******)(param_1 + 0x2a8) = pppppplVar17;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return (long *******)(param_1 + 0x2a8);
  }
  FUN_10a0edfc4();
  FUN_10a3c829c(&ppppppplStack_98);
  uVar3 = uStack_90;
  if (-1 < (char)bStack_81) {
    uVar3 = (ulong)bStack_81;
  }
  FUN_10a003c90(appppppplStack_228,uVar3 + 7,&ppppppplStack_240);
  ppppppplVar11 = appppppplStack_228[0];
  if (-1 < cStack_211) {
    ppppppplVar11 = (long *******)appppppplStack_228;
  }
  if (uVar3 != 0) {
    ppppppplVar10 = ppppppplStack_98;
    if (-1 < (char)bStack_81) {
      ppppppplVar10 = (long *******)&ppppppplStack_98;
    }
    _memmove(ppppppplVar11,ppppppplVar10,uVar3);
  }
  puVar2 = (undefined4 *)((long)ppppppplVar11 + uVar3);
  *(undefined4 *)((long)puVar2 + 3) = 0x203a766f;
  *puVar2 = 0x6f66202c;
  *(undefined1 *)((long)puVar2 + 7) = 0;
  FUN_10a42b7bc(puVar9);
  __ZNSt3__19to_stringEf(&ppppppplStack_240);
  ppppppplVar11 = ppppppplStack_240;
  if (-1 < (char)bStack_229) {
    uStack_238 = (ulong)bStack_229;
    ppppppplVar11 = (long *******)&ppppppplStack_240;
  }
  ppppppplVar10 = (long *******)appppppplStack_228;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,uStack_238);
  pppppplStack_208 = ppppppplVar10[1];
  ppppppplStack_210 = (long *******)*ppppppplVar10;
  pppppplStack_200 = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  ppppppplVar11 = (long *******)&ppppppplStack_210;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,&UNK_10f644f26,10);
  pppppplStack_1e8 = ppppppplVar11[1];
  ppppppplStack_1f0 = (long *******)*ppppppplVar11;
  pppppplStack_1e0 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  FUN_10a42bae4(puVar9);
  __ZNSt3__19to_stringEf(&ppppppplStack_258);
  ppppppplVar11 = ppppppplStack_258;
  if (-1 < (char)bStack_241) {
    uStack_250 = (ulong)bStack_241;
    ppppppplVar11 = (long *******)&ppppppplStack_258;
  }
  ppppppplVar10 = (long *******)&ppppppplStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,uStack_250);
  pppppplStack_1c8 = ppppppplVar10[1];
  ppppppplStack_1d0 = (long *******)*ppppppplVar10;
  pppppplStack_1c0 = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  if ((*(long **)(puVar9 + 0x238) == *(long **)(puVar9 + 0x230)) ||
     (lVar15 = **(long **)(puVar9 + 0x230), lVar15 == 0)) {
    func_0x000107c2b054(&ppppppplStack_270,&UNK_10f656650);
    bVar5 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_288,*(undefined1 *)(lVar15 + 0x60));
    ppppppplVar11 = (long *******)appppppplStack_288;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar11,0,&UNK_10f658086,0x17);
    pppppplStack_268 = ppppppplVar11[1];
    ppppppplStack_270 = (long *******)*ppppppplVar11;
    pppppplStack_260 = ppppppplVar11[2];
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)0x0;
    bVar5 = true;
  }
  pppppplVar17 = pppppplStack_268;
  ppppppplVar11 = ppppppplStack_270;
  if (-1 < (long)pppppplStack_260) {
    pppppplVar17 = (long ******)((ulong)pppppplStack_260 >> 0x38);
    ppppppplVar11 = (long *******)&ppppppplStack_270;
  }
  ppppppplVar10 = (long *******)&ppppppplStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,pppppplVar17);
  pppppplStack_1a8 = ppppppplVar10[1];
  ppppppplStack_1b0 = (long *******)*ppppppplVar10;
  pppppplStack_1a0 = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar9 + 0x238) - *(long *)(puVar9 + 0x230)) < 0x11) ||
     (lVar15 = *(long *)(*(long *)(puVar9 + 0x230) + 0x10), lVar15 == 0)) {
    func_0x000107c2b054(&ppppppplStack_2a0,&UNK_10f656650);
    bVar8 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_2b8,*(undefined1 *)(lVar15 + 0x60));
    ppppppplVar11 = (long *******)appppppplStack_2b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar11,0,&UNK_10f65809e,0x17);
    pppppplStack_298 = ppppppplVar11[1];
    ppppppplStack_2a0 = (long *******)*ppppppplVar11;
    pppppplStack_290 = ppppppplVar11[2];
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)0x0;
    bVar8 = true;
  }
  pppppplVar17 = pppppplStack_298;
  ppppppplVar11 = ppppppplStack_2a0;
  if (-1 < (long)pppppplStack_290) {
    pppppplVar17 = (long ******)((ulong)pppppplStack_290 >> 0x38);
    ppppppplVar11 = (long *******)&ppppppplStack_2a0;
  }
  ppppppplVar10 = (long *******)&ppppppplStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,pppppplVar17);
  pppppplStack_188 = ppppppplVar10[1];
  ppppppplStack_190 = (long *******)*ppppppplVar10;
  pppppplStack_180 = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar9 + 0x238) - *(long *)(puVar9 + 0x230)) < 0x21) ||
     (lVar15 = *(long *)(*(long *)(puVar9 + 0x230) + 0x20), lVar15 == 0)) {
    func_0x000107c2b054(&ppppppplStack_2d0,&UNK_10f656650);
    bVar7 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_2e8,*(undefined1 *)(lVar15 + 0x60));
    ppppppplVar11 = (long *******)appppppplStack_2e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar11,0,&UNK_10f6580b6,0x17);
    pppppplStack_2c8 = ppppppplVar11[1];
    ppppppplStack_2d0 = (long *******)*ppppppplVar11;
    pppppplStack_2c0 = ppppppplVar11[2];
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)0x0;
    bVar7 = true;
  }
  pppppplVar17 = pppppplStack_2c8;
  ppppppplVar11 = ppppppplStack_2d0;
  if (-1 < (long)pppppplStack_2c0) {
    pppppplVar17 = (long ******)((ulong)pppppplStack_2c0 >> 0x38);
    ppppppplVar11 = (long *******)&ppppppplStack_2d0;
  }
  ppppppplVar10 = (long *******)&ppppppplStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,pppppplVar17);
  pppppplStack_168 = ppppppplVar10[1];
  ppppppplStack_170 = (long *******)*ppppppplVar10;
  pppppplStack_160 = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  if (((ulong)(*(long *)(puVar9 + 0x238) - *(long *)(puVar9 + 0x230)) < 0x31) ||
     (lVar15 = *(long *)(*(long *)(puVar9 + 0x230) + 0x30), lVar15 == 0)) {
    func_0x000107c2b054(&ppppppplStack_300,&UNK_10f656650);
    bVar6 = false;
  }
  else {
    __ZNSt3__19to_stringEi(appppppplStack_318,*(undefined1 *)(lVar15 + 0x60));
    ppppppplVar11 = (long *******)appppppplStack_318;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar11,0,&UNK_10f6580ce,0x17);
    pppppplStack_2f8 = ppppppplVar11[1];
    ppppppplStack_300 = (long *******)*ppppppplVar11;
    pppppplStack_2f0 = ppppppplVar11[2];
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)0x0;
    bVar6 = true;
  }
  pppppplVar17 = pppppplStack_2f8;
  ppppppplVar11 = ppppppplStack_300;
  if (-1 < (long)pppppplStack_2f0) {
    pppppplVar17 = (long ******)((ulong)pppppplStack_2f0 >> 0x38);
    ppppppplVar11 = (long *******)&ppppppplStack_300;
  }
  ppppppplVar10 = (long *******)&ppppppplStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,pppppplVar17);
  pppppplStack_148 = ppppppplVar10[1];
  ppppppplStack_150 = (long *******)*ppppppplVar10;
  pppppplStack_140 = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  ppppppplVar11 = (long *******)&ppppppplStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar11,&UNK_10f6580e6,0x14);
  pppppplStack_128 = ppppppplVar11[1];
  pppppplStack_130 = *ppppppplVar11;
  pppppplStack_120 = ppppppplVar11[2];
  ppppppplVar11[1] = (long ******)0x0;
  ppppppplVar11[2] = (long ******)0x0;
  *ppppppplVar11 = (long ******)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_330,*(undefined1 *)(*(long *)(puVar9 + 0x2a8) + 0x60));
  ppppppplVar11 = ppppppplStack_330;
  if (-1 < (char)bStack_319) {
    uStack_328 = (ulong)bStack_319;
    ppppppplVar11 = (long *******)&ppppppplStack_330;
  }
  pppppplVar17 = (long ******)&pppppplStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppplVar17,ppppppplVar11,uStack_328);
  ppppplStack_108 = pppppplVar17[1];
  ppppplStack_110 = *pppppplVar17;
  ppppplStack_100 = pppppplVar17[2];
  pppppplVar17[1] = (long *****)0x0;
  pppppplVar17[2] = (long *****)0x0;
  *pppppplVar17 = (long *****)0x0;
  ppppplVar12 = (long *****)&ppppplStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppplVar12,&UNK_10f6580fb,0x16);
  pppplStack_e8 = ppppplVar12[1];
  pppplStack_f0 = *ppppplVar12;
  pppplStack_e0 = ppppplVar12[2];
  ppppplVar12[1] = (long ****)0x0;
  ppppplVar12[2] = (long ****)0x0;
  *ppppplVar12 = (long ****)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_348,*(undefined1 *)(*(long *)(puVar9 + 0x2a8) + 0x61));
  ppppppplVar11 = ppppppplStack_348;
  if (-1 < (char)bStack_331) {
    uStack_340 = (ulong)bStack_331;
    ppppppplVar11 = (long *******)&ppppppplStack_348;
  }
  pppplVar13 = (long ****)&pppplStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppplVar13,ppppppplVar11,uStack_340);
  ppplStack_c8 = pppplVar13[1];
  ppplStack_d0 = *pppplVar13;
  ppplStack_c0 = pppplVar13[2];
  pppplVar13[1] = (long ***)0x0;
  pppplVar13[2] = (long ***)0x0;
  *pppplVar13 = (long ***)0x0;
  ppplVar14 = (long ***)&ppplStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppplVar14,&UNK_10f658112,0x10);
  pplStack_a8 = ppplVar14[1];
  pppppplStack_b0 = (long ******)*ppplVar14;
  pplStack_a0 = ppplVar14[2];
  ppplVar14[1] = (long **)0x0;
  ppplVar14[2] = (long **)0x0;
  *ppplVar14 = (long **)0x0;
  __ZNSt3__19to_stringEi(&ppppppplStack_360,puVar9[0x730]);
  ppppppplVar11 = ppppppplStack_360;
  if (-1 < (char)bStack_349) {
    uStack_358 = (ulong)bStack_349;
    ppppppplVar11 = (long *******)&ppppppplStack_360;
  }
  ppppppplVar10 = &pppppplStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar10,ppppppplVar11,uStack_358);
  pppppplVar17 = *ppppppplVar10;
  extraout_x8[1] = ppppppplVar10[1];
  *extraout_x8 = pppppplVar17;
  extraout_x8[2] = ppppppplVar10[2];
  ppppppplVar10[1] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  if ((char)bStack_349 < '\0') {
    __ZdlPv(ppppppplStack_360);
    ppppppplVar10 = ppppppplStack_360;
  }
  if ((char)bStack_331 < '\0') {
    __ZdlPv(ppppppplStack_348);
    ppppppplVar10 = ppppppplStack_348;
  }
  if ((char)bStack_319 < '\0') {
    __ZdlPv(ppppppplStack_330);
    ppppppplVar10 = ppppppplStack_330;
  }
  if ((long)pppppplStack_140 < 0) {
    ppppppplVar10 = ppppppplStack_150;
    __ZdlPv(ppppppplStack_150);
  }
  if ((long)pppppplStack_2f0 < 0) {
    ppppppplVar10 = ppppppplStack_300;
    __ZdlPv(ppppppplStack_300);
  }
  if ((bVar6) && (cStack_301 < '\0')) {
    __ZdlPv(appppppplStack_318[0]);
    ppppppplVar10 = appppppplStack_318[0];
  }
  if ((long)pppppplStack_160 < 0) {
    ppppppplVar10 = ppppppplStack_170;
    __ZdlPv(ppppppplStack_170);
  }
  if ((long)pppppplStack_2c0 < 0) {
    ppppppplVar10 = ppppppplStack_2d0;
    __ZdlPv(ppppppplStack_2d0);
  }
  if ((bVar7) && (cStack_2d1 < '\0')) {
    __ZdlPv(appppppplStack_2e8[0]);
    ppppppplVar10 = appppppplStack_2e8[0];
  }
  if ((long)pppppplStack_180 < 0) {
    ppppppplVar10 = ppppppplStack_190;
    __ZdlPv(ppppppplStack_190);
  }
  if ((long)pppppplStack_290 < 0) {
    ppppppplVar10 = ppppppplStack_2a0;
    __ZdlPv(ppppppplStack_2a0);
  }
  if ((bVar8) && (cStack_2a1 < '\0')) {
    __ZdlPv(appppppplStack_2b8[0]);
    ppppppplVar10 = appppppplStack_2b8[0];
  }
  if ((long)pppppplStack_1a0 < 0) {
    ppppppplVar10 = ppppppplStack_1b0;
    __ZdlPv(ppppppplStack_1b0);
  }
  if ((long)pppppplStack_260 < 0) {
    ppppppplVar10 = ppppppplStack_270;
    __ZdlPv(ppppppplStack_270);
  }
  if ((bVar5) && (cStack_271 < '\0')) {
    __ZdlPv(appppppplStack_288[0]);
    ppppppplVar10 = appppppplStack_288[0];
  }
  if ((long)pppppplStack_1c0 < 0) {
    ppppppplVar10 = ppppppplStack_1d0;
    __ZdlPv(ppppppplStack_1d0);
  }
  if ((char)bStack_241 < '\0') {
    __ZdlPv(ppppppplStack_258);
    ppppppplVar10 = ppppppplStack_258;
  }
  if ((long)pppppplStack_1e0 < 0) {
    ppppppplVar10 = ppppppplStack_1f0;
    __ZdlPv(ppppppplStack_1f0);
  }
  if ((long)pppppplStack_200 < 0) {
    ppppppplVar10 = ppppppplStack_210;
    __ZdlPv(ppppppplStack_210);
  }
  if ((char)bStack_229 < '\0') {
    __ZdlPv(ppppppplStack_240);
    ppppppplVar10 = ppppppplStack_240;
  }
  if (cStack_211 < '\0') {
    __ZdlPv(appppppplStack_228[0]);
    ppppppplVar10 = appppppplStack_228[0];
  }
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppppppplStack_98);
    ppppppplVar10 = ppppppplStack_98;
  }
  return ppppppplVar10;
}



/* Entry: 10a42f18c; end: 10a42fbe7;  */

/* WARNING: Removing unreachable block (ram,0x00010a42f770) */
/* WARNING: Removing unreachable block (ram,0x00010a42f740) */
/* WARNING: Removing unreachable block (ram,0x00010a42f730) */
/* WARNING: Removing unreachable block (ram,0x00010a42f760) */
/* WARNING: Removing unreachable block (ram,0x00010a42f790) */

void FUN_10a42f18c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 **ppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *****pppppuVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 *puStack_340;
  ulong uStack_338;
  byte bStack_329;
  undefined8 ******ppppppuStack_328;
  ulong uStack_320;
  byte bStack_311;
  undefined8 ******ppppppuStack_310;
  ulong uStack_308;
  byte bStack_2f9;
  long alStack_2f8 [2];
  char cStack_2e1;
  undefined8 ******ppppppuStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  long alStack_2c8 [2];
  char cStack_2b1;
  undefined8 ******ppppppuStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long alStack_298 [2];
  char cStack_281;
  undefined8 ******ppppppuStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long alStack_268 [2];
  char cStack_251;
  undefined8 ******ppppppuStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 ******ppppppuStack_238;
  ulong uStack_230;
  byte bStack_221;
  undefined8 ******ppppppuStack_220;
  ulong uStack_218;
  byte bStack_209;
  undefined8 ******appppppuStack_208 [2];
  char cStack_1f1;
  undefined8 *****pppppuStack_1f0;
  undefined8 *****pppppuStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 ****ppppuStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 ******ppppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  FUN_10a3c829c(&ppppppuStack_78);
  uVar3 = uStack_70;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
  }
  FUN_10a003c90(appppppuStack_208,uVar3 + 7,&ppppppuStack_220);
  pppppppuVar2 = (undefined8 *******)appppppuStack_208[0];
  if (-1 < cStack_1f1) {
    pppppppuVar2 = appppppuStack_208;
  }
  if (uVar3 != 0) {
    pppppppuVar9 = (undefined8 *******)ppppppuStack_78;
    if (-1 < (char)bStack_61) {
      pppppppuVar9 = &ppppppuStack_78;
    }
    _memmove(pppppppuVar2,pppppppuVar9,uVar3);
  }
  puVar1 = (undefined4 *)((long)pppppppuVar2 + uVar3);
  *(undefined4 *)((long)puVar1 + 3) = 0x203a766f;
  *puVar1 = 0x6f66202c;
  *(undefined1 *)((long)puVar1 + 7) = 0;
  FUN_10a42b7bc(param_2);
  __ZNSt3__19to_stringEf(&ppppppuStack_220);
  pppppppuVar2 = (undefined8 *******)ppppppuStack_220;
  if (-1 < (char)bStack_209) {
    uStack_218 = (ulong)bStack_209;
    pppppppuVar2 = &ppppppuStack_220;
  }
  pppppppuVar9 = appppppuStack_208;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar9,pppppppuVar2,uStack_218);
  pppppuStack_1e8 = pppppppuVar9[1];
  pppppuStack_1f0 = *pppppppuVar9;
  pppppuStack_1e0 = pppppppuVar9[2];
  pppppppuVar9[1] = (undefined8 ******)0x0;
  pppppppuVar9[2] = (undefined8 ******)0x0;
  *pppppppuVar9 = (undefined8 ******)0x0;
  ppppppuVar10 = &pppppuStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar10,&UNK_10f644f26,10);
  ppppuStack_1c8 = ppppppuVar10[1];
  ppppuStack_1d0 = *ppppppuVar10;
  ppppuStack_1c0 = ppppppuVar10[2];
  ppppppuVar10[1] = (undefined8 *****)0x0;
  ppppppuVar10[2] = (undefined8 *****)0x0;
  *ppppppuVar10 = (undefined8 *****)0x0;
  FUN_10a42bae4(param_2);
  __ZNSt3__19to_stringEf(&ppppppuStack_238);
  pppppppuVar2 = (undefined8 *******)ppppppuStack_238;
  if (-1 < (char)bStack_221) {
    uStack_230 = (ulong)bStack_221;
    pppppppuVar2 = &ppppppuStack_238;
  }
  pppppuVar11 = &ppppuStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar11,pppppppuVar2,uStack_230);
  pppuStack_1a8 = pppppuVar11[1];
  pppuStack_1b0 = *pppppuVar11;
  pppuStack_1a0 = pppppuVar11[2];
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  if ((*(long **)(param_2 + 0x238) == *(long **)(param_2 + 0x230)) ||
     (lVar17 = **(long **)(param_2 + 0x230), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_250,&UNK_10f656650);
    bVar7 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_268,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_268;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f658086,0x17);
    uStack_248 = plVar12[1];
    ppppppuStack_250 = (undefined8 ******)*plVar12;
    uStack_240 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar7 = true;
  }
  uVar3 = uStack_248;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_250;
  if (-1 < (long)uStack_240) {
    uVar3 = uStack_240 >> 0x38;
    pppppppuVar2 = &ppppppuStack_250;
  }
  ppppuVar13 = &pppuStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar13,pppppppuVar2,uVar3);
  ppuStack_188 = ppppuVar13[1];
  ppuStack_190 = *ppppuVar13;
  ppuStack_180 = ppppuVar13[2];
  ppppuVar13[1] = (undefined8 ***)0x0;
  ppppuVar13[2] = (undefined8 ***)0x0;
  *ppppuVar13 = (undefined8 ***)0x0;
  if (((ulong)(*(long *)(param_2 + 0x238) - *(long *)(param_2 + 0x230)) < 0x11) ||
     (lVar17 = *(long *)(*(long *)(param_2 + 0x230) + 0x10), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_280,&UNK_10f656650);
    bVar6 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_298,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_298;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f65809e,0x17);
    uStack_278 = plVar12[1];
    ppppppuStack_280 = (undefined8 ******)*plVar12;
    uStack_270 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar6 = true;
  }
  uVar3 = uStack_278;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_280;
  if (-1 < (long)uStack_270) {
    uVar3 = uStack_270 >> 0x38;
    pppppppuVar2 = &ppppppuStack_280;
  }
  pppuVar14 = &ppuStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar14,pppppppuVar2,uVar3);
  puStack_168 = pppuVar14[1];
  puStack_170 = *pppuVar14;
  puStack_160 = pppuVar14[2];
  pppuVar14[1] = (undefined8 **)0x0;
  pppuVar14[2] = (undefined8 **)0x0;
  *pppuVar14 = (undefined8 **)0x0;
  if (((ulong)(*(long *)(param_2 + 0x238) - *(long *)(param_2 + 0x230)) < 0x21) ||
     (lVar17 = *(long *)(*(long *)(param_2 + 0x230) + 0x20), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_2b0,&UNK_10f656650);
    bVar5 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_2c8,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_2c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f6580b6,0x17);
    uStack_2a8 = plVar12[1];
    ppppppuStack_2b0 = (undefined8 ******)*plVar12;
    uStack_2a0 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar5 = true;
  }
  uVar3 = uStack_2a8;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_2b0;
  if (-1 < (long)uStack_2a0) {
    uVar3 = uStack_2a0 >> 0x38;
    pppppppuVar2 = &ppppppuStack_2b0;
  }
  ppuVar15 = &puStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar15,pppppppuVar2,uVar3);
  uStack_148 = ppuVar15[1];
  uStack_150 = *ppuVar15;
  lStack_140 = (long)ppuVar15[2];
  ppuVar15[1] = (undefined8 *)0x0;
  ppuVar15[2] = (undefined8 *)0x0;
  *ppuVar15 = (undefined8 *)0x0;
  if (((ulong)(*(long *)(param_2 + 0x238) - *(long *)(param_2 + 0x230)) < 0x31) ||
     (lVar17 = *(long *)(*(long *)(param_2 + 0x230) + 0x30), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_2e0,&UNK_10f656650);
    bVar4 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_2f8,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_2f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f6580ce,0x17);
    uStack_2d8 = plVar12[1];
    ppppppuStack_2e0 = (undefined8 ******)*plVar12;
    uStack_2d0 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar4 = true;
  }
  uVar3 = uStack_2d8;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_2e0;
  if (-1 < (long)uStack_2d0) {
    uVar3 = uStack_2d0 >> 0x38;
    pppppppuVar2 = &ppppppuStack_2e0;
  }
  puVar16 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,pppppppuVar2,uVar3);
  uStack_128 = puVar16[1];
  uStack_130 = *puVar16;
  lStack_120 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  puVar16 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,&UNK_10f6580e6,0x14);
  uStack_108 = puVar16[1];
  uStack_110 = *puVar16;
  uStack_100 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  __ZNSt3__19to_stringEi(&ppppppuStack_310,*(undefined1 *)(*(long *)(param_2 + 0x2a8) + 0x60));
  pppppppuVar2 = (undefined8 *******)ppppppuStack_310;
  if (-1 < (char)bStack_2f9) {
    uStack_308 = (ulong)bStack_2f9;
    pppppppuVar2 = &ppppppuStack_310;
  }
  puVar16 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,pppppppuVar2,uStack_308);
  uStack_e8 = puVar16[1];
  uStack_f0 = *puVar16;
  uStack_e0 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  puVar16 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,&UNK_10f6580fb,0x16);
  uStack_c8 = puVar16[1];
  uStack_d0 = *puVar16;
  uStack_c0 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  __ZNSt3__19to_stringEi(&ppppppuStack_328,*(undefined1 *)(*(long *)(param_2 + 0x2a8) + 0x61));
  pppppppuVar2 = (undefined8 *******)ppppppuStack_328;
  if (-1 < (char)bStack_311) {
    uStack_320 = (ulong)bStack_311;
    pppppppuVar2 = &ppppppuStack_328;
  }
  puVar16 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,pppppppuVar2,uStack_320);
  uStack_a8 = puVar16[1];
  uStack_b0 = *puVar16;
  uStack_a0 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  puVar16 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,&UNK_10f658112,0x10);
  uStack_88 = puVar16[1];
  uStack_90 = *puVar16;
  uStack_80 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  __ZNSt3__19to_stringEi(&puStack_340,*(undefined1 *)(param_2 + 0x730));
  ppuVar8 = (undefined1 **)puStack_340;
  if (-1 < (char)bStack_329) {
    uStack_338 = (ulong)bStack_329;
    ppuVar8 = &puStack_340;
  }
  puVar16 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,ppuVar8,uStack_338);
  uVar18 = *puVar16;
  param_1[1] = puVar16[1];
  *param_1 = uVar18;
  param_1[2] = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  if ((char)bStack_329 < '\0') {
    __ZdlPv(puStack_340);
  }
  if ((char)bStack_311 < '\0') {
    __ZdlPv(ppppppuStack_328);
  }
  if ((char)bStack_2f9 < '\0') {
    __ZdlPv(ppppppuStack_310);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if ((long)uStack_2d0 < 0) {
    __ZdlPv(ppppppuStack_2e0);
  }
  if ((bVar4) && (cStack_2e1 < '\0')) {
    __ZdlPv(alStack_2f8[0]);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if ((long)uStack_2a0 < 0) {
    __ZdlPv(ppppppuStack_2b0);
  }
  if ((bVar5) && (cStack_2b1 < '\0')) {
    __ZdlPv(alStack_2c8[0]);
  }
  if ((long)puStack_160 < 0) {
    __ZdlPv(puStack_170);
  }
  if ((long)uStack_270 < 0) {
    __ZdlPv(ppppppuStack_280);
  }
  if ((bVar6) && (cStack_281 < '\0')) {
    __ZdlPv(alStack_298[0]);
  }
  if ((long)ppuStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  if ((long)uStack_240 < 0) {
    __ZdlPv(ppppppuStack_250);
  }
  if ((bVar7) && (cStack_251 < '\0')) {
    __ZdlPv(alStack_268[0]);
  }
  if ((long)pppuStack_1a0 < 0) {
    __ZdlPv(pppuStack_1b0);
  }
  if ((char)bStack_221 < '\0') {
    __ZdlPv(ppppppuStack_238);
  }
  if ((long)ppppuStack_1c0 < 0) {
    __ZdlPv(ppppuStack_1d0);
  }
  if ((long)pppppuStack_1e0 < 0) {
    __ZdlPv(pppppuStack_1f0);
  }
  if ((char)bStack_209 < '\0') {
    __ZdlPv(ppppppuStack_220);
  }
  if (cStack_1f1 < '\0') {
    __ZdlPv(appppppuStack_208[0]);
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppppppuStack_78);
  }
  return;
}



/* Entry: 10a42fbe8; end: 10a42fbef;  */

/* WARNING: Removing unreachable block (ram,0x00010a42f770) */
/* WARNING: Removing unreachable block (ram,0x00010a42f740) */
/* WARNING: Removing unreachable block (ram,0x00010a42f730) */
/* WARNING: Removing unreachable block (ram,0x00010a42f760) */
/* WARNING: Removing unreachable block (ram,0x00010a42f790) */

void FUN_10a42fbe8(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 **ppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *****pppppuVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 *puStack_340;
  ulong uStack_338;
  byte bStack_329;
  undefined8 ******ppppppuStack_328;
  ulong uStack_320;
  byte bStack_311;
  undefined8 ******ppppppuStack_310;
  ulong uStack_308;
  byte bStack_2f9;
  long alStack_2f8 [2];
  char cStack_2e1;
  undefined8 ******ppppppuStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  long alStack_2c8 [2];
  char cStack_2b1;
  undefined8 ******ppppppuStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long alStack_298 [2];
  char cStack_281;
  undefined8 ******ppppppuStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long alStack_268 [2];
  char cStack_251;
  undefined8 ******ppppppuStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 ******ppppppuStack_238;
  ulong uStack_230;
  byte bStack_221;
  undefined8 ******ppppppuStack_220;
  ulong uStack_218;
  byte bStack_209;
  undefined8 ******appppppuStack_208 [2];
  char cStack_1f1;
  undefined8 *****pppppuStack_1f0;
  undefined8 *****pppppuStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 ****ppppuStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 ******ppppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  FUN_10a3c829c(&ppppppuStack_78);
  uVar3 = uStack_70;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
  }
  FUN_10a003c90(appppppuStack_208,uVar3 + 7,&ppppppuStack_220);
  pppppppuVar2 = (undefined8 *******)appppppuStack_208[0];
  if (-1 < cStack_1f1) {
    pppppppuVar2 = appppppuStack_208;
  }
  if (uVar3 != 0) {
    pppppppuVar9 = (undefined8 *******)ppppppuStack_78;
    if (-1 < (char)bStack_61) {
      pppppppuVar9 = &ppppppuStack_78;
    }
    _memmove(pppppppuVar2,pppppppuVar9,uVar3);
  }
  puVar1 = (undefined4 *)((long)pppppppuVar2 + uVar3);
  *(undefined4 *)((long)puVar1 + 3) = 0x203a766f;
  *puVar1 = 0x6f66202c;
  *(undefined1 *)((long)puVar1 + 7) = 0;
  FUN_10a42b7bc(param_2 + -0x10);
  __ZNSt3__19to_stringEf(&ppppppuStack_220);
  pppppppuVar2 = (undefined8 *******)ppppppuStack_220;
  if (-1 < (char)bStack_209) {
    uStack_218 = (ulong)bStack_209;
    pppppppuVar2 = &ppppppuStack_220;
  }
  pppppppuVar9 = appppppuStack_208;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar9,pppppppuVar2,uStack_218);
  pppppuStack_1e8 = pppppppuVar9[1];
  pppppuStack_1f0 = *pppppppuVar9;
  pppppuStack_1e0 = pppppppuVar9[2];
  pppppppuVar9[1] = (undefined8 ******)0x0;
  pppppppuVar9[2] = (undefined8 ******)0x0;
  *pppppppuVar9 = (undefined8 ******)0x0;
  ppppppuVar10 = &pppppuStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar10,&UNK_10f644f26,10);
  ppppuStack_1c8 = ppppppuVar10[1];
  ppppuStack_1d0 = *ppppppuVar10;
  ppppuStack_1c0 = ppppppuVar10[2];
  ppppppuVar10[1] = (undefined8 *****)0x0;
  ppppppuVar10[2] = (undefined8 *****)0x0;
  *ppppppuVar10 = (undefined8 *****)0x0;
  FUN_10a42bae4(param_2 + -0x10);
  __ZNSt3__19to_stringEf(&ppppppuStack_238);
  pppppppuVar2 = (undefined8 *******)ppppppuStack_238;
  if (-1 < (char)bStack_221) {
    uStack_230 = (ulong)bStack_221;
    pppppppuVar2 = &ppppppuStack_238;
  }
  pppppuVar11 = &ppppuStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar11,pppppppuVar2,uStack_230);
  pppuStack_1a8 = pppppuVar11[1];
  pppuStack_1b0 = *pppppuVar11;
  pppuStack_1a0 = pppppuVar11[2];
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  if ((*(long **)(param_2 + 0x228) == *(long **)(param_2 + 0x220)) ||
     (lVar17 = **(long **)(param_2 + 0x220), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_250,&UNK_10f656650);
    bVar7 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_268,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_268;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f658086,0x17);
    uStack_248 = plVar12[1];
    ppppppuStack_250 = (undefined8 ******)*plVar12;
    uStack_240 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar7 = true;
  }
  uVar3 = uStack_248;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_250;
  if (-1 < (long)uStack_240) {
    uVar3 = uStack_240 >> 0x38;
    pppppppuVar2 = &ppppppuStack_250;
  }
  ppppuVar13 = &pppuStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar13,pppppppuVar2,uVar3);
  ppuStack_188 = ppppuVar13[1];
  ppuStack_190 = *ppppuVar13;
  ppuStack_180 = ppppuVar13[2];
  ppppuVar13[1] = (undefined8 ***)0x0;
  ppppuVar13[2] = (undefined8 ***)0x0;
  *ppppuVar13 = (undefined8 ***)0x0;
  if (((ulong)(*(long *)(param_2 + 0x228) - *(long *)(param_2 + 0x220)) < 0x11) ||
     (lVar17 = *(long *)(*(long *)(param_2 + 0x220) + 0x10), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_280,&UNK_10f656650);
    bVar6 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_298,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_298;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f65809e,0x17);
    uStack_278 = plVar12[1];
    ppppppuStack_280 = (undefined8 ******)*plVar12;
    uStack_270 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar6 = true;
  }
  uVar3 = uStack_278;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_280;
  if (-1 < (long)uStack_270) {
    uVar3 = uStack_270 >> 0x38;
    pppppppuVar2 = &ppppppuStack_280;
  }
  pppuVar14 = &ppuStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar14,pppppppuVar2,uVar3);
  puStack_168 = pppuVar14[1];
  puStack_170 = *pppuVar14;
  puStack_160 = pppuVar14[2];
  pppuVar14[1] = (undefined8 **)0x0;
  pppuVar14[2] = (undefined8 **)0x0;
  *pppuVar14 = (undefined8 **)0x0;
  if (((ulong)(*(long *)(param_2 + 0x228) - *(long *)(param_2 + 0x220)) < 0x21) ||
     (lVar17 = *(long *)(*(long *)(param_2 + 0x220) + 0x20), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_2b0,&UNK_10f656650);
    bVar5 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_2c8,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_2c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f6580b6,0x17);
    uStack_2a8 = plVar12[1];
    ppppppuStack_2b0 = (undefined8 ******)*plVar12;
    uStack_2a0 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar5 = true;
  }
  uVar3 = uStack_2a8;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_2b0;
  if (-1 < (long)uStack_2a0) {
    uVar3 = uStack_2a0 >> 0x38;
    pppppppuVar2 = &ppppppuStack_2b0;
  }
  ppuVar15 = &puStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar15,pppppppuVar2,uVar3);
  uStack_148 = ppuVar15[1];
  uStack_150 = *ppuVar15;
  lStack_140 = (long)ppuVar15[2];
  ppuVar15[1] = (undefined8 *)0x0;
  ppuVar15[2] = (undefined8 *)0x0;
  *ppuVar15 = (undefined8 *)0x0;
  if (((ulong)(*(long *)(param_2 + 0x228) - *(long *)(param_2 + 0x220)) < 0x31) ||
     (lVar17 = *(long *)(*(long *)(param_2 + 0x220) + 0x30), lVar17 == 0)) {
    func_0x000107c2b054(&ppppppuStack_2e0,&UNK_10f656650);
    bVar4 = false;
  }
  else {
    __ZNSt3__19to_stringEi(alStack_2f8,*(undefined1 *)(lVar17 + 0x60));
    plVar12 = alStack_2f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f6580ce,0x17);
    uStack_2d8 = plVar12[1];
    ppppppuStack_2e0 = (undefined8 ******)*plVar12;
    uStack_2d0 = plVar12[2];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    bVar4 = true;
  }
  uVar3 = uStack_2d8;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_2e0;
  if (-1 < (long)uStack_2d0) {
    uVar3 = uStack_2d0 >> 0x38;
    pppppppuVar2 = &ppppppuStack_2e0;
  }
  puVar16 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,pppppppuVar2,uVar3);
  uStack_128 = puVar16[1];
  uStack_130 = *puVar16;
  lStack_120 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  puVar16 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,&UNK_10f6580e6,0x14);
  uStack_108 = puVar16[1];
  uStack_110 = *puVar16;
  uStack_100 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  __ZNSt3__19to_stringEi(&ppppppuStack_310,*(undefined1 *)(*(long *)(param_2 + 0x298) + 0x60));
  pppppppuVar2 = (undefined8 *******)ppppppuStack_310;
  if (-1 < (char)bStack_2f9) {
    uStack_308 = (ulong)bStack_2f9;
    pppppppuVar2 = &ppppppuStack_310;
  }
  puVar16 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,pppppppuVar2,uStack_308);
  uStack_e8 = puVar16[1];
  uStack_f0 = *puVar16;
  uStack_e0 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  puVar16 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,&UNK_10f6580fb,0x16);
  uStack_c8 = puVar16[1];
  uStack_d0 = *puVar16;
  uStack_c0 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  __ZNSt3__19to_stringEi(&ppppppuStack_328,*(undefined1 *)(*(long *)(param_2 + 0x298) + 0x61));
  pppppppuVar2 = (undefined8 *******)ppppppuStack_328;
  if (-1 < (char)bStack_311) {
    uStack_320 = (ulong)bStack_311;
    pppppppuVar2 = &ppppppuStack_328;
  }
  puVar16 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,pppppppuVar2,uStack_320);
  uStack_a8 = puVar16[1];
  uStack_b0 = *puVar16;
  uStack_a0 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  puVar16 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,&UNK_10f658112,0x10);
  uStack_88 = puVar16[1];
  uStack_90 = *puVar16;
  uStack_80 = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  __ZNSt3__19to_stringEi(&puStack_340,*(undefined1 *)(param_2 + 0x720));
  ppuVar8 = (undefined1 **)puStack_340;
  if (-1 < (char)bStack_329) {
    uStack_338 = (ulong)bStack_329;
    ppuVar8 = &puStack_340;
  }
  puVar16 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar16,ppuVar8,uStack_338);
  uVar18 = *puVar16;
  param_1[1] = puVar16[1];
  *param_1 = uVar18;
  param_1[2] = puVar16[2];
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  if ((char)bStack_329 < '\0') {
    __ZdlPv(puStack_340);
  }
  if ((char)bStack_311 < '\0') {
    __ZdlPv(ppppppuStack_328);
  }
  if ((char)bStack_2f9 < '\0') {
    __ZdlPv(ppppppuStack_310);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if ((long)uStack_2d0 < 0) {
    __ZdlPv(ppppppuStack_2e0);
  }
  if ((bVar4) && (cStack_2e1 < '\0')) {
    __ZdlPv(alStack_2f8[0]);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if ((long)uStack_2a0 < 0) {
    __ZdlPv(ppppppuStack_2b0);
  }
  if ((bVar5) && (cStack_2b1 < '\0')) {
    __ZdlPv(alStack_2c8[0]);
  }
  if ((long)puStack_160 < 0) {
    __ZdlPv(puStack_170);
  }
  if ((long)uStack_270 < 0) {
    __ZdlPv(ppppppuStack_280);
  }
  if ((bVar6) && (cStack_281 < '\0')) {
    __ZdlPv(alStack_298[0]);
  }
  if ((long)ppuStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  if ((long)uStack_240 < 0) {
    __ZdlPv(ppppppuStack_250);
  }
  if ((bVar7) && (cStack_251 < '\0')) {
    __ZdlPv(alStack_268[0]);
  }
  if ((long)pppuStack_1a0 < 0) {
    __ZdlPv(pppuStack_1b0);
  }
  if ((char)bStack_221 < '\0') {
    __ZdlPv(ppppppuStack_238);
  }
  if ((long)ppppuStack_1c0 < 0) {
    __ZdlPv(ppppuStack_1d0);
  }
  if ((long)pppppuStack_1e0 < 0) {
    __ZdlPv(pppppuStack_1f0);
  }
  if ((char)bStack_209 < '\0') {
    __ZdlPv(ppppppuStack_220);
  }
  if (cStack_1f1 < '\0') {
    __ZdlPv(appppppuStack_208[0]);
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppppppuStack_78);
  }
  return;
}



/* Entry: 10a42fbf0; end: 10a42fc4f;  */

void FUN_10a42fbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_3c = param_1;
  uStack_38 = param_2;
  uStack_34 = param_3;
  if (*(char *)(param_5 + 0x2f0) == '\x01') {
    FUN_10a42b498(param_5);
    *(undefined1 *)(param_5 + 0x2f0) = 0;
  }
  FUN_10a42fc50(param_4,param_5 + 0x2f8,&uStack_3c);
  return;
}



/* Entry: 10a42fc50; end: 10a42fc93;  */

void FUN_10a42fc50(undefined4 param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)(param_3 + 1);
  uStack_20 = *param_3;
  uStack_14 = param_1;
  FUN_10a438ed0(param_2 + 1,param_2 + 1 + *param_2 * 0xc,&uStack_20,&uStack_21);
  return;
}



/* Entry: 10a42fc94; end: 10a430117;  */

undefined ** FUN_10a42fc94(undefined **param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  puStack_40 = &UNK_10f658729;
  ppuStack_38 = (undefined **)0x4f;
  if (param_1[0x46] == param_1[0x47]) {
    ppuVar8 = &puStack_40;
    FUN_10a0edfc4();
    func_0x00010a05248c(&uStack_90);
    func_0x00010a05248c(&uStack_70);
    func_0x00010a216360(&ppuStack_60);
    func_0x00010a0523dc(&puStack_40);
    func_0x00010a05248c(&lStack_50);
    __Unwind_Resume();
    puVar12 = (undefined *)param_2[1];
    puVar11 = (undefined *)*param_2;
    *param_2 = 0;
    param_2[1] = 0;
    plVar6 = (long *)ppuVar8[1];
    ppuVar8[1] = puVar12;
    *ppuVar8 = puVar11;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar10 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return ppuVar8;
  }
  lVar10 = *(long *)param_1[0x46];
  lStack_50 = *(long *)(lVar10 + 0x28);
  ppuVar8 = *(undefined ***)(lVar10 + 0x30);
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar5 = ppuVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar3) {
        *ppuVar5 = *ppuVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_48 = ppuVar8;
  if (lStack_50 == 0) goto LAB_10a430058;
  *(char *)((long)param_1 + 0x6fa) = (char)param_2;
  if ((int)param_2 == 0) {
    if (param_1[0xe0] != (undefined *)0x0) {
      ppuVar5 = (undefined **)param_1[0xe1];
      param_1[0xe1] = (undefined *)0x0;
      param_1[0xe0] = (undefined *)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar1 = ppuVar5 + 1;
        do {
          puVar11 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
          param_1 = ppuVar5;
        }
      }
    }
    goto LAB_10a430058;
  }
  if (param_1[0xe0] != (undefined *)0x0) goto LAB_10a430058;
  puVar9 = (undefined8 *)0x1;
  FUN_10a088744(*(undefined8 *)(lStack_50 + 0x268));
  if (puVar9 == (undefined8 *)0x0) {
    ppuStack_38 = (undefined **)0x0;
    puStack_40 = (undefined *)0x0;
  }
  else {
    puStack_40 = (undefined *)*puVar9;
    ppuStack_38 = (undefined **)puVar9[1];
    if (ppuStack_38 != (undefined **)0x0) {
      ppuVar8 = ppuStack_38 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar3) {
          *ppuVar8 = *ppuVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  puVar11 = param_1[0x2e];
  ppuVar5 = (undefined **)0x3e8;
  __Znwm();
  ppuVar5[1] = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  *ppuVar5 = (undefined *)&PTR_FUN_110bbae38;
  ppuVar8 = ppuVar5 + 3;
  FUN_10a1dcc50(ppuVar8,puVar11,0,0);
  ppuStack_60 = ppuVar8;
  ppuStack_58 = ppuVar5;
  FUN_10a271af0(&ppuStack_60,ppuVar5 + 0xb,ppuVar8);
  ppuVar8 = ppuStack_60;
  *(byte *)(ppuStack_60 + 0x57) = *(byte *)(ppuStack_60 + 0x57) & 0xfe;
  if (param_1[0x47] == param_1[0x46]) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4300a4);
    (*pcVar4)();
  }
  lVar10 = *(long *)(*(long *)param_1[0x46] + 0x28);
  plVar6 = *(long **)(lVar10 + 0x268);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
LAB_10a42fe34:
    uStack_70 = 0;
  }
  else {
    (**(code **)(*plVar6 + 0xb0))();
    plVar7 = *(long **)(lVar10 + 0x268);
    if (plVar7 == (long *)0x0) goto LAB_10a42fe34;
    (**(code **)(*plVar7 + 0xb8))();
    uStack_70 = (long)plVar7 << 0x20;
  }
  uStack_70 = uStack_70 | (ulong)plVar6 & 0xffffffff;
  FUN_10a1ddfe4(ppuVar8,&uStack_70);
  *(undefined1 *)((long)ppuStack_60 + 0x304) = 0;
  *(undefined1 *)(ppuStack_60 + 1) = 1;
  *(undefined1 *)(ppuStack_60 + 100) = 2;
  *(undefined8 *)((long)ppuStack_60 + 0x32c) = 0;
  *(undefined8 *)((long)ppuStack_60 + 0x324) = 0;
  FUN_10a2c7dc0(&uStack_70,param_1[0x2e],&ppuStack_60);
  *(undefined1 *)(uStack_70 + 8) = 1;
  plVar6 = (long *)0x90;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  ppuVar8 = param_1 + 0xe0;
  *plVar6 = (long)&PTR_DAT_110bd9c58;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xe] = 0;
  plStack_80 = plVar6 + 3;
  *plStack_80 = (long)&PTR_DAT_110bd6cc8;
  plVar6[5] = (long)&PTR_DAT_110bd6d28;
  *(undefined1 *)(plVar6 + 0xf) = 0;
  *(undefined8 *)((long)plVar6 + 0x84) = 0x3f80000000000000;
  *(undefined8 *)((long)plVar6 + 0x7c) = 0;
  *(undefined1 *)((long)plVar6 + 0x8c) = 0;
  plStack_78 = plVar6;
  FUN_10a430118(ppuVar8,&plStack_80);
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  param_1 = (undefined **)*ppuVar8;
  ppuStack_88 = ppuStack_68;
  uStack_90 = uStack_70;
  if (ppuStack_68 != (undefined **)0x0) {
    ppuVar5 = ppuStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar3) {
        *ppuVar5 = *ppuVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_90);
  ppuVar5 = ppuStack_88;
  if (ppuStack_88 != (undefined **)0x0) {
    ppuVar1 = ppuStack_88 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
      param_1 = ppuVar5;
    }
  }
  puVar11 = *ppuVar8;
  *(undefined8 *)(puVar11 + 0x6c) = 0;
  *(undefined8 *)(puVar11 + 100) = 0;
  if (ppuStack_68 != (undefined **)0x0) {
    ppuVar8 = ppuStack_68 + 1;
    do {
      puVar11 = *ppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_68 + 0x10))(ppuStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_68);
      param_1 = ppuStack_68;
    }
  }
  ppuVar8 = ppuStack_58;
  if (ppuStack_58 != (undefined **)0x0) {
    ppuVar5 = ppuStack_58 + 1;
    do {
      puVar11 = *ppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar3) {
        *ppuVar5 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_58 + 0x10))(ppuStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      param_1 = ppuVar8;
    }
  }
  ppuVar5 = ppuStack_38;
  ppuVar8 = ppuStack_48;
  if (ppuStack_38 != (undefined **)0x0) {
    ppuVar1 = ppuStack_38 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_38 + 0x10))(ppuStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
      param_1 = ppuVar5;
      ppuVar8 = ppuStack_48;
    }
  }
LAB_10a430058:
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar5 = ppuVar8 + 1;
    do {
      puVar11 = *ppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar3) {
        *ppuVar5 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      param_1 = ppuVar8;
    }
  }
  return param_1;
}



/* Entry: 10a430118; end: 10a43030f;  */

undefined8 * FUN_10a430118(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a430310; end: 10a4303cf;  */

void FUN_10a430310(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 uStack_d9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  plVar4 = *(long **)(param_1 + 0x2a8);
  puStack_30 = &UNK_10f658123;
  uStack_28 = 0x4e;
  if (plVar4 != (long *)0x0) {
    plStack_38 = (long *)param_2[1];
    uStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0x48))(plVar4,&uStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  ppuVar5 = &puStack_30;
  FUN_10a0edfc4();
  func_0x00010a05248c(&uStack_40);
  __Unwind_Resume(ppuVar5);
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &UNK_10f65817d;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0x100000064;
  puStack_b0 = &UNK_10f656650;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f656650;
  uStack_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10a4304d8();
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &UNK_10f658182;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0x100000064;
  puStack_b0 = &UNK_10f656650;
  puStack_a0 = (undefined *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_d9 = 0;
  FUN_10a430530(ppuVar5,&puStack_d8,&uStack_d9);
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &UNK_10f65818e;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0x100000064;
  puStack_b0 = &UNK_10f656650;
  puStack_a0 = (undefined *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_d9 = 1;
  FUN_10a430530(ppuVar5,&puStack_d8,&uStack_d9);
  FUN_10a003ff4(ppuVar5);
  return;
}



/* Entry: 10a4303d0; end: 10a4304d7;  */

void FUN_10a4303d0(undefined8 param_1)

{
  undefined1 uStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65817d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f656650;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4304d8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f658182;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f656650;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a430530(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65818e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f656650;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10a430530(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a4304d8; end: 10a43052f;  */

ulong FUN_10a4304d8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a430530; end: 10a43068f;  */

ulong FUN_10a430530(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a451098(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a430690; end: 10a4306e7;  */

ulong FUN_10a430690(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a4306e8; end: 10a43097f;  */

ulong FUN_10a4306e8(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a45110c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a430980; end: 10a430b0b;  */

void FUN_10a430980(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6581d9;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a430ab4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6581eb;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a430b0c(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6581f0;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a430b0c(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6581f8;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 2;
  FUN_10a430b0c(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a430b0c; end: 10a430b63;  */

ulong FUN_10a430b0c(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a451180(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a430b64; end: 10a430c57;  */

undefined1  [16] FUN_10a430b64(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f658903;
  return auVar1;
}



/* Entry: 10a430c58; end: 10a430dab;  */

void FUN_10a430c58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f657910,6);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f656650;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a430dac(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f657be6;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x8d;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  FUN_10a4512f0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f657b5c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  func_0x00010a451594(uVar1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6581fd;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f656650;
  uStack_38 = 0;
  FUN_10a451768(uVar1,&puStack_98);
  FUN_10a45193c(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a430dac; end: 10a430e83;  */

/* WARNING: Removing unreachable block (ram,0x00010a430e44) */

undefined1  [16] FUN_10a430dac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f658903,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a4511f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a430e84; end: 10a4311e3;  */

void FUN_10a430e84(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f657910,6);
  func_0x000109887da8(appuStack_c8,&UNK_10f658915,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd89c0;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd89c0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd7f00;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657bf7,FUN_10a4519f8,FUN_10a451ab4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657c08,FUN_10a451c44,FUN_10a451d00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f658209,FUN_10a451dc0,FUN_10a451e7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f658219,FUN_10a451f6c,FUN_10a452028);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f415c4c,FUN_10a4520e8,FUN_10a4521a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f645894,FUN_10a452294,FUN_10a452350);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f658915,0x18);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4311c8);
  (*pcVar6)();
}



/* Entry: 10a4311e4; end: 10a431297;  */

undefined1  [16] FUN_10a4311e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f65892e;
  return auVar1;
}



/* Entry: 10a431298; end: 10a431743;  */

void FUN_10a431298(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f65892e,0x10);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9e40;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110bd9e40;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a431724;
    FUN_10a054dac(param_1,&UNK_10f65822b,FUN_10a452410,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a431724;
    FUN_10a054dac(param_1,&UNK_10f598a4e,FUN_10a4525cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f658233,FUN_10a452778,0);
  }
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f65823f;
  puStack_88 = &UNK_10f656650;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x16c;
  uStack_60._0_4_ = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar7 = param_1;
  FUN_10a452828(param_1,&ppuStack_b0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&DAT_10f65824a;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000064;
  puStack_88 = &UNK_10f658259;
  uStack_80 = 0x32;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x16c;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10a452828();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65828c,FUN_10a452a54,FUN_10a452b0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d0f37,FUN_10a452bcc,FUN_10a452cc0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6582a2,FUN_10a452d88,FUN_10a452e44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2dbd5f,FUN_10a452f30,FUN_10a452fec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6582ab,FUN_10a4530d0,FUN_10a4531a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6582bb,FUN_10a453258,FUN_10a453314);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f65892e,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a431724:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a431728);
  (*pcVar6)();
}



/* Entry: 10a431744; end: 10a4318bb;  */

void FUN_10a431744(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582c6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582cf;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4318bc(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582d5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4318bc();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f650598;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4318bc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a4318bc; end: 10a43195f;  */

undefined8 * FUN_10a4318bc(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a431960);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a431960; end: 10a431a77;  */

void FUN_10a431960(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582dc;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a431a78(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582e8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 0;
  FUN_10a431ad0(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582f2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10a431ad0(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a431a78; end: 10a431acf;  */

ulong FUN_10a431a78(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a431ad0; end: 10a431b27;  */

ulong FUN_10a431ad0(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a453400(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a431b28; end: 10a431c3f;  */

void FUN_10a431b28(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582f8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a431c40(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582cf;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 0;
  FUN_10a431c98(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6582d5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xb6;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10a431c98(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a431c40; end: 10a431c97;  */

ulong FUN_10a431c40(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a431c98; end: 10a431cef;  */

ulong FUN_10a431c98(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a453474(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a431cf0; end: 10a431e73;  */

undefined8 * FUN_10a431cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  param_1[0x49] = &PTR_FUN_110c383b8;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0x100;
  puVar2 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bd7140,param_2,param_3);
  *puVar2 = &PTR_FUN_110bd6e40;
  puVar2[2] = &PTR_FUN_110bd6f88;
  puVar2[7] = &PTR_DAT_110bd6fe0;
  puVar2[0xd] = &PTR_DAT_110bd7000;
  puVar2[0x49] = &PTR_DAT_110bd7100;
  puVar2[0x16] = &PTR_DAT_110bd7070;
  puVar2[0x17] = &PTR_FUN_110bd70a0;
  *(undefined1 *)(puVar2 + 0x3e) = 0;
  *(undefined1 *)((long)puVar2 + 500) = 0;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bcfba8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = &PTR_FUN_110c6a8d8;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[6] = &PTR_FUN_110c6a940;
  uVar1 = uRam00000001138353e0;
  *(undefined8 *)((long)puVar2 + 0x44) = uRam00000001138353e8;
  *(undefined8 *)((long)puVar2 + 0x3c) = uVar1;
  param_1[0x3f] = puVar2 + 3;
  param_1[0x40] = puVar2;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 1;
  *(undefined8 *)((long)param_1 + 0x21c) = 0x44f0000044870000;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[0x45] = puVar2 + 3;
  param_1[0x46] = puVar2;
  FUN_10a5cf1fc(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



/* Entry: 10a431e74; end: 10a43211f;  */

void FUN_10a431e74(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a4534e8(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110bd9d78;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a431fd8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a431fd8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a432120(lVar10,param_2 + 0x1f8);
  FUN_10a4322cc(lVar10,param_2 + 0x20c);
  *(undefined4 *)(lVar10 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  FUN_10a4324a4(lVar10);
  func_0x00010a43235c(lVar10,*(undefined4 *)(param_2 + 0x224));
  FUN_10a4323e8(*(undefined4 *)(param_2 + 0x21c),*(undefined4 *)(param_2 + 0x220),lVar10);
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a432120; end: 10a4322cb;  */

void FUN_10a432120(float param_1,float param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plStack_38;
  long *plStack_30;
  
  lVar7 = *param_4;
  if (lVar7 == 0) {
    plVar6 = (long *)0x50;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bcfba8;
    plVar6[4] = 0;
    plVar6[5] = 0;
    *(undefined1 *)(plVar6 + 7) = 0;
    plVar6[6] = (long)&PTR_FUN_110c6a940;
    uVar3 = uRam00000001138353e0;
    *(undefined8 *)((long)plVar6 + 0x44) = uRam00000001138353e8;
    *(undefined8 *)((long)plVar6 + 0x3c) = uVar3;
    plStack_38 = plVar6 + 3;
    *plStack_38 = (long)&PTR_FUN_110c6a8d8;
    plStack_30 = plVar6;
    FUN_10a1ede50(param_3 + 0x1f8,&plStack_38);
    if (plStack_30 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_30 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    func_0x00010acae698(lVar7);
    if ((param_1 < 0.05) || (param_2 < 0.05)) {
      FUN_10a0ee900(&plStack_38,&UNK_10f658357,0x45);
      FUN_10a0029c0(&plStack_38);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4322b0);
      (*pcVar4)();
    }
    uVar5 = *(ulong *)(param_3 + 0x1f8);
    func_0x00010acae644(uVar5,lVar7);
    if ((uVar5 & 1) != 0) {
      return;
    }
    plVar6 = (long *)0x50;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bcfba8;
    plVar6[4] = 0;
    plVar6[5] = 0;
    *(undefined1 *)(plVar6 + 7) = 0;
    plStack_38 = plVar6 + 3;
    *plStack_38 = (long)&PTR_FUN_110c6a8d8;
    plVar6[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar6 + 0x3c) = *(undefined8 *)(lVar7 + 0x24);
    *(undefined8 *)((long)plVar6 + 0x44) = *(undefined8 *)(lVar7 + 0x2c);
    plStack_30 = plVar6;
    FUN_10a1ede50(param_3 + 0x1f8,&plStack_38);
    if (plStack_30 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_30 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar6 = plStack_30;
  if (lVar7 == 0) {
    (**(code **)(*plStack_30 + 0x10))(plStack_30);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  return;
}



/* Entry: 10a4322cc; end: 10a4323e7;  */

void FUN_10a4322cc(float param_1,float param_2,long param_3,float *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  lVar3 = *(long *)(param_3 + 0x1f8);
  func_0x00010acae6ac(lVar3);
  fVar13 = param_1 + param_1;
  fVar5 = param_2;
  func_0x00010acae698(lVar3);
  fVar4 = *param_4;
  fVar6 = param_4[1];
  if ((ABS(fVar4 + fVar13 / param_1) < 1e-06) && (ABS(fVar6 + (param_2 + param_2) / fVar5) < 1e-06))
  {
    return;
  }
  fVar5 = fVar4;
  fVar13 = fVar6;
  func_0x00010acae6ac();
  uVar7 = NEON_fmov(0x3f800000,4);
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar4 = (fVar4 + (float)uVar7) * 0.5;
  fVar6 = (fVar6 + fVar8) * 0.5;
  pauVar1 = (undefined1 (*) [12])(lVar3 + 0x24);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar3 + 0x2c) >> 0x20);
  fVar9 = (float)*(undefined8 *)*pauVar1;
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar12._12_4_ = fVar11;
  auVar12._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar11;
  auVar2._0_12_ = *pauVar1;
  auVar12 = NEON_ext(auVar12,auVar2,8,1);
  fVar5 = (fVar5 - (((float)uVar7 - fVar4) * fVar9 + fVar4 * auVar12._0_4_)) -
          (fVar9 + auVar12._0_4_) * 0.5;
  fVar4 = (fVar13 - ((fVar8 - fVar6) * fVar10 + fVar6 * auVar12._4_4_)) -
          (fVar10 + auVar12._4_4_) * 0.5;
  *(ulong *)(lVar3 + 0x2c) = CONCAT44(fVar11 + fVar4,(float)*(undefined8 *)(lVar3 + 0x2c) + fVar5);
  *(ulong *)(lVar3 + 0x24) = CONCAT44(fVar10 + fVar4,fVar9 + fVar5);
  return;
}



/* Entry: 10a4323e8; end: 10a432483;  */

void FUN_10a4323e8(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fStack_48;
  float fStack_44;
  
  fVar1 = 1.0;
  if (1.0 <= param_1) {
    fVar1 = param_1;
  }
  fVar2 = 1.0;
  if (1.0 <= param_2) {
    fVar2 = param_2;
  }
  FUN_10a4331f8();
  *(float *)(param_3 + 0x21c) = fVar1;
  *(float *)(param_3 + 0x220) = fVar2;
  fVar1 = param_1;
  fVar2 = param_2;
  FUN_10a4331f8(param_3);
  if ((1e-06 <= ABS(param_1 - fVar1)) || (1e-06 <= ABS(param_2 - fVar2))) {
    fStack_48 = param_1 / fVar1;
    fStack_44 = param_2 / fVar2;
    FUN_10a433290(*(undefined8 *)(param_3 + 0x168),&fStack_48);
  }
  return;
}



/* Entry: 10a432484; end: 10a4324a3;  */

void FUN_10a432484(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0xe9) {
    *(undefined4 *)(param_1 + 0x218) = 1;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x124) {
    lVar7 = *(long *)(param_1 + 0x168);
    for (lVar5 = *(long *)(lVar7 + 0x158); lVar5 != lVar7 + 0x150; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 0xb0);
        (**(code **)(*plVar6 + 0x18))(plVar6,0x49f6491c8e4b2468);
        if (plVar6 != (long *)0x0) goto LAB_10a43256c;
      }
    }
    plVar6 = (long *)0x0;
LAB_10a43256c:
    plStack_50 = plVar6;
    FUN_10a438f68(&plStack_68,&plStack_50,&plStack_48);
  }
  else {
    FUN_10a432b64(&plStack_50,*(undefined8 *)(param_1 + 0x168));
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
    plStack_68 = plStack_50;
    uStack_58 = uStack_40;
    plStack_60 = plStack_48;
  }
  if ((plStack_68 == plStack_60) || (plVar6 = (long *)*plStack_68, plVar6 == (long *)0x0)) {
LAB_10a43270c:
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((*(uint *)(param_1 + 0x214) & 0xfffffffe) != 2) {
      FUN_10a4329e0(param_1);
      goto LAB_10a43270c;
    }
    if ((char)plVar6[0x51] == '\x01') {
      if ((((long *)plVar6[0x46] != (long *)plVar6[0x47]) &&
          (lVar5 = *(long *)plVar6[0x46], lVar5 != 0)) && (*(long *)(lVar5 + 0x28) != 0)) {
        plVar4 = plVar6;
        FUN_10a42f018();
        if ((long *)plVar4[1] == (long *)*plVar4) goto LAB_10a4327b0;
        lVar5 = *(long *)(*(long *)*plVar4 + 0x28);
        FUN_10a1f2d1c(&plStack_50,lVar5);
        lVar7 = *(long *)(*(long *)(param_1 + 0x170) + 0xbf8);
        if (((0xe0 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) ||
            (*(int *)(param_1 + 0x214) != 3)) || (lVar7 == lVar5)) {
          plVar4 = *(long **)(lVar5 + 0x268);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0xb8))();
          }
          if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
            *(int *)(param_1 + 0x23c) = (int)plVar6[0x4e];
            *(undefined1 *)(param_1 + 0x240) = 1;
          }
          fVar9 = 1.0;
          if ((*(int *)(param_1 + 0x214) == 3) && (fVar9 = 1.0, lVar7 == lVar5)) {
            fVar8 = *(float *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8e8) + 0x50);
            fVar9 = 1.0;
            if (1.0 <= fVar8) {
              fVar9 = fVar8;
            }
          }
          *(float *)(param_1 + 0x238) = fVar9;
          if (0x14e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
            fVar9 = fVar9 * *(float *)(plStack_50 + 0x60);
            *(float *)(param_1 + 0x238) = fVar9;
          }
          fVar9 = (float)((ulong)plVar4 & 0xffffffff) / fVar9;
          plVar6 = plStack_68;
          fVar8 = fVar9;
          if (((*(int *)(param_1 + 0x214) == 3) && (lVar7 != lVar5)) &&
             (fVar8 = 1280.0, *(char *)((long)plStack_50 + 0x2fc) != '\0')) {
            fVar8 = fVar9;
          }
          for (; plVar6 != plStack_60; plVar6 = plVar6 + 1) {
            lVar5 = *plVar6;
            if (lVar5 != 0) {
              if (*(float *)(lVar5 + 0x270) != fVar8) {
                *(undefined1 *)(lVar5 + 0x2f0) = 1;
              }
              *(float *)(lVar5 + 0x270) = fVar8;
            }
          }
        }
        if (plStack_48 != (long *)0x0) {
          plVar6 = plStack_48 + 1;
          do {
            lVar5 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
      goto LAB_10a43270c;
    }
  }
  func_0x000107c2b054(&plStack_50,&UNK_10f658303);
  FUN_10a0029c0(&plStack_50);
LAB_10a4327b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4327b4);
  (*pcVar3)();
}



/* Entry: 10a4324a4; end: 10a43280b;  */

void FUN_10a4324a4(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x124) {
    lVar7 = *(long *)(param_1 + 0x168);
    for (lVar5 = *(long *)(lVar7 + 0x158); lVar5 != lVar7 + 0x150; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 0xb0);
        (**(code **)(*plVar6 + 0x18))(plVar6,0x49f6491c8e4b2468);
        if (plVar6 != (long *)0x0) goto LAB_10a43256c;
      }
    }
    plVar6 = (long *)0x0;
LAB_10a43256c:
    plStack_50 = plVar6;
    FUN_10a438f68(&plStack_68,&plStack_50,&plStack_48);
  }
  else {
    FUN_10a432b64(&plStack_50,*(undefined8 *)(param_1 + 0x168));
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
    plStack_68 = plStack_50;
    uStack_58 = uStack_40;
    plStack_60 = plStack_48;
  }
  if ((plStack_68 == plStack_60) || (plVar6 = (long *)*plStack_68, plVar6 == (long *)0x0)) {
LAB_10a43270c:
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((*(uint *)(param_1 + 0x214) & 0xfffffffe) != 2) {
      FUN_10a4329e0(param_1);
      goto LAB_10a43270c;
    }
    if ((char)plVar6[0x51] == '\x01') {
      if ((((long *)plVar6[0x46] != (long *)plVar6[0x47]) &&
          (lVar5 = *(long *)plVar6[0x46], lVar5 != 0)) && (*(long *)(lVar5 + 0x28) != 0)) {
        plVar4 = plVar6;
        FUN_10a42f018();
        if ((long *)plVar4[1] == (long *)*plVar4) goto LAB_10a4327b0;
        lVar5 = *(long *)(*(long *)*plVar4 + 0x28);
        FUN_10a1f2d1c(&plStack_50,lVar5);
        lVar7 = *(long *)(*(long *)(param_1 + 0x170) + 0xbf8);
        if (((0xe0 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) ||
            (*(int *)(param_1 + 0x214) != 3)) || (lVar7 == lVar5)) {
          plVar4 = *(long **)(lVar5 + 0x268);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0xb8))();
          }
          if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
            *(int *)(param_1 + 0x23c) = (int)plVar6[0x4e];
            *(undefined1 *)(param_1 + 0x240) = 1;
          }
          fVar9 = 1.0;
          if ((*(int *)(param_1 + 0x214) == 3) && (fVar9 = 1.0, lVar7 == lVar5)) {
            fVar8 = *(float *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8e8) + 0x50);
            fVar9 = 1.0;
            if (1.0 <= fVar8) {
              fVar9 = fVar8;
            }
          }
          *(float *)(param_1 + 0x238) = fVar9;
          if (0x14e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
            fVar9 = fVar9 * *(float *)(plStack_50 + 0x60);
            *(float *)(param_1 + 0x238) = fVar9;
          }
          fVar9 = (float)((ulong)plVar4 & 0xffffffff) / fVar9;
          plVar6 = plStack_68;
          fVar8 = fVar9;
          if (((*(int *)(param_1 + 0x214) == 3) && (lVar7 != lVar5)) &&
             (fVar8 = 1280.0, *(char *)((long)plStack_50 + 0x2fc) != '\0')) {
            fVar8 = fVar9;
          }
          for (; plVar6 != plStack_60; plVar6 = plVar6 + 1) {
            lVar5 = *plVar6;
            if (lVar5 != 0) {
              if (*(float *)(lVar5 + 0x270) != fVar8) {
                *(undefined1 *)(lVar5 + 0x2f0) = 1;
              }
              *(float *)(lVar5 + 0x270) = fVar8;
            }
          }
        }
        if (plStack_48 != (long *)0x0) {
          plVar6 = plStack_48 + 1;
          do {
            lVar5 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
      goto LAB_10a43270c;
    }
  }
  func_0x000107c2b054(&plStack_50,&UNK_10f658303);
  FUN_10a0029c0(&plStack_50);
LAB_10a4327b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4327b4);
  (*pcVar3)();
}



/* Entry: 10a43280c; end: 10a43287b;  */

void FUN_10a43280c(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18) < 0xe9) {
    *(undefined4 *)(param_1 + 0x1b0) = 1;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18) < 0x124) {
    lVar7 = *(long *)(param_1 + 0x100);
    for (lVar5 = *(long *)(lVar7 + 0x158); lVar5 != lVar7 + 0x150; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 0xb0);
        (**(code **)(*plVar6 + 0x18))(plVar6,0x49f6491c8e4b2468);
        if (plVar6 != (long *)0x0) goto LAB_10a43256c;
      }
    }
    plVar6 = (long *)0x0;
LAB_10a43256c:
    plStack_50 = plVar6;
    FUN_10a438f68(&plStack_68,&plStack_50,&plStack_48);
  }
  else {
    FUN_10a432b64(&plStack_50,*(undefined8 *)(param_1 + 0x100));
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
    plStack_68 = plStack_50;
    uStack_58 = uStack_40;
    plStack_60 = plStack_48;
  }
  if ((plStack_68 == plStack_60) || (plVar6 = (long *)*plStack_68, plVar6 == (long *)0x0)) {
LAB_10a43270c:
    if (plStack_68 != (long *)0x0) {
      plStack_60 = plStack_68;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if ((*(uint *)(param_1 + 0x1ac) & 0xfffffffe) != 2) {
      FUN_10a4329e0(param_1 + -0x68);
      goto LAB_10a43270c;
    }
    if ((char)plVar6[0x51] == '\x01') {
      if ((((long *)plVar6[0x46] != (long *)plVar6[0x47]) &&
          (lVar5 = *(long *)plVar6[0x46], lVar5 != 0)) && (*(long *)(lVar5 + 0x28) != 0)) {
        plVar4 = plVar6;
        FUN_10a42f018();
        if ((long *)plVar4[1] == (long *)*plVar4) goto LAB_10a4327b0;
        lVar5 = *(long *)(*(long *)*plVar4 + 0x28);
        FUN_10a1f2d1c(&plStack_50,lVar5);
        lVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0xbf8);
        if (((0xe0 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) ||
            (*(int *)(param_1 + 0x1ac) != 3)) || (lVar7 == lVar5)) {
          plVar4 = *(long **)(lVar5 + 0x268);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0xb8))();
          }
          if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
            *(int *)(param_1 + 0x1d4) = (int)plVar6[0x4e];
            *(undefined1 *)(param_1 + 0x1d8) = 1;
          }
          fVar9 = 1.0;
          if ((*(int *)(param_1 + 0x1ac) == 3) && (fVar9 = 1.0, lVar7 == lVar5)) {
            fVar8 = *(float *)(*(long *)(*(long *)(param_1 + 0x108) + 0x8e8) + 0x50);
            fVar9 = 1.0;
            if (1.0 <= fVar8) {
              fVar9 = fVar8;
            }
          }
          *(float *)(param_1 + 0x1d0) = fVar9;
          if (0x14e < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) {
            fVar9 = fVar9 * *(float *)(plStack_50 + 0x60);
            *(float *)(param_1 + 0x1d0) = fVar9;
          }
          fVar9 = (float)((ulong)plVar4 & 0xffffffff) / fVar9;
          plVar6 = plStack_68;
          fVar8 = fVar9;
          if (((*(int *)(param_1 + 0x1ac) == 3) && (lVar7 != lVar5)) &&
             (fVar8 = 1280.0, *(char *)((long)plStack_50 + 0x2fc) != '\0')) {
            fVar8 = fVar9;
          }
          for (; plVar6 != plStack_60; plVar6 = plVar6 + 1) {
            lVar5 = *plVar6;
            if (lVar5 != 0) {
              if (*(float *)(lVar5 + 0x270) != fVar8) {
                *(undefined1 *)(lVar5 + 0x2f0) = 1;
              }
              *(float *)(lVar5 + 0x270) = fVar8;
            }
          }
        }
        if (plStack_48 != (long *)0x0) {
          plVar6 = plStack_48 + 1;
          do {
            lVar5 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
      goto LAB_10a43270c;
    }
  }
  func_0x000107c2b054(&plStack_50,&UNK_10f658303);
  FUN_10a0029c0(&plStack_50);
LAB_10a4327b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4327b4);
  (*pcVar3)();
}



/* Entry: 10a43287c; end: 10a4329d7;  */

void FUN_10a43287c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (((char)param_1[0x41] == '\x01') && (lVar2 = param_1[0x3f], lVar2 != 0)) {
      unaff_x21 = (long *)param_1[0x2d];
      unaff_x20 = (long *)param_1[0x2e];
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(uint *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      uVar6 = *(uint *)(lVar2 + 0x30);
      *(undefined4 *)((long)register0x00000008 + -0x84) = uVar3;
      *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar4;
      *(undefined4 *)((long)register0x00000008 + -0x90) = uVar5;
      *(ulong *)((long)register0x00000008 + -0x8c) = (ulong)uVar4;
      *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar5;
      *(ulong *)((long)register0x00000008 + -0x98) = (ulong)uVar6;
      *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar3;
      *(ulong *)((long)register0x00000008 + -0xa4) = (ulong)uVar6;
      unaff_x19 = unaff_x21[0x28];
      if ((*(byte *)(unaff_x19 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(unaff_x19);
      }
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f8000003f800000;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3f66666600000000;
      param_1 = unaff_x20;
      plVar1 = unaff_x21;
      FUN_10a3df648(unaff_x20,unaff_x21,(undefined1 *)((long)register0x00000008 + -0x78),8);
      if (plVar1 != (long *)0x0) {
        unaff_x22 = (long)plVar1 << 3;
        plVar1 = param_1;
        do {
          unaff_x20 = plVar1 + 1;
          unaff_x21 = (long *)*plVar1;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          param_1 = unaff_x21;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          unaff_x22 = unaff_x22 + -8;
          plVar1 = unaff_x20;
        } while (unaff_x22 != 0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10a4329d8;
    ___stack_chk_fail();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10a4329d8; end: 10a4329df;  */

void FUN_10a4329d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  while( true ) {
    plVar1 = param_1 + -0xd;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (((char)param_1[0x34] == '\x01') && (lVar3 = param_1[0x32], lVar3 != 0)) {
      unaff_x21 = (long *)param_1[0x20];
      unaff_x20 = (long *)param_1[0x21];
      uVar4 = *(undefined4 *)(lVar3 + 0x24);
      uVar5 = *(uint *)(lVar3 + 0x28);
      uVar6 = *(undefined4 *)(lVar3 + 0x2c);
      uVar7 = *(uint *)(lVar3 + 0x30);
      *(undefined4 *)((long)register0x00000008 + -0x84) = uVar4;
      *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar5;
      *(undefined4 *)((long)register0x00000008 + -0x90) = uVar6;
      *(ulong *)((long)register0x00000008 + -0x8c) = (ulong)uVar5;
      *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar6;
      *(ulong *)((long)register0x00000008 + -0x98) = (ulong)uVar7;
      *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar4;
      *(ulong *)((long)register0x00000008 + -0xa4) = (ulong)uVar7;
      unaff_x19 = unaff_x21[0x28];
      if ((*(byte *)(unaff_x19 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(unaff_x19);
      }
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f8000003f800000;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3f66666600000000;
      plVar1 = unaff_x20;
      plVar2 = unaff_x21;
      FUN_10a3df648(unaff_x20,unaff_x21,(undefined1 *)((long)register0x00000008 + -0x78),8);
      if (plVar2 != (long *)0x0) {
        unaff_x22 = (long)plVar2 << 3;
        plVar2 = plVar1;
        do {
          unaff_x20 = plVar2 + 1;
          unaff_x21 = (long *)*plVar2;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x90),
                        (undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0x9c),
                        (undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          plVar1 = unaff_x21;
          FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,(undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0x84),
                        (undefined1 *)((long)register0x00000008 + -0xc0),0);
          unaff_x22 = unaff_x22 + -8;
          plVar2 = unaff_x20;
        } while (unaff_x22 != 0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10a4329d8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = plVar1;
  }
  return;
}



/* Entry: 10a4329e0; end: 10a432b63;  */

void FUN_10a4329e0(long *param_1,long **param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[0x48] == '\x01') {
    fVar4 = *(float *)((long)param_1 + 0x23c);
    *(undefined1 *)(param_1 + 0x48) = 0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x124) {
      lVar2 = param_1[0x2d];
      for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
          (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
          if (plVar1 != (long *)0x0) goto LAB_10a432aac;
        }
      }
      plVar1 = (long *)0x0;
LAB_10a432aac:
      param_2 = &plStack_60;
      plStack_60 = plVar1;
      FUN_10a438f68(&plStack_78,param_2,&plStack_58);
      plVar1 = plStack_78;
    }
    else {
      param_2 = (long **)param_1[0x2d];
      FUN_10a432b64(&plStack_60,param_2);
      plStack_78 = plStack_60;
      uStack_68 = uStack_50;
      plStack_70 = plStack_58;
      plVar1 = plStack_60;
    }
    for (; plVar1 != plStack_70; plVar1 = plVar1 + 1) {
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        if (*(float *)(lVar3 + 0x270) != fVar4) {
          *(undefined1 *)(lVar3 + 0x2f0) = 1;
        }
        *(float *)(lVar3 + 0x270) = fVar4;
      }
    }
    param_1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plStack_70 = plStack_78;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (plStack_78 != (long *)0x0) {
      plStack_70 = plStack_78;
      __ZdlPv();
    }
    __Unwind_Resume();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a45360c(param_2,param_1,0);
    return;
  }
  return;
}



/* Entry: 10a432b64; end: 10a432bb3;  */

void FUN_10a432b64(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a45360c(param_2,param_1,0);
  return;
}



/* Entry: 10a432bb4; end: 10a432c07;  */

void FUN_10a432bb4(long *param_1,long **param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[0x48] == '\x01') {
    fVar4 = *(float *)((long)param_1 + 0x23c);
    *(undefined1 *)(param_1 + 0x48) = 0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x124) {
      lVar2 = param_1[0x2d];
      for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
          (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
          if (plVar1 != (long *)0x0) goto LAB_10a432aac;
        }
      }
      plVar1 = (long *)0x0;
LAB_10a432aac:
      param_2 = &plStack_60;
      plStack_60 = plVar1;
      FUN_10a438f68(&plStack_78,param_2,&plStack_58);
      plVar1 = plStack_78;
    }
    else {
      param_2 = (long **)param_1[0x2d];
      FUN_10a432b64(&plStack_60,param_2);
      plStack_78 = plStack_60;
      uStack_68 = uStack_50;
      plStack_70 = plStack_58;
      plVar1 = plStack_60;
    }
    for (; plVar1 != plStack_70; plVar1 = plVar1 + 1) {
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        if (*(float *)(lVar3 + 0x270) != fVar4) {
          *(undefined1 *)(lVar3 + 0x2f0) = 1;
        }
        *(float *)(lVar3 + 0x270) = fVar4;
      }
    }
    param_1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plStack_70 = plStack_78;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (plStack_78 != (long *)0x0) {
      plStack_70 = plStack_78;
      __ZdlPv();
    }
    __Unwind_Resume();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a45360c(param_2,param_1,0);
    return;
  }
  return;
}



/* Entry: 10a432c08; end: 10a432edf;  */

void FUN_10a432c08(undefined8 param_1,undefined4 param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_88;
  long *plStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  
  func_0x00010a3c7a18();
  uStack_58 = 0;
  ppuStack_78 = &PTR_FUN_110c6a8d8;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_60 = &PTR_FUN_110c6a940;
  uStack_4c = *(undefined8 *)(*(long *)(param_3 + 0x1f8) + 0x2c);
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x1f8) + 0x24);
  uStack_54 = uVar3;
  (**(code **)(*param_4 + 0xd8))(param_4,&PTR_DAT_110bd9430);
  plStack_88 = (long *)CONCAT44(param_2,(int)uVar3);
  FUN_10a4322cc(param_3,&plStack_88);
  (**(code **)(*param_4 + 0xd8))(param_4,&PTR_DAT_110bd9450);
  FUN_10a432ee0(param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x1f8);
  FUN_10acae644(uVar3,&ppuStack_78);
  if (((int)uVar3 != 0) &&
     (plVar4 = param_4, (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110bd7158),
     (int)plVar4 != 0)) {
    plVar4 = (long *)0x50;
    __Znwm();
    plVar7 = plVar4 + 1;
    *plVar7 = 0;
    *plVar4 = (long)&PTR_FUN_110bcfba8;
    plVar6 = plVar4 + 3;
    *plVar6 = (long)&PTR_FUN_110c6a8d8;
    plVar4[2] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined1 *)(plVar4 + 7) = 0;
    plVar4[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar4 + 0x44) = 0;
    *(undefined8 *)((long)plVar4 + 0x3c) = 0;
    plStack_88 = plVar6;
    plStack_80 = plVar4;
    (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110bd7158);
    FUN_10acae6cc(plVar6,param_4);
    (**(code **)(*param_4 + 0x220))(param_4);
    FUN_10a432120(param_3,&plStack_88);
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bd7178,1);
  *(int *)(param_3 + 0x214) = (int)plVar4;
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bd7198,*(undefined4 *)(param_3 + 0x218));
  *(int *)(param_3 + 0x218) = (int)plVar4;
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110bd71b8);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_4 + 0xd8))(param_4,&PTR_DAT_110bd71b8);
    FUN_10a4323e8(param_3);
  }
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110bd71d8);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bd71d8,0);
    *(int *)(param_3 + 0x224) = (int)param_4;
  }
  plVar4 = plStack_68;
  ppuStack_78 = &PTR_DAT_110b17898;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a432ee0; end: 10a432fd7;  */

void FUN_10a432ee0(float param_1,float param_2,long param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  
  lVar5 = *(long *)(param_3 + 0x1f8);
  fVar8 = param_2;
  fVar6 = param_1;
  func_0x00010acae698(lVar5);
  fVar7 = ABS(param_1 - fVar6);
  fVar9 = 1e-06;
  if ((fVar7 < 1e-06) && (fVar7 = ABS(param_2 - fVar8), fVar7 < 1e-06)) {
    return;
  }
  func_0x00010acae6ac(lVar5);
  fVar6 = (fVar9 * -2.0) / fVar6;
  uVar11 = (CONCAT44(param_2,param_1) ^ 0x3d4ccccd3d4ccccd) &
           ~CONCAT44(-(uint)(param_2 <= 0.0),-(uint)(param_1 <= 0.0)) ^ 0x3d4ccccd3d4ccccd;
  pauVar1 = (undefined1 (*) [12])(lVar5 + 0x24);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar5 + 0x2c) >> 0x20);
  fVar14 = (float)*(undefined8 *)*pauVar1;
  fVar15 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar16._12_4_ = fVar9;
  auVar16._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar9;
  auVar2._0_12_ = *pauVar1;
  auVar16 = NEON_ext(auVar16,auVar2,8,1);
  fVar10 = ((float)uVar11 + (fVar14 - auVar16._0_4_)) * 0.5;
  fVar13 = ((float)(uVar11 >> 0x20) + (fVar15 - auVar16._4_4_)) * 0.5;
  fVar8 = (fVar7 * -2.0) / fVar8;
  *(ulong *)(lVar5 + 0x2c) = CONCAT44(fVar9 + fVar13,(float)*(undefined8 *)(lVar5 + 0x2c) + fVar10);
  *(ulong *)(lVar5 + 0x24) = CONCAT44(fVar15 - fVar13,fVar14 - fVar10);
  lVar5 = *(long *)(param_3 + 0x1f8);
  fVar9 = fVar8;
  fVar7 = fVar6;
  func_0x00010acae6ac(fVar6,fVar8,CONCAT44(fVar15 + fVar13,fVar14 + fVar10));
  uVar12 = NEON_fmov(0x3f800000,4);
  fVar10 = (float)((ulong)uVar12 >> 0x20);
  fVar6 = (fVar6 + (float)uVar12) * 0.5;
  fVar13 = (fVar8 + fVar10) * 0.5;
  pauVar1 = (undefined1 (*) [12])(lVar5 + 0x24);
  fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 0x2c) >> 0x20);
  fVar14 = (float)*(undefined8 *)*pauVar1;
  fVar15 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar3._12_4_ = fVar17;
  auVar3._0_12_ = *pauVar1;
  auVar4._12_4_ = fVar17;
  auVar4._0_12_ = *pauVar1;
  auVar16 = NEON_ext(auVar3,auVar4,8,1);
  fVar8 = (fVar7 - (((float)uVar12 - fVar6) * fVar14 + fVar6 * auVar16._0_4_)) -
          (fVar14 + auVar16._0_4_) * 0.5;
  fVar6 = (fVar9 - ((fVar10 - fVar13) * fVar15 + fVar13 * auVar16._4_4_)) -
          (fVar15 + auVar16._4_4_) * 0.5;
  *(ulong *)(lVar5 + 0x2c) = CONCAT44(fVar17 + fVar6,(float)*(undefined8 *)(lVar5 + 0x2c) + fVar8);
  *(ulong *)(lVar5 + 0x24) = CONCAT44(fVar15 + fVar6,fVar14 + fVar8);
  return;
}


