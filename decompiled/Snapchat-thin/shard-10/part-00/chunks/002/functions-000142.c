/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10754a964; end: 10754af5f;  */

void FUN_10754a964(ulong param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  long **pplVar6;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar7;
  undefined2 extraout_w8_02;
  undefined2 extraout_w8_03;
  undefined1 *unaff_x19;
  undefined1 auStack_1c0 [32];
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined4 uStack_188;
  undefined2 uStack_184;
  double dStack_180;
  undefined1 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined2 uStack_16e;
  undefined1 uStack_16c;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  long **pplStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  undefined1 auStack_128 [8];
  char cStack_120;
  long alStack_118 [2];
  char cStack_108;
  long alStack_100 [2];
  char cStack_f0;
  long alStack_e8 [2];
  char cStack_d8;
  long alStack_d0 [2];
  char cStack_c0;
  long alStack_b8 [2];
  char cStack_a8;
  long alStack_a0 [2];
  char cStack_90;
  long alStack_88 [2];
  char cStack_78;
  long alStack_70 [2];
  char cStack_60;
  
  func_0x00010754b670();
  uStack_188 = 0x2001200;
  uStack_184 = 0x80;
  dStack_180 = 0.375;
  uStack_178 = 0;
  uStack_174 = 0x2000;
  uStack_170 = 0;
  uStack_16e = 0x32;
  uStack_16c = 0x11;
  lStack_160 = 0;
  lStack_158 = 0;
  plStack_168 = &lStack_160;
  func_0x00010754b60c(alStack_70);
  uVar3 = cStack_60 == '\x01';
  if ((bool)uVar3) {
    func_0x00010754b604(*(undefined8 *)(alStack_70[0] + 0x58));
    if ((param_1 >> 0x20 & 1) == 0) {
      func_0x00010754b614();
      func_0x00010754b628();
      goto LAB_10754ae0c;
    }
    func_0x00010754b604(*(undefined8 *)(alStack_70[0] + 0x58));
    func_0x00010754b688();
    uStack_188 = CONCAT31(uStack_188._1_3_,extraout_w8);
  }
  func_0x00010754b634();
  func_0x00010754b60c(alStack_88);
  uVar3 = cStack_78 == '\x01';
  if ((bool)uVar3) {
    func_0x00010754b604(*(undefined8 *)(alStack_88[0] + 0x58));
    if ((param_1 >> 0x20 & 1) != 0) {
      func_0x00010754b604(*(undefined8 *)(alStack_88[0] + 0x58));
      func_0x00010754b688();
      uStack_188._0_2_ = CONCAT11(extraout_w8_00,(undefined1)uStack_188);
      goto LAB_10754aa98;
    }
    func_0x00010754b614();
    func_0x00010754b628();
  }
  else {
LAB_10754aa98:
    func_0x00010754b634();
    func_0x00010754b60c(alStack_a0);
    uVar3 = cStack_90 == '\x01';
    if ((bool)uVar3) {
      func_0x00010754b604(*(undefined8 *)(alStack_a0[0] + 0x58));
      if ((param_1 >> 0x20 & 1) != 0) {
        func_0x00010754b604(*(undefined8 *)(alStack_a0[0] + 0x58));
        func_0x00010754b688();
        uStack_184 = extraout_w8_02;
        goto LAB_10754aaf4;
      }
      func_0x00010754b614();
      func_0x00010754b628();
    }
    else {
LAB_10754aaf4:
      func_0x00010754b634();
      func_0x00010754b60c(alStack_b8);
      uVar3 = cStack_a8 == '\x01';
      if ((bool)uVar3) {
        func_0x00010754b604(*(undefined8 *)(alStack_b8[0] + 0x58));
        if ((param_1 >> 0x20 & 1) != 0) {
          func_0x00010754b604(*(undefined8 *)(alStack_b8[0] + 0x58));
          dStack_180 = (double)(float)param_1;
          goto LAB_10754ab54;
        }
        func_0x00010754b614();
        func_0x00010754b628();
      }
      else {
LAB_10754ab54:
        func_0x00010754b634();
        func_0x00010754b60c(alStack_d0);
        uVar3 = cStack_c0 == '\x01';
        if ((bool)uVar3) {
          func_0x00010754b648(*(undefined8 *)(alStack_d0[0] + 0x50));
          if (((uint)param_1 >> 8 & 1) != 0) {
            func_0x00010754b648(*(undefined8 *)(alStack_d0[0] + 0x50));
            uStack_170 = (undefined1)param_1;
            goto LAB_10754abac;
          }
          func_0x00010754b614();
          func_0x00010754b628();
        }
        else {
LAB_10754abac:
          func_0x00010754b634();
          func_0x00010754b60c(alStack_e8);
          uVar3 = cStack_d8 == '\x01';
          if ((bool)uVar3) {
            func_0x00010754b604(*(undefined8 *)(alStack_e8[0] + 0x58));
            if ((param_1 >> 0x20 & 1) != 0) {
              func_0x00010754b604(*(undefined8 *)(alStack_e8[0] + 0x58));
              func_0x00010754b688();
              uStack_16c = extraout_w8_01;
              goto LAB_10754ac08;
            }
            func_0x00010754b614();
            func_0x00010754b628();
          }
          else {
LAB_10754ac08:
            func_0x00010754b634();
            func_0x00010754b60c(alStack_100);
            uVar3 = cStack_f0 == '\x01';
            if ((bool)uVar3) {
              func_0x00010754b604(*(undefined8 *)(alStack_100[0] + 0x58));
              if ((param_1 >> 0x20 & 1) != 0) {
                func_0x00010754b604(*(undefined8 *)(alStack_100[0] + 0x58));
                func_0x00010754b688();
                uStack_16e = extraout_w8_03;
                goto LAB_10754ac64;
              }
              func_0x00010754b614();
              func_0x00010754b628();
            }
            else {
LAB_10754ac64:
              uVar4 = (uint)param_1;
              func_0x00010754b634();
              func_0x00010754b60c(alStack_118);
              uVar3 = cStack_108 == '\x01';
              if ((bool)uVar3) {
                func_0x00010754b648(*(undefined8 *)(alStack_118[0] + 0x50));
                if ((uVar4 >> 8 & 1) != 0) {
                  func_0x00010754b648(*(undefined8 *)(alStack_118[0] + 0x50));
                  uStack_178 = (undefined1)uVar4;
                  goto LAB_10754acbc;
                }
                func_0x00010754b614();
                func_0x00010754b628();
              }
              else {
LAB_10754acbc:
                func_0x00010754b634();
                func_0x00010754b60c(&lStack_130);
                uVar3 = cStack_120 == '\x01';
                if ((bool)uVar3) {
                  uVar5 = 0;
                  (**(code **)(lStack_130 + 0x30))();
                  if ((uVar5 & 1) == 0) {
                    func_0x00010754b614();
                    uVar7 = 0;
                    *unaff_x19 = 0;
                    goto LAB_10754adc8;
                  }
                  pplStack_140 = &plStack_1a0;
                  lStack_198 = 0;
                  lStack_190 = 0;
                  ppuStack_150 = &PTR_FUN_1109ba8d0;
                  pppuStack_138 = &ppuStack_150;
                  plStack_1a0 = &lStack_198;
                  lStack_148 = param_3;
                  (**(code **)(lStack_130 + 0x40))(auStack_1c0,auStack_128,&ppuStack_150);
                  FUN_1073249ac(auStack_1c0);
                  FUN_1073249cc(&ppuStack_150);
                  bVar1 = *(byte *)(param_3 + 0x17);
                  uVar3 = bVar1 == 0;
                  uVar5 = *(ulong *)(param_3 + 8);
                  if (-1 < (char)bVar1) {
                    uVar5 = (ulong)bVar1;
                  }
                  if (uVar5 == 0) {
                    func_0x00010754af60(&plStack_168,lStack_160);
                    plStack_168 = plStack_1a0;
                    lStack_160 = lStack_198;
                    lStack_158 = lStack_190;
                    plVar2 = &lStack_160;
                    if (lStack_190 != 0) {
                      *(long **)(lStack_198 + 0x10) = &lStack_160;
                      lStack_198 = 0;
                      lStack_190 = 0;
                      plStack_1a0 = &lStack_198;
                      plVar2 = plStack_168;
                    }
                  }
                  else {
                    func_0x00010754b628();
                    plVar2 = plStack_168;
                  }
                  plStack_168 = plVar2;
                  FUN_10754b040(&plStack_1a0);
                  if (uVar5 == 0) goto LAB_10754adb8;
                }
                else {
LAB_10754adb8:
                  func_0x00010754afd0();
                  uVar7 = 1;
LAB_10754adc8:
                  unaff_x19[0x38] = uVar7;
                }
                func_0x0001072f5f4c(&lStack_130);
              }
              func_0x0001072f5f4c(alStack_118);
            }
            func_0x0001072f5f4c(alStack_100);
          }
          func_0x0001072f5f4c(alStack_e8);
        }
        func_0x0001072f5f4c(alStack_d0);
      }
      func_0x0001072f5f4c(alStack_b8);
    }
    func_0x0001072f5f4c(alStack_a0);
  }
  func_0x0001072f5f4c(alStack_88);
LAB_10754ae0c:
  func_0x0001072f5f4c(alStack_70);
  pplVar6 = &plStack_168;
  FUN_10754b040(pplVar6);
  func_0x00010754b658();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    FUN_1073249cc(&ppuStack_150);
    FUN_10754b040(&plStack_1a0);
    func_0x0001072f5f4c(&lStack_130);
    func_0x0001072f5f4c(alStack_118);
    func_0x0001072f5f4c(alStack_100);
    func_0x0001072f5f4c(alStack_e8);
    func_0x0001072f5f4c(alStack_d0);
    func_0x0001072f5f4c(alStack_b8);
    func_0x0001072f5f4c(alStack_a0);
    func_0x0001072f5f4c(alStack_88);
    func_0x0001072f5f4c(alStack_70);
    do {
      FUN_10754b040(&plStack_168);
      __Unwind_Resume(pplVar6);
    } while( true );
  }
  return;
}



/* Entry: 10754af60; end: 10754b003;  */

void FUN_10754af60(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10754af60(param_1,*param_2);
    FUN_10754af60(param_1,param_2[1]);
    func_0x00010754afa8(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10754b004; end: 10754b03f;  */

void FUN_10754b004(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 10754b040; end: 10754b063;  */

long FUN_10754b040(long param_1)

{
  FUN_10754af60(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10754b064; end: 10754b06b;  */

void FUN_10754b064(void)

{
  return;
}



/* Entry: 10754b06c; end: 10754b09f;  */

void FUN_10754b06c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ba8d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10754b0a0; end: 10754b0cf;  */

void FUN_10754b0a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109ba8d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754b0d0; end: 10754b57b;  */

void FUN_10754b0d0(long param_1,undefined8 *param_2,long *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 ******ppppppuVar6;
  long *plVar7;
  code *extraout_x9;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined8 *****apppppuStack_1f8 [2];
  char cStack_1e1;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 auStack_198 [32];
  undefined8 *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  byte bStack_60;
  
  plVar7 = param_3;
  func_0x00010754b670();
  uStack_1c0 = *param_2;
  uStack_1b8 = param_2[1];
  plVar8 = plVar7 + 1;
  plVar2 = plVar8;
  (**(code **)(*plVar7 + 0x18))();
  if ((int)plVar2 != 0) {
    plVar2 = plVar8;
    (**(code **)(*param_3 + 0x20))();
    in_ZR = plVar2 == (long *)0x2;
    if ((bool)in_ZR) {
      func_0x00010754b69c();
      (*extraout_x9)(&lStack_1b0,plVar8,1);
      iVar1 = (int)&lStack_1b0;
      func_0x00010774f10c(&lStack_1d0);
      func_0x00010754b650();
      if (lStack_1d0 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (*(undefined8 *)(param_1 + 8),&UNK_10f416c59);
        func_0x00010754b6a8();
      }
      else {
        lStack_1e0 = 0;
        uStack_1d8 = 0;
        func_0x00010754b69c();
        func_0x00010754b61c(&lStack_1b0);
        func_0x00010754b648(*(undefined8 *)(lStack_1b0 + 0x18));
        func_0x00010754b650();
        if (iVar1 == 0) {
          func_0x00010754b69c();
          func_0x00010754b61c(&lStack_1b0);
          (**(code **)(lStack_1b0 + 0x68))(&puStack_98,&uStack_1a8);
          func_0x00010754b650();
          if ((bStack_60 & 1) == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                      (*(undefined8 *)(param_1 + 8),&UNK_10f416c9b);
            func_0x00010754b6a8();
          }
          else {
            func_0x000105680760(&lStack_1b0);
            func_0x00010002b838(apppppuStack_1f8,&UNK_10f416ce1);
            plVar2 = &lStack_1a0;
            ppppppuVar6 = apppppuStack_1f8;
            func_0x0001006282fc(plVar2,ppppppuVar6);
            ppuVar3 = &puStack_98;
            func_0x000107264c5c(ppuVar3);
            func_0x0001003abe30(plVar2,ppuVar3,ppppppuVar6);
            func_0x00010002b838(auStack_210,&UNK_10f416ce4);
            func_0x0001006282fc(plVar2,auStack_210);
            func_0x0001003abe30();
            func_0x00010002b838(auStack_228,&UNK_10f416d02);
            func_0x0001006282fc(plVar2,auStack_228);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
            func_0x00010754b694();
            func_0x000105491b64(apppppuStack_1f8,auStack_198);
            in_ZR = cStack_1e1 == '\0';
            if (-1 < cStack_1e1) {
              apppppuStack_1f8[0] = apppppuStack_1f8;
            }
            func_0x00010774ef14(auStack_210,apppppuStack_1f8[0]);
            FUN_1073235e8(&lStack_1e0,auStack_210);
            func_0x0001072c9b9c(auStack_210);
            func_0x00010754b694();
            func_0x000105673d7c(&lStack_1b0);
          }
          func_0x00010724b3d8(&puStack_98);
          if ((bStack_60 & 1) != 0) goto LAB_10754b33c;
        }
        else {
          func_0x00010754b69c();
          func_0x00010754b61c(&puStack_98);
          func_0x00010774f10c(&lStack_1b0,&puStack_98);
          FUN_1073235e8(&lStack_1e0,&lStack_1b0);
          func_0x0001072c9b9c(&lStack_1b0);
          func_0x0001072f5f6c(&puStack_98);
LAB_10754b33c:
          if (lStack_1e0 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                      (*(undefined8 *)(param_1 + 8),&UNK_10f416d06);
          }
          else {
            plVar8 = *(long **)(param_1 + 0x10);
            uStack_1a8 = uStack_1c8;
            lStack_1b0 = lStack_1d0;
            lStack_1d0 = 0;
            uStack_1c8 = 0;
            lStack_1a0 = lStack_1e0;
            auStack_198[0] = uStack_1d8;
            lStack_1e0 = 0;
            uStack_1d8 = 0;
            puVar4 = (undefined8 *)0x58;
            __Znwm();
            plVar2 = plVar8 + 1;
            uStack_88 = 0;
            puStack_98 = puVar4;
            plStack_90 = plVar2;
            func_0x000100060b18(puVar4 + 4,&uStack_1c0);
            puVar4[8] = uStack_1a8;
            puVar4[7] = lStack_1b0;
            lStack_1b0 = 0;
            uStack_1a8 = 0;
            puVar4[10] = auStack_198[0];
            puVar4[9] = lStack_1a0;
            lStack_1a0 = 0;
            auStack_198[0] = 0;
            uStack_88 = CONCAT71(uStack_88._1_7_,1);
            plVar7 = (long *)*plVar2;
            while (plVar9 = plVar2, plVar7 != (long *)0x0) {
              while( true ) {
                plVar9 = plVar7;
                puVar5 = puVar4 + 4;
                func_0x000100125af4(puVar5,plVar9 + 4);
                if (((uint)puVar5 >> 7 & 1) != 0) break;
                plVar7 = plVar9 + 4;
                func_0x000100125af4(plVar7,puVar4 + 4);
                if (((uint)plVar7 >> 7 & 1) == 0) {
                  if (*plVar2 == 0) goto LAB_10754b408;
                  goto LAB_10754b440;
                }
                plVar2 = plVar9 + 1;
                plVar7 = (long *)*plVar2;
                if ((long *)*plVar2 == (long *)0x0) goto LAB_10754b408;
              }
              plVar2 = plVar9;
              plVar7 = (long *)*plVar9;
            }
LAB_10754b408:
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = plVar9;
            *plVar2 = (long)puVar4;
            if (*(long *)*plVar8 != 0) {
              *plVar8 = *(long *)*plVar8;
            }
            func_0x00010002c5b0(plVar8[1],puVar4);
            plVar8[2] = plVar8[2] + 1;
            puStack_98 = (undefined8 *)0x0;
LAB_10754b440:
            FUN_10754b5c0(&puStack_98);
            func_0x000107543dc4(&lStack_1b0);
          }
          func_0x00010754b6a8();
        }
        func_0x0001072c9b9c(&lStack_1e0);
      }
      plVar2 = &lStack_1d0;
      func_0x0001072c9b9c(plVar2);
      goto LAB_10754b464;
    }
  }
  plVar2 = *(long **)(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(plVar2,&UNK_10f416c0f)
  ;
  func_0x00010754b6a8();
LAB_10754b464:
  func_0x00010754b658();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010754b694();
  func_0x000105673d7c(&lStack_1b0);
  func_0x00010724b3d8(&puStack_98);
  func_0x0001072c9b9c(&lStack_1e0);
  func_0x0001072c9b9c(&lStack_1d0);
  do {
    __Unwind_Resume(plVar2);
    func_0x00010754b650();
  } while( true );
}



/* Entry: 10754b57c; end: 10754b5b3;  */

long FUN_10754b57c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ba930);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10754b5b4; end: 10754b5bf;  */

undefined ** FUN_10754b5b4(void)

{
  return &PTR_DAT_1109ba930;
}



/* Entry: 10754b5c0; end: 10754b603;  */

long * FUN_10754b5c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010754afa8(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10754b604; end: 10754b6b3;  */

void FUN_10754b604(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x25;
  
                    /* WARNING: Could not recover jumptable at 0x00010754b608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x25 + 8);
  return;
}



/* Entry: 10754b6b4; end: 10754b8cf;  */

undefined ***
FUN_10754b6b4(undefined1 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined1 *param_5,undefined1 *param_6,undefined *param_7,undefined ***param_8,
             undefined1 param_9)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined ***pppuVar8;
  undefined1 auStack_201 [9];
  code *pcStack_1f8;
  undefined ****ppppuStack_1f0;
  undefined1 auStack_1e8 [56];
  undefined **appuStack_1b0 [5];
  byte bStack_188;
  char cStack_178;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined ***pppuStack_168;
  undefined *puStack_160;
  undefined **appuStack_158 [2];
  char cStack_148;
  undefined1 auStack_140 [16];
  char cStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined **appuStack_98 [3];
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x00010754c30c();
  pppuVar8 = (undefined ***)(param_3 + 1);
  uStack_58 = extraout_x8;
  (**(code **)(*param_3 + 0x30))();
  if (((ulong)pppuVar8 & 1) == 0) {
    pppuVar2 = (undefined ***)&UNK_10f416d4b;
    func_0x00010754c37c();
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    ppuStack_c8 = &PTR_DAT_1109ed050;
    uStack_c0 = 0;
    uStack_a4 = 0;
    uStack_ac = 0;
    pppuStack_70 = &ppuStack_c8;
    ppuStack_78 = &PTR_FUN_1109ba950;
    pppuStack_60 = &ppuStack_78;
    pppuStack_80 = appuStack_98;
    appuStack_98[0] = &PTR_FUN_1109ba9e0;
    uStack_d0 = 0;
    param_7 = &UNK_10f416d66;
    param_8 = (undefined ***)&UNK_10f416d87;
    func_0x00010754c294();
    pppuVar2 = pppuVar8;
    func_0x00010754c384();
    func_0x00010754c374();
    if (((ulong)pppuVar8 & 1) == 0) {
      pppuVar2 = (undefined ***)&UNK_10f416db3;
      func_0x00010754c37c();
LAB_10754b868:
      uVar1 = 0;
      *param_1 = 0;
    }
    else {
      pppuStack_70 = &ppuStack_c8;
      ppuStack_78 = &PTR_FUN_1109baa70;
      appuStack_98[0] = &PTR_DAT_1109baaf0;
      uStack_d0 = 0;
      param_7 = &UNK_10f416deb;
      param_8 = (undefined ***)&UNK_10f416e0b;
      pppuStack_80 = appuStack_98;
      pppuStack_60 = &ppuStack_78;
      func_0x00010754c294();
      pppuVar8 = pppuVar2;
      func_0x00010754c384();
      func_0x00010754c374();
      if (((ulong)pppuVar2 & 1) == 0) {
        pppuVar2 = (undefined ***)&UNK_10f416e36;
        func_0x00010754c37c();
        goto LAB_10754b868;
      }
      pppuStack_70 = &ppuStack_c8;
      ppuStack_78 = &PTR_DAT_1109bab70;
      appuStack_98[0] = &PTR_DAT_1109babf0;
      uStack_d0 = 0;
      param_7 = &UNK_10f416e6d;
      param_8 = (undefined ***)&UNK_10f416e87;
      pppuStack_80 = appuStack_98;
      pppuStack_60 = &ppuStack_78;
      func_0x00010754c294();
      func_0x00010754c384();
      func_0x00010754c374();
      if (((ulong)pppuVar8 & 1) == 0) {
        pppuVar2 = (undefined ***)&UNK_10f416eac;
        func_0x00010754c37c();
        goto LAB_10754b868;
      }
      pppuVar2 = &ppuStack_c8;
      FUN_10752e96c(param_1,pppuVar2);
      uVar1 = 1;
    }
    param_1[0x30] = uVar1;
    pppuVar8 = &ppuStack_c8;
    func_0x00010793f34c();
  }
  func_0x00010754c2b0(uStack_58);
  if ((bool)in_ZR) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010754c384();
  func_0x00010754c374();
  pppuVar8 = &ppuStack_c8;
  func_0x00010793f34c();
  func_0x00010754c2fc();
  pcStack_d8 = FUN_10754b8d0;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_16a = uStack_d0;
  uVar3 = param_4;
  puVar6 = param_5;
  puVar7 = param_6;
  uStack_169 = param_9;
  pppuStack_168 = param_8;
  puStack_160 = param_7;
  puStack_e0 = &stack0xfffffffffffffff0;
  (*(code *)(*pppuVar8)[7])(auStack_140,pppuVar8 + 1,param_7);
  if (cStack_130 == '\x01') {
    appuStack_158[0] = &puStack_160;
    uVar3 = param_4;
    FUN_10754bae0(param_4,appuStack_158);
    puVar6 = &uStack_169;
    puVar7 = &uStack_16a;
    pppuVar5 = pppuVar2;
    FUN_10754baa8(appuStack_1b0,auStack_140,pppuVar2,uVar3);
    uVar1 = cStack_178 == '\x01';
    if (!(bool)uVar1) {
      func_0x00010754c398();
      pppuVar8 = (undefined ***)0x0;
      goto LAB_10754ba2c;
    }
    func_0x00010727d614(auStack_1e8,appuStack_1b0);
    func_0x00010754bddc(param_5,auStack_1e8);
    func_0x00010754c2f4();
    func_0x00010754c398();
  }
  (*(code *)(*pppuVar8)[7])(appuStack_158,pppuVar8 + 1,param_8);
  uVar1 = cStack_148 == '\x01';
  if ((bool)uVar1) {
    ppppuStack_1f0 = &pppuStack_168;
    FUN_10754bb70(param_4,&ppppuStack_1f0);
    FUN_10754bb48(appuStack_1b0,appuStack_158,pppuVar2,param_4);
    pppuVar8 = (undefined ***)(ulong)bStack_188;
    uVar1 = bStack_188 == 1;
    param_8 = pppuVar2;
    uVar3 = param_4;
    if ((bool)uVar1) {
      param_8 = appuStack_1b0;
      FUN_10754bdf8(param_6,param_8);
      uVar3 = param_4;
    }
  }
  else {
    pppuVar8 = (undefined ***)0x1;
  }
  func_0x0001072f5f4c(appuStack_158);
  pppuVar5 = param_8;
LAB_10754ba2c:
  func_0x0001072f5f4c(auStack_140);
  func_0x00010754c2b0(uStack_128);
  if ((bool)uVar1) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  func_0x0001072f5f4c(appuStack_158);
  puVar4 = auStack_140;
  func_0x0001072f5f4c(puVar4);
  func_0x00010754c2fc();
  pcStack_1f8 = FUN_10754baa8;
  pppuVar8 = (undefined ***)auStack_201;
  auStack_201._1_8_ = &puStack_e0;
  FUN_1075552f4(pppuVar8,puVar4,pppuVar5,uVar3,*puVar6,*puVar7);
  return pppuVar8;
}



/* Entry: 10754b8d0; end: 10754baa7;  */

undefined1 *
FUN_10754b8d0(long *param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4,
             undefined1 *param_5,undefined8 param_6,undefined1 *param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uStack_131;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 **ppuStack_120;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [40];
  byte bStack_b8;
  char cStack_a8;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 *apuStack_88 [2];
  char cStack_78;
  undefined1 auStack_70 [16];
  char cStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_9a = param_9;
  uVar2 = param_3;
  puVar5 = param_4;
  puVar6 = param_5;
  uStack_99 = param_8;
  puStack_98 = param_7;
  uStack_90 = param_6;
  (**(code **)(*param_1 + 0x38))(auStack_70,param_1 + 1,param_6);
  if (cStack_60 == '\x01') {
    apuStack_88[0] = &uStack_90;
    uVar2 = param_3;
    FUN_10754bae0(param_3,apuStack_88);
    puVar5 = &uStack_99;
    puVar6 = &uStack_9a;
    puVar4 = param_2;
    FUN_10754baa8(auStack_e0,auStack_70,param_2,uVar2);
    uVar1 = cStack_a8 == '\x01';
    if (!(bool)uVar1) {
      func_0x00010754c398();
      puVar7 = (undefined1 *)0x0;
      goto LAB_10754ba2c;
    }
    func_0x00010727d614(auStack_118,auStack_e0);
    func_0x00010754bddc(param_4,auStack_118);
    func_0x00010754c2f4();
    func_0x00010754c398();
  }
  (**(code **)(*param_1 + 0x38))(apuStack_88,param_1 + 1,param_7);
  uVar1 = cStack_78 == '\x01';
  if ((bool)uVar1) {
    ppuStack_120 = &puStack_98;
    FUN_10754bb70(param_3,&ppuStack_120);
    FUN_10754bb48(auStack_e0,apuStack_88,param_2,param_3);
    puVar7 = (undefined1 *)(ulong)bStack_b8;
    uVar1 = bStack_b8 == 1;
    param_7 = param_2;
    uVar2 = param_3;
    if ((bool)uVar1) {
      param_7 = auStack_e0;
      FUN_10754bdf8(param_5,param_7);
      uVar2 = param_3;
    }
  }
  else {
    puVar7 = (undefined1 *)0x1;
  }
  func_0x0001072f5f4c(apuStack_88);
  puVar4 = param_7;
LAB_10754ba2c:
  func_0x0001072f5f4c(auStack_70);
  func_0x00010754c2b0(uStack_58);
  if ((bool)uVar1) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x0001072f5f4c(apuStack_88);
  puVar7 = auStack_70;
  func_0x0001072f5f4c(puVar7);
  func_0x00010754c2fc();
  pcStack_128 = FUN_10754baa8;
  puVar3 = &uStack_131;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_1075552f4(puVar3,puVar7,puVar4,uVar2,*puVar5,*puVar6);
  return puVar3;
}



/* Entry: 10754baa8; end: 10754badf;  */

void FUN_10754baa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  FUN_1075552f4(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 10754bae0; end: 10754bb47;  */

undefined1 * FUN_10754bae0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar2 = auStack_60;
  puVar1 = param_1;
  func_0x00010754c30c();
  func_0x00010754c3d8();
  if ((extraout_x8 & 1) == 0) {
    FUN_10754bbd8(auStack_60,param_2);
    func_0x000107264c5c(auStack_60);
    func_0x00010754c360();
    puVar1 = puVar2;
  }
  func_0x00010754c2b0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010754c360();
  func_0x00010754c2fc();
  pcStack_68 = FUN_10754bb48;
  puVar2 = &uStack_71;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_107564f58(puVar2,puVar1,param_2,param_3);
  return puVar2;
}



/* Entry: 10754bb48; end: 10754bb6f;  */

void FUN_10754bb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_107564f58(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10754bb70; end: 10754bbd7;  */

undefined8 * FUN_10754bb70(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_60 [7];
  undefined8 uStack_28;
  
  puVar2 = auStack_60;
  puVar1 = param_1;
  func_0x00010754c30c();
  func_0x00010754c3d8();
  if ((extraout_x8 & 1) == 0) {
    FUN_10754bdf4(auStack_60,param_2);
    func_0x000107264c5c();
    func_0x00010754c360();
    puVar1 = puVar2;
  }
  func_0x00010754c2b0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010754c360();
  func_0x00010754c2fc();
  uVar3 = *puVar1;
  puVar1 = (undefined8 *)&UNK_10f40a3f5;
  puStack_a0 = &UNK_10f40a3f5;
  uStack_98 = 3;
  puVar2 = puVar1;
  FUN_1073396ec();
  ppuStack_c0 = &puStack_a0;
  uStack_b8 = uVar3;
  ppuStack_b0 = ppuStack_c0;
  uStack_a8 = uVar3;
  FUN_10754bc38(extraout_x8_00,&UNK_10f40a3f5,3,puVar2,&ppuStack_b0,&ppuStack_c0);
  return puVar1;
}



/* Entry: 10754bbd8; end: 10754bbdb;  */

void FUN_10754bbd8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_2;
  puVar1 = &UNK_10f40a3f5;
  puStack_40 = &UNK_10f40a3f5;
  uStack_38 = 3;
  FUN_1073396ec();
  ppuStack_60 = &puStack_40;
  uStack_58 = uVar2;
  ppuStack_50 = ppuStack_60;
  uStack_48 = uVar2;
  FUN_10754bc38(param_1,&UNK_10f40a3f5,3,puVar1,&ppuStack_50,&ppuStack_60);
  return;
}



/* Entry: 10754bbdc; end: 10754bc37;  */

void FUN_10754bbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1073396ec();
  puStack_60 = &uStack_40;
  uStack_58 = param_4;
  puStack_50 = puStack_60;
  uStack_48 = param_4;
  FUN_10754bc38(param_1,param_2,param_3,uVar1,&puStack_50,&puStack_60);
  return;
}



/* Entry: 10754bc38; end: 10754bd77;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10754bc38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined2 *)&uStack_60;
  puVar5 = &uStack_60;
  uVar7 = param_4;
  func_0x00010754c30c();
  uVar4 = uVar7 == 0x25;
  uStack_38 = extraout_x8;
  if (uVar7 < 0x26) {
    uStack_60._2_1_ = 0;
    puVar6 = (undefined2 *)((long)&uStack_60 + 2);
    *(undefined1 *)((long)puVar6 + param_4) = 0;
    uVar7 = 0x26;
    uStack_60._0_2_ = (short)param_4;
    FUN_10754bd78();
    param_1[1] = lStack_58;
    *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[4] = uStack_40;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0xffffffffffffffff;
  }
  else {
    uVar4 = param_4 == 0x51;
    if (param_4 < 0x52) {
      func_0x000104c302d8(&uStack_60,0,0);
      puVar6 = (undefined2 *)
               CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      *puVar6 = (short)param_4;
      *(undefined1 *)((long)puVar6 + param_4 + 2) = 0;
      puVar6 = (undefined2 *)
               (CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60)) + 2);
      uVar7 = 0x52;
      FUN_10754bd78(param_5);
      param_1[1] = lStack_58;
      *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      if (lStack_58 != 0) {
        plVar1 = (long *)(lStack_58 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(param_1 + 5) = 2;
      param_1[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
    }
    else {
      FUN_10754bdac(&uStack_60,param_6);
      func_0x0001072625b4(param_1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x00010754c2b0(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f784();
  func_0x00010754c2fc();
  func_0x000107339844(puVar6,uVar7,*puVar5,puVar5[1]);
  *(undefined1 *)((long)puVar6 + uVar7) = 0;
  return;
}



/* Entry: 10754bd78; end: 10754bdab;  */

void FUN_10754bd78(undefined8 *param_1,long param_2,long param_3)

{
  func_0x000107339844(param_2,param_3,*param_1,param_1[1]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 10754bdac; end: 10754bdf3;  */

void FUN_10754bdac(long *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *(undefined8 *)param_1[1];
  uStack_18 = 0;
  func_0x0001003a9204(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],0xc,&uStack_20);
  return;
}



/* Entry: 10754bdf4; end: 10754bdf7;  */

void FUN_10754bdf4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_2;
  puVar1 = &UNK_10f40a3f5;
  puStack_40 = &UNK_10f40a3f5;
  uStack_38 = 3;
  FUN_1073396ec();
  ppuStack_60 = &puStack_40;
  uStack_58 = uVar2;
  ppuStack_50 = ppuStack_60;
  uStack_48 = uVar2;
  FUN_10754bc38(param_1,&UNK_10f40a3f5,3,puVar1,&ppuStack_50,&ppuStack_60);
  return;
}



/* Entry: 10754bdf8; end: 10754be0f;  */

void FUN_10754bdf8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010754c3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10754be10; end: 10754be17;  */

void FUN_10754be10(void)

{
  return;
}



/* Entry: 10754be18; end: 10754be43;  */

void FUN_10754be18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010754c304();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_1109ba950;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10754be44; end: 10754be63;  */

void FUN_10754be44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109ba950;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754be64; end: 10754beaf;  */

void FUN_10754be64(undefined4 *param_1)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  
  func_0x00010754c330();
  lVar1 = *(long *)(unaff_x19 + 8);
  func_0x00010754c3a0();
  uVar2 = *param_1;
  if (*(int *)(lVar1 + 0x20) != 1) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
  }
  *(undefined4 *)(lVar1 + 0x10) = uVar2;
  func_0x00010754c2f4();
  return;
}



/* Entry: 10754beb0; end: 10754bed7;  */

void FUN_10754beb0(undefined8 param_1)

{
  func_0x00010754c368();
  func_0x00010754c328(param_1,&PTR_DAT_1109ba9c0);
  func_0x00010754c2d0();
  return;
}



/* Entry: 10754bed8; end: 10754bee3;  */

undefined ** FUN_10754bed8(void)

{
  return &PTR_DAT_1109ba9c0;
}



/* Entry: 10754bee4; end: 10754beff;  */

long FUN_10754bee4(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010754c38c(uVar1);
  return param_1;
}



/* Entry: 10754bf00; end: 10754bf3b;  */

long FUN_10754bf00(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010754c38c(uVar1);
  return param_1;
}



/* Entry: 10754bf3c; end: 10754bf43;  */

void FUN_10754bf3c(void)

{
  return;
}



/* Entry: 10754bf44; end: 10754bf63;  */

void FUN_10754bf44(undefined8 *param_1)

{
  func_0x00010754c304();
  *param_1 = &PTR_FUN_1109ba9e0;
  return;
}



/* Entry: 10754bf64; end: 10754bf83;  */

void FUN_10754bf64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109ba9e0;
  return;
}



/* Entry: 10754bf84; end: 10754bfab;  */

void FUN_10754bf84(undefined8 param_1)

{
  func_0x00010754c368();
  func_0x00010754c328(param_1,&PTR_DAT_1109baa50);
  func_0x00010754c2d0();
  return;
}



/* Entry: 10754bfac; end: 10754bfb7;  */

undefined ** FUN_10754bfac(void)

{
  return &PTR_DAT_1109baa50;
}



/* Entry: 10754bfb8; end: 10754bff3;  */

long FUN_10754bfb8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010754c38c(uVar1);
  return param_1;
}



/* Entry: 10754bff4; end: 10754bffb;  */

void FUN_10754bff4(void)

{
  return;
}



/* Entry: 10754bffc; end: 10754c027;  */

void FUN_10754bffc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010754c304();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_1109baa70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10754c028; end: 10754c047;  */

void FUN_10754c028(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109baa70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754c048; end: 10754c093;  */

void FUN_10754c048(undefined4 *param_1)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  
  func_0x00010754c330();
  lVar1 = *(long *)(unaff_x19 + 8);
  func_0x00010754c3a0();
  uVar2 = *param_1;
  if (*(int *)(lVar1 + 0x24) != 2) {
    *(undefined4 *)(lVar1 + 0x24) = 2;
  }
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  func_0x00010754c2f4();
  return;
}



/* Entry: 10754c094; end: 10754c0bb;  */

void FUN_10754c094(undefined8 param_1)

{
  func_0x00010754c368();
  func_0x00010754c328(param_1,&PTR_DAT_1109baad0);
  func_0x00010754c2d0();
  return;
}



/* Entry: 10754c0bc; end: 10754c0cf;  */

undefined ** FUN_10754c0bc(void)

{
  return &PTR_DAT_1109baad0;
}



/* Entry: 10754c0d0; end: 10754c0ef;  */

void FUN_10754c0d0(undefined8 *param_1)

{
  func_0x00010754c304();
  *param_1 = &PTR_DAT_1109baaf0;
  return;
}



/* Entry: 10754c0f0; end: 10754c10f;  */

void FUN_10754c0f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109baaf0;
  return;
}



/* Entry: 10754c110; end: 10754c137;  */

void FUN_10754c110(undefined8 param_1)

{
  func_0x00010754c368();
  func_0x00010754c328(param_1,&PTR_DAT_1109bab50);
  func_0x00010754c2d0();
  return;
}



/* Entry: 10754c138; end: 10754c14b;  */

undefined ** FUN_10754c138(void)

{
  return &PTR_DAT_1109bab50;
}



/* Entry: 10754c14c; end: 10754c177;  */

void FUN_10754c14c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010754c304();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109bab70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10754c178; end: 10754c197;  */

void FUN_10754c178(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bab70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754c198; end: 10754c1e3;  */

void FUN_10754c198(undefined4 *param_1)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  
  func_0x00010754c330();
  lVar1 = *(long *)(unaff_x19 + 8);
  func_0x00010754c3a0();
  uVar2 = *param_1;
  if (*(int *)(lVar1 + 0x28) != 3) {
    *(undefined4 *)(lVar1 + 0x28) = 3;
  }
  *(undefined4 *)(lVar1 + 0x18) = uVar2;
  func_0x00010754c2f4();
  return;
}



/* Entry: 10754c1e4; end: 10754c20b;  */

void FUN_10754c1e4(undefined8 param_1)

{
  func_0x00010754c368();
  func_0x00010754c328(param_1,&PTR_DAT_1109babd0);
  func_0x00010754c2d0();
  return;
}



/* Entry: 10754c20c; end: 10754c21f;  */

undefined ** FUN_10754c20c(void)

{
  return &PTR_DAT_1109babd0;
}



/* Entry: 10754c220; end: 10754c23f;  */

void FUN_10754c220(undefined8 *param_1)

{
  func_0x00010754c304();
  *param_1 = &PTR_DAT_1109babf0;
  return;
}



/* Entry: 10754c240; end: 10754c25f;  */

void FUN_10754c240(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109babf0;
  return;
}



/* Entry: 10754c260; end: 10754c287;  */

void FUN_10754c260(undefined8 param_1)

{
  func_0x00010754c368();
  func_0x00010754c328(param_1,&PTR_DAT_1109bac50);
  func_0x00010754c2d0();
  return;
}



/* Entry: 10754c288; end: 10754c3eb;  */

undefined ** FUN_10754c288(void)

{
  return &PTR_DAT_1109bac50;
}



/* Entry: 10754c3ec; end: 10754c517;  */

/* WARNING: Possible PIC construction at 0x00010754c42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010754c450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010754c474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010754c4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010754c4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010754c4d4) */
/* WARNING: Removing unreachable block (ram,0x00010754c478) */
/* WARNING: Removing unreachable block (ram,0x00010754c47c) */
/* WARNING: Removing unreachable block (ram,0x00010754c454) */
/* WARNING: Removing unreachable block (ram,0x00010754c458) */
/* WARNING: Removing unreachable block (ram,0x00010754c430) */
/* WARNING: Removing unreachable block (ram,0x00010754c434) */
/* WARNING: Removing unreachable block (ram,0x00010754c484) */
/* WARNING: Removing unreachable block (ram,0x00010754c4e0) */
/* WARNING: Removing unreachable block (ram,0x00010754c4f8) */
/* WARNING: Removing unreachable block (ram,0x00010754c510) */
/* WARNING: Removing unreachable block (ram,0x00010754c4e4) */

long * FUN_10754c3ec(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  int aiStack_80 [18];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2 + 1;
  plVar2 = param_2;
  func_0x00010754c530(*(undefined8 *)(*param_2 + 0x10));
  if ((((int)plVar2 == 0) &&
      (func_0x00010754c530(*(undefined8 *)(*param_2 + 0x18)), (int)plVar2 == 0)) &&
     (func_0x00010754c530(*(undefined8 *)(*param_2 + 0x30)), (int)plVar2 == 0)) {
    (**(code **)(*param_2 + 0x70))(aiStack_80,plVar3);
    puVar1 = &UNK_10f416ef6;
    if (aiStack_80[0] != 6) {
      puVar1 = &UNK_10f416eef;
    }
    func_0x00010002b82c(param_1,puVar1);
    func_0x000107c613d0(puVar1);
    func_0x000107c60c50(plVar3,param_1,puVar1);
    return plVar3;
  }
  return plVar2;
}



/* Entry: 10754c518; end: 10754c537;  */

void FUN_10754c518(void)

{
  return;
}



/* Entry: 10754c538; end: 10754c677;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10754c538(undefined8 param_1,long *param_2,undefined8 *******param_3,ulong *param_4,
             undefined8 *******param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *****pppppuVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *******pppppppuVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *******pppppppuVar12;
  ulong *puVar13;
  undefined1 uVar14;
  undefined8 *extraout_x8;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  uint unaff_w22;
  undefined8 *******pppppppuVar17;
  undefined8 *******unaff_x28;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******appppppuStack_450 [3];
  byte bStack_438;
  undefined8 ******appppppuStack_430 [2];
  char cStack_420;
  undefined8 uStack_418;
  undefined8 *******pppppppuStack_410;
  ulong *puStack_408;
  undefined8 *******pppppppuStack_400;
  undefined8 *******pppppppuStack_3f8;
  undefined1 ****ppppuStack_3f0;
  code *pcStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  char cStack_3c8;
  undefined8 ******ppppppuStack_3b8;
  undefined8 *****apppppuStack_3b0 [3];
  int iStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  byte bStack_378;
  undefined8 ******ppppppuStack_370;
  undefined8 *****apppppuStack_368 [7];
  byte bStack_330;
  undefined1 auStack_328 [16];
  byte bStack_318;
  undefined1 auStack_310 [56];
  byte bStack_2d8;
  undefined8 ******appppppuStack_2d0 [2];
  byte bStack_2c0;
  undefined8 ******appppppuStack_2b8 [7];
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char cStack_248;
  undefined1 auStack_240 [16];
  char cStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined8 *****pppppuStack_210;
  char cStack_208;
  undefined8 uStack_200;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 ******appppppuStack_180 [4];
  long lStack_160;
  undefined8 ******ppppppuStack_158;
  byte bStack_150;
  undefined8 uStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 ******appppppuStack_f0 [4];
  long lStack_d0;
  undefined8 ******ppppppuStack_c8;
  byte bStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *******apppppppuStack_68 [2];
  char cStack_51;
  long lStack_50;
  undefined1 auStack_48 [8];
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2 + 1;
  pppppppuVar16 = param_3;
  (**(code **)(*param_2 + 0x30))();
  if (((ulong)plVar4 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (param_3,&UNK_10f416efe);
    pppppppuVar15 = (undefined8 *******)0x0;
  }
  else {
    func_0x00010002b838(apppppppuStack_68,&UNK_10f416f20);
    if (-1 < cStack_51) {
      apppppppuStack_68[0] = apppppppuStack_68;
    }
    (**(code **)(*param_2 + 0x38))(&lStack_50,param_2 + 1,apppppppuStack_68[0]);
    if (cStack_40 == '\x01') {
      puVar5 = auStack_48;
      (**(code **)(lStack_50 + 0x58))();
      if (((ulong)puVar5 >> 0x20 & 1) == 0) goto LAB_10754c5d8;
      pppppppuVar15 = (undefined8 *******)(long)SUB84(puVar5,0);
    }
    else {
LAB_10754c5d8:
      pppppppuVar15 = (undefined8 *******)0x0;
    }
    func_0x0001072f5f4c(&lStack_50);
    param_3 = apppppppuStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  uVar3 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38;
  if ((bool)uVar3) {
    return pppppppuVar15;
  }
  ___stack_chk_fail();
  func_0x0001072f5f4c(&lStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppppppuStack_68);
  pppppppuVar15 = param_3;
  __Unwind_Resume();
  pcStack_78 = FUN_10754c678;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010754d348();
  func_0x00010754d4d0();
  if ((bStack_c0 & 1) == 0) {
    *(char *)param_3 = '\0';
    *(char *)(param_3 + 3) = '\0';
  }
  else {
    pppppppuVar15 = &ppppppuStack_c8;
    (**(code **)(lStack_d0 + 0x30))();
    if (((ulong)pppppppuVar15 & 1) == 0) {
      pppppppuVar15 = appppppuStack_f0;
      func_0x00010002b838(pppppppuVar15,&UNK_10f416f2a);
      func_0x00010754d318();
    }
    else {
      if ((unaff_w22 >> 0x10 & 1) == 0) {
        func_0x00010754d4b8(&PTR_FUN_1109bacf0);
        func_0x00010754d2e8();
      }
      else {
        func_0x00010754d4b0();
        func_0x00010754d494(&PTR_FUN_1109bac70);
        func_0x00010754d2e8();
      }
      func_0x00010754d468();
    }
  }
  func_0x00010754d48c();
  func_0x00010754d2f8(uStack_b8);
  if ((bool)uVar3) {
    return pppppppuVar15;
  }
  ___stack_chk_fail();
  pppppppuVar17 = pppppppuVar15;
  func_0x00010754d468();
  func_0x00010754d48c();
  func_0x00010754d438();
  pcStack_108 = FUN_10754c75c;
  ppuStack_110 = &puStack_80;
  func_0x00010754d348();
  pppppppuVar9 = (undefined8 *******)&DAT_10f37c580;
  func_0x00010754d4d0();
  if ((bStack_150 & 1) == 0) {
    *(char *)pppppppuVar15 = '\0';
    *(char *)(pppppppuVar15 + 3) = '\0';
  }
  else {
    pppppppuVar17 = &ppppppuStack_158;
    (**(code **)(lStack_160 + 0x30))();
    if (((ulong)pppppppuVar17 & 1) == 0) {
      pppppppuVar9 = (undefined8 *******)&UNK_10f416f43;
      pppppppuVar17 = appppppuStack_180;
      func_0x00010002b838();
      func_0x00010754d318();
    }
    else {
      if ((unaff_w22 >> 0x10 & 1) == 0) {
        func_0x00010754d4b8(&PTR_DAT_1109badf0);
        func_0x00010754d2e8();
      }
      else {
        func_0x00010754d4b0();
        func_0x00010754d494(&PTR_DAT_1109bad70);
        func_0x00010754d2e8();
      }
      func_0x00010754d468();
    }
  }
  func_0x00010754d48c();
  func_0x00010754d2f8(uStack_148);
  if ((bool)uVar3) {
    return pppppppuVar17;
  }
  ___stack_chk_fail();
  func_0x00010754d468();
  func_0x00010754d48c();
  func_0x00010754d438();
  pcStack_198 = FUN_10754c840;
  uStack_200 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar15 = pppppppuVar9 + 1;
  pcVar11 = (char *)pppppppuVar16;
  puVar13 = param_4;
  pppuStack_1a0 = &ppuStack_110;
  (*(code *)(*pppppppuVar9)[6])();
  if (((ulong)pppppppuVar15 & 1) == 0) {
    pcVar10 = &UNK_10f416f77;
    func_0x00010754d428();
    func_0x00010754d480();
    goto LAB_10754ccc4;
  }
  func_0x00010754d4dc(appppppuStack_2d0);
  if ((bStack_2c0 & 1) == 0) {
    pcVar10 = &UNK_10f416f8f;
    func_0x00010754d428();
    func_0x00010754d480();
  }
  else {
    func_0x00010754d500(auStack_310);
    if ((bStack_2d8 & 1) == 0) {
      pcVar10 = &UNK_10f416fa5;
      func_0x00010754d428();
      func_0x00010754d480();
    }
    else {
      pppppppuVar17 = (undefined8 *******)&DAT_10f6389e8;
      func_0x00010754d4dc(auStack_328);
      if ((bStack_318 & 1) == 0) {
        pcVar10 = &UNK_10f416fbf;
        func_0x00010754d428();
        func_0x00010754d480();
      }
      else {
        func_0x00010754d500(apppppuStack_368);
        if ((bStack_330 & 1) == 0) {
          pcVar10 = &UNK_10f416fd6;
          func_0x00010754d428();
          func_0x00010754d480();
        }
        else {
          func_0x000107899e5c();
          pcVar10 = (char *)apppppuStack_368;
          func_0x000107264c5c();
          func_0x000104c318bc(&uStack_280,auStack_310);
          puVar13 = &uStack_280;
          pcVar11 = (char *)pppppppuVar17;
          param_5 = pppppppuVar9;
          FUN_1073e26a4(&ppppppuStack_3b8);
          func_0x00010754d4e4();
          if (ppppppuStack_3b8 == (undefined8 ******)0x0) {
LAB_10754cc90:
            func_0x00010754d480();
          }
          else {
            pcVar11 = &UNK_10f40a408;
            func_0x00010754d2d4();
            if (((ulong)pppppppuVar15 & 1) == 0) goto LAB_10754cc90;
            pcVar11 = &UNK_10f40a400;
            func_0x00010754d2d4();
            if (((ulong)pppppppuVar15 & 1) == 0) goto LAB_10754cc90;
            pcVar11 = &DAT_10f33c7a6;
            func_0x00010754d2d4();
            if (((ulong)pppppppuVar15 & 1) == 0) goto LAB_10754cc90;
            pcVar11 = "groups";
            func_0x00010754d2d4();
            if (((ulong)pppppppuVar15 & 1) == 0) goto LAB_10754cc90;
            pcVar11 = &UNK_10f416ff2;
            func_0x00010754d2d4();
            if (((ulong)pppppppuVar15 & 1) == 0) goto LAB_10754cc90;
            pcVar11 = &UNK_10f416fff;
            func_0x00010754d2d4();
            if (((ulong)pppppppuVar15 & 1) == 0) goto LAB_10754cc90;
            pppppuVar6 = ppppppuStack_3b8[1];
            (*(code *)(*pppppuVar6)[6])();
            if (*(int *)(pppppuVar6 + 1) == 0) {
              pcVar11 = &UNK_10f41700e;
              func_0x00010754d2d4();
              if (((ulong)pppppuVar6 & 1) == 0) goto LAB_10754cc90;
            }
            pcVar11 = &DAT_10f2ef6d6;
            func_0x00010754d2d4();
            ppppppuVar18 = ppppppuStack_3b8;
            if (((ulong)pppppuVar6 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = "components";
            func_0x00010754d4dc(&lStack_218);
            if (cStack_208 == '\x01') {
              uVar7 = 0;
              (**(code **)(lStack_218 + 0x18))();
              if ((uVar7 & 1) != 0) {
                ppppppuVar19 = &pppppuStack_210;
                (**(code **)(lStack_218 + 0x20))();
                pcVar10 = (char *)0x0;
                while (ppppppuStack_370 = (undefined8 ******)pcVar10, pcVar10 < ppppppuVar19) {
                  (**(code **)(lStack_218 + 0x28))(&lStack_228,&pppppuStack_210);
                  uStack_390 = uStack_390 & 0xffffffffffffff00;
                  bStack_378 = 0;
                  (*(code *)(*ppppppuVar18)[6])(apppppuStack_3b0,ppppppuVar18);
                  if (iStack_398 == 0) {
                    pcVar10 = (char *)apppppuStack_3b0;
                    FUN_1073442d0(&uStack_3e0);
                    bVar2 = false;
                  }
                  else {
                    if ((bRam00000001131ad3b0 & 1) == 0) {
                      pcVar11 = (char *)&ppppppuStack_370;
                      func_0x0001072ba628(&uStack_280,&UNK_10f41701b,0xf);
                      func_0x000107264c5c(&uStack_280);
                      func_0x00010754d4e4();
                    }
                    puVar8 = &uStack_220;
                    pcVar10 = "id";
                    (**(code **)(lStack_228 + 0x38))(auStack_240);
                    if (cStack_230 == '\x01') {
                      func_0x00010754d500(&uStack_280);
                      if (cStack_248 == '\x01') {
                        func_0x00010754d4f8();
                        pcVar10 = (char *)(ulong)(ushort)*puVar8;
                        func_0x000104c2fe00(appppppuStack_2b8,&uStack_280);
                        pcVar11 = (char *)appppppuStack_2b8;
                        (*(code *)(*ppppppuVar18)[7])(ppppppuVar18);
                        func_0x000104c2f714(appppppuStack_2b8);
                      }
                      puVar8 = &uStack_280;
                      func_0x00010724b3d8();
                    }
                    func_0x00010754d4f8();
                    pppppppuVar17 =
                         (undefined8 *******)
                         ((ulong)pppppppuVar17 & 0xffffffff00000000 | (ulong)(ushort)*puVar8 |
                         0x10000);
                    func_0x00010754d514();
                    param_5 = pppppppuVar17;
                    FUN_10754c678();
                    puVar8 = &uStack_390;
                    func_0x00010754d460();
                    func_0x00010754d448();
                    if ((bStack_378 & 1) == 0) {
                      func_0x00010754d4f8();
                      unaff_x28 = (undefined8 *******)
                                  ((ulong)unaff_x28 & 0xffffffff00000000 | (ulong)(ushort)*puVar8 |
                                  0x10000);
                      func_0x00010754d514();
                      param_5 = unaff_x28;
                      FUN_10754c75c();
                      func_0x00010754d460(&uStack_390);
                      func_0x00010754d448();
                      if ((bStack_378 & 1) != 0) goto LAB_10754cbbc;
                      bVar2 = true;
                    }
                    else {
LAB_10754cbbc:
                      bVar2 = false;
                      uStack_3d8 = uStack_388;
                      uStack_3e0 = uStack_390;
                      uStack_3d0 = uStack_380;
                      uStack_388 = 0;
                      uStack_380 = 0;
                      uStack_390 = 0;
                      cStack_3c8 = '\x01';
                    }
                    func_0x0001072f5f4c(auStack_240);
                  }
                  func_0x0001072ca6c8(apppppuStack_3b0);
                  FUN_1073249ac(&uStack_390);
                  func_0x0001072f5f6c(&lStack_228);
                  if (!bVar2) goto LAB_10754cd30;
                  pcVar10 = (char *)((long)ppppppuStack_370 + 1);
                }
                goto LAB_10754ccf0;
              }
              pcVar10 = &UNK_10f416f5b;
              func_0x00010002b838(&uStack_280);
              uStack_3d8 = uStack_278;
              uStack_3e0 = uStack_280;
              uStack_3d0 = uStack_270;
              uStack_278 = 0;
              uStack_270 = 0;
              uStack_280 = 0;
              cStack_3c8 = '\x01';
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            }
            else {
LAB_10754ccf0:
              uStack_3e0 = uStack_3e0 & 0xffffffffffffff00;
              cStack_3c8 = '\0';
            }
LAB_10754cd30:
            func_0x0001072f5f4c(&lStack_218);
            uVar3 = cStack_3c8 == '\x01';
            if ((bool)uVar3) {
              func_0x00010754d3a0();
LAB_10754cdb4:
              uVar14 = 0;
              *(undefined1 *)extraout_x8 = 0;
            }
            else {
              param_5 = (undefined8 *******)0x0;
              pcVar10 = (char *)ppppppuStack_3b8;
              pcVar11 = (char *)pppppppuVar9;
              puVar13 = param_4;
              FUN_10754c678(&uStack_280,ppppppuStack_3b8,pppppppuVar9,param_4);
              func_0x00010754d460(&uStack_3e0);
              func_0x00010754d448();
              uVar3 = cStack_3c8 == '\x01';
              if ((bool)uVar3) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              param_5 = (undefined8 *******)0x0;
              pcVar10 = (char *)ppppppuStack_3b8;
              pcVar11 = (char *)pppppppuVar9;
              puVar13 = param_4;
              FUN_10754c75c();
              func_0x00010754d460(&uStack_3e0);
              func_0x00010754d448();
              ppppppuVar18 = ppppppuStack_3b8;
              uVar3 = cStack_3c8 == '\x01';
              if ((bool)uVar3) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              ppppppuStack_3b8 = (undefined8 ******)0x0;
              *extraout_x8 = ppppppuVar18;
              uVar14 = 1;
            }
            *(undefined1 *)(extraout_x8 + 1) = uVar14;
            func_0x00010754d440();
          }
          ppppppuVar18 = ppppppuStack_3b8;
          ppppppuStack_3b8 = (undefined8 ******)0x0;
          if (ppppppuVar18 != (undefined8 ******)0x0) {
            func_0x00010754d508();
          }
        }
        func_0x00010724b3d8(apppppuStack_368);
      }
      func_0x0001072f5f4c(auStack_328);
    }
    func_0x00010724b3d8(auStack_310);
  }
  pppppppuVar15 = appppppuStack_2d0;
  func_0x0001072f5f4c();
LAB_10754ccc4:
  func_0x00010754d2f8(uStack_200);
  if ((bool)uVar3) {
    return pppppppuVar15;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  ppppppuVar18 = ppppppuStack_3b8;
  ppppppuStack_3b8 = (undefined8 ******)0x0;
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    func_0x00010754d508();
  }
  func_0x00010724b3d8(apppppuStack_368);
  func_0x0001072f5f4c(auStack_328);
  func_0x00010724b3d8(auStack_310);
  ppppppuVar18 = appppppuStack_2d0;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  pppppppuVar12 = appppppuStack_450;
  pcStack_3e8 = FUN_10754cef8;
  uStack_418 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar17 = (undefined8 *******)pcVar11;
  pppppppuStack_410 = pppppppuVar9;
  puStack_408 = param_4;
  pppppppuStack_400 = pppppppuVar16;
  pppppppuStack_3f8 = pppppppuVar15;
  ppppuStack_3f0 = &pppuStack_1a0;
  (*(code *)(*(undefined8 ******)pcVar10)[7])
            (appppppuStack_430,(undefined8 ******)((long)pcVar10 + 8));
  uVar3 = cStack_420 == '\x01';
  if ((bool)uVar3) {
    pppppuVar6 = *ppppppuVar18;
    pppppppuVar16 = (undefined8 *******)pcVar11;
    _strlen(pcVar11);
    func_0x000107782fdc(appppppuStack_450,pppppuVar6,pcVar11,pppppppuVar16,appppppuStack_430,param_5
                       );
    uVar3 = bStack_438 == 1;
    pppppppuVar17 = (undefined8 *******)pcVar11;
    if ((bool)uVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar13);
      pppppppuVar17 = pppppppuVar12;
    }
    pppppppuVar16 = (undefined8 *******)(ulong)(bStack_438 ^ 1);
    func_0x00010754d440();
  }
  else {
    pppppppuVar16 = (undefined8 *******)0x1;
  }
  func_0x0001072f5f4c();
  func_0x00010754d2f8(uStack_418);
  if ((bool)uVar3) {
    return pppppppuVar16;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  pppppppuVar16 = appppppuStack_430;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  cVar1 = *(char *)(pppppppuVar16 + 3);
  if (cVar1 == *(char *)(pppppppuVar17 + 3)) {
    if (cVar1 != '\0') {
      func_0x000100066230(pppppppuVar16);
    }
  }
  else if (cVar1 == '\0') {
    ppppppuVar19 = pppppppuVar17[1];
    ppppppuVar18 = *pppppppuVar17;
    pppppppuVar16[2] = pppppppuVar17[2];
    pppppppuVar16[1] = ppppppuVar19;
    *pppppppuVar16 = ppppppuVar18;
    pppppppuVar17[1] = (undefined8 ******)0x0;
    pppppppuVar17[2] = (undefined8 ******)0x0;
    *pppppppuVar17 = (undefined8 ******)0x0;
    *(undefined1 *)(pppppppuVar16 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar16);
    *(undefined1 *)(pppppppuVar16 + 3) = 0;
  }
  return pppppppuVar16;
}



/* Entry: 10754c678; end: 10754c75b;  */

long ** FUN_10754c678(long **param_1,undefined8 param_2,long **param_3,ulong *param_4,long **param_5
                     )

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  long **pplVar9;
  char *pcVar10;
  long **pplVar11;
  ulong *puVar12;
  undefined8 *extraout_x8;
  undefined1 *unaff_x19;
  long **pplVar13;
  uint unaff_w22;
  long **pplVar14;
  long **unaff_x28;
  long *plVar15;
  long *aplStack_3e0 [3];
  byte bStack_3c8;
  long *aplStack_3c0 [2];
  char cStack_3b0;
  undefined8 uStack_3a8;
  long **pplStack_3a0;
  ulong *puStack_398;
  long **pplStack_390;
  long **pplStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  char cStack_358;
  long *plStack_348;
  long alStack_340 [3];
  int iStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  byte bStack_308;
  long *plStack_300;
  long alStack_2f8 [7];
  byte bStack_2c0;
  undefined1 auStack_2b8 [16];
  byte bStack_2a8;
  undefined1 auStack_2a0 [56];
  byte bStack_268;
  long *aplStack_260 [2];
  byte bStack_250;
  long *aplStack_248 [7];
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char cStack_1d8;
  undefined1 auStack_1d0 [16];
  char cStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  char cStack_198;
  undefined8 uStack_190;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long *aplStack_110 [4];
  long lStack_f0;
  long *plStack_e8;
  byte bStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *aplStack_80 [4];
  long lStack_60;
  long *plStack_58;
  byte bStack_50;
  undefined8 uStack_48;
  
  func_0x00010754d348();
  func_0x00010754d4d0();
  if ((bStack_50 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x18] = 0;
  }
  else {
    param_1 = &plStack_58;
    (**(code **)(lStack_60 + 0x30))();
    if (((ulong)param_1 & 1) == 0) {
      param_1 = aplStack_80;
      func_0x00010002b838(param_1,&UNK_10f416f2a);
      func_0x00010754d318();
    }
    else {
      if ((unaff_w22 >> 0x10 & 1) == 0) {
        func_0x00010754d4b8(&PTR_FUN_1109bacf0);
        func_0x00010754d2e8();
      }
      else {
        func_0x00010754d4b0();
        func_0x00010754d494(&PTR_FUN_1109bac70);
        func_0x00010754d2e8();
      }
      func_0x00010754d468();
    }
  }
  func_0x00010754d48c();
  func_0x00010754d2f8(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pplVar4 = param_1;
  func_0x00010754d468();
  func_0x00010754d48c();
  func_0x00010754d438();
  pcStack_98 = FUN_10754c75c;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010754d348();
  pplVar13 = (long **)&DAT_10f37c580;
  func_0x00010754d4d0();
  if ((bStack_e0 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    pplVar4 = &plStack_e8;
    (**(code **)(lStack_f0 + 0x30))();
    if (((ulong)pplVar4 & 1) == 0) {
      pplVar13 = (long **)&UNK_10f416f43;
      pplVar4 = aplStack_110;
      func_0x00010002b838();
      func_0x00010754d318();
    }
    else {
      if ((unaff_w22 >> 0x10 & 1) == 0) {
        func_0x00010754d4b8(&PTR_DAT_1109badf0);
        func_0x00010754d2e8();
      }
      else {
        func_0x00010754d4b0();
        func_0x00010754d494(&PTR_DAT_1109bad70);
        func_0x00010754d2e8();
      }
      func_0x00010754d468();
    }
  }
  func_0x00010754d48c();
  func_0x00010754d2f8(uStack_d8);
  if ((bool)in_ZR) {
    return pplVar4;
  }
  ___stack_chk_fail();
  func_0x00010754d468();
  func_0x00010754d48c();
  func_0x00010754d438();
  pcStack_128 = FUN_10754c840;
  uStack_190 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar13 + 1;
  pcVar10 = (char *)param_3;
  puVar12 = param_4;
  ppuStack_130 = &puStack_a0;
  (*(code *)(*pplVar13)[6])();
  if (((ulong)pplVar4 & 1) == 0) {
    pcVar8 = &UNK_10f416f77;
    func_0x00010754d428();
    func_0x00010754d480();
    goto LAB_10754ccc4;
  }
  func_0x00010754d4dc(aplStack_260);
  if ((bStack_250 & 1) == 0) {
    pcVar8 = &UNK_10f416f8f;
    func_0x00010754d428();
    func_0x00010754d480();
  }
  else {
    func_0x00010754d500(auStack_2a0);
    if ((bStack_268 & 1) == 0) {
      pcVar8 = &UNK_10f416fa5;
      func_0x00010754d428();
      func_0x00010754d480();
    }
    else {
      pplVar14 = (long **)&DAT_10f6389e8;
      func_0x00010754d4dc(auStack_2b8);
      if ((bStack_2a8 & 1) == 0) {
        pcVar8 = &UNK_10f416fbf;
        func_0x00010754d428();
        func_0x00010754d480();
      }
      else {
        func_0x00010754d500(alStack_2f8);
        if ((bStack_2c0 & 1) == 0) {
          pcVar8 = &UNK_10f416fd6;
          func_0x00010754d428();
          func_0x00010754d480();
        }
        else {
          func_0x000107899e5c();
          pcVar8 = (char *)alStack_2f8;
          func_0x000107264c5c();
          func_0x000104c318bc(&uStack_210,auStack_2a0);
          puVar12 = &uStack_210;
          pcVar10 = (char *)pplVar14;
          param_5 = pplVar13;
          FUN_1073e26a4(&plStack_348);
          func_0x00010754d4e4();
          if (plStack_348 == (long *)0x0) {
LAB_10754cc90:
            func_0x00010754d480();
          }
          else {
            pcVar10 = &UNK_10f40a408;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &UNK_10f40a400;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &DAT_10f33c7a6;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = "groups";
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &UNK_10f416ff2;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &UNK_10f416fff;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            plVar5 = (long *)plStack_348[1];
            (**(code **)(*plVar5 + 0x30))();
            if ((int)plVar5[1] == 0) {
              pcVar10 = &UNK_10f41700e;
              func_0x00010754d2d4();
              if (((ulong)plVar5 & 1) == 0) goto LAB_10754cc90;
            }
            pcVar10 = &DAT_10f2ef6d6;
            func_0x00010754d2d4();
            plVar15 = plStack_348;
            if (((ulong)plVar5 & 1) == 0) goto LAB_10754cc90;
            pcVar8 = "components";
            func_0x00010754d4dc(&lStack_1a8);
            if (cStack_198 == '\x01') {
              uVar6 = 0;
              (**(code **)(lStack_1a8 + 0x18))();
              if ((uVar6 & 1) != 0) {
                plVar5 = &lStack_1a0;
                (**(code **)(lStack_1a8 + 0x20))();
                pcVar8 = (char *)0x0;
                while (plStack_300 = (long *)pcVar8, pcVar8 < plVar5) {
                  (**(code **)(lStack_1a8 + 0x28))(&lStack_1b8,&lStack_1a0);
                  uStack_320 = uStack_320 & 0xffffffffffffff00;
                  bStack_308 = 0;
                  (**(code **)(*plVar15 + 0x30))(alStack_340,plVar15);
                  if (iStack_328 == 0) {
                    pcVar8 = (char *)alStack_340;
                    FUN_1073442d0(&uStack_370);
                    bVar2 = false;
                  }
                  else {
                    if ((bRam00000001131ad3b0 & 1) == 0) {
                      pcVar10 = (char *)&plStack_300;
                      func_0x0001072ba628(&uStack_210,&UNK_10f41701b,0xf);
                      func_0x000107264c5c(&uStack_210);
                      func_0x00010754d4e4();
                    }
                    puVar7 = &uStack_1b0;
                    pcVar8 = "id";
                    (**(code **)(lStack_1b8 + 0x38))(auStack_1d0);
                    if (cStack_1c0 == '\x01') {
                      func_0x00010754d500(&uStack_210);
                      if (cStack_1d8 == '\x01') {
                        func_0x00010754d4f8();
                        pcVar8 = (char *)(ulong)(ushort)*puVar7;
                        func_0x000104c2fe00(aplStack_248,&uStack_210);
                        pcVar10 = (char *)aplStack_248;
                        (**(code **)(*plVar15 + 0x38))(plVar15);
                        func_0x000104c2f714(aplStack_248);
                      }
                      puVar7 = &uStack_210;
                      func_0x00010724b3d8();
                    }
                    func_0x00010754d4f8();
                    pplVar14 = (long **)((ulong)pplVar14 & 0xffffffff00000000 |
                                         (ulong)(ushort)*puVar7 | 0x10000);
                    func_0x00010754d514();
                    param_5 = pplVar14;
                    FUN_10754c678();
                    puVar7 = &uStack_320;
                    func_0x00010754d460();
                    func_0x00010754d448();
                    if ((bStack_308 & 1) == 0) {
                      func_0x00010754d4f8();
                      unaff_x28 = (long **)((ulong)unaff_x28 & 0xffffffff00000000 |
                                            (ulong)(ushort)*puVar7 | 0x10000);
                      func_0x00010754d514();
                      param_5 = unaff_x28;
                      FUN_10754c75c();
                      func_0x00010754d460(&uStack_320);
                      func_0x00010754d448();
                      if ((bStack_308 & 1) != 0) goto LAB_10754cbbc;
                      bVar2 = true;
                    }
                    else {
LAB_10754cbbc:
                      bVar2 = false;
                      uStack_368 = uStack_318;
                      uStack_370 = uStack_320;
                      uStack_360 = uStack_310;
                      uStack_318 = 0;
                      uStack_310 = 0;
                      uStack_320 = 0;
                      cStack_358 = '\x01';
                    }
                    func_0x0001072f5f4c(auStack_1d0);
                  }
                  func_0x0001072ca6c8(alStack_340);
                  FUN_1073249ac(&uStack_320);
                  func_0x0001072f5f6c(&lStack_1b8);
                  if (!bVar2) goto LAB_10754cd30;
                  pcVar8 = (char *)((long)plStack_300 + 1);
                }
                goto LAB_10754ccf0;
              }
              pcVar8 = &UNK_10f416f5b;
              func_0x00010002b838(&uStack_210);
              uStack_368 = uStack_208;
              uStack_370 = uStack_210;
              uStack_360 = uStack_200;
              uStack_208 = 0;
              uStack_200 = 0;
              uStack_210 = 0;
              cStack_358 = '\x01';
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            }
            else {
LAB_10754ccf0:
              uStack_370 = uStack_370 & 0xffffffffffffff00;
              cStack_358 = '\0';
            }
LAB_10754cd30:
            func_0x0001072f5f4c(&lStack_1a8);
            in_ZR = cStack_358 == '\x01';
            if ((bool)in_ZR) {
              func_0x00010754d3a0();
LAB_10754cdb4:
              uVar3 = 0;
              *(undefined1 *)extraout_x8 = 0;
            }
            else {
              param_5 = (long **)0x0;
              pcVar8 = (char *)plStack_348;
              pcVar10 = (char *)pplVar13;
              puVar12 = param_4;
              FUN_10754c678(&uStack_210,plStack_348,pplVar13,param_4);
              func_0x00010754d460(&uStack_370);
              func_0x00010754d448();
              in_ZR = cStack_358 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              param_5 = (long **)0x0;
              pcVar8 = (char *)plStack_348;
              pcVar10 = (char *)pplVar13;
              puVar12 = param_4;
              FUN_10754c75c();
              func_0x00010754d460(&uStack_370);
              func_0x00010754d448();
              plVar5 = plStack_348;
              in_ZR = cStack_358 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              plStack_348 = (long *)0x0;
              *extraout_x8 = plVar5;
              uVar3 = 1;
            }
            *(undefined1 *)(extraout_x8 + 1) = uVar3;
            func_0x00010754d440();
          }
          plVar5 = plStack_348;
          plStack_348 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            func_0x00010754d508();
          }
        }
        func_0x00010724b3d8(alStack_2f8);
      }
      func_0x0001072f5f4c(auStack_2b8);
    }
    func_0x00010724b3d8(auStack_2a0);
  }
  pplVar4 = aplStack_260;
  func_0x0001072f5f4c();
LAB_10754ccc4:
  func_0x00010754d2f8(uStack_190);
  if ((bool)in_ZR) {
    return pplVar4;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  plVar5 = plStack_348;
  plStack_348 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    func_0x00010754d508();
  }
  func_0x00010724b3d8(alStack_2f8);
  func_0x0001072f5f4c(auStack_2b8);
  func_0x00010724b3d8(auStack_2a0);
  pplVar14 = aplStack_260;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  pplVar11 = aplStack_3e0;
  pcStack_378 = FUN_10754cef8;
  uStack_3a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = (long **)pcVar10;
  pplStack_3a0 = pplVar13;
  puStack_398 = param_4;
  pplStack_390 = param_3;
  pplStack_388 = pplVar4;
  pppuStack_380 = &ppuStack_130;
  (**(code **)(*(long *)pcVar8 + 0x38))(aplStack_3c0,(long *)((long)pcVar8 + 8));
  uVar3 = cStack_3b0 == '\x01';
  if ((bool)uVar3) {
    plVar5 = *pplVar14;
    pplVar13 = (long **)pcVar10;
    _strlen(pcVar10);
    func_0x000107782fdc(aplStack_3e0,plVar5,pcVar10,pplVar13,aplStack_3c0,param_5);
    uVar3 = bStack_3c8 == 1;
    pplVar9 = (long **)pcVar10;
    if ((bool)uVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar12);
      pplVar9 = pplVar11;
    }
    pplVar13 = (long **)(ulong)(bStack_3c8 ^ 1);
    func_0x00010754d440();
  }
  else {
    pplVar13 = (long **)0x1;
  }
  func_0x0001072f5f4c();
  func_0x00010754d2f8(uStack_3a8);
  if ((bool)uVar3) {
    return pplVar13;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  pplVar13 = aplStack_3c0;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  cVar1 = *(char *)(pplVar13 + 3);
  if (cVar1 == *(char *)(pplVar9 + 3)) {
    if (cVar1 != '\0') {
      func_0x000100066230(pplVar13);
    }
  }
  else if (cVar1 == '\0') {
    plVar15 = pplVar9[1];
    plVar5 = *pplVar9;
    pplVar13[2] = pplVar9[2];
    pplVar13[1] = plVar15;
    *pplVar13 = plVar5;
    pplVar9[1] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    *(undefined1 *)(pplVar13 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar13);
    *(undefined1 *)(pplVar13 + 3) = 0;
  }
  return pplVar13;
}



/* Entry: 10754c75c; end: 10754c83f;  */

long ** FUN_10754c75c(long **param_1,undefined8 param_2,long **param_3,ulong *param_4,long **param_5
                     )

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  long **pplVar9;
  char *pcVar10;
  long **pplVar11;
  ulong *puVar12;
  undefined8 *extraout_x8;
  undefined1 *unaff_x19;
  long **pplVar13;
  uint unaff_w22;
  long **pplVar14;
  long **unaff_x28;
  long *plVar15;
  long *aplStack_350 [3];
  byte bStack_338;
  long *aplStack_330 [2];
  char cStack_320;
  undefined8 uStack_318;
  long **pplStack_310;
  ulong *puStack_308;
  long **pplStack_300;
  long **pplStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  char cStack_2c8;
  long *plStack_2b8;
  long alStack_2b0 [3];
  int iStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  byte bStack_278;
  long *plStack_270;
  long alStack_268 [7];
  byte bStack_230;
  undefined1 auStack_228 [16];
  byte bStack_218;
  undefined1 auStack_210 [56];
  byte bStack_1d8;
  long *aplStack_1d0 [2];
  byte bStack_1c0;
  long *aplStack_1b8 [7];
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_148;
  undefined1 auStack_140 [16];
  char cStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  char cStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *aplStack_80 [4];
  long lStack_60;
  long *plStack_58;
  byte bStack_50;
  undefined8 uStack_48;
  
  func_0x00010754d348();
  pplVar13 = (long **)&DAT_10f37c580;
  func_0x00010754d4d0();
  if ((bStack_50 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x18] = 0;
  }
  else {
    param_1 = &plStack_58;
    (**(code **)(lStack_60 + 0x30))();
    if (((ulong)param_1 & 1) == 0) {
      pplVar13 = (long **)&UNK_10f416f43;
      param_1 = aplStack_80;
      func_0x00010002b838();
      func_0x00010754d318();
    }
    else {
      if ((unaff_w22 >> 0x10 & 1) == 0) {
        func_0x00010754d4b8(&PTR_DAT_1109badf0);
        func_0x00010754d2e8();
      }
      else {
        func_0x00010754d4b0();
        func_0x00010754d494(&PTR_DAT_1109bad70);
        func_0x00010754d2e8();
      }
      func_0x00010754d468();
    }
  }
  func_0x00010754d48c();
  func_0x00010754d2f8(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010754d468();
  func_0x00010754d48c();
  func_0x00010754d438();
  pcStack_98 = FUN_10754c840;
  uStack_100 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = pplVar13 + 1;
  pcVar10 = (char *)param_3;
  puVar12 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  (*(code *)(*pplVar13)[6])();
  if (((ulong)pplVar4 & 1) == 0) {
    pcVar8 = &UNK_10f416f77;
    func_0x00010754d428();
    func_0x00010754d480();
    goto LAB_10754ccc4;
  }
  func_0x00010754d4dc(aplStack_1d0);
  if ((bStack_1c0 & 1) == 0) {
    pcVar8 = &UNK_10f416f8f;
    func_0x00010754d428();
    func_0x00010754d480();
  }
  else {
    func_0x00010754d500(auStack_210);
    if ((bStack_1d8 & 1) == 0) {
      pcVar8 = &UNK_10f416fa5;
      func_0x00010754d428();
      func_0x00010754d480();
    }
    else {
      pplVar14 = (long **)&DAT_10f6389e8;
      func_0x00010754d4dc(auStack_228);
      if ((bStack_218 & 1) == 0) {
        pcVar8 = &UNK_10f416fbf;
        func_0x00010754d428();
        func_0x00010754d480();
      }
      else {
        func_0x00010754d500(alStack_268);
        if ((bStack_230 & 1) == 0) {
          pcVar8 = &UNK_10f416fd6;
          func_0x00010754d428();
          func_0x00010754d480();
        }
        else {
          func_0x000107899e5c();
          pcVar8 = (char *)alStack_268;
          func_0x000107264c5c();
          func_0x000104c318bc(&uStack_180,auStack_210);
          puVar12 = &uStack_180;
          pcVar10 = (char *)pplVar14;
          param_5 = pplVar13;
          FUN_1073e26a4(&plStack_2b8);
          func_0x00010754d4e4();
          if (plStack_2b8 == (long *)0x0) {
LAB_10754cc90:
            func_0x00010754d480();
          }
          else {
            pcVar10 = &UNK_10f40a408;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &UNK_10f40a400;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &DAT_10f33c7a6;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = "groups";
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &UNK_10f416ff2;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar10 = &UNK_10f416fff;
            func_0x00010754d2d4();
            if (((ulong)pplVar4 & 1) == 0) goto LAB_10754cc90;
            plVar5 = (long *)plStack_2b8[1];
            (**(code **)(*plVar5 + 0x30))();
            if ((int)plVar5[1] == 0) {
              pcVar10 = &UNK_10f41700e;
              func_0x00010754d2d4();
              if (((ulong)plVar5 & 1) == 0) goto LAB_10754cc90;
            }
            pcVar10 = &DAT_10f2ef6d6;
            func_0x00010754d2d4();
            plVar15 = plStack_2b8;
            if (((ulong)plVar5 & 1) == 0) goto LAB_10754cc90;
            pcVar8 = "components";
            func_0x00010754d4dc(&lStack_118);
            if (cStack_108 == '\x01') {
              uVar6 = 0;
              (**(code **)(lStack_118 + 0x18))();
              if ((uVar6 & 1) != 0) {
                plVar5 = &lStack_110;
                (**(code **)(lStack_118 + 0x20))();
                pcVar8 = (char *)0x0;
                while (plStack_270 = (long *)pcVar8, pcVar8 < plVar5) {
                  (**(code **)(lStack_118 + 0x28))(&lStack_128,&lStack_110);
                  uStack_290 = uStack_290 & 0xffffffffffffff00;
                  bStack_278 = 0;
                  (**(code **)(*plVar15 + 0x30))(alStack_2b0,plVar15);
                  if (iStack_298 == 0) {
                    pcVar8 = (char *)alStack_2b0;
                    FUN_1073442d0(&uStack_2e0);
                    bVar2 = false;
                  }
                  else {
                    if ((bRam00000001131ad3b0 & 1) == 0) {
                      pcVar10 = (char *)&plStack_270;
                      func_0x0001072ba628(&uStack_180,&UNK_10f41701b,0xf);
                      func_0x000107264c5c(&uStack_180);
                      func_0x00010754d4e4();
                    }
                    puVar7 = &uStack_120;
                    pcVar8 = "id";
                    (**(code **)(lStack_128 + 0x38))(auStack_140);
                    if (cStack_130 == '\x01') {
                      func_0x00010754d500(&uStack_180);
                      if (cStack_148 == '\x01') {
                        func_0x00010754d4f8();
                        pcVar8 = (char *)(ulong)(ushort)*puVar7;
                        func_0x000104c2fe00(aplStack_1b8,&uStack_180);
                        pcVar10 = (char *)aplStack_1b8;
                        (**(code **)(*plVar15 + 0x38))(plVar15);
                        func_0x000104c2f714(aplStack_1b8);
                      }
                      puVar7 = &uStack_180;
                      func_0x00010724b3d8();
                    }
                    func_0x00010754d4f8();
                    pplVar14 = (long **)((ulong)pplVar14 & 0xffffffff00000000 |
                                         (ulong)(ushort)*puVar7 | 0x10000);
                    func_0x00010754d514();
                    param_5 = pplVar14;
                    FUN_10754c678();
                    puVar7 = &uStack_290;
                    func_0x00010754d460();
                    func_0x00010754d448();
                    if ((bStack_278 & 1) == 0) {
                      func_0x00010754d4f8();
                      unaff_x28 = (long **)((ulong)unaff_x28 & 0xffffffff00000000 |
                                            (ulong)(ushort)*puVar7 | 0x10000);
                      func_0x00010754d514();
                      param_5 = unaff_x28;
                      FUN_10754c75c();
                      func_0x00010754d460(&uStack_290);
                      func_0x00010754d448();
                      if ((bStack_278 & 1) != 0) goto LAB_10754cbbc;
                      bVar2 = true;
                    }
                    else {
LAB_10754cbbc:
                      bVar2 = false;
                      uStack_2d8 = uStack_288;
                      uStack_2e0 = uStack_290;
                      uStack_2d0 = uStack_280;
                      uStack_288 = 0;
                      uStack_280 = 0;
                      uStack_290 = 0;
                      cStack_2c8 = '\x01';
                    }
                    func_0x0001072f5f4c(auStack_140);
                  }
                  func_0x0001072ca6c8(alStack_2b0);
                  FUN_1073249ac(&uStack_290);
                  func_0x0001072f5f6c(&lStack_128);
                  if (!bVar2) goto LAB_10754cd30;
                  pcVar8 = (char *)((long)plStack_270 + 1);
                }
                goto LAB_10754ccf0;
              }
              pcVar8 = &UNK_10f416f5b;
              func_0x00010002b838(&uStack_180);
              uStack_2d8 = uStack_178;
              uStack_2e0 = uStack_180;
              uStack_2d0 = uStack_170;
              uStack_178 = 0;
              uStack_170 = 0;
              uStack_180 = 0;
              cStack_2c8 = '\x01';
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            }
            else {
LAB_10754ccf0:
              uStack_2e0 = uStack_2e0 & 0xffffffffffffff00;
              cStack_2c8 = '\0';
            }
LAB_10754cd30:
            func_0x0001072f5f4c(&lStack_118);
            in_ZR = cStack_2c8 == '\x01';
            if ((bool)in_ZR) {
              func_0x00010754d3a0();
LAB_10754cdb4:
              uVar3 = 0;
              *(undefined1 *)extraout_x8 = 0;
            }
            else {
              param_5 = (long **)0x0;
              pcVar8 = (char *)plStack_2b8;
              pcVar10 = (char *)pplVar13;
              puVar12 = param_4;
              FUN_10754c678(&uStack_180,plStack_2b8,pplVar13,param_4);
              func_0x00010754d460(&uStack_2e0);
              func_0x00010754d448();
              in_ZR = cStack_2c8 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              param_5 = (long **)0x0;
              pcVar8 = (char *)plStack_2b8;
              pcVar10 = (char *)pplVar13;
              puVar12 = param_4;
              FUN_10754c75c();
              func_0x00010754d460(&uStack_2e0);
              func_0x00010754d448();
              plVar5 = plStack_2b8;
              in_ZR = cStack_2c8 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              plStack_2b8 = (long *)0x0;
              *extraout_x8 = plVar5;
              uVar3 = 1;
            }
            *(undefined1 *)(extraout_x8 + 1) = uVar3;
            func_0x00010754d440();
          }
          plVar5 = plStack_2b8;
          plStack_2b8 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            func_0x00010754d508();
          }
        }
        func_0x00010724b3d8(alStack_268);
      }
      func_0x0001072f5f4c(auStack_228);
    }
    func_0x00010724b3d8(auStack_210);
  }
  pplVar4 = aplStack_1d0;
  func_0x0001072f5f4c();
LAB_10754ccc4:
  func_0x00010754d2f8(uStack_100);
  if ((bool)in_ZR) {
    return pplVar4;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  plVar5 = plStack_2b8;
  plStack_2b8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    func_0x00010754d508();
  }
  func_0x00010724b3d8(alStack_268);
  func_0x0001072f5f4c(auStack_228);
  func_0x00010724b3d8(auStack_210);
  pplVar14 = aplStack_1d0;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  pplVar11 = aplStack_350;
  pcStack_2e8 = FUN_10754cef8;
  uStack_318 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = (long **)pcVar10;
  pplStack_310 = pplVar13;
  puStack_308 = param_4;
  pplStack_300 = param_3;
  pplStack_2f8 = pplVar4;
  ppuStack_2f0 = &puStack_a0;
  (**(code **)(*(long *)pcVar8 + 0x38))(aplStack_330,(long *)((long)pcVar8 + 8));
  uVar3 = cStack_320 == '\x01';
  if ((bool)uVar3) {
    plVar5 = *pplVar14;
    pplVar13 = (long **)pcVar10;
    _strlen(pcVar10);
    func_0x000107782fdc(aplStack_350,plVar5,pcVar10,pplVar13,aplStack_330,param_5);
    uVar3 = bStack_338 == 1;
    pplVar9 = (long **)pcVar10;
    if ((bool)uVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar12);
      pplVar9 = pplVar11;
    }
    pplVar13 = (long **)(ulong)(bStack_338 ^ 1);
    func_0x00010754d440();
  }
  else {
    pplVar13 = (long **)0x1;
  }
  func_0x0001072f5f4c();
  func_0x00010754d2f8(uStack_318);
  if ((bool)uVar3) {
    return pplVar13;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  pplVar13 = aplStack_330;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  cVar1 = *(char *)(pplVar13 + 3);
  if (cVar1 == *(char *)(pplVar9 + 3)) {
    if (cVar1 != '\0') {
      func_0x000100066230(pplVar13);
    }
  }
  else if (cVar1 == '\0') {
    plVar15 = pplVar9[1];
    plVar5 = *pplVar9;
    pplVar13[2] = pplVar9[2];
    pplVar13[1] = plVar15;
    *pplVar13 = plVar5;
    pplVar9[1] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    *(undefined1 *)(pplVar13 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar13);
    *(undefined1 *)(pplVar13 + 3) = 0;
  }
  return pplVar13;
}



/* Entry: 10754c840; end: 10754cef7;  */

long ** FUN_10754c840(undefined8 *param_1,undefined8 param_2,long **param_3,long **param_4,
                     ulong *param_5,long **param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  char *pcVar7;
  long **pplVar8;
  char *pcVar9;
  long **pplVar10;
  ulong *puVar11;
  long **pplVar12;
  long **pplVar13;
  long **unaff_x28;
  long *plVar14;
  long *aplStack_2c0 [3];
  byte bStack_2a8;
  long *aplStack_2a0 [2];
  char cStack_290;
  undefined8 uStack_288;
  long **pplStack_280;
  ulong *puStack_278;
  long **pplStack_270;
  long **pplStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char cStack_238;
  long *plStack_228;
  long alStack_220 [3];
  int iStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  long *plStack_1e0;
  long alStack_1d8 [7];
  byte bStack_1a0;
  undefined1 auStack_198 [16];
  byte bStack_188;
  undefined1 auStack_180 [56];
  byte bStack_148;
  long *aplStack_140 [2];
  byte bStack_130;
  long *aplStack_128 [7];
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_b8;
  undefined1 auStack_b0 [16];
  char cStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar12 = param_3 + 1;
  pcVar9 = (char *)param_4;
  puVar11 = param_5;
  (*(code *)(*param_3)[6])();
  if (((ulong)pplVar12 & 1) == 0) {
    pcVar7 = &UNK_10f416f77;
    func_0x00010754d428();
    func_0x00010754d480();
    goto LAB_10754ccc4;
  }
  func_0x00010754d4dc(aplStack_140);
  if ((bStack_130 & 1) == 0) {
    pcVar7 = &UNK_10f416f8f;
    func_0x00010754d428();
    func_0x00010754d480();
  }
  else {
    func_0x00010754d500(auStack_180);
    if ((bStack_148 & 1) == 0) {
      pcVar7 = &UNK_10f416fa5;
      func_0x00010754d428();
      func_0x00010754d480();
    }
    else {
      pplVar13 = (long **)&DAT_10f6389e8;
      func_0x00010754d4dc(auStack_198);
      if ((bStack_188 & 1) == 0) {
        pcVar7 = &UNK_10f416fbf;
        func_0x00010754d428();
        func_0x00010754d480();
      }
      else {
        func_0x00010754d500(alStack_1d8);
        if ((bStack_1a0 & 1) == 0) {
          pcVar7 = &UNK_10f416fd6;
          func_0x00010754d428();
          func_0x00010754d480();
        }
        else {
          func_0x000107899e5c();
          pcVar7 = (char *)alStack_1d8;
          func_0x000107264c5c();
          func_0x000104c318bc(&uStack_f0,auStack_180);
          puVar11 = &uStack_f0;
          pcVar9 = (char *)pplVar13;
          param_6 = param_3;
          FUN_1073e26a4(&plStack_228);
          func_0x00010754d4e4();
          if (plStack_228 == (long *)0x0) {
LAB_10754cc90:
            func_0x00010754d480();
          }
          else {
            pcVar9 = &UNK_10f40a408;
            func_0x00010754d2d4();
            if (((ulong)pplVar12 & 1) == 0) goto LAB_10754cc90;
            pcVar9 = &UNK_10f40a400;
            func_0x00010754d2d4();
            if (((ulong)pplVar12 & 1) == 0) goto LAB_10754cc90;
            pcVar9 = &DAT_10f33c7a6;
            func_0x00010754d2d4();
            if (((ulong)pplVar12 & 1) == 0) goto LAB_10754cc90;
            pcVar9 = "groups";
            func_0x00010754d2d4();
            if (((ulong)pplVar12 & 1) == 0) goto LAB_10754cc90;
            pcVar9 = &UNK_10f416ff2;
            func_0x00010754d2d4();
            if (((ulong)pplVar12 & 1) == 0) goto LAB_10754cc90;
            pcVar9 = &UNK_10f416fff;
            func_0x00010754d2d4();
            if (((ulong)pplVar12 & 1) == 0) goto LAB_10754cc90;
            plVar4 = (long *)plStack_228[1];
            (**(code **)(*plVar4 + 0x30))();
            if ((int)plVar4[1] == 0) {
              pcVar9 = &UNK_10f41700e;
              func_0x00010754d2d4();
              if (((ulong)plVar4 & 1) == 0) goto LAB_10754cc90;
            }
            pcVar9 = &DAT_10f2ef6d6;
            func_0x00010754d2d4();
            plVar14 = plStack_228;
            if (((ulong)plVar4 & 1) == 0) goto LAB_10754cc90;
            pcVar7 = "components";
            func_0x00010754d4dc(&lStack_88);
            if (cStack_78 == '\x01') {
              uVar5 = 0;
              (**(code **)(lStack_88 + 0x18))();
              if ((uVar5 & 1) != 0) {
                plVar4 = &lStack_80;
                (**(code **)(lStack_88 + 0x20))();
                pcVar7 = (char *)0x0;
                while (plStack_1e0 = (long *)pcVar7, pcVar7 < plVar4) {
                  (**(code **)(lStack_88 + 0x28))(&lStack_98,&lStack_80);
                  uStack_200 = uStack_200 & 0xffffffffffffff00;
                  bStack_1e8 = 0;
                  (**(code **)(*plVar14 + 0x30))(alStack_220,plVar14);
                  if (iStack_208 == 0) {
                    pcVar7 = (char *)alStack_220;
                    FUN_1073442d0(&uStack_250);
                    bVar2 = false;
                  }
                  else {
                    if ((bRam00000001131ad3b0 & 1) == 0) {
                      pcVar9 = (char *)&plStack_1e0;
                      func_0x0001072ba628(&uStack_f0,&UNK_10f41701b,0xf);
                      func_0x000107264c5c(&uStack_f0);
                      func_0x00010754d4e4();
                    }
                    puVar6 = &uStack_90;
                    pcVar7 = "id";
                    (**(code **)(lStack_98 + 0x38))(auStack_b0);
                    if (cStack_a0 == '\x01') {
                      func_0x00010754d500(&uStack_f0);
                      if (cStack_b8 == '\x01') {
                        func_0x00010754d4f8();
                        pcVar7 = (char *)(ulong)(ushort)*puVar6;
                        func_0x000104c2fe00(aplStack_128,&uStack_f0);
                        pcVar9 = (char *)aplStack_128;
                        (**(code **)(*plVar14 + 0x38))(plVar14);
                        func_0x000104c2f714(aplStack_128);
                      }
                      puVar6 = &uStack_f0;
                      func_0x00010724b3d8();
                    }
                    func_0x00010754d4f8();
                    pplVar13 = (long **)((ulong)pplVar13 & 0xffffffff00000000 |
                                         (ulong)(ushort)*puVar6 | 0x10000);
                    func_0x00010754d514();
                    param_6 = pplVar13;
                    FUN_10754c678();
                    puVar6 = &uStack_200;
                    func_0x00010754d460();
                    func_0x00010754d448();
                    if ((bStack_1e8 & 1) == 0) {
                      func_0x00010754d4f8();
                      unaff_x28 = (long **)((ulong)unaff_x28 & 0xffffffff00000000 |
                                            (ulong)(ushort)*puVar6 | 0x10000);
                      func_0x00010754d514();
                      param_6 = unaff_x28;
                      FUN_10754c75c();
                      func_0x00010754d460(&uStack_200);
                      func_0x00010754d448();
                      if ((bStack_1e8 & 1) != 0) goto LAB_10754cbbc;
                      bVar2 = true;
                    }
                    else {
LAB_10754cbbc:
                      bVar2 = false;
                      uStack_248 = uStack_1f8;
                      uStack_250 = uStack_200;
                      uStack_240 = uStack_1f0;
                      uStack_1f8 = 0;
                      uStack_1f0 = 0;
                      uStack_200 = 0;
                      cStack_238 = '\x01';
                    }
                    func_0x0001072f5f4c(auStack_b0);
                  }
                  func_0x0001072ca6c8(alStack_220);
                  FUN_1073249ac(&uStack_200);
                  func_0x0001072f5f6c(&lStack_98);
                  if (!bVar2) goto LAB_10754cd30;
                  pcVar7 = (char *)((long)plStack_1e0 + 1);
                }
                goto LAB_10754ccf0;
              }
              pcVar7 = &UNK_10f416f5b;
              func_0x00010002b838(&uStack_f0);
              uStack_248 = uStack_e8;
              uStack_250 = uStack_f0;
              uStack_240 = uStack_e0;
              uStack_e8 = 0;
              uStack_e0 = 0;
              uStack_f0 = 0;
              cStack_238 = '\x01';
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            }
            else {
LAB_10754ccf0:
              uStack_250 = uStack_250 & 0xffffffffffffff00;
              cStack_238 = '\0';
            }
LAB_10754cd30:
            func_0x0001072f5f4c(&lStack_88);
            in_ZR = cStack_238 == '\x01';
            if ((bool)in_ZR) {
              func_0x00010754d3a0();
LAB_10754cdb4:
              uVar3 = 0;
              *(undefined1 *)param_1 = 0;
            }
            else {
              param_6 = (long **)0x0;
              pcVar7 = (char *)plStack_228;
              pcVar9 = (char *)param_3;
              puVar11 = param_5;
              FUN_10754c678(&uStack_f0,plStack_228,param_3,param_5);
              func_0x00010754d460(&uStack_250);
              func_0x00010754d448();
              in_ZR = cStack_238 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              param_6 = (long **)0x0;
              pcVar7 = (char *)plStack_228;
              pcVar9 = (char *)param_3;
              puVar11 = param_5;
              FUN_10754c75c();
              func_0x00010754d460(&uStack_250);
              func_0x00010754d448();
              plVar4 = plStack_228;
              in_ZR = cStack_238 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010754d3a0();
                goto LAB_10754cdb4;
              }
              plStack_228 = (long *)0x0;
              *param_1 = plVar4;
              uVar3 = 1;
            }
            *(undefined1 *)(param_1 + 1) = uVar3;
            func_0x00010754d440();
          }
          plVar4 = plStack_228;
          plStack_228 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            func_0x00010754d508();
          }
        }
        func_0x00010724b3d8(alStack_1d8);
      }
      func_0x0001072f5f4c(auStack_198);
    }
    func_0x00010724b3d8(auStack_180);
  }
  pplVar12 = aplStack_140;
  func_0x0001072f5f4c();
LAB_10754ccc4:
  func_0x00010754d2f8(uStack_70);
  if ((bool)in_ZR) {
    return pplVar12;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  plVar4 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    func_0x00010754d508();
  }
  func_0x00010724b3d8(alStack_1d8);
  func_0x0001072f5f4c(auStack_198);
  func_0x00010724b3d8(auStack_180);
  pplVar13 = aplStack_140;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  pplVar10 = aplStack_2c0;
  pcStack_258 = FUN_10754cef8;
  uStack_288 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar8 = (long **)pcVar9;
  pplStack_280 = param_3;
  puStack_278 = param_5;
  pplStack_270 = param_4;
  pplStack_268 = pplVar12;
  puStack_260 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)pcVar7 + 0x38))(aplStack_2a0,(long *)((long)pcVar7 + 8));
  uVar3 = cStack_290 == '\x01';
  if ((bool)uVar3) {
    plVar4 = *pplVar13;
    pplVar12 = (long **)pcVar9;
    _strlen(pcVar9);
    func_0x000107782fdc(aplStack_2c0,plVar4,pcVar9,pplVar12,aplStack_2a0,param_6);
    uVar3 = bStack_2a8 == 1;
    pplVar8 = (long **)pcVar9;
    if ((bool)uVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11);
      pplVar8 = pplVar10;
    }
    pplVar12 = (long **)(ulong)(bStack_2a8 ^ 1);
    func_0x00010754d440();
  }
  else {
    pplVar12 = (long **)0x1;
  }
  func_0x0001072f5f4c();
  func_0x00010754d2f8(uStack_288);
  if ((bool)uVar3) {
    return pplVar12;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  pplVar12 = aplStack_2a0;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  cVar1 = *(char *)(pplVar12 + 3);
  if (cVar1 == *(char *)(pplVar8 + 3)) {
    if (cVar1 != '\0') {
      func_0x000100066230(pplVar12);
    }
  }
  else if (cVar1 == '\0') {
    plVar14 = pplVar8[1];
    plVar4 = *pplVar8;
    pplVar12[2] = pplVar8[2];
    pplVar12[1] = plVar14;
    *pplVar12 = plVar4;
    pplVar8[1] = (long *)0x0;
    pplVar8[2] = (long *)0x0;
    *pplVar8 = (long *)0x0;
    *(undefined1 *)(pplVar12 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar12);
    *(undefined1 *)(pplVar12 + 3) = 0;
  }
  return pplVar12;
}



/* Entry: 10754cef8; end: 10754cff3;  */

undefined8 *
FUN_10754cef8(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_70 [3];
  byte bStack_58;
  undefined8 auStack_50 [2];
  char cStack_40;
  undefined8 uStack_38;
  
  puVar4 = auStack_70;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  (**(code **)(*param_2 + 0x38))(auStack_50,param_2 + 1);
  uVar2 = cStack_40 == '\x01';
  if ((bool)uVar2) {
    uVar5 = *param_1;
    puVar3 = param_3;
    _strlen(param_3);
    func_0x000107782fdc(auStack_70,uVar5,param_3,puVar3,auStack_50,param_5);
    uVar2 = bStack_58 == 1;
    puVar3 = param_3;
    if ((bool)uVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_4);
      puVar3 = puVar4;
    }
    puVar4 = (undefined8 *)(ulong)(bStack_58 ^ 1);
    func_0x00010754d440();
  }
  else {
    puVar4 = (undefined8 *)0x1;
  }
  func_0x0001072f5f4c();
  func_0x00010754d2f8(uStack_38);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010754d440();
  puVar4 = auStack_50;
  func_0x0001072f5f4c();
  func_0x00010754d438();
  cVar1 = *(char *)(puVar4 + 3);
  if (cVar1 == *(char *)(puVar3 + 3)) {
    if (cVar1 != '\0') {
      func_0x000100066230(puVar4);
    }
  }
  else if (cVar1 == '\0') {
    uVar6 = puVar3[1];
    uVar5 = *puVar3;
    puVar4[2] = puVar3[2];
    puVar4[1] = uVar6;
    *puVar4 = uVar5;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *(undefined1 *)(puVar4 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  return puVar4;
}



/* Entry: 10754cff4; end: 10754d063;  */

undefined8 * FUN_10754cff4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      func_0x000100066230(param_1);
    }
  }
  else if (cVar1 == '\0') {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}



/* Entry: 10754d064; end: 10754d06b;  */

void FUN_10754d064(void)

{
  return;
}



/* Entry: 10754d06c; end: 10754d09b;  */

void FUN_10754d06c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010754d4b0();
  func_0x00010754d390(&PTR_FUN_1109bac70);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10754d09c; end: 10754d0b7;  */

void FUN_10754d09c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109bac70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754d0b8; end: 10754d0db;  */

void FUN_10754d0b8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010754d3ec();
  func_0x00010754d3ac();
                    /* WARNING: Could not recover jumptable at 0x00010754d47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10754d0dc; end: 10754d103;  */

void FUN_10754d0dc(undefined8 param_1)

{
  func_0x00010754d528();
  func_0x00010754d430(param_1,&PTR_DAT_1109bacd0);
  func_0x00010754d404();
  return;
}



/* Entry: 10754d104; end: 10754d10f;  */

undefined ** FUN_10754d104(void)

{
  return &PTR_DAT_1109bacd0;
}



/* Entry: 10754d110; end: 10754d127;  */

void FUN_10754d110(long param_1)

{
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 10754d128; end: 10754d12f;  */

void FUN_10754d128(void)

{
  return;
}



/* Entry: 10754d130; end: 10754d153;  */

void FUN_10754d130(void)

{
  func_0x00010754d4ec();
  func_0x00010754d390(&PTR_FUN_1109bacf0);
  return;
}



/* Entry: 10754d154; end: 10754d173;  */

void FUN_10754d154(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109bacf0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754d174; end: 10754d19b;  */

void FUN_10754d174(undefined8 param_1)

{
  func_0x00010754d528();
  func_0x00010754d430(param_1,&PTR_DAT_1109bad50);
  func_0x00010754d404();
  return;
}



/* Entry: 10754d19c; end: 10754d1af;  */

undefined ** FUN_10754d19c(void)

{
  return &PTR_DAT_1109bad50;
}



/* Entry: 10754d1b0; end: 10754d1df;  */

void FUN_10754d1b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010754d4b0();
  func_0x00010754d390(&PTR_DAT_1109bad70);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10754d1e0; end: 10754d1fb;  */

void FUN_10754d1e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109bad70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754d1fc; end: 10754d21f;  */

void FUN_10754d1fc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010754d3ec();
  func_0x00010754d3ac();
                    /* WARNING: Could not recover jumptable at 0x00010754d47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10754d220; end: 10754d247;  */

void FUN_10754d220(undefined8 param_1)

{
  func_0x00010754d528();
  func_0x00010754d430(param_1,&PTR_DAT_1109badd0);
  func_0x00010754d404();
  return;
}



/* Entry: 10754d248; end: 10754d25b;  */

undefined ** FUN_10754d248(void)

{
  return &PTR_DAT_1109badd0;
}



/* Entry: 10754d25c; end: 10754d27f;  */

void FUN_10754d25c(void)

{
  func_0x00010754d4ec();
  func_0x00010754d390(&PTR_DAT_1109badf0);
  return;
}



/* Entry: 10754d280; end: 10754d29f;  */

void FUN_10754d280(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109badf0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754d2a0; end: 10754d2c7;  */

void FUN_10754d2a0(undefined8 param_1)

{
  func_0x00010754d528();
  func_0x00010754d430(param_1,&PTR_DAT_1109bae50);
  func_0x00010754d404();
  return;
}



/* Entry: 10754d2c8; end: 10754d533;  */

undefined ** FUN_10754d2c8(void)

{
  return &PTR_DAT_1109bae50;
}



/* Entry: 10754d534; end: 10754e073;  */

void FUN_10754d534(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  undefined1 uVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  byte bVar9;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined ***pppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 *puStack_190;
  undefined ***pppuStack_180;
  undefined1 auStack_178 [40];
  byte bStack_150;
  undefined1 auStack_128 [56];
  char cStack_f0;
  char cStack_d8;
  char cStack_c0;
  undefined1 auStack_b8 [40];
  byte bStack_90;
  char cStack_70;
  undefined8 uStack_68;
  
  func_0x000107550e40();
  plVar4 = param_3 + 1;
  (**(code **)(*param_3 + 0x30))();
  if (((ulong)plVar4 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (param_4,&UNK_10f41702b);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
LAB_10754dc10:
    func_0x000107550a34(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppuVar5 = (undefined ***)0x0;
    func_0x0001077ae0f8();
    ppuStack_198 = &PTR_FUN_1109bae70;
    pppuStack_180 = &ppuStack_198;
    ppuStack_1b8 = &PTR_FUN_1109baf00;
    pppuStack_1a0 = &ppuStack_1b8;
    puStack_1c8 = &UNK_10f417043;
    puStack_1c0 = &DAT_10f350c05;
    puStack_1b0 = &uStack_1e0;
    puStack_190 = &uStack_1e0;
    func_0x000107550d50();
    func_0x000107550c8c();
    if (cStack_70 != '\x01') {
LAB_10754d650:
      func_0x000107550d50();
      func_0x000107550c64();
      in_ZR = cStack_c0 == '\x01';
      if ((bool)in_ZR) {
        if ((bRam00000001131ad3b0 & 1) == 0) {
          func_0x000107550b28();
          func_0x000107550da4();
          func_0x000107550c70();
        }
        func_0x000107550bc4(auStack_178);
        bVar9 = bStack_150;
        in_ZR = bStack_150 == 1;
        if ((bool)in_ZR) {
          func_0x000107550d7c();
        }
      }
      else {
        bVar9 = 1;
      }
      func_0x000107550c5c();
      func_0x000107550bec();
      func_0x000107550c0c();
      func_0x000107550e1c();
      if ((bVar9 & 1) == 0) {
LAB_10754dbfc:
        uVar8 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        func_0x000107550ca8(&PTR_DAT_1109baf80);
        func_0x000107550d6c(&PTR_FUN_1109bb010);
        func_0x000107550a00();
        FUN_10754e074();
        pppuVar6 = pppuVar5;
        func_0x000107550b98();
        func_0x000107550d9c();
        if (((ulong)pppuVar5 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550e60(&PTR_FUN_1109bb090);
        ppuStack_1b8 = &PTR_FUN_1109bb120;
        pppuStack_1a0 = &ppuStack_1b8;
        puStack_1c8 = &UNK_10f417066;
        puStack_1c0 = &DAT_10f68f20c;
        puStack_1b0 = extraout_x9;
        func_0x000107550d50();
        func_0x000107550c8c();
        if (cStack_70 == '\x01') {
          if ((bRam00000001131ad3b0 & 1) == 0) {
            func_0x000107550e74();
            func_0x000107550c1c(auStack_b8);
            func_0x000107264c5c(auStack_b8);
            func_0x000104c2f714(auStack_b8);
          }
          func_0x000107550bf4(auStack_128,auStack_b8);
          FUN_107558160();
          in_ZR = cStack_d8 == '\x01';
          if (!(bool)in_ZR) {
            func_0x000107550dbc();
            func_0x000107550bec();
            func_0x000107550c0c();
            func_0x000107550e24();
            goto LAB_10754dbfc;
          }
          FUN_1074e813c(auStack_178,auStack_128);
          if (pppuStack_180 == (undefined ***)0x0) {
            func_0x000104bfeb48();
            goto LAB_10754deac;
          }
          func_0x000107550e34();
          (*extraout_x8_00)();
          pppuVar6 = (undefined ***)0x0;
          FUN_1074e71ac();
          func_0x000107550dbc();
        }
        func_0x000107550d50();
        func_0x000107550c64();
        in_ZR = cStack_c0 == '\x01';
        if ((bool)in_ZR) {
          if ((bRam00000001131ad3b0 & 1) == 0) {
            func_0x000107550b28();
            func_0x000107550da4();
            func_0x000107550c70();
          }
          func_0x000107550bc4(auStack_b8);
          in_ZR = bStack_90 == 1;
          bVar9 = bStack_90;
          if ((bool)in_ZR) {
            pppuVar6 = &ppuStack_1b8;
            FUN_10754bdf8(pppuVar6,auStack_b8);
          }
        }
        else {
          bVar9 = 1;
        }
        func_0x000107550c5c();
        func_0x000107550bec();
        func_0x000107550c0c();
        func_0x000107550e24();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550ca8(&PTR_DAT_1109bb1a0);
        func_0x000107550d6c(&PTR_DAT_1109bb220);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb2a0);
        func_0x000107550c50(&PTR_DAT_1109bb320);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb3a0);
        func_0x000107550c50(&PTR_DAT_1109bb420);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb4a0);
        func_0x000107550c50(&PTR_DAT_1109bb520);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb5a0);
        func_0x000107550c50(&PTR_DAT_1109bb620);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb6a0);
        func_0x000107550c50(&PTR_DAT_1109bb720);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_FUN_1109bb7a0);
        func_0x000107550c50(&PTR_FUN_1109bb830);
        func_0x000107550a1c();
        FUN_10754e1f8();
        func_0x000107550a48();
        func_0x000107550db4();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb8b0);
        func_0x000107550c50(&PTR_DAT_1109bb930);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bb9b0);
        func_0x000107550c50(&PTR_DAT_1109bba30);
        func_0x000107550a1c();
        FUN_10754e1f8();
        func_0x000107550a48();
        func_0x000107550db4();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bbab0);
        func_0x000107550c50(&PTR_DAT_1109bbb30);
        func_0x0001075509e4();
        func_0x000107550a48();
        func_0x000107550b00();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b0c(&PTR_DAT_1109bbbb0);
        func_0x000107550c50(&PTR_DAT_1109bbc30);
        func_0x0001075509e4();
        func_0x000107550b98();
        func_0x000107550bb0();
        if (((ulong)pppuVar6 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550e60(&PTR_DAT_1109bbcb0);
        ppuStack_1b8 = &PTR_FUN_1109bbd40;
        pppuStack_1a0 = &ppuStack_1b8;
        puStack_1c8 = &UNK_10f4172bd;
        puStack_1c0 = &UNK_10f41729f;
        puStack_1b0 = extraout_x9_00;
        func_0x000107550d50();
        func_0x000107550c8c();
        if (cStack_70 == '\x01') {
          if ((bRam00000001131ad3b0 & 1) == 0) {
            func_0x000107550e74();
            func_0x000107550c1c(auStack_178);
            func_0x000107264c5c(auStack_178);
            func_0x000107550d1c();
          }
          func_0x000107550bf4(auStack_128,auStack_178);
          FUN_10755510c();
          in_ZR = cStack_f0 == '\x01';
          if (!(bool)in_ZR) {
            func_0x000107550d94();
            func_0x000107550bec();
            func_0x000107550c0c();
            func_0x000107550e2c();
            goto LAB_10754dbfc;
          }
          func_0x00010727fe7c(auStack_b8,auStack_128);
          if (pppuStack_180 == (undefined ***)0x0) {
            func_0x000104bfeb48();
            goto LAB_10754deac;
          }
          func_0x000107550e34();
          (*extraout_x8_01)();
          func_0x00010727fc1c(auStack_b8);
          func_0x000107550d94();
        }
        func_0x000107550d50();
        func_0x000107550c64();
        in_ZR = cStack_c0 == '\x01';
        if ((bool)in_ZR) {
          if ((bRam00000001131ad3b0 & 1) == 0) {
            func_0x000107550b28();
            func_0x000107550da4();
            func_0x000107550c70();
          }
          func_0x000107550bc4(auStack_178);
          in_ZR = bStack_150 == 1;
          bVar9 = bStack_150;
          if ((bool)in_ZR) {
            func_0x000107550d7c();
          }
        }
        else {
          bVar9 = 1;
        }
        func_0x000107550c5c();
        func_0x000107550bec();
        func_0x000107550c0c();
        func_0x000107550e2c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550ca8(&PTR_DAT_1109bbdc0);
        func_0x000107550d6c(&PTR_DAT_1109bbe40);
        func_0x0001075509e4();
        func_0x000107550ab8();
        func_0x000107550b8c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bbec0);
        func_0x000107550ce0(&PTR_DAT_1109bbf40);
        func_0x0001075509e4();
        func_0x000107550ab8();
        func_0x000107550b8c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bbfc0);
        func_0x000107550ce0(&PTR_DAT_1109bc040);
        func_0x0001075509e4();
        func_0x000107550ab8();
        func_0x000107550b8c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bc0c0);
        func_0x000107550ce0(&PTR_FUN_1109bc150);
        func_0x000107550a00();
        FUN_10754e42c();
        func_0x000107550ab8();
        uVar7 = 0;
        FUN_1075503a4();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bc1d0);
        func_0x000107550ce0(&PTR_DAT_1109bc250);
        func_0x0001075509e4();
        func_0x000107550ab8();
        func_0x000107550b8c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bc2d0);
        func_0x000107550ce0(&PTR_DAT_1109bc350);
        func_0x000107550a00();
        FUN_10754e074();
        func_0x000107550ab8();
        func_0x000107550d9c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bc3d0);
        func_0x000107550ce0(&PTR_DAT_1109bc450);
        func_0x0001075509e4();
        func_0x000107550ab8();
        func_0x000107550b8c();
        if ((bVar9 & 1) == 0) goto LAB_10754dbfc;
        func_0x000107550b58(&PTR_DAT_1109bc4d0);
        func_0x000107550ce0(&PTR_DAT_1109bc550);
        func_0x0001075509e4();
        func_0x000107550b98();
        func_0x000107550bb0();
        if ((uVar7 & 1) == 0) goto LAB_10754dbfc;
        param_1[1] = lStack_1d8;
        *param_1 = uStack_1e0;
        if (lStack_1d8 != 0) {
          plVar4 = (long *)(lStack_1d8 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        param_1[2] = uStack_1d0;
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 3) = uVar8;
      func_0x000107410da4(&uStack_1e0);
      goto LAB_10754dc10;
    }
    if ((bRam00000001131ad3b0 & 1) == 0) {
      func_0x000107550e74();
      func_0x000107550c1c(auStack_178);
      func_0x000107264c5c(auStack_178);
      func_0x000107550d1c();
    }
    func_0x000107550bf4(auStack_128,auStack_178);
    FUN_107557bc4();
    in_ZR = cStack_f0 == '\x01';
    if (!(bool)in_ZR) {
      func_0x000107550dac();
      func_0x000107550bec();
      func_0x000107550c0c();
      func_0x000107550e1c();
      goto LAB_10754dbfc;
    }
    FUN_1074e808c(auStack_b8,auStack_128);
    if (pppuStack_180 != (undefined ***)0x0) {
      func_0x000107550e34();
      (*extraout_x8)();
      pppuVar5 = (undefined ***)0x0;
      FUN_1074e729c();
      func_0x000107550dac();
      goto LAB_10754d650;
    }
  }
  func_0x000104bfeb48();
LAB_10754deac:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10754deb0);
  (*pcVar3)();
}



/* Entry: 10754e074; end: 10754e1f7;  */

char FUN_10754e074(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 **ppuVar5;
  code *extraout_x8;
  undefined8 extraout_x9;
  char cVar6;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_358 [16];
  char cStack_348;
  undefined1 auStack_338 [152];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [152];
  char cStack_200;
  undefined1 auStack_1f8 [16];
  char cStack_1e8;
  undefined1 auStack_1e0 [40];
  char cStack_1b8;
  undefined8 uStack_1a8;
  undefined1 *puStack_140;
  undefined1 uStack_131;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 *puStack_120;
  char cStack_110;
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [40];
  char cStack_98;
  char cStack_78;
  long alStack_70 [2];
  char cStack_60;
  undefined8 uStack_58;
  
  ppuVar5 = &puStack_140;
  func_0x000107550c24();
  uStack_58 = extraout_x9;
  func_0x000107550d34();
  func_0x000107550de4(alStack_70);
  if (cStack_60 == '\x01') {
    puStack_120 = auStack_128;
    param_3 = unaff_x21;
    FUN_10754e7b4();
    param_4 = &uStack_131;
    FUN_10754e794(auStack_c0,alStack_70);
    uVar2 = cStack_78 == '\x01';
    if ((bool)uVar2) {
      FUN_107438188(auStack_108,auStack_c0);
      param_2 = auStack_108;
      FUN_10754e870();
      FUN_107432d98(auStack_108);
      func_0x000107550dd0();
      goto LAB_10754e114;
    }
    func_0x000107550dd0();
    cVar6 = '\0';
  }
  else {
LAB_10754e114:
    unaff_x20 = param_2;
    func_0x000107550cf4();
    uVar2 = cStack_110 == '\x01';
    if ((bool)uVar2) {
      puStack_140 = auStack_130;
      FUN_10754e810();
      func_0x000107550d88(auStack_c0);
      uVar2 = cStack_98 == '\x01';
      unaff_x20 = (undefined1 *)ppuVar5;
      param_3 = unaff_x21;
      cVar6 = cStack_98;
      if ((bool)uVar2) {
        unaff_x20 = auStack_c0;
        func_0x000107550e00();
        param_3 = unaff_x21;
      }
    }
    else {
      cVar6 = '\x01';
    }
    func_0x000107550cec();
  }
  func_0x0001072f5f4c();
  func_0x000107550a34(uStack_58);
  if ((bool)uVar2) {
    return cVar6;
  }
  ___stack_chk_fail();
  func_0x000107550cec();
  plVar3 = alStack_70;
  func_0x0001072f5f4c();
  func_0x000107550b68();
  plVar4 = plVar3;
  func_0x000107550e40();
  func_0x000107550de4(auStack_1f8,plVar4 + 1);
  if (cStack_1e8 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      func_0x000107550e74();
      func_0x000107550c1c(auStack_1e0);
      func_0x000107264c5c(auStack_1e0);
      func_0x000104c2f714(auStack_1e0);
    }
    FUN_10755d2a0(auStack_2a0,auStack_1e0,auStack_1f8,unaff_x20,param_3,1,0);
    uVar2 = cStack_200 == '\x01';
    if ((bool)uVar2) {
      FUN_107483560(auStack_338,auStack_298);
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_10754e3b8;
      func_0x000107550e34();
      (*extraout_x8)();
      func_0x0001072ca37c(auStack_338);
      func_0x000107550e14();
      goto LAB_10754e2ec;
    }
    func_0x000107550e14();
    cVar6 = '\0';
  }
  else {
LAB_10754e2ec:
    (**(code **)(*plVar3 + 0x38))(auStack_358,plVar4 + 1,param_7);
    uVar2 = cStack_348 == '\x01';
    if ((bool)uVar2) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        func_0x000107550e74();
        func_0x000107550c1c(auStack_2a0);
        func_0x000107264c5c(auStack_2a0);
        func_0x000104c2f714(auStack_2a0);
      }
      FUN_10754bb48(auStack_1e0,auStack_358,unaff_x20,param_3);
      uVar2 = cStack_1b8 == '\x01';
      cVar6 = cStack_1b8;
      if ((bool)uVar2) {
        func_0x000107550e00();
      }
    }
    else {
      cVar6 = '\x01';
    }
    func_0x0001072f5f4c(auStack_358);
  }
  func_0x0001072f5f4c(auStack_1f8);
  func_0x000107550a34(uStack_1a8);
  if ((bool)uVar2) {
    return cVar6;
  }
  ___stack_chk_fail();
LAB_10754e3b8:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10754e3c0);
  (*pcVar1)();
}



/* Entry: 10754e1f8; end: 10754e42b;  */

char FUN_10754e1f8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 uVar2;
  long *plVar3;
  code *extraout_x8;
  char cVar4;
  undefined1 auStack_218 [16];
  char cStack_208;
  undefined1 auStack_1f8 [152];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [152];
  char cStack_c0;
  undefined1 auStack_b8 [16];
  char cStack_a8;
  undefined1 auStack_a0 [40];
  char cStack_78;
  undefined8 uStack_68;
  
  plVar3 = param_1;
  func_0x000107550e40();
  func_0x000107550de4(auStack_b8,plVar3 + 1);
  if (cStack_a8 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      func_0x000107550e74();
      func_0x000107550c1c(auStack_a0);
      func_0x000107264c5c(auStack_a0);
      func_0x000104c2f714(auStack_a0);
    }
    FUN_10755d2a0(auStack_160,auStack_a0,auStack_b8,param_2,param_3,1,0);
    uVar2 = cStack_c0 == '\x01';
    if ((bool)uVar2) {
      FUN_107483560(auStack_1f8,auStack_158);
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_10754e3b8;
      func_0x000107550e34();
      (*extraout_x8)();
      func_0x0001072ca37c(auStack_1f8);
      func_0x000107550e14();
      goto LAB_10754e2ec;
    }
    func_0x000107550e14();
    cVar4 = '\0';
  }
  else {
LAB_10754e2ec:
    (**(code **)(*param_1 + 0x38))(auStack_218,plVar3 + 1,param_7);
    uVar2 = cStack_208 == '\x01';
    if ((bool)uVar2) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        func_0x000107550e74();
        func_0x000107550c1c(auStack_160);
        func_0x000107264c5c(auStack_160);
        func_0x000104c2f714(auStack_160);
      }
      FUN_10754bb48(auStack_a0,auStack_218,param_2,param_3);
      uVar2 = cStack_78 == '\x01';
      cVar4 = cStack_78;
      if ((bool)uVar2) {
        func_0x000107550e00();
      }
    }
    else {
      cVar4 = '\x01';
    }
    func_0x0001072f5f4c(auStack_218);
  }
  func_0x0001072f5f4c(auStack_b8);
  func_0x000107550a34(uStack_68);
  if ((bool)uVar2) {
    return cVar4;
  }
  ___stack_chk_fail();
LAB_10754e3b8:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10754e3c0);
  (*pcVar1)();
}



/* Entry: 10754e42c; end: 10754e5b7;  */

undefined1 * FUN_10754e42c(void)

{
  undefined1 uVar1;
  undefined8 extraout_x9;
  undefined1 *puVar2;
  undefined1 *unaff_x21;
  undefined1 *unaff_x24;
  undefined1 auStack_198 [8];
  undefined1 *puStack_190;
  char cStack_180;
  undefined1 auStack_170 [112];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [32];
  byte bStack_d8;
  char cStack_88;
  undefined1 auStack_80 [16];
  char cStack_70;
  undefined8 uStack_68;
  
  func_0x000107550c24();
  uStack_68 = extraout_x9;
  func_0x000107550d34();
  func_0x000107550de4(auStack_80);
  if (cStack_70 == '\x01') {
    puStack_190 = auStack_198;
    FUN_1075501b4();
    unaff_x24 = auStack_80;
    FUN_107550194(auStack_100);
    uVar1 = cStack_88 == '\x01';
    if (!(bool)uVar1) {
      func_0x000107550dec();
      puVar2 = (undefined1 *)0x0;
      goto LAB_10754e53c;
    }
    FUN_1073243b8(auStack_170,auStack_f8);
    FUN_107550270();
    unaff_x24 = auStack_170;
    FUN_10732442c();
    func_0x000107550dec();
  }
  func_0x000107550cf4();
  uVar1 = cStack_180 == '\x01';
  if ((bool)uVar1) {
    FUN_107550210();
    func_0x000107550d88(auStack_100);
    puVar2 = (undefined1 *)(ulong)bStack_d8;
    uVar1 = bStack_d8 == 1;
    unaff_x24 = unaff_x21;
    if ((bool)uVar1) {
      func_0x000107550e00();
      unaff_x24 = unaff_x21;
    }
  }
  else {
    puVar2 = (undefined1 *)0x1;
  }
  func_0x000107550cec();
LAB_10754e53c:
  func_0x000107550bec();
  func_0x000107550a34(uStack_68);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107550cec();
  func_0x000107550bec();
  func_0x000107550b68();
  if (unaff_x24[0x38] == '\x01') {
    FUN_1074e729c(unaff_x24);
  }
  return unaff_x24;
}



/* Entry: 10754e5b8; end: 10754e5e7;  */

long FUN_10754e5b8(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1074e729c(param_1);
  }
  return param_1;
}



/* Entry: 10754e5e8; end: 10754e5ef;  */

void FUN_10754e5e8(void)

{
  return;
}



/* Entry: 10754e5f0; end: 10754e617;  */

void FUN_10754e5f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109bae70;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754e618; end: 10754e637;  */

void FUN_10754e618(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109bae70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754e638; end: 10754e69f;  */

void FUN_10754e638(void)

{
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [56];
  
  func_0x000107550bb8();
  FUN_1074e759c();
  FUN_1074e808c(auStack_58,auStack_90);
  func_0x000107550be0();
  func_0x0001077ae18c();
  FUN_1074e729c(auStack_58);
  FUN_1074e729c(auStack_90);
  return;
}



/* Entry: 10754e6a0; end: 10754e6c7;  */

void FUN_10754e6a0(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109baee0);
  func_0x000107550a70();
  return;
}



/* Entry: 10754e6c8; end: 10754e6d3;  */

undefined ** FUN_10754e6c8(void)

{
  return &PTR_DAT_1109baee0;
}



/* Entry: 10754e6d4; end: 10754e707;  */

void FUN_10754e6d4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107550ba0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107550b1c(uVar1);
  return;
}



/* Entry: 10754e708; end: 10754e70f;  */

void FUN_10754e708(void)

{
  return;
}


