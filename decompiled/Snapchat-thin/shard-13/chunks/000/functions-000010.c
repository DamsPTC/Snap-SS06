/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d00ff0; end: 109d0118b;  */

long * FUN_109d00ff0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 *extraout_x8;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lStack_60;
  long *plStack_58;
  
  if (param_3 < 2) {
    if (param_3 == 1) {
      plVar5 = (long *)0x80;
      __Znwm();
      plVar12 = plVar5;
      FUN_109cfb4f8();
      goto LAB_109d01038;
    }
  }
  else {
    if (param_3 < 3) {
      plVar5 = (long *)0xa8;
      __Znwm();
      plVar12 = plVar5;
      FUN_109cf563c();
LAB_109d01038:
      *param_1 = plVar5;
      return plVar12;
    }
    if (param_3 < 6) {
      if (param_3 == 3) {
        puVar9 = &UNK_10f5ab4b2;
        goto LAB_109d0116c;
      }
      if (param_3 == 4) {
        puVar9 = &UNK_10f5ab491;
        goto LAB_109d0116c;
      }
      if (param_3 == 5) {
        puVar9 = &UNK_10f5ab537;
        goto LAB_109d0116c;
      }
    }
    else if (param_3 < 8) {
      if (param_3 == 6) {
        puVar9 = &UNK_10f5ab517;
        goto LAB_109d0116c;
      }
      if (param_3 == 7) {
        puVar9 = &UNK_10f5ab4f6;
        goto LAB_109d0116c;
      }
    }
    else {
      if (param_3 == 8) {
        puVar9 = &UNK_10f5ab559;
        goto LAB_109d0116c;
      }
      if (param_3 == 9) {
        puVar9 = &UNK_10f5ab4d6;
        goto LAB_109d0116c;
      }
    }
  }
  puVar9 = &UNK_10f5ab57c;
LAB_109d0116c:
  puVar6 = &UNK_10e04005b;
  plVar12 = (long *)&UNK_10f5ab48d;
  func_0x00010952d0c4(&UNK_10e04005b,&UNK_10f5ab48d,puVar9);
  __ZdlPv();
  __Unwind_Resume(puVar6);
  lStack_60 = *plVar12;
  if (*(char *)(lStack_60 + 8) == '\x01') {
    plVar12 = (long *)plVar12[1];
    if (plVar12 != (long *)0x0) {
      plVar5 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)0x80;
    plStack_58 = plVar12;
    __Znwm();
    plVar5 = plVar7;
    FUN_109cfb5d8();
    *extraout_x8 = plVar7;
    if (plVar12 != (long *)0x0) {
      plVar7 = plVar12 + 1;
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
        (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
        return plVar12;
      }
    }
    return plVar5;
  }
  uVar4 = 0xe04005b;
  func_0x00010952d0c4(&UNK_10e04005b,&UNK_10f5ab48d,&UNK_10f5ab59b);
  __ZdlPv();
  func_0x000109cf55e4(&lStack_60);
  __Unwind_Resume();
  uVar11 = 0;
  pbVar8 = &UNK_10e040095;
  while( true ) {
    while( true ) {
      pbVar1 = &UNK_10e040089 + uVar11 * 2;
      if (uVar4 <= *pbVar1) break;
      if (1 < uVar11) goto LAB_109d012dc;
      uVar11 = uVar11 * 2 + 2;
    }
    pbVar8 = pbVar1;
    if (2 < uVar11) break;
    uVar11 = uVar11 * 2 | 1;
  }
LAB_109d012dc:
  if ((pbVar8 == &UNK_10e040095) || (uVar4 < *pbVar8)) {
    pbVar8 = &UNK_10e040095;
  }
  return (long *)(ulong)(pbVar8 != &UNK_10e040095);
}



/* Entry: 109d0118c; end: 109d01287;  */

long * FUN_109d0118c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = *param_3;
  if (*(char *)(lStack_40 + 8) == '\x01') {
    plVar10 = (long *)param_3[1];
    if (plVar10 != (long *)0x0) {
      plVar6 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = (long *)0x80;
    plStack_38 = plVar10;
    __Znwm();
    plVar6 = plVar5;
    FUN_109cfb5d8();
    *param_1 = plVar5;
    if (plVar10 != (long *)0x0) {
      plVar5 = plVar10 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar10);
        return plVar10;
      }
    }
    return plVar6;
  }
  uVar4 = 0xe04005b;
  func_0x00010952d0c4(&UNK_10e04005b,&UNK_10f5ab48d,&UNK_10f5ab59b);
  __ZdlPv();
  func_0x000109cf55e4(&lStack_40);
  __Unwind_Resume();
  uVar9 = 0;
  pbVar7 = &UNK_10e040095;
  while( true ) {
    while( true ) {
      pbVar1 = &UNK_10e040089 + uVar9 * 2;
      if (uVar4 <= *pbVar1) break;
      if (1 < uVar9) goto LAB_109d012dc;
      uVar9 = uVar9 * 2 + 2;
    }
    pbVar7 = pbVar1;
    if (2 < uVar9) break;
    uVar9 = uVar9 * 2 | 1;
  }
LAB_109d012dc:
  if ((pbVar7 == &UNK_10e040095) || (uVar4 < *pbVar7)) {
    pbVar7 = &UNK_10e040095;
  }
  return (long *)(ulong)(pbVar7 != &UNK_10e040095);
}



/* Entry: 109d01288; end: 109d0136b;  */

bool FUN_109d01288(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  
  uVar3 = 0;
  pbVar2 = &UNK_10e040095;
  while( true ) {
    while( true ) {
      pbVar1 = &UNK_10e040089 + uVar3 * 2;
      if (param_1 <= *pbVar1) break;
      if (1 < uVar3) goto LAB_109d012dc;
      uVar3 = uVar3 * 2 + 2;
    }
    pbVar2 = pbVar1;
    if (2 < uVar3) break;
    uVar3 = uVar3 * 2 | 1;
  }
LAB_109d012dc:
  if ((pbVar2 == &UNK_10e040095) || (param_1 < *pbVar2)) {
    pbVar2 = &UNK_10e040095;
  }
  return pbVar2 != &UNK_10e040095;
}



/* Entry: 109d0136c; end: 109d013f3;  */

byte * FUN_109d0136c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  pbVar1 = param_1 + 0xc;
  func_0x000109d01304(param_1,pbVar1,param_2);
  if ((pbVar1 != param_1) && (*param_1 <= *param_2)) {
    return param_1 + 1;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception();
  func_0x000109262e48();
  uVar4 = uVar3;
  puVar7 = PTR___ZTISt12out_of_range_110352240;
  puVar9 = PTR___ZNSt12out_of_rangeD1Ev_110346180;
  ___cxa_throw();
  uVar6 = (uint)puVar7;
  uVar8 = (uint)puVar9;
  ___cxa_free_exception(uVar3);
  uVar5 = uVar4;
  __Unwind_Resume(uVar4);
  pcStack_28 = FUN_109d013f4;
  if ((uVar8 != 1) && ((uVar6 != 1 && (uVar6 != uVar8)))) {
    uStack_40 = uVar4;
    uStack_38 = uVar3;
    puStack_30 = &stack0xfffffffffffffff0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_88,&UNK_10f5ab5d3,uVar5);
    func_0x000109259240(auStack_70,auStack_88,&UNK_10f594a73);
    func_0x000109259240(auStack_58,auStack_70,&UNK_10f5ab603);
    FUN_109cd8934(auStack_58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109d01480);
    (*pcVar2)();
  }
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  return (byte *)(ulong)uVar6;
}



/* Entry: 109d013f4; end: 109d014cb;  */

uint FUN_109d013f4(undefined8 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (((param_3 != 1) && (param_2 != 1)) && (param_2 != param_3)) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_68,&UNK_10f5ab5d3,param_1);
    func_0x000109259240(auStack_50,auStack_68,&UNK_10f594a73);
    func_0x000109259240(auStack_38,auStack_50,&UNK_10f5ab603);
    FUN_109cd8934(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109d01480);
    (*pcVar1)();
  }
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 109d014cc; end: 109d02253;  */

void FUN_109d014cc(undefined8 *param_1,long param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong unaff_x19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  undefined **ppuStack_1c8;
  undefined8 ***pppuStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  ulong uStack_118;
  long *plStack_110;
  ulong uStack_108;
  float fStack_100;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint *puStack_90;
  undefined8 *puStack_88;
  undefined8 auStack_80 [2];
  long lStack_70;
  
  ppuStack_1c8 = (undefined **)CONCAT44(ppuStack_1c8._4_4_,param_4);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x10);
  if (lVar9 == 0) {
    func_0x00010952d0c4(&UNK_10e03f766,&UNK_10f5aa42b,&UNK_10f5aa439);
  }
  else {
    ___dynamic_cast(lVar9,&PTR_DAT_11087fc08,&PTR_DAT_110b2bd50,0);
    uVar26 = 0;
    uVar20 = 0;
    lVar28 = 0;
    iVar3 = *(int *)(param_2 + 8);
    uVar15 = (ulong)iVar3;
    uStack_b4 = *(undefined4 *)(lVar9 + 0x20);
    ppuVar12 = &PTR_PTR_1132eca28;
    if (*(undefined ***)(lVar9 + 0x48) != (undefined **)0x0) {
      ppuVar12 = *(undefined ***)(lVar9 + 0x48);
    }
    uStack_d8 = 0x29;
    uStack_d4 = 2;
    uStack_e0._0_4_ = 0x14;
    uStack_e0._4_4_ = 0;
    uStack_c8 = 0x200000032;
    uStack_d0 = 0x200000031;
    uStack_c0 = 0x30000002f;
    uStack_b8 = 0x10;
    uStack_b0 = 0x3b;
    uStack_ac = uStack_b4;
    uStack_a8 = 0xd;
    uStack_a4 = uStack_b4;
    uStack_a0 = 0x300000051;
    fStack_100 = 1.0;
    uStack_118 = 0;
    lStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    do {
      uVar21 = (ulong)*(int *)((long)&uStack_e0 + lVar28);
      lVar23 = *(long *)((long)&uStack_e0 + lVar28);
      if (uVar20 != 0) {
        uVar13 = uVar20 - 1;
        if ((uVar20 & uVar13) == 0) {
          unaff_x19 = uVar13 & uVar21;
        }
        else {
          unaff_x19 = uVar21;
          if (uVar20 <= uVar21) {
            uVar17 = 0;
            if (uVar20 != 0) {
              uVar17 = uVar21 / uVar20;
            }
            unaff_x19 = uVar21 - uVar17 * uVar20;
          }
        }
        plVar16 = *(long **)(lStack_120 + unaff_x19 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_109d01650;
              uVar17 = plVar16[1];
              if (uVar17 != uVar21) break;
              if (*(int *)(plVar16 + 2) == *(int *)((long)&uStack_e0 + lVar28)) goto LAB_109d018c0;
            }
            if ((uVar20 & uVar13) == 0) {
              uVar17 = uVar17 & uVar13;
            }
            else if (uVar20 <= uVar17) {
              uVar4 = 0;
              if (uVar20 != 0) {
                uVar4 = uVar17 / uVar20;
              }
              uVar17 = uVar17 - uVar4 * uVar20;
            }
          } while (uVar17 == unaff_x19);
        }
      }
LAB_109d01650:
      plVar16 = (long *)0x18;
      __Znwm();
      *plVar16 = 0;
      plVar16[1] = uVar21;
      plVar16[2] = lVar23;
      if ((uVar20 == 0) || (fStack_100 * (float)uVar20 < (float)(uVar26 + 1))) {
        uVar13 = 1;
        if (2 < uVar20) {
          uVar13 = (ulong)((uVar20 & uVar20 - 1) != 0);
        }
        uVar13 = uVar13 | uVar20 << 1;
        uVar26 = (ulong)((float)(uVar26 + 1) / fStack_100);
        if (uVar13 <= uVar26) {
          uVar13 = uVar26;
        }
        uVar26 = uVar20;
        if (uVar13 - 1 == 0) {
          uVar13 = 2;
        }
        else if ((uVar13 & uVar13 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar26 = uStack_118;
        }
        uVar20 = uVar13;
        if (uVar26 < uVar13) {
LAB_109d016e0:
          if (uVar20 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109d020c8;
          }
          lVar23 = uVar20 << 3;
          __Znwm();
          bVar8 = lStack_120 != 0;
          lStack_120 = lVar23;
          if (bVar8) {
            __ZdlPv();
          }
          uVar26 = 0;
          do {
            *(undefined8 *)(lStack_120 + uVar26 * 8) = 0;
            uVar26 = uVar26 + 1;
          } while (uVar20 != uVar26);
          uStack_118 = uVar20;
          if (plStack_110 != (long *)0x0) {
            uVar26 = plStack_110[1];
            uVar13 = uVar20 - 1;
            if ((uVar20 & uVar13) == 0) {
              uVar26 = uVar26 & uVar13;
            }
            else if (uVar20 <= uVar26) {
              uVar17 = 0;
              if (uVar20 != 0) {
                uVar17 = uVar26 / uVar20;
              }
              uVar26 = uVar26 - uVar17 * uVar20;
            }
            *(long ***)(lStack_120 + uVar26 * 8) = &plStack_110;
            plVar18 = (long *)*plStack_110;
            plVar6 = plStack_110;
            while (plVar18 != (long *)0x0) {
              uVar17 = plVar18[1];
              if ((uVar20 & uVar13) == 0) {
                uVar17 = uVar17 & uVar13;
              }
              else if (uVar20 <= uVar17) {
                uVar4 = 0;
                if (uVar20 != 0) {
                  uVar4 = uVar17 / uVar20;
                }
                uVar17 = uVar17 - uVar4 * uVar20;
              }
              plVar19 = plVar18;
              if (uVar17 != uVar26) {
                if (*(long *)(lStack_120 + uVar17 * 8) == 0) {
                  *(long **)(lStack_120 + uVar17 * 8) = plVar6;
                  uVar26 = uVar17;
                }
                else {
                  *plVar6 = *plVar18;
                  *plVar18 = **(long **)(lStack_120 + uVar17 * 8);
                  **(undefined8 **)(lStack_120 + uVar17 * 8) = plVar18;
                  plVar19 = plVar6;
                }
              }
              plVar6 = plVar19;
              plVar18 = (long *)*plVar19;
            }
          }
        }
        else {
          uVar20 = uVar26;
          if (uVar13 < uVar26) {
            uVar20 = (ulong)((float)uStack_108 / fStack_100);
            if ((uVar26 < 3) || ((uVar26 & uVar26 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar20) {
              uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
            }
            lVar23 = lStack_120;
            if (uVar13 <= uVar20) {
              uVar13 = uVar20;
            }
            uVar20 = uStack_118;
            if (uVar13 < uVar26) {
              uVar20 = uVar13;
              if (uVar13 != 0) goto LAB_109d016e0;
              lStack_120 = 0;
              if (lVar23 != 0) {
                __ZdlPv();
              }
              uStack_118 = 0;
              uVar20 = 0;
            }
          }
        }
        if ((uVar20 & uVar20 - 1) == 0) {
          unaff_x19 = uVar20 - 1 & uVar21;
        }
        else {
          unaff_x19 = uVar21;
          if (uVar20 <= uVar21) {
            uVar26 = 0;
            if (uVar20 != 0) {
              uVar26 = uVar21 / uVar20;
            }
            unaff_x19 = uVar21 - uVar26 * uVar20;
          }
        }
      }
      plVar18 = *(long **)(lStack_120 + unaff_x19 * 8);
      if (plVar18 == (long *)0x0) {
        *plVar16 = (long)plStack_110;
        *(long ***)(lStack_120 + unaff_x19 * 8) = &plStack_110;
        plStack_110 = plVar16;
        if (*plVar16 != 0) {
          uVar26 = *(ulong *)(*plVar16 + 8);
          if ((uVar20 & uVar20 - 1) == 0) {
            uVar26 = uVar26 & uVar20 - 1;
          }
          else if (uVar20 <= uVar26) {
            uVar21 = 0;
            if (uVar20 != 0) {
              uVar21 = uVar26 / uVar20;
            }
            uVar26 = uVar26 - uVar21 * uVar20;
          }
          plVar18 = (long *)(lStack_120 + uVar26 * 8);
          goto LAB_109d018b0;
        }
      }
      else {
        *plVar16 = *plVar18;
LAB_109d018b0:
        *plVar18 = (long)plVar16;
      }
      uVar26 = uStack_108 + 1;
      uStack_108 = uVar26;
LAB_109d018c0:
      lVar28 = lVar28 + 8;
    } while (lVar28 != 0x48);
    if (uVar20 == 0) {
      iVar25 = 1;
    }
    else {
      uVar26 = uVar20 - 1;
      if ((uVar20 & uVar26) == 0) {
        uVar21 = uVar26 & uVar15;
      }
      else {
        uVar21 = uVar15;
        if (uVar20 <= uVar15) {
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar15 / uVar20;
          }
          uVar21 = uVar15 - uVar21 * uVar20;
        }
      }
      plVar16 = *(long **)(lStack_120 + uVar21 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_109d019a0;
            uVar13 = plVar16[1];
            if (uVar13 != uVar15) break;
            if (*(int *)(plVar16 + 2) == iVar3) {
              iVar25 = *(int *)((long)plVar16 + 0x14);
              goto LAB_109d019a4;
            }
          }
          if ((uVar20 & uVar26) == 0) {
            uVar13 = uVar13 & uVar26;
          }
          else if (uVar20 <= uVar13) {
            uVar17 = 0;
            if (uVar20 != 0) {
              uVar17 = uVar13 / uVar20;
            }
            uVar13 = uVar13 - uVar17 * uVar20;
          }
        } while (uVar13 == uVar21);
      }
LAB_109d019a0:
      iVar25 = 1;
    }
LAB_109d019a4:
    puVar10 = (uint *)*param_3;
    puVar2 = (uint *)param_3[1];
    lVar28 = (long)puVar2 - (long)puVar10;
    if ((iVar25 != (int)(lVar28 >> 4)) || (*(int *)(lVar9 + 0x20) != iVar25)) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_188,&UNK_10f5ab5d3,(ulong)ppuVar12[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(auStack_170,auStack_188,&UNK_10f594a73);
      func_0x000109259240(auStack_158,auStack_170,&DAT_10f638984);
      puVar14 = (undefined8 *)((ulong)ppuVar12[0x20] & 0xfffffffffffffffc);
      uVar26 = puVar14[1];
      puVar11 = (undefined8 *)*puVar14;
      if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
        uVar26 = (ulong)*(byte *)((long)puVar14 + 0x17);
        puVar11 = puVar14;
      }
      puVar14 = auStack_158;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,puVar11,uVar26);
      uStack_138 = puVar14[1];
      uStack_140 = *puVar14;
      uStack_130 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      func_0x000109259240(auStack_f8,&uStack_140,&UNK_10f5ab5e8);
      __ZNSt3__19to_stringEi(&pppuStack_1a0,iVar25);
      if (-1 < (char)bStack_189) {
        uStack_198 = (ulong)bStack_189;
        pppuStack_1a0 = &pppuStack_1a0;
      }
      puVar11 = auStack_f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar11,pppuStack_1a0,uStack_198);
      puStack_88 = (undefined8 *)puVar11[1];
      puStack_90 = (uint *)*puVar11;
      auStack_80[0] = puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      func_0x000109259240(&uStack_e0,&puStack_90,&UNK_10f5ab5fb);
      FUN_109cd8934(&uStack_e0);
      goto LAB_109d020c8;
    }
    switch(iVar3) {
    case 1:
      func_0x000109d0281c(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xf:
    case 0x18:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x2c:
    case 0x2d:
    case 0x4c:
    case 0x50:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5d:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (puVar2 != puVar10) {
        FUN_109d035c4(param_1);
        lVar9 = param_1[1];
        _memmove(lVar9,puVar10,lVar28);
        param_1[1] = lVar9 + lVar28;
      }
      break;
    case 0xd:
      func_0x000109d02540(param_1,*(undefined8 *)(lVar9 + 0x48),param_3);
      break;
    case 0xe:
      func_0x000109d02670(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 0x10:
    case 0x3b:
      ppuStack_1c8 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(lVar9 + 0x48) != (undefined **)0x0) {
        ppuStack_1c8 = *(undefined ***)(lVar9 + 0x48);
      }
      iVar27 = *(int *)((long)ppuStack_1c8 + 0x144);
      if (iVar27 == 4) {
        bVar8 = true;
code_r0x000109d01b38:
        bVar5 = false;
        if (iVar3 == 0x10) {
          bVar5 = bVar8;
        }
        if (iVar27 == 0xd) {
          bVar5 = true;
        }
      }
      else {
        bVar8 = iVar27 == 5;
        if ((7 < iVar27 - 8U) || ((0xdfU >> (ulong)(iVar27 - 8U & 0x1f) & 1) == 0))
        goto code_r0x000109d01b38;
        bVar5 = true;
      }
      uVar26 = (ulong)*puVar10;
      uVar20 = (ulong)puVar10[1];
      uVar15 = *(ulong *)(puVar10 + 2);
      if (1 < iVar25) {
        lVar23 = 0;
        lVar28 = 1;
        uVar21 = uVar20;
        uVar13 = uVar26;
        do {
          lVar22 = *param_3;
          lVar1 = lVar22 + lVar23;
          iVar27 = (int)uVar15;
          iVar25 = (int)(uVar15 >> 0x20);
          if ((bVar5) &&
             ((((*(int *)(lVar1 + 0x10) != (int)uVar13 ||
                (*(int *)(lVar22 + lVar23 + 0x14) != (int)uVar21)) ||
               (*(int *)(lVar22 + lVar23 + 0x18) != iVar27)) ||
              (*(int *)(lVar22 + lVar23 + 0x1c) != iVar25)))) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_f8,&UNK_10f5ab5d3,(ulong)ppuStack_1c8[0x1f] & 0xfffffffffffffffc);
            func_0x000109259240(&puStack_90,auStack_f8,&UNK_10f594a73);
            func_0x000109259240(&uStack_e0,&puStack_90,&UNK_10f5ab661);
            FUN_109cd8934(&uStack_e0);
            goto LAB_109d020c8;
          }
          if (iVar3 == 0x10) {
            if (*(int *)(lVar22 + lVar23 + 0x1c) != iVar25) goto code_r0x000109d02040;
            iVar25 = *(int *)(lVar22 + lVar23 + 0x14);
            if (iVar25 == (int)uVar21 && *(int *)(lVar1 + 0x10) == (int)uVar13) {
              iVar25 = *(int *)(lVar22 + lVar23 + 0x18);
              uVar20 = uVar13;
              if (iVar25 != 1 && iVar25 != iVar27) goto code_r0x000109d02040;
            }
            else {
              if ((iVar25 != 1 || *(int *)(lVar1 + 0x10) != 1) ||
                 (*(int *)(lVar22 + lVar23 + 0x18) != iVar27)) goto code_r0x000109d02040;
              uVar20 = 1;
            }
          }
          else {
            uVar20 = (ulong)*(uint *)(lVar1 + 0x10);
          }
          puVar24 = ppuStack_1c8[0x1f];
          uVar26 = (ulong)puVar24 & 0xfffffffffffffffc;
          FUN_109d013f4(uVar26,uVar13,uVar20);
          uVar20 = (ulong)puVar24 & 0xfffffffffffffffc;
          FUN_109d013f4(uVar20,uVar21,*(undefined4 *)(lVar22 + lVar23 + 0x14));
          uVar21 = (ulong)puVar24 & 0xfffffffffffffffc;
          FUN_109d013f4(uVar21,uVar15,*(undefined4 *)(lVar22 + lVar23 + 0x18));
          uVar13 = (ulong)puVar24 & 0xfffffffffffffffc;
          FUN_109d013f4(uVar13,uVar15 >> 0x20,*(undefined4 *)(lVar22 + lVar23 + 0x1c));
          uVar15 = uVar21 & 0xffffffff | uVar13 << 0x20;
          lVar28 = lVar28 + 1;
          lVar23 = lVar23 + 0x10;
          uVar21 = uVar20;
          uVar13 = uVar26;
        } while (lVar28 < *(int *)(lVar9 + 0x20));
      }
      uStack_e0._0_4_ = (undefined4)uVar26;
      uStack_e0._4_4_ = (undefined4)uVar20;
      uStack_d8 = (undefined4)uVar15;
      uStack_d4 = (uint)(uVar15 >> 0x20);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      FUN_109d035fc(param_1,&uStack_e0,&uStack_d0,1);
      break;
    case 0x11:
    case 0x12:
    case 0x17:
      ppuVar12 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(lVar9 + 0x48) != (undefined **)0x0) {
        ppuVar12 = *(undefined ***)(lVar9 + 0x48);
      }
      FUN_109ce9184(&uStack_e0,ppuVar12,uVar15);
      puVar11 = &uStack_e0;
      FUN_109ce933c();
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      puStack_90 = puVar10;
      puStack_88 = puVar11;
      FUN_109d035fc(param_1,&puStack_90,auStack_80,1);
      break;
    case 0x13:
      FUN_109d02254(param_1,*(undefined8 *)(lVar9 + 0x48),param_3);
      break;
    case 0x14:
      FUN_109d022e8(param_1,*(undefined8 *)(lVar9 + 0x48));
      break;
    case 0x15:
      func_0x000109d026fc(param_1,*(undefined8 *)(lVar9 + 0x48),param_3,param_4);
      break;
    case 0x16:
      func_0x000109d0278c(param_1,*(undefined8 *)(lVar9 + 0x48),param_3,param_4);
      break;
    default:
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&puStack_90,&DAT_10f638984,(ulong)ppuVar12[0x20] & 0xfffffffffffffffc);
      func_0x000109259240(&uStack_e0,&puStack_90,&UNK_10f5aa967);
      FUN_109cd8934(&uStack_e0);
      goto LAB_109d020c8;
    case 0x1a:
      FUN_109d024b4(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 0x23:
      FUN_109d025d4(param_1,*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)puVar10,
                    *(undefined8 *)(puVar10 + 2));
      break;
    case 0x24:
    case 0x2a:
    case 0x2b:
      ppuVar12 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(lVar9 + 0x48) != (undefined **)0x0) {
        ppuVar12 = *(undefined ***)(lVar9 + 0x48);
      }
      FUN_109cf173c();
      uStack_e0._0_4_ = SUB84(puVar10,0);
      uStack_e0._4_4_ = (undefined4)((ulong)puVar10 >> 0x20);
      uStack_d8 = SUB84(ppuVar12,0);
      uStack_d4 = (uint)((ulong)ppuVar12 >> 0x20);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      FUN_109d035fc(param_1,&uStack_e0,&uStack_d0,1);
      break;
    case 0x28:
      func_0x000109d028bc(param_1,*(undefined8 *)(lVar9 + 0x48),param_3);
      break;
    case 0x29:
      func_0x000109d02950(param_1,*(undefined8 *)(lVar9 + 0x48),param_3);
      break;
    case 0x2e:
      FUN_109d029dc(param_1,*(undefined8 *)(lVar9 + 0x48),param_3);
      break;
    case 0x2f:
      FUN_109d02bc0(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 0x30:
      ppuVar12 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(lVar9 + 0x48) != (undefined **)0x0) {
        ppuVar12 = *(undefined ***)(lVar9 + 0x48);
      }
      uStack_e0._0_4_ = *(undefined4 *)(ppuVar12 + 0x23);
      uStack_e0._4_4_ = (undefined4)*(undefined8 *)(puVar10 + 1);
      uStack_d8 = (undefined4)((ulong)*(undefined8 *)(puVar10 + 1) >> 0x20);
      uStack_d4 = puVar10[3];
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      FUN_109d035fc(param_1,&uStack_e0,&uStack_d0,1);
      break;
    case 0x31:
      FUN_109d02df8(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 0x32:
      FUN_109d02fa8(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 0x4b:
      FUN_109d032e8(param_1,*(undefined8 *)(lVar9 + 0x48),puVar10);
      break;
    case 0x51:
      FUN_109d031a4(param_1,lVar9,puVar10);
    }
    FUN_109d03668(&lStack_120);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  ___stack_chk_fail();
code_r0x000109d02040:
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_f8,&UNK_10f5ab5d3,(ulong)ppuStack_1c8[0x1f] & 0xfffffffffffffffc);
  func_0x000109259240(&puStack_90,auStack_f8,&UNK_10f594a73);
  func_0x000109259240(&uStack_e0,&puStack_90,&UNK_10f5ab70c);
  FUN_109cd8934(&uStack_e0);
LAB_109d020c8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109d020cc);
  (*pcVar7)();
}



/* Entry: 109d02254; end: 109d022e7;  */

/* WARNING: Removing unreachable block (ram,0x000109d0243c) */

void FUN_109d02254(long *param_1,undefined **param_2,undefined *param_3)

{
  uint uVar1;
  long **pplVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long **pplVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  int *piStack_398;
  long lStack_390;
  long *plStack_338;
  long **pplStack_330;
  long lStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined8 ******ppppppuStack_310;
  undefined8 uStack_308;
  long *plStack_2f8;
  long **pplStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ******ppppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2b8 [32];
  long *plStack_298;
  undefined1 *puStack_290;
  long lStack_288;
  undefined8 ******ppppppuStack_270;
  undefined8 uStack_268;
  long *plStack_258;
  long **pplStack_250;
  long lStack_248;
  undefined8 ******ppppppuStack_230;
  undefined8 uStack_228;
  long *plStack_218;
  long **pplStack_210;
  long lStack_208;
  undefined1 ******ppppppuStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined1 *****pppppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 ****ppppuStack_180;
  code *pcStack_178;
  long *plStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined1 ***pppuStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar9 = param_2;
  }
  FUN_109cf31c0(param_3,ppuVar9,0x13,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar10 = &puStack_38;
  puStack_38 = param_3;
  ppuStack_30 = ppuVar9;
  FUN_109d035fc(param_1,ppuVar10,&lStack_28,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puStack_50 = &stack0xfffffffffffffff0;
  pcStack_48 = FUN_109d022e8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = &PTR_PTR_1132eca28;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar9 = ppuVar10;
  }
  if (*(int *)(ppuVar9 + 5) != 1) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_e8,&UNK_10f5ab5d3,(ulong)ppuVar9[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_d0,auStack_e8,&UNK_10f594a73);
    func_0x000109259240(auStack_b8,auStack_d0,&DAT_10f638984);
    puVar14 = (undefined8 *)((ulong)ppuVar9[0x20] & 0xfffffffffffffffc);
    uVar20 = puVar14[1];
    puVar21 = (undefined8 *)*puVar14;
    if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
      uVar20 = (ulong)*(byte *)((long)puVar14 + 0x17);
      puVar21 = puVar14;
    }
    puVar14 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar14,puVar21,uVar20);
    uStack_a0 = *puVar14;
    uStack_98 = puVar14[1];
    uStack_90 = puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    func_0x000109259240(&puStack_80,&uStack_a0,&UNK_10f5ab63e);
    FUN_109cd8934(&puStack_80);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d0242c);
    (*pcVar4)();
  }
  puVar13 = ppuVar9[4];
  ppuVar9 = ppuVar9 + 4;
  if (((ulong)puVar13 & 1) != 0) {
    ppuVar9 = (undefined **)(puVar13 + 7);
  }
  auVar22 = NEON_rev64(*(undefined1 (*) [16])(*ppuVar9 + 0x58),4);
  auVar22 = NEON_ext(auVar22,auVar22,8,1);
  uStack_78 = auVar22._8_8_;
  puStack_80 = auVar22._0_8_;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_80;
  puVar5 = auStack_70;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(auStack_d0[0]);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_109d024b4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_120 = ppuVar9;
  }
  ppuStack_100 = &puStack_50;
  FUN_109cf2db8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_128;
  plVar15 = &lStack_118;
  puStack_128 = puVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x109d02540;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_160 = ppuVar9;
  }
  pppuStack_140 = &ppuStack_100;
  FUN_109cf31c0(plVar15,ppuStack_160,0xd,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar11 = &plStack_168;
  plVar6 = &lStack_158;
  uVar12 = 1;
  plStack_168 = plVar15;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  ppppuStack_180 = &pppuStack_140;
  pcStack_178 = FUN_109d025d4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplVar2 = pplVar11;
  }
  puStack_198 = (undefined *)
                CONCAT44(*(int *)(pplVar2 + 0x2b) + (int)((ulong)plVar6 >> 0x20) +
                         *(int *)((long)pplVar2 + 0x15c),
                         *(int *)(pplVar2 + 0x2c) + (int)plVar6 + *(int *)((long)pplVar2 + 0x164));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_198;
  plVar15 = &lStack_188;
  uStack_190 = uVar12;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_109d02670;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1d0 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_1d0 = ppuVar9;
  }
  pppppuStack_1b0 = &ppppuStack_180;
  FUN_109ceb438();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar11 = &plStack_1d8;
  plVar6 = &lStack_1c8;
  plStack_1d8 = plVar15;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  uStack_1e8 = 0x109d026fc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_210 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplStack_210 = pplVar11;
  }
  ppppppuStack_1f0 = &pppppuStack_1b0;
  FUN_109cf31c0(plVar6,pplStack_210,0x15);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar11 = &plStack_218;
  plVar15 = &lStack_208;
  plStack_218 = plVar6;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  uStack_228 = 0x109d0278c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_250 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplStack_250 = pplVar11;
  }
  ppppppuStack_230 = &ppppppuStack_1f0;
  FUN_109cf31c0(plVar15,pplStack_250,0x16);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar11 = &plStack_258;
  plVar6 = &lStack_248;
  plStack_258 = plVar15;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  uStack_268 = 0x109d0281c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplVar2 = pplVar11;
  }
  ppppppuStack_270 = &ppppppuStack_230;
  func_0x000109cef5d4(auStack_2b8,pplVar2,plVar6);
  puVar5 = auStack_2b8;
  plVar7 = plVar6;
  FUN_109cef6bc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar11 = &plStack_298;
  plVar15 = &lStack_288;
  plVar8 = param_1;
  plStack_298 = plVar7;
  puStack_290 = puVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  uStack_2c8 = 0x109d028bc;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_2f0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplStack_2f0 = pplVar11;
  }
  plStack_2e0 = param_1;
  plStack_2d8 = plVar6;
  ppppppuStack_2d0 = &ppppppuStack_270;
  FUN_109cf31c0(plVar15,pplStack_2f0,0x28,0);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = 0;
  pplVar11 = &plStack_2f8;
  plVar6 = &lStack_2e8;
  plVar7 = plVar8;
  plStack_2f8 = plVar15;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  uStack_308 = 0x109d02950;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_330 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplStack_330 = pplVar11;
  }
  plStack_320 = param_1;
  plStack_318 = plVar8;
  ppppppuStack_310 = &ppppppuStack_2d0;
  FUN_109ceb01c();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  pplVar11 = &plStack_338;
  plVar15 = &lStack_328;
  plStack_338 = plVar6;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar11 != (long **)0x0) {
    pplVar2 = pplVar11;
  }
  iVar3 = *(int *)(pplVar2 + 9);
  func_0x00010925b8c4(&piStack_398,(long)iVar3 + 2);
  if ((ulong)(lStack_390 - (long)piStack_398) < 5) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_3e0,&UNK_10f5ab5d3,(ulong)pplVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_3c8,auStack_3e0,&UNK_10f594a73);
    func_0x000109259240(auStack_3b0,auStack_3c8,&UNK_10f5ab7a4);
    FUN_109cd8934(auStack_3b0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d02b48);
    (*pcVar4)();
  }
  uVar1 = iVar3 + 1;
  uVar20 = (ulong)uVar1;
  puVar21 = (undefined8 *)*plVar15;
  *(undefined4 *)(lStack_390 + -4) = *(undefined4 *)(puVar21 + 1);
  if (0 < *(int *)(pplVar2 + 9)) {
    lVar18 = 0;
    plVar15 = pplVar2[10];
    do {
      piStack_398[lVar18 + 1] = *(int *)((long)plVar15 + lVar18 * 4);
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(pplVar2 + 9));
  }
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  if (uVar1 != 0) {
    lVar19 = (long)(int)uVar1;
    FUN_109d035c4(plVar7,lVar19);
    puVar16 = (undefined8 *)plVar7[1];
    lVar18 = lVar19 << 4;
    puVar14 = puVar16;
    do {
      uVar12 = *puVar21;
      puVar14[1] = puVar21[1];
      *puVar14 = uVar12;
      lVar18 = lVar18 + -0x10;
      puVar14 = puVar14 + 2;
    } while (lVar18 != 0);
    plVar7[1] = (long)(puVar16 + lVar19 * 2);
    if (-1 < iVar3) {
      piVar17 = (int *)(*plVar7 + 8);
      do {
        *piVar17 = piStack_398[1] - *piStack_398;
        uVar20 = uVar20 - 1;
        piVar17 = piVar17 + 4;
        piStack_398 = piStack_398 + 1;
      } while (uVar20 != 0);
      goto LAB_109d02adc;
    }
  }
  if (piStack_398 == (int *)0x0) {
    return;
  }
LAB_109d02adc:
  __ZdlPv();
  return;
}



/* Entry: 109d022e8; end: 109d024b3;  */

/* WARNING: Removing unreachable block (ram,0x000109d0243c) */

void FUN_109d022e8(long *param_1,undefined **param_2)

{
  uint uVar1;
  long **pplVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long **pplVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  int *piStack_358;
  long lStack_350;
  long *plStack_2f8;
  long **pplStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ******ppppppuStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2b8;
  long **pplStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 ******ppppppuStack_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [32];
  long *plStack_258;
  undefined1 *puStack_250;
  long lStack_248;
  undefined8 ******ppppppuStack_230;
  undefined8 uStack_228;
  long *plStack_218;
  long **pplStack_210;
  long lStack_208;
  undefined1 ******ppppppuStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1d8;
  long **pplStack_1d0;
  long lStack_1c8;
  undefined1 *****pppppuStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined1 ****ppppuStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  long *plStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar9 = param_2;
  }
  if (*(int *)(ppuVar9 + 5) != 1) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_a8,&UNK_10f5ab5d3,(ulong)ppuVar9[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_90,auStack_a8,&UNK_10f594a73);
    func_0x000109259240(auStack_78,auStack_90,&DAT_10f638984);
    puVar13 = (undefined8 *)((ulong)ppuVar9[0x20] & 0xfffffffffffffffc);
    uVar19 = puVar13[1];
    puVar20 = (undefined8 *)*puVar13;
    if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
      uVar19 = (ulong)*(byte *)((long)puVar13 + 0x17);
      puVar20 = puVar13;
    }
    puVar13 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar13,puVar20,uVar19);
    uStack_60 = *puVar13;
    uStack_58 = puVar13[1];
    uStack_50 = puVar13[2];
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    func_0x000109259240(&puStack_40,&uStack_60,&UNK_10f5ab63e);
    FUN_109cd8934(&puStack_40);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d0242c);
    (*pcVar4)();
  }
  puVar12 = ppuVar9[4];
  ppuVar9 = ppuVar9 + 4;
  if (((ulong)puVar12 & 1) != 0) {
    ppuVar9 = (undefined **)(puVar12 + 7);
  }
  auVar21 = NEON_rev64(*(undefined1 (*) [16])(*ppuVar9 + 0x58),4);
  auVar21 = NEON_ext(auVar21,auVar21,8,1);
  uStack_38 = auVar21._8_8_;
  puStack_40 = auVar21._0_8_;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_40;
  puVar5 = auStack_30;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_50._7_1_ < '\0') {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  __Unwind_Resume();
  pcStack_b8 = FUN_109d024b4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_e0 = ppuVar9;
  }
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_109cf2db8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_e8;
  plVar14 = &lStack_d8;
  puStack_e8 = puVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_f8 = 0x109d02540;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_120 = ppuVar9;
  }
  ppuStack_100 = &puStack_c0;
  FUN_109cf31c0(plVar14,ppuStack_120,0xd,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_128;
  plVar6 = &lStack_118;
  uVar11 = 1;
  plStack_128 = plVar14;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pppuStack_140 = &ppuStack_100;
  pcStack_138 = FUN_109d025d4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  puStack_158 = (undefined *)
                CONCAT44(*(int *)(pplVar2 + 0x2b) + (int)((ulong)plVar6 >> 0x20) +
                         *(int *)((long)pplVar2 + 0x15c),
                         *(int *)(pplVar2 + 0x2c) + (int)plVar6 + *(int *)((long)pplVar2 + 0x164));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_158;
  plVar14 = &lStack_148;
  uStack_150 = uVar11;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_109d02670;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_190 = ppuVar9;
  }
  ppppuStack_170 = &pppuStack_140;
  FUN_109ceb438();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_198;
  plVar6 = &lStack_188;
  plStack_198 = plVar14;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  uStack_1a8 = 0x109d026fc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_1d0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_1d0 = pplVar10;
  }
  pppppuStack_1b0 = &ppppuStack_170;
  FUN_109cf31c0(plVar6,pplStack_1d0,0x15);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_1d8;
  plVar14 = &lStack_1c8;
  plStack_1d8 = plVar6;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  uStack_1e8 = 0x109d0278c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_210 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_210 = pplVar10;
  }
  ppppppuStack_1f0 = &pppppuStack_1b0;
  FUN_109cf31c0(plVar14,pplStack_210,0x16);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_218;
  plVar6 = &lStack_208;
  plStack_218 = plVar14;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  uStack_228 = 0x109d0281c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  ppppppuStack_230 = &ppppppuStack_1f0;
  func_0x000109cef5d4(auStack_278,pplVar2,plVar6);
  puVar5 = auStack_278;
  plVar7 = plVar6;
  FUN_109cef6bc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_258;
  plVar14 = &lStack_248;
  plVar8 = param_1;
  plStack_258 = plVar7;
  puStack_250 = puVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  uStack_288 = 0x109d028bc;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_2b0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_2b0 = pplVar10;
  }
  plStack_2a0 = param_1;
  plStack_298 = plVar6;
  ppppppuStack_290 = &ppppppuStack_230;
  FUN_109cf31c0(plVar14,pplStack_2b0,0x28,0);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = 0;
  pplVar10 = &plStack_2b8;
  plVar6 = &lStack_2a8;
  plVar7 = plVar8;
  plStack_2b8 = plVar14;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_2c8 = 0x109d02950;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_2f0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_2f0 = pplVar10;
  }
  plStack_2e0 = param_1;
  plStack_2d8 = plVar8;
  ppppppuStack_2d0 = &ppppppuStack_290;
  FUN_109ceb01c();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  pplVar10 = &plStack_2f8;
  plVar14 = &lStack_2e8;
  plStack_2f8 = plVar6;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  iVar3 = *(int *)(pplVar2 + 9);
  func_0x00010925b8c4(&piStack_358,(long)iVar3 + 2);
  if ((ulong)(lStack_350 - (long)piStack_358) < 5) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_3a0,&UNK_10f5ab5d3,(ulong)pplVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_388,auStack_3a0,&UNK_10f594a73);
    func_0x000109259240(auStack_370,auStack_388,&UNK_10f5ab7a4);
    FUN_109cd8934(auStack_370);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d02b48);
    (*pcVar4)();
  }
  uVar1 = iVar3 + 1;
  uVar19 = (ulong)uVar1;
  puVar20 = (undefined8 *)*plVar14;
  *(undefined4 *)(lStack_350 + -4) = *(undefined4 *)(puVar20 + 1);
  if (0 < *(int *)(pplVar2 + 9)) {
    lVar17 = 0;
    plVar14 = pplVar2[10];
    do {
      piStack_358[lVar17 + 1] = *(int *)((long)plVar14 + lVar17 * 4);
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(pplVar2 + 9));
  }
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  if (uVar1 != 0) {
    lVar18 = (long)(int)uVar1;
    FUN_109d035c4(plVar7,lVar18);
    puVar15 = (undefined8 *)plVar7[1];
    lVar17 = lVar18 << 4;
    puVar13 = puVar15;
    do {
      uVar11 = *puVar20;
      puVar13[1] = puVar20[1];
      *puVar13 = uVar11;
      lVar17 = lVar17 + -0x10;
      puVar13 = puVar13 + 2;
    } while (lVar17 != 0);
    plVar7[1] = (long)(puVar15 + lVar18 * 2);
    if (-1 < iVar3) {
      piVar16 = (int *)(*plVar7 + 8);
      do {
        *piVar16 = piStack_358[1] - *piStack_358;
        uVar19 = uVar19 - 1;
        piVar16 = piVar16 + 4;
        piStack_358 = piStack_358 + 1;
      } while (uVar19 != 0);
      goto LAB_109d02adc;
    }
  }
  if (piStack_358 == (int *)0x0) {
    return;
  }
LAB_109d02adc:
  __ZdlPv();
  return;
}



/* Entry: 109d024b4; end: 109d025d3;  */

void FUN_109d024b4(long *param_1,undefined **param_2,undefined *param_3)

{
  uint uVar1;
  long **pplVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long **pplVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  int *piStack_2a8;
  long lStack_2a0;
  long *plStack_248;
  long **pplStack_240;
  long lStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 *****pppppuStack_220;
  undefined8 uStack_218;
  long *plStack_208;
  long **pplStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1c8 [32];
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_180;
  undefined8 uStack_178;
  long *plStack_168;
  long **pplStack_160;
  long lStack_158;
  undefined1 *****pppppuStack_140;
  undefined8 uStack_138;
  long *plStack_128;
  long **pplStack_120;
  long lStack_118;
  undefined1 ****ppppuStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar8 = param_2;
  }
  FUN_109cf2db8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_38;
  plVar13 = &lStack_28;
  puStack_38 = param_3;
  ppuStack_30 = ppuVar8;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x109d02540;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_70 = ppuVar9;
  }
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_109cf31c0(plVar13,ppuStack_70,0xd,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_78;
  plVar5 = &lStack_68;
  uVar12 = 1;
  plStack_78 = plVar13;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_90 = &puStack_50;
  pcStack_88 = FUN_109d025d4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  puStack_a8 = (undefined *)
               CONCAT44(*(int *)(pplVar2 + 0x2b) + (int)((ulong)plVar5 >> 0x20) +
                        *(int *)((long)pplVar2 + 0x15c),
                        *(int *)(pplVar2 + 0x2c) + (int)plVar5 + *(int *)((long)pplVar2 + 0x164));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar8 = &puStack_a8;
  plVar13 = &lStack_98;
  uStack_a0 = uVar12;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_109d02670;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_PTR_1132eca28;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_e0 = ppuVar8;
  }
  pppuStack_c0 = &ppuStack_90;
  FUN_109ceb438();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_e8;
  plVar5 = &lStack_d8;
  plStack_e8 = plVar13;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_f8 = 0x109d026fc;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_120 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_120 = pplVar10;
  }
  ppppuStack_100 = &pppuStack_c0;
  FUN_109cf31c0(plVar5,pplStack_120,0x15);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_128;
  plVar13 = &lStack_118;
  plStack_128 = plVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x109d0278c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_160 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_160 = pplVar10;
  }
  pppppuStack_140 = &ppppuStack_100;
  FUN_109cf31c0(plVar13,pplStack_160,0x16);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_168;
  plVar5 = &lStack_158;
  plStack_168 = plVar13;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  uStack_178 = 0x109d0281c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  pppppuStack_180 = &pppppuStack_140;
  func_0x000109cef5d4(auStack_1c8,pplVar2,plVar5);
  puVar11 = auStack_1c8;
  plVar6 = plVar5;
  FUN_109cef6bc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_1a8;
  plVar13 = &lStack_198;
  plVar7 = param_1;
  plStack_1a8 = plVar6;
  puStack_1a0 = puVar11;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  uStack_1d8 = 0x109d028bc;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_200 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_200 = pplVar10;
  }
  plStack_1f0 = param_1;
  plStack_1e8 = plVar5;
  pppppuStack_1e0 = &pppppuStack_180;
  FUN_109cf31c0(plVar13,pplStack_200,0x28,0);
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  pplVar10 = &plStack_208;
  plVar5 = &lStack_1f8;
  plVar6 = plVar7;
  plStack_208 = plVar13;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  uStack_218 = 0x109d02950;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_240 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_240 = pplVar10;
  }
  plStack_230 = param_1;
  plStack_228 = plVar7;
  pppppuStack_220 = &pppppuStack_1e0;
  FUN_109ceb01c();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  pplVar10 = &plStack_248;
  plVar13 = &lStack_238;
  plStack_248 = plVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  iVar3 = *(int *)(pplVar2 + 9);
  func_0x00010925b8c4(&piStack_2a8,(long)iVar3 + 2);
  if ((ulong)(lStack_2a0 - (long)piStack_2a8) < 5) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_2f0,&UNK_10f5ab5d3,(ulong)pplVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_2d8,auStack_2f0,&UNK_10f594a73);
    func_0x000109259240(auStack_2c0,auStack_2d8,&UNK_10f5ab7a4);
    FUN_109cd8934(auStack_2c0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d02b48);
    (*pcVar4)();
  }
  uVar1 = iVar3 + 1;
  uVar19 = (ulong)uVar1;
  puVar20 = (undefined8 *)*plVar13;
  *(undefined4 *)(lStack_2a0 + -4) = *(undefined4 *)(puVar20 + 1);
  if (0 < *(int *)(pplVar2 + 9)) {
    lVar17 = 0;
    plVar13 = pplVar2[10];
    do {
      piStack_2a8[lVar17 + 1] = *(int *)((long)plVar13 + lVar17 * 4);
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(pplVar2 + 9));
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  if (uVar1 != 0) {
    lVar18 = (long)(int)uVar1;
    FUN_109d035c4(plVar6,lVar18);
    puVar14 = (undefined8 *)plVar6[1];
    lVar17 = lVar18 << 4;
    puVar15 = puVar14;
    do {
      uVar12 = *puVar20;
      puVar15[1] = puVar20[1];
      *puVar15 = uVar12;
      lVar17 = lVar17 + -0x10;
      puVar15 = puVar15 + 2;
    } while (lVar17 != 0);
    plVar6[1] = (long)(puVar14 + lVar18 * 2);
    if (-1 < iVar3) {
      piVar16 = (int *)(*plVar6 + 8);
      do {
        *piVar16 = piStack_2a8[1] - *piStack_2a8;
        uVar19 = uVar19 - 1;
        piVar16 = piVar16 + 4;
        piStack_2a8 = piStack_2a8 + 1;
      } while (uVar19 != 0);
      goto LAB_109d02adc;
    }
  }
  if (piStack_2a8 == (int *)0x0) {
    return;
  }
LAB_109d02adc:
  __ZdlPv();
  return;
}



/* Entry: 109d025d4; end: 109d0266f;  */

void FUN_109d025d4(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long **pplVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long **pplVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  int *piStack_228;
  long lStack_220;
  long *plStack_1c8;
  long **pplStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 ******ppppppuStack_1a0;
  undefined8 uStack_198;
  long *plStack_188;
  long **pplStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *****pppppuStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [32];
  long *plStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined1 ****ppppuStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  long **pplStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  long **pplStack_a0;
  long lStack_98;
  undefined1 **ppuStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar8 = param_2;
  }
  puStack_28 = (undefined *)
               CONCAT44(*(int *)(ppuVar8 + 0x2b) + (int)((ulong)param_3 >> 0x20) +
                        *(int *)((long)ppuVar8 + 0x15c),
                        *(int *)(ppuVar8 + 0x2c) + (int)param_3 + *(int *)((long)ppuVar8 + 0x164));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar8 = &puStack_28;
  plVar11 = &lStack_18;
  uStack_20 = param_4;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_109d02670;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_60 = &PTR_PTR_1132eca28;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_60 = ppuVar8;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_109ceb438();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar9 = &plStack_68;
  plVar5 = &lStack_58;
  plStack_68 = plVar11;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = 0x109d026fc;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_a0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar9 != (long **)0x0) {
    pplStack_a0 = pplVar9;
  }
  ppuStack_80 = &puStack_40;
  FUN_109cf31c0(plVar5,pplStack_a0,0x15);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar9 = &plStack_a8;
  plVar11 = &lStack_98;
  plStack_a8 = plVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  uStack_b8 = 0x109d0278c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_e0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar9 != (long **)0x0) {
    pplStack_e0 = pplVar9;
  }
  pppuStack_c0 = &ppuStack_80;
  FUN_109cf31c0(plVar11,pplStack_e0,0x16);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar9 = &plStack_e8;
  plVar5 = &lStack_d8;
  plStack_e8 = plVar11;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_f8 = 0x109d0281c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar9 != (long **)0x0) {
    pplVar2 = pplVar9;
  }
  ppppuStack_100 = &pppuStack_c0;
  func_0x000109cef5d4(auStack_148,pplVar2,plVar5);
  puVar10 = auStack_148;
  plVar6 = plVar5;
  FUN_109cef6bc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar9 = &plStack_128;
  plVar11 = &lStack_118;
  plVar7 = param_1;
  plStack_128 = plVar6;
  puStack_120 = puVar10;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  uStack_158 = 0x109d028bc;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_180 = (long **)&PTR_PTR_1132eca28;
  if (pplVar9 != (long **)0x0) {
    pplStack_180 = pplVar9;
  }
  plStack_170 = param_1;
  plStack_168 = plVar5;
  pppppuStack_160 = &ppppuStack_100;
  FUN_109cf31c0(plVar11,pplStack_180,0x28,0);
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  pplVar9 = &plStack_188;
  plVar5 = &lStack_178;
  plVar6 = plVar7;
  plStack_188 = plVar11;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  uStack_198 = 0x109d02950;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_1c0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar9 != (long **)0x0) {
    pplStack_1c0 = pplVar9;
  }
  plStack_1b0 = param_1;
  plStack_1a8 = plVar7;
  ppppppuStack_1a0 = &pppppuStack_160;
  FUN_109ceb01c();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  pplVar9 = &plStack_1c8;
  plVar11 = &lStack_1b8;
  plStack_1c8 = plVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar9 != (long **)0x0) {
    pplVar2 = pplVar9;
  }
  iVar3 = *(int *)(pplVar2 + 9);
  func_0x00010925b8c4(&piStack_228,(long)iVar3 + 2);
  if ((ulong)(lStack_220 - (long)piStack_228) < 5) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_270,&UNK_10f5ab5d3,(ulong)pplVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_258,auStack_270,&UNK_10f594a73);
    func_0x000109259240(auStack_240,auStack_258,&UNK_10f5ab7a4);
    FUN_109cd8934(auStack_240);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d02b48);
    (*pcVar4)();
  }
  uVar1 = iVar3 + 1;
  uVar17 = (ulong)uVar1;
  puVar18 = (undefined8 *)*plVar11;
  *(undefined4 *)(lStack_220 + -4) = *(undefined4 *)(puVar18 + 1);
  if (0 < *(int *)(pplVar2 + 9)) {
    lVar15 = 0;
    plVar11 = pplVar2[10];
    do {
      piStack_228[lVar15 + 1] = *(int *)((long)plVar11 + lVar15 * 4);
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(pplVar2 + 9));
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  if (uVar1 != 0) {
    lVar16 = (long)(int)uVar1;
    FUN_109d035c4(plVar6,lVar16);
    puVar12 = (undefined8 *)plVar6[1];
    lVar15 = lVar16 << 4;
    puVar13 = puVar12;
    do {
      uVar19 = *puVar18;
      puVar13[1] = puVar18[1];
      *puVar13 = uVar19;
      lVar15 = lVar15 + -0x10;
      puVar13 = puVar13 + 2;
    } while (lVar15 != 0);
    plVar6[1] = (long)(puVar12 + lVar16 * 2);
    if (-1 < iVar3) {
      piVar14 = (int *)(*plVar6 + 8);
      do {
        *piVar14 = piStack_228[1] - *piStack_228;
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 4;
        piStack_228 = piStack_228 + 1;
      } while (uVar17 != 0);
      goto LAB_109d02adc;
    }
  }
  if (piStack_228 == (int *)0x0) {
    return;
  }
LAB_109d02adc:
  __ZdlPv();
  return;
}



/* Entry: 109d02670; end: 109d029db;  */

void FUN_109d02670(long *param_1,undefined **param_2,undefined *param_3)

{
  uint uVar1;
  long **pplVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long **pplVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  int *piStack_1f8;
  long lStack_1f0;
  long *plStack_198;
  long **pplStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 *****pppppuStack_170;
  undefined8 uStack_168;
  long *plStack_158;
  long **pplStack_150;
  long lStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 ****ppppuStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [32];
  long *plStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined1 ***pppuStack_d0;
  undefined8 uStack_c8;
  long *plStack_b8;
  long **pplStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  long *plStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar8 = param_2;
  }
  FUN_109ceb438();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar9 = &puStack_38;
  plVar12 = &lStack_28;
  puStack_38 = param_3;
  ppuStack_30 = ppuVar8;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x109d026fc;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = &PTR_PTR_1132eca28;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_70 = ppuVar9;
  }
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_109cf31c0(plVar12,ppuStack_70,0x15);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_78;
  plVar5 = &lStack_68;
  plStack_78 = plVar12;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_88 = 0x109d0278c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_b0 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_b0 = pplVar10;
  }
  ppuStack_90 = &puStack_50;
  FUN_109cf31c0(plVar5,pplStack_b0,0x16);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_b8;
  plVar12 = &lStack_a8;
  plStack_b8 = plVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x109d0281c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  pppuStack_d0 = &ppuStack_90;
  func_0x000109cef5d4(auStack_118,pplVar2,plVar12);
  puVar11 = auStack_118;
  plVar6 = plVar12;
  FUN_109cef6bc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pplVar10 = &plStack_f8;
  plVar5 = &lStack_e8;
  plVar7 = param_1;
  plStack_f8 = plVar6;
  puStack_f0 = puVar11;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  uStack_128 = 0x109d028bc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_150 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_150 = pplVar10;
  }
  plStack_140 = param_1;
  plStack_138 = plVar12;
  ppppuStack_130 = &pppuStack_d0;
  FUN_109cf31c0(plVar5,pplStack_150,0x28,0);
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  pplVar10 = &plStack_158;
  plVar12 = &lStack_148;
  plVar6 = plVar7;
  plStack_158 = plVar5;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  uStack_168 = 0x109d02950;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_190 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplStack_190 = pplVar10;
  }
  plStack_180 = param_1;
  plStack_178 = plVar7;
  pppppuStack_170 = &ppppuStack_130;
  FUN_109ceb01c();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  pplVar10 = &plStack_198;
  plVar5 = &lStack_188;
  plStack_198 = plVar12;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pplVar2 = (long **)&PTR_PTR_1132eca28;
  if (pplVar10 != (long **)0x0) {
    pplVar2 = pplVar10;
  }
  iVar3 = *(int *)(pplVar2 + 9);
  func_0x00010925b8c4(&piStack_1f8,(long)iVar3 + 2);
  if ((ulong)(lStack_1f0 - (long)piStack_1f8) < 5) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_240,&UNK_10f5ab5d3,(ulong)pplVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_228,auStack_240,&UNK_10f594a73);
    func_0x000109259240(auStack_210,auStack_228,&UNK_10f5ab7a4);
    FUN_109cd8934(auStack_210);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d02b48);
    (*pcVar4)();
  }
  uVar1 = iVar3 + 1;
  uVar18 = (ulong)uVar1;
  puVar19 = (undefined8 *)*plVar5;
  *(undefined4 *)(lStack_1f0 + -4) = *(undefined4 *)(puVar19 + 1);
  if (0 < *(int *)(pplVar2 + 9)) {
    lVar16 = 0;
    plVar12 = pplVar2[10];
    do {
      piStack_1f8[lVar16 + 1] = *(int *)((long)plVar12 + lVar16 * 4);
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(pplVar2 + 9));
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  if (uVar1 != 0) {
    lVar17 = (long)(int)uVar1;
    FUN_109d035c4(plVar6,lVar17);
    puVar13 = (undefined8 *)plVar6[1];
    lVar16 = lVar17 << 4;
    puVar14 = puVar13;
    do {
      uVar20 = *puVar19;
      puVar14[1] = puVar19[1];
      *puVar14 = uVar20;
      lVar16 = lVar16 + -0x10;
      puVar14 = puVar14 + 2;
    } while (lVar16 != 0);
    plVar6[1] = (long)(puVar13 + lVar17 * 2);
    if (-1 < iVar3) {
      piVar15 = (int *)(*plVar6 + 8);
      do {
        *piVar15 = piStack_1f8[1] - *piStack_1f8;
        uVar18 = uVar18 - 1;
        piVar15 = piVar15 + 4;
        piStack_1f8 = piStack_1f8 + 1;
      } while (uVar18 != 0);
      goto LAB_109d02adc;
    }
  }
  if (piStack_1f8 == (int *)0x0) {
    return;
  }
LAB_109d02adc:
  __ZdlPv();
  return;
}



/* Entry: 109d029dc; end: 109d02bbf;  */

void FUN_109d029dc(long *param_1,undefined **param_2,long *param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  int *piStack_58;
  long lStack_50;
  
  ppuVar2 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar2 = param_2;
  }
  iVar3 = *(int *)(ppuVar2 + 9);
  func_0x00010925b8c4(&piStack_58,(long)iVar3 + 2);
  if ((ulong)(lStack_50 - (long)piStack_58) < 5) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_a0,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_88,auStack_a0,&UNK_10f594a73);
    func_0x000109259240(auStack_70,auStack_88,&UNK_10f5ab7a4);
    FUN_109cd8934(auStack_70);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d02b48);
    (*pcVar4)();
  }
  uVar1 = iVar3 + 1;
  uVar11 = (ulong)uVar1;
  puVar12 = (undefined8 *)*param_3;
  *(undefined4 *)(lStack_50 + -4) = *(undefined4 *)(puVar12 + 1);
  if (0 < *(int *)(ppuVar2 + 9)) {
    lVar9 = 0;
    puVar5 = ppuVar2[10];
    do {
      piStack_58[lVar9 + 1] = *(int *)(puVar5 + lVar9 * 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(ppuVar2 + 9));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar1 != 0) {
    lVar10 = (long)(int)uVar1;
    FUN_109d035c4(param_1,lVar10);
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = lVar10 << 4;
    puVar7 = puVar6;
    do {
      uVar13 = *puVar12;
      puVar7[1] = puVar12[1];
      *puVar7 = uVar13;
      lVar9 = lVar9 + -0x10;
      puVar7 = puVar7 + 2;
    } while (lVar9 != 0);
    param_1[1] = (long)(puVar6 + lVar10 * 2);
    if (-1 < iVar3) {
      piVar8 = (int *)(*param_1 + 8);
      do {
        *piVar8 = piStack_58[1] - *piStack_58;
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 4;
        piStack_58 = piStack_58 + 1;
      } while (uVar11 != 0);
      goto LAB_109d02adc;
    }
  }
  if (piStack_58 == (int *)0x0) {
    return;
  }
LAB_109d02adc:
  __ZdlPv();
  return;
}



/* Entry: 109d02bc0; end: 109d02df7;  */

void FUN_109d02bc0(undefined8 *param_1,undefined **param_2,long param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined **ppuVar6;
  int *piVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 auStack_188 [2];
  char cStack_171;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 uStack_160;
  char cStack_159;
  long lStack_158;
  undefined8 auStack_130 [2];
  char cStack_119;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  int iStack_108;
  int iStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [7];
  char cStack_99;
  long lStack_98;
  undefined8 auStack_70 [2];
  char cStack_59;
  int iStack_58;
  int iStack_54;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar6 = param_2;
  }
  iStack_54 = *(int *)(param_3 + 4);
  uStack_50 = *(undefined8 *)(param_3 + 8);
  iVar13 = 1;
  if (*(byte *)((long)ppuVar6 + 0x1bd) != 0) {
    iVar13 = 2;
  }
  if (1 < (int)((ulong)(param_4 - param_3) >> 4)) {
    piVar7 = (int *)(param_3 + 0x1c);
    lVar14 = ((ulong)(param_4 - param_3) >> 4 & 0x7fffffff) - 1;
    do {
      if (*piVar7 != iVar13) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_70,&UNK_10f5ab7cf,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&iStack_58,auStack_70,&UNK_10f5ab7dc);
        FUN_109cd8934(&iStack_58);
LAB_109d02d9c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109d02da0);
        (*pcVar5)();
      }
      if (piVar7[-2] != iStack_54) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_70,&UNK_10f5ab7cf,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&iStack_58,auStack_70,&UNK_10f5ab825);
        FUN_109cd8934(&iStack_58);
        goto LAB_109d02d9c;
      }
      if (piVar7[-3] != *(int *)(ppuVar6 + 0x23)) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_70,&UNK_10f5ab7cf,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&iStack_58,auStack_70,&UNK_10f5ab86e);
        FUN_109cd8934(&iStack_58);
        goto LAB_109d02d9c;
      }
      if (piVar7[-1] != 1) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_70,&UNK_10f5ab7cf,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&iStack_58,auStack_70,&UNK_10f5ab8b1);
        FUN_109cd8934(&iStack_58);
        goto LAB_109d02d9c;
      }
      piVar7 = piVar7 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uStack_40 = *(undefined8 *)(param_3 + 0x18);
  lStack_48 = *(long *)(param_3 + 0x10);
  iStack_58 = *(int *)(ppuVar6 + 0x23) << (ulong)(*(byte *)((long)ppuVar6 + 0x1bd) & 0x1f);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar6 = (undefined **)&iStack_58;
  plVar8 = &lStack_28;
  lStack_38 = lStack_48;
  uStack_30 = uStack_40;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 < 0) {
    __ZdlPv(CONCAT44(iStack_54,iStack_58));
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR_PTR_1132eca28;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar2 = ppuVar6;
  }
  if ((int)plVar8[3] == (int)plVar8[1]) {
    iStack_a4 = *(int *)((long)plVar8 + 0xc);
    if (*(int *)((long)plVar8 + 0x1c) == iStack_a4) {
      if (*(int *)((long)plVar8 + 0x14) == (int)*plVar8) {
        iStack_b0 = (int)plVar8[2];
        uStack_ac = (undefined4)*(undefined8 *)((long)plVar8 + 4);
        uStack_a8 = (undefined4)((ulong)*(undefined8 *)((long)plVar8 + 4) >> 0x20);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        ppuVar6 = (undefined **)&iStack_b0;
        puVar9 = auStack_a0;
        FUN_109d035fc();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
          return;
        }
        ___stack_chk_fail();
        if (cStack_99 < '\0') {
          __ZdlPv(CONCAT44(uStack_ac,iStack_b0));
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(auStack_c8[0]);
        }
        __Unwind_Resume();
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar2 = &PTR_PTR_1132eca28;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar2 = ppuVar6;
        }
        if (*(int *)(puVar9 + 0x1c) == 1) {
          iStack_114 = *(int *)(puVar9 + 4);
          if (*(int *)(puVar9 + 0x14) == iStack_114) {
            iStack_118 = *(int *)(ppuVar2 + 0x23);
            if (*(int *)(puVar9 + 0x10) == iStack_118) {
              if (*(int *)(puVar9 + 0x18) == 1) {
                uStack_110 = *(undefined8 *)(puVar9 + 8);
                uStack_100 = 0x100000001;
                param_1[1] = 0;
                param_1[2] = 0;
                *param_1 = 0;
                piVar7 = &iStack_118;
                plVar8 = &lStack_f8;
                iStack_108 = iStack_118;
                iStack_104 = iStack_114;
                FUN_109d035fc();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                  return;
                }
                ___stack_chk_fail();
                if (iStack_104 < 0) {
                  __ZdlPv(CONCAT44(iStack_114,iStack_118));
                }
                if (cStack_119 < '\0') {
                  __ZdlPv(auStack_130[0]);
                }
                __Unwind_Resume();
                lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
                iStack_170 = (int)*plVar8;
                iStack_16c = *(int *)((long)plVar8 + 4);
                iStack_168 = (int)plVar8[1];
                iStack_164 = *(int *)((long)plVar8 + 0xc);
                if (1 < piVar7[8]) {
                  lVar14 = (ulong)(uint)piVar7[8] - 1;
                  piVar12 = (int *)((long)plVar8 + 0x1c);
                  do {
                    if ((((piVar12[-3] != iStack_170) || (piVar12[-2] != iStack_16c)) ||
                        (piVar12[-1] != iStack_168)) || (*piVar12 != iStack_164)) {
                      uVar11 = *(ulong *)(piVar7 + 0xc);
                      puVar1 = (ulong *)(piVar7 + 0xc);
                      if ((uVar11 & 1) != 0) {
                        puVar1 = (ulong *)(uVar11 + 7);
                      }
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_188,&UNK_10f5aba55,*puVar1);
                      func_0x000109259240(&iStack_170,auStack_188,&UNK_10f5aba64);
                      FUN_109cd8934(&iStack_170);
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x109d032a8);
                      (*pcVar5)();
                    }
                    lVar14 = lVar14 + -1;
                    piVar12 = piVar12 + 4;
                  } while (lVar14 != 0);
                }
                param_1[1] = 0;
                param_1[2] = 0;
                *param_1 = 0;
                ppuVar6 = (undefined **)&iStack_170;
                puVar10 = &uStack_160;
                FUN_109d035fc();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
                  return;
                }
                ___stack_chk_fail();
                if (cStack_159 < '\0') {
                  __ZdlPv(CONCAT44(iStack_16c,iStack_170));
                }
                if (cStack_171 < '\0') {
                  __ZdlPv(auStack_188[0]);
                }
                __Unwind_Resume();
                ppuVar2 = &PTR_PTR_1132eca28;
                if (ppuVar6 != (undefined **)0x0) {
                  ppuVar2 = ppuVar6;
                }
                if (*(int *)(ppuVar2 + 0x1d) < 1) {
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (auStack_218,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                  func_0x000109259240(auStack_200,auStack_218,&UNK_10f594a73);
                  func_0x000109259240(&uStack_1e8,auStack_200,&UNK_10f5aba84);
                  FUN_109cd8934(&uStack_1e8);
                }
                else {
                  uVar3 = *(uint *)ppuVar2[0x1e];
                  if (uVar3 < 4) {
                    uStack_228 = CONCAT44(puVar10[1],puVar10[3]);
                    uStack_220 = CONCAT44(puVar10[2],*puVar10);
                    param_1[1] = 0;
                    param_1[2] = 0;
                    *param_1 = 0;
                    uVar4 = *(uint *)(ppuVar2 + 9);
                    if ((int)uVar4 < 1) {
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_218,&UNK_10f5ab5d3,
                                 (ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                      func_0x000109259240(auStack_200,auStack_218,&UNK_10f594a73);
                      func_0x000109259240(&uStack_1e8,auStack_200,&UNK_10f5abad0);
                      FUN_109cd8934(&uStack_1e8);
                    }
                    else {
                      FUN_109ced9f4(param_1,(ulong)uVar4);
                      lVar14 = 0;
                      while (0 < *(int *)(ppuVar2[10] + lVar14)) {
                        *(int *)((long)&uStack_228 + (ulong)uVar3 * 4) =
                             *(int *)(ppuVar2[10] + lVar14);
                        uStack_1e8 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_220);
                        uStack_1e0 = CONCAT44((undefined4)uStack_228,uStack_220._4_4_);
                        func_0x0001096ca888(param_1,&uStack_1e8);
                        lVar14 = lVar14 + 4;
                        if ((ulong)uVar4 * 4 - lVar14 == 0) {
                          return;
                        }
                      }
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_218,&UNK_10f5ab5d3,
                                 (ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                      func_0x000109259240(auStack_200,auStack_218,&UNK_10f594a73);
                      func_0x000109259240(&uStack_1e8,auStack_200,&UNK_10f5abb02);
                      FUN_109cd8934(&uStack_1e8);
                    }
                  }
                  else {
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (auStack_218,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc)
                    ;
                    func_0x000109259240(auStack_200,auStack_218,&UNK_10f594a73);
                    func_0x000109259240(&uStack_1e8,auStack_200,&UNK_10f5abaaf);
                    FUN_109cd8934(&uStack_1e8);
                  }
                }
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x109d034f8);
                (*pcVar5)();
              }
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_130,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
              func_0x000109259240(&iStack_118,auStack_130,&UNK_10f5aba2f);
              FUN_109cd8934(&iStack_118);
            }
            else {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_130,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
              func_0x000109259240(&iStack_118,auStack_130,&UNK_10f5ab9f5);
              FUN_109cd8934(&iStack_118);
            }
          }
          else {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_130,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
            func_0x000109259240(&iStack_118,auStack_130,&UNK_10f5ab9b5);
            FUN_109cd8934(&iStack_118);
          }
        }
        else {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_130,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
          func_0x000109259240(&iStack_118,auStack_130,&UNK_10f5ab991);
          FUN_109cd8934(&iStack_118);
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109d0314c);
        (*pcVar5)();
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_c8,&UNK_10f5ab8e0,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(&iStack_b0,auStack_c8,&UNK_10f5ab952);
      FUN_109cd8934(&iStack_b0);
    }
    else {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_c8,&UNK_10f5ab8e0,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(&iStack_b0,auStack_c8,&UNK_10f5ab929);
      FUN_109cd8934(&iStack_b0);
    }
  }
  else {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_c8,&UNK_10f5ab8e0,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(&iStack_b0,auStack_c8,&UNK_10f5ab909);
    FUN_109cd8934(&iStack_b0);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d02f58);
  (*pcVar5)();
}



/* Entry: 109d02df8; end: 109d02fa7;  */

void FUN_109d02df8(undefined8 *param_1,undefined **param_2,int *param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined **ppuVar6;
  int *piVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 auStack_118 [2];
  char cStack_101;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  char cStack_e9;
  long lStack_e8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 auStack_58 [2];
  char cStack_41;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [7];
  char cStack_29;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar6 = param_2;
  }
  if (param_3[6] == param_3[2]) {
    iStack_34 = param_3[3];
    if (param_3[7] == iStack_34) {
      if (param_3[5] == *param_3) {
        iStack_40 = param_3[4];
        uStack_3c = (undefined4)*(undefined8 *)(param_3 + 1);
        uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        ppuVar6 = (undefined **)&iStack_40;
        puVar8 = auStack_30;
        FUN_109d035fc();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
          return;
        }
        ___stack_chk_fail();
        if (cStack_29 < '\0') {
          __ZdlPv(CONCAT44(uStack_3c,iStack_40));
        }
        if (cStack_41 < '\0') {
          __ZdlPv(auStack_58[0]);
        }
        __Unwind_Resume();
        lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar2 = &PTR_PTR_1132eca28;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar2 = ppuVar6;
        }
        if (*(int *)(puVar8 + 0x1c) == 1) {
          iStack_a4 = *(int *)(puVar8 + 4);
          if (*(int *)(puVar8 + 0x14) == iStack_a4) {
            iStack_a8 = *(int *)(ppuVar2 + 0x23);
            if (*(int *)(puVar8 + 0x10) == iStack_a8) {
              if (*(int *)(puVar8 + 0x18) == 1) {
                uStack_a0 = *(undefined8 *)(puVar8 + 8);
                uStack_90 = 0x100000001;
                param_1[1] = 0;
                param_1[2] = 0;
                *param_1 = 0;
                piVar7 = &iStack_a8;
                plVar9 = &lStack_88;
                iStack_98 = iStack_a8;
                iStack_94 = iStack_a4;
                FUN_109d035fc();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                  return;
                }
                ___stack_chk_fail();
                if (iStack_94 < 0) {
                  __ZdlPv(CONCAT44(iStack_a4,iStack_a8));
                }
                if (cStack_a9 < '\0') {
                  __ZdlPv(auStack_c0[0]);
                }
                __Unwind_Resume();
                lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                iStack_100 = (int)*plVar9;
                iStack_fc = *(int *)((long)plVar9 + 4);
                iStack_f8 = (int)plVar9[1];
                iStack_f4 = *(int *)((long)plVar9 + 0xc);
                if (1 < piVar7[8]) {
                  lVar13 = (ulong)(uint)piVar7[8] - 1;
                  piVar12 = (int *)((long)plVar9 + 0x1c);
                  do {
                    if ((((piVar12[-3] != iStack_100) || (piVar12[-2] != iStack_fc)) ||
                        (piVar12[-1] != iStack_f8)) || (*piVar12 != iStack_f4)) {
                      uVar11 = *(ulong *)(piVar7 + 0xc);
                      puVar1 = (ulong *)(piVar7 + 0xc);
                      if ((uVar11 & 1) != 0) {
                        puVar1 = (ulong *)(uVar11 + 7);
                      }
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_118,&UNK_10f5aba55,*puVar1);
                      func_0x000109259240(&iStack_100,auStack_118,&UNK_10f5aba64);
                      FUN_109cd8934(&iStack_100);
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x109d032a8);
                      (*pcVar5)();
                    }
                    lVar13 = lVar13 + -1;
                    piVar12 = piVar12 + 4;
                  } while (lVar13 != 0);
                }
                param_1[1] = 0;
                param_1[2] = 0;
                *param_1 = 0;
                ppuVar6 = (undefined **)&iStack_100;
                puVar10 = &uStack_f0;
                FUN_109d035fc();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
                  return;
                }
                ___stack_chk_fail();
                if (cStack_e9 < '\0') {
                  __ZdlPv(CONCAT44(iStack_fc,iStack_100));
                }
                if (cStack_101 < '\0') {
                  __ZdlPv(auStack_118[0]);
                }
                __Unwind_Resume();
                ppuVar2 = &PTR_PTR_1132eca28;
                if (ppuVar6 != (undefined **)0x0) {
                  ppuVar2 = ppuVar6;
                }
                if (*(int *)(ppuVar2 + 0x1d) < 1) {
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (auStack_1a8,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                  func_0x000109259240(auStack_190,auStack_1a8,&UNK_10f594a73);
                  func_0x000109259240(&uStack_178,auStack_190,&UNK_10f5aba84);
                  FUN_109cd8934(&uStack_178);
                }
                else {
                  uVar3 = *(uint *)ppuVar2[0x1e];
                  if (uVar3 < 4) {
                    uStack_1b8 = CONCAT44(puVar10[1],puVar10[3]);
                    uStack_1b0 = CONCAT44(puVar10[2],*puVar10);
                    param_1[1] = 0;
                    param_1[2] = 0;
                    *param_1 = 0;
                    uVar4 = *(uint *)(ppuVar2 + 9);
                    if ((int)uVar4 < 1) {
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_1a8,&UNK_10f5ab5d3,
                                 (ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                      func_0x000109259240(auStack_190,auStack_1a8,&UNK_10f594a73);
                      func_0x000109259240(&uStack_178,auStack_190,&UNK_10f5abad0);
                      FUN_109cd8934(&uStack_178);
                    }
                    else {
                      FUN_109ced9f4(param_1,(ulong)uVar4);
                      lVar13 = 0;
                      while (0 < *(int *)(ppuVar2[10] + lVar13)) {
                        *(int *)((long)&uStack_1b8 + (ulong)uVar3 * 4) =
                             *(int *)(ppuVar2[10] + lVar13);
                        uStack_178 = CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b0);
                        uStack_170 = CONCAT44((undefined4)uStack_1b8,uStack_1b0._4_4_);
                        func_0x0001096ca888(param_1,&uStack_178);
                        lVar13 = lVar13 + 4;
                        if ((ulong)uVar4 * 4 - lVar13 == 0) {
                          return;
                        }
                      }
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_1a8,&UNK_10f5ab5d3,
                                 (ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                      func_0x000109259240(auStack_190,auStack_1a8,&UNK_10f594a73);
                      func_0x000109259240(&uStack_178,auStack_190,&UNK_10f5abb02);
                      FUN_109cd8934(&uStack_178);
                    }
                  }
                  else {
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (auStack_1a8,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc)
                    ;
                    func_0x000109259240(auStack_190,auStack_1a8,&UNK_10f594a73);
                    func_0x000109259240(&uStack_178,auStack_190,&UNK_10f5abaaf);
                    FUN_109cd8934(&uStack_178);
                  }
                }
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x109d034f8);
                (*pcVar5)();
              }
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_c0,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
              func_0x000109259240(&iStack_a8,auStack_c0,&UNK_10f5aba2f);
              FUN_109cd8934(&iStack_a8);
            }
            else {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_c0,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
              func_0x000109259240(&iStack_a8,auStack_c0,&UNK_10f5ab9f5);
              FUN_109cd8934(&iStack_a8);
            }
          }
          else {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_c0,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
            func_0x000109259240(&iStack_a8,auStack_c0,&UNK_10f5ab9b5);
            FUN_109cd8934(&iStack_a8);
          }
        }
        else {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_c0,&UNK_10f5ab985,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
          func_0x000109259240(&iStack_a8,auStack_c0,&UNK_10f5ab991);
          FUN_109cd8934(&iStack_a8);
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109d0314c);
        (*pcVar5)();
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_58,&UNK_10f5ab8e0,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(&iStack_40,auStack_58,&UNK_10f5ab952);
      FUN_109cd8934(&iStack_40);
    }
    else {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_58,&UNK_10f5ab8e0,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(&iStack_40,auStack_58,&UNK_10f5ab929);
      FUN_109cd8934(&iStack_40);
    }
  }
  else {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_58,&UNK_10f5ab8e0,(ulong)ppuVar6[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(&iStack_40,auStack_58,&UNK_10f5ab909);
    FUN_109cd8934(&iStack_40);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d02f58);
  (*pcVar5)();
}



/* Entry: 109d02fa8; end: 109d031a3;  */

void FUN_109d02fa8(undefined8 *param_1,undefined **param_2,long param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  char cStack_89;
  long lStack_88;
  undefined8 auStack_60 [2];
  char cStack_49;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar7 = param_2;
  }
  if (*(int *)(param_3 + 0x1c) == 1) {
    iStack_44 = *(int *)(param_3 + 4);
    if (*(int *)(param_3 + 0x14) == iStack_44) {
      iStack_48 = *(int *)(ppuVar7 + 0x23);
      if (*(int *)(param_3 + 0x10) == iStack_48) {
        if (*(int *)(param_3 + 0x18) == 1) {
          uStack_40 = *(undefined8 *)(param_3 + 8);
          uStack_30 = 0x100000001;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          piVar6 = &iStack_48;
          plVar8 = &lStack_28;
          iStack_38 = iStack_48;
          iStack_34 = iStack_44;
          FUN_109d035fc();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
            return;
          }
          ___stack_chk_fail();
          if (iStack_34 < 0) {
            __ZdlPv(CONCAT44(iStack_44,iStack_48));
          }
          if (cStack_49 < '\0') {
            __ZdlPv(auStack_60[0]);
          }
          __Unwind_Resume();
          lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
          iStack_a0 = (int)*plVar8;
          iStack_9c = *(int *)((long)plVar8 + 4);
          iStack_98 = (int)plVar8[1];
          iStack_94 = *(int *)((long)plVar8 + 0xc);
          if (1 < piVar6[8]) {
            lVar12 = (ulong)(uint)piVar6[8] - 1;
            piVar11 = (int *)((long)plVar8 + 0x1c);
            do {
              if ((((piVar11[-3] != iStack_a0) || (piVar11[-2] != iStack_9c)) ||
                  (piVar11[-1] != iStack_98)) || (*piVar11 != iStack_94)) {
                uVar10 = *(ulong *)(piVar6 + 0xc);
                puVar1 = (ulong *)(piVar6 + 0xc);
                if ((uVar10 & 1) != 0) {
                  puVar1 = (ulong *)(uVar10 + 7);
                }
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (auStack_b8,&UNK_10f5aba55,*puVar1);
                func_0x000109259240(&iStack_a0,auStack_b8,&UNK_10f5aba64);
                FUN_109cd8934(&iStack_a0);
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x109d032a8);
                (*pcVar5)();
              }
              lVar12 = lVar12 + -1;
              piVar11 = piVar11 + 4;
            } while (lVar12 != 0);
          }
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          ppuVar7 = (undefined **)&iStack_a0;
          puVar9 = &uStack_90;
          FUN_109d035fc();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
            return;
          }
          ___stack_chk_fail();
          if (cStack_89 < '\0') {
            __ZdlPv(CONCAT44(iStack_9c,iStack_a0));
          }
          if (cStack_a1 < '\0') {
            __ZdlPv(auStack_b8[0]);
          }
          __Unwind_Resume();
          ppuVar2 = &PTR_PTR_1132eca28;
          if (ppuVar7 != (undefined **)0x0) {
            ppuVar2 = ppuVar7;
          }
          if (*(int *)(ppuVar2 + 0x1d) < 1) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_148,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
            func_0x000109259240(auStack_130,auStack_148,&UNK_10f594a73);
            func_0x000109259240(&uStack_118,auStack_130,&UNK_10f5aba84);
            FUN_109cd8934(&uStack_118);
          }
          else {
            uVar3 = *(uint *)ppuVar2[0x1e];
            if (uVar3 < 4) {
              uStack_158 = CONCAT44(puVar9[1],puVar9[3]);
              uStack_150 = CONCAT44(puVar9[2],*puVar9);
              param_1[1] = 0;
              param_1[2] = 0;
              *param_1 = 0;
              uVar4 = *(uint *)(ppuVar2 + 9);
              if ((int)uVar4 < 1) {
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (auStack_148,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                func_0x000109259240(auStack_130,auStack_148,&UNK_10f594a73);
                func_0x000109259240(&uStack_118,auStack_130,&UNK_10f5abad0);
                FUN_109cd8934(&uStack_118);
              }
              else {
                FUN_109ced9f4(param_1,(ulong)uVar4);
                lVar12 = 0;
                while (0 < *(int *)(ppuVar2[10] + lVar12)) {
                  *(int *)((long)&uStack_158 + (ulong)uVar3 * 4) = *(int *)(ppuVar2[10] + lVar12);
                  uStack_118 = CONCAT44(uStack_158._4_4_,(undefined4)uStack_150);
                  uStack_110 = CONCAT44((undefined4)uStack_158,uStack_150._4_4_);
                  func_0x0001096ca888(param_1,&uStack_118);
                  lVar12 = lVar12 + 4;
                  if ((ulong)uVar4 * 4 - lVar12 == 0) {
                    return;
                  }
                }
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (auStack_148,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
                func_0x000109259240(auStack_130,auStack_148,&UNK_10f594a73);
                func_0x000109259240(&uStack_118,auStack_130,&UNK_10f5abb02);
                FUN_109cd8934(&uStack_118);
              }
            }
            else {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_148,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
              func_0x000109259240(auStack_130,auStack_148,&UNK_10f594a73);
              func_0x000109259240(&uStack_118,auStack_130,&UNK_10f5abaaf);
              FUN_109cd8934(&uStack_118);
            }
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109d034f8);
          (*pcVar5)();
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_60,&UNK_10f5ab985,(ulong)ppuVar7[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&iStack_48,auStack_60,&UNK_10f5aba2f);
        FUN_109cd8934(&iStack_48);
      }
      else {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_60,&UNK_10f5ab985,(ulong)ppuVar7[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&iStack_48,auStack_60,&UNK_10f5ab9f5);
        FUN_109cd8934(&iStack_48);
      }
    }
    else {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_60,&UNK_10f5ab985,(ulong)ppuVar7[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(&iStack_48,auStack_60,&UNK_10f5ab9b5);
      FUN_109cd8934(&iStack_48);
    }
  }
  else {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_60,&UNK_10f5ab985,(ulong)ppuVar7[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(&iStack_48,auStack_60,&UNK_10f5ab991);
    FUN_109cd8934(&iStack_48);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d0314c);
  (*pcVar5)();
}



/* Entry: 109d031a4; end: 109d032e7;  */

void FUN_109d031a4(undefined8 *param_1,long param_2,int *param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_58 [2];
  char cStack_41;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  char cStack_29;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_40 = *param_3;
  iStack_3c = param_3[1];
  iStack_38 = param_3[2];
  iStack_34 = param_3[3];
  if (1 < (int)*(uint *)(param_2 + 0x20)) {
    lVar10 = (ulong)*(uint *)(param_2 + 0x20) - 1;
    piVar9 = param_3 + 7;
    do {
      if ((((piVar9[-3] != iStack_40) || (piVar9[-2] != iStack_3c)) || (piVar9[-1] != iStack_38)) ||
         (*piVar9 != iStack_34)) {
        uVar8 = *(ulong *)(param_2 + 0x30);
        puVar1 = (ulong *)(param_2 + 0x30);
        if ((uVar8 & 1) != 0) {
          puVar1 = (ulong *)(uVar8 + 7);
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_58,&UNK_10f5aba55,*puVar1);
        func_0x000109259240(&iStack_40,auStack_58,&UNK_10f5aba64);
        FUN_109cd8934(&iStack_40);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109d032a8);
        (*pcVar5)();
      }
      lVar10 = lVar10 + -1;
      piVar9 = piVar9 + 4;
    } while (lVar10 != 0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar6 = (undefined **)&iStack_40;
  puVar7 = &uStack_30;
  FUN_109d035fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_29 < '\0') {
    __ZdlPv(CONCAT44(iStack_3c,iStack_40));
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  __Unwind_Resume();
  ppuVar2 = &PTR_PTR_1132eca28;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar2 = ppuVar6;
  }
  if (*(int *)(ppuVar2 + 0x1d) < 1) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_e8,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_d0,auStack_e8,&UNK_10f594a73);
    func_0x000109259240(&uStack_b8,auStack_d0,&UNK_10f5aba84);
    FUN_109cd8934(&uStack_b8);
  }
  else {
    uVar3 = *(uint *)ppuVar2[0x1e];
    if (uVar3 < 4) {
      uStack_f8 = CONCAT44(puVar7[1],puVar7[3]);
      uStack_f0 = CONCAT44(puVar7[2],*puVar7);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uVar4 = *(uint *)(ppuVar2 + 9);
      if ((int)uVar4 < 1) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_e8,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(auStack_d0,auStack_e8,&UNK_10f594a73);
        func_0x000109259240(&uStack_b8,auStack_d0,&UNK_10f5abad0);
        FUN_109cd8934(&uStack_b8);
      }
      else {
        FUN_109ced9f4(param_1,(ulong)uVar4);
        lVar10 = 0;
        while (0 < *(int *)(ppuVar2[10] + lVar10)) {
          *(int *)((long)&uStack_f8 + (ulong)uVar3 * 4) = *(int *)(ppuVar2[10] + lVar10);
          uStack_b8 = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f0);
          uStack_b0 = CONCAT44((undefined4)uStack_f8,uStack_f0._4_4_);
          func_0x0001096ca888(param_1,&uStack_b8);
          lVar10 = lVar10 + 4;
          if ((ulong)uVar4 * 4 - lVar10 == 0) {
            return;
          }
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_e8,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(auStack_d0,auStack_e8,&UNK_10f594a73);
        func_0x000109259240(&uStack_b8,auStack_d0,&UNK_10f5abb02);
        FUN_109cd8934(&uStack_b8);
      }
    }
    else {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_e8,&UNK_10f5ab5d3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(auStack_d0,auStack_e8,&UNK_10f594a73);
      func_0x000109259240(&uStack_b8,auStack_d0,&UNK_10f5abaaf);
      FUN_109cd8934(&uStack_b8);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109d034f8);
  (*pcVar5)();
}



/* Entry: 109d032e8; end: 109d035c3;  */

void FUN_109d032e8(undefined8 *param_1,undefined **param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  ppuVar1 = &PTR_PTR_1132eca28;
  if (param_2 != (undefined **)0x0) {
    ppuVar1 = param_2;
  }
  if (*(int *)(ppuVar1 + 0x1d) < 1) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_88,&UNK_10f5ab5d3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
    func_0x000109259240(auStack_70,auStack_88,&UNK_10f594a73);
    func_0x000109259240(&uStack_58,auStack_70,&UNK_10f5aba84);
    FUN_109cd8934(&uStack_58);
  }
  else {
    uVar2 = *(uint *)ppuVar1[0x1e];
    if (uVar2 < 4) {
      uStack_98 = CONCAT44(param_3[1],param_3[3]);
      uStack_90 = CONCAT44(param_3[2],*param_3);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uVar3 = *(uint *)(ppuVar1 + 9);
      if ((int)uVar3 < 1) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_88,&UNK_10f5ab5d3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(auStack_70,auStack_88,&UNK_10f594a73);
        func_0x000109259240(&uStack_58,auStack_70,&UNK_10f5abad0);
        FUN_109cd8934(&uStack_58);
      }
      else {
        FUN_109ced9f4(param_1,(ulong)uVar3);
        lVar5 = 0;
        while (0 < *(int *)(ppuVar1[10] + lVar5)) {
          *(int *)((long)&uStack_98 + (ulong)uVar2 * 4) = *(int *)(ppuVar1[10] + lVar5);
          uStack_58 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_90);
          uStack_50 = CONCAT44((undefined4)uStack_98,uStack_90._4_4_);
          func_0x0001096ca888(param_1,&uStack_58);
          lVar5 = lVar5 + 4;
          if ((ulong)uVar3 * 4 - lVar5 == 0) {
            return;
          }
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_88,&UNK_10f5ab5d3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(auStack_70,auStack_88,&UNK_10f594a73);
        func_0x000109259240(&uStack_58,auStack_70,&UNK_10f5abb02);
        FUN_109cd8934(&uStack_58);
      }
    }
    else {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_88,&UNK_10f5ab5d3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
      func_0x000109259240(auStack_70,auStack_88,&UNK_10f594a73);
      func_0x000109259240(&uStack_58,auStack_70,&UNK_10f5abaaf);
      FUN_109cd8934(&uStack_58);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d034f8);
  (*pcVar4)();
}



/* Entry: 109d035c4; end: 109d035fb;  */

void FUN_109d035c4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    func_0x0001096ca5e4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 2);
    return;
  }
  func_0x0001096ca5d0();
  FUN_109d035c4();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 109d035fc; end: 109d03667;  */

void FUN_109d035fc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_109d035c4(param_1,param_4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 109d03668; end: 109d036af;  */

long * FUN_109d03668(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d036b0; end: 109d0376f;  */

undefined1  [16] FUN_109d036b0(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = **(uint **)(param_1 + 0x40);
  }
  uStack_10 = CONCAT44(param_2[1],param_2[3]);
  uStack_8 = CONCAT44(param_2[2],*param_2);
  uVar1 = *(uint *)((long)&uStack_10 + (long)(int)uVar4 * 4);
  uVar5 = **(uint **)(param_1 + 0x50);
  if ((int)(uVar5 + uVar1) < 0 == SCARRY4(uVar5,uVar1)) {
    if ((int)uVar5 < 0) {
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = (int)uVar5 / (int)uVar1;
      }
      iVar2 = (uVar5 - iVar2 * uVar1) + uVar1;
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = iVar2 / (int)uVar1;
      }
      uVar6 = (ulong)(iVar2 - iVar3 * uVar1);
    }
    else {
      if ((int)uVar1 <= (int)uVar5) {
        uVar5 = uVar1;
      }
      uVar6 = (ulong)uVar5;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar5 = (*(uint **)(param_1 + 0x50))[1];
  if ((int)uVar5 < (int)-uVar1) {
    uVar5 = 0xffffffff;
  }
  else if ((int)uVar5 < 0) {
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = (int)uVar5 / (int)uVar1;
    }
    iVar2 = (uVar5 - iVar2 * uVar1) + uVar1;
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = iVar2 / (int)uVar1;
    }
    uVar5 = iVar2 - iVar3 * uVar1;
  }
  else if ((int)uVar1 <= (int)uVar5) {
    uVar5 = uVar1;
  }
  auVar7._0_8_ = (ulong)uVar4 | uVar6 << 0x20;
  auVar7._8_4_ = uVar5;
  auVar7._12_4_ = 0;
  return auVar7;
}



/* Entry: 109d03770; end: 109d03827;  */

undefined1  [16]
FUN_109d03770(long param_1,long param_2,int param_3,undefined8 *param_4,long *param_5,
             undefined4 param_6,undefined1 param_7)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  char cVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined4 auStack_7c [3];
  uint auStack_20 [2];
  undefined8 uStack_18;
  
  lVar11 = 0x68;
  if ((int)param_2 != 1) {
    lVar11 = 0x58;
  }
  piVar10 = (int *)(param_1 + lVar11);
  if (*piVar10 == 4) {
    uVar15 = (*(undefined8 **)(piVar10 + 2))[1];
    uVar14 = **(undefined8 **)(piVar10 + 2);
  }
  else {
    if ((*piVar10 != 5) || (piVar10 = *(int **)(piVar10 + 2), *piVar10 != 0)) {
      puVar7 = (undefined8 *)&UNK_10f5abb35;
      FUN_109cd880c();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      auStack_7c[0] = param_6;
      func_0x000109379218();
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      func_0x000109379218(puVar7 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                          (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                          0x2e8ba2e8ba2e8ba3);
      if (*(char *)(param_2 + 0x47) < '\0') {
        func_0x000107c3192c(puVar7 + 6,*(undefined8 *)(param_2 + 0x30),
                            *(undefined8 *)(param_2 + 0x38));
      }
      else {
        uVar15 = *(undefined8 *)(param_2 + 0x38);
        uVar14 = *(undefined8 *)(param_2 + 0x30);
        puVar7[8] = *(undefined8 *)(param_2 + 0x40);
        puVar7[7] = uVar15;
        puVar7[6] = uVar14;
      }
      *(undefined1 *)(puVar7 + 0xc) = 3;
      cVar9 = *(char *)(param_4 + 3);
      if (cVar9 == '\x02') {
        uVar14 = *param_4;
        puVar7[10] = param_4[1];
        puVar7[9] = uVar14;
        *param_4 = 0;
        param_4[1] = 0;
      }
      else if (cVar9 == '\x01') {
        uVar15 = param_4[1];
        uVar14 = *param_4;
        puVar7[0xb] = param_4[2];
        puVar7[10] = uVar15;
        puVar7[9] = uVar14;
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = 0;
        cVar9 = *(char *)(param_4 + 3);
      }
      *(char *)(puVar7 + 0xc) = cVar9;
      uVar4 = *(undefined2 *)(param_4 + 4);
      uVar3 = *(undefined1 *)((long)param_4 + 0x22);
      puVar7[0xe] = 0;
      *(undefined1 *)((long)puVar7 + 0x6a) = uVar3;
      *(undefined2 *)(puVar7 + 0xd) = uVar4;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      func_0x0001092cc0dc(puVar7 + 0xe,*param_5,param_5[1],param_5[1] - *param_5 >> 2);
      lVar11 = param_5[3];
      *(undefined4 *)((long)puVar7 + 0x8b) = *(undefined4 *)((long)param_5 + 0x1b);
      *(int *)(puVar7 + 0x11) = (int)lVar11;
      if (*(char *)((long)param_5 + 0x37) < '\0') {
        func_0x000107c3192c(puVar7 + 0x12,param_5[4],param_5[5]);
      }
      else {
        lVar16 = param_5[5];
        lVar11 = param_5[4];
        puVar7[0x14] = param_5[6];
        puVar7[0x13] = lVar16;
        puVar7[0x12] = lVar11;
      }
      lVar16 = param_5[8];
      lVar11 = param_5[7];
      lVar18 = param_5[10];
      lVar17 = param_5[9];
      lVar20 = param_5[0xc];
      lVar19 = param_5[0xb];
      uVar15 = *(undefined8 *)((long)param_5 + 0x69);
      uVar14 = *(undefined8 *)((long)param_5 + 0x61);
      puVar7[0x1d] = 0;
      *(undefined8 *)((long)puVar7 + 0xd9) = uVar15;
      *(undefined8 *)((long)puVar7 + 0xd1) = uVar14;
      puVar7[0x18] = lVar18;
      puVar7[0x17] = lVar17;
      puVar7[0x1a] = lVar20;
      puVar7[0x19] = lVar19;
      puVar7[0x16] = lVar16;
      puVar7[0x15] = lVar11;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      *(undefined1 *)(puVar7 + 0x20) = param_7;
      if (param_3 != 1) {
        func_0x00010952d0c4(&UNK_10e04018c,&UNK_10f5abb59,&UNK_10f5abb67);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109d03a1c);
        (*pcVar6)();
      }
      puVar8 = auStack_7c;
      func_0x00010937ddc4(puVar7 + 0x1d,puVar8);
      *(undefined1 *)((long)puVar7 + 0x6a) = 1;
      auVar21._8_8_ = puVar8;
      auVar21._0_8_ = puVar7;
      return auVar21;
    }
    uStack_18 = *(undefined8 *)(piVar10 + 3);
    auStack_20[0] = (uint)*(undefined8 *)(piVar10 + 1);
    auStack_20[1] = (uint)((ulong)*(undefined8 *)(piVar10 + 1) >> 0x20);
    lVar11 = 4;
    puVar13 = auStack_20;
    uVar12 = auStack_20[0];
    do {
      uVar2 = *(uint *)((long)auStack_20 + lVar11);
      puVar1 = (uint *)((long)auStack_20 + lVar11);
      if (uVar12 <= uVar2) {
        puVar1 = puVar13;
        uVar2 = uVar12;
      }
      uVar12 = uVar2;
      lVar11 = lVar11 + 4;
      puVar13 = puVar1;
    } while (lVar11 != 0x10);
    uVar12 = *puVar1;
    uVar14 = CONCAT44(auStack_20[1] - uVar12,auStack_20[0] - uVar12);
    uVar15 = CONCAT44((int)((ulong)uStack_18 >> 0x20) - uVar12,(int)uStack_18 - uVar12);
  }
  auVar5._8_8_ = uVar15;
  auVar5._0_8_ = uVar14;
  return auVar5;
}



/* Entry: 109d03828; end: 109d03aab;  */

undefined8 *
FUN_109d03828(undefined8 *param_1,long param_2,int param_3,undefined8 *param_4,long *param_5,
             undefined4 param_6,undefined1 param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 auStack_5c [3];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  auStack_5c[0] = param_6;
  func_0x000109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000109379218(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar7;
    param_1[6] = uVar5;
  }
  *(undefined1 *)(param_1 + 0xc) = 3;
  cVar4 = *(char *)(param_4 + 3);
  if (cVar4 == '\x02') {
    uVar5 = *param_4;
    param_1[10] = param_4[1];
    param_1[9] = uVar5;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else if (cVar4 == '\x01') {
    uVar7 = param_4[1];
    uVar5 = *param_4;
    param_1[0xb] = param_4[2];
    param_1[10] = uVar7;
    param_1[9] = uVar5;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    cVar4 = *(char *)(param_4 + 3);
  }
  *(char *)(param_1 + 0xc) = cVar4;
  uVar2 = *(undefined2 *)(param_4 + 4);
  uVar1 = *(undefined1 *)((long)param_4 + 0x22);
  param_1[0xe] = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar1;
  *(undefined2 *)(param_1 + 0xd) = uVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  func_0x0001092cc0dc(param_1 + 0xe,*param_5,param_5[1],param_5[1] - *param_5 >> 2);
  lVar6 = param_5[3];
  *(undefined4 *)((long)param_1 + 0x8b) = *(undefined4 *)((long)param_5 + 0x1b);
  *(int *)(param_1 + 0x11) = (int)lVar6;
  if (*(char *)((long)param_5 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 0x12,param_5[4],param_5[5]);
  }
  else {
    lVar8 = param_5[5];
    lVar6 = param_5[4];
    param_1[0x14] = param_5[6];
    param_1[0x13] = lVar8;
    param_1[0x12] = lVar6;
  }
  lVar8 = param_5[8];
  lVar6 = param_5[7];
  lVar10 = param_5[10];
  lVar9 = param_5[9];
  lVar12 = param_5[0xc];
  lVar11 = param_5[0xb];
  uVar7 = *(undefined8 *)((long)param_5 + 0x69);
  uVar5 = *(undefined8 *)((long)param_5 + 0x61);
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = uVar7;
  *(undefined8 *)((long)param_1 + 0xd1) = uVar5;
  param_1[0x18] = lVar10;
  param_1[0x17] = lVar9;
  param_1[0x1a] = lVar12;
  param_1[0x19] = lVar11;
  param_1[0x16] = lVar8;
  param_1[0x15] = lVar6;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = param_7;
  if (param_3 == 1) {
    func_0x00010937ddc4(param_1 + 0x1d,auStack_5c);
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    return param_1;
  }
  func_0x00010952d0c4(&UNK_10e04018c,&UNK_10f5abb59,&UNK_10f5abb67);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109d03a1c);
  (*pcVar3)();
}



/* Entry: 109d03aac; end: 109d03d43;  */

undefined8 *
FUN_109d03aac(undefined8 *param_1,long param_2,int param_3,undefined8 *param_4,long *param_5,
             long *param_6,undefined1 param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000109379218(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar7;
    param_1[6] = uVar5;
  }
  *(undefined1 *)(param_1 + 0xc) = 3;
  cVar4 = *(char *)(param_4 + 3);
  if (cVar4 == '\x02') {
    uVar5 = *param_4;
    param_1[10] = param_4[1];
    param_1[9] = uVar5;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else if (cVar4 == '\x01') {
    uVar7 = param_4[1];
    uVar5 = *param_4;
    param_1[0xb] = param_4[2];
    param_1[10] = uVar7;
    param_1[9] = uVar5;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    cVar4 = *(char *)(param_4 + 3);
  }
  *(char *)(param_1 + 0xc) = cVar4;
  uVar2 = *(undefined2 *)(param_4 + 4);
  uVar1 = *(undefined1 *)((long)param_4 + 0x22);
  param_1[0xe] = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar1;
  *(undefined2 *)(param_1 + 0xd) = uVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  func_0x0001092cc0dc(param_1 + 0xe,*param_6,param_6[1],param_6[1] - *param_6 >> 2);
  lVar6 = param_6[3];
  *(undefined4 *)((long)param_1 + 0x8b) = *(undefined4 *)((long)param_6 + 0x1b);
  *(int *)(param_1 + 0x11) = (int)lVar6;
  if (*(char *)((long)param_6 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 0x12,param_6[4],param_6[5]);
  }
  else {
    lVar8 = param_6[5];
    lVar6 = param_6[4];
    param_1[0x14] = param_6[6];
    param_1[0x13] = lVar8;
    param_1[0x12] = lVar6;
  }
  lVar8 = param_6[8];
  lVar6 = param_6[7];
  lVar10 = param_6[10];
  lVar9 = param_6[9];
  lVar12 = param_6[0xc];
  lVar11 = param_6[0xb];
  uVar7 = *(undefined8 *)((long)param_6 + 0x69);
  uVar5 = *(undefined8 *)((long)param_6 + 0x61);
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = uVar7;
  *(undefined8 *)((long)param_1 + 0xd1) = uVar5;
  param_1[0x18] = lVar10;
  param_1[0x17] = lVar9;
  param_1[0x1a] = lVar12;
  param_1[0x19] = lVar11;
  param_1[0x16] = lVar8;
  param_1[0x15] = lVar6;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  func_0x0001094078b0(param_1 + 0x1d,*param_5,param_5[1],param_5[1] - *param_5 >> 2);
  *(undefined1 *)(param_1 + 0x20) = param_7;
  if (param_3 == 1) {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    return param_1;
  }
  func_0x00010952d0c4(&UNK_10e04018c,&UNK_10f5abb59,&UNK_10f5abb67);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109d03cb0);
  (*pcVar3)();
}



/* Entry: 109d03d44; end: 109d03f7f;  */

undefined8 *
FUN_109d03d44(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
             undefined1 param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000109379218(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                      (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar6;
    param_1[6] = uVar4;
  }
  *(undefined1 *)(param_1 + 0xc) = 3;
  cVar3 = *(char *)(param_3 + 3);
  if (cVar3 == '\x02') {
    uVar4 = *param_3;
    param_1[10] = param_3[1];
    param_1[9] = uVar4;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else if (cVar3 == '\x01') {
    uVar6 = param_3[1];
    uVar4 = *param_3;
    param_1[0xb] = param_3[2];
    param_1[10] = uVar6;
    param_1[9] = uVar4;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    cVar3 = *(char *)(param_3 + 3);
  }
  *(char *)(param_1 + 0xc) = cVar3;
  uVar2 = *(undefined2 *)(param_3 + 4);
  uVar1 = *(undefined1 *)((long)param_3 + 0x22);
  param_1[0xe] = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar1;
  *(undefined2 *)(param_1 + 0xd) = uVar2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  func_0x0001092cc0dc(param_1 + 0xe,*param_5,param_5[1],param_5[1] - *param_5 >> 2);
  lVar5 = param_5[3];
  *(undefined4 *)((long)param_1 + 0x8b) = *(undefined4 *)((long)param_5 + 0x1b);
  *(int *)(param_1 + 0x11) = (int)lVar5;
  if (*(char *)((long)param_5 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 0x12,param_5[4],param_5[5]);
  }
  else {
    lVar7 = param_5[5];
    lVar5 = param_5[4];
    param_1[0x14] = param_5[6];
    param_1[0x13] = lVar7;
    param_1[0x12] = lVar5;
  }
  lVar7 = param_5[8];
  lVar5 = param_5[7];
  lVar9 = param_5[10];
  lVar8 = param_5[9];
  lVar11 = param_5[0xc];
  lVar10 = param_5[0xb];
  uVar6 = *(undefined8 *)((long)param_5 + 0x69);
  uVar4 = *(undefined8 *)((long)param_5 + 0x61);
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = uVar6;
  *(undefined8 *)((long)param_1 + 0xd1) = uVar4;
  param_1[0x18] = lVar9;
  param_1[0x17] = lVar8;
  param_1[0x1a] = lVar11;
  param_1[0x19] = lVar10;
  param_1[0x16] = lVar7;
  param_1[0x15] = lVar5;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  func_0x0001094078b0();
  *(undefined1 *)(param_1 + 0x20) = param_6;
  return param_1;
}



/* Entry: 109d03f80; end: 109d03fe7;  */

undefined8 * FUN_109d03f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[4] = param_2[2];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  return param_1;
}



/* Entry: 109d03fe8; end: 109d04497;  */

void FUN_109d03fe8(undefined8 *param_1,long param_2,long *param_3,int param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long *plStack_88;
  code *pcStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 *puStack_48;
  
  FUN_109d0a114(*param_3 + 0x48);
  if (param_4 == 0) {
    puVar7 = (undefined8 *)0xb8;
    __Znwm();
    puVar7[2] = 0;
    puVar7[3] = 0x32aaaba7;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0x3cb0b1bb;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    *(undefined8 *)((long)puVar7 + 0x84) = 0;
    *(undefined8 *)((long)puVar7 + 0x7c) = 0;
    *puVar7 = &PTR_FUN_110b3e4b0;
    puVar7[1] = 0;
    plVar5 = (long *)param_3[1];
    lStack_b8 = param_3[1];
    lStack_c0 = *param_3;
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_b0 = puVar7;
    if (*(char *)(param_2 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_e0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18)
                         );
    }
    else {
      uStack_d8 = *(undefined8 *)(param_2 + 0x18);
      uStack_e0 = *(undefined8 *)(param_2 + 0x10);
      lStack_d0 = *(long *)(param_2 + 0x20);
    }
    FUN_109d04498(&pcStack_80,&lStack_c0,&uStack_e0);
    FUN_109d0537c(puVar7,&pcStack_80);
    if ((long)puStack_68 < 0) {
      __ZdlPv(lStack_78);
    }
    pcVar4 = pcStack_80;
    pcStack_80 = (code *)0x0;
    if (pcVar4 != (code *)0x0) {
      FUN_109cda590();
      __ZdlPv();
    }
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        lVar9 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puStack_b0 == (undefined8 *)0x0) {
      func_0x0001094362d4(3);
      goto LAB_109d04470;
    }
    *param_1 = puStack_b0;
    func_0x0001094a4db4();
    FUN_109d055c4(&puStack_b0);
  }
  else {
    lVar9 = *param_3;
    lVar1 = param_3[1];
    if (lVar1 != 0) {
      plVar5 = (long *)(lVar1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(char *)(param_2 + 0x27) < '\0') {
      lStack_90 = lVar9;
      plStack_88 = (long *)lVar1;
      func_0x000107c3192c(&puStack_b0,*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(param_2 + 0x18));
    }
    else {
      lStack_a8 = *(long *)(param_2 + 0x18);
      puStack_b0 = *(undefined8 **)(param_2 + 0x10);
      lStack_a0 = *(long *)(param_2 + 0x20);
    }
    pcStack_80 = FUN_109d04498;
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    lStack_60 = lStack_a8;
    puStack_68 = puStack_b0;
    lStack_58 = lStack_a0;
    puStack_b0 = (undefined8 *)0x0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    plVar5 = (long *)0xe8;
    lStack_78 = lVar9;
    plStack_70 = (long *)lVar1;
    __Znwm();
    plVar10 = plVar5 + 1;
    *plVar10 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0x32aaaba7;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0x3cb0b1bb;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    *(undefined8 *)((long)plVar5 + 0x84) = 0;
    *(undefined8 *)((long)plVar5 + 0x7c) = 0;
    *plVar5 = (long)&PTR_DAT_110b3e450;
    plVar5[0x17] = (long)FUN_109d04498;
    plVar5[0x18] = lVar9;
    plVar5[0x19] = lVar1;
    lStack_78 = 0;
    plStack_70 = (long *)0x0;
    plVar5[0x1c] = lStack_58;
    plVar5[0x1b] = lStack_60;
    plVar5[0x1a] = (long)puStack_68;
    lStack_60 = 0;
    lStack_58 = 0;
    puStack_68 = (undefined8 *)0x0;
    uVar6 = 8;
    __Znwm();
    __ZNSt3__115__thread_structC1Ev();
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *puVar7 = uVar6;
    puVar7[2] = 1;
    puVar7[1] = 0x18;
    puVar7[3] = plVar5;
    puVar8 = auStack_50;
    puStack_48 = puVar7;
    _pthread_create(puVar8,0,FUN_109d05500,puVar7);
    if ((int)puVar8 != 0) {
      __ZNSt3__120__throw_system_errorEiPKc();
LAB_109d04470:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109d04474);
      (*pcVar4)();
    }
    __ZNSt3__16thread6detachEv(auStack_50);
    __ZNSt3__16threadD1Ev(auStack_50);
    *param_1 = plVar5;
    func_0x0001094a4db4(plVar5);
    do {
      lVar9 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if (lStack_58 < 0) {
      __ZdlPv(puStack_68);
    }
    plVar5 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar10 = plStack_70 + 1;
      do {
        lVar9 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (lStack_a0 < 0) {
      __ZdlPv(puStack_b0);
    }
    plVar5 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar9 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 109d04498; end: 109d04e33;  */

void FUN_109d04498(undefined **param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined1 auStack_16c [3];
  undefined1 uStack_169;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined ***pppuStack_128;
  long *plStack_120;
  long lStack_118;
  long **pplStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  auStack_16c[0] = 0;
  uStack_169 = 0;
  if (*(char *)(param_3 + 0x17) < '\0') {
    if (*(long *)(param_3 + 8) == 0) goto LAB_109d04b64;
LAB_109d044f4:
    ppuVar8 = (undefined **)*param_2;
    piVar13 = (int *)ppuVar8[0x1d];
    piVar2 = (int *)ppuVar8[0x1e];
    if (piVar13 != piVar2) {
      do {
        FUN_109d05bec(ppuVar8,piVar13,auStack_16c);
        if (((ulong)ppuVar8 & 1) != 0) {
          uVar11 = 0;
          lVar14 = *param_2;
          bVar6 = true;
          do {
            bVar10 = bVar6;
            uStack_180 = uStack_180 & 0xffffffffffffff00;
            puStack_198 = (undefined *)0x0;
            ppuStack_1a0 = (undefined **)0x0;
            puStack_188 = (undefined *)0x0;
            puStack_190 = (undefined *)0x0;
            pppuStack_128 = &ppuStack_1a0;
            func_0x000107c31940(&lStack_150,"");
            uStack_138 = 0;
            piVar9 = piVar13;
            FUN_109d065b4();
            if ((int)piVar9 != 0) {
              FUN_109d066c8(&lStack_100,lVar14,piVar13,param_3,uVar11);
              if (lStack_140 < 0) {
                __ZdlPv(lStack_150);
              }
              uStack_148 = uStack_f8;
              lStack_150 = lStack_100;
              lStack_140 = lStack_f0;
              uStack_138 = (undefined1)lStack_e8;
            }
            if (*(char *)(lVar14 + 0x100) == '\0') {
              lStack_158 = 0;
              FUN_109d04f68(&lStack_100,&lStack_158,&lStack_150,uStack_138);
              FUN_109d04fd8(&pppuStack_128,&lStack_100);
              if (lStack_e8 < 0) {
                __ZdlPv(uStack_f8);
              }
              lVar5 = lStack_100;
              lStack_100 = 0;
              if (lVar5 != 0) {
                FUN_109cda590();
                __ZdlPv();
              }
              lVar5 = lStack_158;
              lStack_158 = 0;
            }
            else {
              plVar12 = &lStack_150;
              FUN_109d064c8(plVar12,*piVar13);
              if ((int)plVar12 == 0) {
                FUN_109d067ec(&lStack_160,lVar14,param_3);
                lVar5 = lStack_160;
                iVar3 = *piVar13;
                if (0x1ff < iVar3) {
                  if (iVar3 < 0x8000) {
                    if (iVar3 < 0x800) {
                      if ((iVar3 == 0x200) || (iVar3 == 0x400)) goto LAB_109d04888;
                    }
                    else if (((iVar3 == 0x800) || (iVar3 == 0x1000)) || (iVar3 == 0x2000))
                    goto LAB_109d04820;
                  }
                  else {
                    if (iVar3 < 0x40000) {
                      if ((iVar3 != 0x8000) && (iVar3 != 0x10000)) {
                        if (iVar3 == 0x20000) goto LAB_109d04888;
                        goto LAB_109d04714;
                      }
LAB_109d04820:
                      FUN_109cd2ef0(&lStack_100,lVar14);
                      FUN_109cd2ef0(&plStack_120,lVar14 + 0x18);
                      FUN_109cdac1c(lVar5,&lStack_150,iVar3,&lStack_100,&plStack_120);
                      pplStack_108 = &plStack_120;
                      func_0x000104c607c8(&pplStack_108);
                      plStack_120 = &lStack_100;
                      func_0x000104c607c8(&plStack_120);
                      goto LAB_109d048a0;
                    }
                    if (((iVar3 == 0x40000) || (iVar3 == 0x200000)) || (iVar3 == 0x80000))
                    goto LAB_109d04820;
                  }
LAB_109d04714:
                  func_0x00010952d0c4(&UNK_10f5a92e5,&UNK_10f5a92e5,&UNK_10f5abbbb);
                  goto LAB_109d04db0;
                }
                uVar4 = iVar3 - 2;
                if (uVar4 < 0x3f) {
                  if ((1L << ((ulong)uVar4 & 0x3f) & 0x400040004040c000U) == 0) {
                    if ((1L << ((ulong)uVar4 & 0x3f) & 0x41U) != 0) goto LAB_109d04820;
                    goto LAB_109d046e8;
                  }
                }
                else {
LAB_109d046e8:
                  if (((0x31 < iVar3 - 0x50U) ||
                      ((1L << ((ulong)(iVar3 - 0x50U) & 0x3f) & 0x3000000000001U) == 0)) &&
                     (iVar3 != 0x100)) goto LAB_109d04714;
                }
LAB_109d04888:
                FUN_109cdb058(lStack_160,lVar14 + 0x48,iVar3,lVar14);
LAB_109d048a0:
                lStack_168 = lVar5;
                FUN_109d04f68(&lStack_100,&lStack_168,&lStack_150,uStack_138);
                FUN_109d04fd8(&pppuStack_128,&lStack_100);
                if (lStack_e8 < 0) {
                  __ZdlPv(uStack_f8);
                }
                lVar5 = lStack_100;
                lStack_100 = 0;
                if (lVar5 != 0) {
                  FUN_109cda590();
                  __ZdlPv();
                }
                lVar5 = lStack_168;
                lStack_168 = 0;
              }
              else {
                uStack_e0 = 0;
                uStack_f8 = 0;
                lStack_100 = 0;
                lStack_e8 = 0;
                lStack_f0 = 0;
                FUN_109d04fd8(&pppuStack_128,&lStack_100);
                if (lStack_e8 < 0) {
                  __ZdlPv(uStack_f8);
                }
                lVar5 = lStack_100;
                lStack_100 = 0;
              }
            }
            if (lVar5 != 0) {
              FUN_109cda590();
              __ZdlPv();
            }
            if (lStack_140 < 0) {
              __ZdlPv(lStack_150);
            }
            if (ppuStack_1a0 != (undefined **)0x0) {
              FUN_109d05c78(lVar14);
              ppuVar8 = ppuStack_1a0;
              goto LAB_109d04abc;
            }
            puVar1 = puStack_190;
            if (-1 < (long)puStack_188) {
              puVar1 = (undefined *)((ulong)puStack_188 >> 0x38);
            }
            if (puVar1 != (undefined *)0x0) {
              ppuVar8 = (undefined **)0x0;
              goto LAB_109d04abc;
            }
            if ((long)puStack_188 < 0) {
              __ZdlPv(puStack_198);
              ppuVar8 = ppuStack_1a0;
              ppuStack_1a0 = (undefined **)0x0;
              if (ppuVar8 != (undefined **)0x0) {
                FUN_109cda590();
                __ZdlPv();
              }
            }
            else {
              ppuStack_1a0 = (undefined **)0x0;
            }
            if (*(char *)(lVar14 + 0x60) == '\x02') {
              plVar12 = *(long **)(lVar14 + 0x48);
              __ZNSt3__18ios_base5clearEj((long)plVar12 + *(long *)(*plVar12 + -0x18),0);
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar12,1,0xffffffff);
              uStack_80 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_f8 = 0;
              lStack_100 = 0;
              lStack_e8 = 0;
              lStack_f0 = 0;
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                        (plVar12,&lStack_100);
            }
            uVar11 = 1;
            bVar6 = false;
          } while (bVar10);
          ppuVar8 = (undefined **)0x0;
          uStack_180 = 0;
          puStack_188 = (undefined *)0x0;
          puStack_190 = (undefined *)0x0;
          puStack_198 = (undefined *)0x0;
LAB_109d04abc:
          ppuStack_1a0 = (undefined **)0x0;
          func_0x00010938cda4(param_1,ppuVar8);
          if (*(char *)((long)param_1 + 0x1f) < '\0') {
            __ZdlPv(param_1[1]);
          }
          ppuVar8 = ppuStack_1a0;
          param_1[2] = puStack_190;
          param_1[1] = puStack_198;
          param_1[3] = puStack_188;
          puStack_188 = (undefined *)((ulong)puStack_188 & 0xffffffffffffff);
          puStack_198 = (undefined *)((ulong)puStack_198 & 0xffffffffffffff00);
          *(undefined1 *)(param_1 + 4) = (undefined1)uStack_180;
          ppuStack_1a0 = (undefined **)0x0;
          if (ppuVar8 != (undefined **)0x0) {
            FUN_109cda590();
            __ZdlPv();
          }
          if (*param_1 != (undefined *)0x0) break;
          puVar1 = param_1[2];
          if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
            puVar1 = (undefined *)(ulong)*(byte *)((long)param_1 + 0x1f);
          }
          if (puVar1 != (undefined *)0x0) break;
        }
        piVar13 = piVar13 + 1;
        if (piVar13 == piVar2) break;
        ppuVar8 = (undefined **)*param_2;
      } while( true );
    }
  }
  else {
    if (*(char *)(param_3 + 0x17) != '\0') goto LAB_109d044f4;
LAB_109d04b64:
    ppuVar8 = &PTR_PTR_1132feac0;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132feac0);
  }
  lVar14 = *param_2;
  if (*(char *)(lVar14 + 0x100) != '\0' && *param_1 == (undefined *)0x0) {
    puVar1 = param_1[2];
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      puVar1 = (undefined *)(ulong)*(byte *)((long)param_1 + 0x1f);
    }
    if (puVar1 == (undefined *)0x0) {
      uVar4 = *(byte *)(lVar14 + 0x6a) - 1;
      ppuStack_1a0 = param_1;
      if ((uVar4 < 7) && ((0x57U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
        uVar4 = *(uint *)(&UNK_10e04030c + ((ulong)uVar4 & 0xff) * 4);
        FUN_109cd2af4();
        if ((*(uint *)(ppuVar8 + 8) & uVar4) == 0) goto LAB_109d04ca4;
        ppuVar8 = &PTR_PTR_1132feb00;
        FUN_10ae079a0(0,&PTR_PTR_1132feb00);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132feb00);
        FUN_109d067ec(&lStack_100,lVar14,param_3);
        func_0x00010938cda4(param_1,lStack_100);
        if (*(char *)(lVar14 + 0x60) == '\x02') {
          plVar12 = *(long **)(lVar14 + 0x48);
          __ZNSt3__18ios_base5clearEj((long)plVar12 + *(long *)(*plVar12 + -0x18),0);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar12,1,0xffffffff);
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          lStack_100 = 0;
          lStack_e8 = 0;
          lStack_f0 = 0;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                    (plVar12,&lStack_100);
        }
        FUN_109cdb058(*param_1,lVar14 + 0x48,uVar4,lVar14);
        *(undefined1 *)(param_1 + 4) = 0;
      }
      else {
LAB_109d04ca4:
        uStack_e0 = 0;
        uStack_f8 = 0;
        lStack_100 = 0;
        lStack_e8 = 0;
        lStack_f0 = 0;
        FUN_109d04fd8(&ppuStack_1a0,&lStack_100);
        if (lStack_e8 < 0) {
          __ZdlPv(uStack_f8);
        }
        lVar14 = lStack_100;
        lStack_100 = 0;
        if (lVar14 != 0) {
          FUN_109cda590();
          __ZdlPv();
        }
      }
      if (*param_1 == (undefined *)0x0) {
        puVar1 = param_1[2];
        if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
          puVar1 = (undefined *)(ulong)*(byte *)((long)param_1 + 0x1f);
        }
        if (puVar1 == (undefined *)0x0) goto LAB_109d04d44;
      }
      FUN_109d05c78(*param_2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109d04d44:
  lStack_100 = CONCAT71(lStack_100._1_7_,*(undefined1 *)(*param_2 + 0x6a));
  plVar12 = (long *)&UNK_110b3e718;
  FUN_109d0e740(&UNK_110b3e718,&lStack_100);
  lStack_118 = plVar12[1];
  plStack_120 = (long *)*plVar12;
  FUN_109d04e34(&lStack_150,&plStack_120);
  func_0x00010928a5e0(&ppuStack_1a0,&UNK_10f5abb91,&lStack_150);
  func_0x000109259240(&lStack_100,&ppuStack_1a0,&UNK_10f5abbac);
  FUN_109cd45b4(&UNK_10f5abb81,&UNK_10f5abb81,&lStack_100);
LAB_109d04db0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109d04db4);
  (*pcVar7)();
}



/* Entry: 109d04e34; end: 109d04ecf;  */

ulong * FUN_109d04e34(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong auStack_f0 [18];
  ulong uStack_60;
  
  uVar3 = param_2[1];
  if (0x7ffffffffffffff7 < uVar3) {
    func_0x000104c4f6b8();
    puVar1 = auStack_f0;
    auStack_f0[0x11] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
    uStack_60 = uVar3;
    __ZNSt3__18ios_base5clearEj((long)param_1 + *(long *)(*param_1 - 0x18),0);
    puVar2 = (ulong *)0xffffffff;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_1,1);
    auStack_f0[0x10] = 0;
    auStack_f0[0xd] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xf] = 0;
    auStack_f0[0xe] = 0;
    auStack_f0[9] = 0;
    auStack_f0[8] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[10] = 0;
    auStack_f0[5] = 0;
    auStack_f0[4] = 0;
    auStack_f0[7] = 0;
    auStack_f0[6] = 0;
    auStack_f0[1] = 0;
    auStack_f0[0] = 0;
    auStack_f0[3] = 0;
    auStack_f0[2] = 0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != auStack_f0[0x11]) {
      ___stack_chk_fail();
      uVar3 = *puVar1;
      *puVar1 = 0;
      *param_1 = uVar3;
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        func_0x000107c3192c(param_1 + 1,*puVar2,puVar2[1]);
      }
      else {
        uVar5 = puVar2[1];
        uVar3 = *puVar2;
        param_1[3] = puVar2[2];
        param_1[2] = uVar5;
        param_1[1] = uVar3;
      }
      *(undefined1 *)(param_1 + 4) = param_4;
      return param_1;
    }
    return param_1;
  }
  uVar4 = *param_2;
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    puVar2 = param_1;
    if (uVar3 == 0) goto LAB_109d04eb0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((uVar3 | 7) != 0x17) {
      puVar1 = (ulong *)((uVar3 | 7) + 1);
    }
    puVar2 = puVar1;
    __Znwm();
    param_1[1] = uVar3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,uVar4,uVar3);
LAB_109d04eb0:
  *(undefined1 *)((long)puVar2 + uVar3) = 0;
  return param_1;
}



/* Entry: 109d04ed0; end: 109d04f67;  */

long * FUN_109d04ed0(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long alStack_b0 [18];
  
  plVar1 = alStack_b0;
  alStack_b0[0x11] = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__18ios_base5clearEj((long)param_1 + *(long *)(*param_1 + -0x18),0);
  plVar2 = (long *)0xffffffff;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_1,1);
  alStack_b0[0x10] = 0;
  alStack_b0[0xd] = 0;
  alStack_b0[0xc] = 0;
  alStack_b0[0xf] = 0;
  alStack_b0[0xe] = 0;
  alStack_b0[9] = 0;
  alStack_b0[8] = 0;
  alStack_b0[0xb] = 0;
  alStack_b0[10] = 0;
  alStack_b0[5] = 0;
  alStack_b0[4] = 0;
  alStack_b0[7] = 0;
  alStack_b0[6] = 0;
  alStack_b0[1] = 0;
  alStack_b0[0] = 0;
  alStack_b0[3] = 0;
  alStack_b0[2] = 0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_b0[0x11]) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar3 = *plVar1;
  *plVar1 = 0;
  *param_1 = lVar3;
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*plVar2,plVar2[1]);
  }
  else {
    lVar4 = plVar2[1];
    lVar3 = *plVar2;
    param_1[3] = plVar2[2];
    param_1[2] = lVar4;
    param_1[1] = lVar3;
  }
  *(undefined1 *)(param_1 + 4) = param_4;
  return param_1;
}



/* Entry: 109d04f68; end: 109d04fd7;  */

undefined8 *
FUN_109d04f68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[3] = param_3[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  *(undefined1 *)(param_1 + 4) = param_4;
  return param_1;
}



/* Entry: 109d04fd8; end: 109d051af;  */

long FUN_109d04fd8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x00010938cda4(lVar2,uVar1);
  if (*(char *)(lVar2 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar2 + 8));
  }
  uVar3 = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x18) = param_2[3];
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(lVar2 + 0x20) = *(undefined1 *)(param_2 + 4);
  return lVar2;
}



/* Entry: 109d051b0; end: 109d051d7;  */

void FUN_109d051b0(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (*(char *)((long)param_1 + 0xaf) < '\0') {
      __ZdlPv(param_1[0x13]);
    }
    func_0x00010938cda4(param_1 + 0x12,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000109d05378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109d051d8; end: 109d05293;  */

void FUN_109d051d8(long param_1)

{
  long lVar1;
  long lStack_48;
  undefined8 uStack_40;
  char cStack_29;
  
  FUN_109d0543c(&lStack_48,param_1 + 0xb8);
  FUN_109d0537c(param_1,&lStack_48);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
  return;
}



/* Entry: 109d05294; end: 109d0537b;  */

void FUN_109d05294(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 109d0537c; end: 109d0543b;  */

void FUN_109d0537c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 == 0) {
      uVar2 = *param_2;
      *param_2 = 0;
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      uVar4 = param_2[2];
      uVar2 = param_2[1];
      *(undefined8 *)(param_1 + 0xa8) = param_2[3];
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
      *(undefined8 *)(param_1 + 0x98) = uVar2;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 4);
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
      return;
    }
  }
  func_0x0001094362d4(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d05428);
  (*pcVar1)();
}



/* Entry: 109d0543c; end: 109d054ff;  */

void FUN_109d0543c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[2];
  uStack_30 = param_2[1];
  uStack_48 = param_2[4];
  uStack_50 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  lStack_40 = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  (*(code *)*param_2)(param_1,&uStack_30,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 109d05500; end: 109d05583;  */

undefined8 FUN_109d05500(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar2 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar1,uVar2);
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar3 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar3 & 0xffffffff));
  }
  (*pcVar3)();
  func_0x0001094a35b0(param_1,0);
  __ZdlPv(param_1);
  return 0;
}



/* Entry: 109d05584; end: 109d055c3;  */

void FUN_109d05584(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001094a35b0(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109d055c4; end: 109d05693;  */

undefined8 * FUN_109d055c4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      uStack_38 = 0;
      lVar6 = plVar5[2];
      puVar4 = &uStack_38;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = (long *)*param_1;
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_60,4,puVar4);
        func_0x0001094a38bc(auStack_40,auStack_60);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_40);
        __ZNSt13exception_ptrD1Ev(auStack_40);
        __ZNSt3__112future_errorD1Ev(auStack_60);
        plVar5 = (long *)*param_1;
      }
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109d05694; end: 109d056f3;  */

void FUN_109d05694(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x40;
  __Znwm();
  FUN_109d056f4();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 109d056f4; end: 109d0573b;  */

undefined8 * FUN_109d056f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b3e4e0;
  FUN_109d03f80(param_1 + 3);
  return param_1;
}



/* Entry: 109d0573c; end: 109d0574b;  */

void FUN_109d0573c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3e4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d0574c; end: 109d0576b;  */

void FUN_109d0574c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3e4e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d0576c; end: 109d057ab;  */

void FUN_109d0576c(long param_1)

{
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109d057ac; end: 109d057af;  */

void FUN_109d057ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d057b0; end: 109d0585f;  */

void FUN_109d057b0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 109d05860; end: 109d059ef;  */

bool FUN_109d05860(long param_1,uint *param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  undefined1 *puStack_38;
  
  uVar4 = *param_2;
  lVar1 = param_1;
  if (uVar4 == 2) {
    if (*(char *)(param_1 + 0x8e) != '\x01') {
      uVar4 = 2;
      goto LAB_109d05994;
    }
    if (lRam00000001137e1c48 != -1) {
      puStack_38 = &uStack_41;
      ppuStack_40 = &puStack_38;
      lVar1 = 0x1137e1c48;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e1c48,&ppuStack_40,FUN_109d06954);
    }
    if ((bRam00000001137e1c40 & 1) != 0) {
      ppuVar2 = &PTR_PTR_1132feb40;
      FUN_10ae079a0(0,&PTR_PTR_1132feb40);
      FUN_10ae07cd4(ppuVar2,&PTR_PTR_1132feb40);
      return false;
    }
    uVar4 = *param_2;
  }
  if (uVar4 == 0x10) {
    lVar1 = param_3;
    FUN_109d059f0(param_3,param_1);
    if (*(char *)(param_3 + 1) != '\x01') {
      return false;
    }
    uVar4 = *param_2;
  }
  if (uVar4 == 0x11) {
    lVar1 = param_3;
    FUN_109d059f0(param_3,param_1);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      return false;
    }
    uVar4 = *param_2;
  }
  if (uVar4 == 0x81) {
    lVar1 = param_3;
    FUN_109d059f0(param_3,param_1);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      return false;
    }
    uVar4 = *param_2;
  }
  if (uVar4 == 0x80) {
    lVar1 = param_3;
    FUN_109d059f0(param_3,param_1);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      return false;
    }
    uVar4 = *param_2;
  }
LAB_109d05994:
  uVar3 = *(byte *)(param_1 + 0x6a) - 1;
  if (uVar3 < 7) {
    uVar3 = *(uint *)(&UNK_10e040328 + ((ulong)uVar3 & 0xff) * 4);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if ((uVar3 & uVar4) == 0) {
    return false;
  }
  FUN_109cd2af4();
  return (uVar4 & (*(uint *)(lVar1 + 0x40) ^ 0xffffffff)) == 0;
}



/* Entry: 109d059f0; end: 109d05beb;  */

ushort * FUN_109d059f0(ushort *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  ushort uVar9;
  long *plVar10;
  undefined **ppuStack_110;
  undefined1 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  int iVar4;
  
  iVar4 = (int)&ppuStack_110;
  iVar3 = (int)&ppuStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_1 + 3) & 1) == 0) {
    if (*(char *)(param_2 + 0x6a) == '\x01') {
      if (*(char *)(param_2 + 0x60) != '\x02') goto LAB_109d05bbc;
      plVar10 = *(long **)(param_2 + 0x48);
      uStack_108 = 1;
      ppuStack_110 = &PTR_FUN_110b3e648;
      puVar5 = (undefined8 *)0x108;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_110b3e2d8;
      puVar5[4] = 0;
      puVar5[6] = 0;
      puVar5[5] = 0;
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[0xc] = 0;
      puVar5[0xb] = 0;
      puVar5[0xe] = 0;
      puVar5[0xd] = 0;
      puVar5[0x10] = 0;
      puVar5[0xf] = 0;
      puVar5[0x12] = 0;
      puVar5[0x11] = 0;
      puVar5[0x14] = 0;
      puVar5[0x13] = 0;
      puVar5[0x16] = 0;
      puVar5[0x15] = 0;
      puVar5[0x18] = 0;
      puVar5[0x17] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x19] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1c] = &DAT_11383d918;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      puVar5[0x1d] = &DAT_11383d918;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      puStack_100 = puVar5 + 3;
      *puStack_100 = &PTR_DAT_110b2bad8;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      puStack_f8 = puVar5;
      FUN_109d0b818(&ppuStack_110,plVar10);
      __ZNSt3__18ios_base5clearEj((long)plVar10 + *(long *)(*plVar10 + -0x18),0);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar10,1,0xffffffff);
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                (plVar10,&uStack_c0);
      func_0x000109d0c350();
      func_0x000109d0c448();
      FUN_109d0b7a0(&ppuStack_110);
      uVar9 = 0x100;
      if (iVar4 == 0) {
        uVar9 = 0;
      }
      *(bool *)(param_1 + 1) = iVar3 != 0;
      *param_1 = uVar9 | 1;
      if ((*(byte *)((long)param_1 + 3) & 1) != 0) goto LAB_109d05b88;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
    }
    *(undefined1 *)((long)param_1 + 3) = 1;
  }
LAB_109d05b88:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_109d05bbc:
  puVar6 = (ushort *)&UNK_10f5abc87;
  puVar7 = (uint *)&UNK_10f5abc93;
  func_0x00010952d0c4(&UNK_10f5abc87,&UNK_10f5abc93,&UNK_10f5abca8);
  FUN_109d0b7a0(&ppuStack_110);
  __Unwind_Resume();
  FUN_109d05860();
  if ((int)puVar6 != 0) {
    uVar2 = *puVar7;
    puVar6 = (ushort *)0x1;
    if ((((uVar2 & 0x20190) == 0) &&
        (((uint)(uVar2 - 2 < 0x3f) & (uint)(0x4000000040000041 >> ((ulong)(uVar2 - 2) & 0x3f))) == 0
        )) && (uVar2 != 0x200)) {
      uVar8 = 1;
      if ((uVar2 & 0x1b800) == 0) {
        uVar8 = (uint)((uVar2 & 0x2c0000) != 0);
      }
      uVar1 = 1;
      if (uVar2 != 0x400) {
        uVar1 = uVar8;
      }
      puVar6 = (ushort *)(ulong)uVar1;
    }
  }
  return puVar6;
}



/* Entry: 109d05bec; end: 109d05c77;  */

void FUN_109d05bec(void)

{
  FUN_109d05860();
  return;
}



/* Entry: 109d05c78; end: 109d06293;  */

void FUN_109d05c78(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x23;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_190 [40];
  undefined4 uStack_168;
  undefined4 uStack_164;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  float fStack_70;
  
  if (((char)param_1[0x20] == '\x02') && (*(long *)(param_2 + 0x78) != 0)) {
    iVar3 = *(int *)(*(long *)(param_2 + 0x78) + 0x120);
    if (iVar3 < 0x200) {
      if (0x3e < iVar3 - 2U || (1L << ((ulong)(iVar3 - 2U) & 0x3f) & 0x4000000040000041U) == 0) {
        return;
      }
    }
    else if (iVar3 != 0x200) {
      if (iVar3 == 0x400) {
        if ((char)param_1[0x1c] != '\x01') {
          return;
        }
      }
      else {
        if (iVar3 != 0x1000) {
          return;
        }
        if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
          return;
        }
      }
    }
    plStack_88 = (long *)0x0;
    lStack_90 = 0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    fStack_70 = 1.0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0x3f800000;
    plVar15 = (long *)*param_1;
    plVar2 = (long *)param_1[1];
    if (plVar15 != plVar2) {
      do {
        plVar11 = &lStack_90;
        func_0x000107c31944(plVar11,plVar15);
        plVar10 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          uVar17 = (long)plStack_88 - 1;
          if (((ulong)plStack_88 & uVar17) == 0) {
            unaff_x23 = (long *)(uVar17 & (ulong)plVar11);
          }
          else {
            unaff_x23 = plVar11;
            if (plStack_88 <= plVar11) {
              uVar4 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar4 = (ulong)plVar11 / (ulong)plStack_88;
              }
              unaff_x23 = (long *)((long)plVar11 - uVar4 * (long)plStack_88);
            }
          }
          puVar8 = *(undefined8 **)(lStack_90 + (long)unaff_x23 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            for (plVar16 = (long *)*puVar8; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
              plVar9 = (long *)plVar16[1];
              if (plVar9 == plVar11) {
                plVar9 = &lStack_90;
                func_0x000104c4fbc4(plVar9,plVar16 + 2,plVar15);
                if (((ulong)plVar9 & 1) != 0) goto LAB_109d06068;
              }
              else {
                if (((ulong)plVar10 & uVar17) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar17);
                }
                else if (plVar10 <= plVar9) {
                  uVar4 = 0;
                  if (plVar10 != (long *)0x0) {
                    uVar4 = (ulong)plVar9 / (ulong)plVar10;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar4 * (long)plVar10);
                }
                if (plVar9 != unaff_x23) break;
              }
            }
          }
        }
        plVar16 = (long *)0x40;
        __Znwm();
        plStack_110 = &lStack_90;
        uStack_108 = 0;
        *plVar16 = 0;
        plVar16[1] = (long)plVar11;
        plStack_118 = plVar16;
        if (*(char *)((long)plVar15 + 0x17) < '\0') {
          func_0x000107c3192c(plVar16 + 2,*plVar15,plVar15[1]);
        }
        else {
          lVar18 = plVar15[1];
          lVar7 = *plVar15;
          plVar16[4] = plVar15[2];
          plVar16[3] = lVar18;
          plVar16[2] = lVar7;
        }
        plVar16[5] = 0;
        plVar16[6] = 0;
        plVar16[7] = 0;
        uStack_108 = CONCAT71(uStack_108._1_7_,1);
        if ((plVar10 == (long *)0x0) || (fStack_70 * (float)plVar10 < (float)(uStack_78 + 1))) {
          uVar17 = 1;
          if ((long *)0x2 < plVar10) {
            uVar17 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
          }
          plVar10 = (long *)(uVar17 | (long)plVar10 << 1);
          plVar9 = (long *)(long)((float)(uStack_78 + 1) / fStack_70);
          if (plVar10 <= plVar9) {
            plVar10 = plVar9;
          }
          if ((long)plVar10 - 1U == 0) {
            plVar10 = (long *)0x2;
          }
          else if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar9 = plStack_88;
          if (plStack_88 < plVar10) {
LAB_109d05e88:
            if ((ulong)plVar10 >> 0x3d != 0) {
              func_0x000104c4f740();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x109d06224);
              (*pcVar6)();
            }
            lVar7 = (long)plVar10 << 3;
            __Znwm();
            bVar1 = lStack_90 != 0;
            lStack_90 = lVar7;
            if (bVar1) {
              __ZdlPv();
            }
            plVar9 = (long *)0x0;
            do {
              *(undefined8 *)(lStack_90 + (long)plVar9 * 8) = 0;
              plVar9 = (long *)((long)plVar9 + 1);
            } while (plVar10 != plVar9);
            plStack_88 = plVar10;
            if (plStack_80 != (long *)0x0) {
              plVar9 = (long *)plStack_80[1];
              uVar17 = (long)plVar10 - 1;
              if (((ulong)plVar10 & uVar17) == 0) {
                plVar9 = (long *)((ulong)plVar9 & uVar17);
              }
              else if (plVar10 <= plVar9) {
                uVar4 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar4 = (ulong)plVar9 / (ulong)plVar10;
                }
                plVar9 = (long *)((long)plVar9 - uVar4 * (long)plVar10);
              }
              *(long ***)(lStack_90 + (long)plVar9 * 8) = &plStack_80;
              plVar12 = (long *)*plStack_80;
              plVar5 = plStack_80;
              while (plVar12 != (long *)0x0) {
                plVar14 = (long *)plVar12[1];
                if (((ulong)plVar10 & uVar17) == 0) {
                  plVar14 = (long *)((ulong)plVar14 & uVar17);
                }
                else if (plVar10 <= plVar14) {
                  uVar4 = 0;
                  if (plVar10 != (long *)0x0) {
                    uVar4 = (ulong)plVar14 / (ulong)plVar10;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar4 * (long)plVar10);
                }
                plVar13 = plVar12;
                if (plVar14 != plVar9) {
                  if (*(long *)(lStack_90 + (long)plVar14 * 8) == 0) {
                    *(long **)(lStack_90 + (long)plVar14 * 8) = plVar5;
                    plVar9 = plVar14;
                  }
                  else {
                    *plVar5 = *plVar12;
                    *plVar12 = **(long **)(lStack_90 + (long)plVar14 * 8);
                    **(undefined8 **)(lStack_90 + (long)plVar14 * 8) = plVar12;
                    plVar13 = plVar5;
                  }
                }
                plVar5 = plVar13;
                plVar12 = (long *)*plVar13;
              }
            }
          }
          else if (plVar10 < plStack_88) {
            plVar12 = (long *)(long)((float)uStack_78 / fStack_70);
            if ((plStack_88 < (long *)0x3) || (((ulong)plStack_88 & (long)plStack_88 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar12) {
              plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
            }
            lVar7 = lStack_90;
            if (plVar10 <= plVar12) {
              plVar10 = plVar12;
            }
            if (plVar10 < plVar9) {
              if (plVar10 != (long *)0x0) goto LAB_109d05e88;
              lStack_90 = 0;
              if (lVar7 != 0) {
                __ZdlPv();
              }
              plStack_88 = (long *)0x0;
            }
          }
          plVar10 = plStack_88;
          if (((ulong)plStack_88 & (long)plStack_88 - 1U) == 0) {
            unaff_x23 = (long *)((long)plStack_88 - 1U & (ulong)plVar11);
          }
          else {
            unaff_x23 = plVar11;
            if (plStack_88 <= plVar11) {
              uVar17 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar17 = (ulong)plVar11 / (ulong)plStack_88;
              }
              unaff_x23 = (long *)((long)plVar11 - uVar17 * (long)plStack_88);
            }
          }
        }
        plVar11 = *(long **)(lStack_90 + (long)unaff_x23 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar16 = (long)plStack_80;
          *(long ***)(lStack_90 + (long)unaff_x23 * 8) = &plStack_80;
          plStack_80 = plVar16;
          if (*plVar16 != 0) {
            plVar11 = *(long **)(*plVar16 + 8);
            if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
              plVar11 = (long *)((ulong)plVar11 & (long)plVar10 - 1U);
            }
            else if (plVar10 <= plVar11) {
              uVar17 = 0;
              if (plVar10 != (long *)0x0) {
                uVar17 = (ulong)plVar11 / (ulong)plVar10;
              }
              plVar11 = (long *)((long)plVar11 - uVar17 * (long)plVar10);
            }
            *(long **)(lStack_90 + (long)plVar11 * 8) = plVar16;
          }
        }
        else {
          *plVar16 = *plVar11;
          *plVar11 = (long)plVar16;
        }
        uStack_78 = uStack_78 + 1;
LAB_109d06068:
        plStack_118 = (long *)CONCAT44(plStack_118._4_4_,0x3f000000);
        func_0x00010954da28(plVar16 + 5,
                            (int)plVar15[4] * *(int *)((long)plVar15 + 0x24) *
                            *(int *)((long)plVar15 + 0x1c) * (int)plVar15[3],&plStack_118);
        lVar7 = param_2;
        func_0x000109cdb550(param_2,plVar15);
        uStack_164 = (undefined4)((ulong)lVar7 >> 0x20);
        uStack_c8 = lVar7;
        if ((int)lVar7 - 9U < 6) {
          uStack_c8 = CONCAT44(uStack_164,1);
        }
        uStack_168 = 1;
        FUN_109d0f600(&plStack_118,plVar15 + 3,&uStack_168,plVar16[5]);
        FUN_109d0e828(&uStack_168,&plStack_118,&uStack_c8,0);
        func_0x00010955c3e0(&uStack_c0,plVar15,plVar15,&uStack_168);
        func_0x000105675c90(&uStack_168);
        func_0x000105675c90(&plStack_118);
        plVar15 = plVar15 + 0xb;
      } while (plVar15 != plVar2);
    }
    FUN_109cdb3f0(auStack_190,param_2,&uStack_c0,1);
    func_0x000109379fe8(auStack_190);
    func_0x000109379fe8(&uStack_c0);
    FUN_109d06c0c(&lStack_90);
  }
  return;
}



/* Entry: 109d06294; end: 109d063af;  */

void FUN_109d06294(void)

{
  undefined **ppuVar1;
  undefined1 **ppuVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 uVar9;
  undefined1 *apuStack_2f0 [2];
  char cStack_2d9;
  undefined1 uStack_2d1;
  undefined ***apppuStack_288 [2];
  char cStack_271;
  undefined **ppuStack_270;
  undefined1 auStack_268 [24];
  uint auStack_250 [96];
  undefined **appuStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d063b0(apppuStack_288);
  FUN_109d14f44(&ppuStack_270,apppuStack_288,0x14);
  puVar4 = auStack_268;
  func_0x000107c27ffc();
  if (puVar4 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              (auStack_268 + (long)(ppuStack_270[-3] + -8),
               *(uint *)((long)auStack_250 + (long)ppuStack_270[-3]) | 4);
  }
  ppuStack_270 = &PTR_DAT_11087cb40;
  appuStack_d0[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(auStack_268);
  ppuVar6 = &PTR_PTR_11087cb80;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_270);
  pppuVar5 = appuStack_d0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (cStack_271 < '\0') {
    pppuVar5 = apppuStack_288[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_271 < '\0') {
    __ZdlPv(apppuStack_288[0]);
  }
  __Unwind_Resume();
  ppuVar8 = apuStack_2f0;
  FUN_109cd2b88();
  ppuVar1 = pppuVar5[1];
  if (-1 < (char)*(byte *)((long)pppuVar5 + 0x17)) {
    ppuVar1 = (undefined **)(ulong)*(byte *)((long)pppuVar5 + 0x17);
  }
  ppuVar7 = ppuVar6;
  _strlen();
  func_0x000104c4f768(apuStack_2f0,(long)ppuVar1 + (long)ppuVar7,&uStack_2d1);
  ppuVar2 = (undefined1 **)apuStack_2f0[0];
  if (-1 < cStack_2d9) {
    ppuVar2 = apuStack_2f0;
  }
  if (ppuVar1 != (undefined **)0x0) {
    pppuVar3 = (undefined ***)*pppuVar5;
    if (-1 < *(char *)((long)pppuVar5 + 0x17)) {
      pppuVar3 = pppuVar5;
    }
    _memmove(ppuVar2,pppuVar3,ppuVar1);
  }
  if (ppuVar7 != (undefined **)0x0) {
    _memmove((undefined1 *)((long)ppuVar2 + (long)ppuVar1),ppuVar6,ppuVar7);
  }
  ((undefined1 *)((long)ppuVar2 + (long)ppuVar1))[(long)ppuVar7] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (apuStack_2f0,&UNK_10f5abcb9,7);
  uVar9 = *ppuVar8;
  extraout_x8[1] = ppuVar8[1];
  *extraout_x8 = uVar9;
  extraout_x8[2] = ppuVar8[2];
  ppuVar8[1] = (undefined1 *)0x0;
  ppuVar8[2] = (undefined1 *)0x0;
  *ppuVar8 = (undefined1 *)0x0;
  if (cStack_2d9 < '\0') {
    __ZdlPv(apuStack_2f0[0]);
  }
  return;
}



/* Entry: 109d063b0; end: 109d064c7;  */

void FUN_109d063b0(undefined8 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined1 *apuStack_60 [2];
  char cStack_49;
  undefined1 uStack_41;
  
  ppuVar5 = apuStack_60;
  FUN_109cd2b88();
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  lVar4 = param_3;
  _strlen();
  func_0x000104c4f768(apuStack_60,uVar1 + lVar4,&uStack_41);
  ppuVar2 = (undefined1 **)apuStack_60[0];
  if (-1 < cStack_49) {
    ppuVar2 = apuStack_60;
  }
  if (uVar1 != 0) {
    plVar3 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar3 = param_2;
    }
    _memmove(ppuVar2,plVar3,uVar1);
  }
  if (lVar4 != 0) {
    _memmove((undefined1 *)((long)ppuVar2 + uVar1),param_3,lVar4);
  }
  ((undefined1 *)((long)ppuVar2 + uVar1))[lVar4] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (apuStack_60,&UNK_10f5abcb9,7);
  uVar6 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = uVar6;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined1 *)0x0;
  ppuVar5[2] = (undefined1 *)0x0;
  *ppuVar5 = (undefined1 *)0x0;
  if (cStack_49 < '\0') {
    __ZdlPv(apuStack_60[0]);
  }
  return;
}



/* Entry: 109d064c8; end: 109d065b3;  */

int * FUN_109d064c8(void)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  int extraout_w8;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long alStack_2a0 [4];
  char cStack_279;
  undefined **appuStack_278 [2];
  undefined1 auStack_268 [120];
  long lStack_1f0;
  undefined **appuStack_d0 [19];
  long lStack_38;
  
  puVar7 = &stack0xfffffffffffffff0;
  plVar3 = alStack_2a0 + 2;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d063b0(alStack_2a0 + 2);
  FUN_109d14e6c(appuStack_278,alStack_2a0 + 2,0xc);
  appuStack_278[0] = &PTR_DAT_11087cf48;
  appuStack_d0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_268);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_278,&PTR_PTR_11087cf88);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  if (cStack_279 < '\0') {
    __ZdlPv(alStack_2a0[2]);
  }
  piVar4 = (int *)(ulong)(lStack_1f0 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return piVar4;
  }
  ___stack_chk_fail();
  if (cStack_279 < '\0') {
    __ZdlPv(alStack_2a0[2]);
  }
  pcVar8 = FUN_109d065b4;
  __Unwind_Resume();
  iVar5 = *piVar4;
  piVar4 = (int *)0x1;
  if (0x1ff < iVar5) goto LAB_109d06648;
  uVar1 = iVar5 - 2;
  if (uVar1 < 0x3f) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x400040004040c000U) != 0) {
      return (int *)0x0;
    }
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x41U) != 0) {
      return (int *)0x1;
    }
  }
  if ((0x31 < iVar5 - 0x50U || (1L << ((ulong)(iVar5 - 0x50U) & 0x3f) & 0x3000000000001U) == 0) &&
     (plVar2 = alStack_2a0 + 2, puVar6 = puVar7, iVar5 != 0x100)) {
    do {
      while( true ) {
        while( true ) {
          plVar3 = (long *)((long)plVar2 + -0x10);
          puVar7 = (undefined1 *)((long)plVar2 + -0x10);
          *(undefined1 **)((long)plVar2 + -0x10) = puVar6;
          *(code **)((long)plVar2 + -8) = pcVar8;
          piVar4 = (int *)&UNK_10f5abc19;
          pcVar8 = (code *)0x109d06648;
          func_0x00010952d0c4(&UNK_10f5abc19,&UNK_10f5abc19,&UNK_10f5abc2d);
          iVar5 = extraout_w8;
LAB_109d06648:
          plVar2 = plVar3;
          puVar6 = puVar7;
          if (0x7fff < iVar5) break;
          if (iVar5 < 0x800) {
            if (iVar5 == 0x200) {
              return (int *)0x0;
            }
            if (iVar5 == 0x400) {
              return (int *)0x0;
            }
          }
          else {
            if (iVar5 == 0x800) {
              return piVar4;
            }
            if (iVar5 == 0x1000) {
              return piVar4;
            }
            if (iVar5 == 0x2000) {
              return piVar4;
            }
          }
        }
        if (iVar5 < 0x40000) break;
        if (iVar5 == 0x40000) {
          return piVar4;
        }
        if (iVar5 == 0x80000) {
          return piVar4;
        }
        if (iVar5 == 0x200000) {
          return piVar4;
        }
      }
      if (iVar5 == 0x8000) {
        return piVar4;
      }
      if (iVar5 == 0x10000) {
        return piVar4;
      }
    } while (iVar5 != 0x20000);
  }
  return (int *)0x0;
}



/* Entry: 109d065b4; end: 109d066c7;  */

undefined * FUN_109d065b4(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int extraout_w8;
  int iVar4;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined8 unaff_x30;
  
  iVar4 = *param_1;
  puVar3 = (undefined *)0x1;
  if (0x1ff < iVar4) goto LAB_109d06648;
  uVar1 = iVar4 - 2;
  if (uVar1 < 0x3f) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x400040004040c000U) != 0) {
      return (undefined *)0x0;
    }
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x41U) != 0) {
      return (undefined *)0x1;
    }
  }
  if ((0x31 < iVar4 - 0x50U || (1L << ((ulong)(iVar4 - 0x50U) & 0x3f) & 0x3000000000001U) == 0) &&
     (puVar2 = (undefined1 *)register0x00000008, puVar5 = unaff_x29, iVar4 != 0x100)) {
    do {
      while( true ) {
        while( true ) {
          register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x10);
          unaff_x29 = puVar2 + -0x10;
          *(undefined1 **)(puVar2 + -0x10) = puVar5;
          *(undefined8 *)(puVar2 + -8) = unaff_x30;
          puVar3 = &UNK_10f5abc19;
          unaff_x30 = 0x109d06648;
          func_0x00010952d0c4(&UNK_10f5abc19,&UNK_10f5abc19,&UNK_10f5abc2d);
          iVar4 = extraout_w8;
LAB_109d06648:
          puVar2 = (undefined1 *)register0x00000008;
          puVar5 = unaff_x29;
          if (0x7fff < iVar4) break;
          if (iVar4 < 0x800) {
            if (iVar4 == 0x200) {
              return (undefined *)0x0;
            }
            if (iVar4 == 0x400) {
              return (undefined *)0x0;
            }
          }
          else {
            if (iVar4 == 0x800) {
              return puVar3;
            }
            if (iVar4 == 0x1000) {
              return puVar3;
            }
            if (iVar4 == 0x2000) {
              return puVar3;
            }
          }
        }
        if (iVar4 < 0x40000) break;
        if (iVar4 == 0x40000) {
          return puVar3;
        }
        if (iVar4 == 0x80000) {
          return puVar3;
        }
        if (iVar4 == 0x200000) {
          return puVar3;
        }
      }
      if (iVar4 == 0x8000) {
        return puVar3;
      }
      if (iVar4 == 0x10000) {
        return puVar3;
      }
    } while (iVar4 != 0x20000);
  }
  return (undefined *)0x0;
}



/* Entry: 109d066c8; end: 109d067eb;  */

void FUN_109d066c8(ulong *param_1,long param_2,int *param_3,long *param_4,ulong param_5)

{
  int iVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  long *plVar8;
  ulong *puVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 unaff_x27;
  ulong uVar17;
  undefined8 unaff_x28;
  undefined4 auStack_560 [2];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined3 uStack_544;
  char cStack_541;
  undefined8 uStack_540;
  undefined8 ****appppuStack_538 [2];
  char cStack_521;
  undefined8 ***pppuStack_520;
  undefined8 ****ppppuStack_518;
  undefined8 ***pppuStack_510;
  undefined8 ****ppppuStack_500;
  undefined8 **ppuStack_4f8;
  undefined8 uStack_4f0;
  undefined8 ****ppppuStack_4e0;
  undefined8 ***pppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  byte bStack_499;
  undefined8 **ppuStack_498;
  undefined8 ****ppppuStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined1 uStack_471;
  ulong uStack_470;
  undefined8 ***pppuStack_468;
  undefined8 ***pppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined3 uStack_b0;
  undefined1 uStack_ad;
  undefined3 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  if (*(byte *)(param_2 + 0x6a) - 2 < 4) {
    if (*(char *)(param_2 + 0x5f) < '\0') {
      func_0x000107c3192c(param_1,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
    }
    else {
      uVar17 = *(ulong *)(param_2 + 0x48);
      param_1[1] = *(ulong *)(param_2 + 0x50);
      *param_1 = uVar17;
      param_1[2] = *(ulong *)(param_2 + 0x58);
    }
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  iVar1 = *param_3;
  if (iVar1 == 2) {
    plVar4 = *(long **)(param_2 + 0x48);
    uStack_60 = (undefined1)unaff_x28;
    uStack_5f = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_58 = (undefined1)unaff_x27;
    uStack_57 = (undefined7)((ulong)unaff_x27 >> 8);
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar7 = (undefined8 ***)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_498 = pppuVar7;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacc00();
    _objc_release(puVar5);
    if (((uint)pppuVar7 & (uint)bStack_499 & 1) == 0) {
      FUN_109cda0d4(&UNK_10f5ac147,&UNK_10f5ac191,&UNK_10f5a8bcd);
      goto LAB_109d0d4c0;
    }
    puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      ppppuStack_490 = (undefined8 *****)0x0;
      uStack_488 = 0;
      uStack_480 = 0;
    }
    else {
      func_0x00010c0eb960(&ppppuStack_490,puVar5);
    }
    _objc_release(puVar5);
    ppppuVar12 = ppppuStack_490;
    uVar17 = 0;
    while (plVar8 = plVar4,
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(plVar4,&uStack_470,0x400),
          (*(byte *)((long)plVar8 + *(long *)(*plVar8 + -0x18) + 0x20) & 5) == 0) {
      lVar16 = 0;
      uVar14 = 0;
      do {
        uVar14 = uVar14 * 0x40 + 0x9e3779b9 + (uVar14 >> 2) + *(long *)((long)&uStack_470 + lVar16)
                 ^ uVar14;
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0x400);
      uVar17 = uVar17 * 0x40 + 0x9e3779b9 + (uVar17 >> 2) + uVar14 ^ uVar17;
    }
    if (plVar4[1] != 0) {
      puVar9 = &uStack_470;
      func_0x000109549058();
      uVar17 = uVar17 * 0x40 + 0x9e3779b9 + (uVar17 >> 2) + (long)puVar9 ^ uVar17;
    }
    uStack_470 = uVar17;
    FUN_109d0d770(&uStack_470,param_2);
    FUN_109d0d770(&uStack_470,param_2 + 0x18);
    uVar15 = (long)ppppuVar12 + (uStack_470 >> 2) + uStack_470 * 0x40 + 0x9e3779b9 ^ uStack_470;
    uVar15 = uStack_488 + 0x9e3779b9 + uVar15 * 0x40 + (uVar15 >> 2) ^ uVar15;
    uVar17 = uStack_480 + 0x9e3779b9 + uVar15 * 0x40 + (uVar15 >> 2);
    __ZNSt3__19to_stringEy(&ppppuStack_490,uVar17 ^ uVar15);
    uVar14 = param_4[1];
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar14 = (ulong)*(byte *)((long)param_4 + 0x17);
    }
    func_0x000104c4f768(&ppppuStack_4e0,uVar14 + 1,&ppppuStack_500);
    pppppuVar11 = (undefined8 *****)ppppuStack_4e0;
    if (-1 < (long)pppuStack_4d0) {
      pppppuVar11 = &ppppuStack_4e0;
    }
    if (uVar14 != 0) {
      plVar8 = (long *)*param_4;
      if (-1 < *(char *)((long)param_4 + 0x17)) {
        plVar8 = param_4;
      }
      _memmove(pppppuVar11,plVar8,uVar14);
    }
    *(undefined2 *)((long)pppppuVar11 + uVar14) = 0x2f;
    uVar14 = uStack_488;
    pppppuVar11 = (undefined8 *****)ppppuStack_490;
    if (-1 < (long)uStack_480) {
      uVar14 = uStack_480 >> 0x38;
      pppppuVar11 = &ppppuStack_490;
    }
    pppppuVar10 = &ppppuStack_4e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar10,pppppuVar11,uVar14);
    pppuStack_468 = pppppuVar10[1];
    uStack_470 = (ulong)*pppppuVar10;
    pppuStack_460 = pppppuVar10[2];
    pppppuVar10[1] = (undefined8 ****)0x0;
    pppppuVar10[2] = (undefined8 ****)0x0;
    *pppppuVar10 = (undefined8 ****)0x0;
    puVar9 = &uStack_470;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar9,&UNK_10f5ac1dc,0x10);
    uStack_4b8 = puVar9[1];
    uStack_4c0 = *puVar9;
    uStack_4b0 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if ((long)pppuStack_460 < 0) {
      __ZdlPv(uStack_470);
    }
    if ((long)pppuStack_4d0 < 0) {
      __ZdlPv(ppppuStack_4e0);
    }
    uVar17 = uVar17 ^ uVar15;
    FUN_109d13904(uVar17);
    __ZNSt3__15mutex4lockEv();
    pppuVar7 = (undefined8 ***)ppuStack_498;
    if ((param_5 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfacbe0();
      _objc_release(puVar5);
      if ((int)pppuVar7 == 0) goto LAB_109d0cf30;
      if ((long)uStack_4b0 < 0) {
        func_0x000107c3192c(param_1,uStack_4c0,uStack_4b8);
      }
      else {
        param_1[1] = uStack_4b8;
        *param_1 = uStack_4c0;
        param_1[2] = uStack_4b0;
      }
      *(undefined1 *)(param_1 + 3) = 0;
LAB_109d0d36c:
      __ZNSt3__15mutex6unlockEv(uVar17);
      if ((long)uStack_4b0 < 0) {
        __ZdlPv(uStack_4c0);
      }
      if ((long)uStack_480 < 0) {
        __ZdlPv(ppppuStack_490);
      }
      _objc_release(ppuStack_498);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc40(pppuVar7);
      _objc_release(puVar5);
LAB_109d0cf30:
      __ZNSt3__18ios_base5clearEj((long)plVar4 + *(long *)(*plVar4 + -0x18),0);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar4,1,0xffffffff);
      uStack_3f0 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      pppuStack_468 = (undefined8 ***)0x0;
      uStack_470 = 0;
      uStack_458 = 0;
      pppuStack_460 = (undefined8 ***)0x0;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                (plVar4,&uStack_470);
      uVar14 = param_4[1];
      if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)param_4 + 0x17);
      }
      func_0x000104c4f768(&ppppuStack_500,uVar14 + 1,&pppuStack_520);
      pppppuVar11 = (undefined8 *****)ppppuStack_500;
      if (-1 < (long)uStack_4f0) {
        pppppuVar11 = &ppppuStack_500;
      }
      if (uVar14 != 0) {
        plVar8 = (long *)*param_4;
        if (-1 < *(char *)((long)param_4 + 0x17)) {
          plVar8 = param_4;
        }
        _memmove(pppppuVar11,plVar8,uVar14);
      }
      *(undefined2 *)((long)pppppuVar11 + uVar14) = 0x2f;
      uVar14 = uStack_488;
      pppppuVar11 = (undefined8 *****)ppppuStack_490;
      if (-1 < (long)uStack_480) {
        uVar14 = uStack_480 >> 0x38;
        pppppuVar11 = &ppppuStack_490;
      }
      pppppuVar10 = &ppppuStack_500;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar10,pppppuVar11,uVar14);
      pppuStack_4d8 = pppppuVar10[1];
      ppppuStack_4e0 = *pppppuVar10;
      pppuStack_4d0 = pppppuVar10[2];
      pppppuVar10[1] = (undefined8 ****)0x0;
      pppppuVar10[2] = (undefined8 ****)0x0;
      *pppppuVar10 = (undefined8 ****)0x0;
      pppppuVar11 = &ppppuStack_4e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar11,&UNK_10f5ac1ed,0x14);
      pppuStack_468 = pppppuVar11[1];
      uStack_470 = (ulong)*pppppuVar11;
      pppuStack_460 = pppppuVar11[2];
      pppppuVar11[1] = (undefined8 ****)0x0;
      pppppuVar11[2] = (undefined8 ****)0x0;
      *pppppuVar11 = (undefined8 ****)0x0;
      if ((long)pppuStack_4d0 < 0) {
        __ZdlPv(ppppuStack_4e0);
      }
      if (uStack_4f0._7_1_ < '\0') {
        __ZdlPv(ppppuStack_500);
      }
      FUN_109cf4ccc(&ppppuStack_4e0,1,2);
      uVar14 = param_4[1];
      if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)param_4 + 0x17);
      }
      func_0x000104c4f768(appppuStack_538,uVar14 + 1,&uStack_471);
      pppppuVar11 = (undefined8 *****)appppuStack_538[0];
      if (-1 < cStack_521) {
        pppppuVar11 = appppuStack_538;
      }
      if (uVar14 != 0) {
        plVar8 = (long *)*param_4;
        if (-1 < *(char *)((long)param_4 + 0x17)) {
          plVar8 = param_4;
        }
        _memmove(pppppuVar11,plVar8,uVar14);
      }
      *(undefined2 *)((long)pppppuVar11 + uVar14) = 0x2f;
      uVar14 = uStack_488;
      pppppuVar11 = (undefined8 *****)ppppuStack_490;
      if (-1 < (long)uStack_480) {
        uVar14 = uStack_480 >> 0x38;
        pppppuVar11 = &ppppuStack_490;
      }
      pppppuVar10 = appppuStack_538;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar10,pppppuVar11,uVar14);
      ppppuStack_518 = pppppuVar10[1];
      pppuStack_520 = *pppppuVar10;
      pppuStack_510 = pppppuVar10[2];
      pppppuVar10[1] = (undefined8 ****)0x0;
      pppppuVar10[2] = (undefined8 ****)0x0;
      *pppppuVar10 = (undefined8 ****)0x0;
      ppppuVar12 = &pppuStack_520;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar12,&UNK_10f5ac202,0xd);
      ppuStack_4f8 = ppppuVar12[1];
      ppppuStack_500 = (undefined8 ****)*ppppuVar12;
      uStack_4f0 = ppppuVar12[2];
      ppppuVar12[1] = (undefined8 ***)0x0;
      ppppuVar12[2] = (undefined8 ***)0x0;
      *ppppuVar12 = (undefined8 ***)0x0;
      if ((long)pppuStack_510 < 0) {
        __ZdlPv(pppuStack_520);
      }
      if (cStack_521 < '\0') {
        __ZdlPv(appppuStack_538[0]);
      }
      if (lRam00000001137e1c60 != -1) {
        pppuStack_520 = (undefined8 ***)&uStack_471;
        appppuStack_538[0] = &pppuStack_520;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e1c60,appppuStack_538,FUN_109d0e730);
      }
      auStack_560[0] = 0x50100;
      if (cRam00000001137e1c58 == '\0') {
        auStack_560[0] = 0x100;
      }
      uStack_548 = 0;
      uStack_544 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      cStack_541 = '\0';
      uStack_540 = 0;
      FUN_109cf4d54(&ppppuStack_4e0,plVar4,param_2,&ppppuStack_500,auStack_560);
      if (cStack_541 < '\0') {
        __ZdlPv(uStack_558);
      }
      pppuStack_520 = &ppuStack_498;
      ppppuStack_518 = &ppppuStack_500;
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      FUN_109ce0e30(&ppppuStack_500,&uStack_470);
      _objc_release(puVar5);
      pppuVar7 = (undefined8 ***)ppuStack_498;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1560();
      _objc_release(puVar13);
      _objc_release(puVar5);
      if (((ulong)pppuVar7 & 1) != 0) {
        if ((long)uStack_4b0 < 0) {
          func_0x000107c3192c(param_1,uStack_4c0,uStack_4b8);
        }
        else {
          param_1[1] = uStack_4b8;
          *param_1 = uStack_4c0;
          param_1[2] = uStack_4b0;
        }
        *(undefined1 *)(param_1 + 3) = 1;
        FUN_109d0d6f0(&pppuStack_520);
        if ((long)uStack_4f0 < 0) {
          __ZdlPv(ppppuStack_500);
        }
        pppuVar7 = pppuStack_4d0;
        pppuStack_4d0 = (undefined8 ****)0x0;
        if ((undefined8 ****)pppuVar7 != (undefined8 ****)0x0) {
          (*(code *)(*pppuVar7)[1])();
        }
        pppuVar7 = pppuStack_4d8;
        pppuStack_4d8 = (undefined8 ****)0x0;
        if ((undefined8 ****)pppuVar7 != (undefined8 ****)0x0) {
          __ZdlPv();
        }
        if ((long)pppuStack_460 < 0) {
          __ZdlPv(uStack_470);
        }
        goto LAB_109d0d36c;
      }
    }
    ppuVar2 = ppuStack_498;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40(ppuVar2);
    _objc_release(puVar5);
    func_0x00010952d0c4(&UNK_10f5ac147,&UNK_10f5ac191,&UNK_10f5ac210);
LAB_109d0d4c0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109d0d4c4);
    (*pcVar3)();
  }
  if (iVar1 < 0x8000) {
    if (0xfff < iVar1) {
      if ((iVar1 != 0x1000) && (iVar1 != 0x2000)) goto LAB_109d067d4;
      goto LAB_109d067b0;
    }
    if (iVar1 != 8) {
      if (iVar1 != 0x800) goto LAB_109d067d4;
      goto LAB_109d067b0;
    }
  }
  else {
    if (iVar1 < 0x40000) {
      if ((iVar1 != 0x8000) && (iVar1 != 0x10000)) goto LAB_109d067d4;
    }
    else if ((iVar1 != 0x40000) && ((iVar1 != 0x80000 && (iVar1 != 0x200000)))) goto LAB_109d067d4;
LAB_109d067b0:
    FUN_109d0caf0(param_1,*(undefined8 *)(param_2 + 0x48),param_2);
  }
  FUN_109ceaea0(&UNK_10f5ac147,&UNK_10f5ac159);
LAB_109d067d4:
  puVar5 = &UNK_10f5abc58;
  puVar13 = puVar5;
  func_0x00010952d0c4(&UNK_10f5abc58,&UNK_10f5abc58,&UNK_10f5abc65);
  uVar17 = *(ulong *)(puVar5 + 0x98);
  if (-1 < (char)puVar5[0xa7]) {
    uVar17 = (ulong)(byte)puVar5[0xa7];
  }
  if (uVar17 == 0) {
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x0001092cc0dc(&uStack_c8,*(long *)(puVar5 + 0x70),*(long *)(puVar5 + 0x78),
                        *(long *)(puVar5 + 0x78) - *(long *)(puVar5 + 0x70) >> 2);
    uStack_b0 = (undefined3)*(undefined4 *)(puVar5 + 0x88);
    uStack_ad = (undefined1)*(undefined4 *)(puVar5 + 0x8b);
    uStack_ac = (undefined3)((uint)*(undefined4 *)(puVar5 + 0x8b) >> 8);
    if ((char)puVar5[0xa7] < '\0') {
      func_0x000107c3192c(&uStack_a8,*(undefined8 *)(puVar5 + 0x90),*(undefined8 *)(puVar5 + 0x98));
    }
    else {
      uStack_a0 = *(undefined8 *)(puVar5 + 0x98);
      uStack_a8 = *(undefined8 *)(puVar5 + 0x90);
      lStack_98 = *(long *)(puVar5 + 0xa0);
    }
    uStack_88 = *(undefined8 *)(puVar5 + 0xb0);
    uStack_90 = *(undefined8 *)(puVar5 + 0xa8);
    uStack_78 = *(undefined8 *)(puVar5 + 0xc0);
    uStack_80 = *(undefined8 *)(puVar5 + 0xb8);
    lStack_70 = *(long *)(puVar5 + 200);
    uStack_68 = (undefined1)*(undefined8 *)(puVar5 + 0xd0);
    uStack_5f = (undefined7)*(undefined8 *)(puVar5 + 0xd9);
    uStack_58 = (undefined1)((ulong)*(undefined8 *)(puVar5 + 0xd9) >> 0x38);
    uStack_67 = (undefined7)*(undefined8 *)(puVar5 + 0xd1);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)(puVar5 + 0xd1) >> 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a8,puVar13);
    uVar6 = 0x80;
    __Znwm();
    FUN_109cda3ec();
    *extraout_x8 = uVar6;
    if (lStack_98 < 0) {
      __ZdlPv(uStack_a8);
    }
    if (uStack_c8 != 0) {
      uStack_c0 = uStack_c8;
      __ZdlPv();
    }
  }
  else {
    uVar6 = 0x80;
    __Znwm();
    FUN_109cda3ec();
    *extraout_x8 = uVar6;
  }
  return;
}



/* Entry: 109d067ec; end: 109d06953;  */

void FUN_109d067ec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined3 uStack_90;
  undefined1 uStack_8d;
  undefined3 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar1 = *(ulong *)(param_2 + 0x98);
  if (-1 < (char)*(byte *)(param_2 + 0xa7)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0xa7);
  }
  if (uVar1 == 0) {
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    func_0x0001092cc0dc(&lStack_a8,*(long *)(param_2 + 0x70),*(long *)(param_2 + 0x78),
                        *(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x70) >> 2);
    uStack_90 = (undefined3)*(undefined4 *)(param_2 + 0x88);
    uStack_8d = (undefined1)*(undefined4 *)(param_2 + 0x8b);
    uStack_8c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x8b) >> 8);
    if (*(char *)(param_2 + 0xa7) < '\0') {
      func_0x000107c3192c(&uStack_88,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98)
                         );
    }
    else {
      uStack_80 = *(undefined8 *)(param_2 + 0x98);
      uStack_88 = *(undefined8 *)(param_2 + 0x90);
      lStack_78 = *(long *)(param_2 + 0xa0);
    }
    uStack_68 = *(undefined8 *)(param_2 + 0xb0);
    uStack_70 = *(undefined8 *)(param_2 + 0xa8);
    uStack_58 = *(undefined8 *)(param_2 + 0xc0);
    uStack_60 = *(undefined8 *)(param_2 + 0xb8);
    uStack_50 = *(undefined8 *)(param_2 + 200);
    uStack_48 = (undefined1)*(undefined8 *)(param_2 + 0xd0);
    uStack_3f = *(undefined8 *)(param_2 + 0xd9);
    uStack_47 = (undefined7)*(undefined8 *)(param_2 + 0xd1);
    uStack_40 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xd1) >> 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_88,param_3);
    uVar2 = 0x80;
    __Znwm();
    FUN_109cda3ec();
    *param_1 = uVar2;
    if (lStack_78 < 0) {
      __ZdlPv(uStack_88);
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
  }
  else {
    uVar2 = 0x80;
    __Znwm();
    FUN_109cda3ec();
    *param_1 = uVar2;
  }
  return;
}



/* Entry: 109d06954; end: 109d06c0b;  */

void FUN_109d06954(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  int *piVar5;
  int **ppiVar6;
  undefined1 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  ulong uVar12;
  int *piStack_580;
  int *piStack_578;
  undefined8 ***pppuStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined1 auStack_558 [1024];
  int iStack_158;
  short sStack_154;
  long lStack_58;
  
  ppiVar6 = &piStack_580;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_558);
  piVar5 = &iStack_158;
  piStack_580 = piVar5;
  _strlen();
  uVar3 = uRam00000001137e1c40;
  piStack_578 = piVar5;
  if (((piVar5 < (int *)0x6) || (iStack_158 != 0x6f685069 || sStack_154 != 0x656e)) ||
     (func_0x0001099a2158(&piStack_580,"0123456789",0), uVar3 = uRam00000001137e1c40,
     ppiVar6 == (int **)0xffffffffffffffff)) goto LAB_109d06b5c;
  if (ppiVar6 <= piStack_578) {
    uVar2 = (long)piStack_578 - (long)ppiVar6;
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined1 *)((long)piStack_580 + (long)ppiVar6);
      puVar7 = puVar1;
      _memchr(puVar1,0x2c,uVar2);
      uVar3 = 0;
      if ((puVar7 != (undefined1 *)0x0) &&
         (uVar12 = (long)puVar7 - (long)puVar1, uVar12 != 0xffffffffffffffff)) {
        uVar11 = uVar2;
        if (uVar12 <= uVar2) {
          uVar11 = uVar12;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          func_0x000104c4f6b8();
          goto LAB_109d06bc0;
        }
        if (uVar11 < 0x17) {
          uStack_560 = CONCAT17((char)uVar11,(undefined7)uStack_560);
          ppppuVar8 = &pppuStack_570;
          if (puVar1 != puVar7) goto LAB_109d06a84;
        }
        else {
          ppppuVar9 = (undefined8 ****)0x19;
          if ((uVar11 | 7) != 0x17) {
            ppppuVar9 = (undefined8 ****)((uVar11 | 7) + 1);
          }
          ppppuVar8 = ppppuVar9;
          __Znwm();
          uStack_560 = (ulong)ppppuVar9 | 0x8000000000000000;
          pppuStack_570 = ppppuVar8;
          uStack_568 = uVar11;
LAB_109d06a84:
          _memmove(ppppuVar8,puVar1,uVar11);
        }
        *(undefined1 *)((long)ppppuVar8 + uVar11) = 0;
        ppppuVar9 = &pppuStack_570;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                  (ppppuVar9,0,10);
        if ((long)uStack_560 < 0) {
          __ZdlPv(pppuStack_570);
        }
        if (uVar2 <= uVar12) {
          func_0x000109262df8(&UNK_10f2fca6e);
          goto LAB_109d06bc0;
        }
        uVar12 = uVar12 + 1;
        uVar11 = uVar2 - uVar12;
        if (0x7ffffffffffffff7 < uVar11) {
          func_0x000104c4f6b8();
          goto LAB_109d06bc0;
        }
        if (uVar11 < 0x17) {
          uStack_560 = CONCAT17((char)uVar11,(undefined7)uStack_560);
          ppppuVar10 = &pppuStack_570;
          if (uVar2 != uVar12) goto LAB_109d06b18;
        }
        else {
          ppppuVar8 = (undefined8 ****)0x19;
          if ((uVar11 | 7) != 0x17) {
            ppppuVar8 = (undefined8 ****)((uVar11 | 7) + 1);
          }
          ppppuVar10 = ppppuVar8;
          __Znwm();
          uStack_560 = (ulong)ppppuVar8 | 0x8000000000000000;
          pppuStack_570 = ppppuVar10;
          uStack_568 = uVar11;
LAB_109d06b18:
          _memmove(ppppuVar10,puVar1 + uVar12,uVar11);
        }
        *(undefined1 *)((long)ppppuVar10 + uVar11) = 0;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                  (&pppuStack_570,0,10);
        if ((long)uStack_560 < 0) {
          __ZdlPv(pppuStack_570);
        }
        uVar3 = 0xb < (int)ppppuVar9;
      }
    }
LAB_109d06b5c:
    uRam00000001137e1c40 = uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109262df8(&UNK_10f2fca6e);
LAB_109d06bc0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d06bc4);
  (*pcVar4)();
}



/* Entry: 109d06c0c; end: 109d06c67;  */

long * FUN_109d06c0c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109d06c68(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d06c68; end: 109d06cf3;  */

void FUN_109d06c68(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109d06cf4; end: 109d06e03;  */

void FUN_109d06cf4(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_40;
  long *plStack_38;
  
  FUN_109d0a114(*param_3 + 0x48);
  plStack_38 = (long *)param_3[1];
  lStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    lStack_50 = param_2[2];
  }
  FUN_109d06e04(param_1,&lStack_40,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 109d06e04; end: 109d076db;  */

void FUN_109d06e04(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
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
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)0xc8;
  __Znwm();
  *puVar7 = FUN_109d09768;
  puVar7[1] = FUN_109d09f64;
  plVar17 = puVar7 + 9;
  lVar10 = *param_2;
  plVar16 = puVar7 + 0x11;
  puVar7[0x12] = param_2[1];
  *plVar16 = lVar10;
  *param_2 = 0;
  param_2[1] = 0;
  uVar11 = *param_3;
  puVar7[0xf] = param_3[1];
  puVar7[0xe] = uVar11;
  puVar7[0x10] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  ppuVar9 = (undefined **)(puVar7 + 2);
  FUN_109d08298();
  lVar10 = puVar7[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar7[10] = 0;
  *plVar17 = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  *(undefined1 *)(puVar7 + 0xd) = 0;
  *(undefined1 *)(puVar7 + 0x18) = 0;
  *(undefined1 *)((long)puVar7 + 0xc3) = 0;
  uVar13 = puVar7[0xf];
  if (-1 < (char)*(byte *)((long)puVar7 + 0x87)) {
    uVar13 = (ulong)*(byte *)((long)puVar7 + 0x87);
  }
  if (uVar13 == 0) {
    ppuVar9 = &PTR_PTR_1132feac0;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1132feac0);
  }
  else {
    ppuVar18 = (undefined **)puVar7[0x11];
    puVar14 = ppuVar18[0x1d];
    puVar2 = ppuVar18[0x1e];
    puVar7[0x16] = puVar2;
    if (puVar14 != puVar2) {
      do {
        puVar7[0x17] = puVar14;
        ppuVar9 = ppuVar18;
        FUN_109d05bec(ppuVar18,puVar14,puVar7 + 0x18);
        if (((ulong)ppuVar9 & 1) == 0) {
          puVar14 = puVar14 + 4;
          if (puVar14 == (undefined *)puVar7[0x16]) break;
        }
        else {
          FUN_109d076dc(puVar7 + 0x14,ppuVar18,puVar7 + 0xe,puVar14);
          puVar7[0x13] = puVar7[0x14];
          plVar8 = (long *)(puVar7[0x14] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (((uint)*(undefined8 *)(puVar7[0x13] + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)((long)puVar7 + 0xc4) = 0;
            lVar10 = puVar7[0x13];
            plVar8 = (long *)(lVar10 + 0x10);
            uVar11 = puVar7[3];
            do {
              lVar15 = *plVar8;
              if (lVar15 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_109d07210;
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar15 >> 1 & 1) == 0);
          }
          lVar10 = puVar7[0x13];
          if (((uint)*(undefined8 *)(puVar7[0x13] + 0x10) >> 5 & 1) != 0) goto LAB_109d0746c;
          lVar12 = *(long *)(lVar10 + 0x98);
          *(undefined8 *)(lVar10 + 0x98) = 0;
          lVar15 = *plVar17;
          *plVar17 = lVar12;
          if (lVar15 != 0) {
            FUN_109cda590();
            __ZdlPv();
          }
          if (*(char *)((long)puVar7 + 0x67) < '\0') {
            __ZdlPv(puVar7[10]);
          }
          uVar19 = *(undefined8 *)(lVar10 + 0xa8);
          uVar11 = *(undefined8 *)(lVar10 + 0xa0);
          puVar7[0xc] = *(undefined8 *)(lVar10 + 0xb0);
          puVar7[0xb] = uVar19;
          puVar7[10] = uVar11;
          *(undefined1 *)(lVar10 + 0xb7) = 0;
          *(undefined1 *)(lVar10 + 0xa0) = 0;
          *(undefined1 *)(puVar7 + 0xd) = *(undefined1 *)(lVar10 + 0xb8);
          plVar8 = (long *)puVar7[0x13];
          if (plVar8 != (long *)0x0) {
            puVar1 = (ulong *)(plVar8 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
          }
          ppuVar9 = (undefined **)puVar7[0x14];
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar18 = ppuVar9 + 1;
            do {
              puVar14 = *ppuVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
              if (bVar4) {
                *ppuVar18 = puVar14 + -4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (((ulong)puVar14 & 0x1fffffffc) == 4) {
              do {
                puVar14 = *ppuVar18;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
                if (bVar4) {
                  *ppuVar18 = puVar14 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (puVar14 + -1 == (undefined *)0x0) {
                (**(code **)(*ppuVar9 + 8))();
              }
            }
          }
          if (*plVar17 != 0) break;
          uVar13 = puVar7[0xb];
          if (-1 < (char)*(byte *)((long)puVar7 + 0x67)) {
            uVar13 = (ulong)*(byte *)((long)puVar7 + 0x67);
          }
          puVar14 = (undefined *)(puVar7[0x17] + 4);
          if (uVar13 != 0 || puVar14 == (undefined *)puVar7[0x16]) break;
        }
        ppuVar18 = (undefined **)*plVar16;
      } while( true );
    }
  }
  lVar10 = *plVar16;
  if (*(char *)(lVar10 + 0x100) != '\0' && *plVar17 == 0) {
    uVar13 = puVar7[0xb];
    if (-1 < (char)*(byte *)((long)puVar7 + 0x67)) {
      uVar13 = (ulong)*(byte *)((long)puVar7 + 0x67);
    }
    if (uVar13 == 0) {
      puVar7[0x13] = plVar17;
      uVar5 = *(byte *)(lVar10 + 0x6a) - 1;
      if ((uVar5 < 7) && ((0x57U >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
        uVar5 = *(uint *)(&UNK_10e0403a0 + ((ulong)uVar5 & 0xff) * 4);
        FUN_109cd2af4();
        if ((*(uint *)(ppuVar9 + 8) & uVar5) == 0) goto LAB_109d07228;
        ppuVar9 = &PTR_PTR_1132feb00;
        FUN_10ae079a0(0,&PTR_PTR_1132feb00);
        FUN_10ae07cd4(ppuVar9,&PTR_PTR_1132feb00);
        FUN_109d067ec(&lStack_e0,lVar10,puVar7 + 0xe);
        func_0x00010938cda4(plVar17,lStack_e0);
        if (*(char *)(lVar10 + 0x60) == '\x02') {
          plVar8 = *(long **)(lVar10 + 0x48);
          __ZNSt3__18ios_base5clearEj((long)plVar8 + *(long *)(*plVar8 + -0x18),0);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar8,1,0xffffffff);
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          puStack_d8 = (undefined8 *)0x0;
          lStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                    (plVar8,&lStack_e0);
        }
        FUN_109cdb150(puVar7 + 0x15,*plVar17,lVar10 + 0x48,uVar5,lVar10);
        *(undefined1 *)(puVar7 + 0xd) = 0;
      }
      else {
LAB_109d07228:
        uStack_c0 = 0;
        puStack_d8 = (undefined8 *)0x0;
        lStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
        FUN_109d04fd8(puVar7 + 0x13,&lStack_e0);
        if (lStack_c8 < 0) {
          __ZdlPv(puStack_d8);
        }
        lVar15 = lStack_e0;
        lStack_e0 = 0;
        if (lVar15 != 0) {
          FUN_109cda590();
          __ZdlPv();
        }
        FUN_109d1b124(puVar7 + 0x15);
      }
      puVar7[0x14] = puVar7[0x15];
      plVar8 = (long *)(puVar7[0x15] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar7[0x14] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar7 + 0xc4) = 1;
        lVar10 = puVar7[0x14];
        plVar8 = (long *)(lVar10 + 0x10);
        uVar11 = puVar7[3];
        do {
          lVar15 = *plVar8;
          if (lVar15 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_109d07210;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar15 >> 1 & 1) == 0);
      }
      plVar8 = (long *)puVar7[0x14];
      if (((uint)*(undefined8 *)(puVar7[0x14] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar8 + 0x12);
        goto LAB_109d074f0;
      }
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar7[0x15];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      if (*plVar17 == 0) {
        uVar13 = puVar7[0xb];
        if (-1 < (char)*(byte *)((long)puVar7 + 0x67)) {
          uVar13 = (ulong)*(byte *)((long)puVar7 + 0x67);
        }
        if (uVar13 == 0) {
          lStack_e0 = CONCAT71(lStack_e0._1_7_,*(undefined1 *)(*plVar16 + 0x6a));
          puVar7 = (undefined8 *)&UNK_110b3e718;
          FUN_109d0e740(&UNK_110b3e718,&lStack_e0);
          uStack_118 = puVar7[1];
          uStack_120 = *puVar7;
          FUN_109d04e34(auStack_110,&uStack_120);
          func_0x00010928a5e0(auStack_f8,&UNK_10f5abb91,auStack_110);
          func_0x000109259240(&lStack_e0,auStack_f8,&UNK_10f5abbac);
          FUN_109cd45b4(&UNK_10f5abb81,&UNK_10f5abb81,&lStack_e0);
          goto LAB_109d074f0;
        }
      }
      FUN_109d05c78(*plVar16);
    }
  }
  FUN_109d08258(puVar7 + 2,plVar17);
  if (*(char *)((long)puVar7 + 0x67) < '\0') {
    __ZdlPv(puVar7[10]);
  }
  lVar15 = *plVar17;
  *plVar17 = 0;
  if (lVar15 != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
  func_0x000109d1a1d0(puVar7 + 2);
  if (*(char *)((long)puVar7 + 0x87) < '\0') {
    __ZdlPv(puVar7[0xe]);
  }
  plVar17 = (long *)puVar7[0x12];
  if (plVar17 != (long *)0x0) {
    plVar16 = plVar17 + 1;
    do {
      lVar15 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  __ZdlPv(puVar7);
LAB_109d07428:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_109d0746c:
  func_0x0001092af97c(lVar10 + 0x90);
LAB_109d074f0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109d074f4);
  (*pcVar6)();
LAB_109d07210:
  uStack_d0 = uVar11;
  lStack_e0 = 0;
  puStack_d8 = puVar7;
  func_0x000109d1b588(lVar10 + 0x18,&lStack_e0);
  *(undefined8 *)(lVar10 + 0x10) = 0;
  goto LAB_109d07428;
}



/* Entry: 109d076dc; end: 109d08257;  */

void FUN_109d076dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  undefined4 uVar21;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar12 = (undefined8 *)0x1e0;
  __Znwm();
  *puVar12 = FUN_109d08ba4;
  puVar12[1] = FUN_109d0968c;
  puVar12[0x39] = param_3;
  puVar12[0x3a] = param_4;
  plVar1 = puVar12 + 9;
  plVar2 = puVar12 + 0x1a;
  puVar3 = puVar12 + 0x26;
  plVar4 = puVar12 + 0x29;
  puVar12[0x38] = param_2;
  FUN_109d08298(puVar12 + 2);
  lVar16 = puVar12[7];
  if (lVar16 != 0) {
    plVar14 = (long *)(lVar16 + 8);
    do {
      cVar8 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar20) {
        *plVar14 = *plVar14 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar21 = 0;
  puVar5 = puVar12 + 0x23;
  *param_1 = lVar16;
  uVar15 = 1;
  do {
    *(undefined1 *)((long)puVar12 + 0x1d9) = uVar15;
    puVar12[0x1b] = 0;
    *plVar2 = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1c] = 0;
    *(undefined1 *)(puVar12 + 0x1e) = 0;
    puVar12[0x31] = plVar2;
    func_0x000107c31940(puVar12 + 0x1f,"");
    iVar11 = (int)puVar12[0x3a];
    *(undefined1 *)(puVar12 + 0x22) = 0;
    FUN_109d065b4();
    if (iVar11 != 0) {
      FUN_109d066c8(plVar1,puVar12[0x38],puVar12[0x3a],puVar12[0x39],uVar21);
      if (*(char *)((long)puVar12 + 0x10f) < '\0') {
        __ZdlPv(puVar12[0x1f]);
      }
      puVar12[0x20] = puVar12[10];
      puVar12[0x1f] = *plVar1;
      puVar12[0x21] = puVar12[0xb];
      *(undefined1 *)((long)puVar12 + 0x5f) = 0;
      *(undefined1 *)(puVar12 + 9) = 0;
      *(undefined1 *)(puVar12 + 0x22) = *(undefined1 *)(puVar12 + 0xc);
    }
    if (*(char *)(puVar12[0x38] + 0x100) == '\0') {
      puVar12[0x32] = 0;
      FUN_109d04f68(plVar1,puVar12 + 0x32,puVar12 + 0x1f,*(undefined1 *)(puVar12 + 0x22));
      FUN_109d04fd8(puVar12 + 0x31,plVar1);
      if (*(char *)((long)puVar12 + 0x67) < '\0') {
        __ZdlPv(puVar12[10]);
      }
      lVar16 = *plVar1;
      *plVar1 = 0;
      if (lVar16 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      lVar16 = puVar12[0x32];
      puVar12[0x32] = 0;
joined_r0x000109d078b0:
      if (lVar16 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      FUN_109d1b124(puVar12 + 0x37);
    }
    else {
      puVar13 = puVar12 + 0x1f;
      FUN_109d064c8(puVar13,*(undefined4 *)puVar12[0x3a]);
      if ((int)puVar13 != 0) {
        puVar12[0xd] = 0;
        puVar12[10] = 0;
        *plVar1 = 0;
        puVar12[0xc] = 0;
        puVar12[0xb] = 0;
        FUN_109d04fd8(puVar12 + 0x31,plVar1);
        if (*(char *)((long)puVar12 + 0x67) < '\0') {
          __ZdlPv(puVar12[10]);
        }
        lVar16 = *plVar1;
        *plVar1 = 0;
        goto joined_r0x000109d078b0;
      }
      FUN_109d067ec(puVar12 + 0x33,puVar12[0x38],puVar12[0x39]);
      iVar11 = *(int *)puVar12[0x3a];
      if (0x1ff < iVar11) {
        if (iVar11 < 0x8000) {
          if (iVar11 < 0x800) {
            if ((iVar11 == 0x200) || (iVar11 == 0x400)) goto LAB_109d07b00;
          }
          else if (((iVar11 == 0x800) || (iVar11 == 0x1000)) || (iVar11 == 0x2000))
          goto LAB_109d079c0;
        }
        else {
          if (iVar11 < 0x40000) {
            if ((iVar11 != 0x8000) && (iVar11 != 0x10000)) {
              if (iVar11 == 0x20000) goto LAB_109d07b00;
              goto LAB_109d07940;
            }
LAB_109d079c0:
            uVar17 = puVar12[0x33];
            FUN_109cd2ef0(puVar3,puVar12[0x38]);
            FUN_109cd2ef0(plVar4,puVar12[0x38] + 0x18);
            func_0x00010941f750(plVar1,puVar3,plVar4);
            FUN_109cdb214(puVar12 + 0x2f,uVar17,puVar12 + 0x1f,iVar11,plVar1);
            if (*(char *)((long)puVar12 + 0x10f) < '\0') {
              func_0x000107c3192c(puVar5,puVar12[0x1f],puVar12[0x20]);
            }
            else {
              puVar12[0x24] = puVar12[0x20];
              *puVar5 = puVar12[0x1f];
              puVar12[0x25] = puVar12[0x21];
            }
            FUN_109d08414(puVar12 + 0x37,puVar12 + 0x2f,puVar5,*(undefined4 *)puVar12[0x3a],uVar21);
            if (*(char *)((long)puVar12 + 0x12f) < '\0') {
              __ZdlPv(*puVar5);
            }
            plVar14 = (long *)puVar12[0x2f];
            if (plVar14 != (long *)0x0) {
              puVar6 = (ulong *)(plVar14 + 1);
              do {
                uVar18 = *puVar6;
                cVar8 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar20) {
                  *puVar6 = uVar18 - 4;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((uVar18 & 0x1fffffffc) == 4) {
                do {
                  uVar18 = *puVar6;
                  cVar8 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                  if (bVar20) {
                    *puVar6 = uVar18 - 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (uVar18 - 1 == 0) {
                  (**(code **)(*plVar14 + 8))();
                }
              }
            }
            if (*(char *)((long)puVar12 + 0x8f) < '\0') {
              __ZdlPv(puVar12[0xf]);
            }
            puVar12[0x30] = puVar12 + 0xc;
            func_0x000109378cec(puVar12 + 0x30);
            puVar12[0x30] = plVar1;
            func_0x000109378cec(puVar12 + 0x30);
            puVar12[0x30] = plVar4;
            func_0x000104c607c8(puVar12 + 0x30);
            *plVar4 = (long)puVar3;
            func_0x000104c607c8(plVar4);
            goto LAB_109d07b94;
          }
          if (((iVar11 == 0x40000) || (iVar11 == 0x200000)) || (iVar11 == 0x80000))
          goto LAB_109d079c0;
        }
LAB_109d07940:
        func_0x00010952d0c4(&UNK_10f5a92e5,&UNK_10f5a92e5,&UNK_10f5abbbb);
        goto LAB_109d08214;
      }
      uVar9 = iVar11 - 2;
      if (uVar9 < 0x3f) {
        if ((1L << ((ulong)uVar9 & 0x3f) & 0x400040004040c000U) == 0) {
          if ((1L << ((ulong)uVar9 & 0x3f) & 0x41U) != 0) goto LAB_109d079c0;
          goto LAB_109d07918;
        }
      }
      else {
LAB_109d07918:
        if (((0x31 < iVar11 - 0x50U) ||
            ((1L << ((ulong)(iVar11 - 0x50U) & 0x3f) & 0x3000000000001U) == 0)) && (iVar11 != 0x100)
           ) goto LAB_109d07940;
      }
LAB_109d07b00:
      FUN_109cdb150(puVar12 + 0x35,puVar12[0x33],puVar12[0x38] + 0x48,iVar11);
      puVar12[0x2d] = 0;
      puVar12[0x2e] = 0;
      puVar12[0x2c] = 0;
      FUN_109d08414(puVar12 + 0x37,puVar12 + 0x35,puVar12 + 0x2c,*(undefined4 *)puVar12[0x3a],0);
      if (*(char *)((long)puVar12 + 0x177) < '\0') {
        __ZdlPv(puVar12[0x2c]);
      }
      plVar14 = (long *)puVar12[0x35];
      if (plVar14 != (long *)0x0) {
        puVar6 = (ulong *)(plVar14 + 1);
        do {
          uVar18 = *puVar6;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar20) {
            *puVar6 = uVar18 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar6;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar20) {
              *puVar6 = uVar18 - 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
      }
LAB_109d07b94:
      uVar17 = puVar12[0x33];
      puVar12[0x33] = 0;
      puVar12[0x34] = uVar17;
      FUN_109d04f68(plVar1,puVar12 + 0x34,puVar12 + 0x1f,*(undefined1 *)(puVar12 + 0x22));
      FUN_109d04fd8(puVar12 + 0x31,plVar1);
      if (*(char *)((long)puVar12 + 0x67) < '\0') {
        __ZdlPv(puVar12[10]);
      }
      lVar16 = *plVar1;
      *plVar1 = 0;
      if (lVar16 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      lVar16 = puVar12[0x34];
      puVar12[0x34] = 0;
      if (lVar16 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      lVar16 = puVar12[0x33];
      puVar12[0x33] = 0;
      if (lVar16 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
    }
    if (*(char *)((long)puVar12 + 0x10f) < '\0') {
      __ZdlPv(puVar12[0x1f]);
    }
    puVar12[0x36] = puVar12[0x37];
    plVar14 = (long *)(puVar12[0x37] + 8);
    do {
      cVar8 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar20) {
        *plVar14 = *plVar14 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (((uint)*(undefined8 *)(puVar12[0x36] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar12 + 0x3b) = 0;
      lVar16 = puVar12[0x36];
      plVar14 = (long *)(lVar16 + 0x10);
      uVar17 = puVar12[3];
      do {
        lVar19 = *plVar14;
        if (lVar19 == 0) {
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar20) {
            *plVar14 = 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            lStack_90 = 0;
            puStack_88 = puVar12;
            uStack_80 = uVar17;
            func_0x000109d1b588(lVar16 + 0x18,&lStack_90);
            *(undefined8 *)(lVar16 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar19 >> 1 & 1) == 0);
    }
    plVar14 = (long *)puVar12[0x36];
    if (((uint)*(undefined8 *)(puVar12[0x36] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar14 + 0x12);
LAB_109d08214:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109d08218);
      (*pcVar10)();
    }
    if (plVar14 != (long *)0x0) {
      puVar6 = (ulong *)(plVar14 + 1);
      do {
        uVar18 = *puVar6;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar20) {
          *puVar6 = uVar18 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar6;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar20) {
            *puVar6 = uVar18 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    plVar14 = (long *)puVar12[0x37];
    if (plVar14 != (long *)0x0) {
      puVar6 = (ulong *)(plVar14 + 1);
      do {
        uVar18 = *puVar6;
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar20) {
          *puVar6 = uVar18 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar6;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar20) {
            *puVar6 = uVar18 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    if (*plVar2 == 0) {
      bVar7 = *(byte *)((long)puVar12 + 0xef);
      uVar18 = puVar12[0x1c];
      if (-1 < (char)bVar7) {
        uVar18 = (ulong)bVar7;
      }
      if (uVar18 != 0) goto LAB_109d07d4c;
      bVar20 = true;
      if (((uint)(int)(char)bVar7 >> 7 & 1) != 0) goto LAB_109d07d64;
    }
    else {
      FUN_109d05c78(puVar12[0x38]);
LAB_109d07d4c:
      FUN_109d08258(puVar12 + 2,plVar2);
      bVar20 = false;
      if (*(char *)((long)puVar12 + 0xef) < '\0') {
LAB_109d07d64:
        __ZdlPv(puVar12[0x1b]);
      }
    }
    lVar16 = *plVar2;
    *plVar2 = 0;
    if (lVar16 != 0) {
      FUN_109cda590();
      __ZdlPv();
    }
    if (!bVar20) goto LAB_109d08200;
    if (*(char *)(puVar12[0x38] + 0x60) == '\x02') {
      plVar14 = *(long **)(puVar12[0x38] + 0x48);
      __ZNSt3__18ios_base5clearEj((long)plVar14 + *(long *)(*plVar14 + -0x18),0);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar14,1,0xffffffff);
      puVar12[0x19] = 0;
      puVar12[0x16] = 0;
      puVar12[0x15] = 0;
      puVar12[0x18] = 0;
      puVar12[0x17] = 0;
      puVar12[0x12] = 0;
      puVar12[0x11] = 0;
      puVar12[0x14] = 0;
      puVar12[0x13] = 0;
      puVar12[0xe] = 0;
      puVar12[0xd] = 0;
      puVar12[0x10] = 0;
      puVar12[0xf] = 0;
      puVar12[10] = 0;
      *plVar1 = 0;
      puVar12[0xc] = 0;
      puVar12[0xb] = 0;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                (plVar14,plVar1);
    }
    uVar15 = 0;
    uVar21 = 1;
  } while ((*(byte *)((long)puVar12 + 0x1d9) & 1) != 0);
  uStack_70 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  FUN_109d08258(puVar12 + 2,&lStack_90);
  if (lStack_78 < 0) {
    __ZdlPv(puStack_88);
  }
  lVar16 = lStack_90;
  lStack_90 = 0;
  if (lVar16 != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
LAB_109d08200:
  func_0x000109d1a1d0(puVar12 + 2);
  __ZdlPv(puVar12);
  return;
}



/* Entry: 109d08258; end: 109d08297;  */

void FUN_109d08258(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_109d087c8(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 109d08298; end: 109d08337;  */

undefined8 * FUN_109d08298(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110b3e530;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 109d08338; end: 109d08413;  */

undefined8 * FUN_109d08338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3e530;
  func_0x000109d083cc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 109d08414; end: 109d087c7;  */

void FUN_109d08414(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_109d088c4;
  puVar5[1] = FUN_109d08adc;
  *(undefined1 *)((long)puVar5 + 0x75) = param_5;
  *(undefined4 *)(puVar5 + 0xe) = param_4;
  uVar7 = *param_2;
  *param_2 = 0;
  uVar11 = *param_3;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  puVar5[0xb] = param_3[2];
  puVar5[0xc] = uVar7;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[0xd] = puVar5[0xc];
  plVar6 = (long *)(puVar5[0xc] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar5 + 0x74) = 0;
    lVar8 = puVar5[0xd];
    plVar6 = (long *)(lVar8 + 0x10);
    uStack_48 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_58 = 0;
          puStack_50 = puVar5;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_58);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xd];
  if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109d08724);
    (*pcVar4)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(puVar5 + 2);
  func_0x000109d1a1d0(puVar5 + 2);
  if (*(char *)((long)puVar5 + 0x5f) < '\0') {
    __ZdlPv(puVar5[9]);
  }
  plVar6 = (long *)puVar5[0xc];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar5);
  return;
}



/* Entry: 109d087c8; end: 109d0887b;  */

undefined1 FUN_109d087c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d0887c(param_1 + 0x98);
        uVar4 = *param_2;
        *param_2 = 0;
        *(undefined8 *)(param_1 + 0x98) = uVar4;
        uVar6 = param_2[2];
        uVar4 = param_2[1];
        *(undefined8 *)(param_1 + 0xb0) = param_2[3];
        *(undefined8 *)(param_1 + 0xa8) = uVar6;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 4);
        *(undefined1 *)(param_1 + 0xc0) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 109d0887c; end: 109d088c3;  */

void FUN_109d0887c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(char *)(param_1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
    func_0x00010938cda4(param_1,0);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 109d088c4; end: 109d08adb;  */

void FUN_109d088c4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x68);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
    if (*(char *)(param_1 + 0x5f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x48));
    }
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d08aa4);
  (*pcVar4)();
}



/* Entry: 109d08adc; end: 109d08ba3;  */

void FUN_109d08adc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d08ba4; end: 109d0968b;  */

void FUN_109d08ba4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar1 = (long *)(param_1 + 0x48);
  plVar2 = (long *)(param_1 + 0xd0);
  puVar3 = (undefined8 *)(param_1 + 0x118);
  lVar4 = param_1 + 0x130;
  plVar5 = (long *)(param_1 + 0x148);
  do {
    plVar12 = *(long **)(param_1 + 0x1b0);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar12 + 0x12);
LAB_109d0965c:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109d09660);
      (*pcVar10)();
    }
    if (plVar12 != (long *)0x0) {
      puVar6 = (ulong *)(plVar12 + 1);
      do {
        uVar15 = *puVar6;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar17) {
          *puVar6 = uVar15 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar6;
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar17) {
            *puVar6 = uVar15 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    plVar12 = *(long **)(param_1 + 0x1b8);
    if (plVar12 != (long *)0x0) {
      puVar6 = (ulong *)(plVar12 + 1);
      do {
        uVar15 = *puVar6;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar17) {
          *puVar6 = uVar15 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar6;
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar17) {
            *puVar6 = uVar15 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    if (*plVar2 == 0) {
      bVar7 = *(byte *)(param_1 + 0xef);
      uVar15 = *(ulong *)(param_1 + 0xe0);
      if (-1 < (char)bVar7) {
        uVar15 = (ulong)bVar7;
      }
      if (uVar15 != 0) goto LAB_109d08cbc;
      bVar17 = true;
      if (((uint)(int)(char)bVar7 >> 7 & 1) != 0) goto LAB_109d08cd4;
    }
    else {
      FUN_109d05c78(*(undefined8 *)(param_1 + 0x1c0));
LAB_109d08cbc:
      FUN_109d08258(param_1 + 0x10,plVar2);
      bVar17 = false;
      if (*(char *)(param_1 + 0xef) < '\0') {
LAB_109d08cd4:
        __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
      }
    }
    lVar13 = *plVar2;
    *plVar2 = 0;
    if (lVar13 != 0) {
      FUN_109cda590();
      __ZdlPv();
    }
    if (!bVar17) {
LAB_109d0962c:
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x1c0) + 0x60) == '\x02') {
      plVar12 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x48);
      __ZNSt3__18ios_base5clearEj((long)plVar12 + *(long *)(*plVar12 + -0x18),0);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar12,1,0xffffffff);
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                (plVar12,plVar1);
    }
    if ((*(byte *)(param_1 + 0x1d9) & 1) == 0) {
      uStack_70 = 0;
      lStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      FUN_109d08258(param_1 + 0x10,&lStack_90);
      if (lStack_78 < 0) {
        __ZdlPv(lStack_88);
      }
      lVar4 = lStack_90;
      lStack_90 = 0;
      if (lVar4 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      goto LAB_109d0962c;
    }
    *(undefined1 *)(param_1 + 0x1d9) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0xf0) = 0;
    *(long **)(param_1 + 0x188) = plVar2;
    func_0x000107c31940(param_1 + 0xf8,"");
    iVar11 = (int)*(undefined8 *)(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x110) = 0;
    FUN_109d065b4();
    if (iVar11 != 0) {
      FUN_109d066c8(plVar1,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1d0),
                    *(undefined8 *)(param_1 + 0x1c8),1);
      if (*(char *)(param_1 + 0x10f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
      }
      *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0xf8) = *plVar1;
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x5f) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_1 + 0x60);
    }
    if (*(char *)(*(long *)(param_1 + 0x1c0) + 0x100) == '\0') {
      *(undefined8 *)(param_1 + 400) = 0;
      FUN_109d04f68(plVar1,param_1 + 400,param_1 + 0xf8,*(undefined1 *)(param_1 + 0x110));
      FUN_109d04fd8(param_1 + 0x188,plVar1);
      if (*(char *)(param_1 + 0x67) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      lVar13 = *plVar1;
      *plVar1 = 0;
      if (lVar13 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      lVar13 = *(long *)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = 0;
joined_r0x000109d08f58:
      if (lVar13 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      FUN_109d1b124(param_1 + 0x1b8);
    }
    else {
      lVar13 = param_1 + 0xf8;
      FUN_109d064c8(lVar13,**(undefined4 **)(param_1 + 0x1d0));
      if ((int)lVar13 != 0) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        FUN_109d04fd8(param_1 + 0x188,plVar1);
        if (*(char *)(param_1 + 0x67) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0x50));
        }
        lVar13 = *plVar1;
        *plVar1 = 0;
        goto joined_r0x000109d08f58;
      }
      FUN_109d067ec(param_1 + 0x198,*(undefined8 *)(param_1 + 0x1c0),
                    *(undefined8 *)(param_1 + 0x1c8));
      iVar11 = **(int **)(param_1 + 0x1d0);
      if (0x1ff < iVar11) {
        if (iVar11 < 0x8000) {
          if (iVar11 < 0x800) {
            if ((iVar11 == 0x200) || (iVar11 == 0x400)) goto LAB_109d091a4;
          }
          else if (((iVar11 == 0x800) || (iVar11 == 0x1000)) || (iVar11 == 0x2000))
          goto LAB_109d09068;
        }
        else {
          if (iVar11 < 0x40000) {
            if ((iVar11 != 0x8000) && (iVar11 != 0x10000)) {
              if (iVar11 == 0x20000) goto LAB_109d091a4;
              goto LAB_109d08fe8;
            }
LAB_109d09068:
            uVar14 = *(undefined8 *)(param_1 + 0x198);
            FUN_109cd2ef0(lVar4,*(undefined8 *)(param_1 + 0x1c0));
            FUN_109cd2ef0(plVar5,*(long *)(param_1 + 0x1c0) + 0x18);
            func_0x00010941f750(plVar1,lVar4,plVar5);
            FUN_109cdb214(param_1 + 0x178,uVar14,param_1 + 0xf8,iVar11,plVar1);
            if (*(char *)(param_1 + 0x10f) < '\0') {
              func_0x000107c3192c(puVar3,*(undefined8 *)(param_1 + 0xf8),
                                  *(undefined8 *)(param_1 + 0x100));
            }
            else {
              *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x100);
              *puVar3 = *(undefined8 *)(param_1 + 0xf8);
              *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x108);
            }
            FUN_109d08414(param_1 + 0x1b8,param_1 + 0x178,puVar3,**(undefined4 **)(param_1 + 0x1d0),
                          1);
            if (*(char *)(param_1 + 0x12f) < '\0') {
              __ZdlPv(*puVar3);
            }
            plVar12 = *(long **)(param_1 + 0x178);
            if (plVar12 != (long *)0x0) {
              puVar6 = (ulong *)(plVar12 + 1);
              do {
                uVar15 = *puVar6;
                cVar8 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar17) {
                  *puVar6 = uVar15 - 4;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((uVar15 & 0x1fffffffc) == 4) {
                do {
                  uVar15 = *puVar6;
                  cVar8 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                  if (bVar17) {
                    *puVar6 = uVar15 - 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (uVar15 - 1 == 0) {
                  (**(code **)(*plVar12 + 8))();
                }
              }
            }
            if (*(char *)(param_1 + 0x8f) < '\0') {
              __ZdlPv(*(undefined8 *)(param_1 + 0x78));
            }
            *(long *)(param_1 + 0x180) = param_1 + 0x60;
            func_0x000109378cec(param_1 + 0x180);
            *(long **)(param_1 + 0x180) = plVar1;
            func_0x000109378cec(param_1 + 0x180);
            *(long **)(param_1 + 0x180) = plVar5;
            func_0x000104c607c8(param_1 + 0x180);
            *plVar5 = lVar4;
            func_0x000104c607c8(plVar5);
            goto LAB_109d09238;
          }
          if (((iVar11 == 0x40000) || (iVar11 == 0x200000)) || (iVar11 == 0x80000))
          goto LAB_109d09068;
        }
LAB_109d08fe8:
        func_0x00010952d0c4(&UNK_10f5a92e5,&UNK_10f5a92e5,&UNK_10f5abbbb);
        goto LAB_109d0965c;
      }
      uVar9 = iVar11 - 2;
      if (uVar9 < 0x3f) {
        if ((1L << ((ulong)uVar9 & 0x3f) & 0x400040004040c000U) == 0) {
          if ((1L << ((ulong)uVar9 & 0x3f) & 0x41U) != 0) goto LAB_109d09068;
          goto LAB_109d08fc0;
        }
      }
      else {
LAB_109d08fc0:
        if (((0x31 < iVar11 - 0x50U) ||
            ((1L << ((ulong)(iVar11 - 0x50U) & 0x3f) & 0x3000000000001U) == 0)) && (iVar11 != 0x100)
           ) goto LAB_109d08fe8;
      }
LAB_109d091a4:
      FUN_109cdb150(param_1 + 0x1a8,*(undefined8 *)(param_1 + 0x198),
                    *(long *)(param_1 + 0x1c0) + 0x48,iVar11);
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      FUN_109d08414(param_1 + 0x1b8,param_1 + 0x1a8,param_1 + 0x160,
                    **(undefined4 **)(param_1 + 0x1d0),0);
      if (*(char *)(param_1 + 0x177) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x160));
      }
      plVar12 = *(long **)(param_1 + 0x1a8);
      if (plVar12 != (long *)0x0) {
        puVar6 = (ulong *)(plVar12 + 1);
        do {
          uVar15 = *puVar6;
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar17) {
            *puVar6 = uVar15 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar15 & 0x1fffffffc) == 4) {
          do {
            uVar15 = *puVar6;
            cVar8 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar17) {
              *puVar6 = uVar15 - 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (uVar15 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
LAB_109d09238:
      uVar14 = *(undefined8 *)(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 0x1a0) = uVar14;
      FUN_109d04f68(plVar1,param_1 + 0x1a0,param_1 + 0xf8,*(undefined1 *)(param_1 + 0x110));
      FUN_109d04fd8(param_1 + 0x188,plVar1);
      if (*(char *)(param_1 + 0x67) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      lVar13 = *plVar1;
      *plVar1 = 0;
      if (lVar13 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      lVar13 = *(long *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      if (lVar13 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      lVar13 = *(long *)(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0x198) = 0;
      if (lVar13 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
    }
    if (*(char *)(param_1 + 0x10f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
    }
    *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b8);
    plVar12 = (long *)(*(long *)(param_1 + 0x1b8) + 8);
    do {
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar17) {
        *plVar12 = *plVar12 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1d8) = 0;
      lVar13 = *(long *)(param_1 + 0x1b0);
      plVar12 = (long *)(lVar13 + 0x10);
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar16 = *plVar12;
        if (lVar16 == 0) {
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar17) {
            *plVar12 = 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            lStack_90 = 0;
            lStack_88 = param_1;
            uStack_80 = uVar14;
            func_0x000109d1b588(lVar13 + 0x18,&lStack_90);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar16 >> 1 & 1) == 0);
    }
  } while( true );
}



/* Entry: 109d0968c; end: 109d09767;  */

void FUN_109d0968c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  plVar4 = *(long **)(param_1 + 0x1b0);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x1b8);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 0xef) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
  }
  lVar5 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar5 != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d09768; end: 109d09f63;  */

void FUN_109d09768(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
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
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_1 + 9;
  if ((*(byte *)((long)param_1 + 0xc4) & 1) == 0) {
    lVar7 = param_1[0x13];
    if (((uint)*(undefined8 *)(param_1[0x13] + 0x10) >> 5 & 1) == 0) {
LAB_109d09938:
      lVar11 = *(long *)(lVar7 + 0x98);
      *(undefined8 *)(lVar7 + 0x98) = 0;
      lVar8 = *plVar13;
      *plVar13 = lVar11;
      if (lVar8 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      if (*(char *)((long)param_1 + 0x67) < '\0') {
        __ZdlPv(param_1[10]);
      }
      lVar11 = *(long *)(lVar7 + 0xa8);
      lVar8 = *(long *)(lVar7 + 0xa0);
      param_1[0xc] = *(long *)(lVar7 + 0xb0);
      param_1[0xb] = lVar11;
      param_1[10] = lVar8;
      *(undefined1 *)(lVar7 + 0xb7) = 0;
      *(undefined1 *)(lVar7 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(lVar7 + 0xb8);
      plVar6 = (long *)param_1[0x13];
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = (long *)param_1[0x14];
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      if (*plVar13 == 0) {
        uVar12 = param_1[0xb];
        if (-1 < (char)*(byte *)((long)param_1 + 0x67)) {
          uVar12 = (ulong)*(byte *)((long)param_1 + 0x67);
        }
        lVar7 = param_1[0x17] + 4;
        if (uVar12 == 0 && lVar7 != param_1[0x16]) goto LAB_109d09a44;
        bVar5 = true;
LAB_109d09b1c:
        lVar7 = param_1[0x11];
        if ((*(char *)(lVar7 + 0x100) != '\0') && (bVar5)) {
          uVar12 = param_1[0xb];
          if (-1 < (char)*(byte *)((long)param_1 + 0x67)) {
            uVar12 = (ulong)*(byte *)((long)param_1 + 0x67);
          }
          if (uVar12 == 0) {
            param_1[0x13] = (long)plVar13;
            uVar3 = *(byte *)(lVar7 + 0x6a) - 1;
            if ((uVar3 < 7) && ((0x57U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
              uVar3 = *(uint *)(&UNK_10e0403a0 + ((ulong)uVar3 & 0xff) * 4);
              FUN_109cd2af4();
              if ((*(uint *)(plVar6 + 8) & uVar3) == 0) goto LAB_109d09c58;
              ppuVar10 = &PTR_PTR_1132feb00;
              FUN_10ae079a0(0,&PTR_PTR_1132feb00);
              FUN_10ae07cd4(ppuVar10,&PTR_PTR_1132feb00);
              FUN_109d067ec(&lStack_d0,lVar7,param_1 + 0xe);
              func_0x00010938cda4(plVar13,lStack_d0);
              if (*(char *)(lVar7 + 0x60) == '\x02') {
                plVar6 = *(long **)(lVar7 + 0x48);
                __ZNSt3__18ios_base5clearEj((long)plVar6 + *(long *)(*plVar6 + -0x18),0);
                __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar6,1,0xffffffff);
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_70 = 0;
                uStack_58 = 0;
                uStack_60 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_78 = 0;
                uStack_80 = 0;
                uStack_a8 = 0;
                uStack_b0 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                plStack_c8 = (long *)0x0;
                lStack_d0 = 0;
                lStack_b8 = 0;
                lStack_c0 = 0;
                __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                          (plVar6,&lStack_d0);
              }
              FUN_109cdb150(param_1 + 0x15,*plVar13,lVar7 + 0x48,uVar3,lVar7);
              *(undefined1 *)(param_1 + 0xd) = 0;
            }
            else {
LAB_109d09c58:
              uStack_b0 = 0;
              plStack_c8 = (long *)0x0;
              lStack_d0 = 0;
              lStack_b8 = 0;
              lStack_c0 = 0;
              FUN_109d04fd8(param_1 + 0x13,&lStack_d0);
              if (lStack_b8 < 0) {
                __ZdlPv(plStack_c8);
              }
              lVar7 = lStack_d0;
              lStack_d0 = 0;
              if (lVar7 != 0) {
                FUN_109cda590();
                __ZdlPv();
              }
              FUN_109d1b124(param_1 + 0x15);
            }
            param_1[0x14] = param_1[0x15];
            plVar6 = (long *)(param_1[0x15] + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = *plVar6 + 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((uint)*(undefined8 *)(param_1[0x14] + 0x10) >> 1 & 1) != 0) goto LAB_109d097a0;
            *(undefined1 *)((long)param_1 + 0xc4) = 1;
            lVar8 = param_1[0x14];
            plVar6 = (long *)(lVar8 + 0x10);
            lVar7 = param_1[3];
            while (lVar11 = *plVar6, lVar11 != 0) {
              ClearExclusiveLocal();
LAB_109d09d04:
              if (((uint)lVar11 >> 1 & 1) != 0) goto LAB_109d097a0;
            }
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar5) {
              *plVar6 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_109d09d04;
LAB_109d09c40:
            lStack_c0 = lVar7;
            lStack_d0 = 0;
            plVar6 = (long *)(lVar8 + 0x18);
            plStack_c8 = param_1;
            func_0x000109d1b588(plVar6,&lStack_d0);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            goto LAB_109d098f0;
          }
        }
      }
      goto LAB_109d09868;
    }
LAB_109d09b04:
    func_0x0001092af97c(lVar7 + 0x90);
  }
  else {
LAB_109d097a0:
    plVar6 = (long *)param_1[0x14];
    if (((uint)*(undefined8 *)(param_1[0x14] + 0x10) >> 5 & 1) == 0) {
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = (long *)param_1[0x15];
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      if (*plVar13 == 0) {
        uVar12 = param_1[0xb];
        if (-1 < (char)*(byte *)((long)param_1 + 0x67)) {
          uVar12 = (ulong)*(byte *)((long)param_1 + 0x67);
        }
        if (uVar12 == 0) {
          lStack_d0 = CONCAT71(lStack_d0._1_7_,*(undefined1 *)(param_1[0x11] + 0x6a));
          puVar9 = (undefined8 *)&UNK_110b3e718;
          FUN_109d0e740(&UNK_110b3e718,&lStack_d0);
          uStack_d8 = puVar9[1];
          uStack_e0 = *puVar9;
          FUN_109d04e34(&lStack_d0,&uStack_e0);
          func_0x00010928a5e0(auStack_f8,&UNK_10f5abb91,&lStack_d0);
          func_0x000109259240(auStack_110,auStack_f8,&UNK_10f5abbac);
          FUN_109cd45b4(&UNK_10f5abb81,&UNK_10f5abb81,auStack_110);
          goto LAB_109d09d9c;
        }
      }
      FUN_109d05c78(param_1[0x11]);
LAB_109d09868:
      FUN_109d08258(param_1 + 2,plVar13);
      if (*(char *)((long)param_1 + 0x67) < '\0') {
        __ZdlPv(param_1[10]);
      }
      lVar7 = *plVar13;
      *plVar13 = 0;
      if (lVar7 != 0) {
        FUN_109cda590();
        __ZdlPv();
      }
      func_0x000109d1a1d0(param_1 + 2);
      if (*(char *)((long)param_1 + 0x87) < '\0') {
        __ZdlPv(param_1[0xe]);
      }
      plVar13 = (long *)param_1[0x12];
      if (plVar13 != (long *)0x0) {
        plVar6 = plVar13 + 1;
        do {
          lVar7 = *plVar6;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      __ZdlPv(param_1);
      plVar6 = param_1;
LAB_109d098f0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
    }
    func_0x0001092af97c(plVar6 + 0x12);
  }
LAB_109d09d9c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d09da0);
  (*pcVar4)();
LAB_109d09a44:
  while( true ) {
    param_1[0x17] = lVar7;
    plVar14 = (long *)param_1[0x11];
    plVar6 = plVar14;
    FUN_109d05bec(plVar14,lVar7,param_1 + 0x18);
    if (((ulong)plVar6 & 1) != 0) break;
    lVar7 = lVar7 + 4;
    if (lVar7 == param_1[0x16]) {
      bVar5 = *plVar13 == 0;
      goto LAB_109d09b1c;
    }
  }
  FUN_109d076dc(param_1 + 0x14,plVar14,param_1 + 0xe,lVar7);
  param_1[0x13] = param_1[0x14];
  plVar6 = (long *)(param_1[0x14] + 8);
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(param_1[0x13] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0xc4) = 0;
    lVar8 = param_1[0x13];
    plVar6 = (long *)(lVar8 + 0x10);
    lVar7 = param_1[3];
    do {
      lVar11 = *plVar6;
      if (lVar11 == 0) {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_109d09c40;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  lVar7 = param_1[0x13];
  if (((uint)*(undefined8 *)(param_1[0x13] + 0x10) >> 5 & 1) != 0) goto LAB_109d09b04;
  goto LAB_109d09938;
}



/* Entry: 109d09f64; end: 109d0a113;  */

void FUN_109d09f64(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(byte *)(param_1 + 0xc4) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x98);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 == (long *)0x0) goto LAB_109d0a090;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) != 4) goto LAB_109d0a090;
    do {
      uVar7 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xa8);
    if (plVar5 == (long *)0x0) goto LAB_109d0a090;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) != 4) goto LAB_109d0a090;
    do {
      uVar7 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar7 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_109d0a090:
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  lVar6 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar6 != 0) {
    FUN_109cda590();
    __ZdlPv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d0a114; end: 109d0a17f;  */

long * FUN_109d0a114(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((*(char *)((long)param_1 + 0x22) == '\x05' || *(char *)((long)param_1 + 0x22) == '\x02') &&
      *(byte *)(param_1 + 3) != 1) {
    func_0x00010952d0c4(&UNK_10f5abcd1,&UNK_10f5abcdd,&UNK_10f5abcf1);
  }
  else if (*(byte *)(param_1 + 3) - 1 < 2) {
    return param_1;
  }
  plVar5 = (long *)&UNK_10f5abcd1;
  plVar6 = (long *)&UNK_10f5abcdd;
  func_0x00010952d0c4(&UNK_10f5abcd1,&UNK_10f5abcdd,&UNK_10f5abd21);
  *(undefined1 *)(plVar5 + 3) = 3;
  lVar7 = plVar6[1];
  lVar8 = *plVar6;
  plVar5[1] = plVar6[1];
  *plVar5 = lVar8;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(plVar5 + 3) = 2;
  *(undefined1 *)(plVar5 + 4) = 0;
  *(undefined2 *)((long)plVar5 + 0x21) = 0;
  if (*plVar6 != 0) {
    return plVar5;
  }
  func_0x00010952d0c4(&UNK_10f5abd4d,&UNK_10f5abcd1,&UNK_10f5abd5a);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d0a204);
  (*pcVar4)();
}



/* Entry: 109d0a180; end: 109d0a227;  */

long * FUN_109d0a180(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 3) = 3;
  lVar5 = param_2[1];
  lVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x21) = 0;
  if (*param_2 != 0) {
    return param_1;
  }
  func_0x00010952d0c4(&UNK_10f5abd4d,&UNK_10f5abcd1,&UNK_10f5abd5a);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d0a204);
  (*pcVar4)();
}



/* Entry: 109d0a228; end: 109d0a2eb;  */

undefined8 FUN_109d0a228(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = *param_2;
  lStack_40 = lVar5;
  if (lVar5 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)0x20;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110af5ea0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = lVar5;
  }
  *param_2 = 0;
  plStack_38 = plVar4;
  FUN_109d0a180(param_1,&lStack_40);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109d0a2ec; end: 109d0a3bf;  */

void FUN_109d0a2ec(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x000109265eec(param_1,uVar1);
  if (param_1[1] != *param_1) {
    uVar3 = 0;
    do {
      uVar1 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c067ec0();
      *(int *)(*param_1 + uVar3 * 4) = (int)uVar2;
      _objc_release(uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(param_1[1] - *param_1 >> 2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109d0a3c0; end: 109d0a41f;  */

long FUN_109d0a3c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_109d0b2e8();
  }
  return param_1;
}



/* Entry: 109d0a420; end: 109d0a43f;  */

/* WARNING: Removing unreachable block (ram,0x000109d0a6f0) */
/* WARNING: Removing unreachable block (ram,0x000109d0a68c) */
/* WARNING: Removing unreachable block (ram,0x000109d0a87c) */
/* WARNING: Removing unreachable block (ram,0x000109d0a8d4) */

void FUN_109d0a420(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 unaff_x22;
  bool bVar26;
  long lVar27;
  undefined8 *puVar28;
  long lStack_360;
  long lStack_358;
  long *plStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined7 uStack_328;
  char cStack_321;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_288;
  long lStack_280;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  long lStack_88;
  
  puVar2 = &UNK_10e0403f1;
  puVar3 = &UNK_10f5abdaf;
  FUN_109ceaea0();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar3[0x18] == '\x02') {
    func_0x00010952d0c4(&UNK_10e0403f1,&UNK_10f5abdbe,&UNK_10f5abdcd);
    func_0x00010c09e4e0(unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520(unaff_x22);
    func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd67,unaff_x22);
    goto LAB_109d0ae5c;
  }
  plVar24 = *(long **)(puVar2 + 0x10);
  puVar2 = PTR_PTR_1126ddff0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c640();
  _objc_retain(0);
  lVar4 = *plVar24;
  *plVar24 = (long)puVar2;
  _objc_release(lVar4);
  _objc_release(puVar3);
  if (*plVar24 == 0) {
    func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd74,&UNK_10f5abd87);
    goto LAB_109d0ae5c;
  }
  plVar14 = plVar24 + 1;
  lVar4 = *plVar14;
  lVar22 = plVar24[2];
  while (lVar22 != lVar4) {
    lVar22 = lVar22 + -0x58;
    func_0x000109378c9c(lVar22);
  }
  plVar21 = plVar24 + 4;
  lVar22 = *plVar21;
  plVar24[2] = lVar4;
  lVar4 = plVar24[5];
  while (lVar4 != lVar22) {
    lVar4 = lVar4 + -0x58;
    func_0x000109378c9c(lVar4);
  }
  plVar24[5] = lVar22;
  lVar5 = *plVar24;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf529e0(lVar5);
  func_0x000109378e2c(plVar14,lVar4);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar22) {
        _objc_enumerationMutation(lVar5);
      }
      uVar25 = *(undefined8 *)(lVar27 * 8);
      _objc_retainAutorelease(uVar25);
      func_0x00010bdc3520(uVar25);
      func_0x000107c31940(&uStack_108,uVar25);
      lVar6 = lVar5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0d1ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c22a600();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar8;
      FUN_109d0a2ec(&lStack_188);
      plVar9 = &lStack_188;
      FUN_109cd86d8();
      puVar23 = (undefined8 *)plVar24[2];
      plStack_288 = plVar9;
      lStack_280 = lVar15;
      if (puVar23 < (undefined8 *)plVar24[3]) {
        puVar23[2] = CONCAT17(uStack_f1,uStack_f8);
        puVar23[1] = uStack_100;
        *puVar23 = uStack_108;
        puVar23[4] = lVar15;
        puVar23[3] = plVar9;
        *(undefined4 *)(puVar23 + 5) = 1;
        *(undefined8 *)((long)puVar23 + 0x2c) = 0;
        *(undefined1 *)(puVar23 + 7) = 0;
        *(undefined1 *)(puVar23 + 10) = 0;
        plVar9 = puVar23 + 0xb;
        plVar24[2] = (long)plVar9;
      }
      else {
        plVar9 = plVar14;
        FUN_109d0b160(plVar14,&uStack_108,&plStack_288);
      }
      plVar24[2] = (long)plVar9;
      if (lStack_188 != 0) {
        lStack_180 = lStack_188;
        __ZdlPv();
      }
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar27 = lVar27 + 1;
    } while (lVar4 != lVar27);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar10 = (undefined8 *)*plVar24;
  func_0x00010c0eecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar10;
  func_0x00010bf529e0();
  func_0x000109378e2c(plVar21,puVar23);
  _objc_retain(puVar10);
  puVar23 = puVar10;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (puVar23 == (undefined8 *)0x0) {
    _objc_release(puVar10);
    puVar23 = puVar10;
LAB_109d0ad0c:
    _objc_release(puVar10);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    bVar26 = true;
    do {
      puVar28 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar10);
        }
        uVar25 = *(undefined8 *)((long)puVar28 * 8);
        _objc_retainAutorelease(uVar25);
        func_0x00010bdc3520(uVar25);
        func_0x000107c31940(&uStack_108,uVar25);
        puVar11 = puVar10;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c0d1ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar13;
        func_0x00010bf529e0();
        if (puVar12 == (undefined8 *)0x0) {
          bVar26 = false;
        }
        else {
          puVar17 = puVar13;
          FUN_109d0a2ec(&lStack_188);
          plVar14 = &lStack_188;
          FUN_109cd86d8();
          puVar12 = (undefined8 *)plVar24[5];
          plStack_2d0 = plVar14;
          puStack_2c8 = puVar17;
          if (puVar12 < (undefined8 *)plVar24[6]) {
            puVar12[2] = CONCAT17(uStack_f1,uStack_f8);
            puVar12[1] = uStack_100;
            *puVar12 = uStack_108;
            puVar12[4] = puVar17;
            puVar12[3] = plVar14;
            *(undefined4 *)(puVar12 + 5) = 1;
            *(undefined8 *)((long)puVar12 + 0x2c) = 0;
            *(undefined1 *)(puVar12 + 7) = 0;
            *(undefined1 *)(puVar12 + 10) = 0;
            plVar14 = puVar12 + 0xb;
            plVar24[5] = (long)plVar14;
          }
          else {
            plVar14 = plVar21;
            FUN_109d0b160(plVar21,&uStack_108,&plStack_2d0);
          }
          plVar24[5] = (long)plVar14;
          if (lStack_188 != 0) {
            lStack_180 = lStack_188;
            __ZdlPv();
          }
        }
        _objc_release(puVar13);
        _objc_release(puVar11);
        puVar28 = (undefined8 *)((long)puVar28 + 1);
      } while (puVar23 != puVar28);
      puVar23 = puVar10;
      func_0x00010bf52a60();
    } while (puVar23 != (undefined8 *)0x0);
    _objc_release(puVar10);
    puVar23 = &uStack_320;
    if (bVar26) goto LAB_109d0ad0c;
    _objc_retain(lVar5);
    ppuVar19 = &PTR_PTR_1132feb80;
    FUN_10ae079a0(0,&PTR_PTR_1132feb80);
    FUN_10ae07cd4(ppuVar19,&PTR_PTR_1132feb80);
    lVar4 = plVar24[4];
    lVar22 = plVar24[5];
    while (lVar22 != lVar4) {
      lVar22 = lVar22 + -0x58;
      func_0x000109378c9c(lVar22);
    }
    plVar24[5] = lVar4;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bf529e0(lVar5);
    func_0x00010bffc4a0();
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    puStack_2c8 = (undefined8 *)0x0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar22 = *plStack_2c0;
      do {
        lVar27 = 0;
        do {
          if (*plStack_2c0 != lVar22) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = lVar5;
          func_0x00010c0dff20(lVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___MLMultiArray_1126ddfa8;
          _objc_alloc(PTR__OBJC_CLASS___MLMultiArray_1126ddfa8);
          lVar8 = lVar7;
          func_0x00010c0d1ba0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar8;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar7;
          func_0x00010c0d1ba0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64880();
          lStack_2d8 = 0;
          func_0x00010c045980(puVar3);
          lVar6 = lStack_2d8;
          _objc_retain(lStack_2d8);
          _objc_release(lVar16);
          _objc_release(lVar15);
          _objc_release(lVar8);
          if (lVar6 != 0) {
            func_0x00010c09e4e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            func_0x00010bdc3520(lVar6);
            func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd9b,lVar6);
            goto LAB_109d0ae5c;
          }
          func_0x00010c1d0560(puVar2);
          _objc_release(puVar3);
          _objc_release(lVar7);
          lVar27 = lVar27 + 1;
        } while (lVar4 != lVar27);
        lVar4 = lVar5;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
    _objc_opt_new();
    func_0x00010c21f9a0();
    puVar28 = (undefined8 *)*plVar24;
    puStack_2e0 = (undefined8 *)0x0;
    func_0x00010c106640();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puStack_2e0;
    _objc_retain(puStack_2e0);
    if (puVar23 == (undefined8 *)0x0) {
      if (puVar28 != (undefined8 *)0x0) {
        puVar11 = puVar28;
        func_0x00010c0d1bc0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        lStack_318 = 0;
        uStack_320 = 0;
        uStack_308 = 0;
        plStack_310 = (long *)0x0;
        _objc_retain();
        puVar12 = puVar11;
        func_0x00010bf52a60();
        if (puVar12 != (undefined8 *)0x0) {
          lVar4 = *plStack_310;
          do {
            puVar23 = (undefined8 *)0x0;
            do {
              if (*plStack_310 != lVar4) {
                _objc_enumerationMutation(puVar11);
              }
              uVar25 = *(undefined8 *)(lStack_318 + (long)puVar23 * 8);
              _objc_retainAutorelease(uVar25);
              func_0x00010bdc3520(uVar25);
              func_0x000107c31940(&uStack_338,uVar25);
              puVar17 = puVar11;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar17;
              func_0x00010c22a600();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar18;
              FUN_109d0a2ec(&lStack_360);
              plVar14 = &lStack_360;
              FUN_109cd86d8();
              puVar13 = (undefined8 *)plVar24[5];
              plStack_348 = plVar14;
              puStack_340 = puVar20;
              if (puVar13 < (undefined8 *)plVar24[6]) {
                if (cStack_321 < '\0') {
                  func_0x000107c3192c(puVar13,uStack_338,uStack_330);
                }
                else {
                  puVar13[2] = CONCAT17(cStack_321,uStack_328);
                  puVar13[1] = uStack_330;
                  *puVar13 = uStack_338;
                }
                puVar13[4] = puStack_340;
                puVar13[3] = plStack_348;
                *(undefined4 *)(puVar13 + 5) = 1;
                *(undefined8 *)((long)puVar13 + 0x2c) = 0;
                *(undefined1 *)(puVar13 + 7) = 0;
                *(undefined1 *)(puVar13 + 10) = 0;
                plVar14 = puVar13 + 0xb;
                plVar24[5] = (long)plVar14;
              }
              else {
                plVar14 = plVar21;
                FUN_109d0b160(plVar21,&uStack_338,&plStack_348);
              }
              plVar24[5] = (long)plVar14;
              if (lStack_360 != 0) {
                lStack_358 = lStack_360;
                __ZdlPv();
              }
              _objc_release(puVar18);
              _objc_release(puVar17);
              if (cStack_321 < '\0') {
                __ZdlPv(uStack_338);
              }
              puVar23 = (undefined8 *)((long)puVar23 + 1);
            } while (puVar12 != puVar23);
            puVar12 = puVar11;
            func_0x00010bf52a60();
          } while (puVar12 != (undefined8 *)0x0);
        }
        _objc_release(puVar11);
        _objc_release(puVar11);
      }
      _objc_release(puVar28);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar5);
      goto LAB_109d0ad0c;
    }
  }
  func_0x00010c09e4e0(puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520(puVar23);
  func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd9b,puVar23);
LAB_109d0ae5c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d0ae60);
  (*pcVar1)();
}



/* Entry: 109d0a440; end: 109d0b133;  */

/* WARNING: Removing unreachable block (ram,0x000109d0a6f0) */
/* WARNING: Removing unreachable block (ram,0x000109d0a68c) */
/* WARNING: Removing unreachable block (ram,0x000109d0a87c) */
/* WARNING: Removing unreachable block (ram,0x000109d0a8d4) */

void FUN_109d0a440(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 unaff_x22;
  bool bVar26;
  long lVar27;
  undefined8 *puVar28;
  long lStack_350;
  long lStack_348;
  long *plStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined7 uStack_318;
  char cStack_311;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_278;
  long lStack_270;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 0x18) == '\x02') {
    func_0x00010952d0c4(&UNK_10e0403f1,&UNK_10f5abdbe,&UNK_10f5abdcd);
    func_0x00010c09e4e0(unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520(unaff_x22);
    func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd67,unaff_x22);
    goto LAB_109d0ae5c;
  }
  plVar24 = *(long **)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126ddff0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c640();
  _objc_retain(0);
  lVar4 = *plVar24;
  *plVar24 = (long)puVar2;
  _objc_release(lVar4);
  _objc_release(puVar3);
  if (*plVar24 == 0) {
    func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd74,&UNK_10f5abd87);
    goto LAB_109d0ae5c;
  }
  plVar14 = plVar24 + 1;
  lVar4 = *plVar14;
  lVar22 = plVar24[2];
  while (lVar22 != lVar4) {
    lVar22 = lVar22 + -0x58;
    func_0x000109378c9c(lVar22);
  }
  plVar21 = plVar24 + 4;
  lVar22 = *plVar21;
  plVar24[2] = lVar4;
  lVar4 = plVar24[5];
  while (lVar4 != lVar22) {
    lVar4 = lVar4 + -0x58;
    func_0x000109378c9c(lVar4);
  }
  plVar24[5] = lVar22;
  lVar5 = *plVar24;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf529e0(lVar5);
  func_0x000109378e2c(plVar14,lVar4);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar22) {
        _objc_enumerationMutation(lVar5);
      }
      uVar25 = *(undefined8 *)(lVar27 * 8);
      _objc_retainAutorelease(uVar25);
      func_0x00010bdc3520(uVar25);
      func_0x000107c31940(&uStack_f8,uVar25);
      lVar6 = lVar5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0d1ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c22a600();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar8;
      FUN_109d0a2ec(&lStack_178);
      plVar9 = &lStack_178;
      FUN_109cd86d8();
      puVar23 = (undefined8 *)plVar24[2];
      plStack_278 = plVar9;
      lStack_270 = lVar15;
      if (puVar23 < (undefined8 *)plVar24[3]) {
        puVar23[2] = CONCAT17(uStack_e1,uStack_e8);
        puVar23[1] = uStack_f0;
        *puVar23 = uStack_f8;
        puVar23[4] = lVar15;
        puVar23[3] = plVar9;
        *(undefined4 *)(puVar23 + 5) = 1;
        *(undefined8 *)((long)puVar23 + 0x2c) = 0;
        *(undefined1 *)(puVar23 + 7) = 0;
        *(undefined1 *)(puVar23 + 10) = 0;
        plVar9 = puVar23 + 0xb;
        plVar24[2] = (long)plVar9;
      }
      else {
        plVar9 = plVar14;
        FUN_109d0b160(plVar14,&uStack_f8,&plStack_278);
      }
      plVar24[2] = (long)plVar9;
      if (lStack_178 != 0) {
        lStack_170 = lStack_178;
        __ZdlPv();
      }
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar27 = lVar27 + 1;
    } while (lVar4 != lVar27);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar10 = (undefined8 *)*plVar24;
  func_0x00010c0eecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar10;
  func_0x00010bf529e0();
  func_0x000109378e2c(plVar21,puVar23);
  _objc_retain(puVar10);
  puVar23 = puVar10;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (puVar23 == (undefined8 *)0x0) {
    _objc_release(puVar10);
    puVar23 = puVar10;
LAB_109d0ad0c:
    _objc_release(puVar10);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    bVar26 = true;
    do {
      puVar28 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar10);
        }
        uVar25 = *(undefined8 *)((long)puVar28 * 8);
        _objc_retainAutorelease(uVar25);
        func_0x00010bdc3520(uVar25);
        func_0x000107c31940(&uStack_f8,uVar25);
        puVar11 = puVar10;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c0d1ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar13;
        func_0x00010bf529e0();
        if (puVar12 == (undefined8 *)0x0) {
          bVar26 = false;
        }
        else {
          puVar17 = puVar13;
          FUN_109d0a2ec(&lStack_178);
          plVar14 = &lStack_178;
          FUN_109cd86d8();
          puVar12 = (undefined8 *)plVar24[5];
          plStack_2c0 = plVar14;
          puStack_2b8 = puVar17;
          if (puVar12 < (undefined8 *)plVar24[6]) {
            puVar12[2] = CONCAT17(uStack_e1,uStack_e8);
            puVar12[1] = uStack_f0;
            *puVar12 = uStack_f8;
            puVar12[4] = puVar17;
            puVar12[3] = plVar14;
            *(undefined4 *)(puVar12 + 5) = 1;
            *(undefined8 *)((long)puVar12 + 0x2c) = 0;
            *(undefined1 *)(puVar12 + 7) = 0;
            *(undefined1 *)(puVar12 + 10) = 0;
            plVar14 = puVar12 + 0xb;
            plVar24[5] = (long)plVar14;
          }
          else {
            plVar14 = plVar21;
            FUN_109d0b160(plVar21,&uStack_f8,&plStack_2c0);
          }
          plVar24[5] = (long)plVar14;
          if (lStack_178 != 0) {
            lStack_170 = lStack_178;
            __ZdlPv();
          }
        }
        _objc_release(puVar13);
        _objc_release(puVar11);
        puVar28 = (undefined8 *)((long)puVar28 + 1);
      } while (puVar23 != puVar28);
      puVar23 = puVar10;
      func_0x00010bf52a60();
    } while (puVar23 != (undefined8 *)0x0);
    _objc_release(puVar10);
    puVar23 = &uStack_310;
    if (bVar26) goto LAB_109d0ad0c;
    _objc_retain(lVar5);
    ppuVar19 = &PTR_PTR_1132feb80;
    FUN_10ae079a0(0,&PTR_PTR_1132feb80);
    FUN_10ae07cd4(ppuVar19,&PTR_PTR_1132feb80);
    lVar4 = plVar24[4];
    lVar22 = plVar24[5];
    while (lVar22 != lVar4) {
      lVar22 = lVar22 + -0x58;
      func_0x000109378c9c(lVar22);
    }
    plVar24[5] = lVar4;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bf529e0(lVar5);
    func_0x00010bffc4a0();
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    puStack_2b8 = (undefined8 *)0x0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar22 = *plStack_2b0;
      do {
        lVar27 = 0;
        do {
          if (*plStack_2b0 != lVar22) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = lVar5;
          func_0x00010c0dff20(lVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___MLMultiArray_1126ddfa8;
          _objc_alloc(PTR__OBJC_CLASS___MLMultiArray_1126ddfa8);
          lVar8 = lVar7;
          func_0x00010c0d1ba0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar8;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar7;
          func_0x00010c0d1ba0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64880();
          lStack_2c8 = 0;
          func_0x00010c045980(puVar3);
          lVar6 = lStack_2c8;
          _objc_retain(lStack_2c8);
          _objc_release(lVar16);
          _objc_release(lVar15);
          _objc_release(lVar8);
          if (lVar6 != 0) {
            func_0x00010c09e4e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            func_0x00010bdc3520(lVar6);
            func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd9b,lVar6);
            goto LAB_109d0ae5c;
          }
          func_0x00010c1d0560(puVar2);
          _objc_release(puVar3);
          _objc_release(lVar7);
          lVar27 = lVar27 + 1;
        } while (lVar4 != lVar27);
        lVar4 = lVar5;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
    _objc_opt_new();
    func_0x00010c21f9a0();
    puVar28 = (undefined8 *)*plVar24;
    puStack_2d0 = (undefined8 *)0x0;
    func_0x00010c106640();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puStack_2d0;
    _objc_retain(puStack_2d0);
    if (puVar23 == (undefined8 *)0x0) {
      if (puVar28 != (undefined8 *)0x0) {
        puVar11 = puVar28;
        func_0x00010c0d1bc0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        lStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        plStack_300 = (long *)0x0;
        _objc_retain();
        puVar12 = puVar11;
        func_0x00010bf52a60();
        if (puVar12 != (undefined8 *)0x0) {
          lVar4 = *plStack_300;
          do {
            puVar23 = (undefined8 *)0x0;
            do {
              if (*plStack_300 != lVar4) {
                _objc_enumerationMutation(puVar11);
              }
              uVar25 = *(undefined8 *)(lStack_308 + (long)puVar23 * 8);
              _objc_retainAutorelease(uVar25);
              func_0x00010bdc3520(uVar25);
              func_0x000107c31940(&uStack_328,uVar25);
              puVar17 = puVar11;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar17;
              func_0x00010c22a600();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar18;
              FUN_109d0a2ec(&lStack_350);
              plVar14 = &lStack_350;
              FUN_109cd86d8();
              puVar13 = (undefined8 *)plVar24[5];
              plStack_338 = plVar14;
              puStack_330 = puVar20;
              if (puVar13 < (undefined8 *)plVar24[6]) {
                if (cStack_311 < '\0') {
                  func_0x000107c3192c(puVar13,uStack_328,uStack_320);
                }
                else {
                  puVar13[2] = CONCAT17(cStack_311,uStack_318);
                  puVar13[1] = uStack_320;
                  *puVar13 = uStack_328;
                }
                puVar13[4] = puStack_330;
                puVar13[3] = plStack_338;
                *(undefined4 *)(puVar13 + 5) = 1;
                *(undefined8 *)((long)puVar13 + 0x2c) = 0;
                *(undefined1 *)(puVar13 + 7) = 0;
                *(undefined1 *)(puVar13 + 10) = 0;
                plVar14 = puVar13 + 0xb;
                plVar24[5] = (long)plVar14;
              }
              else {
                plVar14 = plVar21;
                FUN_109d0b160(plVar21,&uStack_328,&plStack_338);
              }
              plVar24[5] = (long)plVar14;
              if (lStack_350 != 0) {
                lStack_348 = lStack_350;
                __ZdlPv();
              }
              _objc_release(puVar18);
              _objc_release(puVar17);
              if (cStack_311 < '\0') {
                __ZdlPv(uStack_328);
              }
              puVar23 = (undefined8 *)((long)puVar23 + 1);
            } while (puVar12 != puVar23);
            puVar12 = puVar11;
            func_0x00010bf52a60();
          } while (puVar12 != (undefined8 *)0x0);
        }
        _objc_release(puVar11);
        _objc_release(puVar11);
      }
      _objc_release(puVar28);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar5);
      goto LAB_109d0ad0c;
    }
  }
  func_0x00010c09e4e0(puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520(puVar23);
  func_0x00010952d0c4(&UNK_10e0403bc,&UNK_10f5abd9b,puVar23);
LAB_109d0ae5c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d0ae60);
  (*pcVar1)();
}



/* Entry: 109d0b134; end: 109d0b15f;  */

long FUN_109d0b134(long param_1)

{
  return *(long *)(param_1 + 0x10) + 8;
}



/* Entry: 109d0b160; end: 109d0b2e7;  */

long * FUN_109d0b160(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar4 < 0x2e8ba2e8ba2e8bb) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5d1745d1745d1746;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000109378aac();
    }
    puVar1 = (undefined8 *)((long)plVar2 + lVar6);
    plStack_40 = plVar2 + uVar5 * 0xb;
    plStack_48 = puVar1;
    plStack_58 = plVar2;
    plStack_50 = puVar1;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar8;
      *puVar1 = uVar7;
    }
    uVar7 = *param_3;
    puVar1[4] = param_3[1];
    puVar1[3] = uVar7;
    *(undefined4 *)(puVar1 + 5) = 1;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    plStack_48 = plStack_48 + 0xb;
    lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
    func_0x000109378f10(param_1,*param_1,param_1[1],lVar6);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar6;
    func_0x0001056754bc(&plStack_58);
    return plVar2;
  }
  func_0x000109378a98();
  func_0x0001056754bc(&plStack_58);
  __Unwind_Resume();
  plStack_98 = param_1 + 4;
  func_0x000109378cec(&plStack_98);
  plStack_98 = param_1 + 1;
  func_0x000109378cec(&plStack_98);
  _objc_release(*param_1);
  __ZdlPv(param_1);
  return param_1;
}



/* Entry: 109d0b2e8; end: 109d0b38f;  */

void FUN_109d0b2e8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x000109378cec(&puStack_28);
  puStack_28 = param_1 + 1;
  func_0x000109378cec(&puStack_28);
  _objc_release(*param_1);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109d0b390; end: 109d0b393;  */

long FUN_109d0b390(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x30;
  func_0x000109378cec(&lStack_28);
  lStack_28 = param_1 + 0x18;
  func_0x000109378cec(&lStack_28);
  FUN_109cf9c2c(param_1 + 0x10,0);
  return param_1;
}



/* Entry: 109d0b394; end: 109d0b3a7;  */

void FUN_109d0b394(void)

{
  func_0x000109d0b33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d0b3a8; end: 109d0b503;  */

undefined8 * FUN_109d0b3a8(undefined *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *unaff_x19;
  long unaff_x20;
  undefined8 *puVar17;
  undefined8 unaff_x21;
  undefined8 *puVar18;
  undefined8 unaff_x22;
  undefined8 *puVar19;
  undefined8 unaff_x23;
  undefined8 *puVar20;
  undefined8 unaff_x24;
  long lVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar21 = param_2;
    puVar8 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar3 = (undefined8 *)0x38;
    __Znwm();
    *puVar3 = &PTR_DAT_110b30d40;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)((long)puVar3 + 0x1d) = 0;
    FUN_109cf9c2c(puVar8 + 0x10,puVar3);
    puVar3 = *(undefined8 **)(puVar8 + 0x10);
    plVar5 = (long *)lVar21;
    func_0x00010b4d15d4();
    if (((ulong)puVar3 & 1) != 0) {
      puVar18 = (undefined8 *)(puVar8 + 0x18);
      puVar19 = (undefined8 *)*puVar18;
      puVar17 = *(undefined8 **)(puVar8 + 0x20);
      while (puVar17 != puVar19) {
        puVar17 = puVar17 + -0xb;
        puVar3 = puVar17;
        func_0x000109378c9c(puVar17);
      }
      puVar17 = (undefined8 *)(puVar8 + 0x30);
      puVar20 = (undefined8 *)*puVar17;
      *(undefined8 **)(puVar8 + 0x20) = puVar19;
      puVar19 = *(undefined8 **)(puVar8 + 0x38);
      while (puVar19 != puVar20) {
        puVar19 = puVar19 + -0xb;
        puVar3 = puVar19;
        func_0x000109378c9c(puVar19);
      }
      *(undefined8 **)(puVar8 + 0x38) = puVar20;
      ppuVar7 = *(undefined ***)(*(long *)(puVar8 + 0x10) + 0x18);
      ppuVar6 = &PTR_PTR_1132f05f8;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar6 = ppuVar7;
      }
      puVar11 = ppuVar6[3];
      ppuVar13 = ppuVar6 + 3;
      if (((ulong)puVar11 & 1) != 0) {
        ppuVar13 = (undefined **)(puVar11 + 7);
      }
      if (*(int *)(ppuVar6 + 4) != 0) {
        lVar21 = (long)*(int *)(ppuVar6 + 4) << 3;
        do {
          puVar3 = puVar18;
          FUN_109d0b670(puVar18,*(undefined8 *)(*ppuVar13 + 0x18),*(undefined8 *)(*ppuVar13 + 0x28))
          ;
          lVar21 = lVar21 + -8;
          ppuVar13 = ppuVar13 + 1;
        } while (lVar21 != 0);
        ppuVar7 = *(undefined ***)(*(long *)(puVar8 + 0x10) + 0x18);
      }
      ppuVar6 = &PTR_PTR_1132f05f8;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar6 = ppuVar7;
      }
      puVar8 = ppuVar6[6];
      ppuVar7 = ppuVar6 + 6;
      if (((ulong)puVar8 & 1) != 0) {
        ppuVar7 = (undefined **)(puVar8 + 7);
      }
      if (*(int *)(ppuVar6 + 7) != 0) {
        lVar21 = (long)*(int *)(ppuVar6 + 7) << 3;
        do {
          puVar3 = puVar17;
          FUN_109d0b670(puVar17,*(undefined8 *)(*ppuVar7 + 0x18),*(undefined8 *)(*ppuVar7 + 0x28));
          lVar21 = lVar21 + -8;
          ppuVar7 = ppuVar7 + 1;
        } while (lVar21 != 0);
      }
      return puVar3;
    }
    param_1 = &UNK_10f5abe15;
    unaff_x30 = FUN_109d0b504;
    FUN_109cd880c();
    if (*(char *)(plVar5 + 3) != '\x02') break;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_2 = *plVar5;
    unaff_x19 = puVar8;
    unaff_x20 = lVar21;
  }
  *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x29;
  *(code **)((long)register0x00000008 + -0x48) = FUN_109d0b504;
  puVar3 = (undefined8 *)&UNK_10e04046e;
  puVar11 = &UNK_10f5abdbe;
  ppuVar6 = (undefined **)&UNK_10f5abe32;
  func_0x00010952d0c4();
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x109d0b540;
  ppuVar7 = &PTR_PTR_1132f05f8;
  if (*(undefined ***)(puVar3[2] + 0x18) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(puVar3[2] + 0x18);
  }
  puVar12 = ppuVar7[3];
  ppuVar13 = ppuVar7 + 3;
  if (((ulong)puVar12 & 1) != 0) {
    ppuVar13 = (undefined **)(puVar12 + 7);
  }
  if (*(int *)(ppuVar7 + 4) != 0) {
    lVar14 = (long)*(int *)(ppuVar7 + 4) << 3;
    do {
      ppuVar15 = &PTR_PTR_1132eee20;
      if (*(undefined ***)(*ppuVar13 + 0x28) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(*ppuVar13 + 0x28);
      }
      ppuVar16 = &PTR_PTR_1132eedd8;
      if (*(int *)((long)ppuVar15 + 0x24) == 5) {
        ppuVar16 = (undefined **)ppuVar15[3];
      }
      if (*(int *)((long)ppuVar16 + 0x24) != 0x10020) goto LAB_109d0b658;
      ppuVar13 = ppuVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  puVar12 = ppuVar7[6];
  ppuVar13 = ppuVar7 + 6;
  if (((ulong)puVar12 & 1) != 0) {
    ppuVar13 = (undefined **)(puVar12 + 7);
  }
  if (*(int *)(ppuVar7 + 7) != 0) {
    lVar14 = (long)*(int *)(ppuVar7 + 7) << 3;
    do {
      ppuVar7 = &PTR_PTR_1132eee20;
      if (*(undefined ***)(*ppuVar13 + 0x28) != (undefined **)0x0) {
        ppuVar7 = *(undefined ***)(*ppuVar13 + 0x28);
      }
      ppuVar15 = &PTR_PTR_1132eedd8;
      if (*(int *)((long)ppuVar7 + 0x24) == 5) {
        ppuVar15 = (undefined **)ppuVar7[3];
      }
      if (*(int *)((long)ppuVar15 + 0x24) != 0x10020) {
LAB_109d0b658:
        FUN_109cd880c(&UNK_10f5abe6f);
LAB_109d0b664:
        puVar12 = &UNK_10f5abeaf;
        FUN_109cd880c();
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
        *(long *)((long)register0x00000008 + -0x80) = lVar21;
        *(undefined **)((long)register0x00000008 + -0x78) = puVar8;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x60);
        *(code **)((long)register0x00000008 + -0x68) = FUN_109d0b670;
        ppuVar7 = &PTR_PTR_1132eee20;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar7 = ppuVar6;
        }
        if (*(int *)((long)ppuVar7 + 0x24) == 5) {
          puVar3 = *(undefined8 **)(ppuVar7[3] + 0x18);
          iVar2 = *(int *)(ppuVar7[3] + 0x10);
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          puVar8 = puVar11;
          if (iVar2 != 0) {
            puVar8 = (undefined *)(long)iVar2;
            func_0x000109265f60((undefined1 *)((long)register0x00000008 + -0xa8));
            lVar21 = (long)iVar2 << 3;
            puVar9 = *(undefined4 **)((long)register0x00000008 + -0xa0);
            do {
              puVar10 = puVar9 + 1;
              *puVar9 = (int)*puVar3;
              lVar21 = lVar21 + -8;
              puVar9 = puVar10;
              puVar3 = puVar3 + 1;
            } while (lVar21 != 0);
            *(undefined4 **)((long)register0x00000008 + -0xa0) = puVar10;
          }
          puVar4 = (undefined1 *)((long)register0x00000008 + -0xa8);
          FUN_109cd86d8();
          *(undefined1 **)((long)register0x00000008 + -0xb8) = puVar4;
          *(undefined **)((long)register0x00000008 + -0xb0) = puVar8;
          uVar1 = *(ulong *)(puVar12 + 8);
          if (uVar1 < *(ulong *)(puVar12 + 0x10)) {
            func_0x0001094c8300(uVar1,(ulong)puVar11 & 0xfffffffffffffffc,
                                (undefined1 *)((long)register0x00000008 + -0xb8));
            puVar8 = (undefined *)(uVar1 + 0x58);
            *(undefined **)(puVar12 + 8) = puVar8;
          }
          else {
            puVar8 = puVar12;
            func_0x0001094c81b8(puVar12,(ulong)puVar11 & 0xfffffffffffffffc,
                                (undefined1 *)((long)register0x00000008 + -0xb8));
          }
          *(undefined **)(puVar12 + 8) = puVar8;
          puVar3 = *(undefined8 **)((long)register0x00000008 + -0xa8);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 **)((long)register0x00000008 + -0xa0) = puVar3;
            __ZdlPv();
          }
          return puVar3;
        }
        puVar8 = &UNK_10f5abf05;
        FUN_109cd880c(&UNK_10f5abf05);
        if (*(long *)((long)register0x00000008 + -0xa8) != 0) {
          *(long *)((long)register0x00000008 + -0xa0) = *(long *)((long)register0x00000008 + -0xa8);
          __ZdlPv();
        }
        __Unwind_Resume(puVar8);
        return (undefined8 *)(puVar8 + 0x18);
      }
      if ((*(int *)(ppuVar15 + 2) != 5) ||
         (*(long *)ppuVar15[3] != *(long *)((long)ppuVar15[3] + 8))) goto LAB_109d0b664;
      ppuVar13 = ppuVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  return puVar3;
}



/* Entry: 109d0b504; end: 109d0b66f;  */

undefined8 * FUN_109d0b504(undefined *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *unaff_x19;
  undefined8 *puVar16;
  long unaff_x20;
  undefined8 *puVar17;
  undefined8 unaff_x21;
  undefined8 *puVar18;
  undefined8 unaff_x22;
  undefined8 *puVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (puVar9 = param_1, *(char *)(param_2 + 3) == '\x02') {
    lVar6 = *param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar3 = (undefined8 *)0x38;
    __Znwm();
    *puVar3 = &PTR_DAT_110b30d40;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)((long)puVar3 + 0x1d) = 0;
    FUN_109cf9c2c(puVar9 + 0x10,puVar3);
    puVar3 = *(undefined8 **)(puVar9 + 0x10);
    param_2 = (long *)lVar6;
    func_0x00010b4d15d4();
    if (((ulong)puVar3 & 1) != 0) {
      puVar17 = (undefined8 *)(puVar9 + 0x18);
      puVar18 = (undefined8 *)*puVar17;
      puVar16 = *(undefined8 **)(puVar9 + 0x20);
      while (puVar16 != puVar18) {
        puVar16 = puVar16 + -0xb;
        puVar3 = puVar16;
        func_0x000109378c9c(puVar16);
      }
      puVar16 = (undefined8 *)(puVar9 + 0x30);
      puVar19 = (undefined8 *)*puVar16;
      *(undefined8 **)(puVar9 + 0x20) = puVar18;
      puVar18 = *(undefined8 **)(puVar9 + 0x38);
      while (puVar18 != puVar19) {
        puVar18 = puVar18 + -0xb;
        puVar3 = puVar18;
        func_0x000109378c9c(puVar18);
      }
      *(undefined8 **)(puVar9 + 0x38) = puVar19;
      ppuVar8 = *(undefined ***)(*(long *)(puVar9 + 0x10) + 0x18);
      ppuVar7 = &PTR_PTR_1132f05f8;
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar7 = ppuVar8;
      }
      puVar12 = ppuVar7[3];
      ppuVar13 = ppuVar7 + 3;
      if (((ulong)puVar12 & 1) != 0) {
        ppuVar13 = (undefined **)(puVar12 + 7);
      }
      if (*(int *)(ppuVar7 + 4) != 0) {
        lVar6 = (long)*(int *)(ppuVar7 + 4) << 3;
        do {
          puVar3 = puVar17;
          FUN_109d0b670(puVar17,*(undefined8 *)(*ppuVar13 + 0x18),*(undefined8 *)(*ppuVar13 + 0x28))
          ;
          lVar6 = lVar6 + -8;
          ppuVar13 = ppuVar13 + 1;
        } while (lVar6 != 0);
        ppuVar8 = *(undefined ***)(*(long *)(puVar9 + 0x10) + 0x18);
      }
      ppuVar7 = &PTR_PTR_1132f05f8;
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar7 = ppuVar8;
      }
      puVar9 = ppuVar7[6];
      ppuVar8 = ppuVar7 + 6;
      if (((ulong)puVar9 & 1) != 0) {
        ppuVar8 = (undefined **)(puVar9 + 7);
      }
      if (*(int *)(ppuVar7 + 7) != 0) {
        lVar6 = (long)*(int *)(ppuVar7 + 7) << 3;
        do {
          puVar3 = puVar16;
          FUN_109d0b670(puVar16,*(undefined8 *)(*ppuVar8 + 0x18),*(undefined8 *)(*ppuVar8 + 0x28));
          lVar6 = lVar6 + -8;
          ppuVar8 = ppuVar8 + 1;
        } while (lVar6 != 0);
      }
      return puVar3;
    }
    param_1 = &UNK_10f5abe15;
    unaff_x30 = FUN_109d0b504;
    FUN_109cd880c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = puVar9;
    unaff_x20 = lVar6;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = (undefined8 *)&UNK_10e04046e;
  puVar9 = &UNK_10f5abdbe;
  ppuVar7 = (undefined **)&UNK_10f5abe32;
  func_0x00010952d0c4();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x109d0b540;
  ppuVar8 = &PTR_PTR_1132f05f8;
  if (*(undefined ***)(puVar3[2] + 0x18) != (undefined **)0x0) {
    ppuVar8 = *(undefined ***)(puVar3[2] + 0x18);
  }
  puVar12 = ppuVar8[3];
  ppuVar13 = ppuVar8 + 3;
  if (((ulong)puVar12 & 1) != 0) {
    ppuVar13 = (undefined **)(puVar12 + 7);
  }
  if (*(int *)(ppuVar8 + 4) != 0) {
    lVar6 = (long)*(int *)(ppuVar8 + 4) << 3;
    do {
      ppuVar14 = &PTR_PTR_1132eee20;
      if (*(undefined ***)(*ppuVar13 + 0x28) != (undefined **)0x0) {
        ppuVar14 = *(undefined ***)(*ppuVar13 + 0x28);
      }
      ppuVar15 = &PTR_PTR_1132eedd8;
      if (*(int *)((long)ppuVar14 + 0x24) == 5) {
        ppuVar15 = (undefined **)ppuVar14[3];
      }
      if (*(int *)((long)ppuVar15 + 0x24) != 0x10020) goto LAB_109d0b658;
      ppuVar13 = ppuVar13 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  puVar12 = ppuVar8[6];
  ppuVar13 = ppuVar8 + 6;
  if (((ulong)puVar12 & 1) != 0) {
    ppuVar13 = (undefined **)(puVar12 + 7);
  }
  if (*(int *)(ppuVar8 + 7) != 0) {
    lVar6 = (long)*(int *)(ppuVar8 + 7) << 3;
    do {
      ppuVar8 = &PTR_PTR_1132eee20;
      if (*(undefined ***)(*ppuVar13 + 0x28) != (undefined **)0x0) {
        ppuVar8 = *(undefined ***)(*ppuVar13 + 0x28);
      }
      ppuVar14 = &PTR_PTR_1132eedd8;
      if (*(int *)((long)ppuVar8 + 0x24) == 5) {
        ppuVar14 = (undefined **)ppuVar8[3];
      }
      if (*(int *)((long)ppuVar14 + 0x24) != 0x10020) {
LAB_109d0b658:
        FUN_109cd880c(&UNK_10f5abe6f);
LAB_109d0b664:
        puVar12 = &UNK_10f5abeaf;
        FUN_109cd880c();
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
        *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
        *(undefined **)((long)register0x00000008 + -0x38) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x30) =
             (undefined1 *)((long)register0x00000008 + -0x20);
        *(code **)((long)register0x00000008 + -0x28) = FUN_109d0b670;
        ppuVar8 = &PTR_PTR_1132eee20;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar8 = ppuVar7;
        }
        if (*(int *)((long)ppuVar8 + 0x24) == 5) {
          puVar3 = *(undefined8 **)(ppuVar8[3] + 0x18);
          iVar2 = *(int *)(ppuVar8[3] + 0x10);
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
          puVar5 = puVar9;
          if (iVar2 != 0) {
            puVar5 = (undefined *)(long)iVar2;
            func_0x000109265f60((undefined1 *)((long)register0x00000008 + -0x68));
            lVar6 = (long)iVar2 << 3;
            puVar10 = *(undefined4 **)((long)register0x00000008 + -0x60);
            do {
              puVar11 = puVar10 + 1;
              *puVar10 = (int)*puVar3;
              lVar6 = lVar6 + -8;
              puVar10 = puVar11;
              puVar3 = puVar3 + 1;
            } while (lVar6 != 0);
            *(undefined4 **)((long)register0x00000008 + -0x60) = puVar11;
          }
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x68);
          FUN_109cd86d8();
          *(undefined1 **)((long)register0x00000008 + -0x78) = puVar4;
          *(undefined **)((long)register0x00000008 + -0x70) = puVar5;
          uVar1 = *(ulong *)(puVar12 + 8);
          if (uVar1 < *(ulong *)(puVar12 + 0x10)) {
            func_0x0001094c8300(uVar1,(ulong)puVar9 & 0xfffffffffffffffc,
                                (undefined1 *)((long)register0x00000008 + -0x78));
            puVar5 = (undefined *)(uVar1 + 0x58);
            *(undefined **)(puVar12 + 8) = puVar5;
          }
          else {
            puVar5 = puVar12;
            func_0x0001094c81b8(puVar12,(ulong)puVar9 & 0xfffffffffffffffc,
                                (undefined1 *)((long)register0x00000008 + -0x78));
          }
          *(undefined **)(puVar12 + 8) = puVar5;
          puVar3 = *(undefined8 **)((long)register0x00000008 + -0x68);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 **)((long)register0x00000008 + -0x60) = puVar3;
            __ZdlPv();
          }
          return puVar3;
        }
        puVar9 = &UNK_10f5abf05;
        FUN_109cd880c(&UNK_10f5abf05);
        if (*(long *)((long)register0x00000008 + -0x68) != 0) {
          *(long *)((long)register0x00000008 + -0x60) = *(long *)((long)register0x00000008 + -0x68);
          __ZdlPv();
        }
        __Unwind_Resume(puVar9);
        return (undefined8 *)(puVar9 + 0x18);
      }
      if ((*(int *)(ppuVar14 + 2) != 5) ||
         (*(long *)ppuVar14[3] != *(long *)((long)ppuVar14[3] + 8))) goto LAB_109d0b664;
      ppuVar13 = ppuVar13 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return puVar3;
}



/* Entry: 109d0b670; end: 109d0b78f;  */

undefined * FUN_109d0b670(long param_1,ulong param_2,undefined **param_3)

{
  ulong uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined **ppuStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &PTR_PTR_1132eee20;
  if (param_3 != (undefined **)0x0) {
    ppuVar3 = param_3;
  }
  if (*(int *)((long)ppuVar3 + 0x24) != 5) {
    puVar4 = &UNK_10f5abf05;
    FUN_109cd880c(&UNK_10f5abf05);
    if (puStack_48 != (undefined *)0x0) {
      puStack_40 = (undefined4 *)puStack_48;
      __ZdlPv();
    }
    __Unwind_Resume(puVar4);
    return puVar4 + 0x18;
  }
  puVar8 = *(undefined8 **)(ppuVar3[3] + 0x18);
  iVar2 = *(int *)(ppuVar3[3] + 0x10);
  puStack_48 = (undefined *)0x0;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  uVar5 = param_2;
  if (iVar2 != 0) {
    uVar5 = (long)iVar2;
    func_0x000109265f60(&puStack_48);
    lVar6 = (long)iVar2 << 3;
    puVar7 = puStack_40;
    do {
      puStack_40 = puVar7 + 1;
      *puVar7 = (int)*puVar8;
      lVar6 = lVar6 + -8;
      puVar7 = puStack_40;
      puVar8 = puVar8 + 1;
    } while (lVar6 != 0);
  }
  ppuVar3 = &puStack_48;
  FUN_109cd86d8();
  uVar1 = *(ulong *)(param_1 + 8);
  ppuStack_58 = ppuVar3;
  uStack_50 = uVar5;
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001094c8300(uVar1,param_2 & 0xfffffffffffffffc,&ppuStack_58);
    lVar6 = uVar1 + 0x58;
    *(long *)(param_1 + 8) = lVar6;
  }
  else {
    lVar6 = param_1;
    func_0x0001094c81b8(param_1,param_2 & 0xfffffffffffffffc,&ppuStack_58);
  }
  *(long *)(param_1 + 8) = lVar6;
  if (puStack_48 != (undefined *)0x0) {
    puStack_40 = (undefined4 *)puStack_48;
    __ZdlPv();
  }
  return puStack_48;
}



/* Entry: 109d0b790; end: 109d0b79f;  */

long FUN_109d0b790(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 109d0b7a0; end: 109d0b7ff;  */

undefined8 * FUN_109d0b7a0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b3e648;
  puStack_28 = param_1 + 7;
  func_0x000109378cec(&puStack_28);
  puStack_28 = param_1 + 4;
  func_0x000109378cec(&puStack_28);
  FUN_109cfb208(param_1 + 2);
  return param_1;
}



/* Entry: 109d0b800; end: 109d0b803;  */

undefined8 * FUN_109d0b800(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b3e648;
  puStack_28 = param_1 + 7;
  func_0x000109378cec(&puStack_28);
  puStack_28 = param_1 + 4;
  func_0x000109378cec(&puStack_28);
  FUN_109cfb208(param_1 + 2);
  return param_1;
}



/* Entry: 109d0b804; end: 109d0b817;  */

void FUN_109d0b804(void)

{
  FUN_109d0b7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d0b818; end: 109d0b967;  */

void FUN_109d0b818(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_30;
  long lStack_28;
  
  puVar2 = (undefined8 *)0xf0;
  __Znwm();
  *puVar2 = &PTR_DAT_110b2bad8;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = &DAT_11383d918;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1a] = &DAT_11383d918;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  FUN_109d0b968(param_1 + 0x10,puVar2);
  uVar3 = param_2;
  FUN_109d15d68();
  if ((int)uVar3 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010b4d15d4(uVar4,param_2);
    if ((uVar4 & 1) == 0) {
      func_0x00010952d0c4(&UNK_10e0404bc,&UNK_10f5abf49,&UNK_10f5abf58);
      goto LAB_109d0b924;
    }
  }
  else {
    FUN_109d15c90(&lStack_48,param_2);
    uVar4 = *(ulong *)(param_1 + 0x10);
    lStack_28 = (long)((int)lStack_40 - (int)lStack_48);
    lStack_30 = lStack_48;
    func_0x000107c30348(uVar4,&lStack_30);
    if ((uVar4 & 1) == 0) {
LAB_109d0b924:
      func_0x00010952d0c4(&UNK_10e0404bc,&UNK_10f5abf49,&UNK_10f5abf58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109d0b948);
      (*pcVar1)();
    }
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  FUN_109d0b9dc(param_1);
  FUN_109d0be08(param_1);
  return;
}



/* Entry: 109d0b968; end: 109d0b9db;  */

void FUN_109d0b968(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_109d0c864(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 109d0b9dc; end: 109d0be07;  */

ulong **** FUN_109d0b9dc(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ulong ****ppppuVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  ulong ****ppppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  ulong ****ppppuVar16;
  ulong ***pppuVar17;
  long lVar18;
  long lVar19;
  ulong ***pppuVar20;
  ulong **ppuVar21;
  ulong ****ppppuVar22;
  ulong ****ppppuVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong ***pppuStack_c0;
  undefined8 uStack_b8;
  ulong **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong ***pppuStack_90;
  ulong **ppuStack_88;
  ulong ***pppuStack_80;
  undefined8 uStack_78;
  ulong ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar16 = (ulong ****)(param_1 + 0x20);
  pppuVar20 = *ppppuVar16;
  pppuVar17 = *(ulong ****)(param_1 + 0x28);
  while (pppuVar17 != pppuVar20) {
    pppuVar17 = pppuVar17 + -0xb;
    func_0x000109378c9c(pppuVar17);
  }
  *(ulong ****)(param_1 + 0x28) = pppuVar20;
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar6 + 0xa0) < 1) {
    ppuStack_b0 = (ulong **)0x0;
    lStack_a8 = 0;
    uStack_a0 = 0;
    if ((int)*(uint *)(lVar6 + 0x58) < 1) {
      if (*(int *)(lVar6 + 0x70) == 0) goto LAB_109d0bd80;
      uVar13 = *(ulong *)(lVar6 + 0x68);
      puVar7 = (ulong *)(lVar6 + 0x68);
      if ((uVar13 & 1) != 0) {
        puVar7 = (ulong *)(uVar13 + 7);
      }
      if (*(int *)(*puVar7 + 0x20) == 0) goto LAB_109d0bd80;
      puVar7 = (ulong *)(*puVar7 + 0x18);
      uVar13 = *puVar7;
      if ((uVar13 & 1) != 0) {
        puVar7 = (ulong *)(uVar13 + 7);
      }
      plVar8 = (long *)*puVar7;
      if (*(char *)((long)plVar8 + 0x17) < '\0') {
        func_0x000107c3192c(&pppuStack_90,*plVar8,plVar8[1]);
      }
      else {
        pppuStack_90 = (ulong ***)*plVar8;
        ppuStack_88 = (ulong **)plVar8[1];
        pppuStack_80 = (ulong ***)plVar8[2];
      }
      func_0x000109508250(&ppuStack_b0,&pppuStack_90,&uStack_78,1);
      if ((long)pppuStack_80 < 0) {
        __ZdlPv(pppuStack_90);
      }
    }
    else {
      uVar13 = *(ulong *)(lVar6 + 0x50);
      puVar7 = (ulong *)(lVar6 + 0x50);
      if ((uVar13 & 1) != 0) {
        puVar7 = (ulong *)(uVar13 + 7);
      }
      ppuStack_88 = (ulong **)0x0;
      pppuStack_80 = (ulong ***)0x0;
      pppuStack_90 = (ulong ***)0x0;
      func_0x0001093c7d00(&pppuStack_90,puVar7,puVar7 + *(uint *)(lVar6 + 0x58));
      func_0x000107c3193c(&ppuStack_b0);
      lStack_a8 = (long)ppuStack_88;
      ppuStack_b0 = (ulong **)pppuStack_90;
      uStack_a0 = pppuStack_80;
      ppuStack_88 = (ulong **)0x0;
      pppuStack_80 = (ulong ***)0x0;
      pppuStack_90 = (ulong ***)0x0;
      pppuStack_c0 = (ulong ***)&pppuStack_90;
      func_0x000104c607c8(&pppuStack_c0);
    }
    func_0x000109378e2c(ppppuVar16,(lStack_a8 - (long)ppuStack_b0 >> 3) * -0x5555555555555555);
    if (0 < (int)((ulong)(lStack_a8 - (long)ppuStack_b0) >> 3) * -0x55555555) {
      lVar19 = 0;
      lVar6 = 0;
      pppuVar20 = *(ulong ****)(param_1 + 0x28);
      do {
        ppuVar21 = ppuStack_b0;
        auVar24 = NEON_rev64(*(undefined1 (*) [16])
                              (*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar6 * 0x10),4);
        auVar24 = NEON_ext(auVar24,auVar24,8,1);
        uStack_b8 = auVar24._8_8_;
        pppuStack_c0 = auVar24._0_8_;
        if (pppuVar20 < *(ulong *)(param_1 + 0x30)) {
          FUN_109d0c788(pppuVar20,(long)ppuStack_b0 + lVar19,&pppuStack_c0);
          pppuVar20 = (ulong ***)((long)pppuVar20 + 0x58);
          *(ulong ****)(param_1 + 0x28) = pppuVar20;
        }
        else {
          lVar18 = (long)pppuVar20 - (long)*ppppuVar16;
          uVar13 = (lVar18 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
          if (0x2e8ba2e8ba2e8ba < uVar13) {
            func_0x000109378a98();
            goto LAB_109d0bda0;
          }
          lVar9 = (long)(*(ulong *)(param_1 + 0x30) - (long)*ppppuVar16) >> 3;
          uVar12 = lVar9 * 0x5d1745d1745d1746;
          if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
            uVar12 = uVar13;
          }
          if (0x1745d1745d1745c < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
            uVar12 = 0x2e8ba2e8ba2e8ba;
          }
          pppuStack_70 = (ulong ***)ppppuVar16;
          if (uVar12 == 0) {
            ppppuVar10 = (ulong ****)0x0;
          }
          else {
            ppppuVar10 = ppppuVar16;
            func_0x000109378aac();
          }
          lVar18 = (long)ppppuVar10 + lVar18;
          uStack_78 = ppppuVar10 + uVar12 * 0xb;
          pppuStack_90 = (ulong ***)ppppuVar10;
          ppuStack_88 = (ulong **)lVar18;
          pppuStack_80 = (ulong ***)lVar18;
          FUN_109d0c788(lVar18,(long)ppuVar21 + lVar19,&pppuStack_c0);
          pppuStack_80 = (ulong ***)(lVar18 + 0x58);
          lVar18 = lVar18 + (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x28));
          func_0x000109378f10(ppppuVar16,*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x28),lVar18)
          ;
          pppuVar20 = pppuStack_80;
          pppuStack_90 = *(ulong ****)(param_1 + 0x20);
          *(long *)(param_1 + 0x20) = lVar18;
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          *(ulong *****)(param_1 + 0x30) = uStack_78;
          *(ulong ****)(param_1 + 0x28) = pppuStack_80;
          ppuStack_88 = (ulong **)pppuStack_90;
          pppuStack_80 = pppuStack_90;
          uStack_78 = (ulong ****)uVar11;
          func_0x0001056754bc(&pppuStack_90);
        }
        *(ulong ****)(param_1 + 0x28) = pppuVar20;
        lVar6 = lVar6 + 1;
        lVar19 = lVar19 + 0x18;
      } while (lVar6 < (int)((ulong)(lStack_a8 - (long)ppuStack_b0) >> 3) * -0x55555555);
    }
    pppuStack_90 = &ppuStack_b0;
    ppppuVar16 = &pppuStack_90;
    func_0x000104c607c8(ppppuVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return ppppuVar16;
    }
  }
  else {
    iVar1 = *(int *)(lVar6 + 0xe8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      ppppuVar10 = (ulong ****)(lVar6 + 0x98);
      ppppuVar4 = ppppuVar16;
      func_0x000109378e2c(ppppuVar16,(long)*(int *)(lVar6 + 0xa0));
      ppppuVar22 = ppppuVar10;
      if (((ulong)*ppppuVar10 & 1) != 0) {
        ppppuVar22 = (ulong ****)((long)*ppppuVar10 + 7);
      }
      if (*(int *)(lVar6 + 0xa0) != 0) {
        ppppuVar23 = ppppuVar22 + *(int *)(lVar6 + 0xa0);
        pppuStack_80 = (ulong ***)ppppuVar23;
        do {
          uVar13 = 0;
          pppuVar20 = *ppppuVar22;
          ppuVar21 = (ulong **)&PTR_PTR_1132ec958;
          if (pppuVar20[6] != (ulong **)0x0) {
            ppuVar21 = pppuVar20[6];
          }
          auVar24 = *(undefined1 (*) [16])(ppuVar21 + 3);
          auVar26 = NEON_ext(auVar24,auVar24,0xc,1);
          pppuStack_70 = auVar24._4_8_;
          auVar25._0_8_ = (long)pppuStack_70 << 0x20;
          auVar25._12_4_ = auVar24._12_4_;
          auVar25._8_4_ = auVar26._4_4_;
          auVar24._8_8_ = auVar25._8_8_;
          auVar24._0_8_ = pppuStack_70;
          auVar26._0_12_ = auVar24._0_12_;
          auVar26._12_4_ = auVar25._12_4_;
          lStack_68 = auVar26._8_8_;
          piVar14 = (int *)&DAT_10e040584;
          while( true ) {
            for (; piVar15 = (int *)(&UNK_10e04050c + uVar13 * 8),
                *piVar15 < *(int *)(pppuVar20 + 7); uVar13 = uVar13 * 2 + 2) {
              piVar15 = piVar14;
              if (6 < uVar13) goto LAB_109d0c1f4;
            }
            if (6 < uVar13) break;
            uVar13 = uVar13 << 1 | 1;
            piVar14 = piVar15;
          }
LAB_109d0c1f4:
          if ((piVar15 == (int *)&DAT_10e040584) || (*(int *)(pppuVar20 + 7) < *piVar15)) {
            puVar5 = &UNK_10f5ab3eb;
            func_0x00010952d0c4(&UNK_10f5ab3eb,&UNK_10f5ab3eb,&UNK_10f5ab3b9);
            *(ulong *****)(param_1 + 0x28) = ppppuVar10;
            __Unwind_Resume();
            return (ulong ****)(puVar5 + 0x20);
          }
          uStack_78 = (ulong ****)CONCAT44(piVar15[1],(undefined4)uStack_78);
          ppppuVar10 = *(ulong *****)(param_1 + 0x28);
          if (ppppuVar10 < *(ulong *****)(param_1 + 0x30)) {
            ppppuVar4 = ppppuVar10;
            func_0x00010940783c(ppppuVar10,(ulong)pppuVar20[5] & 0xfffffffffffffffc,&pppuStack_70,
                                (long)&uStack_78 + 4);
            *(ulong *****)(param_1 + 0x28) = ppppuVar10 + 0xb;
            ppppuVar10 = ppppuVar10 + 0xb;
          }
          else {
            ppppuVar4 = ppppuVar16;
            func_0x0001094076e4(ppppuVar16,(ulong)pppuVar20[5] & 0xfffffffffffffffc,&pppuStack_70,
                                (long)&uStack_78 + 4);
            ppppuVar10 = ppppuVar4;
          }
          *(ulong *****)(param_1 + 0x28) = ppppuVar10;
          if (iVar1 == 5) {
            ppppuVar4 = ppppuVar10 + -4;
            ppuVar21 = pppuVar20[4];
            iVar2 = *(int *)(pppuVar20 + 3);
            if (*(char *)(ppppuVar10 + -1) == '\x01') {
              if (*ppppuVar4 != (ulong ***)0x0) {
                ppppuVar10[-3] = *ppppuVar4;
                __ZdlPv();
              }
              *(undefined1 *)(ppppuVar10 + -1) = 0;
            }
            *ppppuVar4 = (ulong ***)0x0;
            ppppuVar10[-3] = (ulong ***)0x0;
            ppppuVar10[-2] = (ulong ***)0x0;
            func_0x00010955a79c(ppppuVar4,ppuVar21,(long)ppuVar21 + (long)iVar2 * 4,(long)iVar2);
            *(undefined1 *)(ppppuVar10 + -1) = 1;
            ppppuVar23 = (ulong ****)pppuStack_80;
          }
          ppppuVar22 = ppppuVar22 + 1;
        } while (ppppuVar22 != ppppuVar23);
      }
      return ppppuVar4;
    }
  }
  ___stack_chk_fail();
LAB_109d0bd80:
  func_0x00010952d0c4(&UNK_10e0404bc,&UNK_10f5abfa0,&UNK_10f5abfac);
LAB_109d0bda0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109d0bda4);
  (*pcVar3)();
}



/* Entry: 109d0be08; end: 109d0c0cf;  */

ulong * FUN_109d0be08(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined **ppuVar2;
  ulong uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined1 auVar7 [12];
  undefined1 **ppuVar8;
  ulong **ppuVar9;
  ulong *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *puVar18;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *puVar19;
  undefined1 *unaff_x23;
  ulong **ppuVar20;
  ulong uVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong *puVar22;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined1 uStack_68;
  undefined7 uStack_67;
  ulong *puStack_60;
  byte bStack_50;
  long lStack_48;
  
  ppuVar9 = &puStack_a0;
  ppuVar20 = &puStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = (ulong *)(param_1 + 0x38);
  puVar19 = (ulong *)*puVar18;
  puVar13 = *(ulong **)(param_1 + 0x40);
  while (puVar13 != puVar19) {
    puVar13 = puVar13 + -0xb;
    func_0x000109378c9c(puVar13);
  }
  *(ulong **)(param_1 + 0x40) = puVar19;
  lVar12 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar12 + 0xb8) < 1) {
    unaff_x21 = puVar13;
    unaff_x22 = puVar19;
    if (*(int *)(lVar12 + 0x70) != 0) {
      uVar15 = *(ulong *)(lVar12 + 0x68);
      puVar13 = (ulong *)(lVar12 + 0x68);
      if ((uVar15 & 1) != 0) {
        puVar13 = (ulong *)(uVar15 + (long)*(int *)(lVar12 + 0x70) * 8 + -1);
      }
      if (*(int *)(*puVar13 + 0x38) != 0) {
        puVar13 = (ulong *)(*puVar13 + 0x30);
        uVar15 = *puVar13;
        if ((uVar15 & 1) != 0) {
          puVar13 = (ulong *)(uVar15 + 7);
        }
        puVar14 = (undefined8 *)*puVar13;
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          func_0x000107c3192c(&puStack_a0,*puVar14,puVar14[1]);
        }
        else {
          uStack_98 = puVar14[1];
          puStack_a0 = (ulong *)*puVar14;
          lStack_90 = puVar14[2];
        }
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 1;
        uStack_74 = 0;
        uStack_68 = 0;
        bStack_50 = 0;
        puVar13 = *(ulong **)(param_1 + 0x38);
        if (*(ulong **)(param_1 + 0x48) == puVar13) {
          func_0x000105674e18(puVar18);
          lVar12 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x38) >> 3;
          uVar15 = lVar12 * 0x5d1745d1745d1746;
          if (uVar15 < 2) {
            uVar15 = 1;
          }
          if (0x1745d1745d1745c < (ulong)(lVar12 * 0x2e8ba2e8ba2e8ba3)) {
            uVar15 = 0x2e8ba2e8ba2e8ba;
          }
          func_0x000109378a4c(puVar18,uVar15);
          puVar13 = *(ulong **)(param_1 + 0x40);
          func_0x000109378af4(puVar18,&puStack_a0,&lStack_48,puVar13);
          ppuVar9 = (ulong **)puVar18;
        }
        else {
          puVar19 = *(ulong **)(param_1 + 0x40);
          if (puVar19 == puVar13) {
            func_0x000109378af4(puVar18,&puStack_a0,&lStack_48,puVar19);
            ppuVar9 = (ulong **)((long)puVar19 + ((long)puVar18 - (long)puVar13));
          }
          else {
            FUN_109d0c7f4(&puStack_a0,&lStack_48,puVar13);
            puVar13 = *(ulong **)(param_1 + 0x40);
            puVar18 = (ulong *)ppuVar9;
            while ((ulong **)puVar13 != ppuVar9) {
              puVar13 = puVar13 + -0xb;
              puVar18 = puVar13;
              func_0x000109378c9c(puVar13);
            }
          }
        }
        *(ulong ***)(param_1 + 0x40) = ppuVar9;
        if (((bStack_50 & 1) != 0) &&
           (puVar18 = (ulong *)CONCAT71(uStack_67,uStack_68), puVar18 != (ulong *)0x0)) {
          puStack_60 = puVar18;
          __ZdlPv();
        }
        if (lStack_90 < 0) {
          puVar18 = puStack_a0;
          __ZdlPv(puStack_a0);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return puVar18;
        }
        goto LAB_109d0c078;
      }
    }
  }
  else {
    puVar11 = (undefined *)(ulong)(*(int *)(lVar12 + 0xe8) != 5);
    ppuVar20 = (ulong **)unaff_x23;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      puVar19 = (ulong *)(lVar12 + 0xb0);
      ppuVar8 = (undefined1 **)register0x00000008;
      param_1 = unaff_x19;
      goto code_r0x000109d0c114;
    }
LAB_109d0c078:
    ___stack_chk_fail();
    unaff_x21 = puVar13;
    unaff_x22 = puVar19;
    unaff_x23 = (undefined1 *)ppuVar20;
  }
  unaff_x20 = (ulong *)&UNK_10e0404bc;
  puVar11 = &UNK_10f5ac007;
  func_0x00010952d0c4(&UNK_10e0404bc,&UNK_10f5ac007,&UNK_10f5ac014);
  *(ulong **)(param_1 + 0x40) = unaff_x22;
  func_0x000105674840(&puStack_a0);
  puVar18 = unaff_x20;
  __Unwind_Resume();
  if (puVar11[0x18] == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000109d0c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*puVar18 + 0x10))();
    return puVar18;
  }
  ppuVar8 = &puStack_b0;
  unaff_x29 = &puStack_b0;
  pcStack_a8 = FUN_109d0c0d0;
  puVar19 = (ulong *)&UNK_10e0404bc;
  puVar18 = (ulong *)&UNK_10f5abdbe;
  puVar11 = &UNK_10f5abf75;
  unaff_x30 = FUN_109d0c114;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010952d0c4();
code_r0x000109d0c114:
  *(undefined8 *)((long)ppuVar8 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppuVar8 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppuVar8 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppuVar8 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppuVar8 + -0x40) = unaff_x24;
  *(undefined1 **)((long)ppuVar8 + -0x38) = unaff_x23;
  *(ulong **)((long)ppuVar8 + -0x30) = unaff_x22;
  *(ulong **)((long)ppuVar8 + -0x28) = unaff_x21;
  *(ulong **)((long)ppuVar8 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar8 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar8 + -0x10) = unaff_x29;
  *(code **)((long)ppuVar8 + -8) = unaff_x30;
  puVar10 = puVar18;
  func_0x000109378e2c(puVar18,(long)(int)puVar19[1]);
  puVar13 = puVar19;
  if ((*puVar19 & 1) != 0) {
    puVar13 = (ulong *)(*puVar19 + 7);
  }
  if ((int)puVar19[1] != 0) {
    puVar22 = puVar13 + (int)puVar19[1];
    *(ulong **)((long)ppuVar8 + -0x80) = puVar22;
    do {
      uVar15 = 0;
      uVar21 = *puVar13;
      uVar3 = *(ulong *)(uVar21 + 0x28);
      ppuVar2 = &PTR_PTR_1132ec958;
      if (*(undefined ***)(uVar21 + 0x30) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(uVar21 + 0x30);
      }
      pauVar1 = (undefined1 (*) [12])(ppuVar2 + 3);
      uVar23 = (undefined4)((ulong)ppuVar2[4] >> 0x20);
      puVar6 = *(undefined **)*pauVar1;
      auVar7 = *pauVar1;
      auVar24._12_4_ = uVar23;
      auVar24._0_12_ = *pauVar1;
      auVar5._12_4_ = uVar23;
      auVar5._0_12_ = *pauVar1;
      auVar24 = NEON_ext(auVar24,auVar5,0xc,1);
      *(ulong *)((long)ppuVar8 + -0x68) = CONCAT44(uVar23,auVar24._4_4_);
      *(ulong *)((long)ppuVar8 + -0x70) = CONCAT44(auVar7._8_4_,(int)((ulong)puVar6 >> 0x20));
      piVar16 = (int *)&DAT_10e040584;
      while( true ) {
        for (; piVar17 = (int *)(&UNK_10e04050c + uVar15 * 8), *piVar17 < *(int *)(uVar21 + 0x38);
            uVar15 = uVar15 * 2 + 2) {
          piVar17 = piVar16;
          if (6 < uVar15) goto LAB_109d0c1f4;
        }
        if (6 < uVar15) break;
        uVar15 = uVar15 << 1 | 1;
        piVar16 = piVar17;
      }
LAB_109d0c1f4:
      if ((piVar17 == (int *)&DAT_10e040584) || (*(int *)(uVar21 + 0x38) < *piVar17)) {
        puVar11 = &UNK_10f5ab3eb;
        func_0x00010952d0c4(&UNK_10f5ab3eb,&UNK_10f5ab3eb,&UNK_10f5ab3b9);
        puVar18[1] = (ulong)puVar19;
        __Unwind_Resume();
        return (ulong *)(puVar11 + 0x20);
      }
      *(int *)((long)ppuVar8 + -0x74) = piVar17[1];
      puVar19 = (ulong *)puVar18[1];
      if (puVar19 < (ulong *)puVar18[2]) {
        puVar10 = puVar19;
        func_0x00010940783c(puVar19,uVar3 & 0xfffffffffffffffc,(undefined1 *)((long)ppuVar8 + -0x70)
                            ,(undefined1 *)((long)ppuVar8 + -0x74));
        puVar18[1] = (ulong)(puVar19 + 0xb);
        puVar19 = puVar19 + 0xb;
      }
      else {
        puVar10 = puVar18;
        func_0x0001094076e4(puVar18,uVar3 & 0xfffffffffffffffc,(undefined1 *)((long)ppuVar8 + -0x70)
                            ,(undefined1 *)((long)ppuVar8 + -0x74));
        puVar19 = puVar10;
      }
      puVar18[1] = (ulong)puVar19;
      if (((ulong)puVar11 & 1) == 0) {
        puVar10 = puVar19 + -4;
        lVar12 = *(long *)(uVar21 + 0x20);
        iVar4 = *(int *)(uVar21 + 0x18);
        if ((char)puVar19[-1] == '\x01') {
          if (*puVar10 != 0) {
            puVar19[-3] = *puVar10;
            __ZdlPv();
          }
          *(undefined1 *)(puVar19 + -1) = 0;
        }
        *puVar10 = 0;
        puVar19[-3] = 0;
        puVar19[-2] = 0;
        func_0x00010955a79c(puVar10,lVar12,lVar12 + (long)iVar4 * 4,(long)iVar4);
        *(undefined1 *)(puVar19 + -1) = 1;
        puVar22 = *(ulong **)((long)ppuVar8 + -0x80);
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar22);
  }
  return puVar10;
}



/* Entry: 109d0c0d0; end: 109d0c113;  */

ulong * FUN_109d0c0d0(ulong *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  ulong *puVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined1 auVar5 [16];
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_2 + 3) == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000109d0c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,*param_2);
    return param_1;
  }
  puVar6 = (ulong *)&UNK_10e0404bc;
  puVar9 = (ulong *)&UNK_10f5abdbe;
  puVar8 = &UNK_10f5abf75;
  func_0x00010952d0c4();
  puVar7 = puVar9;
  func_0x000109378e2c(puVar9,(long)(int)puVar6[1]);
  puVar15 = puVar6;
  if ((*puVar6 & 1) != 0) {
    puVar15 = (ulong *)(*puVar6 + 7);
  }
  if ((int)puVar6[1] != 0) {
    puVar2 = puVar15 + (int)puVar6[1];
    do {
      uVar10 = 0;
      uVar13 = *puVar15;
      ppuVar3 = &PTR_PTR_1132ec958;
      if (*(undefined ***)(uVar13 + 0x30) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar13 + 0x30);
      }
      pauVar1 = (undefined1 (*) [12])(ppuVar3 + 3);
      uVar16 = (undefined4)((ulong)ppuVar3[4] >> 0x20);
      auVar17._12_4_ = uVar16;
      auVar17._0_12_ = *pauVar1;
      auVar5._12_4_ = uVar16;
      auVar5._0_12_ = *pauVar1;
      auVar17 = NEON_ext(auVar17,auVar5,0xc,1);
      uStack_78 = CONCAT44(uVar16,auVar17._4_4_);
      uStack_80 = CONCAT44(SUB124(*pauVar1,8),(int)((ulong)*(undefined **)*pauVar1 >> 0x20));
      piVar11 = (int *)&DAT_10e040584;
      while( true ) {
        for (; piVar12 = (int *)(&UNK_10e04050c + uVar10 * 8), *piVar12 < *(int *)(uVar13 + 0x38);
            uVar10 = uVar10 * 2 + 2) {
          piVar12 = piVar11;
          if (6 < uVar10) goto LAB_109d0c1f4;
        }
        if (6 < uVar10) break;
        uVar10 = uVar10 << 1 | 1;
        piVar11 = piVar12;
      }
LAB_109d0c1f4:
      if ((piVar12 == (int *)&DAT_10e040584) || (*(int *)(uVar13 + 0x38) < *piVar12)) {
        puVar8 = &UNK_10f5ab3eb;
        func_0x00010952d0c4(&UNK_10f5ab3eb,&UNK_10f5ab3eb,&UNK_10f5ab3b9);
        puVar9[1] = (ulong)puVar6;
        __Unwind_Resume();
        return (ulong *)(puVar8 + 0x20);
      }
      iStack_84 = piVar12[1];
      puVar6 = (ulong *)puVar9[1];
      if (puVar6 < (ulong *)puVar9[2]) {
        puVar7 = puVar6;
        func_0x00010940783c(puVar6,*(ulong *)(uVar13 + 0x28) & 0xfffffffffffffffc,&uStack_80,
                            &iStack_84);
        puVar9[1] = (ulong)(puVar6 + 0xb);
        puVar6 = puVar6 + 0xb;
      }
      else {
        puVar7 = puVar9;
        func_0x0001094076e4(puVar9,*(ulong *)(uVar13 + 0x28) & 0xfffffffffffffffc,&uStack_80,
                            &iStack_84);
        puVar6 = puVar7;
      }
      puVar9[1] = (ulong)puVar6;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = puVar6 + -4;
        lVar14 = *(long *)(uVar13 + 0x20);
        iVar4 = *(int *)(uVar13 + 0x18);
        if ((char)puVar6[-1] == '\x01') {
          if (*puVar7 != 0) {
            puVar6[-3] = *puVar7;
            __ZdlPv();
          }
          *(undefined1 *)(puVar6 + -1) = 0;
        }
        *puVar7 = 0;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        func_0x00010955a79c(puVar7,lVar14,lVar14 + (long)iVar4 * 4,(long)iVar4);
        *(undefined1 *)(puVar6 + -1) = 1;
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  return puVar7;
}



/* Entry: 109d0c114; end: 109d0c30b;  */

ulong * FUN_109d0c114(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined1 (*pauVar1) [12];
  ulong *puVar2;
  undefined **ppuVar3;
  ulong *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = param_2;
  func_0x000109378e2c(param_2,(long)(int)param_1[1]);
  puVar14 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar14 = (ulong *)(*param_1 + 7);
  }
  if ((int)param_1[1] != 0) {
    puVar2 = puVar14 + (int)param_1[1];
    do {
      uVar9 = 0;
      uVar12 = *puVar14;
      ppuVar3 = &PTR_PTR_1132ec958;
      if (*(undefined ***)(uVar12 + 0x30) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar12 + 0x30);
      }
      pauVar1 = (undefined1 (*) [12])(ppuVar3 + 3);
      uVar15 = (undefined4)((ulong)ppuVar3[4] >> 0x20);
      auVar16._12_4_ = uVar15;
      auVar16._0_12_ = *pauVar1;
      auVar6._12_4_ = uVar15;
      auVar6._0_12_ = *pauVar1;
      auVar16 = NEON_ext(auVar16,auVar6,0xc,1);
      uStack_68 = CONCAT44(uVar15,auVar16._4_4_);
      uStack_70 = CONCAT44(SUB124(*pauVar1,8),(int)((ulong)*(undefined **)*pauVar1 >> 0x20));
      piVar10 = (int *)&DAT_10e040584;
      while( true ) {
        for (; piVar11 = (int *)(&UNK_10e04050c + uVar9 * 8), *piVar11 < *(int *)(uVar12 + 0x38);
            uVar9 = uVar9 * 2 + 2) {
          piVar11 = piVar10;
          if (6 < uVar9) goto LAB_109d0c1f4;
        }
        if (6 < uVar9) break;
        uVar9 = uVar9 << 1 | 1;
        piVar10 = piVar11;
      }
LAB_109d0c1f4:
      if ((piVar11 == (int *)&DAT_10e040584) || (*(int *)(uVar12 + 0x38) < *piVar11)) {
        puVar8 = &UNK_10f5ab3eb;
        func_0x00010952d0c4(&UNK_10f5ab3eb,&UNK_10f5ab3eb,&UNK_10f5ab3b9);
        param_2[1] = (ulong)param_1;
        __Unwind_Resume();
        return (ulong *)(puVar8 + 0x20);
      }
      iStack_74 = piVar11[1];
      puVar4 = (ulong *)param_2[1];
      if (puVar4 < (ulong *)param_2[2]) {
        puVar7 = puVar4;
        func_0x00010940783c(puVar4,*(ulong *)(uVar12 + 0x28) & 0xfffffffffffffffc,&uStack_70,
                            &iStack_74);
        param_2[1] = (ulong)(puVar4 + 0xb);
        param_1 = puVar4 + 0xb;
      }
      else {
        puVar7 = param_2;
        func_0x0001094076e4(param_2,*(ulong *)(uVar12 + 0x28) & 0xfffffffffffffffc,&uStack_70,
                            &iStack_74);
        param_1 = puVar7;
      }
      param_2[1] = (ulong)param_1;
      if ((param_3 & 1) == 0) {
        puVar7 = param_1 + -4;
        lVar13 = *(long *)(uVar12 + 0x20);
        iVar5 = *(int *)(uVar12 + 0x18);
        if ((char)param_1[-1] == '\x01') {
          if (*puVar7 != 0) {
            param_1[-3] = *puVar7;
            __ZdlPv();
          }
          *(undefined1 *)(param_1 + -1) = 0;
        }
        *puVar7 = 0;
        param_1[-3] = 0;
        param_1[-2] = 0;
        func_0x00010955a79c(puVar7,lVar13,lVar13 + (long)iVar5 * 4,(long)iVar5);
        *(undefined1 *)(param_1 + -1) = 1;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar2);
  }
  return puVar7;
}


