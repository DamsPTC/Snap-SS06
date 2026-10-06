/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100123994; end: 100123a07; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl shouldChooseHighestMaxFrameRate] */

undefined1 FUN_100123994(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100123b94;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba310 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136ba310,&puStack_38);
  }
  return uRam00000001136ba308;
}



/* Entry: 100123a08; end: 100123b93; +[SCLocationManager sharedInstanceWithApplicationLifecycleEvents:batteryLogger:userPreferences:circumstanceEngine:appStartExperimentReader:] */

void FUN_100123a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  lVar2 = lRam00000001136bd390;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x100123d24;
  puStack_98 = &UNK_110891e80;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_1;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar3 = param_4;
  uVar4 = param_5;
  uVar5 = param_6;
  uVar6 = param_7;
  uStack_b8 = param_3;
  if (lVar2 != -1) {
    FUN_10002a2fc(0x1136bd390,&puStack_b0);
    uStack_b8 = uStack_90;
    uVar3 = uStack_88;
    uVar4 = uStack_80;
    uVar5 = uStack_78;
    uVar6 = uStack_70;
  }
  uVar1 = uRam00000001136bd388;
  func_0x000107c61174(uRam00000001136bd388);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100123b94; end: 100123bc7;  */

void FUN_100123b94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c3ebd4(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0f78,0,0);
  uRam00000001136ba308 = (char)uVar1;
  return;
}



/* Entry: 100123bc8; end: 100123c5f; -[SCCircumstanceEngine boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8
FUN_100123bc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  uVar1 = param_1;
  func_0x000107c3c7f4(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c3ade8(param_1,param_2,param_3,4);
    lVar3 = 0xa0;
  }
  else {
    lVar3 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3ebd4(uVar2,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100123c60; end: 100123d8f; -[SCCircumstanceEngine _shouldUseAserForConfigKey:] */

undefined8 FUN_100123c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c40404(uVar2,param_2,param_3);
  if ((int)uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x40);
    func_0x000107c40404(uVar3,param_2,param_3);
    if ((uVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
      func_0x000107c49a5c();
      if (iVar1 != 0) {
        uVar3 = *(ulong *)(param_1 + 0x48);
        func_0x000107c4a300();
        if ((uVar3 & 1) == 0) {
          func_0x000107c421b0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
          uVar2 = 1;
          goto LAB_100123cb8;
        }
      }
    }
  }
  uVar2 = 0;
LAB_100123cb8:
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100123d90; end: 100123da7; -[SCConfigRepository isAserSynced] */

uint FUN_100123d90(uint param_1)

{
  func_0x000107c4d54c();
  return param_1 ^ 1;
}



/* Entry: 100123da8; end: 100124593;  */

/* WARNING: Possible PIC construction at 0x000100123e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100123e2c) */
/* WARNING: Removing unreachable block (ram,0x000100123e40) */
/* WARNING: Removing unreachable block (ram,0x000100123e44) */
/* WARNING: Removing unreachable block (ram,0x000100123e48) */
/* WARNING: Removing unreachable block (ram,0x000100123e50) */
/* WARNING: Removing unreachable block (ram,0x000100123e58) */
/* WARNING: Removing unreachable block (ram,0x000100123e60) */
/* WARNING: Removing unreachable block (ram,0x0001001240d4) */
/* WARNING: Removing unreachable block (ram,0x000100123e78) */

void FUN_100123da8(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  int *piVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  plVar7 = plRam000000011383aae8;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plStack_78 = param_1;
  if (plRam000000011383aae8 < (long *)0x2) {
LAB_100123e98:
    if (plRam000000011383aae8 == (long *)0x0) goto code_r0x000100123ea0;
    ClearExclusiveLocal();
    if (plRam000000011383aae8 == (long *)0x1) {
      (*(code *)PTR_FUN_11336f918)();
      plVar7 = param_1;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)plVar7 - (long)param_1 < 1000) {
          func_0x000107c612dc();
        }
        else {
          lStack_70 = -0x5555555555555556;
          uStack_68 = 0xaaaaaaaaaaaaaaaa;
          uStack_58 = 1000000;
          lStack_60 = 0;
          plVar7 = &lStack_60;
          func_0x000107c610f0(plVar7,&lStack_70);
          iVar6 = (int)plVar7;
          while ((iVar6 == -1 && (func_0x000107c60e5c(), (int)*plVar7 == 4))) {
            uStack_58 = uStack_68;
            lStack_60 = lStack_70;
            plVar7 = &lStack_60;
            func_0x000107c610f0(plVar7,&lStack_70);
            iVar6 = (int)plVar7;
          }
        }
      } while (plRam000000011383aae8 == (long *)0x1);
    }
    plVar7 = plRam000000011383aae8;
    plVar15 = plRam000000011383aae8;
    func_0x000107c61264();
    iVar6 = (int)plVar15;
    goto joined_r0x000100123ee8;
  }
  plVar15 = plRam000000011383aae8;
  func_0x000107c61264();
  iVar6 = (int)plVar15;
joined_r0x000100123ee8:
  if (iVar6 != 0) {
    func_0x000107c2cfbc();
    plVar15 = plVar7;
  }
  if (plRam000000011383aae8 < (long *)0x2) {
    do {
      if (plRam000000011383aae8 != (long *)0x0) {
        ClearExclusiveLocal();
        if (plRam000000011383aae8 == (long *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          plVar7 = plVar15;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)plVar7 - (long)plVar15 < 1000) {
              func_0x000107c612dc();
            }
            else {
              lStack_70 = -0x5555555555555556;
              uStack_68 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = 1000000;
              lStack_60 = 0;
              plVar7 = &lStack_60;
              func_0x000107c610f0(plVar7,&lStack_70);
              iVar6 = (int)plVar7;
              while ((iVar6 == -1 && (func_0x000107c60e5c(), (int)*plVar7 == 4))) {
                uStack_58 = uStack_68;
                lStack_60 = lStack_70;
                plVar7 = &lStack_60;
                func_0x000107c610f0(plVar7,&lStack_70);
                iVar6 = (int)plVar7;
              }
            }
          } while (plRam000000011383aae8 == (long *)0x1);
        }
        goto joined_r0x0001001240cc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar3) {
        plRam000000011383aae8 = (long *)0x1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_60 = -0x5555555555555556;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&lStack_60);
    func_0x000107c61274(&lStack_60,1);
    func_0x000107c6125c(0x11383aaf0,&lStack_60);
    func_0x000107c6126c(&lStack_60);
    plRam000000011383aae8 = (long *)0x11383aaf0;
  }
joined_r0x0001001240cc:
  if (lRam000000011383ab30 == 0) {
    func_0x000107c60e20(0xa0);
    FUN_1001224f0();
  }
  lVar10 = lRam000000011383ab30;
  plVar7 = (long *)(lRam000000011383ab30 + 0x50);
  pplVar11 = &plStack_78;
  uVar1 = *(uint *)(plStack_78 + 3);
  uVar21 = (ulong)uVar1;
  uVar23 = *(ulong *)(lRam000000011383ab30 + 0x58);
  if (uVar23 == 0) {
    uVar24 = 0xaaaaaaaaaaaaaaaa;
  }
  else {
    uVar13 = uVar23 - 1;
    uVar22 = (uint)uVar23;
    if ((uVar23 & uVar13) == 0) {
      uVar24 = (ulong)(uVar22 - 1 & uVar1);
      plVar15 = *(long **)(*plVar7 + uVar24 * 8);
    }
    else {
      uVar24 = uVar21;
      if (uVar23 <= uVar21) {
        uVar4 = 0;
        if (uVar22 != 0) {
          uVar4 = uVar1 / uVar22;
        }
        uVar24 = (ulong)(uVar1 - uVar4 * uVar22);
      }
      plVar15 = *(long **)(*plVar7 + uVar24 * 8);
    }
    if (plVar15 != (long *)0x0) {
      for (plVar15 = (long *)*plVar15; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar16 = plVar15[1];
        if (uVar16 == uVar21) {
          plVar12 = (long *)plVar15[2];
          if (*(uint *)(plVar12 + 3) == uVar1) {
            piVar17 = (int *)*plVar12;
            lVar14 = plVar12[1] - (long)piVar17;
            if (lVar14 == plStack_78[1] - *plStack_78) {
              if ((int *)plVar12[1] == piVar17) {
                return;
              }
              lVar14 = lVar14 >> 2;
              piVar19 = (int *)*plStack_78;
              while( true ) {
                if (*piVar17 != *piVar19) break;
                lVar14 = lVar14 + -1;
                piVar17 = piVar17 + 1;
                piVar19 = piVar19 + 1;
                if (lVar14 == 0) {
                  return;
                }
              }
            }
          }
        }
        else {
          if ((uVar23 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar23 <= uVar16) {
            uVar5 = 0;
            if (uVar23 != 0) {
              uVar5 = uVar16 / uVar23;
            }
            uVar16 = uVar16 - uVar5 * uVar23;
          }
          if (uVar16 != uVar24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x18;
  func_0x000107c60e20();
  *plVar15 = 0;
  plVar15[1] = uVar21;
  plVar15[2] = (long)plStack_78;
  fVar25 = (float)(*(long *)(lVar10 + 0x68) + 1);
  if ((uVar23 == 0) || (*(float *)(lVar10 + 0x70) * (float)uVar23 < fVar25)) {
    uVar24 = 1;
    if (2 < uVar23) {
      uVar24 = (ulong)((uVar23 & uVar23 - 1) != 0);
    }
    uVar24 = uVar24 | uVar23 << 1;
    uVar13 = (ulong)(fVar25 / *(float *)(lVar10 + 0x70));
    if (uVar24 <= uVar13) {
      uVar24 = uVar13;
    }
    if (uVar24 - 1 == 0) {
      uVar24 = 2;
    }
    else if ((uVar24 & uVar24 - 1) != 0) {
      func_0x000107c60c44();
      uVar23 = *(ulong *)(lVar10 + 0x58);
    }
    if (uVar23 < uVar24) {
LAB_10012429c:
      if (uVar24 >> 0x3d != 0) {
        func_0x000107c35c58();
        uVar9 = 0x28;
        func_0x000107c60e20();
        lVar10 = plVar15[1];
        FUN_1001245e8(lVar10);
        FUN_1001248fc(uVar9,lVar10,pplVar11);
        *extraout_x8 = uVar9;
        return;
      }
      lVar14 = uVar24 << 3;
      func_0x000107c60e20();
      lVar8 = *plVar7;
      *plVar7 = lVar14;
      if (lVar8 != 0) {
        func_0x000107c60e14();
      }
      uVar23 = 0;
      *(ulong *)(lVar10 + 0x58) = uVar24;
      do {
        *(undefined8 *)(*plVar7 + uVar23 * 8) = 0;
        uVar23 = uVar23 + 1;
      } while (uVar24 != uVar23);
      puVar20 = (undefined8 *)(lVar10 + 0x60);
      plVar12 = (long *)*puVar20;
      if (plVar12 != (long *)0x0) {
        uVar23 = plVar12[1];
        uVar13 = uVar24 - 1;
        if ((uVar24 & uVar13) != 0) {
          if (uVar24 <= uVar23) {
            uVar13 = 0;
            if (uVar24 != 0) {
              uVar13 = uVar23 / uVar24;
            }
            uVar23 = uVar23 - uVar13 * uVar24;
          }
          *(undefined8 **)(*plVar7 + uVar23 * 8) = puVar20;
          plVar18 = (long *)*plVar12;
joined_r0x00010012431c:
          if (plVar18 != (long *)0x0) {
            do {
              uVar13 = plVar18[1];
              if (uVar24 <= uVar13) {
                uVar16 = 0;
                if (uVar24 != 0) {
                  uVar16 = uVar13 / uVar24;
                }
                uVar13 = uVar13 - uVar16 * uVar24;
              }
              if (uVar13 != uVar23) {
                if (*(long *)(*plVar7 + uVar13 * 8) == 0) goto code_r0x000100124380;
                *plVar12 = *plVar18;
                *plVar18 = **(long **)(*plVar7 + uVar13 * 8);
                **(undefined8 **)(*plVar7 + uVar13 * 8) = plVar18;
                plVar18 = plVar12;
              }
              plVar12 = plVar18;
              plVar18 = (long *)*plVar12;
              if (plVar18 == (long *)0x0) break;
            } while( true );
          }
          goto LAB_1001244c4;
        }
        *(undefined8 **)(*plVar7 + (uVar23 & uVar13) * 8) = puVar20;
        uVar23 = uVar23 & uVar13;
        while (plVar18 = plVar12, plVar12 = (long *)*plVar18, plVar12 != (long *)0x0) {
          uVar24 = plVar12[1] & uVar13;
          if (uVar24 != uVar23) {
            if (*(long *)(*plVar7 + uVar24 * 8) == 0) {
              *(long **)(*plVar7 + uVar24 * 8) = plVar18;
              uVar23 = uVar24;
            }
            else {
              *plVar18 = *plVar12;
              *plVar12 = **(long **)(*plVar7 + uVar24 * 8);
              **(undefined8 **)(*plVar7 + uVar24 * 8) = plVar12;
              plVar12 = plVar18;
            }
          }
        }
      }
    }
    else if (uVar24 < uVar23) {
      uVar13 = (ulong)((float)*(ulong *)(lVar10 + 0x68) / *(float *)(lVar10 + 0x70));
      if ((uVar23 < 3) || ((uVar23 & uVar23 - 1) != 0)) {
        func_0x000107c60c44();
        if (uVar24 <= uVar13) {
          uVar24 = uVar13;
        }
      }
      else {
        if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
        if (uVar24 <= uVar13) {
          uVar24 = uVar13;
        }
      }
      if (uVar24 < uVar23) {
        if (uVar24 != 0) goto LAB_10012429c;
        lVar14 = *plVar7;
        *plVar7 = 0;
        if (lVar14 != 0) {
          func_0x000107c60e14(lVar14);
        }
        *(undefined8 *)(lVar10 + 0x58) = 0;
      }
    }
LAB_1001244c4:
    uVar23 = *(ulong *)(lVar10 + 0x58);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = (ulong)((int)uVar23 - 1U & uVar1);
      lVar14 = *plVar7;
      plVar12 = *(long **)(lVar14 + uVar21 * 8);
      goto joined_r0x000100124554;
    }
    if (uVar23 <= uVar21) {
      uVar24 = 0;
      if (uVar23 != 0) {
        uVar24 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar24 * uVar23;
      lVar14 = *plVar7;
      plVar12 = *(long **)(lVar14 + uVar21 * 8);
      goto joined_r0x000100124554;
    }
    lVar14 = *plVar7;
    plVar12 = *(long **)(lVar14 + uVar21 * 8);
    if (plVar12 == (long *)0x0) goto LAB_100124504;
LAB_10012419c:
    *plVar15 = *plVar12;
  }
  else {
    lVar14 = *plVar7;
    plVar12 = *(long **)(lVar14 + uVar24 * 8);
    uVar21 = uVar24;
joined_r0x000100124554:
    if (plVar12 != (long *)0x0) goto LAB_10012419c;
LAB_100124504:
    plVar12 = (long *)(lVar10 + 0x60);
    *plVar15 = *plVar12;
    *plVar12 = (long)plVar15;
    *(long **)(lVar14 + uVar21 * 8) = plVar12;
    if (*plVar15 == 0) goto LAB_10012456c;
    uVar21 = *(ulong *)(*plVar15 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar21 & uVar23 - 1;
    }
    else if (uVar23 <= uVar21) {
      uVar24 = 0;
      if (uVar23 != 0) {
        uVar24 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar24 * uVar23;
    }
    plVar12 = (long *)(*plVar7 + uVar21 * 8);
  }
  *plVar12 = (long)plVar15;
LAB_10012456c:
  *(long *)(lVar10 + 0x68) = *(long *)(lVar10 + 0x68) + 1;
  return;
code_r0x000100123ea0:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
  if (bVar3) {
    plRam000000011383aae8 = (long *)0x1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x000100123ea8;
  goto LAB_100123e98;
code_r0x000100123ea8:
  lStack_60 = -0x5555555555555556;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&lStack_60);
  func_0x000107c61274(&lStack_60,1);
  plVar7 = (long *)0x11383aaf0;
  func_0x000107c6125c(0x11383aaf0,&lStack_60);
  func_0x000107c6126c(&lStack_60);
  plRam000000011383aae8 = (long *)0x11383aaf0;
  plVar15 = plVar7;
  func_0x000107c61264();
  iVar6 = (int)plVar15;
  goto joined_r0x000100123ee8;
code_r0x000100124380:
  *(long **)(*plVar7 + uVar13 * 8) = plVar12;
  plVar12 = plVar18;
  plVar18 = (long *)*plVar18;
  uVar23 = uVar13;
  goto joined_r0x00010012431c;
}



/* Entry: 100124594; end: 1001245e7;  */

void FUN_100124594(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x28;
  func_0x000107c60e20();
  uVar2 = *(undefined8 *)(param_2 + 8);
  FUN_1001245e8(uVar2);
  FUN_1001248fc(uVar1,uVar2,param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1001245e8; end: 1001246db;  */

long FUN_1001245e8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam000000011383aa88 & 1) == 0) {
    iVar1 = 0x1383aa88;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011383aa80 = 0;
      uRam000000011383aa78 = 0;
      uRam000000011383aa70 = 0x11383aa78;
      func_0x000107c60e4c(0x11383aa88);
    }
  }
  if ((bRam000000011383aad0 & 1) == 0) {
    iVar1 = 0x1383aad0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1000ffe38(0x11383aa90);
      func_0x000107c60e4c(0x11383aad0);
    }
  }
  iVar1 = 0x1383aa90;
  func_0x000107c61264();
  if (iVar1 != 0) {
    func_0x000107c2cfbc(0x11383aa90);
  }
  lVar2 = 0x11383aa70;
  func_0x000100124758(0x11383aa70,param_1,param_1);
  plVar3 = (long *)(lVar2 + 0x20);
  if (*(char *)(lVar2 + 0x37) < '\0') {
    plVar3 = (long *)*plVar3;
  }
  func_0x000107c61268(0x11383aa90);
  return (long)plVar3;
}



/* Entry: 1001246dc; end: 1001246e7;  */

void FUN_1001246dc(void)

{
  return;
}



/* Entry: 1001246e8; end: 1001247e3;  */

long * FUN_1001246e8(long *param_1)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *plVar3;
  
  FUN_1001246dc();
  plVar2 = (long *)(unaff_x20 + 8);
  plVar1 = (long *)*plVar2;
  plVar3 = plVar2;
  while (plVar1 != (long *)0x0) {
    while (plVar3 = plVar1, FUN_100125aec(), ((uint)param_1 >> 7 & 1) != 0) {
      plVar1 = (long *)*plVar3;
      plVar2 = plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_100124748;
    }
    param_1 = plVar3 + 4;
    FUN_10015f3a8();
    if (((uint)param_1 >> 7 & 1) == 0) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  }
LAB_100124748:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 1001247e4; end: 100124803;  */

void FUN_1001247e4(void)

{
  return;
}



/* Entry: 100124804; end: 100124843;  */

void FUN_100124804(long param_1)

{
  long *unaff_x19;
  long unaff_x21;
  
  func_0x0001001247f0();
  *unaff_x19 = param_1;
  unaff_x19[1] = unaff_x21;
  unaff_x19[2] = 0;
  FUN_100124844(param_1 + 0x20);
  *(undefined1 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 100124844; end: 100124873;  */

void FUN_100124844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 100124874; end: 1001248a3;  */

void FUN_100124874(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000100124858();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  FUN_1001248a4();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 1001248a4; end: 1001248bb;  */

/* WARNING: Possible PIC construction at 0x00010002c67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002c680) */

void FUN_1001248a4(void)

{
  long *plVar1;
  long *plVar2;
  long *in_x3;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x19;
  
  plVar2 = *(long **)(unaff_x19 + 8);
  *(bool *)(in_x3 + 3) = in_x3 == plVar2;
  do {
    if ((in_x3 == plVar2) || (plVar7 = (long *)in_x3[2], (*(byte *)(plVar7 + 3) & 1) != 0)) {
      return;
    }
    plVar1 = (long *)plVar7[2];
    plVar6 = (long *)*plVar1;
    if (plVar7 == plVar6) {
      plVar6 = (long *)plVar1[1];
      if ((plVar6 == (long *)0x0) || ((*(byte *)(plVar6 + 3) & 1) != 0)) {
        if (in_x3 == (long *)*plVar7) {
          *(undefined1 *)(plVar7 + 3) = 1;
          *(undefined1 *)(plVar1 + 3) = 0;
          lVar3 = *plVar1;
          lVar5 = *(long *)(lVar3 + 8);
          *plVar1 = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar1;
          }
          plVar2 = (long *)plVar1[2];
          *(long **)(lVar3 + 0x10) = plVar2;
          if (plVar1 == (long *)*plVar2) {
            *plVar2 = lVar3;
          }
          else {
            plVar2[1] = lVar3;
          }
          *(long **)(lVar3 + 8) = plVar1;
          plVar1[2] = lVar3;
          return;
        }
        goto SUB_10002c89c;
      }
    }
    else if ((plVar6 == (long *)0x0) || ((*(byte *)(plVar6 + 3) & 1) != 0)) {
      plVar2 = plVar7;
      if (in_x3 == (long *)*plVar7) {
        FUN_10015dd98(plVar7);
        plVar2 = (long *)plVar7[2];
        plVar1 = (long *)plVar2[2];
      }
      plVar7 = plVar1;
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 0;
SUB_10002c89c:
      plVar2 = (long *)plVar7[1];
      lVar3 = *plVar2;
      plVar7[1] = lVar3;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar7;
      }
      puVar4 = (undefined8 *)plVar7[2];
      plVar2[2] = (long)puVar4;
      if (plVar7 == (long *)*puVar4) {
        *puVar4 = plVar2;
      }
      else {
        puVar4[1] = plVar2;
      }
      *plVar2 = (long)plVar7;
      plVar7[2] = (long)plVar2;
      return;
    }
    *(undefined1 *)(plVar7 + 3) = 1;
    *(bool *)(plVar1 + 3) = plVar1 == plVar2;
    *(undefined1 *)(plVar6 + 3) = 1;
    in_x3 = plVar1;
  } while( true );
}



/* Entry: 1001248bc; end: 1001248db;  */

void FUN_1001248bc(void)

{
  func_0x0001001248b0();
  FUN_1001248dc();
  return;
}



/* Entry: 1001248dc; end: 1001248fb;  */

void FUN_1001248dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1001248fc; end: 100124ac3;  */

undefined8 * FUN_1001248fc(undefined8 *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong auStack_c0 [11];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110cd4c18;
  param_1[1] = param_2;
  plVar6 = param_1 + 3;
  *plVar6 = 0;
  param_1[4] = 0;
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000107c613d0(param_2);
    auStack_c0[0] = 0xaaaaaaaaaaaaaaaa;
    auStack_c0[1] = 0xaaaaaaaaaaaaaaaa;
    uStack_5c = 0;
    uStack_60 = 0;
    auStack_c0[9] = 0;
    auStack_c0[8] = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    auStack_c0[10] = 0;
    auStack_c0[5] = 0;
    auStack_c0[4] = 0;
    auStack_c0[7] = 0;
    auStack_c0[6] = 0;
    auStack_c0[3] = 0x1032547698badcfe;
    auStack_c0[2] = 0xefcdab8967452301;
    FUN_100122910(auStack_c0 + 2,param_2,lVar2);
    FUN_100122a24(auStack_c0,auStack_c0 + 2);
    uVar7 = (auStack_c0[0] & 0xff00ff00ff00ff00) >> 8 | (auStack_c0[0] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    puVar3 = (undefined8 *)0x38;
    func_0x000107c60e20();
    puVar4 = (ulong *)0x18;
    func_0x000107c60e20();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = uVar7;
    puVar3[1] = puVar4;
    puVar3[2] = 0;
    puVar3[3] = param_3;
    if (param_3[1] - *param_3 == 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x100124aac);
      (*pcVar1)();
    }
    *puVar3 = &PTR_DAT_110cd5180;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = 0;
    plVar5 = (long *)*plVar6;
    *plVar6 = (long)puVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      uVar7 = **(ulong **)(*plVar6 + 8);
    }
    puVar3 = (undefined8 *)0x38;
    func_0x000107c60e20();
    puVar4 = (ulong *)0x18;
    func_0x000107c60e20();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = uVar7;
    puVar3[1] = puVar4;
    puVar3[2] = 0;
    puVar3[3] = param_3;
    if (param_3[1] - *param_3 == 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x100124ab8);
      (*pcVar1)();
    }
    *puVar3 = &PTR_DAT_110cd5180;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = 0;
    plVar6 = (long *)param_1[4];
    param_1[4] = puVar3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_1;
    }
    func_0x000107c60e78();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x100124aa0);
  (*pcVar1)();
}



/* Entry: 100124ac4; end: 100124e6b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_100124ac4(undefined8 ****param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *******pppppppuVar16;
  ulong ****ppppuVar17;
  undefined8 **ppuVar18;
  undefined *puVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ****ppppuVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 ****ppppuVar32;
  undefined8 ***pppuVar33;
  undefined8 ***pppuVar34;
  undefined8 ***pppuVar35;
  undefined8 ***pppuVar36;
  ulong uVar37;
  ulong **ppuVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 *******pppppppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 ***apppuStack_80 [2];
  undefined8 ****ppppuStack_70;
  undefined8 uStack_68;
  ulong ***pppuStack_60;
  undefined8 ***pppuStack_58;
  long lStack_48;
  
  ppppuVar11 = ppppuRam000000011383aae8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppppuRam000000011383aae8 < (undefined8 ****)0x2) {
LAB_100124b9c:
    if (ppppuRam000000011383aae8 == (undefined8 ****)0x0) goto code_r0x000100124ba4;
    ClearExclusiveLocal();
    if (ppppuRam000000011383aae8 == (undefined8 ****)0x1) {
      ppppuVar10 = param_1;
      (*(code *)PTR_FUN_11336f918)();
      uStack_88 = 1000000;
      pppuStack_90 = (ulong ***)0x0;
      ppppuVar11 = ppppuVar10;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)ppppuVar11 - (long)ppppuVar10 < 1000) {
          func_0x000107c612dc();
        }
        else {
          ppppuStack_70 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
          uStack_68 = 0xaaaaaaaaaaaaaaaa;
          pppuStack_58 = (undefined8 ***)uStack_88;
          pppuStack_60 = pppuStack_90;
          ppppuVar11 = &pppuStack_60;
          func_0x000107c610f0(ppppuVar11,&ppppuStack_70);
          iVar8 = (int)ppppuVar11;
          while ((iVar8 == -1 && (func_0x000107c60e5c(), *(int *)ppppuVar11 == 4))) {
            pppuStack_58 = (undefined8 ***)uStack_68;
            pppuStack_60 = (ulong ***)ppppuStack_70;
            ppppuVar11 = &pppuStack_60;
            func_0x000107c610f0(ppppuVar11,&ppppuStack_70);
            iVar8 = (int)ppppuVar11;
          }
        }
      } while (ppppuRam000000011383aae8 == (undefined8 ****)0x1);
    }
    ppppuVar11 = ppppuRam000000011383aae8;
    ppppuVar10 = ppppuRam000000011383aae8;
    func_0x000107c61264();
    iVar8 = (int)ppppuVar10;
    goto joined_r0x000100124bec;
  }
  ppppuVar10 = ppppuRam000000011383aae8;
  func_0x000107c61264();
  iVar8 = (int)ppppuVar10;
joined_r0x000100124bec:
  if (iVar8 != 0) {
    ppppuVar10 = ppppuVar11;
    func_0x000107c2cfbc();
  }
  if (ppppuRam000000011383aae8 < (undefined8 ****)0x2) {
    do {
      if (ppppuRam000000011383aae8 != (undefined8 ****)0x0) {
        ClearExclusiveLocal();
        if (ppppuRam000000011383aae8 == (undefined8 ****)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          uStack_88 = 1000000;
          pppuStack_90 = (ulong ***)0x0;
          ppppuVar32 = ppppuVar10;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)ppppuVar32 - (long)ppppuVar10 < 1000) {
              func_0x000107c612dc();
            }
            else {
              ppppuStack_70 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
              uStack_68 = 0xaaaaaaaaaaaaaaaa;
              pppuStack_58 = (undefined8 ***)uStack_88;
              pppuStack_60 = pppuStack_90;
              ppppuVar32 = &pppuStack_60;
              func_0x000107c610f0(ppppuVar32,&ppppuStack_70);
              iVar8 = (int)ppppuVar32;
              while ((iVar8 == -1 && (func_0x000107c60e5c(), *(int *)ppppuVar32 == 4))) {
                pppuStack_58 = (undefined8 ***)uStack_68;
                pppuStack_60 = (ulong ***)ppppuStack_70;
                ppppuVar32 = &pppuStack_60;
                func_0x000107c610f0(ppppuVar32,&ppppuStack_70);
                iVar8 = (int)ppppuVar32;
              }
            }
          } while (ppppuRam000000011383aae8 == (undefined8 ****)0x1);
        }
        goto joined_r0x000100124e38;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar5) {
        ppppuRam000000011383aae8 = (undefined8 ****)0x1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppuStack_60 = (ulong ***)0xaaaaaaaaaaaaaaaa;
    pppuStack_58 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&pppuStack_60);
    func_0x000107c61274(&pppuStack_60,1);
    func_0x000107c6125c(0x11383aaf0,&pppuStack_60);
    func_0x000107c6126c(&pppuStack_60);
    ppppuRam000000011383aae8 = (undefined8 ****)0x11383aaf0;
    if (lRam000000011383ab30 == 0) goto LAB_100124e3c;
LAB_100124b28:
    pppuVar9 = param_1[1];
    lVar14 = lRam000000011383ab30;
  }
  else {
joined_r0x000100124e38:
    if (lRam000000011383ab30 != 0) goto LAB_100124b28;
LAB_100124e3c:
    func_0x000107c60e20(0xa0);
    FUN_1001224f0();
    pppuVar9 = param_1[1];
    lVar14 = lRam000000011383ab30;
  }
  lRam000000011383ab30 = lVar14;
  apppuStack_80[0] = pppuVar9;
  pppuStack_60 = pppuVar9;
  if (pppuVar9 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0,0x100124e60);
    (*pcVar7)();
  }
  func_0x000107c613d0();
  ppppuStack_70 = &pppuStack_60;
  pppuVar20 = (undefined8 ***)&UNK_10dd5b8f9;
  ppppuVar10 = &pppuStack_60;
  ppppuVar17 = (ulong ****)&ppppuStack_70;
  pppuStack_58 = pppuVar9;
  FUN_100124e6c();
  ppppuVar32 = *(undefined8 *****)(lVar14 + 0x20);
  if (ppppuVar32 == (undefined8 ****)0x0) {
    *(undefined8 *****)(lVar14 + 0x20) = param_1;
    iVar8 = (int)lRam000000011383ab30 + 0x28;
    ppppuVar10 = apppuStack_80;
    FUN_100125344();
    if (iVar8 != 0) {
      ppppuVar32 = param_1 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppuVar32,0x10);
        if (bVar5) {
          *(uint *)ppppuVar32 = *(uint *)ppppuVar32 | 0x20;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
LAB_100124c20:
    func_0x000107c61268();
    ppppuVar32 = param_1;
  }
  else {
    if (ppppuVar32 == param_1) goto LAB_100124c20;
    func_0x000107c61268();
    if (param_1 != (undefined8 ****)0x0) {
      (*(code *)(*param_1)[1])();
      ppppuVar11 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar39._8_8_ = ppppuVar10;
    auVar39._0_8_ = ppppuVar32;
    return auVar39;
  }
  func_0x000107c60e78();
  puStack_a0 = &stack0xfffffffffffffff0;
  pcStack_98 = FUN_100124e6c;
  ppppuVar32 = (undefined8 ****)*ppppuVar10;
  pppuVar9 = ppppuVar10[1];
  if (pppuVar9 == (undefined8 ***)0x0) {
    pppuVar34 = (undefined8 ***)0x0;
    pppuVar35 = ppppuVar11[1];
    if (pppuVar35 == (undefined8 ***)0x0) goto LAB_100124efc;
LAB_100124ec0:
    uVar37 = (long)pppuVar35 - 1;
    if (((ulong)pppuVar35 & uVar37) == 0) {
      pppuVar36 = (undefined8 ***)(uVar37 & (ulong)pppuVar34);
      ppuVar18 = (*ppppuVar11)[(long)pppuVar36];
    }
    else {
      pppuVar36 = pppuVar34;
      if (pppuVar35 <= pppuVar34) {
        uVar23 = 0;
        if (pppuVar35 != (undefined8 ***)0x0) {
          uVar23 = (ulong)pppuVar34 / (ulong)pppuVar35;
        }
        pppuVar36 = (undefined8 ***)((long)pppuVar34 - uVar23 * (long)pppuVar35);
      }
      ppuVar18 = (*ppppuVar11)[(long)pppuVar36];
    }
    if ((ppuVar18 != (undefined8 **)0x0) &&
       (pppuVar12 = (undefined8 ***)*ppuVar18, pppuVar12 != (undefined8 ***)0x0)) {
      if (((ulong)pppuVar35 & uVar37) == 0) {
        do {
          if ((undefined8 ***)pppuVar12[1] == pppuVar34) {
            if ((undefined8 ***)pppuVar12[3] == pppuVar9) {
              iVar8 = (int)pppuVar12[2];
              ppppuVar10 = ppppuVar32;
              pppuVar20 = pppuVar9;
              func_0x000107c610b0();
              if (iVar8 == 0) goto LAB_100124fbc;
            }
          }
          else if ((undefined8 ***)((ulong)pppuVar12[1] & uVar37) != pppuVar36) break;
          pppuVar12 = (undefined8 ***)*pppuVar12;
        } while (pppuVar12 != (undefined8 ***)0x0);
      }
      else {
        do {
          pppuVar21 = (undefined8 ***)pppuVar12[1];
          if (pppuVar21 == pppuVar34) {
            if ((undefined8 ***)pppuVar12[3] == pppuVar9) {
              iVar8 = (int)pppuVar12[2];
              ppppuVar10 = ppppuVar32;
              pppuVar20 = pppuVar9;
              func_0x000107c610b0();
              if (iVar8 == 0) goto LAB_100124fbc;
            }
          }
          else {
            if (pppuVar35 <= pppuVar21) {
              uVar37 = 0;
              if (pppuVar35 != (undefined8 ***)0x0) {
                uVar37 = (ulong)pppuVar21 / (ulong)pppuVar35;
              }
              pppuVar21 = (undefined8 ***)((long)pppuVar21 - uVar37 * (long)pppuVar35);
            }
            if (pppuVar21 != pppuVar36) break;
          }
          pppuVar12 = (undefined8 ***)*pppuVar12;
        } while (pppuVar12 != (undefined8 ***)0x0);
      }
    }
  }
  else {
    pppuVar34 = (undefined8 ***)0x0;
    pppuVar35 = pppuVar9;
    ppppuVar22 = ppppuVar32;
    do {
      pppuVar34 = (undefined8 ***)((long)*(char *)ppppuVar22 + (long)pppuVar34 * 0x83);
      pppuVar35 = (undefined8 ***)((long)pppuVar35 + -1);
      ppppuVar22 = (undefined8 ****)((long)ppppuVar22 + 1);
    } while (pppuVar35 != (undefined8 ***)0x0);
    pppuVar35 = ppppuVar11[1];
    if (pppuVar35 != (undefined8 ***)0x0) goto LAB_100124ec0;
LAB_100124efc:
    pppuVar36 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
  }
  pppuVar12 = (undefined8 ***)0x28;
  func_0x000107c60e20();
  *pppuVar12 = (undefined8 **)0x0;
  pppuVar12[1] = pppuVar34;
  ppuVar38 = **ppppuVar17;
  pppuVar12[3] = (*ppppuVar17)[1];
  pppuVar12[2] = ppuVar38;
  pppuVar12[4] = (undefined8 **)0x0;
  if ((pppuVar35 == (undefined8 ***)0x0) ||
     (*(float *)(ppppuVar11 + 4) * (float)pppuVar35 < (float)((long)ppppuVar11[3] + 1))) {
    uVar37 = 1;
    if ((undefined8 ***)0x2 < pppuVar35) {
      uVar37 = (ulong)(((ulong)pppuVar35 & (long)pppuVar35 - 1U) != 0);
    }
    pppuVar36 = (undefined8 ***)(uVar37 | (long)pppuVar35 << 1);
    pppuVar21 = (undefined8 ***)
                (long)((float)((long)ppppuVar11[3] + 1) / *(float *)(ppppuVar11 + 4));
    if (pppuVar36 <= pppuVar21) {
      pppuVar36 = pppuVar21;
    }
    pppuVar21 = pppuVar12;
    if ((long)pppuVar36 - 1U == 0) {
      pppuVar36 = (undefined8 ***)0x2;
    }
    else if (((ulong)pppuVar36 & (long)pppuVar36 - 1U) != 0) {
      func_0x000107c60c44();
      pppuVar35 = ppppuVar11[1];
      pppuVar21 = pppuVar36;
    }
    if (pppuVar35 < pppuVar36) {
LAB_100125080:
      if ((ulong)pppuVar36 >> 0x3d != 0) {
        func_0x000107c35c58();
        pcStack_f8 = FUN_100125344;
        pppuVar33 = *ppppuVar10;
        pppuVar35 = pppuVar33;
        pppuStack_130 = pppuVar34;
        pppuStack_128 = pppuVar9;
        ppppuStack_120 = ppppuVar32;
        pppuStack_118 = pppuVar36;
        pppuStack_110 = pppuVar12;
        ppppuStack_108 = ppppuVar11;
        ppuStack_100 = &puStack_a0;
        func_0x000107c613d0();
        if ((undefined8 ***)0x7ffffffffffffff7 < pppuVar35) {
          func_0x000107c35c54();
          if (pppuVar20 < (undefined8 ***)0x21) {
            if ((undefined8 ***)0x10 < pppuVar20) {
              uVar23 = *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1)) * -0x651e95c4d06fbfb1;
              uVar26 = (long)*ppppuVar10 * -0x4b6d499041670d8d - (long)ppppuVar10[1];
              uVar37 = (ulong)ppppuVar10[1] ^ 0xc949d7c7509e6557;
              puVar19 = (undefined *)
                        ((long)pppuVar20 +
                        *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1)) * 0x651e95c4d06fbfb1 +
                        (long)*ppppuVar10 * -0x4b6d499041670d8d + (uVar37 >> 0x14 | uVar37 << 0x2c))
              ;
              uVar37 = ((uVar23 >> 0x1e | uVar23 << 0x22) + (uVar26 >> 0x2b | uVar26 * 0x200000) +
                        *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -2)) * -0x3c5a37a36834ced9 ^
                       (ulong)puVar19) * -0x622015f714c7d297;
              uVar37 = ((ulong)puVar19 ^ uVar37 >> 0x2f ^ uVar37) * -0x622015f714c7d297;
              auVar44._0_8_ = (uVar37 ^ uVar37 >> 0x2f) * -0x622015f714c7d297;
              auVar44._8_8_ = ppppuVar10;
              return auVar44;
            }
            if ((undefined8 ***)0x8 < pppuVar20) {
              puVar19 = (undefined *)
                        ((long)pppuVar20 + *(ulong *)((long)ppppuVar10 + (long)(pppuVar20 + -1)));
              uVar23 = (ulong)puVar19 >> ((ulong)pppuVar20 & 0x3f) |
                       (long)puVar19 << 0x40 - ((ulong)pppuVar20 & 0x3f);
              uVar37 = (uVar23 ^ (ulong)*ppppuVar10) * -0x622015f714c7d297;
              uVar37 = (uVar23 ^ uVar37 >> 0x2f ^ uVar37) * -0x622015f714c7d297;
              auVar42._0_8_ =
                   (uVar37 ^ uVar37 >> 0x2f) * -0x622015f714c7d297 ^
                   *(ulong *)((long)ppppuVar10 + (long)(pppuVar20 + -1));
              auVar42._8_8_ = ppppuVar10;
              return auVar42;
            }
            if ((undefined8 ***)0x3 < pppuVar20) {
              uVar23 = (ulong)*(uint *)((long)ppppuVar10 + (long)((long)pppuVar20 + -4));
              uVar37 = ((ulong)((long)pppuVar20 + (ulong)(uint)(*(int *)ppppuVar10 << 3)) ^ uVar23)
                       * -0x622015f714c7d297;
              uVar37 = (uVar23 ^ uVar37 >> 0x2f ^ uVar37) * -0x622015f714c7d297;
              auVar46._0_8_ = (uVar37 ^ uVar37 >> 0x2f) * -0x622015f714c7d297;
              auVar46._8_8_ = ppppuVar10;
              return auVar46;
            }
            lVar14 = -0x651e95c4d06fbfb1;
            ppppuVar11 = ppppuVar10;
            if (pppuVar20 != (undefined8 ***)0x0) {
              uVar37 = ((ulong)pppuVar20 |
                       (ulong)*(byte *)((long)ppppuVar10 + (long)((long)pppuVar20 + -1)) << 2) *
                       -0x36b62838af619aa9 ^
                       (ulong)CONCAT11(*(undefined1 *)((long)ppppuVar10 + ((ulong)pppuVar20 >> 1)),
                                       *(undefined1 *)ppppuVar10) * -0x651e95c4d06fbfb1;
              auVar47._0_8_ = (uVar37 ^ uVar37 >> 0x2f) * -0x651e95c4d06fbfb1;
              auVar47._8_8_ = ppppuVar10;
              return auVar47;
            }
          }
          else {
            if (pppuVar20 < (undefined8 ***)0x41) {
              uVar24 = (long)*ppppuVar10 +
                       (long)((long)pppuVar20 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -2))
                             ) * -0x3c5a37a36834ced9;
              pppuVar9 = ppppuVar10[3];
              uVar37 = uVar24 + (long)ppppuVar10[1];
              uVar23 = uVar37 + (long)ppppuVar10[2];
              uVar26 = *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -4)) + (long)ppppuVar10[2];
              uVar28 = (long)pppuVar9 +
                       uVar26 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1));
              uVar1 = *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -3)) + uVar26;
              lVar14 = (uVar37 >> 7 | uVar37 << 0x39) + (uVar24 >> 0x25 | uVar24 * 0x8000000) +
                       (uVar24 + (long)pppuVar9 >> 0x34 | (uVar24 + (long)pppuVar9) * 0x1000) +
                       (uVar23 >> 0x1f | uVar23 << 0x21);
              uVar37 = uVar1 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -2));
              uVar37 = (long)pppuVar9 * 0x5e873297c75b7176 +
                       (lVar14 + uVar37 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1))) *
                       -0x3c5a37a36834ced9 +
                       (uVar23 + (uVar37 >> 0x1f | uVar37 << 0x21) +
                                 (uVar28 >> 0x34 | uVar28 * 0x1000) +
                                 (uVar1 >> 7 | uVar1 << 0x39) +
                                 (uVar26 >> 0x25 | uVar26 * 0x8000000)) * -0x651e95c4d06fbfb1;
              uVar37 = lVar14 + (uVar37 ^ uVar37 >> 0x2f) * -0x3c5a37a36834ced9;
              auVar43._0_8_ = (uVar37 ^ uVar37 >> 0x2f) * -0x651e95c4d06fbfb1;
              auVar43._8_8_ = ppppuVar10;
              return auVar43;
            }
            lVar31 = *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -5));
            uVar37 = *(ulong *)((long)ppppuVar10 + (long)(pppuVar20 + -3));
            uVar23 = (uVar37 ^ (ulong)((long)pppuVar20 +
                                      *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -6)))) *
                     -0x622015f714c7d297;
            lVar14 = *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -8));
            puVar19 = (undefined *)
                      (*(long *)((long)ppppuVar10 + (long)(pppuVar20 + -7)) +
                      *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -2)));
            uVar23 = (uVar37 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
            uVar23 = (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297;
            puVar25 = (undefined *)
                      ((long)pppuVar20 +
                      *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -6)) +
                      *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -7)) + lVar14);
            puVar29 = (undefined *)((long)pppuVar20 + uVar23 + lVar31 + lVar14);
            puVar27 = puVar25 + lVar31;
            puVar25 = (undefined *)
                      ((long)pppuVar20 +
                      ((ulong)puVar29 >> 0x15 | (long)puVar29 << 0x2b) +
                      ((ulong)puVar25 >> 0x2c | (long)puVar25 * 0x100000) + lVar14);
            lVar14 = *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -4)) + -0x4b6d499041670d8d;
            puVar29 = puVar19 + uVar37 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -2)) +
                                lVar14;
            puVar30 = puVar29 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1));
            puVar29 = puVar19 + ((ulong)(puVar19 +
                                        lVar31 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1)
                                                          ) + lVar14) >> 0x15 |
                                (long)(puVar19 +
                                      lVar31 + *(long *)((long)ppppuVar10 + (long)(pppuVar20 + -1))
                                      + lVar14) << 0x2b) +
                                ((ulong)puVar29 >> 0x2c | (long)puVar29 * 0x100000) + lVar14;
            ppppuVar11 = ppppuVar10 + 4;
            lVar31 = (long)*ppppuVar10 + lVar31 * -0x4b6d499041670d8d;
            lVar14 = -((ulong)((long)pppuVar20 + -1) & 0xffffffffffffffc0);
            do {
              puVar2 = puVar27 + lVar31 + (long)puVar19;
              pppuVar9 = ppppuVar11[-4];
              puVar19 = puVar27 + ((ulong)(puVar19 + (long)puVar25 + (long)ppppuVar11[2]) >> 0x2a |
                                  (long)(puVar19 + (long)puVar25 + (long)ppppuVar11[2]) * 0x400000)
                                  * -0x4b6d499041670d8d + (long)ppppuVar11[1];
              puVar3 = puVar30 + uVar23;
              uVar37 = (long)pppuVar9 +
                       (long)ppppuVar11[-3] + (long)ppppuVar11[-2] +
                       (long)puVar25 * -0x4b6d499041670d8d;
              puVar27 = (undefined *)(uVar37 + (long)ppppuVar11[-1]);
              uVar23 = ((ulong)(puVar2 + (long)ppppuVar11[-3]) >> 0x25 |
                       (long)(puVar2 + (long)ppppuVar11[-3]) * 0x8000000) * -0x4b6d499041670d8d ^
                       (ulong)puVar29;
              lVar31 = ((ulong)puVar3 >> 0x21 | (long)puVar3 * 0x80000000) * -0x4b6d499041670d8d;
              puVar25 = (undefined *)
                        ((long)pppuVar9 +
                        ((ulong)(puVar30 +
                                (long)ppppuVar11[-1] +
                                (long)pppuVar9 + uVar23 + (long)puVar25 * -0x4b6d499041670d8d) >>
                         0x15 | (long)(puVar30 +
                                      (long)ppppuVar11[-1] +
                                      (long)pppuVar9 + uVar23 + (long)puVar25 * -0x4b6d499041670d8d)
                                << 0x2b) +
                        (uVar37 >> 0x2c | uVar37 * 0x100000) + (long)puVar25 * -0x4b6d499041670d8d);
              lVar6 = lVar31 + (long)*ppppuVar11;
              puVar2 = puVar29 + (long)ppppuVar11[1] + (long)ppppuVar11[2] + lVar6;
              puVar30 = puVar2 + (long)ppppuVar11[3];
              puVar29 = puVar29 + ((ulong)(puVar19 +
                                          (long)(puVar29 +
                                                (long)ppppuVar11[3] + (long)ppppuVar11[-2] + lVar6))
                                   >> 0x15 |
                                  (long)(puVar19 +
                                        (long)(puVar29 +
                                              (long)ppppuVar11[3] + (long)ppppuVar11[-2] + lVar6))
                                  << 0x2b) +
                                  ((ulong)puVar2 >> 0x2c | (long)puVar2 * 0x100000) + lVar6;
              ppppuVar11 = ppppuVar11 + 8;
              lVar14 = lVar14 + 0x40;
            } while (lVar14 != 0);
            uVar37 = ((ulong)puVar30 ^ (ulong)puVar27) * -0x622015f714c7d297;
            uVar28 = ((ulong)puVar30 ^ uVar37 >> 0x2f ^ uVar37) * -0x622015f714c7d297;
            uVar37 = ((ulong)puVar29 ^ (ulong)puVar25) * -0x622015f714c7d297;
            uVar37 = ((ulong)puVar29 ^ uVar37 >> 0x2f ^ uVar37) * -0x622015f714c7d297;
            uVar26 = lVar31 + (uVar37 ^ uVar37 >> 0x2f) * -0x622015f714c7d297;
            uVar37 = (uVar26 ^ uVar23 + ((ulong)puVar19 ^ (ulong)puVar19 >> 0x2f) *
                                        -0x4b6d499041670d8d +
                               (uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297) *
                     -0x622015f714c7d297;
            uVar37 = (uVar26 ^ uVar37 >> 0x2f ^ uVar37) * -0x622015f714c7d297;
            lVar14 = (uVar37 ^ uVar37 >> 0x2f) * -0x622015f714c7d297;
          }
          auVar45._8_8_ = ppppuVar11;
          auVar45._0_8_ = lVar14;
          return auVar45;
        }
        if (pppuVar35 < (undefined8 ***)0x17) {
          uStack_138 = CONCAT17((char)pppuVar35,(undefined7)uStack_138);
          pppppppuVar13 = &pppppppuStack_148;
          if (pppuVar35 == (undefined8 ***)0x0) goto LAB_1001253cc;
        }
        else {
          pppppppuVar16 = (undefined8 *******)0x19;
          if (((ulong)pppuVar35 | 7) != 0x17) {
            pppppppuVar16 = (undefined8 *******)(((ulong)pppuVar35 | 7) + 1);
          }
          pppppppuVar13 = pppppppuVar16;
          func_0x000107c60e20();
          uStack_138 = (ulong)pppppppuVar16 | 0x8000000000000000;
          pppppppuStack_148 = pppppppuVar13;
          pppuStack_140 = pppuVar35;
        }
        func_0x000107c610b8(pppppppuVar13,pppuVar33,pppuVar35);
LAB_1001253cc:
        *(undefined1 *)((long)pppppppuVar13 + (long)pppuVar35) = 0;
        pppppppuVar16 = &pppppppuStack_148;
        FUN_100125860(pppuVar21,pppppppuVar16);
        if ((long)uStack_138 < 0) {
          func_0x000107c60e14(pppppppuStack_148);
        }
        auVar41._1_7_ = 0;
        auVar41[0] = pppuVar21 != (undefined8 ***)0x0;
        auVar41._8_8_ = pppppppuVar16;
        return auVar41;
      }
      pppuVar9 = (undefined8 ***)((long)pppuVar36 << 3);
      func_0x000107c60e20();
      pppuVar20 = *ppppuVar11;
      *ppppuVar11 = pppuVar9;
      if (pppuVar20 != (undefined8 ***)0x0) {
        func_0x000107c60e14();
      }
      pppuVar9 = (undefined8 ***)0x0;
      ppppuVar11[1] = pppuVar36;
      do {
        (*ppppuVar11)[(long)pppuVar9] = (undefined8 **)0x0;
        pppuVar9 = (undefined8 ***)((long)pppuVar9 + 1);
      } while (pppuVar36 != pppuVar9);
      ppppuVar10 = ppppuVar11 + 2;
      pppuVar9 = *ppppuVar10;
      if (pppuVar9 != (undefined8 ***)0x0) {
        pppuVar20 = (undefined8 ***)pppuVar9[1];
        uVar37 = (long)pppuVar36 - 1;
        if (((ulong)pppuVar36 & uVar37) != 0) {
          if (pppuVar36 <= pppuVar20) {
            uVar37 = 0;
            if (pppuVar36 != (undefined8 ***)0x0) {
              uVar37 = (ulong)pppuVar20 / (ulong)pppuVar36;
            }
            pppuVar20 = (undefined8 ***)((long)pppuVar20 - uVar37 * (long)pppuVar36);
          }
          (*ppppuVar11)[(long)pppuVar20] = ppppuVar10;
          pppuVar35 = (undefined8 ***)*pppuVar9;
joined_r0x0001001250f8:
          if (pppuVar35 != (undefined8 ***)0x0) {
            do {
              pppuVar21 = (undefined8 ***)pppuVar35[1];
              if (pppuVar36 <= pppuVar21) {
                uVar37 = 0;
                if (pppuVar36 != (undefined8 ***)0x0) {
                  uVar37 = (ulong)pppuVar21 / (ulong)pppuVar36;
                }
                pppuVar21 = (undefined8 ***)((long)pppuVar21 - uVar37 * (long)pppuVar36);
              }
              if (pppuVar21 != pppuVar20) {
                if ((*ppppuVar11)[(long)pppuVar21] == (undefined8 **)0x0) goto code_r0x00010012515c;
                *pppuVar9 = *pppuVar35;
                *pppuVar35 = (undefined8 **)*(*ppppuVar11)[(long)pppuVar21];
                *(*ppppuVar11)[(long)pppuVar21] = pppuVar35;
                pppuVar35 = pppuVar9;
              }
              pppuVar9 = pppuVar35;
              pppuVar35 = (undefined8 ***)*pppuVar9;
              if (pppuVar35 == (undefined8 ***)0x0) break;
            } while( true );
          }
          goto LAB_10012526c;
        }
        (*ppppuVar11)[(ulong)pppuVar20 & uVar37] = ppppuVar10;
        uVar23 = (ulong)pppuVar20 & uVar37;
        while (pppuVar20 = pppuVar9, pppuVar9 = (undefined8 ***)*pppuVar20,
              pppuVar9 != (undefined8 ***)0x0) {
          uVar26 = (ulong)pppuVar9[1] & uVar37;
          if (uVar26 != uVar23) {
            if ((*ppppuVar11)[uVar26] == (undefined8 **)0x0) {
              (*ppppuVar11)[uVar26] = pppuVar20;
              uVar23 = uVar26;
            }
            else {
              *pppuVar20 = *pppuVar9;
              *pppuVar9 = (undefined8 **)*(*ppppuVar11)[uVar26];
              *(*ppppuVar11)[uVar26] = pppuVar9;
              pppuVar9 = pppuVar20;
            }
          }
        }
      }
    }
    else if (pppuVar36 < pppuVar35) {
      pppuVar21 = (undefined8 ***)(long)((float)ppppuVar11[3] / *(float *)(ppppuVar11 + 4));
      if ((pppuVar35 < (undefined8 ***)0x3) || (((ulong)pppuVar35 & (long)pppuVar35 - 1U) != 0)) {
        func_0x000107c60c44();
        if (pppuVar36 <= pppuVar21) {
          pppuVar36 = pppuVar21;
        }
      }
      else {
        if ((undefined8 ***)0x1 < pppuVar21) {
          pppuVar21 = (undefined8 ***)(1L << (-LZCOUNT((long)pppuVar21 + -1) & 0x3fU));
        }
        if (pppuVar36 <= pppuVar21) {
          pppuVar36 = pppuVar21;
        }
      }
      if (pppuVar36 < pppuVar35) {
        if (pppuVar36 != (undefined8 ***)0x0) goto LAB_100125080;
        pppuVar9 = *ppppuVar11;
        *ppppuVar11 = (undefined8 ***)0x0;
        if (pppuVar9 != (undefined8 ***)0x0) {
          func_0x000107c60e14();
        }
        ppppuVar11[1] = (undefined8 ***)0x0;
      }
    }
LAB_10012526c:
    pppuVar35 = ppppuVar11[1];
    if (((ulong)pppuVar35 & (long)pppuVar35 - 1U) == 0) {
      pppuVar34 = (undefined8 ***)((long)pppuVar35 - 1U & (ulong)pppuVar34);
      pppuVar20 = *ppppuVar11;
      pppuVar9 = (undefined8 ***)pppuVar20[(long)pppuVar34];
      goto joined_r0x0001001252f8;
    }
    if (pppuVar35 <= pppuVar34) {
      uVar37 = 0;
      if (pppuVar35 != (undefined8 ***)0x0) {
        uVar37 = (ulong)pppuVar34 / (ulong)pppuVar35;
      }
      pppuVar34 = (undefined8 ***)((long)pppuVar34 - uVar37 * (long)pppuVar35);
      pppuVar20 = *ppppuVar11;
      pppuVar9 = (undefined8 ***)pppuVar20[(long)pppuVar34];
      goto joined_r0x0001001252f8;
    }
    pppuVar20 = *ppppuVar11;
    pppuVar9 = (undefined8 ***)pppuVar20[(long)pppuVar34];
    if (pppuVar9 != (undefined8 ***)0x0) goto LAB_100125014;
LAB_1001252a8:
    ppppuVar10 = ppppuVar11 + 2;
    *pppuVar12 = *ppppuVar10;
    *ppppuVar10 = pppuVar12;
    pppuVar20[(long)pppuVar34] = ppppuVar10;
    if (*pppuVar12 != (undefined8 **)0x0) {
      pppuVar9 = (undefined8 ***)(*pppuVar12)[1];
      if (((ulong)pppuVar35 & (long)pppuVar35 - 1U) == 0) {
        pppuVar9 = (undefined8 ***)((ulong)pppuVar9 & (long)pppuVar35 - 1U);
      }
      else if (pppuVar35 <= pppuVar9) {
        uVar37 = 0;
        if (pppuVar35 != (undefined8 ***)0x0) {
          uVar37 = (ulong)pppuVar9 / (ulong)pppuVar35;
        }
        pppuVar9 = (undefined8 ***)((long)pppuVar9 - uVar37 * (long)pppuVar35);
      }
      pppuVar9 = *ppppuVar11 + (long)pppuVar9;
      goto LAB_10012530c;
    }
  }
  else {
    pppuVar20 = *ppppuVar11;
    pppuVar9 = (undefined8 ***)pppuVar20[(long)pppuVar36];
    pppuVar34 = pppuVar36;
joined_r0x0001001252f8:
    if (pppuVar9 == (undefined8 ***)0x0) goto LAB_1001252a8;
LAB_100125014:
    *pppuVar12 = *pppuVar9;
LAB_10012530c:
    *pppuVar9 = pppuVar12;
  }
  ppppuVar11[3] = (undefined8 ***)((long)ppppuVar11[3] + 1);
  uVar15 = 1;
LAB_100125320:
  auVar40._8_8_ = uVar15;
  auVar40._0_8_ = pppuVar12;
  return auVar40;
code_r0x000100124ba4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
  if (bVar5) {
    ppppuRam000000011383aae8 = (undefined8 ****)0x1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x000100124bac;
  goto LAB_100124b9c;
code_r0x000100124bac:
  pppuStack_60 = (ulong ***)0xaaaaaaaaaaaaaaaa;
  pppuStack_58 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&pppuStack_60);
  func_0x000107c61274(&pppuStack_60,1);
  ppppuVar11 = (undefined8 ****)0x11383aaf0;
  func_0x000107c6125c(0x11383aaf0,&pppuStack_60);
  func_0x000107c6126c(&pppuStack_60);
  ppppuRam000000011383aae8 = (undefined8 ****)0x11383aaf0;
  ppppuVar10 = ppppuVar11;
  func_0x000107c61264();
  iVar8 = (int)ppppuVar10;
  goto joined_r0x000100124bec;
LAB_100124fbc:
  uVar15 = 0;
  goto LAB_100125320;
code_r0x00010012515c:
  (*ppppuVar11)[(long)pppuVar21] = pppuVar9;
  pppuVar9 = pppuVar35;
  pppuVar35 = (undefined8 ***)*pppuVar35;
  pppuVar20 = pppuVar21;
  goto joined_r0x0001001250f8;
}



/* Entry: 100124e6c; end: 100125343;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_100124e6c(long *param_1,ulong *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar12 = (ulong *)*param_2;
  uVar18 = param_2[1];
  if (uVar18 == 0) {
    plVar25 = (long *)0x0;
    plVar26 = (long *)param_1[1];
    if (plVar26 != (long *)0x0) goto LAB_100124ec0;
LAB_100124efc:
    plVar27 = (long *)0xaaaaaaaaaaaaaaaa;
  }
  else {
    plVar25 = (long *)0x0;
    uVar28 = uVar18;
    puVar17 = puVar12;
    do {
      plVar25 = (long *)((long)(char)*puVar17 + (long)plVar25 * 0x83);
      uVar28 = uVar28 - 1;
      puVar17 = (ulong *)((long)puVar17 + 1);
    } while (uVar28 != 0);
    plVar26 = (long *)param_1[1];
    if (plVar26 == (long *)0x0) goto LAB_100124efc;
LAB_100124ec0:
    uVar28 = (long)plVar26 - 1;
    if (((ulong)plVar26 & uVar28) == 0) {
      plVar27 = (long *)(uVar28 & (ulong)plVar25);
      puVar13 = *(undefined8 **)(*param_1 + (long)plVar27 * 8);
    }
    else {
      plVar27 = plVar25;
      if (plVar26 <= plVar25) {
        uVar22 = 0;
        if (plVar26 != (long *)0x0) {
          uVar22 = (ulong)plVar25 / (ulong)plVar26;
        }
        plVar27 = (long *)((long)plVar25 - uVar22 * (long)plVar26);
      }
      puVar13 = *(undefined8 **)(*param_1 + (long)plVar27 * 8);
    }
    if ((puVar13 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar13, plVar7 != (long *)0x0)) {
      if (((ulong)plVar26 & uVar28) == 0) {
        do {
          if ((long *)plVar7[1] == plVar25) {
            if (plVar7[3] == uVar18) {
              iVar6 = (int)plVar7[2];
              param_2 = puVar12;
              param_3 = uVar18;
              func_0x000107c610b0();
              if (iVar6 == 0) goto LAB_100124fbc;
            }
          }
          else if ((long *)((ulong)plVar7[1] & uVar28) != plVar27) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          plVar14 = (long *)plVar7[1];
          if (plVar14 == plVar25) {
            if (plVar7[3] == uVar18) {
              iVar6 = (int)plVar7[2];
              param_2 = puVar12;
              param_3 = uVar18;
              func_0x000107c610b0();
              if (iVar6 == 0) goto LAB_100124fbc;
            }
          }
          else {
            if (plVar26 <= plVar14) {
              uVar28 = 0;
              if (plVar26 != (long *)0x0) {
                uVar28 = (ulong)plVar14 / (ulong)plVar26;
              }
              plVar14 = (long *)((long)plVar14 - uVar28 * (long)plVar26);
            }
            if (plVar14 != plVar27) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)0x28;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = (long)plVar25;
  lVar15 = *(long *)*param_4;
  plVar7[3] = ((long *)*param_4)[1];
  plVar7[2] = lVar15;
  plVar7[4] = 0;
  if ((plVar26 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar26 < (float)(param_1[3] + 1))) {
    uVar28 = 1;
    if ((long *)0x2 < plVar26) {
      uVar28 = (ulong)(((ulong)plVar26 & (long)plVar26 - 1U) != 0);
    }
    plVar27 = (long *)(uVar28 | (long)plVar26 << 1);
    plVar14 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar27 <= plVar14) {
      plVar27 = plVar14;
    }
    plVar14 = plVar7;
    if ((long)plVar27 - 1U == 0) {
      plVar27 = (long *)0x2;
    }
    else if (((ulong)plVar27 & (long)plVar27 - 1U) != 0) {
      func_0x000107c60c44();
      plVar26 = (long *)param_1[1];
      plVar14 = plVar27;
    }
    if (plVar26 < plVar27) {
LAB_100125080:
      if ((ulong)plVar27 >> 0x3d != 0) {
        func_0x000107c35c58();
        pcStack_68 = FUN_100125344;
        uVar22 = *param_2;
        uVar28 = uVar22;
        plStack_a0 = plVar25;
        uStack_98 = uVar18;
        puStack_90 = puVar12;
        plStack_88 = plVar27;
        plStack_80 = plVar7;
        plStack_78 = param_1;
        puStack_70 = &stack0xfffffffffffffff0;
        func_0x000107c613d0();
        if (0x7ffffffffffffff7 < uVar28) {
          func_0x000107c35c54();
          if (param_3 < 0x21) {
            if (0x10 < param_3) {
              lVar15 = *(long *)((long)param_2 + (param_3 - 8));
              uVar28 = lVar15 * -0x651e95c4d06fbfb1;
              uVar22 = *param_2 * -0x4b6d499041670d8d - param_2[1];
              uVar18 = param_2[1] ^ 0xc949d7c7509e6557;
              uVar18 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar18 >> 0x14 | uVar18 << 0x2c)
                       + lVar15 * 0x651e95c4d06fbfb1;
              uVar28 = ((uVar28 >> 0x1e | uVar28 << 0x22) + (uVar22 >> 0x2b | uVar22 * 0x200000) +
                        *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar18)
                       * -0x622015f714c7d297;
              uVar18 = (uVar18 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
              auVar33._0_8_ = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
              auVar33._8_8_ = param_2;
              return auVar33;
            }
            if (8 < param_3) {
              uVar28 = *(ulong *)((long)param_2 + (param_3 - 8));
              uVar18 = uVar28 + param_3;
              uVar22 = uVar18 >> (param_3 & 0x3f) | uVar18 << 0x40 - (param_3 & 0x3f);
              uVar18 = (uVar22 ^ *param_2) * -0x622015f714c7d297;
              uVar18 = (uVar22 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
              auVar31._0_8_ = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297 ^ uVar28;
              auVar31._8_8_ = param_2;
              return auVar31;
            }
            if (3 < param_3) {
              uVar28 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
              uVar18 = (param_3 + (uint)((int)*param_2 << 3) ^ uVar28) * -0x622015f714c7d297;
              uVar18 = (uVar28 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
              auVar35._0_8_ = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
              auVar35._8_8_ = param_2;
              return auVar35;
            }
            lVar15 = -0x651e95c4d06fbfb1;
            puVar12 = param_2;
            if (param_3 != 0) {
              uVar18 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                       -0x36b62838af619aa9 ^
                       (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),
                                       (char)*param_2) * -0x651e95c4d06fbfb1;
              auVar36._0_8_ = (uVar18 ^ uVar18 >> 0x2f) * -0x651e95c4d06fbfb1;
              auVar36._8_8_ = param_2;
              return auVar36;
            }
          }
          else {
            if (param_3 < 0x41) {
              lVar21 = *(long *)((long)param_2 + (param_3 - 0x10));
              uVar20 = *param_2 + (lVar21 + param_3) * -0x3c5a37a36834ced9;
              uVar24 = param_2[3];
              uVar18 = uVar20 + param_2[1];
              uVar28 = uVar18 + param_2[2];
              uVar22 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
              lVar15 = *(long *)((long)param_2 + (param_3 - 8)) + uVar24;
              uVar23 = lVar15 + uVar22;
              uVar1 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar22;
              lVar8 = (uVar18 >> 7 | uVar18 << 0x39) + (uVar20 >> 0x25 | uVar20 * 0x8000000) +
                      (uVar20 + uVar24 >> 0x34 | (uVar20 + uVar24) * 0x1000) +
                      (uVar28 >> 0x1f | uVar28 << 0x21);
              uVar18 = uVar1 + lVar21;
              uVar18 = (uVar18 + lVar15 + lVar8) * -0x3c5a37a36834ced9 +
                       (uVar28 + uVar24 + (uVar22 >> 0x25 | uVar22 * 0x8000000) +
                                 (uVar1 >> 7 | uVar1 << 0x39) + (uVar23 >> 0x34 | uVar23 * 0x1000) +
                                 (uVar18 >> 0x1f | uVar18 << 0x21)) * -0x651e95c4d06fbfb1;
              uVar18 = lVar8 + (uVar18 ^ uVar18 >> 0x2f) * -0x3c5a37a36834ced9;
              auVar32._0_8_ = (uVar18 ^ uVar18 >> 0x2f) * -0x651e95c4d06fbfb1;
              auVar32._8_8_ = param_2;
              return auVar32;
            }
            lVar8 = *(long *)((long)param_2 + (param_3 - 0x30));
            lVar3 = *(long *)((long)param_2 + (param_3 - 0x28));
            uVar1 = *(ulong *)((long)param_2 + (param_3 - 0x18));
            uVar28 = (uVar1 ^ lVar8 + param_3) * -0x622015f714c7d297;
            lVar4 = *(long *)((long)param_2 + (param_3 - 0x38));
            lVar21 = *(long *)((long)param_2 + (param_3 - 0x10));
            lVar5 = *(long *)((long)param_2 + (param_3 - 8));
            uVar18 = lVar4 + lVar21;
            uVar28 = (uVar1 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
            uVar20 = (uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297;
            lVar15 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
            uVar28 = lVar8 + lVar4 + lVar15;
            uVar22 = lVar15 + lVar3 + uVar20;
            uVar23 = uVar28 + lVar3;
            uVar28 = (uVar28 >> 0x2c | uVar28 * 0x100000) + lVar15 +
                     (uVar22 >> 0x15 | uVar22 << 0x2b);
            lVar15 = uVar18 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
            uVar22 = lVar15 + lVar3 + lVar5;
            uVar1 = uVar1 + lVar21 + lVar15;
            uVar24 = uVar1 + lVar5;
            uVar22 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar15 + (uVar22 >> 0x15 | uVar22 << 0x2b)
            ;
            puVar12 = param_2 + 4;
            lVar8 = *param_2 + lVar3 * -0x4b6d499041670d8d;
            lVar15 = -(param_3 - 1 & 0xffffffffffffffc0);
            do {
              uVar1 = lVar8 + uVar23 + uVar18 + puVar12[-3];
              uVar18 = uVar18 + uVar28 + puVar12[2];
              uVar18 = puVar12[1] + uVar23 +
                       (uVar18 >> 0x2a | uVar18 * 0x400000) * -0x4b6d499041670d8d;
              uVar2 = uVar20 + uVar24;
              lVar21 = puVar12[-4] + uVar28 * -0x4b6d499041670d8d;
              uVar28 = lVar21 + puVar12[-3] + puVar12[-2];
              uVar23 = uVar28 + puVar12[-1];
              uVar20 = (uVar1 >> 0x25 | uVar1 * 0x8000000) * -0x4b6d499041670d8d ^ uVar22;
              lVar8 = (uVar2 >> 0x21 | uVar2 * 0x80000000) * -0x4b6d499041670d8d;
              uVar1 = lVar21 + uVar24 + puVar12[-1] + uVar20;
              uVar28 = (uVar28 >> 0x2c | uVar28 * 0x100000) + lVar21 +
                       (uVar1 >> 0x15 | uVar1 << 0x2b);
              lVar21 = lVar8 + uVar22 + *puVar12;
              uVar22 = uVar18 + puVar12[-2] + lVar21 + puVar12[3];
              uVar1 = puVar12[1] + puVar12[2] + lVar21;
              uVar24 = uVar1 + puVar12[3];
              uVar22 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar21 +
                       (uVar22 >> 0x15 | uVar22 << 0x2b);
              puVar12 = puVar12 + 8;
              lVar15 = lVar15 + 0x40;
            } while (lVar15 != 0);
            uVar23 = (uVar24 ^ uVar23) * -0x622015f714c7d297;
            uVar23 = (uVar24 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
            uVar28 = (uVar22 ^ uVar28) * -0x622015f714c7d297;
            uVar28 = (uVar22 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
            uVar28 = lVar8 + (uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297;
            uVar18 = (uVar28 ^ uVar20 + (uVar18 ^ uVar18 >> 0x2f) * -0x4b6d499041670d8d +
                               (uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297) *
                     -0x622015f714c7d297;
            uVar18 = (uVar28 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
            lVar15 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
          }
          auVar34._8_8_ = puVar12;
          auVar34._0_8_ = lVar15;
          return auVar34;
        }
        if (uVar28 < 0x17) {
          uStack_a8 = CONCAT17((char)uVar28,(undefined7)uStack_a8);
          pppppppuVar9 = &pppppppuStack_b8;
          if (uVar28 == 0) goto LAB_1001253cc;
        }
        else {
          pppppppuVar11 = (undefined8 *******)0x19;
          if ((uVar28 | 7) != 0x17) {
            pppppppuVar11 = (undefined8 *******)((uVar28 | 7) + 1);
          }
          pppppppuVar9 = pppppppuVar11;
          func_0x000107c60e20();
          uStack_a8 = (ulong)pppppppuVar11 | 0x8000000000000000;
          pppppppuStack_b8 = pppppppuVar9;
          uStack_b0 = uVar28;
        }
        func_0x000107c610b8(pppppppuVar9,uVar22,uVar28);
LAB_1001253cc:
        *(undefined1 *)((long)pppppppuVar9 + uVar28) = 0;
        pppppppuVar11 = &pppppppuStack_b8;
        FUN_100125860(plVar14,pppppppuVar11);
        if ((long)uStack_a8 < 0) {
          func_0x000107c60e14(pppppppuStack_b8);
        }
        auVar30._1_7_ = 0;
        auVar30[0] = plVar14 != (long *)0x0;
        auVar30._8_8_ = pppppppuVar11;
        return auVar30;
      }
      lVar15 = (long)plVar27 << 3;
      func_0x000107c60e20();
      lVar8 = *param_1;
      *param_1 = lVar15;
      if (lVar8 != 0) {
        func_0x000107c60e14();
      }
      plVar26 = (long *)0x0;
      param_1[1] = (long)plVar27;
      do {
        *(undefined8 *)(*param_1 + (long)plVar26 * 8) = 0;
        plVar26 = (long *)((long)plVar26 + 1);
      } while (plVar27 != plVar26);
      plVar14 = param_1 + 2;
      plVar26 = (long *)*plVar14;
      if (plVar26 != (long *)0x0) {
        plVar16 = (long *)plVar26[1];
        uVar18 = (long)plVar27 - 1;
        if (((ulong)plVar27 & uVar18) != 0) {
          if (plVar27 <= plVar16) {
            uVar18 = 0;
            if (plVar27 != (long *)0x0) {
              uVar18 = (ulong)plVar16 / (ulong)plVar27;
            }
            plVar16 = (long *)((long)plVar16 - uVar18 * (long)plVar27);
          }
          *(long **)(*param_1 + (long)plVar16 * 8) = plVar14;
          plVar14 = (long *)*plVar26;
joined_r0x0001001250f8:
          if (plVar14 != (long *)0x0) {
            do {
              plVar19 = (long *)plVar14[1];
              if (plVar27 <= plVar19) {
                uVar18 = 0;
                if (plVar27 != (long *)0x0) {
                  uVar18 = (ulong)plVar19 / (ulong)plVar27;
                }
                plVar19 = (long *)((long)plVar19 - uVar18 * (long)plVar27);
              }
              if (plVar19 != plVar16) {
                if (*(long *)(*param_1 + (long)plVar19 * 8) == 0) goto code_r0x00010012515c;
                *plVar26 = *plVar14;
                *plVar14 = **(long **)(*param_1 + (long)plVar19 * 8);
                **(undefined8 **)(*param_1 + (long)plVar19 * 8) = plVar14;
                plVar14 = plVar26;
              }
              plVar26 = plVar14;
              plVar14 = (long *)*plVar26;
              if (plVar14 == (long *)0x0) break;
            } while( true );
          }
          goto LAB_10012526c;
        }
        *(long **)(*param_1 + ((ulong)plVar16 & uVar18) * 8) = plVar14;
        uVar28 = (ulong)plVar16 & uVar18;
        while (plVar27 = plVar26, plVar26 = (long *)*plVar27, plVar26 != (long *)0x0) {
          uVar22 = plVar26[1] & uVar18;
          if (uVar22 != uVar28) {
            if (*(long *)(*param_1 + uVar22 * 8) == 0) {
              *(long **)(*param_1 + uVar22 * 8) = plVar27;
              uVar28 = uVar22;
            }
            else {
              *plVar27 = *plVar26;
              *plVar26 = **(long **)(*param_1 + uVar22 * 8);
              **(undefined8 **)(*param_1 + uVar22 * 8) = plVar26;
              plVar26 = plVar27;
            }
          }
        }
      }
    }
    else if (plVar27 < plVar26) {
      plVar14 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar26 < (long *)0x3) || (((ulong)plVar26 & (long)plVar26 - 1U) != 0)) {
        func_0x000107c60c44();
        if (plVar27 <= plVar14) {
          plVar27 = plVar14;
        }
      }
      else {
        if ((long *)0x1 < plVar14) {
          plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
        }
        if (plVar27 <= plVar14) {
          plVar27 = plVar14;
        }
      }
      if (plVar27 < plVar26) {
        if (plVar27 != (long *)0x0) goto LAB_100125080;
        lVar15 = *param_1;
        *param_1 = 0;
        if (lVar15 != 0) {
          func_0x000107c60e14();
        }
        param_1[1] = 0;
      }
    }
LAB_10012526c:
    plVar26 = (long *)param_1[1];
    if (((ulong)plVar26 & (long)plVar26 - 1U) == 0) {
      plVar27 = (long *)((long)plVar26 - 1U & (ulong)plVar25);
      lVar15 = *param_1;
      plVar14 = *(long **)(lVar15 + (long)plVar27 * 8);
      goto joined_r0x000100125290;
    }
    if (plVar25 < plVar26) {
      lVar15 = *param_1;
      plVar14 = *(long **)(lVar15 + (long)plVar25 * 8);
      plVar27 = plVar25;
      goto joined_r0x000100125290;
    }
    uVar18 = 0;
    if (plVar26 != (long *)0x0) {
      uVar18 = (ulong)plVar25 / (ulong)plVar26;
    }
    plVar27 = (long *)((long)plVar25 - uVar18 * (long)plVar26);
    lVar15 = *param_1;
    plVar14 = *(long **)(lVar15 + (long)plVar27 * 8);
    if (plVar14 == (long *)0x0) goto LAB_1001252a8;
LAB_100125014:
    *plVar7 = *plVar14;
LAB_10012530c:
    *plVar14 = (long)plVar7;
  }
  else {
    lVar15 = *param_1;
    plVar14 = *(long **)(lVar15 + (long)plVar27 * 8);
joined_r0x000100125290:
    if (plVar14 != (long *)0x0) goto LAB_100125014;
LAB_1001252a8:
    plVar25 = param_1 + 2;
    *plVar7 = *plVar25;
    *plVar25 = (long)plVar7;
    *(long **)(lVar15 + (long)plVar27 * 8) = plVar25;
    if (*plVar7 != 0) {
      plVar25 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar26 & (long)plVar26 - 1U) == 0) {
        plVar25 = (long *)((ulong)plVar25 & (long)plVar26 - 1U);
      }
      else if (plVar26 <= plVar25) {
        uVar18 = 0;
        if (plVar26 != (long *)0x0) {
          uVar18 = (ulong)plVar25 / (ulong)plVar26;
        }
        plVar25 = (long *)((long)plVar25 - uVar18 * (long)plVar26);
      }
      plVar14 = (long *)(*param_1 + (long)plVar25 * 8);
      goto LAB_10012530c;
    }
  }
  param_1[3] = param_1[3] + 1;
  uVar10 = 1;
LAB_100125320:
  auVar29._8_8_ = uVar10;
  auVar29._0_8_ = plVar7;
  return auVar29;
LAB_100124fbc:
  uVar10 = 0;
  goto LAB_100125320;
code_r0x00010012515c:
  *(long **)(*param_1 + (long)plVar19 * 8) = plVar26;
  plVar26 = plVar14;
  plVar14 = (long *)*plVar14;
  plVar16 = plVar19;
  goto joined_r0x0001001250f8;
}



/* Entry: 100125344; end: 100125413;  */

ulong FUN_100125344(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar17 = *param_2;
  uVar9 = uVar17;
  func_0x000107c613d0();
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000107c35c54();
    if (param_3 < 0x21) {
      if (0x10 < param_3) {
        lVar14 = *(long *)((long)param_2 + (param_3 - 8));
        uVar17 = lVar14 * -0x651e95c4d06fbfb1;
        uVar10 = *param_2 * -0x4b6d499041670d8d - param_2[1];
        uVar9 = param_2[1] ^ 0xc949d7c7509e6557;
        uVar9 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar9 >> 0x14 | uVar9 << 0x2c) +
                lVar14 * 0x651e95c4d06fbfb1;
        uVar17 = ((uVar17 >> 0x1e | uVar17 << 0x22) + (uVar10 >> 0x2b | uVar10 * 0x200000) +
                  *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar9) *
                 -0x622015f714c7d297;
        uVar9 = (uVar9 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
        return (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
      }
      if (8 < param_3) {
        uVar17 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar9 = uVar17 + param_3;
        uVar10 = uVar9 >> (param_3 & 0x3f) | uVar9 << 0x40 - (param_3 & 0x3f);
        uVar9 = (uVar10 ^ *param_2) * -0x622015f714c7d297;
        uVar9 = (uVar10 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
        return (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297 ^ uVar17;
      }
      if (3 < param_3) {
        uVar17 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
        uVar9 = (param_3 + (uint)((int)*param_2 << 3) ^ uVar17) * -0x622015f714c7d297;
        uVar9 = (uVar17 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
        return (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
      }
      uVar9 = 0x9ae16a3b2f90404f;
      if (param_3 != 0) {
        uVar9 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                -0x36b62838af619aa9 ^
                (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                -0x651e95c4d06fbfb1;
        return (uVar9 ^ uVar9 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
    }
    else {
      if (param_3 < 0x41) {
        lVar12 = *(long *)((long)param_2 + (param_3 - 0x10));
        uVar11 = *param_2 + (lVar12 + param_3) * -0x3c5a37a36834ced9;
        uVar15 = param_2[3];
        uVar9 = uVar11 + param_2[1];
        uVar17 = uVar9 + param_2[2];
        uVar10 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
        lVar14 = *(long *)((long)param_2 + (param_3 - 8)) + uVar15;
        uVar13 = lVar14 + uVar10;
        uVar1 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar10;
        lVar16 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar11 >> 0x25 | uVar11 * 0x8000000) +
                 (uVar11 + uVar15 >> 0x34 | (uVar11 + uVar15) * 0x1000) +
                 (uVar17 >> 0x1f | uVar17 << 0x21);
        uVar9 = uVar1 + lVar12;
        uVar9 = (uVar9 + lVar14 + lVar16) * -0x3c5a37a36834ced9 +
                (uVar17 + uVar15 + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                          (uVar1 >> 7 | uVar1 << 0x39) + (uVar13 >> 0x34 | uVar13 * 0x1000) +
                          (uVar9 >> 0x1f | uVar9 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar9 = lVar16 + (uVar9 ^ uVar9 >> 0x2f) * -0x3c5a37a36834ced9;
        return (uVar9 ^ uVar9 >> 0x2f) * -0x651e95c4d06fbfb1;
      }
      lVar16 = *(long *)((long)param_2 + (param_3 - 0x30));
      lVar4 = *(long *)((long)param_2 + (param_3 - 0x28));
      uVar1 = *(ulong *)((long)param_2 + (param_3 - 0x18));
      uVar17 = (uVar1 ^ lVar16 + param_3) * -0x622015f714c7d297;
      lVar5 = *(long *)((long)param_2 + (param_3 - 0x38));
      lVar12 = *(long *)((long)param_2 + (param_3 - 0x10));
      lVar6 = *(long *)((long)param_2 + (param_3 - 8));
      uVar9 = lVar5 + lVar12;
      uVar17 = (uVar1 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
      uVar11 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
      lVar14 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
      uVar17 = lVar16 + lVar5 + lVar14;
      uVar10 = lVar14 + lVar4 + uVar11;
      uVar13 = uVar17 + lVar4;
      uVar17 = (uVar17 >> 0x2c | uVar17 * 0x100000) + lVar14 + (uVar10 >> 0x15 | uVar10 << 0x2b);
      lVar14 = uVar9 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
      uVar10 = lVar14 + lVar4 + lVar6;
      uVar1 = uVar1 + lVar12 + lVar14;
      uVar15 = uVar1 + lVar6;
      uVar10 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar14 + (uVar10 >> 0x15 | uVar10 << 0x2b);
      puVar8 = param_2 + 4;
      lVar16 = *param_2 + lVar4 * -0x4b6d499041670d8d;
      lVar14 = -(param_3 - 1 & 0xffffffffffffffc0);
      do {
        uVar1 = lVar16 + uVar13 + uVar9 + puVar8[-3];
        uVar9 = uVar9 + uVar17 + puVar8[2];
        uVar9 = puVar8[1] + uVar13 + (uVar9 >> 0x2a | uVar9 * 0x400000) * -0x4b6d499041670d8d;
        uVar2 = uVar11 + uVar15;
        lVar12 = puVar8[-4] + uVar17 * -0x4b6d499041670d8d;
        uVar17 = lVar12 + puVar8[-3] + puVar8[-2];
        uVar13 = uVar17 + puVar8[-1];
        uVar11 = (uVar1 >> 0x25 | uVar1 * 0x8000000) * -0x4b6d499041670d8d ^ uVar10;
        lVar16 = (uVar2 >> 0x21 | uVar2 * 0x80000000) * -0x4b6d499041670d8d;
        uVar1 = lVar12 + uVar15 + puVar8[-1] + uVar11;
        uVar17 = (uVar17 >> 0x2c | uVar17 * 0x100000) + lVar12 + (uVar1 >> 0x15 | uVar1 << 0x2b);
        lVar12 = lVar16 + uVar10 + *puVar8;
        uVar10 = uVar9 + puVar8[-2] + lVar12 + puVar8[3];
        uVar1 = puVar8[1] + puVar8[2] + lVar12;
        uVar15 = uVar1 + puVar8[3];
        uVar10 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar12 + (uVar10 >> 0x15 | uVar10 << 0x2b);
        puVar8 = puVar8 + 8;
        lVar14 = lVar14 + 0x40;
      } while (lVar14 != 0);
      uVar13 = (uVar15 ^ uVar13) * -0x622015f714c7d297;
      uVar13 = (uVar15 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      uVar17 = (uVar10 ^ uVar17) * -0x622015f714c7d297;
      uVar17 = (uVar10 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
      uVar17 = lVar16 + (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
      uVar9 = (uVar17 ^ uVar11 + (uVar9 ^ uVar9 >> 0x2f) * -0x4b6d499041670d8d +
                        (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar9 = (uVar17 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
      uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    }
    return uVar9;
  }
  if (uVar9 < 0x17) {
    uStack_48 = CONCAT17((char)uVar9,(undefined7)uStack_48);
    ppppuVar7 = &pppuStack_58;
    if (uVar9 == 0) goto LAB_1001253cc;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((uVar9 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((uVar9 | 7) + 1);
    }
    ppppuVar7 = ppppuVar3;
    func_0x000107c60e20();
    uStack_48 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_58 = ppppuVar7;
    uStack_50 = uVar9;
  }
  func_0x000107c610b8(ppppuVar7,uVar17,uVar9);
LAB_1001253cc:
  *(undefined1 *)((long)ppppuVar7 + uVar9) = 0;
  FUN_100125860(param_1,&pppuStack_58);
  if ((long)uStack_48 < 0) {
    func_0x000107c60e14(pppuStack_58);
  }
  return (ulong)(param_1 != 0);
}



/* Entry: 100125414; end: 10012585f;  */

ulong FUN_100125414(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  if (param_3 < 0x21) {
    if (0x10 < param_3) {
      lVar13 = *(long *)((long)param_2 + (param_3 - 8));
      uVar8 = lVar13 * -0x651e95c4d06fbfb1;
      uVar9 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar7 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar7 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar7 >> 0x14 | uVar7 << 0x2c) +
              lVar13 * 0x651e95c4d06fbfb1;
      uVar8 = ((uVar8 >> 0x1e | uVar8 << 0x22) + (uVar9 >> 0x2b | uVar9 * 0x200000) +
               *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar7) *
              -0x622015f714c7d297;
      uVar7 = (uVar7 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    }
    if (8 < param_3) {
      uVar8 = *(ulong *)((long)param_2 + (param_3 - 8));
      uVar7 = uVar8 + param_3;
      uVar9 = uVar7 >> (param_3 & 0x3f) | uVar7 << 0x40 - (param_3 & 0x3f);
      uVar7 = (uVar9 ^ *param_2) * -0x622015f714c7d297;
      uVar7 = (uVar9 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297 ^ uVar8;
    }
    if (3 < param_3) {
      uVar8 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar7 = (param_3 + (uint)((int)*param_2 << 3) ^ uVar8) * -0x622015f714c7d297;
      uVar7 = (uVar8 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    }
    uVar7 = 0x9ae16a3b2f90404f;
    if (param_3 != 0) {
      uVar7 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) * -0x36b62838af619aa9
              ^ (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                -0x651e95c4d06fbfb1;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      lVar11 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar10 = *param_2 + (lVar11 + param_3) * -0x3c5a37a36834ced9;
      uVar14 = param_2[3];
      uVar7 = uVar10 + param_2[1];
      uVar8 = uVar7 + param_2[2];
      uVar9 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar13 = *(long *)((long)param_2 + (param_3 - 8)) + uVar14;
      uVar12 = lVar13 + uVar9;
      uVar1 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar9;
      lVar15 = (uVar7 >> 7 | uVar7 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
               (uVar10 + uVar14 >> 0x34 | (uVar10 + uVar14) * 0x1000) +
               (uVar8 >> 0x1f | uVar8 << 0x21);
      uVar7 = uVar1 + lVar11;
      uVar7 = (uVar7 + lVar13 + lVar15) * -0x3c5a37a36834ced9 +
              (uVar8 + uVar14 + (uVar9 >> 0x25 | uVar9 * 0x8000000) + (uVar1 >> 7 | uVar1 << 0x39) +
                       (uVar12 >> 0x34 | uVar12 * 0x1000) + (uVar7 >> 0x1f | uVar7 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar7 = lVar15 + (uVar7 ^ uVar7 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar15 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar3 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar1 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    uVar8 = (uVar1 ^ lVar15 + param_3) * -0x622015f714c7d297;
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar11 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar5 = *(long *)((long)param_2 + (param_3 - 8));
    uVar7 = lVar4 + lVar11;
    uVar8 = (uVar1 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar10 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    lVar13 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar8 = lVar15 + lVar4 + lVar13;
    uVar9 = lVar13 + lVar3 + uVar10;
    uVar12 = uVar8 + lVar3;
    uVar8 = (uVar8 >> 0x2c | uVar8 * 0x100000) + lVar13 + (uVar9 >> 0x15 | uVar9 << 0x2b);
    lVar13 = uVar7 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar9 = lVar13 + lVar3 + lVar5;
    uVar1 = uVar1 + lVar11 + lVar13;
    uVar14 = uVar1 + lVar5;
    uVar9 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar13 + (uVar9 >> 0x15 | uVar9 << 0x2b);
    puVar6 = param_2 + 4;
    lVar15 = *param_2 + lVar3 * -0x4b6d499041670d8d;
    lVar13 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar1 = lVar15 + uVar12 + uVar7 + puVar6[-3];
      uVar7 = uVar7 + uVar8 + puVar6[2];
      uVar7 = puVar6[1] + uVar12 + (uVar7 >> 0x2a | uVar7 * 0x400000) * -0x4b6d499041670d8d;
      uVar2 = uVar10 + uVar14;
      lVar11 = puVar6[-4] + uVar8 * -0x4b6d499041670d8d;
      uVar8 = lVar11 + puVar6[-3] + puVar6[-2];
      uVar12 = uVar8 + puVar6[-1];
      uVar10 = (uVar1 >> 0x25 | uVar1 * 0x8000000) * -0x4b6d499041670d8d ^ uVar9;
      lVar15 = (uVar2 >> 0x21 | uVar2 * 0x80000000) * -0x4b6d499041670d8d;
      uVar1 = lVar11 + uVar14 + puVar6[-1] + uVar10;
      uVar8 = (uVar8 >> 0x2c | uVar8 * 0x100000) + lVar11 + (uVar1 >> 0x15 | uVar1 << 0x2b);
      lVar11 = lVar15 + uVar9 + *puVar6;
      uVar9 = uVar7 + puVar6[-2] + lVar11 + puVar6[3];
      uVar1 = puVar6[1] + puVar6[2] + lVar11;
      uVar14 = uVar1 + puVar6[3];
      uVar9 = (uVar1 >> 0x2c | uVar1 * 0x100000) + lVar11 + (uVar9 >> 0x15 | uVar9 << 0x2b);
      puVar6 = puVar6 + 8;
      lVar13 = lVar13 + 0x40;
    } while (lVar13 != 0);
    uVar12 = (uVar14 ^ uVar12) * -0x622015f714c7d297;
    uVar12 = (uVar14 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
    uVar8 = (uVar9 ^ uVar8) * -0x622015f714c7d297;
    uVar8 = (uVar9 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar8 = lVar15 + (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar8 ^ uVar10 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar7 = (uVar8 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  return uVar7;
}



/* Entry: 100125860; end: 100125a0f;  */

long * FUN_100125860(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uStack_51;
  
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  puVar5 = &uStack_51;
  FUN_100125414(puVar5,puVar1,uVar3);
  puVar9 = (undefined1 *)param_1[1];
  if (puVar9 != (undefined1 *)0x0) {
    puVar10 = puVar9 + -1;
    if (((ulong)puVar9 & (ulong)puVar10) == 0) {
      puVar8 = (undefined1 *)((ulong)puVar10 & (ulong)puVar5);
      plVar7 = *(long **)(*param_1 + (long)puVar8 * 8);
    }
    else {
      puVar8 = puVar5;
      if (puVar9 <= puVar5) {
        uVar3 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar5 / (ulong)puVar9;
        }
        puVar8 = puVar5 + -(uVar3 * (long)puVar9);
      }
      plVar7 = *(long **)(*param_1 + (long)puVar8 * 8);
    }
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      puVar1 = (undefined8 *)*param_2;
      uVar3 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if (((ulong)puVar9 & (ulong)puVar10) == 0) {
        do {
          if (puVar5 == (undefined1 *)plVar7[1]) {
            bVar2 = *(byte *)((long)plVar7 + 0x27);
            uVar4 = plVar7[3];
            if (-1 < (char)bVar2) {
              uVar4 = (ulong)bVar2;
            }
            if (uVar4 == uVar3) {
              plVar6 = (long *)plVar7[2];
              if (-1 < (char)bVar2) {
                plVar6 = plVar7 + 2;
              }
              func_0x000107c610b0(plVar6,puVar1,uVar3);
              if ((int)plVar6 == 0) {
                return plVar7;
              }
            }
          }
          else if ((undefined1 *)((ulong)plVar7[1] & (ulong)puVar10) != puVar8) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        puVar10 = (undefined1 *)plVar7[1];
        if (puVar5 == puVar10) {
          bVar2 = *(byte *)((long)plVar7 + 0x27);
          uVar4 = plVar7[3];
          if (-1 < (char)bVar2) {
            uVar4 = (ulong)bVar2;
          }
          if (uVar4 == uVar3) {
            plVar6 = (long *)plVar7[2];
            if (-1 < (char)bVar2) {
              plVar6 = plVar7 + 2;
            }
            func_0x000107c610b0(plVar6,puVar1,uVar3);
            if ((int)plVar6 == 0) {
              return plVar7;
            }
          }
        }
        else {
          if (puVar9 <= puVar10) {
            uVar4 = 0;
            if (puVar9 != (undefined1 *)0x0) {
              uVar4 = (ulong)puVar10 / (ulong)puVar9;
            }
            puVar10 = puVar10 + -(uVar4 * (long)puVar9);
          }
          if (puVar10 != puVar8) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 100125a10; end: 100125aeb;  */

undefined8 FUN_100125a10(void)

{
  return 0;
}



/* Entry: 100125aec; end: 100125b2b;  */

uint FUN_100125aec(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *unaff_x21;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = unaff_x21[1];
  puStack_20 = (undefined8 *)*unaff_x21;
  if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)unaff_x21 + 0x17);
    puStack_20 = unaff_x21;
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  iVar3 = (int)&puStack_20;
  FUN_100067218(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 100125b2c; end: 100125b37; -[SCConfigRepository needsASERSync] */

byte FUN_100125b2c(long param_1)

{
  return *(byte *)(param_1 + 0x48) & 1;
}



/* Entry: 100125b38; end: 100125b47; -[SCConfigMetricGraphene2 divertedToAser:] */

/* WARNING: Possible PIC construction at 0x000100125bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100125c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100125c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100125c70) */
/* WARNING: Removing unreachable block (ram,0x000100125ca4) */
/* WARNING: Removing unreachable block (ram,0x000100125cb4) */
/* WARNING: Removing unreachable block (ram,0x000100125cd0) */
/* WARNING: Removing unreachable block (ram,0x00010002a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010002a370) */
/* WARNING: Removing unreachable block (ram,0x00010002a380) */
/* WARNING: Removing unreachable block (ram,0x00010002a330) */
/* WARNING: Removing unreachable block (ram,0x000100125ccc) */
/* WARNING: Removing unreachable block (ram,0x000100125c30) */
/* WARNING: Removing unreachable block (ram,0x000100125c60) */
/* WARNING: Removing unreachable block (ram,0x000100125c48) */
/* WARNING: Removing unreachable block (ram,0x000100125bbc) */
/* WARNING: Removing unreachable block (ram,0x000100125c20) */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100125b38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c61174(param_3,param_3,1);
  if ((lVar1 != 0) && (func_0x000107c61174(param_3), param_3 != 0)) {
    func_0x000107c61178(param_3);
    func_0x000107c3ac4c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100125b48; end: 100125cbb;  */

/* WARNING: Possible PIC construction at 0x000100125bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100125c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100125c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100125c70) */
/* WARNING: Removing unreachable block (ram,0x000100125ca4) */
/* WARNING: Removing unreachable block (ram,0x000100125cb4) */
/* WARNING: Removing unreachable block (ram,0x000100125cd0) */
/* WARNING: Removing unreachable block (ram,0x00010002a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010002a370) */
/* WARNING: Removing unreachable block (ram,0x00010002a380) */
/* WARNING: Removing unreachable block (ram,0x00010002a330) */
/* WARNING: Removing unreachable block (ram,0x000100125ccc) */
/* WARNING: Removing unreachable block (ram,0x000100125c30) */
/* WARNING: Removing unreachable block (ram,0x000100125c60) */
/* WARNING: Removing unreachable block (ram,0x000100125c48) */
/* WARNING: Removing unreachable block (ram,0x000100125bbc) */
/* WARNING: Removing unreachable block (ram,0x000100125c20) */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100125b48(long param_1,long param_2)

{
  func_0x000107c61174(param_2);
  if ((param_1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
    func_0x000107c61178(param_2);
    func_0x000107c3ac4c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100125cbc; end: 100125ce3;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100125cbc(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001137f64c8 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110ce99b0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110ce99b0);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  FUN_10002a3a8(&PTR___NSConcreteGlobalBlock_110ce99b0);
  func_0x000107c61180();
  (*pcVar3)(0x1137f64c8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100125ce4; end: 100125e8f;  */

undefined4 FUN_100125ce4(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam000000011383c670 < (undefined4 *)0x2) {
    do {
      if (puRam000000011383c670 != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        if (puRam000000011383c670 == (undefined4 *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          piVar5 = param_1;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)piVar5 - (long)param_1 < 1000) {
              func_0x000107c612dc();
            }
            else {
              uStack_50 = 0xaaaaaaaaaaaaaaaa;
              uStack_48 = 0xaaaaaaaaaaaaaaaa;
              uStack_38 = 1000000;
              uStack_40 = 0;
              piVar5 = (int *)&uStack_40;
              func_0x000107c610f0(piVar5,&uStack_50);
              iVar3 = (int)piVar5;
              while ((iVar3 == -1 && (func_0x000107c60e5c(), *piVar5 == 4))) {
                uStack_38 = uStack_48;
                uStack_40 = uStack_50;
                piVar5 = (int *)&uStack_40;
                func_0x000107c610f0(piVar5,&uStack_50);
                iVar3 = (int)piVar5;
              }
            }
          } while (puRam000000011383c670 == (undefined4 *)0x1);
        }
        return *puRam000000011383c670;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11383c670,0x10);
      if (bVar2) {
        puRam000000011383c670 = (undefined4 *)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar4 = 0x39;
    func_0x000107c6165c();
    uRam000000011383c678 = (undefined4)lVar4;
    if (lVar4 == -1) {
      uRam000000011383c678 = 1;
    }
    puRam000000011383c670 = (undefined4 *)0x11383c678;
  }
  return *puRam000000011383c670;
}



/* Entry: 100125e90; end: 100125ef7;  */

void FUN_100125e90(void)

{
  long *plVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  plVar1 = plRam000000011383ad50;
  uStack_30 = 6;
  func_0x000100125e18(0x3fe3333333333333,6,0x10,0);
  uStack_2c = 0;
  uStack_28 = 30000000;
  (**(code **)(*plVar1 + 0x10))(plVar1,&uStack_30,0);
  return;
}



/* Entry: 100125ef8; end: 100125f3f; +[SCMapSyncTrace traceCurrentScope:] */

void FUN_100125ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c478bc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100125f40; end: 100126003; -[SCMapSyncTrace initWithName:] */

undefined8 * FUN_100125f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f4fb0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3e814();
    puVar1[1] = puVar4;
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100126004; end: 10012600b; -[SCSystemConfigurationImpl cameraHardwareConfiguration] */

undefined8 FUN_100126004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10012600c; end: 10012608f;  */

void FUN_10012600c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7168;
  func_0x000107c610f4(PTR_PTR_1126b7168);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c45db4(puVar1,param_2,uVar2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100126090; end: 100126133; -[SCCameraHardwareConfigurationImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_100126090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7638;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100126134; end: 10012615f; -[SCCameraHardwareConfigurationImpl isCameraLensSmudgeDetectionEnabled] */

bool FUN_100126134(void)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x1a,0,0);
  return iVar1 != 0;
}



/* Entry: 100126160; end: 1001262e3; -[SCCameraHardwareUpdateDeviceFormatOperation initWithDelegate:deviceSettingsMap:cameraHardwareResource:captureSession:errorHandler:shouldChooseHighestMaxFrameRate:isCameraLensSmudgeDetectionEnabled:requestingFeatureNames:featureStartupEventBus:captureDeviceManager:] */

undefined8
FUN_100126160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_1001262e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 0;
  FUN_1001262e4(0,0x112da0578,&PTR_PTR_1126b7120);
  uVar3 = uVar2;
  FUN_100120cb0();
  func_0x000107c5f9e8(param_4,uVar1,uVar2,uVar3);
  puVar4 = &UNK_1104184f0;
  func_0x000107c613fc(&UNK_1104184f0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  func_0x000107c5f9e8(param_11,PTR___sSiN_11034deb0,PTR___sSSN_11034da80,PTR___sSiSHsWP_11034dec0);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  uVar3 = param_3;
  FUN_100127678(param_3,param_4,param_5,param_6,&UNK_10195a82c,puVar4,param_8,param_9,param_11,
                param_12,param_13);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  return uVar3;
}



/* Entry: 1001262e4; end: 100126323;  */

void FUN_1001262e4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100126324; end: 10012728f;  */

ulong FUN_100126324(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  int **ppiVar8;
  int **ppiVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  int *piStack_200;
  undefined8 uStack_1f8;
  int *piStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined **appuStack_f0 [6];
  undefined8 uStack_c0;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined *puStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    uStack_198 = 0xaaaaaaaa;
    uStack_194 = 0;
    uStack_190 = 0xaaaaaaaaaaaaaaaa;
    uStack_1a0 = 8;
    uStack_19c = 0xaaaaaaaa;
    iVar4 = *(int *)PTR__mach_task_self__11034c5c8;
    func_0x000107c61094(iVar4,param_1,0,&uStack_194,&uStack_198,&uStack_19c,&uStack_190,&uStack_1a0)
    ;
    if (iVar4 != 0 && iVar4 != 5) {
      ppuStack_170 = &PTR_DAT_110cd4a10;
      uStack_168 = 3;
      uStack_c0 = 0;
      ppuStack_160 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
      appuStack_f0[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
      func_0x000107c60dd0(appuStack_f0,&ppuStack_158);
      uStack_60 = 0xffffffff;
      uStack_68 = 0;
      appuStack_f0[0] = &PTR_DAT_11088d708;
      ppuStack_158 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      ppuStack_160 = &PTR_DAT_11088d6e0;
      func_0x000107c60dac(auStack_150);
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      ppuStack_158 = &PTR_DAT_11088d7b0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f8 = 0x10;
      pppuVar6 = &ppuStack_158;
      FUN_10014d39c();
      puStack_50 = &UNK_10f7457d8;
      uStack_48 = 0x171;
      func_0x000107c60e5c();
      uStack_44 = *(undefined4 *)pppuVar6;
      func_0x000107c60e5c();
      *(undefined4 *)pppuVar6 = 0;
      FUN_10014d66c(&ppuStack_170,&UNK_10f7457d8,0x171);
      ppuStack_170 = &PTR_DAT_110cd6578;
      iStack_40 = iVar4;
      FUN_10014d9fc(&ppuStack_160,&UNK_10f7458b9,0x20);
      FUN_10014d9fc();
      param_1 = (int *)&UNK_10f7458da;
      goto LAB_100126640;
    }
  }
  else {
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_188 = (long)param_1 << 0x20;
    puVar5 = &uStack_190;
    piVar13 = (int *)0x102;
    func_0x000107c6107c(puVar5,0x102,0,0x20,param_1,0,0);
    iVar4 = (int)puVar5;
    param_1 = piVar13;
    if ((iVar4 != 0) && (iVar4 != 0x10004003)) {
      ppuStack_170 = &PTR_DAT_110cd4a10;
      uStack_168 = 3;
      uStack_c0 = 0;
      ppuStack_160 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
      appuStack_f0[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
      func_0x000107c60dd0(appuStack_f0,&ppuStack_158);
      uStack_60 = 0xffffffff;
      uStack_68 = 0;
      appuStack_f0[0] = &PTR_DAT_11088d708;
      ppuStack_158 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      ppuStack_160 = &PTR_DAT_11088d6e0;
      func_0x000107c60dac(auStack_150);
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      ppuStack_158 = &PTR_DAT_11088d7b0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f8 = 0x10;
      pppuVar6 = &ppuStack_158;
      FUN_10014d39c();
      puStack_50 = &UNK_10f7457d8;
      uStack_48 = 0x161;
      func_0x000107c60e5c();
      uStack_44 = *(undefined4 *)pppuVar6;
      func_0x000107c60e5c();
      *(undefined4 *)pppuVar6 = 0;
      FUN_10014d66c(&ppuStack_170,&UNK_10f7457d8,0x161);
      ppuStack_170 = &PTR_DAT_110cd6578;
      iStack_40 = iVar4;
      FUN_10014d9fc(&ppuStack_160,&UNK_10f745892,0x26);
      FUN_10014d9fc();
      param_1 = (int *)&UNK_10f74587f;
LAB_100126640:
      FUN_10014d9fc();
      func_0x000107c2cfe8(&ppuStack_170);
    }
  }
  uVar7 = (ulong)(iVar4 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar7;
  }
  func_0x000107c60e78();
  ppiVar8 = (int **)(ulong)*(uint *)(*(long *)(uVar7 + 0xa8) + 0x10);
  FUN_100126324(ppiVar8,1);
  *(undefined4 *)(uVar7 + 0x98) = 0;
  if (piRam00000001137f5198 < (int *)0x2) {
    do {
      if (piRam00000001137f5198 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam00000001137f5198 == (int *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          ppiVar9 = ppiVar8;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)ppiVar9 - (long)ppiVar8 < 1000) {
              func_0x000107c612dc();
            }
            else {
              piStack_200 = (int *)0xaaaaaaaaaaaaaaaa;
              uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
              uStack_1e8 = 1000000;
              piStack_1f0 = (int *)0x0;
              ppiVar9 = &piStack_1f0;
              func_0x000107c610f0(ppiVar9,&piStack_200);
              iVar4 = (int)ppiVar9;
              while ((iVar4 == -1 && (func_0x000107c60e5c(), *(int *)ppiVar9 == 4))) {
                uStack_1e8 = uStack_1f8;
                piStack_1f0 = piStack_200;
                ppiVar9 = &piStack_1f0;
                func_0x000107c610f0(ppiVar9,&piStack_200);
                iVar4 = (int)ppiVar9;
              }
            }
          } while (piRam00000001137f5198 == (int *)0x1);
        }
        goto LAB_1001267ac;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f5198,0x10);
      if (bVar2) {
        piRam00000001137f5198 = (int *)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uRam00000001137f51a0 = 0xffffffff;
    func_0x000100126cd4(0x1137f51a0,0);
    piRam00000001137f5198 = (int *)0x1137f51a0;
  }
LAB_1001267ac:
  piVar13 = piRam00000001137f5198;
  uVar11 = uRam000000011336f908;
  func_0x000107c61248();
  uVar11 = uVar11 & 0xfffffffffffffffc;
  if (uVar11 != 0) {
    *(undefined8 *)(uVar11 + (long)*piVar13 * 0x10) = 0;
    *(int *)(uVar11 + (long)*piVar13 * 0x10 + 8) = piVar13[1];
  }
  *(int *)(uVar7 + 0xd8) = param_1[4];
  lVar14 = *(long *)(param_1 + 2);
  if (lVar14 == 0) {
    piVar13 = *(int **)(param_1 + 6);
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x28;
      func_0x000107c60e20();
      *piVar13 = 1;
      piVar13[2] = 0x12d008;
      piVar13[3] = 1;
      piVar13[4] = 0x12eef8;
      piVar13[5] = 1;
      piVar13[6] = 0x142430;
      piVar13[7] = 1;
      piVar13[9] = *param_1;
      uVar12 = 0x40;
      func_0x000107c60e20();
      piStack_1f0 = piVar13;
      func_0x000100126f84();
      if (piStack_1f0 != (int *)0x0) {
        do {
          iVar4 = *piStack_1f0 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_1f0,0x10);
          if (bVar2) {
            *piStack_1f0 = iVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_100126940;
      }
    }
    else {
      uVar12 = 0x40;
      func_0x000107c60e20();
      do {
        iVar4 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0,0x1001269c0);
        (*pcVar3)();
      }
      piStack_1f0 = piVar13;
      func_0x000100126f84(uVar12,2,&piStack_1f0);
      if (piStack_1f0 != (int *)0x0) {
        do {
          iVar4 = *piStack_1f0 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_1f0,0x10);
          if (bVar2) {
            *piStack_1f0 = iVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_100126940:
        if (iVar4 == 0) {
          (**(code **)(piStack_1f0 + 4))();
        }
      }
    }
    plVar10 = *(long **)(uVar7 + 200);
    *(undefined8 *)(uVar7 + 200) = uVar12;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    plVar10 = *(long **)(uVar7 + 200);
    *(long *)(uVar7 + 200) = lVar14;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  FUN_100126324(*(undefined4 *)(*(long *)(uVar7 + 0x100) + 0x10),1);
  iVar4 = (int)uVar7 + 0x58;
  func_0x000107c61264();
  if (iVar4 == 0) {
    cVar1 = (char)param_1[0xb];
    uVar11 = *(ulong *)(param_1 + 8);
  }
  else {
    func_0x000107c2cfbc(uVar7 + 0x58);
    cVar1 = (char)param_1[0xb];
    uVar11 = *(ulong *)(param_1 + 8);
  }
  if (cVar1 == '\x01') {
    FUN_100129c04(uVar11,1,uVar7,uVar7 + 0x50,param_1[10]);
    func_0x000107c61268(uVar7 + 0x58);
    if ((uVar11 & 1) != 0) {
LAB_100126998:
      *(char *)(uVar7 + 8) = (char)param_1[0xb];
      return 1;
    }
  }
  else {
    FUN_100129c04(uVar11,0,uVar7,&piStack_1f0,param_1[10]);
    func_0x000107c61268(uVar7 + 0x58);
    if ((int)uVar11 != 0) goto LAB_100126998;
  }
  return 0;
}



/* Entry: 100127290; end: 100127677;  */

undefined8 * FUN_100127290(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[1] = &PTR_DAT_110cd5578;
  param_1[2] = &PTR_DAT_110cd55c8;
  *param_1 = &PTR_DAT_110cd5438;
  param_1[3] = &PTR_DAT_110cd55f0;
  plVar4 = (long *)*param_2;
  (**(code **)(*plVar4 + 0xb8))();
  piVar7 = (int *)*plVar4;
  param_1[4] = piVar7;
  if (piVar7 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = 2;
  uVar8 = *param_2;
  *param_2 = 0;
  param_1[6] = uVar8;
  uVar1 = *(undefined1 *)(param_3 + 2);
  uVar8 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 9) = uVar1;
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    func_0x000107c2cc04();
  }
  param_1[10] = 0;
  *(uint *)(param_1 + 0xb) = (uint)*(byte *)(param_1 + 9);
  piVar7 = (int *)param_1[4];
  if (piVar7 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = piVar7;
  *(undefined4 *)(param_1 + 0xf) = 0xdeadbeef;
  uVar8 = param_1[8];
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xf9) = 0;
  *(undefined8 *)((long)param_1 + 0xf1) = 0;
  piVar7 = (int *)param_1[4];
  if (piVar7 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x23] = &PTR_DAT_110cd5800;
  param_1[0x24] = piVar7;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = &UNK_10f744e1e;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = param_1 + 0x23;
  param_1[0x41] = &UNK_10f744e26;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = param_1 + 0x23;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = param_1 + 0x5d;
  param_1[0x5e] = param_1 + 0x5d;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = param_1 + 100;
  param_1[0x65] = param_1 + 100;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = uVar8;
  param_1[0x69] = 0;
  puVar5 = (undefined8 *)0x38;
  func_0x000107c60e20();
  piVar7 = (int *)param_1[4];
  if (piVar7 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_DAT_110cd5a68;
  puVar5[1] = 0;
  puVar5[5] = piVar7;
  puVar5[6] = param_1;
  param_1[0x6a] = puVar5;
  puVar5 = (undefined8 *)0x30;
  func_0x000107c60e20();
  piVar7 = (int *)param_1[4];
  if (piVar7 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[5] = piVar7;
  *puVar5 = &PTR_DAT_110cd5aa0;
  param_1[0x6b] = puVar5;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = param_1 + 0x6f;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = param_1 + 0x72;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = param_1 + 0x75;
  *(undefined2 *)(param_1 + 0x77) = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x82] = param_1 + 0x82;
  param_1[0x83] = param_1 + 0x82;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = param_1 + 0x88;
  puVar5 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined1 *)((long)puVar5 + 0x19) = 6;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = param_1 + 0x88;
  param_1[0x88] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    param_1[0x87] = puVar5;
  }
  *(undefined1 *)(puVar5 + 3) = 1;
  param_1[0x89] = 1;
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    func_0x000107c2cc08(&uStack_50);
    param_1[0x22] = uStack_48;
    param_1[0x21] = uStack_50;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  param_1[0x8a] = param_1[8];
  piVar7 = (int *)0x8;
  func_0x000107c60e20();
  *piVar7 = 0;
  *(undefined1 *)(piVar7 + 1) = 0;
  if (piVar7 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x8b] = piVar7;
  param_1[0x8c] = param_1;
  if ((bRam0000000113370618 & 0x19) != 0) {
    func_0x000107c2ca88(0x4e,0x113370618,&UNK_10f744725,0,param_1,0x800,0);
  }
  param_1[0x59] = param_1 + 2;
  plVar6 = (long *)param_1[0x8a];
  (**(code **)(*plVar6 + 0x10))();
  plVar4 = (long *)0x7fffffffffffffff;
  if (!SCARRY8((long)plVar6,30000000)) {
    plVar4 = plVar6 + 0x393870;
  }
  param_1[0x6d] = plVar4;
  (**(code **)(*(long *)param_1[6] + 0x30))((long *)param_1[6],param_1 + 1);
  return param_1;
}



/* Entry: 100127678; end: 1001277bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100127678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dd88d0;
  func_0x000107c61614(unaff_x20 + _DAT_112dd88d0,0);
  lVar3 = _DAT_112dd88d8;
  func_0x000107c61614(unaff_x20 + _DAT_112dd88d8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112dd88e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd88e8) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd88f0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112dd88f8) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8900) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8908) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8910) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8918) = param_11;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithDelegate__1125e0280,param_1);
  return;
}



/* Entry: 1001277c0; end: 100127a17; -[SCLocationManager initWithApplicationLifecycleEvents:batteryLogger:userPreferences:circumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_1001277c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126e9570;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126bc318;
    func_0x000107c610f4();
    func_0x000107c4910c(*(undefined8 *)PTR__kCLLocationAccuracyThreeKilometers_110349b90,
                        *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined **)((long)puVar1 + 0xd0) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0xb4) = 1;
    *(undefined8 *)((long)puVar1 + 0xd8) = 0;
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c580(puVar1);
    func_0x000107c3c9e4(puVar1);
    puVar3 = PTR_PTR_1126bc320;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + 0xb0) = (char)uVar2;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100127a18; end: 100127a8b; -[SCLocationManagerState initWithUpdatingLocation:locationAccuracy:distanceFilter:allowsBackground:updatingHeading:] */

void FUN_100127a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e95a8;
  uStack_50 = param_3;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  return;
}



/* Entry: 100127a8c; end: 100127a9b; -[SCLocationManager _setLocationOperationsUpdateObservableOnBatteryLogger] */

void FUN_100127a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setupLocationOperationsUpdateObs_112667de0,
             *(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 100127a9c; end: 100127b73; -[SCBatteryLogger setupLocationOperationsUpdateObservable:] */

void FUN_100127a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100127b74; end: 100127df3; -[SCLocationManager _subscribeToLifecycleEvents] */

void FUN_100127b74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5e370();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1055fc6ec;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c419f0();
  func_0x000107c61180();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_100c78094;
  puStack_a0 = &UNK_110846510;
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5e39c();
  func_0x000107c61180();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_1055fc718;
  puStack_c8 = &UNK_110846510;
  func_0x000107c6111c(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_e8,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100127df4; end: 100127e67; -[SCGrapheneLocationServicesMetric2 init] */

undefined1 * FUN_100127df4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e95b0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100127e68; end: 100127f17; -[SCMapSyncTrace dealloc] */

void FUN_100127e68(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar1);
  }
  puStack_28 = PTR_PTR_1126f4fb0;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100127f18; end: 100127f5b;  */

void FUN_100127f18(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100127f5c; end: 10012812b; -[SCDeviceLocationPermissionsManager initWithLocationAuthorizationManager:circumstanceEngine:] */

undefined8 *
FUN_100127f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e9588;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar5 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar5);
    func_0x000107c61144(auStack_58,puVar1);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar5);
    uVar5 = param_3;
    func_0x000107c4e640();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar4 = uVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar6 = puVar1[4];
    puVar1[4] = uVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10012812c; end: 100128153; -[SCLocationManager permissionsUpdateObservable] */

void FUN_10012812c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100128154; end: 100128167;  */

void FUN_100128154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100128168; end: 100128197;  */

void FUN_100128168(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100128198; end: 1001281a7; -[SCDeviceLocationPermissionsManager fetchLocationAuthorized:onQueue:] */

void FUN_100128198(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa8190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLocationAuthorized_onQueue__1125c7a08);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfa8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLocationAuthorized__1125c7a00);
  return;
}



/* Entry: 1001281a8; end: 10012823b; -[SCLocationManager fetchLocationAuthorized:onQueue:] */

void FUN_1001281a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_100c72cdc;
  puStack_40 = &UNK_11085e0c0;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c43174(param_1,param_2,&puStack_58,param_4);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10012823c; end: 1001283d3; -[SCLocationManager fetchLocationAuthorizationStatus:onQueue:] */

void FUN_10012823c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined4 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar2 = param_1;
  func_0x000107c44744();
  if ((int)uVar2 == 0) {
    func_0x000107c61144(auStack_88,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    puStack_b0 = &UNK_100c3b39c;
    puStack_a8 = &UNK_110848378;
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c61174(param_3);
    lStack_98 = param_3;
    func_0x000107c61174(param_4);
    ppuVar3 = &puStack_c0;
    uStack_a0 = param_4;
    func_0x000107c61184();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    puStack_e0 = &UNK_100c371c0;
    puStack_d8 = &UNK_11084aaa8;
    uStack_d0 = param_1;
    ppuStack_c8 = ppuVar3;
    FUN_10007380c(PTR___dispatch_main_q_11034be20,&puStack_f0);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61170(lStack_98);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  else if (param_3 != 0) {
    func_0x000107c4a994();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_100c74324;
    puStack_68 = &UNK_110890350;
    func_0x000107c61174(param_3);
    uStack_58 = (undefined4)param_1;
    lStack_60 = param_3;
    FUN_10007380c(param_4,&puStack_80);
    func_0x000107c61170(lStack_60);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1001283d4; end: 1001283ef; -[SCLocationManager hasAuthorizationStatus] */

byte FUN_1001283d4(long param_1)

{
  return *(byte *)(param_1 + 0xb1) & 1;
}



/* Entry: 1001283f0; end: 10012841b;  */

void FUN_1001283f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10012841c; end: 100128543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10012841c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112761f94;
    func_0x000107c61148();
    lVar3 = lVar2;
    func_0x000107c3e47c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4a6dc();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    if ((int)lVar5 == 0) {
      func_0x000107c3ce1c(lVar1);
    }
    else {
      uVar7 = *(undefined8 *)(lVar1 + _DAT_112761f8c);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar6);
      func_0x000107c4e524(uVar7);
      func_0x000107c61170(uVar6);
    }
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100128544; end: 10012855b;  */

void FUN_100128544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100128548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10012855c; end: 100128a7f; -[SCLegacyCameraStartupCommandsEntryPoint _warmupCameraIfNeededWithDeviceVideoCaptureAuthorization:appStartupState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10012855c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_a0;
  
  func_0x000107c49a3c();
  if (param_5 == 0) {
    uStack_a0 = 0;
  }
  else {
    lVar10 = param_2 + _DAT_112761fa4;
    func_0x000107c61148();
    lVar9 = lVar10;
    func_0x000107c4ec80();
    func_0x000107c61180();
    lVar7 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar1 = lVar7;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
    lVar10 = lVar1;
    func_0x000107c4adac();
    if (lVar10 == 0) {
      uStack_a0 = 0;
    }
    else {
      lVar10 = param_2 + _DAT_112761fa8;
      func_0x000107c61148();
      lVar9 = lVar10;
      func_0x000107c4f9bc();
      func_0x000107c61180();
      lVar7 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar11 = lVar7;
      func_0x000107c44c14();
      uStack_a0 = (uint)lVar11;
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
    }
    func_0x000107c61170(lVar1);
  }
  if (param_2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_2 + _DAT_112761fbc;
    func_0x000107c61148();
  }
  lVar9 = lVar10;
  func_0x000107c4ab84();
  func_0x000107c61180();
  lVar1 = lVar9;
  func_0x000107c5adbc();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar10);
  lVar9 = (long)_DAT_112761fac;
  lVar10 = param_2 + lVar9;
  func_0x000107c61148();
  lVar7 = lVar10;
  func_0x000107c5bcac();
  func_0x000107c61180();
  lVar11 = lVar7;
  func_0x000107c5bcb8();
  uVar8 = (uint)(lVar11 == 6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar10);
  lVar7 = (long)_DAT_112761fb0;
  lVar10 = param_2 + lVar7;
  func_0x000107c61148();
  lVar2 = lVar10;
  func_0x000107c5bca0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c41650();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar10);
  if ((int)lVar6 != 0) {
    if (lVar11 == 6) goto LAB_100128a2c;
    lVar9 = param_2 + lVar9;
    func_0x000107c61148();
    lVar10 = lVar9;
    func_0x000107c5bcac();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c4f2bc();
    uVar8 = (uint)lVar11 ^ 1;
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
  }
  if (((param_4 & uStack_a0 & ((uint)lVar1 ^ 1)) == 1) && (uVar8 == 0)) {
    lVar10 = param_2 + lVar7;
    func_0x000107c61148();
    lVar9 = lVar10;
    func_0x000107c5bca0();
    func_0x000107c61180();
    lVar1 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = lVar1;
    func_0x000107c3f0ec();
    func_0x000107c61180();
    lVar2 = lVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c3f320();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
    if ((int)lVar3 != 0) {
      lVar7 = param_2 + lVar7;
      func_0x000107c61148(lVar7);
      lVar10 = lVar7;
      func_0x000107c5bca0();
      func_0x000107c61180();
      lVar9 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar1 = lVar9;
      func_0x000107c3f0ec();
      func_0x000107c61180();
      lVar11 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c3f094();
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar7);
      lVar10 = param_2 + _DAT_112761fa4;
      func_0x000107c61148(lVar10);
      lVar9 = lVar10;
      func_0x000107c4ec80();
      func_0x000107c61180();
      lVar7 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      FUN_100150458(param_1);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
      lVar11 = (long)_DAT_112761f94;
      lVar10 = param_2 + lVar11;
      func_0x000107c61148(lVar10);
      lVar9 = lVar10;
      func_0x000107c3f0fc();
      func_0x000107c61180();
      lVar7 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar1 = lVar7;
      func_0x000107c5bc80();
      func_0x000107c61180();
      param_2 = param_2 + lVar11;
      func_0x000107c61148(param_2);
      lVar11 = param_2;
      func_0x000107c4c22c();
      func_0x000107c61180();
      lVar2 = lVar11;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c5e0d8(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
    }
  }
  else if ((uVar8 & 1) != 0) {
LAB_100128a2c:
                    /* WARNING: Could not recover jumptable at 0x00010be9b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__scheduleOptimizedCameraWarmStar_1125846c8)
    ;
    return;
  }
  return;
}



/* Entry: 100128a80; end: 100128a8f; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices reader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100128a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305f240));
  return;
}



/* Entry: 100128a90; end: 100128a9b;  */

void FUN_100128a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100128a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_11336f918)();
  return;
}



/* Entry: 100128a9c; end: 100128c87;  */

void FUN_100128a9c(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  lStack_38 = -0x5555555555555556;
  puVar6 = &uStack_40;
  iVar4 = 6;
  func_0x000107c60f08();
  if (iVar4 == 0) {
    lVar5 = lStack_38 / 1000 + uStack_40 * 1000000;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_100128c84;
  }
  else {
    uStack_40 = 0xaaaaaaaaaaaaaaaa;
    lStack_38 = -0x5555555555555556;
    dVar8 = 4.45619116107648e-313;
    uStack_30 = 0x1500000001;
    uStack_48 = 0x10;
    puVar6 = (ulong *)0x2;
    func_0x000107c61660(&uStack_30,2,&uStack_40,&uStack_48,0,0);
    func_0x000107c60734();
    lVar5 = 0;
    if ((dVar8 != 0.0) && (lVar5 = 0x7fffffffffffffff, dVar8 != INFINITY)) {
      dVar8 = (dVar8 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_11034ab70) * 1000000.0;
      lVar5 = 0;
      if (-9.223372036854776e+18 <= dVar8) {
        lVar5 = 0x7fffffffffffffff;
      }
      lVar2 = (long)dVar8;
      if (9.223372036854775e+18 < dVar8) {
        lVar2 = lVar5;
      }
      lVar5 = lVar2;
      if (1 < lVar2 + 0x8000000000000001U) {
        lVar5 = 0x7fffffffffffffff;
        if (!SCARRY8(lVar2,0x295e9648864000)) {
          lVar5 = lVar2 + 0x295e9648864000;
        }
      }
    }
    uVar7 = uStack_40;
    if ((uStack_40 != 0) && (uStack_40 != 0x7fffffffffffffff)) {
      uVar1 = (long)uStack_40 >> 0x3f ^ 0x7fffffffffffffff;
      if (SUB168(SEXT816((long)uStack_40) * SEXT816(1000000),8) ==
          (long)(uStack_40 * 1000000) >> 0x3f) {
        uVar1 = uStack_40 * 1000000;
      }
      uVar7 = uVar1;
      if (1 < uVar1 + 0x8000000000000001) {
        uVar7 = 0x7fffffffffffffff;
        if (!SCARRY8(uVar1,0x295e9648864000)) {
          uVar7 = uVar1 + 0x295e9648864000;
        }
      }
    }
    uVar1 = uVar7 + (long)(int)lStack_38;
    uVar3 = (long)uVar1 >> 0x3f ^ 0x8000000000000000;
    if (!SCARRY8(uVar7,(long)(int)lStack_38)) {
      uVar3 = uVar1;
    }
    lVar5 = lVar5 - uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
LAB_100128c84:
      func_0x000107c60e78();
      *(ulong **)(lVar5 + 0x80) = puVar6;
      return;
    }
  }
  return;
}



/* Entry: 100128c88; end: 100128c8f;  */

void FUN_100128c88(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return;
}



/* Entry: 100128c90; end: 100128d1f;  */

long FUN_100128c90(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_38;
  
  lVar5 = 0x98;
  func_0x000107c60e20();
  (**(code **)(*param_1 + 0xe0))(&lStack_38,param_1,param_2);
  func_0x000100129764(lVar5,&lStack_38);
  lVar4 = lStack_38;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_38 = 0;
  if (lVar4 != 0) {
    func_0x000107c2ccfc();
    func_0x000107c60e14();
  }
  return lVar5;
}



/* Entry: 100128d20; end: 100128e23;  */

/* WARNING: Possible PIC construction at 0x0001001294d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100129548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001294d4) */
/* WARNING: Removing unreachable block (ram,0x0001001294e8) */
/* WARNING: Removing unreachable block (ram,0x00010012951c) */
/* WARNING: Removing unreachable block (ram,0x000100129530) */
/* WARNING: Removing unreachable block (ram,0x00010012954c) */
/* WARNING: Removing unreachable block (ram,0x000100129560) */
/* WARNING: Removing unreachable block (ram,0x000100129594) */
/* WARNING: Removing unreachable block (ram,0x0001001295a8) */
/* WARNING: Removing unreachable block (ram,0x0001001295d8) */
/* WARNING: Removing unreachable block (ram,0x0001001295c0) */

void FUN_100128d20(ulong *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar3 = 0x210;
  func_0x000107c60e20();
  uVar9 = uVar3;
  FUN_100128e24();
  *param_1 = uVar9;
  puVar4 = *(undefined8 **)(param_2 + 0x378);
  if (*(undefined8 **)(param_2 + 0x378) == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)(param_2 + 0x378);
    puVar12 = puVar11;
  }
  else {
    do {
      while (puVar11 = puVar4, uVar3 < (ulong)puVar11[4]) {
        puVar4 = (undefined8 *)*puVar11;
        puVar12 = puVar11;
        if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_100128dbc;
      }
      if (uVar3 <= (ulong)puVar11[4]) goto LAB_100128e08;
      puVar4 = (undefined8 *)puVar11[1];
    } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
    puVar12 = puVar11 + 1;
  }
LAB_100128dbc:
  puVar4 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puVar4[4] = uVar3;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = puVar11;
  *puVar12 = puVar4;
  if (**(long **)(param_2 + 0x370) != 0) {
    *(long *)(param_2 + 0x370) = **(long **)(param_2 + 0x370);
    puVar4 = (undefined8 *)*puVar12;
  }
  FUN_1001292e0(*(undefined8 *)(param_2 + 0x378),puVar4);
  *(long *)(param_2 + 0x380) = *(long *)(param_2 + 0x380) + 1;
  uVar3 = *param_1;
LAB_100128e08:
  plVar10 = *(long **)(uVar3 + 0xd8);
  if (plVar10[2] == 0) {
    return;
  }
  plVar5 = (long *)*plVar10;
  lVar7 = plVar5[1];
  if ((*(byte *)(plVar10 + 10) & 1) == 0) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = *plVar5;
    lVar8 = 0;
    if (lVar7 + 1 != lVar6) {
      lVar8 = lVar7 + 1;
    }
    lVar8 = plVar5[3] + lVar8 * 0xa0;
    if (*(int *)(lVar8 + 0x78) == 0) {
      uVar3 = *(ulong *)(lVar8 + 0x70);
      uVar9 = *(ulong *)(lVar8 + 0x30);
      if (uVar3 + 0x8000000000000001 < 2) {
        if (uVar9 != uVar3 && (uVar9 == 0x7fffffffffffffff || uVar9 == 0x8000000000000000)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(0,0x10012975c);
          (*pcVar1)();
        }
        uVar9 = plVar10[0xb];
      }
      else {
        bVar2 = SCARRY8(uVar9,uVar3);
        uVar9 = uVar9 + uVar3;
        uVar3 = (long)uVar9 >> 0x3f ^ 0x8000000000000000;
        if (!bVar2) {
          uVar3 = uVar9;
        }
        uVar9 = plVar10[0xb];
      }
    }
    else {
      uVar3 = *(ulong *)(lVar8 + 0x30);
      uVar9 = plVar10[0xb];
    }
    if (*(ulong *)(lVar8 + 0x88) == uVar9) {
      if (uVar3 == plVar10[0xc]) {
        if ((int)plVar10[0xd] <= *(int *)(lVar8 + 0x68)) {
          return;
        }
      }
      else if (plVar10[0xc] <= (long)uVar3) {
        return;
      }
    }
    else if (uVar9 <= *(ulong *)(lVar8 + 0x88)) {
      return;
    }
  }
  lVar8 = 0;
  if (lVar7 + 1 != lVar6) {
    lVar8 = lVar7 + 1;
  }
  lVar7 = plVar5[3] + lVar8 * 0xa0;
  if (*(int *)(lVar7 + 0x78) == 0) {
    lVar6 = *(long *)(lVar7 + 0x30);
    if (1 < *(long *)(lVar7 + 0x70) + 0x8000000000000001U) {
      return;
    }
    if (lVar6 != *(long *)(lVar7 + 0x70) &&
        (lVar6 == 0x7fffffffffffffff || lVar6 == -0x8000000000000000)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x10012969c);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 100128e24; end: 1001292df;  */

/* WARNING: Possible PIC construction at 0x0001001290a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001290ac) */
/* WARNING: Removing unreachable block (ram,0x0001001290b4) */
/* WARNING: Removing unreachable block (ram,0x0001001290bc) */
/* WARNING: Removing unreachable block (ram,0x0001001290c4) */
/* WARNING: Removing unreachable block (ram,0x0001001290c8) */
/* WARNING: Removing unreachable block (ram,0x0001001290d0) */

int * FUN_100128e24(int *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 **ppuVar11;
  int *piVar12;
  long lVar13;
  int *extraout_x8;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  int *piVar7;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)param_1 = *param_4;
  *(long *)(param_1 + 2) = param_2;
  if (param_2 == 0) {
    piVar12 = (int *)0x8;
    func_0x000107c60e20();
    piVar10 = piVar12 + 1;
    *piVar10 = 0;
    *piVar12 = 0;
    if (piVar12 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = *piVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    piVar7 = piVar12;
    func_0x000107c61294();
    iVar6 = (int)piVar7;
    func_0x000107c61254();
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int **)(param_1 + 4) = piVar12;
  }
  else {
    piVar12 = *(int **)(param_2 + 0x20);
    *(int **)(param_1 + 4) = piVar12;
    if (piVar12 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = *piVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  piVar12 = (int *)0x40;
  func_0x000107c60e20();
  *piVar12 = 0;
  piVar12[2] = 0;
  func_0x0001000fff3c(piVar12 + 4,0,1);
  *(int **)(piVar12 + 0xe) = param_1;
  if (piVar12 != (int *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = *piVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(int **)(param_1 + 6) = piVar12;
  puStack_58 = (undefined4 *)0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&puStack_58);
  func_0x000107c61274(&puStack_58,1);
  ppuVar11 = &puStack_58;
  func_0x000107c6125c(param_1 + 8);
  func_0x000107c6126c(&puStack_58);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0x101;
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = param_3;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  puVar8 = (undefined8 *)0x78;
  func_0x000107c60e20();
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[6] = param_1;
  puVar8[8] = 0xffffffffffffffff;
  puVar8[7] = 0;
  puVar8[9] = &UNK_10f744b5e;
  *(undefined1 *)(puVar8 + 10) = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xb] = 0;
  *(undefined4 *)(puVar8 + 0xe) = 1;
  *(undefined8 **)(param_1 + 0x36) = puVar8;
  puVar8 = (undefined8 *)0x78;
  func_0x000107c60e20();
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[6] = param_1;
  puVar8[8] = 0xffffffffffffffff;
  puVar8[7] = 0;
  puVar8[9] = "immediate";
  *(undefined1 *)(puVar8 + 10) = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xb] = 0;
  *(undefined4 *)(puVar8 + 0xe) = 0;
  *(undefined8 **)(param_1 + 0x38) = puVar8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(int **)(param_1 + 0x48) = param_1 + 0x48;
  *(int **)(param_1 + 0x4a) = param_1 + 0x48;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = -1;
  param_1[0x51] = -1;
  *(undefined1 *)(param_1 + 0x52) = 1;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((long)param_1 + 0x1a9) = 0;
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  *(undefined1 *)(param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 0x76) = 0;
  piVar12 = param_1 + 0x7c;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  if (param_2 == 0) {
    piVar12[0] = 0;
    piVar12[1] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_4 + 1);
    *(undefined1 *)((long)param_1 + 0x209) = *(undefined1 *)((long)param_4 + 9);
    *(undefined1 *)((long)param_1 + 0x20a) = *(undefined1 *)((long)param_4 + 10);
    *(bool *)(param_1 + 0x22) = puVar8[2] == 0;
    *(byte *)((long)param_1 + 0x89) = (*(byte *)(param_1 + 0x56) ^ 1) & 1;
    if (*(long *)(param_1 + 2) != 0) {
      lVar13 = *(long *)(param_1 + 6);
      puVar1 = (uint *)(lVar13 + 8);
      do {
        uVar2 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar2 | 0x40000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar2 = uVar2 & 0x3fffffff;
      do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 - uVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((int)uVar3 < 0) && ((uVar3 & 0x3fffffff) == uVar2)) {
        puVar8 = (undefined8 *)(lVar13 + 0x10);
        func_0x00010012c800();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_1;
    }
    func_0x000107c60e78();
    piVar12 = extraout_x8;
  }
  else {
    puVar9 = (undefined4 *)0x38;
    func_0x000107c60e20();
    *puVar9 = 1;
    *(code **)(puVar9 + 2) = FUN_100141480;
    *(undefined **)(puVar9 + 4) = &UNK_10b30d35c;
    *(undefined8 *)(puVar9 + 6) = 0x100142430;
    *(undefined8 *)(puVar9 + 8) = 0x100141a08;
    *(undefined8 *)(puVar9 + 10) = 0;
    *(int **)(puVar9 + 0xc) = param_1;
    puStack_58 = puVar9;
    puVar8 = (undefined8 *)(param_2 + 0x60);
    ppuVar11 = &puStack_58;
  }
  plVar17 = puVar8 + 2;
  lVar13 = *plVar17;
  if (lVar13 == 0) {
    lVar13 = 0x230;
    func_0x000107c60e20();
    func_0x000107c60ee4();
    if (puVar8[1] == 0) {
      puVar8[1] = lVar13;
      lVar14 = 0;
    }
    else {
      *(long *)(puVar8[1] + 0x210) = lVar13;
      lVar16 = puVar8[2];
      *(undefined8 *)(lVar13 + 0x218) = puVar8[1];
      puVar8[1] = lVar13;
      lVar14 = 0;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x220) = lVar13;
        lVar14 = *plVar17;
      }
    }
    *(long *)(lVar13 + 0x228) = lVar14;
    *plVar17 = lVar13;
  }
  uVar18 = (~*(ulong *)(lVar13 + 8) & 0xaaaaaaaaaaaaaaaa) >> 1 |
           (~*(ulong *)(lVar13 + 8) & 0x5555555555555555) << 1;
  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
  lVar14 = lVar13 + uVar18 * 8;
  puVar9 = *ppuVar11;
  *ppuVar11 = (undefined4 *)0x0;
  piVar10 = *(int **)(lVar14 + 0x10);
  *(undefined4 **)(lVar14 + 0x10) = puVar9;
  if (piVar10 != (int *)0x0) {
    do {
      iVar6 = *piVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      (**(code **)(piVar10 + 4))();
    }
  }
  uVar18 = 1L << (uVar18 & 0x3f);
  uVar15 = *(ulong *)(lVar13 + 8) | uVar18;
  *(ulong *)(lVar13 + 8) = uVar15;
  if (uVar15 == 0xffffffffffffffff) {
    if (*(long *)(lVar13 + 0x228) == 0) {
      lVar16 = *(long *)(lVar13 + 0x220);
      lVar14 = 0;
    }
    else {
      lVar16 = *(long *)(lVar13 + 0x220);
      *(long *)(*(long *)(lVar13 + 0x228) + 0x220) = lVar16;
      lVar14 = *(long *)(lVar13 + 0x228);
    }
    if (lVar16 != 0) {
      plVar17 = (long *)(lVar16 + 0x228);
    }
    *plVar17 = lVar14;
    *(long *)(lVar13 + 0x220) = 0;
    *(undefined8 *)(lVar13 + 0x228) = 0;
  }
  *(undefined8 **)piVar12 = puVar8;
  *(long *)(piVar12 + 2) = lVar13;
  *(ulong *)(piVar12 + 4) = uVar18;
  return piVar10;
}



/* Entry: 1001292e0; end: 100129487;  */

void FUN_1001292e0(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (*(byte *)(plVar3 + 3) & 1) != 0)) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar7 = (long *)*plVar2;
    if (plVar7 == plVar3) {
      if ((plVar2[1] == 0) || (plVar7 = (long *)(plVar2[1] + 0x18), *(char *)plVar7 == '\x01')) {
        if ((long *)*plVar3 != param_2) {
          plVar7 = (long *)plVar3[1];
          lVar4 = *plVar7;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar7[2] = (long)plVar2;
          lVar4 = 0;
          if ((long *)*plVar2 != plVar3) {
            lVar4 = 8;
          }
          *(long **)((long)plVar2 + lVar4) = plVar7;
          *plVar7 = (long)plVar3;
          plVar3[2] = (long)plVar7;
          plVar2 = (long *)plVar7[2];
          plVar3 = plVar7;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar4 = *plVar2;
        lVar6 = *(long *)(lVar4 + 8);
        *plVar2 = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar2;
        }
        puVar5 = (undefined8 *)plVar2[2];
        *(undefined8 **)(lVar4 + 0x10) = puVar5;
        lVar6 = 0;
        if ((long *)*puVar5 != plVar2) {
          lVar6 = 8;
        }
        *(long *)((long)puVar5 + lVar6) = lVar4;
        *(long **)(lVar4 + 8) = plVar2;
        plVar2[2] = lVar4;
        return;
      }
    }
    else if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 3, (char)*plVar7 == '\x01')) {
      plVar7 = (long *)*plVar3;
      if (plVar7 == param_2) {
        lVar4 = plVar7[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        plVar7[2] = (long)plVar2;
        lVar4 = 0;
        if ((long *)*plVar2 != plVar3) {
          lVar4 = 8;
        }
        *(long **)((long)plVar2 + lVar4) = plVar7;
        plVar7[1] = (long)plVar3;
        plVar3[2] = (long)plVar7;
        plVar2 = (long *)plVar7[2];
        plVar3 = plVar7;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      puVar5 = (undefined8 *)plVar2[2];
      plVar3[2] = (long)puVar5;
      lVar4 = 0;
      if ((long *)*puVar5 != plVar2) {
        lVar4 = 8;
      }
      *(long **)((long)puVar5 + lVar4) = plVar3;
      *plVar3 = (long)plVar2;
      plVar2[2] = (long)plVar3;
      return;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar7 = '\x01';
    param_2 = plVar2;
  } while( true );
}



/* Entry: 100129488; end: 100129abb;  */

/* WARNING: Possible PIC construction at 0x0001001294d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100129548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001294d4) */
/* WARNING: Removing unreachable block (ram,0x0001001294e8) */
/* WARNING: Removing unreachable block (ram,0x00010012951c) */
/* WARNING: Removing unreachable block (ram,0x000100129530) */
/* WARNING: Removing unreachable block (ram,0x00010012954c) */
/* WARNING: Removing unreachable block (ram,0x000100129560) */
/* WARNING: Removing unreachable block (ram,0x000100129594) */
/* WARNING: Removing unreachable block (ram,0x0001001295a8) */
/* WARNING: Removing unreachable block (ram,0x0001001295d8) */
/* WARNING: Removing unreachable block (ram,0x0001001295c0) */

void FUN_100129488(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_2 + 0xd8);
  if (plVar9[2] == 0) {
    return;
  }
  plVar3 = (long *)*plVar9;
  lVar5 = plVar3[1];
  if ((*(byte *)(plVar9 + 10) & 1) == 0) {
    lVar4 = *plVar3;
  }
  else {
    lVar4 = *plVar3;
    lVar6 = 0;
    if (lVar5 + 1 != lVar4) {
      lVar6 = lVar5 + 1;
    }
    lVar6 = plVar3[3] + lVar6 * 0xa0;
    if (*(int *)(lVar6 + 0x78) == 0) {
      uVar7 = *(ulong *)(lVar6 + 0x70);
      uVar8 = *(ulong *)(lVar6 + 0x30);
      if (uVar7 + 0x8000000000000001 < 2) {
        if (uVar8 != uVar7 && (uVar8 == 0x7fffffffffffffff || uVar8 == 0x8000000000000000)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(0,0x10012975c);
          (*pcVar1)();
        }
        uVar8 = plVar9[0xb];
      }
      else {
        bVar2 = SCARRY8(uVar8,uVar7);
        uVar8 = uVar8 + uVar7;
        uVar7 = (long)uVar8 >> 0x3f ^ 0x8000000000000000;
        if (!bVar2) {
          uVar7 = uVar8;
        }
        uVar8 = plVar9[0xb];
      }
    }
    else {
      uVar7 = *(ulong *)(lVar6 + 0x30);
      uVar8 = plVar9[0xb];
    }
    if (*(ulong *)(lVar6 + 0x88) == uVar8) {
      if (uVar7 == plVar9[0xc]) {
        if ((int)plVar9[0xd] <= *(int *)(lVar6 + 0x68)) {
          return;
        }
      }
      else if (plVar9[0xc] <= (long)uVar7) {
        return;
      }
    }
    else if (uVar8 <= *(ulong *)(lVar6 + 0x88)) {
      return;
    }
  }
  lVar6 = 0;
  if (lVar5 + 1 != lVar4) {
    lVar6 = lVar5 + 1;
  }
  lVar5 = plVar3[3] + lVar6 * 0xa0;
  if (*(int *)(lVar5 + 0x78) == 0) {
    lVar4 = *(long *)(lVar5 + 0x30);
    if (1 < *(long *)(lVar5 + 0x70) + 0x8000000000000001U) {
      return;
    }
    if (lVar4 != *(long *)(lVar5 + 0x70) &&
        (lVar4 == 0x7fffffffffffffff || lVar4 == -0x8000000000000000)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x10012969c);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 100129abc; end: 100129b43;  */

void FUN_100129abc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100129b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x80))();
    return;
  }
  plVar1 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)(*plVar5 + 0x80))(plVar5,param_2);
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100129b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  return;
}



/* Entry: 100129b44; end: 100129c03;  */

void FUN_100129b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((bRam00000001137f51e0 & 1) == 0) {
    iVar2 = 0x137f51e0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c4a0b0();
      bRam00000001137f51d8 = (byte)puVar4;
      func_0x000107c60e4c(0x1137f51e0);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  puVar4 = PTR_s_class_1125ac0b8;
  if ((bRam00000001137f51d8 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61158(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c4185c(puVar1,param_2,puVar4,puVar3,0);
    bRam00000001137f51d8 = 1;
  }
  return;
}



/* Entry: 100129c04; end: 100129ecb;  */

void FUN_100129c04(long param_1,byte param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined **appuStack_158 [6];
  undefined8 uStack_128;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  piVar4 = (int *)&uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100129b44();
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61210(&uStack_a0);
  if ((param_2 & 1) == 0) {
    func_0x000107c61214(&uStack_a0,2);
  }
  if (param_1 != 0) {
    func_0x000107c61218(&uStack_a0,param_1);
  }
  puVar3 = (undefined8 *)0x10;
  func_0x000107c60e20();
  *puVar3 = param_3;
  *(byte *)(puVar3 + 1) = param_2;
  *(undefined4 *)((long)puVar3 + 0xc) = param_5;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61238(&uStack_1e0,&uStack_a0,0x10012b9d4,puVar3);
  iVar2 = (int)piVar4;
  if (iVar2 == 0) {
    *param_4 = uStack_1e0;
    func_0x000107c6120c(&uStack_a0);
  }
  else {
    uStack_1e0 = 0;
    func_0x000107c60e5c();
    *piVar4 = iVar2;
    func_0x000107c60e5c();
    iVar1 = *piVar4;
    ppuStack_1d8 = &PTR_DAT_110cd4a10;
    uStack_1d0 = 2;
    uStack_128 = 0;
    ppuStack_1c8 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
    appuStack_158[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
    func_0x000107c60dd0(appuStack_158,&ppuStack_1c0);
    uStack_c8 = 0xffffffff;
    uStack_d0 = 0;
    appuStack_158[0] = &PTR_DAT_11088d708;
    ppuStack_1c0 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    ppuStack_1c8 = &PTR_DAT_11088d6e0;
    func_0x000107c60dac(auStack_1b8);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    ppuStack_1c0 = &PTR_DAT_11088d7b0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_160 = 0x10;
    pppuVar5 = &ppuStack_1c0;
    FUN_10014d39c();
    puStack_b8 = &UNK_10f74567c;
    uStack_b0 = 0x97;
    func_0x000107c60e5c();
    uStack_ac = *(undefined4 *)pppuVar5;
    func_0x000107c60e5c();
    *(undefined4 *)pppuVar5 = 0;
    FUN_10014d66c(&ppuStack_1d8,&UNK_10f74567c,0x97);
    ppuStack_1d8 = &PTR_DAT_110cd4a30;
    iStack_a8 = iVar1;
    FUN_10014d9fc(&ppuStack_1c8,&UNK_10f7456aa,0xe);
    func_0x000107c2cb40(&ppuStack_1d8);
    *param_4 = uStack_1e0;
    func_0x000107c6120c(&uStack_a0);
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c60e14(puVar3);
    }
  }
  uVar6 = (ulong)(iVar2 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x000100129e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(uVar6 + 8) + 0x30) + 0x98))();
    return;
  }
  return;
}



/* Entry: 100129ecc; end: 100129f9f;  */

void FUN_100129ecc(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plStack_168;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  plVar11 = &lStack_110;
  plVar8 = &lStack_110;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  puStack_50 = &uStack_a8;
  puStack_38 = &uStack_58;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0xaaaaaaaaaaaaaa00;
  uStack_58 = 0xaaaaaaaaaaaaaa01;
  iVar7 = (int)param_1 + 0x28;
  plStack_f8 = param_1;
  puStack_48 = puStack_50;
  puStack_40 = puStack_50;
  puStack_30 = puStack_50;
  func_0x000107c61264();
  if (iVar7 != 0) {
    func_0x000107c2cfbc(param_1 + 5);
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  func_0x000107c61268(param_1 + 5);
  FUN_10012a76c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if ((plVar8[0x27] != 0) && ((*(byte *)(plVar8 + 0x33) & 1) == 0)) {
    lVar14 = plVar8[0x2a];
    uVar15 = plVar8[0x11];
    if (uVar15 != 0) {
      if (*(int *)(plVar8[1] + 0x3c) == 0) {
        if ((char)((long *)plVar8[0xe])[2] == '\0') {
          plVar9 = *(long **)plVar8[0xe];
          (**(code **)(*plVar9 + 8))();
          uVar15 = (long)plVar9 + (uVar15 - 1);
          if (uVar15 < 2) {
            uVar15 = 1;
          }
        }
      }
      else {
        uVar15 = 0;
      }
    }
    lVar17 = plVar8[0x29];
    uVar16 = plVar8[0x28];
    if (uVar15 + lVar14 <= (ulong)plVar8[0x28]) {
      uVar16 = uVar15 + lVar14;
    }
    uVar15 = plVar8[0x2a];
    if (uVar16 <= uVar15) {
      uVar16 = uVar15;
    }
    uVar12 = plVar8[0x13] + plVar8[0x12];
    if (uVar12 != 0) {
      if (*(uint *)(plVar8[1] + 0x3c) < 2) {
        if (*(byte *)((long *)plVar8[0xe] + 2) - 1 < 2) {
          plVar9 = *(long **)plVar8[0xe];
          (**(code **)(*plVar9 + 8))();
          uVar12 = (long)plVar9 + (uVar12 - 1);
          if (uVar12 < 2) {
            uVar12 = 1;
          }
        }
      }
      else {
        uVar12 = 0;
      }
    }
    uVar12 = (lVar17 - uVar15) + uVar16 + uVar12;
    uVar15 = plVar8[0x27];
    if (uVar12 <= (ulong)plVar8[0x27]) {
      uVar15 = uVar12;
    }
    if (0xff < uVar15) {
      uVar15 = 0x100;
    }
    uVar12 = (plVar8[0x24] - plVar8[0x23] >> 3) - (plVar8[0x2d] - plVar8[0x2c] >> 3);
    uVar16 = 0;
    if (uVar12 <= uVar15) {
      uVar16 = uVar15 - uVar12;
    }
    uVar2 = uVar16;
    if (1 < uVar16) {
      uVar2 = 2;
    }
    if ((int)plVar8[0x1c] == 2) {
      uVar16 = uVar2;
    }
    uVar2 = (ulong)(uVar12 < uVar15);
    if ((int)plVar8[0x1c] != 1) {
      uVar2 = uVar16;
    }
    if (uVar2 != 0) {
      uVar16 = 0;
      do {
        if (((plVar8[0x24] - plVar8[0x23] != 0x800) && (plVar8[0x2c] == plVar8[0x2d])) &&
           ((ulong)(plVar8[0x24] - plVar8[0x23] >> 3) < (ulong)plVar8[0x27])) {
          plVar9 = plVar8;
          func_0x00010012b384(plVar8,plVar11);
          plStack_168 = plVar9;
          if (plVar8[0x2c] != plVar8[0x2d]) {
            lVar17 = *(long *)(plVar8[0x2d] + -8);
            lVar14 = lVar17 + 0x18;
            func_0x000107c61264();
            if ((int)lVar14 != 0) {
              lVar14 = lVar17 + 0x18;
              func_0x000107c2cfbc();
            }
            FUN_100128a9c();
            *(long *)(lVar17 + 0x60) = lVar14;
            func_0x000107c61268(lVar17 + 0x18);
          }
          FUN_10012b7a0(plVar8 + 0x2c,&plStack_168);
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 1;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
        }
        puVar3 = (undefined8 *)plVar8[0x2d];
        if ((undefined8 *)plVar8[0x2c] != puVar3) {
          puVar13 = puVar3 + -1;
          plVar9 = (long *)*puVar13;
          plVar8[0x2d] = (long)puVar13;
          if ((undefined8 *)plVar8[0x2c] != puVar13) {
            lVar14 = puVar3[-2];
            iVar7 = (int)lVar14 + 0x18;
            func_0x000107c61264();
            if (iVar7 != 0) {
              func_0x000107c2cfbc(lVar14 + 0x18);
            }
            *(undefined8 *)(lVar14 + 0x60) = 0;
            func_0x000107c61268(lVar14 + 0x18);
          }
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plStack_168 = plVar9;
            if (*(long *)((long)plVar11 + 0x20) == 0) {
              *(long **)((long)plVar11 + 0x20) = plVar9;
            }
            else {
              puVar3 = *(undefined8 **)((long)plVar11 + 0x30);
              if (puVar3 < *(undefined8 **)((long)plVar11 + 0x38)) {
                *puVar3 = plVar9;
                *(undefined8 **)((long)plVar11 + 0x30) = puVar3 + 1;
              }
              else {
                puVar10 = (undefined1 *)((long)plVar11 + 0x28);
                func_0x000107c2cd94(puVar10,&plStack_168);
                plVar9 = plStack_168;
                *(undefined1 **)((long)plVar11 + 0x30) = puVar10;
                if (plVar9 != (long *)0x0) {
                  plVar1 = plVar9 + 1;
                  do {
                    iVar7 = (int)*plVar1 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *(int *)plVar1 = iVar7;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar7 == 0) {
                    (**(code **)(*plVar9 + 0x18))();
                  }
                }
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar2);
    }
    if (((uVar15 == uVar12) && (plVar8[0x24] - plVar8[0x23] != 0x800)) &&
       ((plVar8[0x2c] == plVar8[0x2d] &&
        ((ulong)(plVar8[0x24] - plVar8[0x23] >> 3) < (ulong)plVar8[0x27])))) {
      plVar9 = plVar8;
      func_0x00010012b384(plVar8,plVar11);
      plStack_168 = plVar9;
      if (plVar8[0x2c] != plVar8[0x2d]) {
        lVar17 = *(long *)(plVar8[0x2d] + -8);
        lVar14 = lVar17 + 0x18;
        func_0x000107c61264();
        if ((int)lVar14 != 0) {
          lVar14 = lVar17 + 0x18;
          func_0x000107c2cfbc();
        }
        FUN_100128a9c();
        *(long *)(lVar17 + 0x60) = lVar14;
        func_0x000107c61268(lVar17 + 0x18);
      }
      FUN_10012b7a0(plVar8 + 0x2c,&plStack_168);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
    }
    if ((plVar8[0xe] == plVar8[0xf]) || ((ulong)plVar8[0x29] < (ulong)plVar8[0x27])) {
      *(undefined2 *)(plVar8 + 0x15) = 0;
      bVar4 = *(byte *)(plVar8 + 0x30);
    }
    else {
      *(undefined2 *)(plVar8 + 0x15) = *(undefined2 *)(plVar8[0xe] + 0x10);
      bVar4 = *(byte *)(plVar8 + 0x30);
    }
    if ((bVar4 & 1) == 0) {
      lVar14 = plVar8[0x2a];
      uVar15 = plVar8[0x11];
      if (uVar15 != 0) {
        if (*(int *)(plVar8[1] + 0x3c) == 0) {
          if ((char)((long *)plVar8[0xe])[2] == '\0') {
            plVar9 = *(long **)plVar8[0xe];
            (**(code **)(*plVar9 + 8))();
            uVar15 = (long)plVar9 + (uVar15 - 1);
            if (uVar15 < 2) {
              uVar15 = 1;
            }
          }
        }
        else {
          uVar15 = 0;
        }
      }
      if ((uVar15 + lVar14 <= (ulong)plVar8[0x28]) || (*(int *)((long)plVar8 + 0x15c) < 1)) {
        lVar14 = plVar8[0x29];
        uVar15 = plVar8[0x11];
        if (uVar15 != 0) {
          if (*(int *)(plVar8[1] + 0x3c) == 0) {
            if ((char)((long *)plVar8[0xe])[2] == '\0') {
              plVar9 = *(long **)plVar8[0xe];
              (**(code **)(*plVar9 + 8))();
              uVar15 = (long)plVar9 + (uVar15 - 1);
              if (uVar15 < 2) {
                uVar15 = 1;
              }
            }
          }
          else {
            uVar15 = 0;
          }
        }
        uVar16 = plVar8[0x13] + plVar8[0x12];
        if (uVar16 != 0) {
          if (*(uint *)(plVar8[1] + 0x3c) < 2) {
            if (*(byte *)((long *)plVar8[0xe] + 2) - 1 < 2) {
              plVar9 = *(long **)plVar8[0xe];
              (**(code **)(*plVar9 + 8))();
              uVar16 = (long)plVar9 + (uVar16 - 1);
              if (uVar16 < 2) {
                uVar16 = 1;
              }
            }
          }
          else {
            uVar16 = 0;
          }
        }
        if (lVar14 + uVar15 + uVar16 + 1 <= (ulong)plVar8[0x27]) {
          return;
        }
        if ((int)plVar8[0x2b] < 1) {
          return;
        }
      }
      *(undefined1 *)((long)plVar11 + 0x60) = 1;
      *(undefined1 *)(plVar8 + 0x30) = 1;
    }
  }
  return;
}



/* Entry: 100129fa0; end: 10012a4f3;  */

void FUN_100129fa0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plStack_58;
  
  if ((param_1[0x27] != 0) && ((*(byte *)(param_1 + 0x33) & 1) == 0)) {
    lVar11 = param_1[0x2a];
    uVar12 = param_1[0x11];
    if (uVar12 != 0) {
      if (*(int *)(param_1[1] + 0x3c) == 0) {
        if ((char)((long *)param_1[0xe])[2] == '\0') {
          plVar8 = *(long **)param_1[0xe];
          (**(code **)(*plVar8 + 8))();
          uVar12 = (long)plVar8 + (uVar12 - 1);
          if (uVar12 < 2) {
            uVar12 = 1;
          }
        }
      }
      else {
        uVar12 = 0;
      }
    }
    lVar14 = param_1[0x29];
    uVar13 = param_1[0x28];
    if (uVar12 + lVar11 <= (ulong)param_1[0x28]) {
      uVar13 = uVar12 + lVar11;
    }
    uVar12 = param_1[0x2a];
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    uVar9 = param_1[0x13] + param_1[0x12];
    if (uVar9 != 0) {
      if (*(uint *)(param_1[1] + 0x3c) < 2) {
        if (*(byte *)((long *)param_1[0xe] + 2) - 1 < 2) {
          plVar8 = *(long **)param_1[0xe];
          (**(code **)(*plVar8 + 8))();
          uVar9 = (long)plVar8 + (uVar9 - 1);
          if (uVar9 < 2) {
            uVar9 = 1;
          }
        }
      }
      else {
        uVar9 = 0;
      }
    }
    uVar9 = (lVar14 - uVar12) + uVar13 + uVar9;
    uVar12 = param_1[0x27];
    if (uVar9 <= (ulong)param_1[0x27]) {
      uVar12 = uVar9;
    }
    if (0xff < uVar12) {
      uVar12 = 0x100;
    }
    uVar9 = (param_1[0x24] - param_1[0x23] >> 3) - (param_1[0x2d] - param_1[0x2c] >> 3);
    uVar13 = 0;
    if (uVar9 <= uVar12) {
      uVar13 = uVar12 - uVar9;
    }
    uVar2 = uVar13;
    if (1 < uVar13) {
      uVar2 = 2;
    }
    if ((int)param_1[0x1c] == 2) {
      uVar13 = uVar2;
    }
    uVar2 = (ulong)(uVar9 < uVar12);
    if ((int)param_1[0x1c] != 1) {
      uVar2 = uVar13;
    }
    if (uVar2 != 0) {
      uVar13 = 0;
      do {
        if (((param_1[0x24] - param_1[0x23] != 0x800) && (param_1[0x2c] == param_1[0x2d])) &&
           ((ulong)(param_1[0x24] - param_1[0x23] >> 3) < (ulong)param_1[0x27])) {
          plVar8 = param_1;
          func_0x00010012b384(param_1,param_2);
          plStack_58 = plVar8;
          if (param_1[0x2c] != param_1[0x2d]) {
            lVar14 = *(long *)(param_1[0x2d] + -8);
            lVar11 = lVar14 + 0x18;
            func_0x000107c61264();
            if ((int)lVar11 != 0) {
              lVar11 = lVar14 + 0x18;
              func_0x000107c2cfbc();
            }
            FUN_100128a9c();
            *(long *)(lVar14 + 0x60) = lVar11;
            func_0x000107c61268(lVar14 + 0x18);
          }
          FUN_10012b7a0(param_1 + 0x2c,&plStack_58);
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
          }
        }
        puVar3 = (undefined8 *)param_1[0x2d];
        if ((undefined8 *)param_1[0x2c] != puVar3) {
          puVar10 = puVar3 + -1;
          plVar8 = (long *)*puVar10;
          param_1[0x2d] = (long)puVar10;
          if ((undefined8 *)param_1[0x2c] != puVar10) {
            lVar11 = puVar3[-2];
            iVar7 = (int)lVar11 + 0x18;
            func_0x000107c61264();
            if (iVar7 != 0) {
              func_0x000107c2cfbc(lVar11 + 0x18);
            }
            *(undefined8 *)(lVar11 + 0x60) = 0;
            func_0x000107c61268(lVar11 + 0x18);
          }
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plStack_58 = plVar8;
            if (*(long *)(param_2 + 0x20) == 0) {
              *(long **)(param_2 + 0x20) = plVar8;
            }
            else {
              puVar3 = *(undefined8 **)(param_2 + 0x30);
              if (puVar3 < *(undefined8 **)(param_2 + 0x38)) {
                *puVar3 = plVar8;
                *(undefined8 **)(param_2 + 0x30) = puVar3 + 1;
              }
              else {
                lVar11 = param_2 + 0x28;
                func_0x000107c2cd94(lVar11,&plStack_58);
                *(long *)(param_2 + 0x30) = lVar11;
                if (plStack_58 != (long *)0x0) {
                  plVar8 = plStack_58 + 1;
                  do {
                    iVar7 = (int)*plVar8 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar6) {
                      *(int *)plVar8 = iVar7;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar7 == 0) {
                    (**(code **)(*plStack_58 + 0x18))();
                  }
                }
              }
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar2);
    }
    if (((uVar12 == uVar9) && (param_1[0x24] - param_1[0x23] != 0x800)) &&
       ((param_1[0x2c] == param_1[0x2d] &&
        ((ulong)(param_1[0x24] - param_1[0x23] >> 3) < (ulong)param_1[0x27])))) {
      plVar8 = param_1;
      func_0x00010012b384(param_1,param_2);
      plStack_58 = plVar8;
      if (param_1[0x2c] != param_1[0x2d]) {
        lVar14 = *(long *)(param_1[0x2d] + -8);
        lVar11 = lVar14 + 0x18;
        func_0x000107c61264();
        if ((int)lVar11 != 0) {
          lVar11 = lVar14 + 0x18;
          func_0x000107c2cfbc();
        }
        FUN_100128a9c();
        *(long *)(lVar14 + 0x60) = lVar11;
        func_0x000107c61268(lVar14 + 0x18);
      }
      FUN_10012b7a0(param_1 + 0x2c,&plStack_58);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
    }
    if ((param_1[0xe] == param_1[0xf]) || ((ulong)param_1[0x29] < (ulong)param_1[0x27])) {
      *(undefined2 *)(param_1 + 0x15) = 0;
      bVar4 = *(byte *)(param_1 + 0x30);
    }
    else {
      *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_1[0xe] + 0x10);
      bVar4 = *(byte *)(param_1 + 0x30);
    }
    if ((bVar4 & 1) == 0) {
      lVar11 = param_1[0x2a];
      uVar12 = param_1[0x11];
      if (uVar12 != 0) {
        if (*(int *)(param_1[1] + 0x3c) == 0) {
          if ((char)((long *)param_1[0xe])[2] == '\0') {
            plVar8 = *(long **)param_1[0xe];
            (**(code **)(*plVar8 + 8))();
            uVar12 = (long)plVar8 + (uVar12 - 1);
            if (uVar12 < 2) {
              uVar12 = 1;
            }
          }
        }
        else {
          uVar12 = 0;
        }
      }
      if ((uVar12 + lVar11 <= (ulong)param_1[0x28]) || (*(int *)((long)param_1 + 0x15c) < 1)) {
        lVar11 = param_1[0x29];
        uVar12 = param_1[0x11];
        if (uVar12 != 0) {
          if (*(int *)(param_1[1] + 0x3c) == 0) {
            if ((char)((long *)param_1[0xe])[2] == '\0') {
              plVar8 = *(long **)param_1[0xe];
              (**(code **)(*plVar8 + 8))();
              uVar12 = (long)plVar8 + (uVar12 - 1);
              if (uVar12 < 2) {
                uVar12 = 1;
              }
            }
          }
          else {
            uVar12 = 0;
          }
        }
        uVar13 = param_1[0x13] + param_1[0x12];
        if (uVar13 != 0) {
          if (*(uint *)(param_1[1] + 0x3c) < 2) {
            if (*(byte *)((long *)param_1[0xe] + 2) - 1 < 2) {
              plVar8 = *(long **)param_1[0xe];
              (**(code **)(*plVar8 + 8))();
              uVar13 = (long)plVar8 + (uVar13 - 1);
              if (uVar13 < 2) {
                uVar13 = 1;
              }
            }
          }
          else {
            uVar13 = 0;
          }
        }
        if (lVar11 + uVar12 + uVar13 + 1 <= (ulong)param_1[0x27]) {
          return;
        }
        if ((int)param_1[0x2b] < 1) {
          return;
        }
      }
      *(undefined1 *)(param_2 + 0x60) = 1;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



/* Entry: 10012a4f4; end: 10012a76b;  */

void FUN_10012a4f4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piStack_68;
  undefined8 auStack_60 [4];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010012c800(*(long *)(param_1 + 0x20) + 0x68);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    for (puVar8 = *(undefined8 **)(param_1 + 0x28); puVar8 != puVar2; puVar8 = puVar8 + 1) {
      while (plVar7 = (long *)*puVar8, plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        func_0x00010012c800(plVar7 + 0xd);
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        puVar8 = puVar8 + 1;
        if (puVar8 == puVar2) goto LAB_10012a59c;
      }
      func_0x00010012c800(0x68);
    }
  }
LAB_10012a59c:
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010012b890(*(long *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd8))
    ;
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x1a0) == '\x01') {
      auStack_60[0] = 0x7fffffffffffffff;
      FUN_100132a78(*(long *)(param_1 + 0x18) + 0x1a8,auStack_60);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    for (puVar8 = *(undefined8 **)(param_1 + 0x48); puVar8 != puVar2; puVar8 = puVar8 + 1) {
      plVar7 = (long *)*puVar8;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x00010012b890(plVar7,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd8));
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x1a0) == '\x01') {
        auStack_60[0] = 0x7fffffffffffffff;
        FUN_100132a78(*(long *)(param_1 + 0x18) + 0x1a8,auStack_60);
      }
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar9 = *(long *)(param_1 + 0x18);
    puVar8 = *(undefined8 **)(lVar9 + 0xd0);
    FUN_10012dd4c(auStack_60,&UNK_10f7451ba,&UNK_10f7451d1,0x49d);
    piVar6 = (int *)0x38;
    func_0x000107c60e20();
    *piVar6 = 1;
    *(undefined **)(piVar6 + 2) = &UNK_10b31d25c;
    *(undefined **)(piVar6 + 4) = &UNK_10b31d278;
    piVar6[6] = 0x142430;
    piVar6[7] = 1;
    *(undefined **)(piVar6 + 8) = &UNK_10b31cf5c;
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    *(long *)(piVar6 + 0xc) = lVar9;
    piStack_68 = piVar6;
    (**(code **)*puVar8)(puVar8,auStack_60,&piStack_68,*(undefined8 *)(lVar9 + 0xf0));
    if (piStack_68 != (int *)0x0) {
      do {
        iVar5 = *piStack_68;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
        if (bVar4) {
          *piStack_68 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(piStack_68 + 4))();
      }
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 200);
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar8 != puVar2) {
    do {
      (**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,*(undefined4 *)(puVar8 + 1));
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar2);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  }
  return;
}



/* Entry: 10012a76c; end: 10012ab33;  */

undefined8 * FUN_10012a76c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_10012a4f4();
  lVar4 = param_1[0x19];
  if (lVar4 != 0) {
    param_1[0x1a] = lVar4;
    if (param_1[0x1c] == lVar4) {
      *(undefined1 *)(param_1[0x1c] + 0x50) = 0;
      plVar5 = (long *)param_1[9];
      goto joined_r0x00010012a7a4;
    }
    func_0x000107c60e14();
  }
  plVar5 = (long *)param_1[9];
joined_r0x00010012a7a4:
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)param_1[10];
    plVar6 = plVar5;
    if (plVar7 != plVar5) {
      do {
        plVar7 = plVar7 + -1;
        plVar6 = (long *)*plVar7;
        if (plVar6 != (long *)0x0) {
          plVar8 = plVar6 + 1;
          do {
            iVar3 = (int)*plVar8 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
      } while (plVar7 != plVar5);
      plVar6 = (long *)param_1[9];
    }
    param_1[10] = plVar5;
    func_0x000107c60e14(plVar6);
  }
  plVar5 = (long *)param_1[8];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      iVar3 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)param_1[5];
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)param_1[6];
    plVar6 = plVar5;
    if (plVar7 != plVar5) {
      do {
        plVar7 = plVar7 + -1;
        plVar6 = (long *)*plVar7;
        if (plVar6 != (long *)0x0) {
          plVar8 = plVar6 + 1;
          do {
            iVar3 = (int)*plVar8 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *(int *)plVar8 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
      } while (plVar7 != plVar5);
      plVar6 = (long *)param_1[5];
    }
    param_1[6] = plVar5;
    func_0x000107c60e14(plVar6);
  }
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      iVar3 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5;
    plVar7 = (long *)param_1[1];
    if ((long *)param_1[1] != plVar5) {
      do {
        plVar8 = plVar7 + -2;
        plVar6 = (long *)*plVar8;
        if (plVar6 != (long *)0x0) {
          plVar7[-2] = 0;
          if (plVar7[-1] != 0) {
            func_0x0001001b6dcc(plVar7[-1],plVar6);
          }
          plVar7 = plVar6 + 1;
          do {
            iVar3 = (int)*plVar7 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *(int *)plVar7 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          plVar6 = (long *)*plVar8;
          if (plVar6 != (long *)0x0) {
            plVar7 = plVar6 + 1;
            do {
              iVar3 = (int)*plVar7 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *(int *)plVar7 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar6 + 0x20))();
            }
          }
        }
        plVar7 = plVar8;
      } while (plVar8 != plVar5);
      plVar6 = (long *)*param_1;
    }
    param_1[1] = plVar5;
    func_0x000107c60e14(plVar6);
  }
  return param_1;
}



/* Entry: 10012ab34; end: 10012ac9f;  */

void FUN_10012ab34(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int *piStack_58;
  undefined1 auStack_50 [32];
  
  iVar5 = (int)param_1 + 0x10;
  func_0x000107c61264();
  if (iVar5 == 0) {
    plVar6 = (long *)param_1[10];
    param_1[10] = param_2;
  }
  else {
    func_0x000107c2cfbc(param_1 + 2);
    plVar6 = (long *)param_1[10];
    param_1[10] = param_2;
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar7 = param_1[0xb];
  if ((lVar7 == param_1[0xc]) || (*(char *)(lVar7 + 0x80) == '\x01')) {
    func_0x000107c61268(param_1 + 2);
  }
  else {
    *(undefined1 *)(lVar7 + 0x80) = 1;
    lVar7 = *(long *)(lVar7 + 0x30);
    func_0x000107c61268(param_1 + 2);
    if (lVar7 != 0x7fffffffffffffff) {
      plVar6 = (long *)param_1[10];
      FUN_10012dd4c(auStack_50,&UNK_10f744f57,&UNK_10f744f7f,0x9d);
      piStack_58 = (int *)*param_1;
      if (piStack_58 != (int *)0x0) {
        do {
          iVar5 = *piStack_58;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
          if (bVar3) {
            *piStack_58 = iVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0,0x10012ac98);
          (*pcVar4)();
        }
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,auStack_50,&piStack_58,lVar7,2);
      if (piStack_58 != (int *)0x0) {
        do {
          iVar5 = *piStack_58;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
          if (bVar3) {
            *piStack_58 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          (**(code **)(piStack_58 + 4))();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10012aca0; end: 10012b127;  */

void FUN_10012aca0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  plStack_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  iVar4 = (int)param_1 + 0x20;
  func_0x000107c61264();
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    if (&plStack_58 == (long **)(param_1 + 0x60)) goto LAB_10012ad00;
  }
  else {
    func_0x000107c2cfbc(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0xc0) = 1;
    if (&plStack_58 == (long **)(param_1 + 0x60)) goto LAB_10012ad00;
  }
  func_0x00010012ae34(&plStack_58,*(long *)(param_1 + 0x60),*(long *)(param_1 + 0x68),
                      *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3);
LAB_10012ad00:
  func_0x000107c61268(param_1 + 0x20);
  plVar5 = plStack_50;
  plVar7 = plStack_58;
  for (plVar6 = plStack_58; plStack_58 = plVar7, plVar6 != plVar5; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 == (long *)0x0) {
      func_0x00010012b890(0,*(undefined8 *)(param_1 + 0x18));
    }
    else {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x00010012b890(plVar7,*(undefined8 *)(param_1 + 0x18));
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    plVar7 = plStack_58;
  }
  plVar6 = plStack_50;
  if (plVar7 != (long *)0x0) {
    while (plVar6 != plVar7) {
      plVar6 = plVar6 + -1;
      plVar5 = (long *)*plVar6;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    }
    plStack_50 = plVar7;
    func_0x000107c60e14(plStack_58);
    return;
  }
  return;
}



/* Entry: 10012b128; end: 10012b79f;  */

void FUN_10012b128(long *param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
                  undefined4 param_7,int param_8,ulong param_9,ulong param_10)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar8 = (int)param_1 + 0x28;
  func_0x000107c61264();
  if (iVar8 != 0) {
    func_0x000107c2cfbc(param_1 + 5);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  func_0x000107c61268(param_1 + 5);
  *(undefined2 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  if ((param_9 & 1) == 0) {
    iVar8 = (int)param_1[0x22];
    uVar2 = 1000000;
    if (iVar8 != 1) {
      uVar2 = 10000000;
    }
    param_10 = (ulong)uVar2;
  }
  else {
    iVar8 = (int)param_1[0x22];
  }
  uVar2 = 1200000;
  if (iVar8 != 1) {
    uVar2 = 12000000;
  }
  param_1[0x1d] = param_10;
  param_1[0x1e] = (ulong)uVar2;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  puStack_90 = &uStack_e8;
  puStack_78 = &uStack_98;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0xaaaaaaaaaaaaaa00;
  uStack_98 = 0xaaaaaaaaaaaaaa01;
  iVar8 = (int)param_1 + 0x28;
  plStack_138 = param_1;
  puStack_88 = puStack_90;
  puStack_80 = puStack_90;
  puStack_70 = puStack_90;
  func_0x000107c61264();
  if (iVar8 != 0) {
    func_0x000107c2cfbc(param_1 + 5);
  }
  param_1[0x27] = (long)param_2;
  param_1[0x28] = (long)param_3;
  param_1[0x17] = (long)param_2;
  param_1[0x18] = param_4;
  *(undefined4 *)(param_1 + 0x19) = param_7;
  plVar6 = (long *)param_1[0x1a];
  param_1[0x1a] = param_5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  param_1[0x1b] = param_6;
  if (param_8 != 0) {
    if ((char)param_1[0x34] == '\x01') {
      param_1[0x37] = (long)&PTR_DAT_110cd6598;
      if (*(char *)((long)param_1 + 0x1c4) == '\x01') goto LAB_10012b378;
      if ((int)param_1[0x38] != 0) {
        func_0x000100717b20();
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      piVar7 = (int *)param_1[0x36];
      if (piVar7 != (int *)0x0) {
        do {
          iVar8 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000100717d1c();
          func_0x000107c60e14();
        }
      }
      *(undefined1 *)(param_1 + 0x34) = 0;
    }
    func_0x0001000fff3c(param_1 + 0x35,1,1);
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,&uStack_150);
  func_0x000107c61268(param_1 + 5);
  FUN_10012a76c(&uStack_150);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_10012b378:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0,0x10012b37c);
  (*pcVar5)();
}



/* Entry: 10012b7a0; end: 10012babf;  */

long * FUN_10012b7a0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar12 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar8 = param_1;
  }
  else {
    lVar11 = (long)puVar2 - *param_1;
    uVar1 = (lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000107c2ce08();
LAB_10012b88c:
      func_0x000107c35c58();
      iVar5 = (int)param_1 + 0x18;
      func_0x000107c61264();
      if (iVar5 == 0) {
        cVar3 = (char)param_1[0x12];
      }
      else {
        func_0x000107c2cfbc(param_1 + 3);
        cVar3 = (char)param_1[0x12];
      }
      if (cVar3 == '\0') {
        if ((char)param_1[0x18] != '\0') {
          func_0x000107c61268(param_1 + 3);
          return (long *)0x1;
        }
        param_1[0x16] = (long)param_2;
        if (param_1 != (long *)0x0) {
          plVar8 = param_1 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar8 = (long *)param_1[2];
        param_1[2] = (long)param_1;
        if (plVar8 != (long *)0x0) {
          plVar7 = plVar8 + 1;
          do {
            iVar5 = (int)*plVar7 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
        FUN_100129c04(0,1,param_1,param_1 + 0xb,*(undefined4 *)((long)param_1 + 0xbc));
        if (param_1[0xb] == 0) {
          plVar8 = (long *)param_1[2];
          param_1[2] = 0;
          if (plVar8 != (long *)0x0) {
            plVar7 = plVar8 + 1;
            do {
              lVar11 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *(int *)plVar7 = (int)lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar11 == 1) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          func_0x000107c61268(param_1 + 3);
          return (long *)0x0;
        }
      }
      func_0x000107c61268(param_1 + 3);
      return (long *)0x1;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
    }
    else {
      if (uVar10 >> 0x3d != 0) goto LAB_10012b88c;
      lVar6 = uVar10 << 3;
      func_0x000107c60e20();
    }
    puVar2 = (undefined8 *)(lVar6 + lVar11);
    puVar12 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar11 = (long)puVar2 - (param_1[1] - *param_1);
    func_0x000107c610b4(lVar11);
    plVar7 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar12;
    param_1[2] = lVar6 + uVar10 * 8;
    plVar8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      func_0x000107c60e14();
      param_1[1] = (long)puVar12;
      return plVar7;
    }
  }
  param_1[1] = (long)puVar12;
  return plVar8;
}



/* Entry: 10012bac0; end: 10012bb37;  */

void FUN_10012bac0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((bRam000000011383c698 & 1) != 0) {
    uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
    if (SUB168(SEXT816(param_1) * SEXT816(1000),8) == param_1 * 1000 >> 0x3f) {
      uVar1 = param_1 * 1000;
    }
    func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
    func_0x000107c5c8f4();
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 10012bb38; end: 10012bedb;  */

int * FUN_10012bb38(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulong uStack_60;
  double dStack_58;
  double dStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 < 2) {
    if (param_1 == 0) {
      func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
      func_0x000107c59cd8(0);
    }
    else if (param_1 == 1) {
      func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
      func_0x000107c59cd8(0x3fe0000000000000);
    }
  }
  else if (param_1 == 2) {
    unaff_x20 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c41010();
    func_0x000107c59cd8(0x3ff0000000000000);
    uStack_60 = 0xaaaaaaaaaaaaaaaa;
    uStack_68 = CONCAT44(uStack_68._4_4_,0xaaaaaaaa);
    func_0x000107c61294();
    puVar14 = unaff_x20;
    func_0x000107c61244();
    if ((int)puVar14 == 0) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0x32);
      func_0x000107c6129c(unaff_x20,uStack_68 & 0xffffffff,&uStack_60);
    }
  }
  else if (param_1 == 3) {
    puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c41010();
    func_0x000107c5c8f4();
    func_0x000107c4d9e8();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = puVar4;
    func_0x000107c6115c(puVar4,puVar14);
    puVar14 = (undefined *)0x0;
    if ((((ulong)puVar5 & 1) != 0) && (puVar4 != (undefined *)0x0)) {
      func_0x000107c4c0a8();
      puVar14 = (undefined *)((long)puVar4 / 1000);
      puVar5 = puVar4;
    }
    func_0x000107c61294();
    func_0x000107c61254();
    uStack_6c = 0;
    puVar4 = puVar5;
    func_0x000107c6168c();
    unaff_x20 = puVar5;
    if ((int)puVar4 == 0) {
      uStack_70 = 0x3f;
      puVar4 = puVar5;
      func_0x000107c6168c(puVar5,3,&uStack_70,1);
      if ((int)puVar4 == 0) {
        uStack_68 = 0xaaaaaaaaaaaaaaaa;
        func_0x000107c6109c(&uStack_68);
        if (puVar14 == (undefined *)0x0) {
          uVar11 = 0;
          dVar15 = (double)NEON_ucvtf((ulong)uStack_68._4_4_);
          dVar16 = (double)NEON_ucvtf(uStack_68 & 0xffffffff);
          dVar15 = (dVar15 / dVar16) * 1000000.0;
          uVar12 = (uint)(dVar15 * 2.9);
          uVar9 = (uint)(dVar15 * 2.175);
          uVar13 = (uint)(dVar15 * 2.465);
        }
        else {
          uVar11 = (long)puVar14 * 1000;
          if ((long)puVar14 * 1000 < 0x2c4021) {
            uVar11 = 2900000;
          }
          dVar15 = (double)NEON_ucvtf((ulong)uStack_68._4_4_);
          dVar16 = (double)NEON_ucvtf(uStack_68 & 0xffffffff);
          dVar15 = (dVar15 / dVar16) * (double)uVar11;
          uVar12 = (uint)dVar15;
          if (dVar15 <= -1.0) {
            uVar12 = 0;
          }
          if (4294967295.0 < dVar15) {
            uVar12 = -(uint)(-1.0 < dVar15);
          }
          uStack_60 = 0xaaaaaaaaaaaaaaaa;
          dStack_58 = -NAN;
          dStack_50 = -NAN;
          func_0x000107c60e2c(0x18,0x11383c680,&uStack_60,5);
          uVar9 = (uint)(dStack_50 * (double)uVar12);
          uVar13 = uVar12;
          if (uVar9 <= uVar12) {
            uVar13 = uVar9;
          }
          uVar10 = (uint)(dStack_58 * (double)uVar12);
          uVar9 = uVar13;
          if (uVar10 <= uVar13) {
            uVar9 = uVar10;
          }
          uVar11 = (uStack_60 & 0xff) << 0x20;
        }
        uStack_60 = CONCAT44(uVar9,uVar12);
        dStack_58 = (double)(uVar11 | uVar13);
        func_0x000107c6168c(puVar5,2,&uStack_60,4);
        plVar6 = (long *)&UNK_10f74591e;
        func_0x000107c2cb9c(&UNK_10f74591e,0,100000,100,1);
        if ((long)puVar14 < -0x7fffffff) {
          puVar14 = (undefined *)0xffffffff80000000;
        }
        if (0x7ffffffe < (long)puVar14) {
          puVar14 = (undefined *)0x7fffffff;
        }
        (**(code **)(*plVar6 + 0x30))();
        unaff_x20 = puVar14;
        unaff_x21 = puVar5;
        if ((int)puVar5 == 0) {
          plVar6 = (long *)&UNK_10f745949;
          func_0x000107c2cb9c(&UNK_10f745949,0,100000,100,1);
          (**(code **)(*plVar6 + 0x30))();
        }
      }
    }
  }
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d95c();
  piVar7 = (int *)PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
  func_0x000107c5c8f4();
  func_0x000107c56bd8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    piVar7 = piRam000000011336f900;
    ppuStack_a0 = &PTR_PTR_1126b4000;
    uStack_78 = 0x10012bedc;
    if (piRam000000011336f900 < (int *)0x2) {
      do {
        puStack_98 = unaff_x21;
        puStack_90 = unaff_x20;
        puStack_88 = puVar14;
        puStack_80 = &stack0xfffffffffffffff0;
        if (piRam000000011336f900 != (int *)0x0) {
          ClearExclusiveLocal();
          if (piRam000000011336f900 == (int *)0x1) {
            (*(code *)PTR_FUN_11336f918)();
            piVar8 = piVar7;
            do {
              (*(code *)PTR_FUN_11336f918)();
              if ((long)piVar8 - (long)piVar7 < 1000) {
                func_0x000107c612dc();
              }
              else {
                uStack_c0 = 0xaaaaaaaaaaaaaaaa;
                uStack_b8 = 0xaaaaaaaaaaaaaaaa;
                uStack_a8 = 1000000;
                uStack_b0 = 0;
                piVar8 = (int *)&uStack_b0;
                func_0x000107c610f0(piVar8,&uStack_c0);
                iVar3 = (int)piVar8;
                while ((iVar3 == -1 && (func_0x000107c60e5c(), *piVar8 == 4))) {
                  uStack_a8 = uStack_b8;
                  uStack_b0 = uStack_c0;
                  piVar8 = (int *)&uStack_b0;
                  func_0x000107c610f0(piVar8,&uStack_c0);
                  iVar3 = (int)piVar8;
                }
              }
            } while (piRam000000011336f900 == (int *)0x1);
          }
          return piRam000000011336f900;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11336f900,0x10);
        if (bVar2) {
          piRam000000011336f900 = (int *)0x1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      piVar7 = (int *)0xb0;
      func_0x000107c60e20();
      func_0x00010012bffc();
    }
    piRam000000011336f900 = piVar7;
    return piVar7;
  }
  return piVar7;
}



/* Entry: 10012bedc; end: 10012c9db;  */

int * FUN_10012bedc(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  piVar4 = piRam000000011336f900;
  if (piRam000000011336f900 < (int *)0x2) {
    do {
      if (piRam000000011336f900 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam000000011336f900 == (int *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          piVar5 = piVar4;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)piVar5 - (long)piVar4 < 1000) {
              func_0x000107c612dc();
            }
            else {
              uStack_50 = 0xaaaaaaaaaaaaaaaa;
              uStack_48 = 0xaaaaaaaaaaaaaaaa;
              uStack_38 = 1000000;
              uStack_40 = 0;
              piVar5 = (int *)&uStack_40;
              func_0x000107c610f0(piVar5,&uStack_50);
              iVar3 = (int)piVar5;
              while ((iVar3 == -1 && (func_0x000107c60e5c(), *piVar5 == 4))) {
                uStack_38 = uStack_48;
                uStack_40 = uStack_50;
                piVar5 = (int *)&uStack_40;
                func_0x000107c610f0(piVar5,&uStack_50);
                iVar3 = (int)piVar5;
              }
            }
          } while (piRam000000011336f900 == (int *)0x1);
        }
        return piRam000000011336f900;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11336f900,0x10);
      if (bVar2) {
        piRam000000011336f900 = (int *)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    piVar4 = (int *)0xb0;
    func_0x000107c60e20();
    func_0x00010012bffc();
  }
  piRam000000011336f900 = piVar4;
  return piVar4;
}



/* Entry: 10012c9dc; end: 10012caef;  */

void FUN_10012c9dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  FUN_10012bedc();
  FUN_10012caf0();
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  pppuStack_48 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
  puVar1 = (undefined8 *)*param_1;
  uVar4 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  uVar2 = uVar4;
  if (0x3e < uVar4) {
    uVar2 = 0x3f;
  }
  if (uVar4 < 0x17) {
    uStack_38 = CONCAT17((char)uVar2,0xaaaaaaaaaaaaaa);
    ppppuVar5 = &pppuStack_48;
    if (uVar4 == 0) goto LAB_10012ca80;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((uVar2 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((uVar2 | 7) + 1);
    }
    ppppuVar5 = ppppuVar3;
    func_0x000107c60e20();
    uStack_38 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_48 = ppppuVar5;
    uStack_40 = uVar2;
  }
  func_0x000107c610b8(ppppuVar5,puVar1,uVar2);
LAB_10012ca80:
  *(undefined1 *)((long)ppppuVar5 + uVar2) = 0;
  ppppuVar3 = (undefined8 ****)pppuStack_48;
  if (-1 < (long)uStack_38) {
    ppppuVar3 = &pppuStack_48;
  }
  func_0x000107c61298(ppppuVar3);
  if (-1 < (long)uStack_38) {
    return;
  }
  func_0x000107c60e14(pppuStack_48);
  return;
}



/* Entry: 10012caf0; end: 10012d0ff;  */

/* WARNING: Possible PIC construction at 0x00010012cf20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010012cf24) */
/* WARNING: Removing unreachable block (ram,0x00010012cf2c) */
/* WARNING: Removing unreachable block (ram,0x00010012cf30) */
/* WARNING: Removing unreachable block (ram,0x00010012cf34) */
/* WARNING: Removing unreachable block (ram,0x00010012cf40) */
/* WARNING: Removing unreachable block (ram,0x00010012cf50) */
/* WARNING: Removing unreachable block (ram,0x00010012cf58) */

void FUN_10012caf0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  
  lVar14 = param_1;
  func_0x000107c61294();
  uVar7 = (uint)lVar14;
  func_0x000107c61254();
  lVar14 = param_1;
  func_0x000107c61264();
  if ((int)lVar14 == 0) {
    puVar18 = *(undefined8 **)(param_1 + 0x48);
    bVar4 = *(byte *)((long)param_2 + 0x17);
    uVar16 = (ulong)(uint)(int)(char)bVar4;
    if (puVar18 == (undefined8 *)0x0) goto LAB_10012cc14;
LAB_10012cb44:
    puVar12 = (undefined8 *)(param_1 + 0x48);
    puVar10 = puVar12;
    puVar13 = puVar18;
    uVar6 = param_2[1];
    puVar9 = (undefined8 *)*param_2;
    if (-1 < (int)uVar16) {
      uVar6 = (ulong)bVar4;
      puVar9 = param_2;
    }
    do {
      puVar11 = (undefined8 *)puVar13[4];
      uVar2 = puVar13[5];
      if (-1 < (char)*(byte *)((long)puVar13 + 0x37)) {
        puVar11 = puVar13 + 4;
        uVar2 = (ulong)*(byte *)((long)puVar13 + 0x37);
      }
      uVar1 = uVar6;
      if (uVar2 <= uVar6) {
        uVar1 = uVar2;
      }
      func_0x000107c610b0(puVar11,puVar9,uVar1);
      bVar5 = uVar2 < uVar6;
      if ((int)puVar11 != 0) {
        bVar5 = (int)puVar11 < 0;
      }
      lVar14 = 8;
      if (!bVar5) {
        lVar14 = 0;
        puVar10 = puVar13;
      }
      puVar11 = (undefined8 *)((long)puVar13 + lVar14);
      puVar13 = (undefined8 *)*puVar11;
    } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
    if (puVar10 == puVar12) goto LAB_10012cc14;
    puVar13 = (undefined8 *)puVar10[4];
    uVar2 = puVar10[5];
    if (-1 < (char)*(byte *)((long)puVar10 + 0x37)) {
      puVar13 = puVar10 + 4;
      uVar2 = (ulong)*(byte *)((long)puVar10 + 0x37);
    }
    uVar1 = uVar2;
    if (uVar6 <= uVar2) {
      uVar1 = uVar6;
    }
    func_0x000107c610b0(puVar9,puVar13,uVar1);
    bVar5 = uVar6 < uVar2;
    if ((int)puVar9 != 0) {
      bVar5 = (int)puVar9 < 0;
    }
    if (bVar5) goto LAB_10012cc14;
    puVar10 = (undefined8 *)puVar10[7];
    lVar14 = *(long *)(param_1 + 0x60);
    if (lVar14 != 0) goto LAB_10012cdb8;
LAB_10012cdec:
    lVar17 = param_1 + 0x60;
  }
  else {
    func_0x000107c2cfbc(param_1);
    puVar18 = *(undefined8 **)(param_1 + 0x48);
    bVar4 = *(byte *)((long)param_2 + 0x17);
    uVar16 = (ulong)(uint)(int)(char)bVar4;
    if (puVar18 != (undefined8 *)0x0) goto LAB_10012cb44;
LAB_10012cc14:
    puVar9 = (undefined8 *)(param_1 + 0x48);
    puVar10 = (undefined8 *)0x18;
    func_0x000107c60e20();
    uVar15 = (uint)uVar16;
    if ((int)uVar15 < 0) {
      FUN_100033dac(puVar10,*param_2,param_2[1]);
      puVar18 = (undefined8 *)*puVar9;
      uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
      uVar15 = (uint)*(byte *)((long)param_2 + 0x17);
    }
    else {
      uVar19 = *param_2;
      puVar10[1] = param_2[1];
      *puVar10 = uVar19;
      puVar10[2] = param_2[2];
    }
    puVar13 = puVar9;
    if (puVar18 != (undefined8 *)0x0) {
      uVar15 = (uint)uVar16;
      uVar6 = param_2[1];
      puVar12 = (undefined8 *)*param_2;
      if (-1 < (char)uVar16) {
        uVar6 = uVar16 & 0xff;
        puVar12 = param_2;
      }
      do {
        while( true ) {
          puVar11 = puVar18;
          puVar18 = (undefined8 *)puVar11[4];
          uVar16 = puVar11[5];
          if (-1 < (char)*(byte *)((long)puVar11 + 0x37)) {
            puVar18 = puVar11 + 4;
            uVar16 = (ulong)*(byte *)((long)puVar11 + 0x37);
          }
          uVar2 = uVar16;
          if (uVar6 <= uVar16) {
            uVar2 = uVar6;
          }
          puVar9 = puVar12;
          func_0x000107c610b0(puVar12,puVar18,uVar2);
          bVar5 = uVar6 < uVar16;
          if ((int)puVar9 != 0) {
            bVar5 = (int)puVar9 < 0;
          }
          puVar13 = puVar11;
          if (bVar5) break;
          func_0x000107c610b0(puVar18,puVar12,uVar2);
          bVar5 = uVar16 < uVar6;
          if ((int)puVar18 != 0) {
            bVar5 = (int)puVar18 < 0;
          }
          if (!bVar5) goto LAB_10012cda8;
          puVar18 = (undefined8 *)puVar11[1];
          if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
            puVar9 = puVar11 + 1;
            goto LAB_10012cd14;
          }
        }
        puVar9 = puVar11;
        puVar18 = (undefined8 *)*puVar11;
      } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
    }
LAB_10012cd14:
    puVar11 = (undefined8 *)0x40;
    func_0x000107c60e20();
    if ((uVar15 >> 7 & 1) == 0) {
      uVar19 = *param_2;
      puVar11[5] = param_2[1];
      puVar11[4] = uVar19;
      puVar11[6] = param_2[2];
    }
    else {
      FUN_100033dac(puVar11 + 4,*param_2,param_2[1]);
    }
    puVar11[7] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = puVar13;
    *puVar9 = puVar11;
    puVar18 = puVar11;
    if (**(long **)(param_1 + 0x40) != 0) {
      *(long *)(param_1 + 0x40) = **(long **)(param_1 + 0x40);
      puVar18 = (undefined8 *)*puVar9;
    }
    FUN_1001292e0(*(undefined8 *)(param_1 + 0x48),puVar18);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_10012cda8:
    puVar11[7] = puVar10;
    lVar14 = *(long *)(param_1 + 0x60);
    if (lVar14 == 0) goto LAB_10012cdec;
LAB_10012cdb8:
    lVar17 = param_1 + 0x60;
    do {
      lVar3 = 8;
      if (uVar7 <= *(uint *)(lVar14 + 0x20)) {
        lVar3 = 0;
        lVar17 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + lVar3);
    } while (lVar14 != 0);
    if ((lVar17 == param_1 + 0x60) || (uVar7 < *(uint *)(lVar17 + 0x20))) goto LAB_10012cdec;
  }
  if ((bRam000000011383add0 & 1) == 0) {
    iVar8 = 0x1383add0;
    func_0x000107c60e48();
    if (iVar8 != 0) {
      uRam000000011383adc8 = 0xffffffff;
      func_0x000100126cd4(0x11383adc8,0);
      func_0x000107c60e4c(0x11383add0);
    }
  }
  puVar18 = puVar10;
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    puVar18 = (undefined8 *)*puVar10;
  }
  uVar16 = uRam000000011336f908;
  func_0x000107c61248();
  uVar16 = uVar16 & 0xfffffffffffffffc;
  if (uVar16 == 0) {
    if (puVar18 == (undefined8 *)0x0) goto LAB_10012ce48;
    func_0x000100126e0c();
  }
  *(undefined8 **)(uVar16 + (long)(int)uRam000000011383adc8 * 0x10) = puVar18;
  *(undefined4 *)(uVar16 + (long)(int)uRam000000011383adc8 * 0x10 + 8) = uRam000000011383adc8._4_4_;
LAB_10012ce48:
  puVar9 = *(undefined8 **)(param_1 + 0xa0);
  for (puVar18 = *(undefined8 **)(param_1 + 0x98); puVar18 != puVar9; puVar18 = puVar18 + 1) {
    puVar13 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      puVar13 = (undefined8 *)*puVar10;
    }
    (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,puVar13);
  }
  if (lVar17 == param_1 + 0x60) {
    *(undefined8 **)(param_1 + 0x88) = puVar10;
    *(uint *)(param_1 + 0x90) = uVar7;
  }
  else {
    puVar13 = (undefined8 *)(param_1 + 0x78);
    uVar16 = *(ulong *)(lVar17 + 0x28);
    puVar18 = (undefined8 *)*puVar13;
    puVar9 = puVar13;
    if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
      do {
        while (puVar12 = puVar18, puVar13 = puVar12, uVar16 < (ulong)puVar12[4]) {
          puVar18 = (undefined8 *)*puVar12;
          puVar9 = puVar12;
          if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_10012cecc;
        }
        if (uVar16 <= (ulong)puVar12[4]) goto LAB_10012cf18;
        puVar18 = (undefined8 *)puVar12[1];
      } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
      puVar9 = puVar12 + 1;
    }
LAB_10012cecc:
    puVar12 = (undefined8 *)0x30;
    func_0x000107c60e20();
    puVar12[4] = uVar16;
    puVar12[5] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = puVar13;
    *puVar9 = puVar12;
    puVar18 = puVar12;
    if (**(long **)(param_1 + 0x70) != 0) {
      *(long *)(param_1 + 0x70) = **(long **)(param_1 + 0x70);
      puVar18 = (undefined8 *)*puVar9;
    }
    FUN_1001292e0(*(undefined8 *)(param_1 + 0x78),puVar18);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
LAB_10012cf18:
    puVar12[5] = puVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1);
  return;
}



/* Entry: 10012d100; end: 10012d237;  */

void FUN_10012d100(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      puVar2 = (undefined8 *)0x88;
      func_0x000107c60e20();
      FUN_10012d238();
      *puVar2 = &PTR_DAT_110cd6630;
      *(undefined1 *)((long)puVar2 + 0x87) = 0;
      *param_1 = puVar2;
      return;
    }
    puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c4a02c();
    puVar2 = (undefined8 *)0x90;
    func_0x000107c60e20();
    if ((int)puVar4 != 0) {
      FUN_10012d238(puVar2,1);
      *puVar2 = &PTR_DAT_110cd6720;
      puVar2[0x11] = 0;
      *param_1 = puVar2;
      return;
    }
    FUN_10012d238(puVar2,1);
    *puVar2 = &PTR_DAT_110cd66a8;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_40 = 0;
    puStack_38 = &UNK_10b32b8f8;
    uVar1 = 0;
    func_0x000107c60820(0,0,&uStack_80);
    puVar2[0x11] = uVar1;
    func_0x000107c607fc(puVar2[1],uVar1,*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
    *param_1 = puVar2;
    return;
  }
  if (param_2 == 2) {
    *param_1 = 0;
    return;
  }
  if (param_2 == 3) {
    uVar1 = 0xa8;
    func_0x000107c60e20();
    FUN_10012d420();
    *param_1 = uVar1;
    return;
  }
  puVar3 = (undefined8 *)0x90;
  func_0x000107c60e20();
  puVar2 = puVar3;
  FUN_10012d238();
  *puVar2 = &PTR_DAT_110cd66a8;
  uStack_48 = 0;
  uStack_50 = 0;
  puStack_38 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar1 = 0;
  func_0x000107c60820(0,0,&uStack_70);
  puVar3[0x11] = uVar1;
  func_0x000107c607fc(puVar3[1],uVar1,*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  *param_1 = puVar3;
  return;
}



/* Entry: 10012d238; end: 10012d41f;  */

undefined8 * FUN_10012d238(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *param_1 = &PTR_DAT_110cd65b8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 1;
  *(undefined1 *)((long)param_1 + 0x86) = 0;
  puVar1 = param_1;
  func_0x000107c60804();
  param_1[1] = puVar1;
  func_0x000107c607f4();
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uVar2 = 0;
  puStack_58 = param_1;
  func_0x000107c6082c(0x7fefffffffffffff,0x7fefffffffffffff,0,0,0,FUN_10032eb54,&uStack_60);
  param_1[6] = uVar2;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_70 = 0;
  pcStack_68 = FUN_10013c6fc;
  uVar2 = 0;
  puStack_a8 = param_1;
  func_0x000107c60820(0,1,&uStack_b0);
  param_1[7] = uVar2;
  pcStack_68 = (code *)&UNK_10b32b4d4;
  uVar2 = 0;
  func_0x000107c60820(0,2,&uStack_b0);
  param_1[8] = uVar2;
  pcStack_68 = (code *)&UNK_10b32b524;
  uVar2 = 0;
  func_0x000107c60820(0,0,&uStack_b0);
  param_1[9] = uVar2;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uVar2 = 0;
  puStack_d8 = param_1;
  func_0x000107c6080c(0,0x20,1,0,FUN_10013edb0,&uStack_e0);
  param_1[10] = uVar2;
  uVar2 = 0;
  func_0x000107c6080c(0,4,1,0,FUN_10013c464,&uStack_e0);
  param_1[0xb] = uVar2;
  uVar2 = 0;
  func_0x000107c6080c(0,0x81,1,0,FUN_10013c330,&uStack_e0);
  param_1[0xc] = uVar2;
  FUN_10012d680(param_1,param_2);
  return param_1;
}



/* Entry: 10012d420; end: 10012d4e7;  */

undefined8 * FUN_10012d420(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar3 = param_1;
  FUN_10012d238(param_1,1);
  *puVar3 = &PTR_DAT_110cd66a8;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  puStack_28 = &UNK_10b32b8f8;
  uVar4 = 0;
  func_0x000107c60820(0,0,&uStack_70);
  param_1[0x11] = uVar4;
  func_0x000107c607fc(param_1[1],uVar4,*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
  *param_1 = &PTR_DAT_110cd64c0;
  piVar5 = (int *)0x8;
  func_0x000107c60e20();
  *piVar5 = 0;
  *(undefined1 *)(piVar5 + 1) = 0;
  if (piVar5 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x13] = piVar5;
  param_1[0x14] = param_1;
  return param_1;
}



/* Entry: 10012d4e8; end: 10012d67f;  */

bool FUN_10012d4e8(int param_1)

{
  func_0x000107c61264();
  return param_1 == 0;
}



/* Entry: 10012d680; end: 10012d823;  */

/* WARNING: Possible PIC construction at 0x00010012d79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010012d744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010012d6ec: Changing call to branch */

void FUN_10012d680(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((param_2 & 1) != (uint)(lVar1 != 0)) {
    if ((param_2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar2 = 0x10;
      func_0x000107c60e20();
      FUN_10012d824();
      lVar1 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
    if (lVar1 != 0) {
      func_0x000107c2d004();
      goto code_r0x000107c60e14;
    }
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if ((uint)(lVar1 != 0) != (param_2 & 2) >> 1) {
    if ((param_2 >> 1 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      uVar2 = 0x10;
      func_0x000107c60e20();
      FUN_10012d824();
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    if (lVar1 != 0) {
      func_0x000107c2d004();
      goto code_r0x000107c60e14;
    }
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((uint)(lVar1 != 0) != (param_2 & 4) >> 2) {
    if ((param_2 >> 2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      uVar2 = 0x10;
      func_0x000107c60e20();
      FUN_10012d824();
      lVar1 = *(long *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
    }
    if (lVar1 != 0) {
      func_0x000107c2d004();
      goto code_r0x000107c60e14;
    }
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if ((uint)(lVar1 != 0) != (param_2 & 8) >> 3) {
    if ((param_2 >> 3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      uVar2 = 0x10;
      func_0x000107c60e20();
      FUN_10012d824();
      lVar1 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    if (lVar1 != 0) {
      func_0x000107c2d004();
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10012d824; end: 10012dbc7;  */

long * FUN_10012d824(long *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c60800(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x38);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c607fc(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x40);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c607fc(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x48);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c607fc(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x50);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c607f8(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x58);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c607f8(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  uVar2 = *(undefined8 *)(*param_1 + 0x60);
  if ((bRam00000001137f51b0 & 1) == 0) {
    iVar1 = 0x137f51b0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001137f51b8 = *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0;
      ppuRam00000001137f51c0 = &PTR____CFConstantStringClassReference_110f62f38;
      ppuRam00000001137f51c8 = &PTR____CFConstantStringClassReference_110f62f58;
      ppuRam00000001137f51d0 = &PTR____CFConstantStringClassReference_110f62f78;
      func_0x000107c60e4c(0x1137f51b0,uVar2);
    }
  }
  func_0x000107c607f8(uVar3,uVar2,*(undefined8 *)((long)(int)param_1[1] * 8 + 0x1137f51b8));
  return param_1;
}



/* Entry: 10012dbc8; end: 10012dbcf;  */

undefined8 FUN_10012dbc8(undefined8 param_1)

{
  func_0x000107c613d0();
  func_0x000107c60c50(param_1);
  return param_1;
}



/* Entry: 10012dbd0; end: 10012dc0b;  */

undefined8 FUN_10012dbd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c613d0(param_2);
  func_0x000107c60c50(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 10012dc0c; end: 10012dc17;  */

void FUN_10012dc0c(void)

{
  return;
}



/* Entry: 10012dc18; end: 10012dd4b;  */

long * FUN_10012dc18(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  ulong uVar5;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000107c35c54();
    uVar3 = (undefined4)param_3;
    plVar2 = param_1;
    goto LAB_10012dd48;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    plVar1 = param_1;
    if (param_3 != 0) goto LAB_10012dcb8;
    *(undefined1 *)param_1 = 0;
    uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar5 < 0) goto LAB_10012dcd0;
LAB_10012dc5c:
    param_2 = 0;
    plVar2 = param_1;
    uVar4 = uVar5;
    func_0x000107c610ac();
    uVar3 = (undefined4)uVar4;
    plVar1 = param_1;
  }
  else {
    plVar2 = (long *)0x19;
    if ((param_3 | 7) != 0x17) {
      plVar2 = (long *)((param_3 | 7) + 1);
    }
    plVar1 = plVar2;
    func_0x000107c60e20();
    param_1[1] = param_3;
    param_1[2] = (ulong)plVar2 | 0x8000000000000000;
    *param_1 = (long)plVar1;
LAB_10012dcb8:
    func_0x000107c610b8(plVar1,param_2,param_3);
    *(undefined1 *)((long)plVar1 + param_3) = 0;
    uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
    if (-1 < (long)uVar5) goto LAB_10012dc5c;
LAB_10012dcd0:
    plVar1 = (long *)*param_1;
    uVar3 = (undefined4)param_1[1];
    param_2 = 0;
    plVar2 = plVar1;
    func_0x000107c610ac();
  }
  if ((plVar2 == (long *)0x0) || (uVar4 = (long)plVar2 - (long)plVar1, uVar4 == 0xffffffffffffffff))
  {
    return param_1;
  }
  if ((int)uVar5 < 0) {
    if (uVar4 <= (ulong)param_1[1]) {
      param_1[1] = uVar4;
      *(undefined1 *)(*param_1 + uVar4) = 0;
      return param_1;
    }
  }
  else if (uVar4 <= uVar5) {
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
    *(undefined1 *)((long)param_1 + uVar4) = 0;
    return param_1;
  }
LAB_10012dd48:
  func_0x000104c03f14();
  *extraout_x8 = plVar2;
  extraout_x8[1] = param_2 + 6;
  *(undefined4 *)(extraout_x8 + 2) = uVar3;
  extraout_x8[3] = FUN_10012dd4c;
  return plVar2;
}



/* Entry: 10012dd4c; end: 10012dd5f;  */

void FUN_10012dd4c(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 unaff_x30;
  
  *param_1 = param_2;
  param_1[1] = param_3 + 6;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = unaff_x30;
  return;
}



/* Entry: 10012dd60; end: 10012defb;  */

long ** FUN_10012dd60(long *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  byte bVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  int *piVar16;
  long *plVar17;
  long *plStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [32];
  undefined1 *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  puVar9 = &uStack_1c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_f8 = 0xaaaaaaaaaaaaaaaa;
  plStack_100 = (long *)0xaaaaaaaaaaaaaaaa;
  FUN_10012dd4c(&uStack_1c0,&UNK_10f74551d,&UNK_10f7454e2,0x1c2);
  FUN_10012defc(&plStack_100,&uStack_1c0,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_b0 = (undefined1 *)&uStack_1c0;
    func_0x000107c35cb0(&UNK_10f74523a,&puStack_b0);
  }
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  uStack_170 = 0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  cVar3 = *(char *)((long)param_1 + 0x17);
  plVar15 = (long *)*param_1;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  puStack_b0 = (undefined1 *)0xaaaaaaaaaaaaaaaa;
  FUN_10012dd4c(auStack_128,&UNK_10f7454bc,&UNK_10f74542c,0x251);
  uVar10 = 0;
  iVar11 = 0;
  FUN_10012defc(&puStack_b0,auStack_128);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_108 = auStack_128;
    func_0x000107c35cb0(&UNK_10f74523a,&puStack_108);
  }
  if (-1 < cVar3) {
    plVar15 = param_1;
  }
  iVar14 = (int)plVar15;
  func_0x000107c613b8();
  func_0x0001001331dc(&puStack_b0);
  uVar2 = uStack_1c0._4_2_ & 0xf000;
  pplVar6 = &plStack_100;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (long **)(ulong)(iVar14 == 0 && uVar2 == 0x4000);
  }
  func_0x000107c60e78();
  iVar14 = (int)uVar10;
  if (piRam000000011383ad70 < (int *)0x2) {
LAB_10012df44:
    if (piRam000000011383ad70 == (int *)0x0) goto code_r0x00010012df4c;
    ClearExclusiveLocal();
    if (piRam000000011383ad70 == (int *)0x1) {
      pplVar7 = pplVar6;
      (*(code *)PTR_FUN_11336f918)();
      pplVar8 = pplVar7;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)pplVar8 - (long)pplVar7 < 1000) {
          func_0x000107c612dc();
        }
        else {
          plStack_240 = (long *)0xaaaaaaaaaaaaaaaa;
          uStack_238 = 0xaaaaaaaaaaaaaaaa;
          uStack_228 = 1000000;
          plStack_230 = (long *)0x0;
          pplVar8 = &plStack_230;
          func_0x000107c610f0(pplVar8,&plStack_240);
          iVar5 = (int)pplVar8;
          while ((iVar5 == -1 && (func_0x000107c60e5c(), *(int *)pplVar8 == 4))) {
            uStack_228 = uStack_238;
            plStack_230 = plStack_240;
            pplVar8 = &plStack_230;
            func_0x000107c610f0(pplVar8,&plStack_240);
            iVar5 = (int)pplVar8;
          }
        }
      } while (piRam000000011383ad70 == (int *)0x1);
    }
    piVar16 = piRam000000011383ad70;
    pplVar8 = pplRam000000011336f908;
    func_0x000107c61248();
    uVar13 = (ulong)pplVar8 & 0xfffffffffffffffc;
    plVar15 = (long *)0x0;
    if (uVar13 != 0) goto LAB_10012e048;
    goto LAB_10012e064;
  }
LAB_10012df70:
  piVar16 = piRam000000011383ad70;
  pplVar8 = pplRam000000011336f908;
  func_0x000107c61248();
  uVar13 = (ulong)pplVar8 & 0xfffffffffffffffc;
  if (uVar13 == 0) {
    plVar15 = (long *)0x0;
LAB_10012e064:
    *pplVar6 = plVar15;
  }
  else {
LAB_10012e048:
    puVar1 = (undefined8 *)(uVar13 + (long)*piVar16 * 0x10);
    if (*(int *)(puVar1 + 1) == piVar16[1]) {
      plVar15 = (long *)*puVar1;
      goto LAB_10012e064;
    }
    *pplVar6 = (long *)0x0;
  }
  if (piRam000000011383ad90 < (int *)0x2) {
LAB_10012e0a0:
    if (piRam000000011383ad90 == (int *)0x0) goto code_r0x00010012e0a8;
    ClearExclusiveLocal();
    if (piRam000000011383ad90 == (int *)0x1) {
      (*(code *)PTR_FUN_11336f918)();
      pplVar7 = pplVar8;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)pplVar7 - (long)pplVar8 < 1000) {
          func_0x000107c612dc();
        }
        else {
          plStack_240 = (long *)0xaaaaaaaaaaaaaaaa;
          uStack_238 = 0xaaaaaaaaaaaaaaaa;
          uStack_228 = 1000000;
          plStack_230 = (long *)0x0;
          pplVar7 = &plStack_230;
          func_0x000107c610f0(pplVar7,&plStack_240);
          iVar5 = (int)pplVar7;
          while ((iVar5 == -1 && (func_0x000107c60e5c(), *(int *)pplVar7 == 4))) {
            uStack_228 = uStack_238;
            plStack_230 = plStack_240;
            pplVar7 = &plStack_230;
            func_0x000107c610f0(pplVar7,&plStack_240);
            iVar5 = (int)pplVar7;
          }
        }
      } while (piRam000000011383ad90 == (int *)0x1);
    }
    piVar16 = piRam000000011383ad90;
    pplVar8 = pplRam000000011336f908;
    func_0x000107c61248();
    uVar13 = (ulong)pplVar8 & 0xfffffffffffffffc;
    plVar15 = (long *)0x0;
    if (uVar13 != 0) goto LAB_10012e19c;
    goto LAB_10012e1b8;
  }
LAB_10012e0cc:
  piVar16 = piRam000000011383ad90;
  pplVar8 = pplRam000000011336f908;
  func_0x000107c61248();
  uVar13 = (ulong)pplVar8 & 0xfffffffffffffffc;
  if (uVar13 == 0) {
    plVar15 = (long *)0x0;
LAB_10012e1b8:
    pplVar6[1] = plVar15;
    if (iVar14 == 1) goto LAB_10012e1c4;
LAB_10012e1dc:
    bVar12 = 0;
    if (plVar15 != (long *)0x0) {
      bVar12 = *(byte *)(plVar15 + 2);
    }
  }
  else {
LAB_10012e19c:
    puVar1 = (undefined8 *)(uVar13 + (long)*piVar16 * 0x10);
    if (*(int *)(puVar1 + 1) == piVar16[1]) {
      plVar15 = (long *)*puVar1;
      goto LAB_10012e1b8;
    }
    plVar15 = (long *)0x0;
    pplVar6[1] = (long *)0x0;
    if (iVar14 != 1) goto LAB_10012e1dc;
LAB_10012e1c4:
    bVar12 = 1;
  }
  *(byte *)(pplVar6 + 2) = bVar12 & 1;
  pplVar8 = pplVar6 + 3;
  func_0x00010012e54c(pplVar8,*(undefined8 *)((long)puVar9 + 0x18),0,0x11be9915,0);
  *(undefined1 *)(pplVar6 + 7) = 0;
  if (piRam000000011383ad90 < (int *)0x2) {
    do {
      if (piRam000000011383ad90 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam000000011383ad90 == (int *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          pplVar7 = pplVar8;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)pplVar7 - (long)pplVar8 < 1000) {
              func_0x000107c612dc();
            }
            else {
              plStack_240 = (long *)0xaaaaaaaaaaaaaaaa;
              uStack_238 = 0xaaaaaaaaaaaaaaaa;
              uStack_228 = 1000000;
              plStack_230 = (long *)0x0;
              pplVar7 = &plStack_230;
              func_0x000107c610f0(pplVar7,&plStack_240);
              iVar5 = (int)pplVar7;
              while ((iVar5 == -1 && (func_0x000107c60e5c(), *(int *)pplVar7 == 4))) {
                uStack_228 = uStack_238;
                plStack_230 = plStack_240;
                pplVar7 = &plStack_230;
                func_0x000107c610f0(pplVar7,&plStack_240);
                iVar5 = (int)pplVar7;
              }
            }
          } while (piRam000000011383ad90 == (int *)0x1);
        }
        goto LAB_10012e2f8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x11383ad90,0x10);
      if (bVar4) {
        piRam000000011383ad90 = (int *)0x1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uRam000000011383ad98 = 0xffffffff;
    func_0x000100126cd4(0x11383ad98,0);
    piRam000000011383ad90 = (int *)0x11383ad98;
  }
LAB_10012e2f8:
  piVar16 = piRam000000011383ad90;
  pplVar8 = pplRam000000011336f908;
  func_0x000107c61248();
  pplVar8 = (long **)((ulong)pplVar8 & 0xfffffffffffffffc);
  if (pplVar8 == (long **)0x0) {
    if (pplVar6 != (long **)0x0) {
      func_0x000100126e0c();
      goto LAB_10012e308;
    }
  }
  else {
LAB_10012e308:
    pplVar8[(long)*piVar16 * 2] = (long *)pplVar6;
    *(int *)(pplVar8 + (long)*piVar16 * 2 + 1) = piVar16[1];
  }
  func_0x00010012e68c();
  if ((int)pplVar8 == 0) {
    if ((bRam000000011383ad20 & 1) == 0) {
      pplVar8 = (long **)0x11383ad20;
      func_0x000107c60e48();
      if ((int)pplVar8 != 0) {
        if (lRam000000011383a988 != 0) {
          plStack_230 = (long *)&UNK_10e574b65;
          uStack_228 = 0x1d;
          func_0x000107c2ca6c(lRam000000011383a988 + 0x18,&plStack_230);
        }
        bRam000000011383ad18 = 1;
        pplVar8 = (long **)0x11383ad20;
        func_0x000107c60e4c();
      }
    }
    if ((bRam000000011383ad18 & 1) != 0) goto LAB_10012e400;
  }
  if ((iVar11 == 0) && (((ulong)pplVar6[2] & 1) == 0)) {
    if (pplVar6[1] == (long *)0x0) {
      pplVar7 = pplVar8;
      if (*(char *)(pplVar6 + 7) == '\x01') {
        pplVar7 = pplVar6 + 9;
        plVar15 = *pplVar7;
        if (plVar15 != (long *)0x0) {
          plVar17 = pplVar6[8];
          (*(code *)PTR_FUN_11336f918)();
          func_0x000107c2ce20(plVar15,plVar17,pplVar8);
        }
        func_0x00010012ebe8();
        *(undefined1 *)(pplVar6 + 7) = 0;
      }
      (*(code *)PTR_FUN_11336f918)();
      pplVar6[8] = (long *)pplVar7;
      func_0x00010012e80c();
      pplVar6[9] = (long *)pplVar7;
      if ((pplVar7 != (long **)0x0) && ((long)pplVar6[8] < (long)pplVar7[0x45])) {
        pplVar6[8] = pplVar7[0x45];
      }
      *(undefined1 *)(pplVar6 + 7) = 1;
    }
  }
  else {
    plVar15 = pplVar6[1];
    if ((plVar15 != (long *)0x0) && ((char)plVar15[7] == '\x01')) {
      plStack_230 = (long *)plVar15[9];
      plVar15[9] = 0;
      func_0x00010012ebe8(&plStack_230);
    }
  }
LAB_10012e400:
  plVar15 = *pplVar6;
  if (plVar15 != (long *)0x0) {
    if (pplVar6[1] == (long *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15,uVar10);
    }
    else if ((iVar14 == 1) && ((*(byte *)(pplVar6[1] + 2) & 1) == 0)) {
      (**(code **)(*plVar15 + 0x18))();
    }
  }
  if ((pplVar6[3] != (long *)0x0) && (*(uint *)(pplVar6 + 4) < *(uint *)(pplVar6[3] + 3))) {
    (*(code *)PTR_FUN_11336f918)();
    pplVar8 = pplVar6 + 3;
    func_0x000107c2ca7c();
    plStack_230 = plVar15;
    (*(code *)(*pplVar8)[2])();
    plStack_230 = (long *)(long)iVar14;
    (*(code *)(*pplVar8)[2])(pplVar8,&UNK_10f7452da,0xd,8,&plStack_230,8);
  }
  return pplVar6;
code_r0x00010012df4c:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(0x11383ad70,0x10);
  if (bVar4) {
    piRam000000011383ad70 = (int *)0x1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x00010012df54;
  goto LAB_10012df44;
code_r0x00010012df54:
  uRam000000011383ad78 = 0xffffffff;
  func_0x000100126cd4(0x11383ad78,0);
  piRam000000011383ad70 = (int *)0x11383ad78;
  goto LAB_10012df70;
code_r0x00010012e0a8:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(0x11383ad90,0x10);
  if (bVar4) {
    piRam000000011383ad90 = (int *)0x1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x00010012e0b0;
  goto LAB_10012e0a0;
code_r0x00010012e0b0:
  uRam000000011383ad98 = 0xffffffff;
  func_0x000100126cd4(0x11383ad98,0);
  piRam000000011383ad90 = (int *)0x11383ad98;
  goto LAB_10012e0cc;
}


