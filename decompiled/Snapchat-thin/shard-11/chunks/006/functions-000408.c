/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087682d0; end: 1087686db;  */

void FUN_1087682d0(float param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,
                  ulong param_10)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_98;
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((*(byte *)(param_4 + 0x18) & 1) == 0) {
    if ((*(byte *)(param_3 + 0x3f8) & 1) != 0) {
      return;
    }
    *(undefined8 *)(param_3 + 0x3d0) = param_5;
    *(undefined1 *)(param_3 + 0x3d8) = param_6;
    *(undefined8 *)(param_3 + 0x3e0) = param_7;
    *(undefined1 *)(param_3 + 1000) = param_8;
    *(undefined4 *)(param_3 + 0x3f0) = param_9;
    *(undefined1 *)(param_3 + 0x3f8) = 1;
    return;
  }
  func_0x00010876b178(auStack_90);
  if ((int)param_10 == 0) {
    lVar2 = param_3 + 0x3a8;
    func_0x00010596ff94(lVar2,auStack_90);
    if (lVar2 != 0) goto LAB_108768684;
    uVar7 = param_3 + 0x398;
    func_0x000107c278c4(uVar7,auStack_90);
    uVar10 = *(ulong *)(param_3 + 0x388);
    if (uVar10 != 0) {
      uVar9 = uVar10 - 1;
      uVar3 = uVar7;
      if ((uVar10 & uVar9) == 0) {
        param_10 = uVar9 & uVar7;
      }
      else {
        param_10 = uVar7;
        if (uVar10 <= uVar7) {
          func_0x00010876b2ec();
        }
      }
      func_0x00010876b2e0();
      plVar11 = *(long **)(extraout_x8_01 + param_10 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_108768578;
            uVar8 = plVar11[1];
            if (uVar8 != uVar7) break;
            func_0x00010876b238();
            if ((uVar3 & 1) != 0) goto LAB_108768684;
          }
          if ((uVar10 & uVar9) == 0) {
            uVar8 = uVar8 & uVar9;
          }
          else if (uVar10 <= uVar8) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar5 * uVar10;
          }
        } while (uVar8 == param_10);
      }
    }
LAB_108768578:
    lStack_98 = param_3 + 0x380;
    plVar4 = (long *)0x50;
    __Znwm();
    plVar11 = (long *)(param_3 + 0x390);
    uStack_68 = 0;
    *plVar4 = 0;
    plVar4[1] = uVar7;
    plStack_78 = plVar4;
    plStack_70 = plVar11;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4 + 2,auStack_90);
    func_0x00010876b060();
    *(undefined4 *)(plVar4 + 9) = param_9;
    func_0x00010876b140();
    if ((uVar10 == 0) || (uVar3 = param_10, param_2 * (float)uVar10 < param_1)) {
      func_0x00010876b1b0();
      func_0x00010876b1ec();
      FUN_10876ad44(lStack_98);
      uVar10 = *(ulong *)(param_3 + 0x388);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar3 = uVar10 - 1 & uVar7;
      }
      else {
        uVar3 = uVar7;
        if (uVar10 <= uVar7) {
          func_0x00010876b2ec();
          uVar3 = param_10;
        }
      }
    }
    func_0x00010876b2e0();
    plVar6 = *(long **)(extraout_x8_02 + uVar3 * 8);
    if (plVar6 != (long *)0x0) goto LAB_108768610;
    *plVar4 = *plVar11;
    *plVar11 = (long)plVar4;
    *(long **)(extraout_x8_02 + uVar3 * 8) = plVar11;
    lVar2 = extraout_x8_02;
LAB_108768634:
    if (*plVar4 != 0) {
      uVar7 = *(ulong *)(*plVar4 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar3 * uVar10;
      }
      *(long **)(lVar2 + uVar7 * 8) = plVar4;
    }
  }
  else {
    func_0x00010596ff64(param_3 + 0x3a8,auStack_90);
    uVar7 = param_3 + 0x398;
    uVar3 = uVar7;
    func_0x000107c278c4(uVar7,auStack_90);
    uVar10 = *(ulong *)(param_3 + 0x388);
    if (uVar10 != 0) {
      uVar8 = uVar10 - 1;
      uVar9 = uVar3;
      if ((uVar10 & uVar8) == 0) {
        uVar7 = uVar8 & uVar3;
      }
      else {
        uVar7 = uVar3;
        if (uVar10 <= uVar3) {
          func_0x00010876b2ec();
        }
      }
      func_0x00010876b2e0();
      plVar11 = *(long **)(extraout_x8 + uVar7 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10876845c;
            uVar5 = plVar11[1];
            if (uVar5 != uVar3) break;
            func_0x00010876b238();
            if ((uVar9 & 1) != 0) {
              func_0x00010876b060();
              *(undefined4 *)(plVar11 + 9) = param_9;
              goto LAB_108768684;
            }
          }
          if ((uVar10 & uVar8) == 0) {
            uVar5 = uVar5 & uVar8;
          }
          else if (uVar10 <= uVar5) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar5 / uVar10;
            }
            uVar5 = uVar5 - uVar1 * uVar10;
          }
        } while (uVar5 == uVar7);
      }
    }
LAB_10876845c:
    plVar4 = (long *)0x50;
    __Znwm();
    plVar11 = (long *)(param_3 + 0x390);
    uStack_68 = 0;
    *plVar4 = 0;
    plVar4[1] = uVar3;
    plStack_78 = plVar4;
    plStack_70 = plVar11;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4 + 2,auStack_90);
    func_0x00010876b060();
    *(undefined4 *)(plVar4 + 9) = param_9;
    func_0x00010876b140();
    if ((uVar10 == 0) || (uVar9 = uVar7, param_2 * (float)uVar10 < param_1)) {
      func_0x00010876b1b0();
      func_0x00010876b1ec();
      FUN_10876ad44(param_3 + 0x380);
      uVar10 = *(ulong *)(param_3 + 0x388);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar9 = uVar10 - 1 & uVar3;
      }
      else {
        uVar9 = uVar3;
        if (uVar10 <= uVar3) {
          func_0x00010876b2ec();
          uVar9 = uVar7;
        }
      }
    }
    func_0x00010876b2e0();
    plVar6 = *(long **)(extraout_x8_00 + uVar9 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar4 = *plVar11;
      *plVar11 = (long)plVar4;
      *(long **)(extraout_x8_00 + uVar9 * 8) = plVar11;
      lVar2 = extraout_x8_00;
      goto LAB_108768634;
    }
LAB_108768610:
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  plStack_78 = (long *)0x0;
  *(long *)(param_3 + 0x398) = *(long *)(param_3 + 0x398) + 1;
  FUN_10876af04(&plStack_78);
LAB_108768684:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 1087686dc; end: 108768907;  */

void FUN_1087686dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auStack_80 [24];
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  func_0x00010876b178(auStack_80);
  plVar11 = *(long **)(param_1 + 0x388);
  if ((plVar11 != (long *)0x0) && (*(long *)(param_1 + 0x398) != 0)) {
    plVar1 = (long *)(param_1 + 0x398);
    plVar2 = plVar1;
    func_0x000107c278c4(plVar1,auStack_80);
    uVar12 = (long)plVar11 - 1;
    if (((ulong)plVar11 & uVar12) == 0) {
      plVar13 = (long *)((ulong)plVar2 & uVar12);
    }
    else {
      plVar13 = plVar2;
      if (plVar11 <= plVar2) {
        uVar5 = 0;
        if (plVar11 != (long *)0x0) {
          uVar5 = (ulong)plVar2 / (ulong)plVar11;
        }
        plVar13 = (long *)((long)plVar2 - uVar5 * (long)plVar11);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x380) + (long)plVar13 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1087688d0;
          plVar3 = (long *)plVar10[1];
          if (plVar3 != plVar2) break;
          plVar3 = plVar10 + 2;
          func_0x000107c278d0(plVar3,auStack_80);
          if ((int)plVar3 != 0) {
            uVar5 = *(ulong *)(param_1 + 0x388);
            lVar4 = *plVar10;
            uVar12 = plVar10[1];
            uVar6 = uVar5 - 1;
            if ((uVar5 & uVar6) == 0) {
              uVar12 = uVar6 & uVar12;
            }
            else if (uVar5 <= uVar12) {
              uVar8 = 0;
              if (uVar5 != 0) {
                uVar8 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar8 * uVar5;
            }
            lVar7 = *(long *)(param_1 + 0x380);
            plVar11 = *(long **)(lVar7 + uVar12 * 8);
            do {
              plVar2 = plVar11;
              plVar11 = (long *)*plVar2;
            } while ((long *)*plVar2 != plVar10);
            plStack_60 = (long *)(param_1 + 0x390);
            if (plVar2 == plStack_60) {
LAB_10876882c:
              if (lVar4 == 0) {
LAB_108768860:
                *(undefined8 *)(lVar7 + uVar12 * 8) = 0;
                lVar4 = *plVar10;
                goto LAB_108768868;
              }
              uVar8 = *(ulong *)(lVar4 + 8);
              if ((uVar5 & uVar6) == 0) {
                uVar9 = uVar8 & uVar6;
              }
              else {
                uVar9 = uVar8;
                if (uVar5 <= uVar8) {
                  uVar9 = 0;
                  if (uVar5 != 0) {
                    uVar9 = uVar8 / uVar5;
                  }
                  uVar9 = uVar8 - uVar9 * uVar5;
                }
              }
              if (uVar9 != uVar12) goto LAB_108768860;
LAB_108768870:
              if ((uVar5 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar5 <= uVar8) {
                uVar6 = 0;
                if (uVar5 != 0) {
                  uVar6 = uVar8 / uVar5;
                }
                uVar8 = uVar8 - uVar6 * uVar5;
              }
              if (uVar8 != uVar12) {
                *(long **)(lVar7 + uVar8 * 8) = plVar2;
                lVar4 = *plVar10;
              }
            }
            else {
              uVar8 = plVar2[1];
              if ((uVar5 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar5 <= uVar8) {
                uVar9 = 0;
                if (uVar5 != 0) {
                  uVar9 = uVar8 / uVar5;
                }
                uVar8 = uVar8 - uVar9 * uVar5;
              }
              if (uVar8 != uVar12) goto LAB_10876882c;
LAB_108768868:
              if (lVar4 != 0) {
                uVar8 = *(ulong *)(lVar4 + 8);
                goto LAB_108768870;
              }
            }
            *plVar2 = lVar4;
            *plVar10 = 0;
            *plVar1 = *plVar1 + -1;
            uStack_58 = 1;
            uStack_57 = 0;
            uStack_53 = 0;
            plStack_68 = plVar10;
            FUN_10876af04(&plStack_68);
            goto LAB_1087688d0;
          }
        }
        if (((ulong)plVar11 & uVar12) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar12);
        }
        else if (plVar11 <= plVar3) {
          uVar5 = 0;
          if (plVar11 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar11;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar11);
        }
      } while (plVar3 == plVar13);
    }
  }
LAB_1087688d0:
  func_0x000107c28274(param_1 + 0x3a8,auStack_80);
  func_0x00010876b204();
  return;
}



/* Entry: 108768908; end: 10876893b;  */

void FUN_108768908(long *param_1,ulong param_2)

{
  undefined1 auStack_2b8 [40];
  undefined1 uStack_290;
  undefined1 uStack_58;
  ulong uStack_18;
  
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
    return;
  }
  func_0x000104bfeb48();
  auStack_2b8[0] = 0;
  uStack_290 = 0;
  func_0x000107c28b2c(param_1[0xb],auStack_2b8);
  func_0x000107c29560(auStack_2b8);
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  auStack_2b8[0] = 0;
  uStack_58 = 0;
  FUN_108768908(param_1[0x1b],param_2 & 0xffffffff | 0x100000000,auStack_2b8);
  func_0x000107c28d30(auStack_2b8);
  return;
}



/* Entry: 10876893c; end: 1087689df;  */

void FUN_10876893c(long *param_1,ulong param_2)

{
  undefined1 auStack_298 [40];
  undefined1 uStack_270;
  undefined1 uStack_38;
  
  auStack_298[0] = 0;
  uStack_270 = 0;
  func_0x000107c28b2c(param_1[0xb],auStack_298);
  func_0x000107c29560(auStack_298);
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  auStack_298[0] = 0;
  uStack_38 = 0;
  FUN_108768908(param_1[0x1b],param_2 & 0xffffffff | 0x100000000,auStack_298);
  func_0x000107c28d30(auStack_298);
  return;
}



/* Entry: 1087689e0; end: 108768b87;  */

void FUN_1087689e0(long param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [40];
  long alStack_60 [2];
  
  func_0x000107c29820(alStack_60);
  plVar2 = *(long **)(alStack_60[0] + 0xf0);
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_110a609a8;
  uStack_a8 = 0;
  uStack_90 = 0x261;
  func_0x000107c278b8(auStack_c8,&DAT_10f4b05df);
  pppuVar1 = &ppuStack_b0;
  func_0x000107c28824(pppuVar1,auStack_c8,(&PTR_s_Unknown_110a6bda8)[*(int *)(param_1 + 0xe8)]);
  func_0x000107c28b38();
  FUN_108768b88();
  func_0x000107c2884c(auStack_88,pppuVar1);
  (**(code **)(*plVar2 + 0x50))(plVar2,auStack_88);
  func_0x000107c2882c(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  func_0x00010876b28c();
  func_0x00010876b25c();
  func_0x000107c29820(alStack_60,param_1);
  plVar2 = *(long **)(alStack_60[0] + 0xf0);
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_110a609a8;
  uStack_a8 = 0;
  uStack_90 = 0x262;
  func_0x000107c278b8(auStack_e0,&DAT_10f4b05df);
  pppuVar1 = &ppuStack_b0;
  func_0x000107c28824(pppuVar1,auStack_e0,(&PTR_s_Unknown_110a6bda8)[*(int *)(param_1 + 0xe8)]);
  func_0x000107c28b38();
  FUN_108768b88();
  (**(code **)(*plVar2 + 0x18))(plVar2,pppuVar1,param_2);
  func_0x00010876b204();
  func_0x00010876b28c();
  func_0x00010876b25c();
  return;
}



/* Entry: 108768b88; end: 108768c1f;  */

undefined8 FUN_108768b88(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    puVar2 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2b8) {
    puVar2 = (&PTR_s_success_113269028)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000107c28824(param_1,auStack_38,puVar2);
  func_0x00010876b0b0();
  return param_1;
}



/* Entry: 108768c20; end: 108768cbb;  */

void FUN_108768c20(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  bVar1 = (param_2 & 1) != 0;
  if (bVar1) {
    func_0x000107c29ee0(&uStack_40,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    func_0x000107c27914(&uStack_40);
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 108768cbc; end: 108768d87;  */

void FUN_108768cbc(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  char cVar1;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_48;
  
  if (param_1 != 0) {
    func_0x00010876b178(auStack_80);
    cVar1 = *(char *)(param_3 + 0x18);
    if (cVar1 != '\x01') {
      uStack_68 = uStack_68 & 0xffffffffffffff00;
    }
    else {
      func_0x000107c29e04(&uStack_98,param_3);
      uStack_60 = uStack_90;
      uStack_68 = uStack_98;
      uStack_58 = uStack_88;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_98 = 0;
    }
    uStack_50 = cVar1 == '\x01';
    uStack_48 = param_4;
    FUN_108698070(param_1,auStack_80);
    FUN_10868cd4c(auStack_80);
    if (cVar1 != '\0') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
    }
  }
  return;
}



/* Entry: 108768d88; end: 108768e6f;  */

void FUN_108768d88(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_10868cc2c(uVar3,param_2);
    lVar2 = uVar3 + 0x260;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_10868d398(param_1,(long)(uVar3 - *param_1) / 0x260 + 1);
    FUN_10868d484(auStack_58,plVar1,(param_1[1] - *param_1) / 0x260,param_1 + 2);
    FUN_10868cc2c(lStack_48,param_2);
    lStack_48 = lStack_48 + 0x260;
    FUN_10868d3f8(param_1,auStack_58);
    lVar2 = param_1[1];
    func_0x00010868d654(auStack_58);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108768e70; end: 1087692fb;  */

undefined8 * FUN_108768e70(void)

{
  undefined4 uVar1;
  code cVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  code *pcStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  uint uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [16];
  ulong uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  func_0x00010876b318();
  uStack_70 = extraout_x8;
  FUN_1087682c8(&uStack_1d0);
  func_0x000107c28494(&pcStack_a0,*(undefined8 *)(unaff_x19 + 0x68),
                      *(undefined8 *)(unaff_x19 + 0x70));
  uVar12 = uStack_1c8;
  if ((uStack_1c8 & 1) != 0) {
    uVar12 = *(ulong *)(uStack_1c8 & 0xfffffffffffffffe);
  }
  func_0x000107c30250(auStack_188,uVar12);
  func_0x000107c27b9c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_a0);
  uVar12 = uStack_1c8;
  if ((uStack_1c8 & 1) != 0) {
    uVar12 = *(ulong *)(uStack_1c8 & 0xfffffffffffffffe);
  }
  func_0x000107c30250(auStack_180,uVar12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uStack_168 = 1;
  func_0x00010876afec(&pcStack_a0);
  uVar7 = pcStack_a0[0x248] == (code)0x1;
  if ((bool)uVar7) {
    pcVar8 = pcStack_a0 + 0x218;
    func_0x000107c289e8();
    cVar2 = *pcVar8;
    func_0x00010876b088();
    uVar7 = cVar2 == (code)0x1;
    if ((bool)uVar7) {
      func_0x000107c29ee4(&pcStack_a0,unaff_x19 + 0xf0);
      uStack_1c0 = uStack_1c0 | 2;
      if (uStack_170 == 0) {
        uVar12 = uStack_1c8;
        if ((uStack_1c8 & 1) != 0) {
          uVar12 = *(ulong *)(uStack_1c8 & 0xfffffffffffffffe);
        }
        func_0x000107c287e0();
        uStack_170 = uVar12;
      }
      func_0x000107c287d0();
      func_0x000107c2a2e0(&pcStack_a0);
    }
  }
  else {
    func_0x00010876b088();
  }
  plVar13 = (long *)(unaff_x19 + 0xa8);
  while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
    func_0x000107c303b4(auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x000107c303b4(auStack_1a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x00010876b104(&uStack_1f0);
  func_0x00010876b104(&uStack_210);
  lStack_158 = lStack_208;
  uStack_160 = uStack_210;
  uStack_210 = 0;
  lStack_208 = 0;
  func_0x00010876afec(&pcStack_a0);
  lVar11 = *(long *)(pcStack_a0 + 600);
  uVar16 = *(undefined8 *)(pcStack_a0 + 0x250);
  if (*(long *)(pcStack_a0 + 600) != 0) {
    do {
      func_0x00010876b028();
    } while (extraout_w10 != 0);
  }
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x58) + 0xfc);
  func_0x00010876b088();
  pcStack_100 = FUN_10876aa18;
  ppuStack_f8 = &PTR_FUN_110a6bf58;
  puVar9 = (undefined8 *)0x30;
  __Znwm();
  puVar9[1] = lStack_158;
  *puVar9 = uStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x00010876b028();
    } while (extraout_w10_00 != 0);
  }
  puVar9[3] = uVar16;
  puVar9[2] = unaff_x19;
  puVar9[4] = lVar11;
  if (lVar11 != 0) {
    do {
      func_0x00010876b028();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar9 + 5) = uVar1;
  uVar16 = *(undefined8 *)(unaff_x19 + 8);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  uStack_110 = uVar16;
  lStack_108 = lVar11;
  puStack_f0 = puVar9;
  if (lVar11 == 0) {
    uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
  }
  else {
    do {
      func_0x00010876b028();
    } while (extraout_w10_02 != 0);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
    do {
      func_0x00010876b028();
    } while (extraout_w10_03 != 0);
  }
  puVar10 = (undefined8 *)0xb8;
  uStack_130 = uVar16;
  lStack_128 = lVar11;
  __Znwm();
  uVar6 = uStack_1e8;
  uVar5 = uStack_1f0;
  plVar15 = puVar10 + 1;
  *plVar15 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110a6be18;
  pcStack_a0 = FUN_10876935c;
  ppuStack_98 = &PTR_FUN_110a6be58;
  uStack_130 = 0;
  lStack_128 = 0;
  pcVar8 = (code *)(puVar10 + 3);
  *(undefined ***)pcVar8 = &PTR_DAT_110a6be98;
  pcStack_d0 = FUN_1087693e0;
  ppuStack_c8 = &PTR_FUN_110a6be70;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_b8 = 0;
  puVar10[4] = FUN_1087693e0;
  puVar10[5] = &PTR_FUN_110a6be70;
  puVar10[7] = uVar6;
  puVar10[6] = uVar5;
  uStack_c0 = 0;
  puVar10[8] = unaff_x19;
  puVar10[10] = FUN_10876aa18;
  puVar10[0xb] = &PTR_FUN_110a6bf58;
  puVar10[0xc] = puVar9;
  puStack_f0 = (undefined8 *)0x0;
  puVar10[0x10] = FUN_10876935c;
  puVar10[0x11] = &PTR_FUN_110a6be58;
  puVar10[0x12] = uVar16;
  puVar10[0x13] = lVar11;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar10[0x16] = uVar14;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  pcStack_220 = pcVar8;
  puStack_218 = puVar10;
  func_0x00010876af48(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  func_0x00010876b0bc();
  FUN_108769314(&uStack_160);
  func_0x00010876afec(&pcStack_a0);
  plVar13 = *(long **)(pcStack_a0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = *plVar15 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcStack_d0 = pcVar8;
  ppuStack_c8 = (undefined **)puVar10;
  (**(code **)(*plVar13 + 0x90))(plVar13,&uStack_1d0,&pcStack_d0);
  func_0x00010876af70(&pcStack_d0);
  func_0x00010876b088();
  func_0x00010876af48(&pcStack_220);
  func_0x000107c297a4(&uStack_210);
  func_0x000107c297a4(&uStack_1f0);
  puVar9 = &uStack_1d0;
  FUN_1088ef268();
  func_0x00010876b2b8(uStack_70);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x000107c2a2e0(&pcStack_a0);
    puVar9 = &uStack_1d0;
    FUN_1088ef268();
    func_0x00010876b014();
    *puVar9 = &PTR_FUN_110a6bd58;
    func_0x000107c2826c(puVar9 + 0x75);
    FUN_10876ad08(puVar9[0x72]);
    lVar11 = puVar9[0x70];
    puVar9[0x70] = 0;
    if (lVar11 != 0) {
      __ZdlPv();
    }
    func_0x000107c28d30(puVar9 + 0x23);
    func_0x000107c297c8(puVar9 + 0x21);
    func_0x000107c27914(puVar9 + 0x1e);
    func_0x00010875be10(puVar9 + 0x1c);
    func_0x000108694e3c(puVar9 + 0x18);
    func_0x000107c278e0(puVar9 + 0x13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9 + 0x10);
    func_0x000107c27914(puVar9 + 0xd);
    *puVar9 = &PTR_DAT_110a6d608;
    func_0x0001005fe494(puVar9 + 0xb);
    func_0x0001005640e4(puVar9 + 6);
    func_0x000107c60ca0(puVar9 + 3);
    func_0x0001005fe52c(puVar9 + 1);
    return puVar9;
  }
  return puVar9;
}



/* Entry: 1087692fc; end: 1087692ff;  */

undefined8 * FUN_1087692fc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a6bd58;
  func_0x000107c2826c(param_1 + 0x75);
  FUN_10876ad08(param_1[0x72]);
  lVar1 = param_1[0x70];
  param_1[0x70] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c28d30(param_1 + 0x23);
  func_0x000107c297c8(param_1 + 0x21);
  func_0x000107c27914(param_1 + 0x1e);
  func_0x00010875be10(param_1 + 0x1c);
  func_0x000108694e3c(param_1 + 0x18);
  func_0x000107c278e0(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000107c27914(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108769300; end: 108769313;  */

void FUN_108769300(void)

{
  FUN_10876abc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108769314; end: 10876933b;  */

undefined8 FUN_108769314(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10876933c; end: 10876933f;  */

void FUN_10876933c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6be18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108769340; end: 108769353;  */

void FUN_108769340(void)

{
  FUN_10876aa08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108769354; end: 10876935b;  */

void FUN_108769354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10876935c; end: 1087693bb;  */

long FUN_10876935c(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 1087693bc; end: 1087693df;  */

void FUN_1087693bc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1087693e0; end: 10876a76f;  */

void FUN_1087693e0(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined ***pppuVar6;
  uint uVar7;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  ulong uVar8;
  code *extraout_x8_05;
  undefined **ppuVar9;
  code *extraout_x8_06;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x11;
  long *plVar12;
  byte bVar13;
  long *plVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plVar17;
  long lVar18;
  int unaff_w24;
  long lVar19;
  undefined4 uStack_694;
  long lStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined *puStack_648;
  long lStack_640;
  undefined1 uStack_638;
  long alStack_630 [3];
  int iStack_618;
  undefined1 auStack_610 [16];
  undefined **ppuStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  byte bStack_5d0;
  undefined **appuStack_5c8 [3];
  undefined1 auStack_5b0 [24];
  char cStack_598;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  int iStack_56c;
  byte bStack_560;
  undefined **ppuStack_558;
  undefined1 uStack_550;
  ulong uStack_540;
  uint uStack_538;
  undefined1 uStack_534;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined1 uStack_518;
  long lStack_510;
  undefined1 uStack_508;
  undefined1 uStack_500;
  undefined1 uStack_4f8;
  undefined1 uStack_4e0;
  undefined1 uStack_4d8;
  undefined1 uStack_4d0;
  long lStack_4c8;
  undefined1 uStack_4c0;
  long lStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_4a8;
  undefined1 uStack_4a0;
  undefined1 uStack_498;
  undefined1 uStack_490;
  undefined1 uStack_488;
  undefined1 uStack_480;
  long lStack_478;
  undefined1 uStack_470;
  undefined1 uStack_468;
  undefined1 uStack_460;
  undefined1 uStack_458;
  undefined1 uStack_450;
  undefined1 uStack_448;
  undefined1 uStack_440;
  undefined1 uStack_438;
  undefined1 uStack_430;
  undefined1 auStack_428 [8];
  undefined1 uStack_420;
  undefined1 uStack_418;
  ulong uStack_410;
  undefined1 uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined1 uStack_3f0;
  undefined1 uStack_3e8;
  undefined1 uStack_3e0;
  uint uStack_3d8;
  undefined1 uStack_3d4;
  undefined1 uStack_3d0;
  undefined1 uStack_3cc;
  undefined1 uStack_3c8;
  undefined1 uStack_3c0;
  undefined4 uStack_3b8;
  undefined1 uStack_3b4;
  undefined1 uStack_3b0;
  undefined1 uStack_3ac;
  undefined1 uStack_3a8;
  undefined1 uStack_3a4;
  undefined1 uStack_3a0;
  undefined1 uStack_398;
  undefined1 uStack_390;
  undefined1 uStack_38c;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined4 uStack_2c0;
  undefined1 uStack_268;
  byte bStack_258;
  char cStack_80;
  
  lVar18 = param_1;
  func_0x00010876b1e0();
  plVar12 = *(long **)(param_2 + 0x20);
  puStack_648 = (undefined *)0x0;
  func_0x000107c28258();
  uStack_638 = 1;
  lStack_660 = 0;
  lStack_658 = 0;
  uStack_650 = 0;
  uVar7 = *(uint *)(param_1 + 0x10);
  plVar17 = (long *)(ulong)uVar7;
  lStack_640 = lVar18;
  if ((uVar7 >> 1 & 1) == 0) {
    bVar13 = *(byte *)((long)plVar12 + 0x402) ^ 1 | *(int *)(param_1 + 0x20) == 0;
    ppuStack_558 = *(undefined ***)(param_1 + 0x58);
    iVar4 = unaff_w24 + 3;
    uStack_550 = 1;
  }
  else {
    func_0x00010876afbc();
    ppuVar9 = &PTR_PTR_11326b328;
    if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_1 + 0x50);
    }
    func_0x00010876b16c(ppuStack_558[0x4a],ppuVar9,*(undefined4 *)(plVar12[0xb] + 0xfc));
    (*extraout_x8)();
    func_0x00010876aff4();
    ppuVar9 = &PTR_PTR_11326b328;
    if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_1 + 0x50);
    }
    ppuVar1 = &PTR_PTR_11326b300;
    if ((undefined **)ppuVar9[4] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar9[4];
    }
    if (*(char *)((long)ppuVar1 + 0x24) != '\x01') {
      lVar18 = plVar12[8];
      func_0x00010876b16c(lVar18,plVar12[9]);
      iVar4 = (int)lVar18;
      (*extraout_x8_05)();
      ppuVar9 = *(undefined ***)(param_1 + 0x50);
      if (iVar4 != 0) {
        ppuVar1 = &PTR_PTR_11326b328;
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar1 = ppuVar9;
        }
        if ((*(uint *)(ppuVar1 + 7) < 10) &&
           ((1 << (ulong)(*(uint *)(ppuVar1 + 7) & 0x1f) & 0x305U) != 0)) {
          func_0x00010876afbc();
          plVar17 = (long *)ppuStack_558[0xe];
          func_0x00010876b104(&ppuStack_2e0);
          (**(code **)(*plVar17 + 0x10))(plVar17,&ppuStack_2e0);
          func_0x000107c297a4(&ppuStack_2e0);
          func_0x00010876aff4();
          goto LAB_10876a520;
        }
      }
      ppuVar1 = &PTR_PTR_11326b328;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar1 = ppuVar9;
      }
      FUN_108681988(plVar12[0xb],ppuVar1,1);
      ppuVar9 = &puStack_648;
      func_0x000107c2825c();
      ppuStack_558 = ppuVar9;
      FUN_1087689e0(plVar12,&ppuStack_558,0x4c01c9,1);
      func_0x00010876afbc();
      func_0x00010876b1a0(ppuStack_558);
      func_0x00010876b218();
      func_0x00010876aff4();
      func_0x00010876afbc();
      puVar16 = ppuStack_558[0x58];
      func_0x00010876aff4();
      if (puVar16 != (undefined *)0x0) {
        func_0x00010876afc8();
        func_0x00010876b134();
        func_0x00010876afd4();
        func_0x00010876b040();
        func_0x00010876b264();
        func_0x00010876b04c();
        func_0x00010876b038();
      }
      ppuVar9 = &PTR_PTR_11326b328;
      if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
        ppuVar9 = *(undefined ***)(param_1 + 0x50);
      }
      func_0x000108770be8(ppuVar9);
      func_0x000108681930(plVar12[0xb],ppuVar9);
      FUN_10876893c(plVar12,ppuVar9);
      goto LAB_10876a520;
    }
    func_0x00010876afbc();
    puVar16 = ppuStack_558[0x58];
    func_0x00010876aff4();
    if (puVar16 != (undefined *)0x0) {
      func_0x00010876afc8();
      func_0x00010876b134();
      func_0x00010876afd4();
      func_0x00010876b040();
      FUN_1086980d0();
      func_0x00010876b04c();
      func_0x00010876b038();
    }
    func_0x00010876afbc();
    func_0x00010876b1a0(ppuStack_558);
    FUN_10876a770();
    func_0x00010876aff4();
    uStack_550 = 0;
    bVar13 = 0;
    ppuStack_558 = (undefined **)((ulong)ppuStack_558 & 0xffffffffffffff00);
    iVar4 = 0x4c01c5;
  }
  func_0x00010876afc8();
  pppuVar6 = (undefined ***)ppuStack_2e0[0x1a];
  (*(code *)(*pppuVar6)[0x21])(pppuVar6,(int)plVar12[0x1d],bVar13 & 1,&ppuStack_558);
  func_0x00010876b038();
  if ((uVar7 >> 1 & 1) == 0) {
    uStack_694 = 0;
    func_0x00010876b2cc();
    uVar11 = extraout_x11 & ((long)extraout_x11 >> 0x3f ^ 0xffffffffffffffffU);
    uVar10 = ~extraout_x11 >> 0x3f;
    for (lVar18 = extraout_x8_00 << 3; lVar18 != 0; lVar18 = lVar18 + -8) {
      lVar19 = *plVar17;
      func_0x00010876b32c();
      if ((*(byte *)(extraout_x8_01 + 0x11) >> 2 & 1) == 0) {
        func_0x00010876afec(&ppuStack_600);
        plVar14 = (long *)ppuStack_600[0x1e];
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        ppuStack_2e0 = &PTR_FUN_110a609a8;
        uStack_2c0 = 0x265;
        func_0x00010876b188();
        func_0x00010876b304();
        func_0x00010876b224();
        FUN_1086901fc();
        func_0x000107c2884c(&ppuStack_558,pppuVar6);
        func_0x00010876b008(*(undefined8 *)(*plVar14 + 0x50));
        func_0x000107c2882c(&ppuStack_558);
        func_0x00010876b2a4();
        func_0x00010876b230();
        func_0x00010876b0a8();
        *(undefined1 *)((long)plVar12 + 0x401) = 1;
        ppuStack_2e0 = (undefined **)((ulong)ppuStack_2e0 & 0xffffffffffffff00);
        uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
        func_0x00010876afe0(plVar12,&ppuStack_2e0,0,0,uVar11,uVar10,0x1cb);
        pppuVar6 = &ppuStack_2e0;
        func_0x000107c279dc();
      }
      else {
        ppuVar9 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(extraout_x8_01 + 0x68) != (undefined **)0x0) {
          ppuVar9 = *(undefined ***)(extraout_x8_01 + 0x68);
        }
        func_0x000107c29ee0(appuStack_5c8,ppuVar9);
        func_0x00010876b32c();
        ppuVar9 = &PTR_PTR_11327ac70;
        if (*(undefined ***)(extraout_x8_02 + 0xb8) != (undefined **)0x0) {
          ppuVar9 = *(undefined ***)(extraout_x8_02 + 0xb8);
        }
        uVar15 = (ulong)*(char *)(((ulong)ppuVar9[3] & 0xfffffffffffffffc) + 0x17);
        if ((long)uVar15 < 0) {
          uVar15 = *(ulong *)(((ulong)ppuVar9[3] & 0xfffffffffffffffc) + 8);
        }
        ppuVar1 = &PTR_PTR_11326abd0;
        if ((undefined **)ppuVar9[4] != (undefined **)0x0) {
          ppuVar1 = (undefined **)ppuVar9[4];
        }
        FUN_108768c20(auStack_5b0,*(undefined4 *)(ppuVar1 + 2),ppuVar1[4]);
        if (cStack_598 == '\x01') {
          func_0x00010876afbc();
          ppuVar9 = ppuStack_558;
          func_0x00010876aff4();
          puVar16 = ppuVar9[0x56];
          if (puVar16 != (undefined *)0x0) {
            func_0x00010876b16c();
            iVar4 = (int)puVar16;
            (*extraout_x8_03)();
            if (iVar4 != 0) {
              func_0x00010876afec(&uStack_590);
              FUN_10886bd9c(&ppuStack_558,*(undefined8 *)(CONCAT71(uStack_58f,uStack_590) + 0x60),
                            auStack_5b0);
              func_0x00010876b244();
              func_0x00010876b15c();
              func_0x00010876b180();
              if ((cStack_80 == '\x01') && ((bStack_258 & 1) == 0)) {
                func_0x00010876b07c();
              }
              func_0x00010876b0d8();
            }
          }
        }
        uStack_590 = 0;
        bStack_560 = 0;
        uVar7 = *(uint *)(ppuVar1 + 2);
        if ((uVar7 >> 3 & 1) != 0) {
          func_0x000108768c88(&uStack_590,ppuVar1[7]);
          uVar7 = *(uint *)(ppuVar1 + 2);
        }
        if ((uVar7 >> 2 & 1) == 0) {
LAB_108769844:
          func_0x00010876afc8();
          FUN_10885edd8(&ppuStack_558,ppuStack_2e0[0xc],appuStack_5c8);
          FUN_108663a10(&ppuStack_600,&ppuStack_558);
          FUN_108656820(&ppuStack_558);
          func_0x00010876b038();
          if ((bStack_5d0 & 1) == 0) {
            func_0x00010876afc8();
            func_0x00010876b274();
            uStack_540 = uStack_540 & 0xffffffffffffff00;
            uStack_538 = uStack_538 & 0xffffff00;
            uVar8 = uStack_530 >> 0x28;
            uVar7 = (uint)uStack_530;
            uStack_530._0_5_ = (uint5)(uVar7 & 0xffffff00);
            uStack_530 = CONCAT35((int3)uVar8,(uint5)uStack_530);
            func_0x00010876b040();
            FUN_10885fef4();
            func_0x00010876b0e0();
            func_0x00010876b038();
            func_0x00010876b274();
            func_0x000107c28dcc(&uStack_540);
            func_0x000107c278b8(auStack_428,&DAT_10f4bdfd4);
            uStack_410 = 0;
            uStack_408 = 1;
            uStack_3e8 = 0;
            uStack_3e0 = 0;
            uStack_3d8 = uStack_3d8 & 0xffffff00;
            uStack_3d0 = 0;
            uStack_398 = 0;
            uStack_390 = 0;
            uStack_38c = 0;
            uStack_400 = 0;
            uStack_3f8 = 0;
            uStack_3f0 = 0;
            uStack_3c0 = 0;
            uStack_3c8 = 0;
            uStack_3cc = 0;
            uStack_3b8 = 0;
            uStack_3a0 = 0;
            uStack_3a4 = 0;
            func_0x00010876afc8();
            FUN_10885ff98(ppuStack_2e0[0xc],&ppuStack_558);
            func_0x00010876b038();
            func_0x000107c287e4(&ppuStack_558);
          }
          func_0x00010876afec(alStack_630);
          func_0x00010876afec(auStack_610);
          ppuStack_2e0 = (undefined **)((ulong)ppuStack_2e0 & 0xffffffffffffff00);
          uStack_268 = 0;
          func_0x00010876b1c8();
          func_0x00010876b090();
          func_0x00010876b054();
          func_0x00010876b26c();
          func_0x00010876b074();
          func_0x000107c297b0(auStack_610);
          func_0x00010876b0fc();
          if ((*(byte *)(plVar12 + 0x6f) & 1) == 0) {
            func_0x00010876af98();
          }
          FUN_1086569a0(&ppuStack_600);
          plVar14 = (long *)plVar12[0x1c];
          uStack_5e8 = 0;
          uStack_5f0 = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          uStack_5f8 = 0;
          ppuStack_600 = (undefined **)0x0;
          FUN_1086cf200(&ppuStack_600);
          FUN_10868cc20(&ppuStack_558,lVar19);
          (**(code **)(*plVar14 + 0x28))
                    (alStack_630,plVar14,appuStack_5c8,1,0x1200ad,&ppuStack_600,&ppuStack_558,0,0);
          FUN_1089058f8(&ppuStack_558);
          func_0x0001086cf230(&ppuStack_600);
          if (iStack_618 == 0) {
            func_0x00010876afec(&ppuStack_600);
            FUN_108868114(ppuStack_600[0xc],appuStack_5c8);
            func_0x00010876b0a8();
            uStack_694 = 1;
            FUN_1087682d0(plVar12,auStack_5b0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),
                          ~uVar15 >> 0x3f,uVar11,uVar10,0x4d01cb,1);
          }
          else if ((char)plVar12[0x6f] == '\x01') {
            if (cStack_598 == '\x01') {
              func_0x00010876b07c();
            }
            func_0x00010876afec(&ppuStack_600);
            func_0x00010876b114(ppuStack_600[0x58]);
            func_0x00010876b0a8();
            *(undefined1 *)(plVar12 + 0x80) = 1;
            func_0x00010876b250();
          }
        }
        else {
          func_0x000107c29ee0(&ppuStack_558,ppuVar1[6]);
          pppuVar6 = &ppuStack_558;
          func_0x000107c28078(pppuVar6,appuStack_5c8);
          func_0x00010876b0e0();
          if ((int)pppuVar6 == 0) goto LAB_108769844;
          func_0x00010876afec(&ppuStack_600);
          func_0x00010876afec(alStack_630);
          FUN_1086d0208(&ppuStack_2e0,lVar19);
          func_0x00010876b1c8();
          func_0x00010876b090();
          func_0x00010876b054();
          func_0x00010876b26c();
          func_0x00010876b074();
          func_0x00010876b0fc();
          func_0x00010876b0a8();
          unaff_w24 = 0x4c01c5;
          if ((char)plVar12[0x6f] == '\x01') {
            if (cStack_598 == '\x01') {
              func_0x00010876b07c();
            }
            func_0x00010876afbc();
            func_0x00010876b2f8();
            func_0x00010876b114();
            func_0x00010876aff4();
            *(undefined1 *)(plVar12 + 0x80) = 1;
          }
          else {
            func_0x00010876af98();
          }
        }
        func_0x00010876b198();
        func_0x00010876b164();
        pppuVar6 = appuStack_5c8;
        func_0x000107c27914(pppuVar6);
        iVar4 = unaff_w24 + 1;
      }
      plVar17 = plVar17 + 1;
    }
    func_0x00010876b2cc();
    for (lVar18 = extraout_x8_04 << 3; lVar18 != 0; lVar18 = lVar18 + -8) {
      ppuVar1 = *(undefined ***)(*plVar17 + 0x20);
      uVar15 = *(ulong *)(*plVar17 + 0x18) & 0xfffffffffffffffc;
      ppuVar9 = &PTR_PTR_11326abd0;
      if (ppuVar1 != (undefined **)0x0) {
        ppuVar9 = ppuVar1;
      }
      if (*(char *)(uVar15 + 0x17) < '\0') {
        if (*(long *)(uVar15 + 8) == 0) goto LAB_108769d38;
LAB_108769ca8:
        FUN_108768c20(&ppuStack_600,*(undefined4 *)(ppuVar9 + 2),ppuVar9[4]);
        uVar8 = (ulong)*(char *)(uVar15 + 0x17);
        if ((long)uVar8 < 0) {
          uVar8 = *(ulong *)(uVar15 + 8);
        }
        if ((char)uStack_5e8 == '\x01') {
          func_0x00010876afec(&uStack_590);
          FUN_10886bd9c(&ppuStack_558,*(undefined8 *)(CONCAT71(uStack_58f,uStack_590) + 0x60),
                        &ppuStack_600);
          func_0x00010876b244();
          func_0x00010876b15c();
          func_0x00010876b180();
          if (cStack_80 != '\x01') {
            func_0x00010876b0d8();
            goto LAB_108769db0;
          }
          func_0x00010876b20c();
          func_0x00010876afbc();
          func_0x00010876b2f8();
          func_0x00010876b124();
          func_0x00010876aff4();
          *(undefined1 *)(plVar12 + 0x80) = 1;
          func_0x00010876b0d8();
        }
        else {
LAB_108769db0:
          uStack_590 = 0;
          bStack_560 = 0;
          if ((*(byte *)(ppuVar9 + 2) >> 3 & 1) != 0) {
            func_0x000108768c88(&uStack_590,ppuVar9[7]);
          }
          func_0x00010876afbc();
          plVar14 = (long *)ppuStack_558[0x3e];
          func_0x000107c278b8(auStack_5b0,&UNK_10f4ba21b);
          (**(code **)(*plVar14 + 0x10))(plVar14,auStack_5b0,0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5b0);
          iVar4 = iStack_56c;
          if (((uint)plVar14 & (uint)bStack_560) == 1) {
            func_0x00010876aff4();
            if (iVar4 != 1) goto LAB_108769e58;
            func_0x00010876afbc();
            func_0x00010876b2f8();
            func_0x00010876b1e0();
            FUN_108768cbc();
            func_0x00010876aff4();
            *(undefined1 *)(plVar12 + 0x80) = 1;
            unaff_w24 = 1;
          }
          else {
            func_0x00010876aff4();
LAB_108769e58:
            auStack_5b0[0] = 0;
            cStack_598 = '\0';
            lVar19 = plVar12[0x1d];
            func_0x00010876afec(alStack_630);
            lVar2 = alStack_630[0];
            func_0x00010876afec(appuStack_5c8);
            ppuStack_2e0 = (undefined **)((ulong)ppuStack_2e0 & 0xffffffffffffff00);
            uStack_268 = 0;
            FUN_10868fc6c(&ppuStack_558,auStack_5b0,uVar15,ppuVar9,extraout_x11,0x4d01ca,
                          plVar12 + 0x1e,(int)lVar19,&uStack_590,lVar2 + 0x60,
                          appuStack_5c8[0] + 0x1e,&ppuStack_2e0,plVar12[9],1);
            func_0x00010876b054();
            func_0x00010876b26c();
            func_0x00010876b074();
            func_0x000107c297b0(appuStack_5c8);
            func_0x00010876b0fc();
            func_0x00010876b164();
            unaff_w24 = 0x4c01c5;
            if ((char)plVar12[0x6f] == '\x01') {
              if ((char)uStack_5e8 == '\x01') {
                func_0x00010876b20c();
              }
              func_0x00010876afbc();
              func_0x00010876b2f8();
              func_0x00010876b124();
              func_0x00010876aff4();
              *(undefined1 *)(plVar12 + 0x80) = 1;
              func_0x00010876b250();
            }
            else {
              func_0x00010876afe0(plVar12,&ppuStack_600,
                                  uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),~uVar8 >> 0x3f
                                  ,uVar11,uVar10,0x1ca);
            }
          }
          func_0x00010876b198();
        }
        pppuVar6 = &ppuStack_600;
        func_0x000107c279dc();
        iVar4 = unaff_w24 + 2;
      }
      else {
        if (*(char *)(uVar15 + 0x17) != '\0') goto LAB_108769ca8;
LAB_108769d38:
        func_0x00010876afec(&ppuStack_600);
        plVar14 = (long *)ppuStack_600[0x1e];
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        ppuStack_2e0 = &PTR_FUN_110a609a8;
        uStack_2c0 = 0x265;
        func_0x00010876b188();
        func_0x00010876b304();
        func_0x00010876b224();
        FUN_1086901fc();
        func_0x000107c2884c(&ppuStack_558,pppuVar6);
        func_0x00010876b008(*(undefined8 *)(*plVar14 + 0x50));
        pppuVar6 = &ppuStack_558;
        func_0x000107c2882c();
        func_0x00010876b2a4();
        func_0x00010876b230();
        func_0x00010876b0a8();
        *(undefined1 *)((long)plVar12 + 0x401) = 1;
      }
      plVar17 = plVar17 + 1;
    }
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x38) == 0) {
      func_0x00010876afbc();
      puVar16 = ppuStack_558[0x58];
      func_0x00010876aff4();
      if (puVar16 != (undefined *)0x0) {
        func_0x00010876afc8();
        func_0x00010876b134();
        func_0x00010876afd4();
        func_0x00010876b040();
        FUN_1086980d0();
        func_0x00010876b04c();
        func_0x00010876b038();
      }
    }
  }
  else {
    uStack_694 = 0;
  }
  func_0x00010876afbc();
  if (ppuStack_558[0x58] == (undefined *)0x0) {
    pppuVar6 = &ppuStack_558;
LAB_10876a238:
    func_0x000107c297b0(pppuVar6);
  }
  else {
    bVar13 = *(byte *)(plVar12 + 0x80);
    func_0x00010876aff4();
    if ((bVar13 & 1) == 0) {
      if (plVar12[0x73] == 0) {
        if (*(char *)((long)plVar12 + 0x401) != '\x01') {
          if ((char)plVar12[0x7f] != '\x01') goto LAB_10876a23c;
          func_0x00010876afc8();
          func_0x00010876b134();
          func_0x00010876afd4();
          uStack_540 = uStack_540 & 0xffffffffffffff00;
          uStack_528 = uStack_528 & 0xffffffffffffff00;
          uStack_520 = uStack_520 & 0xffffffffffffff00;
          func_0x00010876b040();
          FUN_108698150();
          goto LAB_10876a150;
        }
        func_0x00010876afc8();
        func_0x00010876b134();
        func_0x00010876afd4();
        func_0x00010876b040();
        func_0x00010876b264();
        func_0x00010876b04c();
      }
      else {
        func_0x00010876afc8();
        func_0x00010876b134();
        func_0x00010876afd4();
        uStack_540 = uStack_540 & 0xffffffffffffff00;
        uStack_528 = uStack_528 & 0xffffffffffffff00;
        uStack_520 = uStack_520 & 0xffffffffffffff00;
        func_0x00010876b040();
        FUN_108698150();
LAB_10876a150:
        FUN_10868cd4c(&ppuStack_558);
      }
      pppuVar6 = &ppuStack_2e0;
      goto LAB_10876a238;
    }
  }
LAB_10876a23c:
  func_0x00010876afbc();
  ppuVar9 = ppuStack_558;
  func_0x00010876aff4();
  puVar16 = ppuVar9[0x56];
  if (puVar16 != (undefined *)0x0) {
    func_0x00010876b16c();
    iVar5 = (int)puVar16;
    (*extraout_x8_06)();
    if (iVar5 != 0) {
      plVar17 = plVar12 + 0x72;
      while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
        plVar14 = (long *)ppuVar9[0x56];
        func_0x00010876afd4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_540,plVar17 + 2);
        uStack_528 = 0x200000005;
        uStack_520 = uStack_520 & 0xffffffffffff0000;
        uStack_518 = 0;
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        uStack_4d0 = 0;
        lStack_4c8 = plVar17[5];
        uStack_4c0 = (undefined1)plVar17[6];
        lStack_4b8 = plVar17[7];
        uStack_4b0 = (undefined1)plVar17[8];
        uStack_4a8 = 0;
        uStack_4a0 = 0;
        uStack_498 = 0;
        uStack_490 = 0;
        uStack_488 = 0;
        uStack_480 = 0;
        lStack_478 = plVar12[9];
        uStack_470 = 1;
        uStack_468 = 0;
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        uStack_448 = 0;
        uStack_440 = 0;
        uStack_438 = 0;
        uStack_430 = 0;
        auStack_428[0] = 0;
        uStack_420 = 0;
        uStack_418 = 0;
        uStack_410 = uStack_410 & 0xffffffffffffff00;
        uStack_408 = 0;
        uStack_400 = uStack_400 & 0xffffffffffffff00;
        uStack_3f8 = uStack_3f8 & 0xffffffffffffff00;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        uStack_3d8 = (uint)((int)plVar17[9] == 0x4d01ca);
        uStack_3d4 = 1;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        uStack_3c8 = 0;
        uStack_3c0 = 0;
        uVar3 = (int)plVar12[0x1d];
        func_0x000108696a68();
        uStack_3b8 = uVar3;
        uStack_3b4 = 1;
        uStack_3b0 = 0;
        uStack_3ac = 0;
        uStack_3a8 = 0;
        uStack_3a4 = 0;
        uStack_3a0 = 0;
        uStack_398 = 0;
        func_0x00010876b008(*(undefined8 *)(*plVar14 + 0x28));
        func_0x000108691068(&ppuStack_558);
      }
      if ((*(byte *)(plVar12 + 0x7f) & 1) != 0) {
        plVar17 = (long *)ppuVar9[0x56];
        func_0x00010876afd4();
        uStack_540 = 0x200000005;
        uVar7 = *(uint *)(plVar12 + 0x1d);
        func_0x000108696a68();
        uStack_538 = uVar7;
        uStack_534 = 1;
        uStack_530 = plVar12[9];
        uStack_528 = CONCAT71(uStack_528._1_7_,1);
        uStack_520 = plVar12[0x7a];
        uStack_518 = (undefined1)plVar12[0x7b];
        uStack_508 = (undefined1)plVar12[0x7d];
        lStack_510 = plVar12[0x7c];
        func_0x00010876b008(*(undefined8 *)(*plVar17 + 0x20));
        func_0x00010876b04c();
      }
      if (plVar12[0x73] != 0) {
        FUN_10876ad08(plVar12[0x72]);
        plVar12[0x72] = 0;
        lVar19 = plVar12[0x71];
        for (lVar18 = 0; lVar19 != lVar18; lVar18 = lVar18 + 1) {
          *(undefined8 *)(plVar12[0x70] + lVar18 * 8) = 0;
        }
        plVar12[0x73] = 0;
      }
      if ((char)plVar12[0x7f] == '\x01') {
        *(undefined1 *)(plVar12 + 0x7f) = 0;
      }
    }
  }
  func_0x000107c28b24(plVar12[0xb]);
  ppuStack_558 = (undefined **)((ulong)ppuStack_558 & 0xffffffffffffff00);
  uStack_530 = uStack_530 & 0xffffffffffffff00;
  func_0x000107c28b2c(plVar12[0xb],&ppuStack_558);
  func_0x000107c29560(&ppuStack_558);
  (**(code **)(*plVar12 + 0x28))(plVar12);
  FUN_108768908(plVar12[0x1b],0,plVar12 + 0x23);
  lVar19 = lStack_658;
  for (lVar18 = lStack_660; lVar18 != lVar19; lVar18 = lVar18 + 0x260) {
    func_0x00010876afbc();
    (**(code **)(*(long *)ppuStack_558[0x1a] + 0x110))(ppuStack_558[0x1a],lVar18);
    func_0x00010876aff4();
  }
  ppuVar9 = &puStack_648;
  func_0x000107c2825c();
  ppuStack_558 = ppuVar9;
  FUN_1087689e0(plVar12,&ppuStack_558,iVar4,uStack_694);
LAB_10876a520:
  func_0x00010868c8fc(&lStack_660);
  return;
}



/* Entry: 10876a770; end: 10876a7ff;  */

void FUN_10876a770(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_48;
  
  if (param_1 != (long *)0x0) {
    func_0x00010876b178(auStack_98);
    uStack_7c = 1;
    uStack_80 = param_5;
    uStack_78 = param_3;
    func_0x000108696a68();
    uStack_74 = 1;
    uStack_68 = 1;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_70 = param_4;
    (**(code **)(*param_1 + 0x20))(param_1,auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  }
  return;
}



/* Entry: 10876a800; end: 10876a82f;  */

void FUN_10876a800(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876a830; end: 10876a843;  */

void FUN_10876a830(void)

{
  func_0x00010876a9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876a844; end: 10876a85b;  */

void FUN_10876a844(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10876a85c; end: 10876a89f;  */

void FUN_10876a85c(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876b280();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10876a8a0; end: 10876a943;  */

void FUN_10876a8a0(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876b280();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x00010876b10c();
  }
  return;
}



/* Entry: 10876a944; end: 10876a947;  */

undefined8 * FUN_10876a944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bf20;
  func_0x00010876b29c(param_1[8]);
  func_0x00010876b29c(param_1[2]);
  return param_1;
}



/* Entry: 10876a948; end: 10876a95b;  */

void FUN_10876a948(void)

{
  FUN_10876a998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876a95c; end: 10876a997;  */

void FUN_10876a95c(void)

{
  return;
}



/* Entry: 10876a998; end: 10876aa07;  */

undefined8 * FUN_10876a998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bf20;
  func_0x00010876b29c(param_1[8]);
  func_0x00010876b29c(param_1[2]);
  return param_1;
}



/* Entry: 10876aa08; end: 10876aa17;  */

void FUN_10876aa08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6be18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876aa18; end: 10876ab8b;  */

void FUN_10876aa18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  code *extraout_x8;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [72];
  long alStack_58 [3];
  long alStack_40 [2];
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_a0,param_3);
  FUN_10875bbdc(auStack_a0,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x10);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010876b16c(uVar5,*(undefined8 *)(lVar2 + 0x48));
  iVar1 = (int)uVar5;
  (*extraout_x8)();
  if (iVar1 == 0) {
    func_0x00010876afec(alStack_58);
    func_0x00010876b1a0(alStack_58[0]);
    func_0x00010876b218();
    func_0x00010876b294();
    func_0x00010876afec(alStack_58);
    lVar4 = *(long *)(alStack_58[0] + 0x2c0);
    func_0x00010876b294();
    if (lVar4 != 0) {
      func_0x00010876afec(alStack_40);
      uVar5 = *(undefined8 *)(alStack_40[0] + 0x2c0);
      func_0x000107c29e04(alStack_58,lVar2 + 0xf0);
      func_0x00010876b264(uVar5,alStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_58);
      func_0x000107c297b0(alStack_40);
    }
    func_0x000108681904(*(undefined8 *)(lVar2 + 0x58),param_1);
    FUN_108770c94(param_1);
    FUN_10876893c(lVar2,param_1);
  }
  else {
    func_0x00010876afec(alStack_58);
    plVar3 = *(long **)(alStack_58[0] + 0x70);
    func_0x00010876b104(alStack_40);
    (**(code **)(*plVar3 + 0x10))(plVar3,alStack_40);
    func_0x000107c297a4(alStack_40);
    func_0x00010876b294();
  }
  func_0x00010876b10c();
  return;
}



/* Entry: 10876ab8c; end: 10876abab;  */

void FUN_10876ab8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108769314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876abac; end: 10876abc3;  */

void FUN_10876abac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876abc4; end: 10876ac4f;  */

undefined8 * FUN_10876abc4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a6bd58;
  func_0x000107c2826c(param_1 + 0x75);
  FUN_10876ad08(param_1[0x72]);
  lVar1 = param_1[0x70];
  param_1[0x70] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c28d30(param_1 + 0x23);
  func_0x000107c297c8(param_1 + 0x21);
  func_0x000107c27914(param_1 + 0x1e);
  func_0x00010875be10(param_1 + 0x1c);
  func_0x000108694e3c(param_1 + 0x18);
  func_0x000107c278e0(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000107c27914(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876ac50; end: 10876ac53;  */

void FUN_10876ac50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6bf80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876ac54; end: 10876ac67;  */

void FUN_10876ac54(void)

{
  func_0x00010876acf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876ac68; end: 10876ac93;  */

void FUN_10876ac68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10876ac94; end: 10876ace7;  */

ulong FUN_10876ac94(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  
  dVar5 = (double)(param_2 + -1);
  uVar2 = param_1;
  _exp2();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x000105391224();
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  uVar3 = (uVar2 - uVar3 * uVar1) + lVar4 * (long)dVar5;
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar3 <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 10876ace8; end: 10876ad07;  */

void FUN_10876ace8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 10876ad08; end: 10876ad43;  */

void FUN_10876ad08(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10876ad44; end: 10876aeeb;  */

void FUN_10876ad44(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10876aeec(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10876aeec(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876aeec; end: 10876af03;  */

void FUN_10876aeec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876af04; end: 10876af97;  */

long * FUN_10876af04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10876af98; end: 10876b33f;  */

/* WARNING: Removing unreachable block (ram,0x000108768320) */
/* WARNING: Removing unreachable block (ram,0x0001087683fc) */
/* WARNING: Removing unreachable block (ram,0x000108768354) */
/* WARNING: Removing unreachable block (ram,0x000108768400) */
/* WARNING: Removing unreachable block (ram,0x000108768364) */
/* WARNING: Removing unreachable block (ram,0x000108768370) */
/* WARNING: Removing unreachable block (ram,0x000108768404) */
/* WARNING: Removing unreachable block (ram,0x000108768410) */
/* WARNING: Removing unreachable block (ram,0x000108768418) */
/* WARNING: Removing unreachable block (ram,0x000108768430) */
/* WARNING: Removing unreachable block (ram,0x00010876844c) */
/* WARNING: Removing unreachable block (ram,0x000108768438) */
/* WARNING: Removing unreachable block (ram,0x000108768440) */
/* WARNING: Removing unreachable block (ram,0x000108768450) */
/* WARNING: Removing unreachable block (ram,0x000108768424) */
/* WARNING: Removing unreachable block (ram,0x000108768510) */
/* WARNING: Removing unreachable block (ram,0x00010876842c) */
/* WARNING: Removing unreachable block (ram,0x000108768458) */
/* WARNING: Removing unreachable block (ram,0x00010876845c) */
/* WARNING: Removing unreachable block (ram,0x000108768494) */
/* WARNING: Removing unreachable block (ram,0x00010876849c) */
/* WARNING: Removing unreachable block (ram,0x0001087684a0) */
/* WARNING: Removing unreachable block (ram,0x0001087684a4) */
/* WARNING: Removing unreachable block (ram,0x0001087684ac) */
/* WARNING: Removing unreachable block (ram,0x0001087684dc) */
/* WARNING: Removing unreachable block (ram,0x0001087684cc) */
/* WARNING: Removing unreachable block (ram,0x0001087684e4) */
/* WARNING: Removing unreachable block (ram,0x0001087684d4) */
/* WARNING: Removing unreachable block (ram,0x0001087684e8) */
/* WARNING: Removing unreachable block (ram,0x0001087684f4) */

void FUN_10876af98(float param_1,float param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  long *plVar6;
  long extraout_x8_00;
  long unaff_x19;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 unaff_w27;
  long *plVar10;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 in_stack_00000068;
  byte in_stack_00000138;
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((in_stack_00000138 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 0x3f8) & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x3d0) = in_stack_00000058;
      *(undefined1 *)(unaff_x19 + 0x3d8) = unaff_w27;
      *(undefined8 *)(unaff_x19 + 0x3e0) = in_stack_00000068;
      *(undefined1 *)(unaff_x19 + 1000) = in_stack_00000060;
      *(undefined4 *)(unaff_x19 + 0x3f0) = 0x4d01cb;
      *(undefined1 *)(unaff_x19 + 0x3f8) = 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
    func_0x00010876b178(auStack_90);
    lVar3 = unaff_x19 + 0x3a8;
    func_0x00010596ff94(lVar3,auStack_90);
    if (lVar3 == 0) {
      plVar1 = (long *)(unaff_x19 + 0x398);
      plVar4 = plVar1;
      func_0x000107c278c4(plVar1,auStack_90);
      plVar9 = *(long **)(unaff_x19 + 0x388);
      if (plVar9 != (long *)0x0) {
        uVar7 = (long)plVar9 - 1;
        plVar5 = plVar4;
        if (((ulong)plVar9 & uVar7) == 0) {
          plVar8 = (long *)(uVar7 & (ulong)plVar4);
        }
        else {
          plVar8 = plVar4;
          if (plVar9 <= plVar4) {
            func_0x00010876b2ec();
          }
        }
        func_0x00010876b2e0();
        plVar10 = *(long **)(extraout_x8 + (long)plVar8 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_108768578;
              plVar6 = (long *)plVar10[1];
              if (plVar6 != plVar4) break;
              func_0x00010876b238();
              if (((ulong)plVar5 & 1) != 0) goto LAB_108768684;
            }
            if (((ulong)plVar9 & uVar7) == 0) {
              plVar6 = (long *)((ulong)plVar6 & uVar7);
            }
            else if (plVar9 <= plVar6) {
              uVar2 = 0;
              if (plVar9 != (long *)0x0) {
                uVar2 = (ulong)plVar6 / (ulong)plVar9;
              }
              plVar6 = (long *)((long)plVar6 - uVar2 * (long)plVar9);
            }
          } while (plVar6 == plVar8);
        }
      }
LAB_108768578:
      plVar10 = (long *)0x50;
      __Znwm();
      plVar5 = (long *)(unaff_x19 + 0x390);
      uStack_68 = 0;
      *plVar10 = 0;
      plVar10[1] = (long)plVar4;
      plStack_78 = plVar10;
      plStack_70 = plVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (plVar10 + 2,auStack_90);
      func_0x00010876b060();
      *(undefined4 *)(plVar10 + 9) = 0x4d01cb;
      func_0x00010876b140();
      if ((plVar9 == (long *)0x0) || (plVar6 = plVar8, param_2 * (float)plVar9 < param_1)) {
        func_0x00010876b1b0();
        func_0x00010876b1ec();
        FUN_10876ad44(unaff_x19 + 0x380);
        plVar9 = *(long **)(unaff_x19 + 0x388);
        if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
          plVar6 = (long *)((long)plVar9 - 1U & (ulong)plVar4);
        }
        else {
          plVar6 = plVar4;
          if (plVar9 <= plVar4) {
            func_0x00010876b2ec();
            plVar6 = plVar8;
          }
        }
      }
      func_0x00010876b2e0();
      plVar8 = *(long **)(extraout_x8_00 + (long)plVar6 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar10 = *plVar5;
        *plVar5 = (long)plVar10;
        *(long **)(extraout_x8_00 + (long)plVar6 * 8) = plVar5;
        if (*plVar10 != 0) {
          plVar8 = *(long **)(*plVar10 + 8);
          if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar8) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar8 / (ulong)plVar9;
            }
            plVar8 = (long *)((long)plVar8 - uVar7 * (long)plVar9);
          }
          *(long **)(extraout_x8_00 + (long)plVar8 * 8) = plVar10;
        }
      }
      else {
        *plVar10 = *plVar8;
        *plVar8 = (long)plVar10;
      }
      plStack_78 = (long *)0x0;
      *plVar1 = *plVar1 + 1;
      FUN_10876af04(&plStack_78);
    }
LAB_108768684:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  }
  return;
}



/* Entry: 10876b340; end: 10876b3f7;  */

undefined8 *
FUN_10876b340(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c278b8(auStack_48,&UNK_10f4ba244);
  uStack_50 = *param_4;
  *param_4 = 0;
  func_0x000107c29808(param_1,auStack_48,param_2,&uStack_50);
  func_0x000107c29578(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *param_1 = &PTR_FUN_110a6c038;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[0xe] = param_3[1];
  param_1[0xd] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10876b3f8; end: 10876b837;  */

void FUN_10876b3f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_70;
  
  func_0x00010876c574();
  uStack_70 = extraout_x8;
  func_0x000107c297b4(&uStack_180,param_1 + 8);
  lStack_170 = param_1;
  func_0x000107c297b4(&puStack_1a0,param_1 + 8);
  puStack_158 = (undefined8 *)lStack_198;
  puStack_160 = puStack_1a0;
  lStack_190 = param_1;
  if (lStack_198 != 0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10 != 0);
  }
  lStack_150 = lStack_190;
  func_0x00010876c594(&ppuStack_a0);
  puStack_140 = ppuStack_a0[0x4b];
  puStack_148 = ppuStack_a0[0x4a];
  if (ppuStack_a0[0x4b] != (undefined *)0x0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10_00 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&ppuStack_a0);
  pcStack_100 = FUN_10876c210;
  ppuStack_f8 = &PTR_FUN_110a6c230;
  plVar5 = (long *)0x30;
  __Znwm();
  plVar5[1] = (long)puStack_158;
  *plVar5 = (long)puStack_160;
  if (puStack_158 != (undefined8 *)0x0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10_01 != 0);
  }
  plVar5[3] = (long)puStack_148;
  plVar5[2] = lStack_150;
  plVar5[4] = (long)puStack_140;
  if (puStack_140 != (undefined *)0x0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(plVar5 + 5) = uStack_138;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar1;
  lStack_108 = lVar2;
  plStack_f0 = plVar5;
  if (lVar2 == 0) {
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010876c528();
    } while (extraout_w10_03 != 0);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010876c528();
    } while (extraout_w10_04 != 0);
  }
  puVar6 = (undefined8 *)0xb8;
  uStack_130 = uVar1;
  lStack_128 = lVar2;
  __Znwm();
  plVar5 = puVar6 + 1;
  *plVar5 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110a6c0f0;
  ppuStack_a0 = (undefined **)FUN_10876bef8;
  ppuStack_98 = &PTR_FUN_110a6c130;
  uStack_130 = 0;
  lStack_128 = 0;
  pcStack_d0 = FUN_10876bf78;
  ppuStack_c8 = &PTR_FUN_110a6c148;
  if (lStack_178 == 0) {
    ppuVar7 = &PTR_FUN_110a6c230;
  }
  else {
    plVar8 = (long *)(lStack_178 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_f8;
    } while (cVar3 != '\0');
  }
  lStack_b0 = lStack_170;
  puVar6[3] = &PTR_FUN_110a6c1f8;
  puVar6[4] = FUN_10876bf78;
  puVar6[5] = &PTR_FUN_110a6c148;
  puVar6[7] = lStack_178;
  puVar6[6] = uStack_180;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar6[8] = lStack_170;
  puVar6[10] = FUN_10876c210;
  (*(code *)ppuVar7[2])(puVar6 + 0xb,&ppuStack_f8);
  puVar6[3] = &PTR_DAT_110a6c170;
  puVar6[0x10] = FUN_10876bef8;
  puVar6[0x11] = &PTR_FUN_110a6c130;
  puVar6[0x12] = uVar1;
  puVar6[0x13] = lVar2;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar6[0x16] = uStack_1b8;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_1b0 = puVar6 + 3;
  puStack_1a8 = puVar6;
  func_0x00010876c450(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  func_0x00010876c51c(ppuStack_f8);
  FUN_10876bea8(&puStack_160);
  ppuStack_a0 = &PTR_FUN_110a94bb8;
  ppuStack_98 = (undefined **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010876c594(&puStack_160);
  func_0x000107c29ee4(&pcStack_d0,puStack_160 + 3);
  uStack_90 = uStack_90 | 1;
  if (uStack_88 == 0) {
    ppuVar7 = ppuStack_98;
    if (((ulong)ppuStack_98 & 1) != 0) {
      ppuVar7 = *(undefined ***)((ulong)ppuStack_98 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    uStack_88 = (ulong)ppuVar7;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(&pcStack_d0);
  func_0x000107c297b0(&puStack_160);
  func_0x00010876c594(&pcStack_d0);
  plVar8 = *(long **)(pcStack_d0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = *plVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_160 = puVar6 + 3;
  puStack_158 = puVar6;
  (**(code **)(*plVar8 + 0x80))(plVar8,&ppuStack_a0,&puStack_160);
  func_0x00010876c478(&puStack_160);
  func_0x000107c297b0(&pcStack_d0);
  FUN_108918b68(&ppuStack_a0);
  func_0x00010876c450(&puStack_1b0);
  func_0x000107c297a4(&puStack_1a0);
  func_0x000107c297a4(&uStack_180);
  func_0x00010876c540(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2a2e0(&pcStack_d0);
    func_0x000107c297b0(&puStack_160);
    FUN_108918b68(&ppuStack_a0);
    func_0x00010876c450(&puStack_1b0);
    func_0x000107c297a4(&puStack_1a0);
    do {
      func_0x000107c297a4(&uStack_180);
      func_0x00010876c538();
    } while( true );
  }
  return;
}



/* Entry: 10876b838; end: 10876b8b3;  */

void FUN_10876b838(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a6c080;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10876b8b4; end: 10876bcff;  */

/* WARNING: Possible PIC construction at 0x00010876bc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010876bcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010876bc14) */
/* WARNING: Removing unreachable block (ram,0x00010876bc60) */
/* WARNING: Removing unreachable block (ram,0x00010876bc98) */
/* WARNING: Removing unreachable block (ram,0x00010876bcf0) */
/* WARNING: Removing unreachable block (ram,0x00010876bc20) */
/* WARNING: Removing unreachable block (ram,0x00010876bcf8) */

ulong * FUN_10876b8b4(code **param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  code *pcVar5;
  code **ppcVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  undefined1 auStack_930 [24];
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  code *pcStack_8e8;
  code *pcStack_8e0;
  undefined1 auStack_4d8 [24];
  code *pcStack_4c0;
  undefined **ppuStack_4b8;
  ulong *puStack_4b0;
  code **ppcStack_490;
  
  uVar14 = 0;
  uVar17 = 0;
  ppcVar6 = param_1;
  func_0x00010876c574();
  uVar12 = *(ulong *)(param_2 + 0x10);
  puVar9 = (ulong *)(param_2 + 0x10);
  if ((uVar12 & 1) != 0) {
    puVar9 = (ulong *)(uVar12 + 7);
  }
  puVar1 = puVar9 + *(int *)(param_2 + 0x18);
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 0;
  uVar12 = 0;
  do {
    if (puVar9 == puVar1) {
      uStack_940 = 0;
      uStack_938 = 0;
      uStack_948 = 0;
      pcVar5 = param_1[5];
      pcStack_8e0 = param_1[4];
      pcStack_8e8 = param_1[3];
      uStack_900 = uVar12;
      uStack_8f8 = uVar14;
      uStack_8f0 = uVar17;
      if (param_1[4] != (code *)0x0) {
        do {
          func_0x00010876c528();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      lVar7 = *(long *)(pcVar5 + 0x10);
      __ZNSt3__15mutex4lockEv(lVar7 + 8);
      lVar15 = *(long *)(lVar7 + 0x70);
      pcStack_4c0 = FUN_10876c4a0;
      ppuStack_4b8 = &PTR_FUN_110a6c248;
      puVar9 = (ulong *)0x28;
      __Znwm();
      puVar9[1] = uStack_8f8;
      *puVar9 = uStack_900;
      puVar9[2] = uStack_8f0;
      uStack_8f8 = 0;
      uStack_8f0 = 0;
      uStack_900 = 0;
      puVar9[4] = (ulong)pcStack_8e0;
      puVar9[3] = (ulong)pcStack_8e8;
      pcStack_8e8 = (code *)0x0;
      pcStack_8e0 = (code *)0x0;
      puStack_4b0 = puVar9;
      ppcStack_490 = ppcVar6;
      func_0x000107c28154(lVar7 + 0x48,&pcStack_4c0);
      func_0x00010876c51c(ppuStack_4b8);
      __ZNSt3__15mutex6unlockEv(lVar7 + 8);
      if (lVar15 == 0) {
        plVar10 = *(long **)pcVar5;
        ppuStack_4b8 = *(undefined ***)(pcVar5 + 0x18);
        pcStack_4c0 = *(code **)(pcVar5 + 0x10);
        if (*(long *)(pcVar5 + 0x18) != 0) {
          do {
            func_0x00010876c528();
          } while (extraout_w10_00 != 0);
        }
        (**(code **)(*plVar10 + 0x10))();
        func_0x000107c27e74(&pcStack_4c0);
      }
      FUN_10876bd00(&uStack_900);
      uVar12 = uStack_948;
      uVar14 = uStack_940;
      if (uStack_948 != 0) {
        while (uVar14 != uVar12) {
          uVar14 = uVar14 - 0x448;
          FUN_10876c3b4();
        }
        uStack_940 = uVar12;
        __ZdlPv(uStack_948);
      }
      return &uStack_948;
    }
    uVar18 = *puVar9;
    ppuVar2 = &PTR_PTR_11327ad30;
    if (*(undefined ***)(uVar18 + 0x18) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar18 + 0x18);
    }
    ppuVar3 = &PTR_PTR_11326cb58;
    if ((undefined **)ppuVar2[0xd] != (undefined **)0x0) {
      ppuVar3 = (undefined **)ppuVar2[0xd];
    }
    func_0x000107c29ee0(auStack_4d8,ppuVar3);
    uVar11 = 5;
    if (*(int *)((long)ppuVar2 + 0xf4) != 1) {
      uVar11 = 0;
    }
    uStack_918 = 0;
    uStack_910 = 0;
    uStack_908 = 0;
    func_0x000107c291fc(&uStack_900,param_1[1],ppuVar2,auStack_4d8,uVar11,&uStack_918,0);
    ppuVar2 = &PTR_PTR_11327ad30;
    if (*(undefined ***)(uVar18 + 0x18) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar18 + 0x18);
    }
    ppuVar3 = &PTR_PTR_11326cb58;
    if ((undefined **)ppuVar2[0xf] != (undefined **)0x0) {
      ppuVar3 = (undefined **)ppuVar2[0xf];
    }
    func_0x000107c29ee0(auStack_930,ppuVar3);
    FUN_10862af3c(&pcStack_4c0,&uStack_900,auStack_930,*(undefined8 *)(uVar18 + 0x20));
    func_0x000107c27914(auStack_930);
    func_0x000107c27a60(&uStack_900);
    func_0x000107c27a04(&uStack_918);
    func_0x000107c27914(auStack_4d8);
    if (uVar14 < uVar17) {
      func_0x00010876c350(uVar14,&pcStack_4c0);
      uVar16 = uVar12;
      uVar4 = uVar14;
    }
    else {
      lVar15 = uVar14 - uVar12;
      uVar18 = lVar15 / 0x448 + 1;
      if (0x3bcbadc7f10d14 < uVar18) {
        uStack_948 = uVar12;
        uStack_940 = uVar14;
        uStack_938 = uVar17;
        FUN_10876c3a0();
LAB_10876bc5c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10876bc60);
        (*pcVar5)();
      }
      uVar4 = (long)(uVar17 - uVar12) / 0x448;
      uVar13 = uVar4 * 2;
      if (uVar13 < uVar18 || uVar13 - uVar18 == 0) {
        uVar13 = uVar18;
      }
      if (0x1de5d6e3f88689 < uVar4) {
        uVar13 = 0x3bcbadc7f10d14;
      }
      if (uVar13 == 0) {
        lVar7 = 0;
      }
      else {
        if (0x3bcbadc7f10d14 < uVar13) {
          uStack_948 = uVar12;
          uStack_940 = uVar14;
          uStack_938 = uVar17;
          func_0x000104bd35f4();
          goto LAB_10876bc5c;
        }
        lVar7 = uVar13 * 0x448;
        __Znwm();
      }
      uVar4 = lVar7 + lVar15;
      func_0x00010876c350(uVar4,&pcStack_4c0);
      uVar16 = uVar4 + (lVar15 / -0x448) * 0x448;
      uVar18 = uVar16;
      for (uVar17 = uVar12; uVar8 = uVar12, uVar17 != uVar14; uVar17 = uVar17 + 0x448) {
        func_0x00010876c350(uVar18,uVar17);
        uVar18 = uVar18 + 0x448;
      }
      for (; uVar8 != uVar14; uVar8 = uVar8 + 0x448) {
        FUN_10876c3b4();
      }
      uVar17 = lVar7 + uVar13 * 0x448;
      if (uVar12 != 0) {
        __ZdlPv(uVar12);
      }
    }
    uVar14 = uVar4 + 0x448;
    ppcVar6 = &pcStack_4c0;
    FUN_10876c3b4();
    puVar9 = puVar9 + 1;
    uVar12 = uVar16;
  } while( true );
}



/* Entry: 10876bd00; end: 10876bd27;  */

long * FUN_10876bd00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001086217d0(param_1 + 3);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x448;
      FUN_10876c3b4();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10876bd28; end: 10876be77;  */

undefined8 * FUN_10876bd28(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_a0;
  puVar4 = &uStack_a0;
  func_0x00010876c574();
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = extraout_x8;
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x00010876c528();
    } while (extraout_w10 != 0);
  }
  FUN_108770c94();
  uStack_90 = (undefined4)param_2;
  func_0x000107c28150();
  lVar5 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar5 + 8);
  lVar6 = *(long *)(lVar5 + 0x70);
  uStack_80 = 0x10876c4d8;
  ppuStack_78 = &PTR_DAT_110a6c260;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_60 = uStack_90;
  uStack_50 = param_2;
  func_0x000107c28154(lVar5 + 0x48,&uStack_80);
  func_0x00010876c51c(ppuStack_78);
  __ZNSt3__15mutex6unlockEv(lVar5 + 8);
  if (lVar6 == 0) {
    plVar2 = (long *)*puVar1;
    ppuStack_78 = (undefined **)puVar1[3];
    uStack_80 = puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x00010876c528();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar2 + 0x10))();
    func_0x000107c27e74(&uStack_80);
  }
  func_0x0001086217d0();
  func_0x00010876c540(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&uStack_80);
    func_0x0001086217d0();
    func_0x00010876c538();
    *puVar4 = &PTR_FUN_110a6c038;
    func_0x0001086d5a48(puVar4 + 0xd);
    *puVar4 = &PTR_DAT_110a6d608;
    func_0x0001005fe494(puVar4 + 0xb);
    func_0x0001005640e4(puVar4 + 6);
    func_0x000107c60ca0(puVar4 + 3);
    func_0x0001005fe52c(puVar4 + 1);
    return puVar4;
  }
  return puVar3;
}



/* Entry: 10876be78; end: 10876be7b;  */

undefined8 * FUN_10876be78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c038;
  func_0x0001086d5a48(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876be7c; end: 10876be8f;  */

void FUN_10876be7c(void)

{
  func_0x00010876c3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876be90; end: 10876be93;  */

undefined8 * FUN_10876be90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c080;
  func_0x000107c2814c(param_1 + 5);
  func_0x0001086217d0(param_1 + 3);
  func_0x000107c28ebc(param_1 + 1);
  return param_1;
}



/* Entry: 10876be94; end: 10876bea7;  */

void FUN_10876be94(void)

{
  func_0x00010876c40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876bea8; end: 10876becf;  */

undefined8 FUN_10876bea8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10876bed0; end: 10876bed3;  */

void FUN_10876bed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876bed4; end: 10876bee7;  */

void FUN_10876bed4(void)

{
  FUN_10876c200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876bee8; end: 10876bef7;  */

void FUN_10876bee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10876bef8; end: 10876bf53;  */

long FUN_10876bef8(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10876bf54; end: 10876bf77;  */

void FUN_10876bf54(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10876bf78; end: 10876bff3;  */

void FUN_10876bf78(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  plVar1 = *(long **)(param_2 + 0x20);
  func_0x000107c28b24(plVar1[0xb]);
  (**(code **)(*(long *)plVar1[0xd] + 0x18))((long *)plVar1[0xd],param_1);
  auStack_50[0] = 0;
  uStack_28 = 0;
  func_0x000107c28b2c(plVar1[0xb],auStack_50);
  func_0x000107c29560(auStack_50);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}



/* Entry: 10876bff4; end: 10876c023;  */

void FUN_10876bff4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10876c024; end: 10876c037;  */

void FUN_10876c024(void)

{
  func_0x00010876c1cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876c038; end: 10876c04f;  */

void FUN_10876c038(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10876c050; end: 10876c093;  */

void FUN_10876c050(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010876c5a4();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010876c084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10876c094; end: 10876c13b;  */

void FUN_10876c094(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010876c5a4();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10876c13c; end: 10876c13f;  */

undefined8 * FUN_10876c13c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c1f8;
  func_0x00010876c59c(param_1[8]);
  func_0x00010876c59c(param_1[2]);
  return param_1;
}



/* Entry: 10876c140; end: 10876c153;  */

void FUN_10876c140(void)

{
  FUN_10876c190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876c154; end: 10876c18f;  */

void FUN_10876c154(void)

{
  return;
}



/* Entry: 10876c190; end: 10876c1ff;  */

undefined8 * FUN_10876c190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c1f8;
  func_0x00010876c59c(param_1[8]);
  func_0x00010876c59c(param_1[2]);
  return param_1;
}



/* Entry: 10876c200; end: 10876c20f;  */

void FUN_10876c200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876c210; end: 10876c2e3;  */

void FUN_10876c210(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_a8 [72];
  undefined1 auStack_60 [40];
  undefined1 uStack_38;
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_a8,param_3);
  FUN_10875bbdc(auStack_a8,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  plVar3 = *(long **)(lVar2 + 0x10);
  func_0x000108681904(plVar3[0xb],param_1);
  uVar1 = param_1;
  FUN_108770c94(param_1);
  (**(code **)(*(long *)plVar3[0xd] + 0x10))((long *)plVar3[0xd],param_1);
  auStack_60[0] = 0;
  uStack_38 = 0;
  func_0x000107c28b2c(plVar3[0xb],auStack_60);
  func_0x000107c29560(auStack_60);
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1);
  func_0x000107c29564(auStack_a8);
  return;
}



/* Entry: 10876c2e4; end: 10876c303;  */

void FUN_10876c2e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10876bea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876c304; end: 10876c307;  */

void FUN_10876c304(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876c308; end: 10876c39f;  */

long * FUN_10876c308(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x448;
      FUN_10876c3b4();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10876c3a0; end: 10876c3b3;  */

undefined * FUN_10876c3a0(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107c27914(puVar1 + 0x428);
  func_0x00010066f12c(puVar1 + 0x3d8);
  func_0x00010066d68c(puVar1 + 0x2f8);
  func_0x0001006b6db8(puVar1 + 0x2d8);
  func_0x0001005fce88(puVar1 + 0x2a0);
  func_0x0001006b6dec(puVar1 + 0x208);
  func_0x0001006b6e3c(puVar1 + 0x138);
  func_0x0001005fb56c(puVar1 + 0xe0);
  func_0x0001005fb56c(puVar1 + 0xb8);
  func_0x0001005fb56c(puVar1 + 0xa0);
  func_0x0001006b6e5c(puVar1 + 0x38);
  func_0x0001006b7564();
  puStack_38 = puVar1;
  func_0x000100100fd4(&puStack_38);
  return puVar1;
}



/* Entry: 10876c3b4; end: 10876c49f;  */

long FUN_10876c3b4(long param_1)

{
  long lStack_28;
  
  func_0x000107c27914(param_1 + 0x428);
  func_0x00010066f12c(param_1 + 0x3d8);
  func_0x00010066d68c(param_1 + 0x2f8);
  func_0x0001006b6db8(param_1 + 0x2d8);
  func_0x0001005fce88(param_1 + 0x2a0);
  func_0x0001006b6dec(param_1 + 0x208);
  func_0x0001006b6e3c(param_1 + 0x138);
  func_0x0001005fb56c(param_1 + 0xe0);
  func_0x0001005fb56c(param_1 + 0xb8);
  func_0x0001005fb56c(param_1 + 0xa0);
  func_0x0001006b6e5c(param_1 + 0x38);
  func_0x0001006b7564();
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10876c4a0; end: 10876c4b3;  */

void FUN_10876c4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x18) + 0x10))();
  return;
}



/* Entry: 10876c4b4; end: 10876c4d3;  */

void FUN_10876c4b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10876bd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876c4d4; end: 10876c5bb;  */

void FUN_10876c4d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10876c5bc; end: 10876c5cf;  */

void FUN_10876c5bc(void)

{
  func_0x0001008510b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876c5d0; end: 10876c5d3;  */

void FUN_10876c5d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c2e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876c5d4; end: 10876c5e7;  */

void FUN_10876c5d4(void)

{
  func_0x00010876c738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876c5e8; end: 10876c627;  */

void FUN_10876c5e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a6c328;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 10876c628; end: 10876c63b;  */

void FUN_10876c628(void)

{
  func_0x000100851020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876c63c; end: 10876c6e3;  */

void FUN_10876c63c(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010084fa1c();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10876c6e4; end: 10876c6e7;  */

undefined8 * FUN_10876c6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c3f0;
  func_0x000100851018(param_1[8]);
  func_0x000100851018(param_1[2]);
  return param_1;
}



/* Entry: 10876c6e8; end: 10876c6fb;  */

void FUN_10876c6e8(void)

{
  func_0x00010085105c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876c6fc; end: 10876c747;  */

void FUN_10876c6fc(void)

{
  return;
}



/* Entry: 10876c748; end: 10876c85b;  */

void FUN_10876c748(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_a8 [72];
  ulong auStack_60 [5];
  undefined1 uStack_38;
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_a8,param_3);
  FUN_10875bbdc(auStack_a8,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  plVar3 = *(long **)(lVar2 + 0x10);
  func_0x000108681904(plVar3[0xb],param_1);
  auStack_60[0] = auStack_60[0] & 0xffffffffffffff00;
  uStack_38 = 0;
  func_0x000107c28b2c(plVar3[0xb],auStack_60);
  func_0x000107c29560(auStack_60);
  lVar2 = plVar3[0xd];
  do {
    auStack_60[0] = 0;
    lVar1 = lVar2 + 0x10;
    func_0x00010084fe34(lVar1,auStack_60);
    if ((int)lVar1 != 0) {
      func_0x00010084fe40(lVar2 + 0x98);
      *(int *)(lVar2 + 0x98) = (int)param_1;
      *(undefined4 *)(lVar2 + 0xd0) = 0;
      *(undefined1 *)(lVar2 + 0xd8) = 1;
      *(undefined8 *)(lVar2 + 0x10) = 2;
      func_0x000107c31508(lVar2,plVar3 + 0xd);
      break;
    }
  } while (((uint)auStack_60[0] >> 1 & 1) == 0);
  FUN_108770c94(param_1);
  (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  func_0x000107c29564(auStack_a8);
  return;
}



/* Entry: 10876c85c; end: 10876c86f;  */

void FUN_10876c85c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10876c870; end: 10876c967;  */

undefined8 *
FUN_10876c870(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c278b8(auStack_58,&UNK_10f4ba279);
  uStack_60 = *param_3;
  *param_3 = 0;
  func_0x000107c29808(param_1,auStack_58,param_2,&uStack_60);
  func_0x000107c29578(&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  *param_1 = &PTR_FUN_110a6c450;
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[0xe] = param_4[1];
  param_1[0xd] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10876d308();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(param_1 + 0xf,param_5);
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



/* Entry: 10876c968; end: 10876cd93;  */

void FUN_10876c968(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c297b4(&uStack_180,param_1 + 8);
  lStack_170 = param_1;
  func_0x000107c297b4(&puStack_1a0,param_1 + 8);
  puStack_158 = (undefined8 *)lStack_198;
  puStack_160 = puStack_1a0;
  lStack_190 = param_1;
  if (lStack_198 != 0) {
    do {
      FUN_10876d308();
    } while (extraout_w10 != 0);
  }
  lStack_150 = lStack_190;
  func_0x000107c29820(&ppuStack_a0,param_1);
  puStack_140 = ppuStack_a0[0x4b];
  puStack_148 = ppuStack_a0[0x4a];
  if (ppuStack_a0[0x4b] != (undefined *)0x0) {
    do {
      FUN_10876d308();
    } while (extraout_w10_00 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&ppuStack_a0);
  pcStack_100 = FUN_10876d174;
  ppuStack_f8 = &PTR_FUN_110a6c5f0;
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = puStack_158;
  *puVar4 = puStack_160;
  if (puStack_158 != (undefined8 *)0x0) {
    do {
      FUN_10876d308();
    } while (extraout_w10_01 != 0);
  }
  puVar4[3] = puStack_148;
  puVar4[2] = lStack_150;
  puVar4[4] = puStack_140;
  if (puStack_140 != (undefined *)0x0) {
    do {
      FUN_10876d308();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(puVar4 + 5) = uStack_138;
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar5;
  lStack_108 = lVar1;
  puStack_f0 = puVar4;
  if (lVar1 == 0) {
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      FUN_10876d308();
    } while (extraout_w10_03 != 0);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
    do {
      FUN_10876d308();
    } while (extraout_w10_04 != 0);
  }
  puVar4 = (undefined8 *)0xb8;
  uStack_130 = uVar5;
  lStack_128 = lVar1;
  __Znwm();
  plVar8 = puVar4 + 1;
  *plVar8 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a6c4b0;
  ppuStack_a0 = (undefined **)FUN_10876ce40;
  ppuStack_98 = &PTR_FUN_110a6c4f0;
  uStack_130 = 0;
  lStack_128 = 0;
  pcStack_d0 = FUN_10876cec4;
  ppuStack_c8 = &PTR_FUN_110a6c508;
  if (lStack_178 == 0) {
    ppuVar7 = &PTR_FUN_110a6c5f0;
  }
  else {
    plVar6 = (long *)(lStack_178 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_f8;
    } while (cVar2 != '\0');
  }
  lStack_b0 = lStack_170;
  puVar4[3] = &PTR_FUN_110a6c5b8;
  puVar4[4] = FUN_10876cec4;
  puVar4[5] = &PTR_FUN_110a6c508;
  puVar4[7] = lStack_178;
  puVar4[6] = uStack_180;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar4[8] = lStack_170;
  puVar4[10] = FUN_10876d174;
  (*(code *)ppuVar7[2])(puVar4 + 0xb,&ppuStack_f8);
  puVar4[3] = &PTR_DAT_110a6c530;
  puVar4[0x10] = FUN_10876ce40;
  puVar4[0x11] = &PTR_FUN_110a6c4f0;
  puVar4[0x12] = uVar5;
  puVar4[0x13] = lVar1;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar4[0x16] = uStack_1b8;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_1b0 = puVar4 + 3;
  puStack_1a8 = puVar4;
  func_0x00010876d2b8(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  FUN_10876cdf0(&puStack_160);
  ppuStack_a0 = &PTR_FUN_110a97e50;
  ppuStack_98 = (undefined **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000107c29ee4(&pcStack_d0,param_1 + 0x78);
  uStack_90 = CONCAT44(uStack_90._4_4_,1);
  uVar5 = 0;
  func_0x000107c287e0();
  uStack_88 = uVar5;
  func_0x000107c287d0();
  func_0x000107c2a2e0(&pcStack_d0);
  func_0x000107c29820(&pcStack_d0,param_1);
  plVar6 = *(long **)(pcStack_d0 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_160 = puVar4 + 3;
  puStack_158 = puVar4;
  (**(code **)(*plVar6 + 0xb0))(plVar6,&ppuStack_a0,&puStack_160);
  func_0x00010876d2e0(&puStack_160);
  func_0x000107c297b0(&pcStack_d0);
  FUN_108924fa8(&ppuStack_a0);
  func_0x00010876d2b8(&puStack_1b0);
  func_0x000107c297a4(&puStack_1a0);
  func_0x000107c297a4(&uStack_180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010876d2e0(&puStack_160);
    func_0x000107c297b0(&pcStack_d0);
    FUN_108924fa8(&ppuStack_a0);
    func_0x00010876d2b8(&puStack_1b0);
    func_0x000107c297a4(&puStack_1a0);
    do {
      func_0x000107c297a4(&uStack_180);
      func_0x00010876d318();
    } while( true );
  }
  return;
}



/* Entry: 10876cd94; end: 10876cdd7;  */

void FUN_10876cd94(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  lVar1 = param_1;
  func_0x00010084feec();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010084ff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x100))(*(long **)(param_1 + 0x30),param_1);
    return;
  }
  return;
}



/* Entry: 10876cdd8; end: 10876cddb;  */

undefined8 * FUN_10876cdd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c450;
  func_0x000107c27914(param_1 + 0xf);
  func_0x00010876515c(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10876cddc; end: 10876cdef;  */

void FUN_10876cddc(void)

{
  FUN_10876d278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876cdf0; end: 10876ce17;  */

undefined8 FUN_10876cdf0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10876ce18; end: 10876ce1b;  */

void FUN_10876ce18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6c4b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10876ce1c; end: 10876ce2f;  */

void FUN_10876ce1c(void)

{
  FUN_10876d164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10876ce30; end: 10876ce3f;  */

void FUN_10876ce30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010876ce38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


