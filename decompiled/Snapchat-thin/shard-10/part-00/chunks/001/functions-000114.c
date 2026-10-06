/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074e1930; end: 1074e1943;  */

void FUN_1074e1930(void)

{
  return;
}



/* Entry: 1074e1944; end: 1074e1963;  */

void FUN_1074e1944(void)

{
  func_0x00010727d6bc();
  func_0x0001074e2204();
  return;
}



/* Entry: 1074e1964; end: 1074e196b;  */

void FUN_1074e1964(long *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *param_1;
  func_0x0001074e2188(lVar1);
  func_0x00010727d614();
  func_0x00010727d614(lVar1 + 0x38,unaff_x20 + 0x38);
  FUN_1073243b8(unaff_x19 + 0x78,unaff_x20 + 0x78);
  func_0x00010727d614(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  return;
}



/* Entry: 1074e196c; end: 1074e19df;  */

void FUN_1074e196c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  func_0x00010727d614();
  func_0x00010727d614(param_1 + 0x38,unaff_x20 + 0x38);
  FUN_1073243b8(unaff_x19 + 0x78,unaff_x20 + 0x78);
  func_0x00010727d614(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  return;
}



/* Entry: 1074e19e0; end: 1074e1a3f;  */

ulong FUN_1074e19e0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x97b425ed097b42 < param_2) {
    FUN_1074e1130();
    func_0x0001074e22c0();
    FUN_1074e1b14();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x1b0;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x4bda12f684bda0 < uVar1) {
    uVar2 = 0x97b425ed097b42;
  }
  return uVar2;
}



/* Entry: 1074e1a40; end: 1074e1b13;  */

void FUN_1074e1a40(void)

{
  func_0x0001074e22c0();
  FUN_1074e1b14();
  return;
}



/* Entry: 1074e1b14; end: 1074e1b2b;  */

void FUN_1074e1b14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074e1b2c; end: 1074e1bc7;  */

void FUN_1074e1b2c(long param_1)

{
  func_0x0001074e225c();
  if (param_1 != 0) {
    func_0x0001074e207c();
  }
  return;
}



/* Entry: 1074e1bc8; end: 1074e1bdf;  */

void FUN_1074e1bc8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074e1be0; end: 1074e1c7f;  */

void FUN_1074e1be0(void)

{
  long unaff_x20;
  
  func_0x0001074e2168();
  if (unaff_x20 != 0) {
    func_0x0001074e2298();
    func_0x0001074e21fc();
  }
  return;
}



/* Entry: 1074e1c80; end: 1074e1d67;  */

long FUN_1074e1c80(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = *param_2;
    func_0x0001001030f4(uVar2,uVar2 + param_2[1]);
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar2 != uVar4) break;
        plVar3 = param_1 + 4;
        func_0x00010728905c(plVar3,plVar5 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 1074e1d68; end: 1074e1d7f;  */

void FUN_1074e1d68(long *param_1,long param_2)

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



/* Entry: 1074e1d80; end: 1074e1def;  */

void FUN_1074e1d80(long param_1)

{
  func_0x0001074e225c();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074e1df0; end: 1074e1e37;  */

undefined8 * FUN_1074e1df0(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_1074e1e38(param_1,param_2,param_2 + param_3 * 0x18);
  return param_1;
}



/* Entry: 1074e1e38; end: 1074e1e6f;  */

void FUN_1074e1e38(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e224c();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001004c3c54();
  }
  return;
}



/* Entry: 1074e1e70; end: 1074e1e87;  */

void FUN_1074e1e70(long *param_1,long param_2)

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



/* Entry: 1074e1e88; end: 1074e1ebf;  */

void FUN_1074e1e88(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2168();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001074e1a98(unaff_x20 + 0x10);
    }
    func_0x0001074e21fc();
  }
  return;
}



/* Entry: 1074e1ec0; end: 1074e1f93;  */

long FUN_1074e1ec0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074e1f94; end: 1074e1f9b;  */

void FUN_1074e1f94(void)

{
  return;
}



/* Entry: 1074e1f9c; end: 1074e1fcf;  */

void FUN_1074e1f9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b5910;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074e1fd0; end: 1074e1fff;  */

void FUN_1074e1fd0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b5910;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074e2000; end: 1074e206f;  */

void FUN_1074e2000(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x0001067e045c();
  if (lVar5 == 0) {
    return;
  }
  func_0x0001074e2188(uVar3,param_2);
  func_0x0001074e21a8();
  uVar3 = unaff_x20;
  func_0x000100152bb8();
  if ((int)uVar3 == 0) {
    func_0x0001074e20e8();
    uVar3 = unaff_x20;
    func_0x000100152bb8();
    if ((int)uVar3 == 0) {
      plVar1 = *(long **)(unaff_x19 + 0xf0);
      for (plVar6 = *(long **)(unaff_x19 + 0xe8); plVar6 != plVar1; plVar6 = plVar6 + 1) {
        iVar2 = (int)*plVar6;
        func_0x0001074e20bc();
        if (iVar2 != 0) {
          plVar4 = (long *)*plVar6;
          (**(code **)(*plVar4 + 0x30))(plVar4,unaff_x20);
          if (plVar4 != (long *)0x0) {
            return;
          }
        }
      }
      FUN_1074e1ec0(unaff_x19 + 0xa0,unaff_x20);
    }
    else {
      func_0x0001074e22d8();
    }
  }
  return;
}



/* Entry: 1074e2070; end: 1074e22eb;  */

undefined ** FUN_1074e2070(void)

{
  return &PTR_DAT_1109b5980;
}



/* Entry: 1074e22ec; end: 1074e2913;  */

long * FUN_1074e22ec(undefined8 param_1,long *param_2,long *param_3,long param_4,long *param_5,
                    undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  undefined1 uStack_325;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined2 uStack_318;
  undefined1 uStack_316;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 auStack_300 [16];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_238;
  long *plStack_230;
  undefined8 *apuStack_228 [2];
  long lStack_218;
  ulong uStack_210;
  byte bStack_201;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_4 + 400) != 4) {
    plVar3 = (long *)0x0;
    goto LAB_1074e2814;
  }
  if (*(int *)(param_4 + 0x148) == 1) {
    FUN_1074dcb44(param_4 + 0xd8);
    func_0x00010724ef84(&lStack_218);
    if (-1 < (char)bStack_201) {
      uStack_210 = (ulong)bStack_201;
    }
    if (uStack_210 == 0) {
LAB_1074e23a4:
      plVar6 = (long *)0x0;
    }
    else {
      plVar3 = &lStack_218;
      func_0x000100152bb8(plVar3,&UNK_10f415cc2);
      if (((ulong)plVar3 & 1) != 0) goto LAB_1074e23a4;
      plVar3 = &lStack_218;
      func_0x000100152bb8(plVar3,&UNK_10f415cce);
      if (((ulong)plVar3 & 1) != 0) goto LAB_1074e23a4;
      plVar3 = &lStack_218;
      func_0x0001000e107c(plVar3,param_3 + 6);
      plVar6 = (long *)0x0;
      if ((((ulong)plVar3 & 1) == 0) && (param_3[0xd] != 0)) {
        plVar6 = param_3 + 10;
        func_0x0001074dcb64(plVar6,&lStack_218);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_218);
    if (plVar6 == (long *)0x0) goto LAB_1074e23b4;
  }
  else {
LAB_1074e23b4:
    plVar6 = param_5;
  }
  FUN_1074dc94c(&lStack_218,*param_3);
  uStack_2c0._0_4_ = 0x3eb33333;
  FUN_1074dc2d0(param_4 + 0x150,&lStack_218,&uStack_2c0);
  auStack_300[0] = 0x3eb33333;
  uVar8 = param_1;
  FUN_1074dc2d0(param_4 + 0x68,&lStack_218,auStack_300);
  uStack_328 = 0;
  uStack_327 = 0;
  uStack_326 = 0;
  uStack_325 = 0;
  uVar9 = uVar8;
  FUN_1074dc2d0(param_4 + 0xa0,&lStack_218,&uStack_328);
  lVar2 = param_4;
  FUN_1074dcb84();
  uStack_32c = (undefined4)lVar2;
  param_2 = param_2 + 1;
  FUN_1074dc9d4(param_2,&uStack_32c);
  lVar2 = param_3[9];
  lVar7 = *param_3;
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x24);
  uStack_2b8 = 0;
  uStack_2b0 = CONCAT44(*(undefined4 *)(lVar7 + 0x78),uStack_32c);
  uStack_2a8 = uStack_2a8 & 0xffffffffff000000;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0x101010100000000;
  uStack_288 = CONCAT62(uStack_288._2_6_,0xf01);
  FUN_1073ca29c(apuStack_228,*(undefined8 *)(lVar7 + 0x90),param_2,&uStack_2c0);
  if (apuStack_228[0] == (undefined8 *)0x0) {
LAB_1074e2800:
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)*apuStack_228[0];
    (**(code **)(*plVar3 + 0x18))();
    if ((int)plVar3 != 2) goto LAB_1074e2800;
    uStack_2b0 = 0x3f80000000000000;
    uStack_2b8 = 0;
    uStack_2a8 = CONCAT71(uStack_2a8._1_7_,1);
    bVar1 = (char)lVar2 == '\0';
    uVar11 = 0;
    if (bVar1) {
      uVar11 = 0x13f800000;
    }
    uStack_2a8 = CONCAT44((int)uVar11,(undefined4)uStack_2a8);
    uStack_2a0 = CONCAT71(uStack_2a0._1_7_,(char)((ulong)uVar11 >> 0x20));
    uStack_2a0 = uStack_2a0 & 0xffffffff;
    uStack_298 = CONCAT71(uStack_298._1_7_,bVar1);
    uStack_2c0 = param_6;
    (**(code **)(**(long **)(lVar7 + 0x10) + 0x28))
              (&plStack_230,*(long **)(lVar7 + 0x10),&UNK_10f415cde,&uStack_2c0);
    plVar3 = plStack_230;
    (**(code **)(*plStack_230 + 0x30))();
    if (((ulong)plVar3 & 1) != 0) {
      plStack_238 = plStack_230;
      (**(code **)(*plStack_230 + 0x10))(plStack_230,&UNK_10f415d7f,10);
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      plVar4 = *(long **)(lVar7 + 8);
      (**(code **)(*plVar4 + 0x10))();
      plVar5 = *(long **)(lVar7 + 8);
      (**(code **)(*plVar5 + 0x10))();
      bVar1 = (int)plVar4 != 0;
      uVar11 = 0;
      if (bVar1) {
        uVar11 = 0x3ff0000000000000;
      }
      uVar10 = 0x3ff0000000000000;
      if (bVar1) {
        uVar10 = 0;
      }
      func_0x000107876c5c(0,0x3ff0000000000000,uVar10,uVar11,0xbff0000000000000,0x3ff0000000000000,
                          &uStack_2c0,plVar5);
      func_0x000107482794(auStack_300,&uStack_2c0);
      (**(code **)(*plStack_230 + 0x40))(plStack_230,apuStack_228[0]);
      uStack_310 = 7;
      uStack_308 = 0x3f800000;
      uStack_324 = 7;
      uStack_320 = 0;
      uStack_31c = 0;
      uStack_318 = 0x101;
      uStack_316 = 1;
      (**(code **)(*plStack_230 + 0x80))(plStack_230,&uStack_310,&uStack_328);
      uStack_326 = 1;
      uStack_328 = 0;
      uStack_327 = 1;
      (**(code **)(*plStack_230 + 0x88))(plStack_230,&uStack_328);
      (**(code **)(*plStack_230 + 0x58))(plStack_230,param_3[2]);
      (**(code **)(*plStack_230 + 0x60))(plStack_230,0,*(long *)(lVar7 + 0x48) + 0xa8);
      (**(code **)(*plStack_230 + 0x68))(plStack_230,*(undefined4 *)param_3[1]);
      (**(code **)(*plStack_230 + 0xd0))(plStack_230,0,auStack_300);
      uVar11 = NEON_fmov(0x3f800000,4);
      uStack_328 = (undefined1)uVar11;
      uStack_327 = (undefined1)((ulong)uVar11 >> 8);
      uStack_326 = (undefined1)((ulong)uVar11 >> 0x10);
      uStack_325 = (undefined1)((ulong)uVar11 >> 0x18);
      uStack_324 = (undefined4)((ulong)uVar11 >> 0x20);
      (**(code **)(*plStack_230 + 0xa8))(plStack_230,1,&uStack_328);
      plVar4 = plStack_230;
      func_0x0001074e296c();
      (*extraout_x8)(param_1,plVar4,2);
      func_0x0001074e296c();
      (*extraout_x8_00)(uVar8,plVar4,3);
      func_0x0001074e296c();
      (*extraout_x8_01)(uVar9,plVar4,4);
      (**(code **)(*plVar4 + 0x78))(plVar4,param_5,param_3[3]);
      (**(code **)(*plVar4 + 0x70))(plVar4,0,param_5);
      (**(code **)(*plVar4 + 0x78))(plVar4,plVar6,param_3[3]);
      (**(code **)(*plVar4 + 0x70))(plVar4,1,plVar6);
      lVar2 = param_4;
      FUN_1074dcb84();
      if ((int)lVar2 != 0) {
        func_0x0001074e296c(*(undefined4 *)(param_4 + 0x1a0));
        (*extraout_x8_02)(plVar4,8);
        func_0x0001074e296c(*(undefined4 *)(param_4 + 0x1a4));
        (*extraout_x8_03)(plVar4,5);
        func_0x0001074e296c(*(undefined4 *)(param_4 + 0x1a8));
        (*extraout_x8_04)(plVar4,6);
        func_0x0001074e296c(*(undefined4 *)(param_4 + 0x1ac));
        (*extraout_x8_05)(plVar4,7);
      }
      uStack_328 = 4;
      uStack_324 = 0;
      (**(code **)(*plStack_230 + 0x138))
                (plStack_230,&uStack_328,*(undefined4 *)(param_3[1] + 0x18),1,
                 *(undefined4 *)(param_3[1] + 8));
      FUN_10748eeb8(&plStack_238);
    }
    plVar6 = plStack_230;
    plStack_230 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      func_0x0001074e2978();
    }
  }
  func_0x00010730b734(apuStack_228);
  param_2 = &lStack_218;
  func_0x000107267da8();
LAB_1074e2814:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar3;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_218);
  __Unwind_Resume(param_2);
  func_0x0001074e2984();
  return param_2;
}



/* Entry: 1074e2914; end: 1074e2953;  */

void FUN_1074e2914(void)

{
  func_0x0001074e2984();
  return;
}



/* Entry: 1074e2954; end: 1074e298f;  */

undefined1  [16] FUN_1074e2954(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f415d7f;
  return auVar1;
}



/* Entry: 1074e2990; end: 1074e29ef;  */

undefined8 FUN_1074e2990(void)

{
  int iVar1;
  
  if ((bRam0000000113822c48 & 1) == 0) {
    iVar1 = 0x13822c48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000113822c28 = &PTR_FUN_1109b5a10;
      uRam0000000113822c40 = 0x113822c28;
      ___cxa_guard_release(0x113822c48);
    }
  }
  return 0x113822c28;
}



/* Entry: 1074e29f0; end: 1074e2a53;  */

undefined8 * FUN_1074e29f0(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x0001072f058c(param_1 + 4);
  param_1[8] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* Entry: 1074e2a54; end: 1074e2af3;  */

void FUN_1074e2a54(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001074e3164();
  func_0x0001074e3154();
  func_0x0001074e315c();
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1074e2af4();
  FUN_1074e2b1c();
  func_0x000104c33970(&uStack_40);
  func_0x0001074e312c();
  return;
}



/* Entry: 1074e2af4; end: 1074e2b1b;  */

long FUN_1074e2af4(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1074e2ca8(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 1074e2b1c; end: 1074e2b43;  */

undefined8 * FUN_1074e2b1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000104c2f98c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1074e2b44; end: 1074e2bdb;  */

void FUN_1074e2b44(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x0001074e3154();
  lVar5 = param_2;
  FUN_1074e2bdc();
  if (lVar5 == 0) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x0001074e315c();
    *(long *)(param_3 + 0x38) = lVar5;
    lVar5 = *(long *)(param_3 + 0x48);
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    param_1[1] = *(undefined8 *)(param_3 + 0x48);
    *param_1 = uVar6;
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
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x40);
  return;
}



/* Entry: 1074e2bdc; end: 1074e2c0b;  */

long FUN_1074e2bdc(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  puVar4 = param_1;
  func_0x0001074e3134();
  func_0x0001074e3164(param_1,param_2);
  lVar7 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = *param_1;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar4 >> 7;
  bVar3 = (byte)puVar4;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      lVar5 = uVar1 + uVar10 * 0x50;
      func_0x000104c32db4(lVar5,unaff_x20);
      if ((int)lVar5 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 1074e2c0c; end: 1074e2c13;  */

void FUN_1074e2c0c(void)

{
  return;
}



/* Entry: 1074e2c14; end: 1074e2c37;  */

void FUN_1074e2c14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b5a10;
  return;
}



/* Entry: 1074e2c38; end: 1074e2c63;  */

void FUN_1074e2c38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b5a10;
  return;
}



/* Entry: 1074e2c64; end: 1074e2c9b;  */

long FUN_1074e2c64(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b5a70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1074e2c9c; end: 1074e2ca7;  */

undefined ** FUN_1074e2c9c(void)

{
  return &PTR_DAT_1109b5a70;
}



/* Entry: 1074e2ca8; end: 1074e2d17;  */

void FUN_1074e2ca8(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_1074e2d18();
  if ((uVar3 & 1) != 0) {
    FUN_1074e3024(param_2[1] + (long)plVar2 * 0x50,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x50;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 1074e2d18; end: 1074e2df7;  */

undefined1  [16] FUN_1074e2d18(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auVar19 [16];
  
  func_0x0001074e3164();
  func_0x0001074e3134();
  lVar6 = 0;
  uVar7 = *unaff_x19;
  uVar8 = unaff_x19[2];
  uVar3 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar2 = (byte)param_1;
  uVar11 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar3);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = unaff_x19[1];
      puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
      func_0x000104c32db4();
      if ((uVar4 & 1) != 0) {
        uVar12 = 0;
        goto LAB_1074e2dd4;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_1074e2df8();
  uVar12 = 1;
  puVar5 = unaff_x19;
LAB_1074e2dd4:
  auVar19._8_8_ = uVar12;
  auVar19._0_8_ = puVar5;
  return auVar19;
}



/* Entry: 1074e2df8; end: 1074e2f03;  */

void FUN_1074e2df8(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001074e3164();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100061de0();
  lVar5 = *unaff_x19;
  if ((*(long *)(lVar5 + -8) == 0) && (*(char *)(lVar5 + (long)param_1) != -2)) {
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_1074e2f04();
    }
    else {
      func_0x00010ae6c914();
    }
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    func_0x000100061de0();
    lVar5 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar5 + -8) =
       *(long *)(lVar5 + -8) - (ulong)(*(char *)(lVar5 + (long)param_1) == -0x80);
  bVar2 = (byte)unaff_x20 & 0x7f;
  uVar6 = unaff_x19[2];
  *(byte *)(lVar5 + (long)param_1) = bVar2;
  *(byte *)(lVar5 + (uVar6 & (long)param_1 - 7U) + (uVar6 & 7)) = bVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  func_0x00010726d624();
  lVar9 = param_1[1];
  for (lVar4 = 0; lVar8 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      lVar7 = lVar5;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar7);
      bVar2 = (byte)lVar7 & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar3) = bVar2;
      *(byte *)(lVar7 + ((long)plVar3 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      FUN_1074e2fd8(lVar9 + (long)plVar3 * 0x50,lVar5);
    }
    lVar5 = lVar5 + 0x50;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1074e2f04; end: 1074e2fd7;  */

void FUN_1074e2f04(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  func_0x00010726d624();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_1074e2fd8(lVar9 + (long)plVar3 * 0x50,lVar6);
    }
    lVar6 = lVar6 + 0x50;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1074e2fd8; end: 1074e300f;  */

long FUN_1074e2fd8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x000104c33970(param_2 + 0x40);
  func_0x000107479d54();
  return param_2;
}



/* Entry: 1074e3010; end: 1074e3023;  */

long FUN_1074e3010(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1074e3024; end: 1074e303f;  */

void FUN_1074e3024(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1074e3040; end: 1074e310b;  */

long FUN_1074e3040(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x0001074e3164();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar11 * 0x50;
      func_0x000104c32db4();
      if (iVar4 != 0) {
        return *unaff_x19 + uVar11;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 1074e310c; end: 1074e316f;  */

void FUN_1074e310c(void)

{
  return;
}



/* Entry: 1074e3170; end: 1074e31db;  */

undefined8 * FUN_1074e3170(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  _bzero(param_1 + 2,0x251);
  param_1[0x59] = param_3;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  param_1[0x5c] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x5d) = 0x42137ae1;
  return param_1;
}



/* Entry: 1074e31dc; end: 1074e3257;  */

void FUN_1074e31dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_1b0 [352];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_50 = *param_2;
  uStack_28 = *(undefined1 *)(param_2 + 5);
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  FUN_1074e3258(auStack_1b0,*param_1,&uStack_50,param_1 + 2);
  FUN_1074e3894(param_1 + 2,auStack_1b0);
  func_0x000107410bf4(auStack_1b0);
  return;
}



/* Entry: 1074e3258; end: 1074e33b7;  */

void FUN_1074e3258(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_300 [88];
  undefined1 auStack_2a8 [88];
  undefined1 auStack_250 [88];
  undefined1 auStack_1f8 [88];
  undefined1 auStack_1a0 [88];
  undefined1 auStack_148 [88];
  undefined1 auStack_f0 [88];
  undefined1 auStack_98 [88];
  
  func_0x000107432f04(auStack_f0,param_4);
  func_0x0001074e39f8(auStack_98,param_2);
  func_0x000107432f04(auStack_1a0,param_4 + 0x58);
  func_0x0001074e39f8(auStack_148,param_2 + 0x60);
  func_0x000107432f04(auStack_250,param_4 + 0xb0);
  func_0x0001074e39f8(auStack_1f8,param_2 + 0xc0);
  func_0x000107432f04(auStack_300,param_4 + 0x108);
  func_0x0001074e39f8(auStack_2a8,param_2 + 0x120);
  FUN_1074e396c(param_1,auStack_98,auStack_148,auStack_1f8,auStack_2a8);
  func_0x000107410c2c(auStack_2a8);
  func_0x000107410c2c(auStack_300);
  func_0x000107410c2c(auStack_1f8);
  func_0x000107410c2c(auStack_250);
  func_0x000107410c2c(auStack_148);
  func_0x000107410c2c(auStack_1a0);
  func_0x000107410c2c(auStack_98);
  func_0x000107410c2c(auStack_f0);
  return;
}



/* Entry: 1074e33b8; end: 1074e37b7;  */

undefined1 * FUN_1074e33b8(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 auStack_4d0 [2];
  undefined1 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 auStack_488 [28];
  undefined4 uStack_46c;
  undefined1 *puStack_468;
  undefined4 uStack_460;
  undefined1 *puStack_430;
  undefined4 uStack_428;
  undefined1 *puStack_3f8;
  undefined4 uStack_3f0;
  undefined1 auStack_3c0 [56];
  undefined1 *puStack_388;
  undefined4 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [64];
  undefined1 *puStack_290;
  undefined1 auStack_1e8 [400];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_46c = param_1;
  func_0x000100060964(&puStack_378,&DAT_10f408e85);
  func_0x0001074e3a08();
  func_0x0001072d2ee0();
  func_0x0001072965a0(auStack_4d0,auStack_1e8,1);
  func_0x00010786975c(auStack_488,auStack_4d0);
  func_0x00010726b264(auStack_4d0);
  func_0x00010729651c(auStack_1e8);
  func_0x000104c2f714(&puStack_378);
  uVar5 = uStack_46c;
  uVar3 = uStack_46c;
  func_0x0001077512dc(&puStack_378);
  puStack_290 = auStack_488;
  func_0x0001074e3a08();
  func_0x000107751334();
  func_0x000107267da8(&puStack_378);
  puStack_378 = &UNK_10e52b660;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  puStack_358 = &UNK_10e52b660;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  puStack_338 = &UNK_10e52b660;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  FUN_1074e37b8(param_2 + 0x260,&puStack_378);
  func_0x000107266af0(&puStack_378);
  lVar1 = param_2 + 0x260;
  FUN_1074e37ec();
  auStack_4d0[0] = uVar5;
  puStack_4c8 = auStack_488;
  uStack_4c0 = 0x7fffffffffffffff;
  uStack_4a8 = 0;
  uStack_4a0 = 1;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_3f0 = 0x3fe66666;
  puStack_3f8 = (undefined1 *)auStack_4d0;
  FUN_107438e4c(auStack_3c0,param_2 + 0x10,&puStack_3f8,0x7fffffffffffffff);
  uStack_428 = 0;
  puStack_430 = (undefined1 *)auStack_4d0;
  FUN_107438e4c(&puStack_3f8,param_2 + 0x68,&puStack_430,uStack_4c0);
  uStack_460 = 0x3f800000;
  puStack_468 = (undefined1 *)auStack_4d0;
  FUN_107438e4c(&puStack_430,param_2 + 0xc0,&puStack_468,uStack_4c0);
  uStack_380 = 0x42137ae1;
  puStack_388 = (undefined1 *)auStack_4d0;
  FUN_107438e4c(&puStack_468,param_2 + 0x118,&puStack_388,uStack_4c0);
  FUN_1073dd9b0(&puStack_378,auStack_3c0);
  FUN_1073dd9b0(&uStack_340,&puStack_3f8);
  FUN_1073dd9b0(auStack_308,&puStack_430);
  FUN_1073dd9b0(auStack_2d0,&puStack_468);
  FUN_1073dd4c4(&puStack_468);
  FUN_1073dd4c4(&puStack_430);
  FUN_1073dd4c4(&puStack_3f8);
  FUN_1073dd4c4(auStack_3c0);
  FUN_1073ddf7c(param_2 + 0x170,&puStack_378);
  FUN_1073ddf7c(param_2 + 0x1a8,&uStack_340);
  FUN_1073ddf7c(param_2 + 0x1e0,auStack_308);
  FUN_1073ddf7c(param_2 + 0x218,auStack_2d0);
  FUN_107410bb8(&puStack_378);
  puStack_378 = (undefined *)((ulong)puStack_378 & 0xffffffffffffff00);
  uStack_340 = uStack_340 & 0xffffffffffffff00;
  auStack_4d0[0] = 0x3fe66666;
  puStack_338 = (undefined *)lVar1;
  func_0x0001074e3a08();
  func_0x0001074e3a00();
  auStack_4d0[0] = 0;
  uVar4 = uVar3;
  func_0x0001074e3a08();
  func_0x0001074e3a00();
  auStack_4d0[0] = 0x3f800000;
  uVar6 = uVar4;
  func_0x0001074e3a08();
  func_0x0001074e3a00();
  auStack_4d0[0] = 0x42137ae1;
  uVar5 = uVar6;
  func_0x0001074e3a08();
  func_0x0001074e3a00();
  *(undefined4 *)(param_2 + 0x250) = uVar3;
  *(undefined4 *)(param_2 + 0x254) = uVar4;
  *(undefined4 *)(param_2 + 600) = uVar6;
  *(undefined4 *)(param_2 + 0x25c) = uVar5;
  func_0x00010724b3d8(&puStack_378);
  uVar5 = 0x3f800000;
  fVar7 = 1.0 / *(float *)(param_2 + 0x250);
  if (*(float *)(param_2 + 0x250) == 0.0) {
    fVar7 = 1.0;
  }
  *(float *)(param_2 + 0x2d0) = fVar7;
  *(bool *)(param_2 + 0x2dc) = *(int *)(param_2 + 0xb8) != 0;
  if (*(int *)(param_2 + 0xb8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x254);
  }
  *(undefined4 *)(param_2 + 0x2e0) = uVar6;
  if (*(int *)(param_2 + 0x110) != 0) {
    uVar5 = *(undefined4 *)(param_2 + 600);
  }
  *(undefined4 *)(param_2 + 0x2e4) = uVar5;
  *(float *)(param_2 + 0x2e8) = *(float *)(param_2 + 0x25c) * 0.017453292;
  func_0x000107267da8(auStack_1e8);
  puVar2 = auStack_488;
  func_0x00010726b264();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_1073dd4c4(&puStack_430);
  FUN_1073dd4c4(&puStack_3f8);
  FUN_1073dd4c4(auStack_3c0);
  func_0x000107267da8(auStack_1e8);
  puVar2 = auStack_488;
  func_0x00010726b264();
  func_0x0001074e3a14();
  if (puVar2[0x60] == '\x01') {
    func_0x0001074e38d8();
  }
  else {
    FUN_1074e3914();
  }
  return puVar2;
}



/* Entry: 1074e37b8; end: 1074e37eb;  */

long FUN_1074e37b8(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x0001074e38d8();
  }
  else {
    FUN_1074e3914();
  }
  return param_1;
}



/* Entry: 1074e37ec; end: 1074e3803;  */

void FUN_1074e37ec(long param_1)

{
  char cVar1;
  char *extraout_x8;
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  cVar1 = (char)param_1 + '\x10';
  FUN_1074e385c();
  *extraout_x8 = cVar1;
  *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined8 *)(extraout_x8 + 8) = *(undefined8 *)(param_1 + 0x2d4);
  extraout_x8[0x10] = *(char *)(param_1 + 0x2dc);
  *(undefined8 *)(extraout_x8 + 0x14) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined4 *)(extraout_x8 + 0x1c) = *(undefined4 *)(param_1 + 0x2e8);
  return;
}



/* Entry: 1074e3804; end: 1074e385b;  */

void FUN_1074e3804(char *param_1,long param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2 + '\x10';
  FUN_1074e385c();
  *param_1 = cVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x2d4);
  param_1[0x10] = *(char *)(param_2 + 0x2dc);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x2e8);
  return;
}



/* Entry: 1074e385c; end: 1074e387b;  */

byte FUN_1074e385c(long param_1)

{
  return *(byte *)(param_1 + 0x60) | *(byte *)(param_1 + 8) |
         *(byte *)(param_1 + 0xb8) | *(byte *)(param_1 + 0x110);
}



/* Entry: 1074e387c; end: 1074e3893;  */

/* WARNING: Possible PIC construction at 0x0001074e38a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e38c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074e38ac) */
/* WARNING: Removing unreachable block (ram,0x0001074e38c4) */

long FUN_1074e387c(long param_1)

{
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010743b73c();
  FUN_10743390c();
  func_0x00010743bbb8();
  func_0x00010727df88();
  return param_1;
}



/* Entry: 1074e3894; end: 1074e3913;  */

/* WARNING: Possible PIC construction at 0x0001074e38a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e38c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074e38ac) */
/* WARNING: Removing unreachable block (ram,0x0001074e38c4) */

undefined8 FUN_1074e3894(undefined8 param_1)

{
  func_0x00010743b73c();
  FUN_10743390c();
  func_0x00010743bbb8();
  func_0x00010727df88();
  return param_1;
}



/* Entry: 1074e3914; end: 1074e392f;  */

void FUN_1074e3914(long param_1)

{
  FUN_1074e3930();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1074e3930; end: 1074e396b;  */

long FUN_1074e3930(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10732f758();
  FUN_10732f758(lVar1 + 0x20,param_2 + 0x20);
  FUN_10732f758(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



/* Entry: 1074e396c; end: 1074e39c7;  */

long FUN_1074e396c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107432f04();
  func_0x000107432f04(lVar1 + 0x58,param_3);
  func_0x000107432f04(param_1 + 0xb0,param_4);
  func_0x000107432f04(param_1 + 0x108,param_5);
  return param_1;
}



/* Entry: 1074e39c8; end: 1074e3a77;  */

undefined4
FUN_1074e39c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}



/* Entry: 1074e3a78; end: 1074e3ab3;  */

void FUN_1074e3a78(long *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1074e3d18(param_1 + 3,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001074e3ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}



/* Entry: 1074e3ab4; end: 1074e3acf;  */

/* WARNING: Possible PIC construction at 0x00010777fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777fc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777fc9c) */

void FUN_1074e3ab4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [120];
  uint uStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_2 + 0x18);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001073730ac(param_1);
  lVar4 = *(long *)(lVar4 + 0xb0);
  if (lVar4 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x000107753050(auStack_b8,lVar4,param_3,&uStack_100);
    func_0x00010724b3d8(&uStack_100);
    if (uStack_40 == 1) {
      puVar2 = auStack_b8;
      FUN_1073405dc();
      if (*(int *)(puVar2 + 0x68) == 8) {
        lVar1 = (*(long **)(puVar2 + 8))[1];
        for (lVar4 = **(long **)(puVar2 + 8); lVar4 != lVar1; lVar4 = lVar4 + 0x70) {
          if (*(int *)(lVar4 + 0x68) == 3) {
            lVar3 = lVar4;
            FUN_10732393c(lVar4);
            FUN_107372e84(param_1,lVar3);
          }
        }
      }
      else if (*(int *)(puVar2 + 0x68) == 3) {
        FUN_107372e84(param_1,puVar2 + 8);
      }
    }
  }
  if (uStack_40 != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f18)[uStack_40]);
  }
  return;
}



/* Entry: 1074e3ad0; end: 1074e3b27;  */

undefined8 FUN_1074e3ad0(long param_1,undefined8 *param_2)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(*(long *)*param_2 + 0x60))(auStack_30);
  FUN_107486e5c(param_1 + 0x28,auStack_30);
  func_0x0001073ad4a0(auStack_30);
  FUN_1074e3b28(param_1);
  return 0;
}



/* Entry: 1074e3b28; end: 1074e3b93;  */

void FUN_1074e3b28(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(*(undefined8 **)(param_1 + 0x28))[1];
  for (plVar3 = (long *)**(undefined8 **)(param_1 + 0x28); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    plVar2 = *(long **)(*plVar3 + 0x220);
    (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 0x18));
    if (plVar2 != (long *)0x0) {
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | *(byte *)(plVar2[2] + 0x18);
    }
  }
  return;
}



/* Entry: 1074e3b94; end: 1074e3c0b;  */

void FUN_1074e3b94(undefined4 *param_1,long param_2)

{
  *param_1 = (int)*(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x24] = 0;
  return;
}



/* Entry: 1074e3c0c; end: 1074e3c87;  */

void FUN_1074e3c0c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = (long *)(param_2 + 0x48);
  while (lVar2 = *plVar1, lVar2 != param_2 + 0x40) {
    auVar3 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0x10),*(undefined1 (*) [16])(lVar2 + 0x10),8,1)
    ;
    uStack_38 = auVar3._8_8_;
    uStack_40 = auVar3._0_8_;
    FUN_1074c3d90(param_1,&uStack_40);
    plVar1 = (long *)(lVar2 + 8);
  }
  return;
}



/* Entry: 1074e3c88; end: 1074e3c97;  */

void FUN_1074e3c88(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 1074e3c98; end: 1074e3cdf;  */

void FUN_1074e3c98(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x220) + 0x20))
            (*(long **)(param_2 + 0x220),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1074e3ce0; end: 1074e3d17;  */

long * FUN_1074e3ce0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if ((plVar1 != (long *)0x0) && ((long *)*plVar1 != (long *)plVar1[1])) {
    plVar1 = *(long **)(*(long *)*plVar1 + 0x218);
                    /* WARNING: Could not recover jumptable at 0x0001074e3d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))();
    return plVar1;
  }
  return (long *)0x1;
}



/* Entry: 1074e3d18; end: 1074e3d5b;  */

undefined8 * FUN_1074e3d18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001073ad4c4(&uStack_30);
  return param_1;
}



/* Entry: 1074e3d5c; end: 1074e47f3;  */

void FUN_1074e3d5c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_1068 [56];
  undefined1 auStack_1030 [88];
  undefined1 auStack_fd8 [56];
  undefined1 auStack_fa0 [88];
  undefined1 auStack_f48 [56];
  undefined1 auStack_f10 [88];
  undefined1 auStack_eb8 [56];
  undefined1 auStack_e80 [88];
  undefined1 auStack_e28 [56];
  undefined1 auStack_df0 [88];
  undefined1 auStack_d98 [56];
  undefined1 auStack_d60 [88];
  undefined1 auStack_d08 [56];
  undefined1 auStack_cd0 [88];
  undefined1 auStack_c78 [56];
  undefined1 auStack_c40 [88];
  undefined1 auStack_be8 [56];
  undefined1 auStack_bb0 [88];
  undefined1 auStack_b58 [56];
  undefined1 auStack_b20 [88];
  undefined1 auStack_ac8 [56];
  undefined1 auStack_a90 [88];
  undefined1 auStack_a38 [56];
  undefined1 auStack_a00 [88];
  undefined1 auStack_9a8 [56];
  undefined1 auStack_970 [88];
  undefined1 auStack_918 [56];
  undefined1 auStack_8e0 [88];
  undefined1 auStack_888 [56];
  undefined1 auStack_850 [88];
  undefined1 auStack_7f8 [56];
  undefined1 auStack_7c0 [88];
  undefined1 auStack_768 [56];
  undefined1 auStack_730 [88];
  undefined1 auStack_6d8 [56];
  undefined1 auStack_6a0 [8];
  undefined1 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [56];
  undefined1 auStack_648 [72];
  undefined1 auStack_600 [104];
  undefined1 auStack_598 [8];
  undefined1 auStack_590 [112];
  undefined1 auStack_520 [152];
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [152];
  undefined1 auStack_3e8 [192];
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [152];
  undefined1 auStack_288 [192];
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [104];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [80];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001074e9474();
  uStack_58 = extraout_x8;
  FUN_10747c890();
  *param_1 = &PTR_FUN_1109b5bd0;
  lVar2 = *param_2;
  param_1[0xc] = param_2[1];
  param_1[0xb] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 0xd) = param_4;
  lVar2 = param_1[0xb];
  FUN_1074e808c(auStack_6d8,lVar2);
  auStack_6a0[0] = 0;
  uStack_698 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  FUN_1074e759c(auStack_680,auStack_6d8);
  FUN_1074e813c(auStack_118,lVar2 + 0x60);
  auStack_c8[0] = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  FUN_1074e7910(auStack_a8,auStack_118);
  FUN_107438188(auStack_1c8,lVar2 + 0xd8);
  func_0x00010743b05c(auStack_180,auStack_1c8);
  func_0x00010727d614(auStack_768,lVar2 + 0x148);
  func_0x00010743b0a8(auStack_730,auStack_768);
  func_0x00010727d614(auStack_7f8,lVar2 + 0x1a8);
  func_0x00010743b0a8(auStack_7c0,auStack_7f8);
  func_0x00010727d614(auStack_888,lVar2 + 0x208);
  func_0x00010743b0a8(auStack_850,auStack_888);
  func_0x00010727d614(auStack_918,lVar2 + 0x268);
  func_0x00010743b0a8(auStack_8e0,auStack_918);
  func_0x00010727d614(auStack_9a8,lVar2 + 0x2c8);
  func_0x00010743b0a8(auStack_970,auStack_9a8);
  func_0x00010727d614(auStack_a38,lVar2 + 0x328);
  func_0x00010743b0a8(auStack_a00,auStack_a38);
  func_0x00010727d614(auStack_ac8,lVar2 + 0x388);
  func_0x00010743b0a8(auStack_a90,auStack_ac8);
  FUN_107483560(auStack_320,lVar2 + 0x3f0);
  FUN_1074835f0(auStack_288,auStack_328);
  func_0x00010727d614(auStack_b58,lVar2 + 0x4b0);
  func_0x00010743b0a8(auStack_b20,auStack_b58);
  FUN_107483560(auStack_480,lVar2 + 0x518);
  FUN_1074835f0(auStack_3e8,auStack_488);
  func_0x00010727d614(auStack_be8,lVar2 + 0x5d8);
  func_0x00010743b0a8(auStack_bb0,auStack_be8);
  func_0x00010727d614(auStack_c78,lVar2 + 0x638);
  func_0x00010743b0a8(auStack_c40,auStack_c78);
  func_0x00010727fe7c(auStack_d08,lVar2 + 0x698);
  func_0x00010748d6d8(auStack_cd0,auStack_d08);
  func_0x00010727d614(auStack_d98,lVar2 + 0x6f8);
  func_0x00010743b0a8(auStack_d60,auStack_d98);
  func_0x00010727d614(auStack_e28,lVar2 + 0x758);
  func_0x00010743b0a8(auStack_df0,auStack_e28);
  func_0x00010727d614(auStack_eb8,lVar2 + 0x7b8);
  func_0x00010743b0a8(auStack_e80,auStack_eb8);
  FUN_1073243b8(auStack_590,lVar2 + 0x820);
  func_0x00010743b084(auStack_520,auStack_598);
  func_0x00010727d614(auStack_f48,lVar2 + 0x8b8);
  func_0x00010743b0a8(auStack_f10,auStack_f48);
  FUN_107438188(auStack_648,lVar2 + 0x918);
  func_0x00010743b05c(auStack_600,auStack_648);
  func_0x00010727d614(auStack_fd8,lVar2 + 0x988);
  func_0x00010743b0a8(auStack_fa0,auStack_fd8);
  func_0x00010727d614(auStack_1068,lVar2 + 0x9e8);
  func_0x00010743b0a8(auStack_1030,auStack_1068);
  FUN_1074e81e8(unaff_x19 + 0x70,auStack_6a0,auStack_c8,auStack_180,auStack_730,auStack_7c0,
                auStack_850,auStack_8e0,auStack_970,auStack_a00,auStack_a90,auStack_288,auStack_b20,
                auStack_3e8,auStack_bb0,auStack_c40,auStack_cd0,auStack_d60,auStack_df0,auStack_e80,
                auStack_520,auStack_f10,auStack_600,auStack_fa0,auStack_1030);
  func_0x000107410c2c(auStack_1030);
  func_0x000107266a30(auStack_1068);
  func_0x000107410c2c(auStack_fa0);
  func_0x000107266a30(auStack_fd8);
  FUN_1074335c8(auStack_600);
  FUN_107432d98(auStack_648);
  func_0x000107410c2c(auStack_f10);
  func_0x000107266a30(auStack_f48);
  FUN_1074338c4(auStack_520);
  FUN_10732442c(auStack_590);
  func_0x000107410c2c(auStack_e80);
  func_0x000107266a30(auStack_eb8);
  func_0x000107410c2c(auStack_df0);
  func_0x000107266a30(auStack_e28);
  func_0x000107410c2c(auStack_d60);
  func_0x000107266a30(auStack_d98);
  func_0x00010748a9e4(auStack_cd0);
  func_0x00010727fc1c(auStack_d08);
  func_0x000107410c2c(auStack_c40);
  func_0x000107266a30(auStack_c78);
  func_0x000107410c2c(auStack_bb0);
  func_0x000107266a30(auStack_be8);
  func_0x000107482a54(auStack_3e8);
  func_0x0001072ca37c(auStack_480);
  func_0x000107410c2c(auStack_b20);
  func_0x000107266a30(auStack_b58);
  func_0x000107482a54(auStack_288);
  func_0x0001072ca37c(auStack_320);
  func_0x0001074e96dc();
  func_0x000107266a30(auStack_ac8);
  func_0x000107410c2c(auStack_a00);
  func_0x000107266a30(auStack_a38);
  func_0x000107410c2c(auStack_970);
  func_0x000107266a30(auStack_9a8);
  func_0x000107410c2c(auStack_8e0);
  func_0x000107266a30(auStack_918);
  func_0x000107410c2c(auStack_850);
  func_0x000107266a30(auStack_888);
  func_0x000107410c2c(auStack_7c0);
  func_0x000107266a30(auStack_7f8);
  func_0x000107410c2c(auStack_730);
  func_0x000107266a30(auStack_768);
  FUN_1074335c8(auStack_180);
  FUN_107432d98(auStack_1c8);
  func_0x0001074e9668();
  FUN_1074e71ac(auStack_118);
  FUN_1074e7274(auStack_6a0);
  FUN_1074e729c(auStack_6d8);
  _bzero(unaff_x19 + 0x9f8,0x2f8);
  FUN_1074e83cc(unaff_x19 + 0xc58);
  _bzero(unaff_x19 + 0xcf0,0xd8);
  FUN_1074e83cc(unaff_x19 + 0xd30);
  _bzero(unaff_x19 + 0xdc8,0x1c8);
  FUN_1073dd458(unaff_x19 + 0xf20);
  _bzero(unaff_x19 + 0x1084,0xa4);
  _bzero(unaff_x19 + 0xf90,0xf1);
  FUN_1073df1c8(unaff_x19 + 0x10c8);
  *(undefined4 *)(unaff_x19 + 0x1128) = 0;
  *(undefined8 *)(unaff_x19 + 0x1138) = 0;
  *(undefined8 *)(unaff_x19 + 0x1130) = 0;
  *(undefined8 *)(unaff_x19 + 0x1148) = 0;
  *(undefined8 *)(unaff_x19 + 0x1140) = 0;
  *(undefined8 *)(unaff_x19 + 0x1158) = 0;
  *(undefined8 *)(unaff_x19 + 0x1150) = 0;
  *(undefined8 *)(unaff_x19 + 0x1168) = 0;
  *(undefined8 *)(unaff_x19 + 0x1160) = 0;
  *(undefined8 *)(unaff_x19 + 0x1178) = 0;
  *(undefined8 *)(unaff_x19 + 0x1170) = 0;
  *(undefined8 *)(unaff_x19 + 0x1188) = 0;
  *(undefined8 *)(unaff_x19 + 0x1180) = 0;
  FUN_1073df1c8(unaff_x19 + 0x1130);
  *(undefined4 *)(unaff_x19 + 0x119c) = 0;
  *(undefined8 *)(unaff_x19 + 0x11a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1190) = 0;
  *(undefined1 *)(unaff_x19 + 0x1198) = 0;
  func_0x000104c2f64c(unaff_x19 + 0x11a8);
  *(undefined4 *)(unaff_x19 + 0x11f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x11f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x11e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x11e0) = 0;
  *(undefined1 *)(unaff_x19 + 0x1200) = 0;
  *(undefined1 *)(unaff_x19 + 0x1260) = 0;
  *(undefined8 *)(unaff_x19 + 0x1268) = 0;
  *(undefined8 *)(unaff_x19 + 0x1278) = 0;
  *(undefined8 *)(unaff_x19 + 0x1270) = 0;
  *(undefined8 *)(unaff_x19 + 0x1288) = 0;
  *(undefined8 *)(unaff_x19 + 0x1280) = 0x3ecccccd3f800000;
  *(undefined8 *)(unaff_x19 + 0x1290) = 0x42000000;
  *(undefined4 *)(unaff_x19 + 0x1298) = 0;
  func_0x0001074e977c(unaff_x19 + 0x12a0);
  *(undefined1 *)(unaff_x19 + 0x12d8) = 0;
  *(undefined1 *)(unaff_x19 + 0x12f0) = 0;
  *(undefined2 *)(unaff_x19 + 0x12f8) = 0;
  *(undefined4 *)(unaff_x19 + 0x1300) = 0;
  func_0x0001074e977c(unaff_x19 + 0x1308);
  *(undefined1 *)(unaff_x19 + 0x1340) = 0;
  *(undefined1 *)(unaff_x19 + 0x1358) = 0;
  *(undefined2 *)(unaff_x19 + 0x1360) = 0;
  *(undefined8 *)(unaff_x19 + 0x1370) = 0;
  *(undefined8 *)(unaff_x19 + 0x1368) = 0;
  *(undefined4 *)(unaff_x19 + 0x1378) = 0;
  iVar1 = 0x104;
  _bzero(unaff_x19 + 0x1380);
  *(undefined1 *)(unaff_x19 + 0x1484) = 1;
  *(undefined8 *)(unaff_x19 + 0x1488) = 0;
  *(undefined8 *)(unaff_x19 + 0x1498) = 0;
  *(undefined8 *)(unaff_x19 + 0x1490) = 0;
  *(undefined8 *)(unaff_x19 + 0x149d) = 0;
  lVar2 = unaff_x19 + 0x14a8;
  func_0x0001074e977c(lVar2);
  *(undefined8 *)(unaff_x19 + 0x1514) = 0;
  *(undefined8 *)(unaff_x19 + 0x150c) = 0;
  *(undefined8 *)(unaff_x19 + 0x1508) = 0;
  *(undefined8 *)(unaff_x19 + 0x1500) = 0;
  *(undefined8 *)(unaff_x19 + 0x14f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x14f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x14e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x14e0) = 0;
  func_0x0001074e9460(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar1 == 0) goto LAB_1074e46a4;
  func_0x00010726b164(unaff_x19 + 0x1130);
  func_0x00010726b164(unaff_x19 + 0x1138369c0);
  func_0x000104bd46a0(lVar2);
  func_0x000107266a30(auStack_1068);
  func_0x000107410c2c(auStack_fa0);
  func_0x000107266a30(auStack_fd8);
  FUN_1074335c8(auStack_600);
  FUN_107432d98(auStack_648);
  do {
    func_0x000107410c2c(auStack_f10);
    func_0x000107266a30(auStack_f48);
    FUN_1074338c4(auStack_520);
    FUN_10732442c(auStack_590);
    func_0x000107410c2c(auStack_e80);
    func_0x000107266a30(auStack_eb8);
    func_0x000107410c2c(auStack_df0);
    func_0x000107266a30(auStack_e28);
    func_0x000107410c2c(auStack_d60);
    func_0x000107266a30(auStack_d98);
    func_0x00010748a9e4(auStack_cd0);
    func_0x00010727fc1c(auStack_d08);
    func_0x000107410c2c(auStack_c40);
    func_0x000107266a30(auStack_c78);
    func_0x000107410c2c(auStack_bb0);
    func_0x000107266a30(auStack_be8);
    func_0x000107482a54(auStack_3e8);
    func_0x0001072ca37c(auStack_480);
    func_0x000107410c2c(auStack_b20);
    func_0x000107266a30(auStack_b58);
    func_0x000107482a54(auStack_288);
    func_0x0001072ca37c(0x1138);
    func_0x0001074e96dc();
    func_0x000107266a30(auStack_ac8);
    func_0x000107410c2c(auStack_a00);
    func_0x000107266a30(auStack_a38);
    func_0x000107410c2c(auStack_970);
    func_0x000107266a30(auStack_9a8);
    func_0x000107410c2c(auStack_8e0);
    func_0x000107266a30(auStack_918);
    func_0x000107410c2c(auStack_850);
    func_0x000107266a30(auStack_888);
    func_0x000107410c2c(auStack_7c0);
    func_0x000107266a30(auStack_7f8);
    func_0x000107410c2c(auStack_730);
    func_0x000107266a30(auStack_768);
    FUN_1074335c8(auStack_180);
    FUN_107432d98(auStack_1c8);
    func_0x0001074e9668();
    FUN_1074e71ac(auStack_118);
    FUN_1074e7274(auStack_6a0);
    FUN_1074e729c(auStack_6d8);
    func_0x000107410da4(0x1138369c0);
    FUN_10747c918();
LAB_1074e46a4:
    __Unwind_Resume(lVar2);
  } while( true );
}



/* Entry: 1074e47f4; end: 1074e489b;  */

undefined8 * FUN_1074e47f4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  *param_1 = &PTR_FUN_1109b5bd0;
  func_0x0001074e8458(param_1 + 0x29e);
  FUN_1074e6eac(param_1 + 0x295);
  FUN_1074e83f4(param_1 + 0x26e);
  FUN_107439fd0(param_1 + 0x26d);
  func_0x0001074e6ed8(param_1 + 0x261);
  func_0x0001074e6ed8(param_1 + 0x254);
  FUN_107410b98(param_1 + 0x240);
  func_0x0001074e6f04(param_1 + 0x210);
  func_0x0001074e6f38(param_1 + 0x13f);
  FUN_1074e70ac(param_1 + 0xe);
  func_0x000107410da4(param_1 + 0xb);
  puVar4 = param_1 + 5;
  *param_1 = &PTR_DAT_1109b3908;
  func_0x000107284284(auStack_40,puVar4);
  func_0x000107469f18(auStack_50,param_1 + 8);
  puVar2 = puVar4;
  func_0x0001072842e4();
  if ((int)puVar2 != 0) {
    puVar2 = puVar4;
    func_0x00010728433c();
    puVar3 = puVar2;
    FUN_1073af260();
    if (puVar2 == puVar3) {
      iVar1 = (int)param_1 + 0x40;
      FUN_107469f78();
      if (iVar1 != 0) {
        func_0x00010747bd38(param_1[1],param_1);
      }
    }
  }
  func_0x000107270b00(auStack_50);
  func_0x000107270b00(auStack_40);
  func_0x00010725b1d4(param_1 + 8);
  func_0x00010725b1d4(puVar4);
  func_0x00010747fd60(param_1 + 2);
  return param_1;
}



/* Entry: 1074e489c; end: 1074e489f;  */

undefined8 * FUN_1074e489c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  *param_1 = &PTR_FUN_1109b5bd0;
  func_0x0001074e8458(param_1 + 0x29e);
  FUN_1074e6eac(param_1 + 0x295);
  FUN_1074e83f4(param_1 + 0x26e);
  FUN_107439fd0(param_1 + 0x26d);
  func_0x0001074e6ed8(param_1 + 0x261);
  func_0x0001074e6ed8(param_1 + 0x254);
  FUN_107410b98(param_1 + 0x240);
  func_0x0001074e6f04(param_1 + 0x210);
  func_0x0001074e6f38(param_1 + 0x13f);
  FUN_1074e70ac(param_1 + 0xe);
  func_0x000107410da4(param_1 + 0xb);
  puVar4 = param_1 + 5;
  *param_1 = &PTR_DAT_1109b3908;
  func_0x000107284284(auStack_40,puVar4);
  func_0x000107469f18(auStack_50,param_1 + 8);
  puVar2 = puVar4;
  func_0x0001072842e4();
  if ((int)puVar2 != 0) {
    puVar2 = puVar4;
    func_0x00010728433c();
    puVar3 = puVar2;
    FUN_1073af260();
    if (puVar2 == puVar3) {
      iVar1 = (int)param_1 + 0x40;
      FUN_107469f78();
      if (iVar1 != 0) {
        func_0x00010747bd38(param_1[1],param_1);
      }
    }
  }
  func_0x000107270b00(auStack_50);
  func_0x000107270b00(auStack_40);
  func_0x00010725b1d4(param_1 + 8);
  func_0x00010725b1d4(puVar4);
  func_0x00010747fd60(param_1 + 2);
  return param_1;
}



/* Entry: 1074e48a0; end: 1074e48b3;  */

void FUN_1074e48a0(void)

{
  FUN_1074e47f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074e48b4; end: 1074e4943;  */

void FUN_1074e48b4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  long *plVar11;
  undefined1 auStack_1d48 [88];
  undefined1 auStack_1cf0 [88];
  undefined1 auStack_1c98 [88];
  undefined1 auStack_1c40 [88];
  undefined1 auStack_1be8 [88];
  undefined1 auStack_1b90 [88];
  undefined1 auStack_1b38 [88];
  undefined1 auStack_1ae0 [88];
  undefined1 auStack_1a88 [88];
  undefined1 auStack_1a30 [88];
  undefined1 auStack_19d8 [88];
  undefined1 auStack_1980 [88];
  undefined1 auStack_1928 [88];
  undefined1 auStack_18d0 [88];
  undefined1 auStack_1878 [88];
  undefined1 auStack_1820 [88];
  undefined1 auStack_17c8 [88];
  undefined1 auStack_1770 [88];
  undefined1 auStack_1718 [88];
  undefined1 auStack_16c0 [88];
  undefined1 auStack_1668 [88];
  undefined1 auStack_1610 [88];
  undefined1 auStack_15b8 [88];
  undefined1 auStack_1560 [88];
  undefined1 auStack_1508 [88];
  undefined1 auStack_14b0 [88];
  undefined1 auStack_1458 [88];
  undefined1 auStack_1400 [88];
  undefined1 auStack_13a8 [88];
  undefined1 auStack_1350 [88];
  undefined1 auStack_12f8 [88];
  undefined1 auStack_12a0 [88];
  undefined1 auStack_1248 [88];
  undefined1 auStack_11f0 [88];
  undefined1 auStack_1198 [88];
  undefined1 auStack_1140 [8];
  undefined1 uStack_1138;
  long lStack_1130;
  long lStack_1128;
  undefined1 auStack_1120 [56];
  undefined1 auStack_10e8 [104];
  undefined1 auStack_1080 [104];
  undefined1 auStack_1018 [152];
  undefined1 auStack_f80 [8];
  undefined1 uStack_f78;
  undefined1 auStack_ee8 [192];
  undefined1 auStack_e28 [192];
  undefined1 auStack_d68 [192];
  undefined1 auStack_ca8 [192];
  undefined1 auStack_be8 [104];
  undefined1 auStack_b80 [104];
  undefined1 auStack_b18 [112];
  undefined1 auStack_aa8 [8];
  undefined1 uStack_aa0;
  long lStack_a98;
  long lStack_a90;
  undefined1 auStack_a88 [80];
  undefined8 uStack_a38;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined1 uStack_9b8;
  long alStack_9b0 [305];
  undefined8 uStack_28;
  
  func_0x0001074e9474();
  uStack_9e0 = *param_2;
  uStack_9b8 = *(undefined1 *)(param_2 + 5);
  uStack_9d0 = 0;
  uStack_9d8 = 0;
  uStack_9c0 = 0;
  uStack_9c8 = 0;
  lVar9 = unaff_x19 + 0x70;
  uStack_28 = extraout_x8;
  FUN_1074e4944(alStack_9b0,*(undefined8 *)(param_1 + 0x58),&uStack_9e0,lVar9);
  plVar8 = alStack_9b0;
  FUN_1074e7364(unaff_x19 + 0x70);
  FUN_1074e70ac();
  func_0x0001074e9460(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar5 = alStack_9b0;
  FUN_1074e70ac();
  func_0x0001074e9528();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9;
  func_0x0001074e94a0();
  uStack_a38 = extraout_x8_01;
  FUN_1074e7560(auStack_1198,lVar10);
  FUN_1074e808c(auStack_e28,plVar5);
  func_0x0001074e9698();
  FUN_1074e7560();
  plVar11 = plVar8 + 1;
  plVar1 = plVar5 + 7;
  if ((char)plVar5[8] == '\0') {
    plVar1 = plVar11;
  }
  lStack_1128 = *plVar1;
  uVar2 = *(uint *)(plVar1 + 1);
  plVar1 = plVar5 + 7;
  if ((char)plVar5[10] == '\0') {
    plVar1 = plVar11;
  }
  lStack_1130 = plVar1[2];
  uVar3 = *(uint *)(plVar1 + 3);
  auStack_1140[0] = 0;
  uStack_1138 = 0;
  if ((uVar3 & 1) == 0) {
    lStack_1130 = 0;
  }
  lStack_1130 = lStack_1130 + *plVar8;
  if ((uVar2 & 1) == 0) {
    lStack_1128 = 0;
  }
  lStack_1128 = lStack_1130 + lStack_1128;
  FUN_1074e759c(auStack_1120,auStack_e28);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    FUN_1074e7534(auStack_f80,auStack_ca8);
    uStack_f78 = 1;
    FUN_1074e74bc(auStack_1140,auStack_f80);
    FUN_1074e72ec(auStack_f80);
  }
  func_0x0001074e9698();
  FUN_1074e7274();
  FUN_1074e729c(auStack_e28);
  FUN_1074e78d4(auStack_b18,lVar9 + 0x58);
  FUN_1074e813c(auStack_e28,plVar5 + 0xc);
  func_0x0001074e9698();
  FUN_1074e78d4();
  plVar1 = plVar5 + 0x16;
  if ((char)plVar5[0x17] == '\0') {
    plVar1 = plVar11;
  }
  lStack_a90 = *plVar1;
  uVar2 = *(uint *)(plVar1 + 1);
  plVar1 = plVar5 + 0x16;
  if ((char)plVar5[0x19] == '\0') {
    plVar1 = plVar11;
  }
  lStack_a98 = plVar1[2];
  uVar3 = *(uint *)(plVar1 + 3);
  auStack_aa8[0] = 0;
  uStack_aa0 = 0;
  if ((uVar3 & 1) == 0) {
    lStack_a98 = 0;
  }
  lStack_a98 = lStack_a98 + *plVar8;
  uVar4 = (uVar2 & 1) == 0;
  if ((bool)uVar4) {
    lStack_a90 = 0;
  }
  lStack_a90 = lStack_a98 + lStack_a90;
  FUN_1074e7910(auStack_a88,auStack_e28);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    FUN_1074e78a8(auStack_f80,auStack_ca8);
    uStack_f78 = 1;
    FUN_1074e7830(auStack_aa8,auStack_f80);
    FUN_1074e71fc(auStack_f80);
  }
  func_0x0001074e9698();
  func_0x0001074e7184();
  FUN_1074e71ac(auStack_e28);
  func_0x000107432c64(auStack_be8,lVar9 + 200);
  FUN_107437f20(auStack_b80,plVar5 + 0x1b,plVar8,auStack_be8);
  func_0x000107432f04(auStack_1248,lVar9 + 0x130);
  func_0x0001074e9520(auStack_11f0,plVar5 + 0x29);
  func_0x000107432f04(auStack_12f8,lVar9 + 0x188);
  func_0x0001074e9520(auStack_12a0,plVar5 + 0x35);
  func_0x000107432f04(auStack_13a8,lVar9 + 0x1e0);
  func_0x0001074e9520(auStack_1350,plVar5 + 0x41);
  func_0x000107432f04(auStack_1458,lVar9 + 0x238);
  func_0x0001074e9520(auStack_1400,plVar5 + 0x4d);
  func_0x000107432f04(auStack_1508,lVar9 + 0x290);
  func_0x0001074e9520(auStack_14b0,plVar5 + 0x59);
  func_0x000107432f04(auStack_15b8,lVar9 + 0x2e8);
  func_0x0001074e9520(auStack_1560,plVar5 + 0x65);
  func_0x000107432f04(auStack_1668,lVar9 + 0x340);
  func_0x0001074e9520(auStack_1610,plVar5 + 0x71);
  func_0x00010748303c(auStack_d68,lVar9 + 0x398);
  FUN_10748374c(auStack_ca8,plVar5 + 0x7d,plVar8,auStack_d68);
  func_0x000107432f04(auStack_1718,lVar9 + 0x458);
  func_0x0001074e9520(auStack_16c0,plVar5 + 0x96);
  func_0x00010748303c(auStack_ee8,lVar9 + 0x4b0);
  FUN_10748374c(auStack_e28,plVar5 + 0xa2,plVar8,auStack_ee8);
  func_0x000107432f04(auStack_17c8,lVar9 + 0x570);
  func_0x0001074e9520(auStack_1770,plVar5 + 0xbb);
  func_0x000107432f04(auStack_1878,lVar9 + 0x5c8);
  func_0x0001074e9520(auStack_1820,plVar5 + 199);
  func_0x00010748ad58(auStack_1928,lVar9 + 0x620);
  FUN_10748dc44(auStack_18d0,plVar5 + 0xd3,plVar8,auStack_1928);
  func_0x000107432f04(auStack_19d8,lVar9 + 0x678);
  func_0x0001074e9520(auStack_1980,plVar5 + 0xdf);
  func_0x000107432f04(auStack_1a88,lVar9 + 0x6d0);
  func_0x0001074e9520(auStack_1a30,plVar5 + 0xeb);
  func_0x000107432f04(auStack_1b38,lVar9 + 0x728);
  func_0x0001074e9520(auStack_1ae0,plVar5 + 0xf7);
  func_0x000107432e2c(auStack_1018,lVar9 + 0x780);
  FUN_107437ff8(auStack_f80,plVar5 + 0x103,plVar8,auStack_1018);
  func_0x000107432f04(auStack_1be8,lVar9 + 0x818);
  func_0x0001074e9520(auStack_1b90,plVar5 + 0x117);
  func_0x000107432c64(auStack_10e8,lVar9 + 0x870);
  FUN_107437f20(auStack_1080,plVar5 + 0x123,plVar8,auStack_10e8);
  func_0x000107432f04(auStack_1c98,lVar9 + 0x8d8);
  func_0x0001074e9520(auStack_1c40,plVar5 + 0x131);
  func_0x000107432f04(auStack_1d48,lVar9 + 0x930);
  func_0x0001074e9520(auStack_1cf0,plVar5 + 0x13d);
  puVar6 = auStack_1140;
  FUN_1074e81e8(extraout_x8_00,puVar6,auStack_aa8,auStack_b80,auStack_11f0,auStack_12a0,auStack_1350
                ,auStack_1400,auStack_14b0,auStack_1560,auStack_1610,auStack_ca8,auStack_16c0,
                auStack_e28,auStack_1770,auStack_1820,auStack_18d0,auStack_1980,auStack_1a30,
                auStack_1ae0,auStack_f80,auStack_1b90,auStack_1080,auStack_1c40,auStack_1cf0);
  iVar7 = (int)puVar6;
  func_0x000107410c2c(auStack_1cf0);
  func_0x000107410c2c(auStack_1d48);
  func_0x000107410c2c(auStack_1c40);
  func_0x000107410c2c(auStack_1c98);
  FUN_1074335c8(auStack_1080);
  FUN_1074335c8(auStack_10e8);
  func_0x000107410c2c(auStack_1b90);
  func_0x000107410c2c(auStack_1be8);
  FUN_1074338c4(auStack_f80);
  FUN_1074338c4(auStack_1018);
  func_0x000107410c2c(auStack_1ae0);
  func_0x000107410c2c(auStack_1b38);
  func_0x000107410c2c(auStack_1a30);
  func_0x000107410c2c(auStack_1a88);
  func_0x000107410c2c(auStack_1980);
  func_0x000107410c2c(auStack_19d8);
  func_0x00010748a9e4(auStack_18d0);
  func_0x00010748a9e4(auStack_1928);
  func_0x000107410c2c(auStack_1820);
  func_0x000107410c2c(auStack_1878);
  func_0x0001074e96dc();
  func_0x000107410c2c(auStack_17c8);
  func_0x000107482a54(auStack_e28);
  func_0x000107482a54(auStack_ee8);
  func_0x000107410c2c(auStack_16c0);
  func_0x000107410c2c(auStack_1718);
  func_0x0001074e9698();
  func_0x000107482a54();
  func_0x0001074e972c();
  func_0x000107410c2c(auStack_1610);
  func_0x000107410c2c(auStack_1668);
  func_0x000107410c2c(auStack_1560);
  func_0x000107410c2c(auStack_15b8);
  func_0x000107410c2c(auStack_14b0);
  func_0x000107410c2c(auStack_1508);
  func_0x000107410c2c(auStack_1400);
  func_0x000107410c2c(auStack_1458);
  func_0x000107410c2c(auStack_1350);
  func_0x000107410c2c(auStack_13a8);
  func_0x000107410c2c(auStack_12a0);
  func_0x000107410c2c(auStack_12f8);
  func_0x000107410c2c(auStack_11f0);
  func_0x000107410c2c(auStack_1248);
  func_0x0001074e9750();
  func_0x0001074e9744();
  func_0x0001074e9668();
  func_0x0001074e9738();
  FUN_1074e7274(auStack_1140);
  puVar6 = auStack_1198;
  FUN_1074e7274(puVar6);
  func_0x0001074e9460(uStack_a38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) goto LAB_1074e5184;
  func_0x000104bd46a0(puVar6);
  func_0x000107410c2c(auStack_1d48);
  func_0x000107410c2c(auStack_1c40);
  func_0x000107410c2c(auStack_1c98);
  FUN_1074335c8(auStack_1080);
  FUN_1074335c8(auStack_10e8);
  func_0x000107410c2c(auStack_1b90);
  func_0x000107410c2c(auStack_1be8);
  FUN_1074338c4(auStack_f80);
  FUN_1074338c4(auStack_1018);
  func_0x000107410c2c(auStack_1ae0);
  do {
    func_0x000107410c2c(auStack_1b38);
    func_0x000107410c2c(auStack_1a30);
    func_0x000107410c2c(auStack_1a88);
    func_0x000107410c2c(auStack_1980);
    func_0x000107410c2c(auStack_19d8);
    func_0x00010748a9e4(auStack_18d0);
    func_0x00010748a9e4(auStack_1928);
    func_0x000107410c2c(auStack_1820);
    func_0x000107410c2c(auStack_1878);
    func_0x0001074e96dc();
    func_0x000107410c2c(auStack_17c8);
    func_0x000107482a54(auStack_e28);
    func_0x000107482a54(auStack_ee8);
    func_0x000107410c2c(auStack_16c0);
    func_0x000107410c2c(auStack_1718);
    func_0x0001074e9698();
    func_0x000107482a54();
    func_0x0001074e972c();
    func_0x000107410c2c(auStack_1610);
    func_0x000107410c2c(auStack_1668);
    func_0x000107410c2c(auStack_1560);
    func_0x000107410c2c(auStack_15b8);
    func_0x000107410c2c(auStack_14b0);
    func_0x000107410c2c(auStack_1508);
    func_0x000107410c2c(auStack_1400);
    func_0x000107410c2c(auStack_1458);
    func_0x000107410c2c(auStack_1350);
    func_0x000107410c2c(auStack_13a8);
    func_0x000107410c2c(auStack_12a0);
    func_0x000107410c2c(auStack_12f8);
    func_0x000107410c2c(auStack_11f0);
    func_0x000107410c2c(auStack_1248);
    func_0x0001074e9750();
    func_0x0001074e9744();
    func_0x0001074e9668();
    func_0x0001074e9738();
    FUN_1074e7274(auStack_1140);
    FUN_1074e7274(auStack_1198);
LAB_1074e5184:
    func_0x0001074e9528();
  } while( true );
}



/* Entry: 1074e4944; end: 1074e521f;  */

void FUN_1074e4944(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar8;
  undefined1 auStack_1368 [88];
  undefined1 auStack_1310 [88];
  undefined1 auStack_12b8 [88];
  undefined1 auStack_1260 [88];
  undefined1 auStack_1208 [88];
  undefined1 auStack_11b0 [88];
  undefined1 auStack_1158 [88];
  undefined1 auStack_1100 [88];
  undefined1 auStack_10a8 [88];
  undefined1 auStack_1050 [88];
  undefined1 auStack_ff8 [88];
  undefined1 auStack_fa0 [88];
  undefined1 auStack_f48 [88];
  undefined1 auStack_ef0 [88];
  undefined1 auStack_e98 [88];
  undefined1 auStack_e40 [88];
  undefined1 auStack_de8 [88];
  undefined1 auStack_d90 [88];
  undefined1 auStack_d38 [88];
  undefined1 auStack_ce0 [88];
  undefined1 auStack_c88 [88];
  undefined1 auStack_c30 [88];
  undefined1 auStack_bd8 [88];
  undefined1 auStack_b80 [88];
  undefined1 auStack_b28 [88];
  undefined1 auStack_ad0 [88];
  undefined1 auStack_a78 [88];
  undefined1 auStack_a20 [88];
  undefined1 auStack_9c8 [88];
  undefined1 auStack_970 [88];
  undefined1 auStack_918 [88];
  undefined1 auStack_8c0 [88];
  undefined1 auStack_868 [88];
  undefined1 auStack_810 [88];
  undefined1 auStack_7b8 [88];
  undefined1 auStack_760 [8];
  undefined1 uStack_758;
  long lStack_750;
  long lStack_748;
  undefined1 auStack_740 [56];
  undefined1 auStack_708 [104];
  undefined1 auStack_6a0 [104];
  undefined1 auStack_638 [152];
  undefined1 auStack_5a0 [8];
  undefined1 uStack_598;
  undefined1 auStack_508 [192];
  undefined1 auStack_448 [192];
  undefined1 auStack_388 [192];
  undefined1 auStack_2c8 [192];
  undefined1 auStack_208 [104];
  undefined1 auStack_1a0 [104];
  undefined1 auStack_138 [112];
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [80];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = param_3;
  func_0x0001074e94a0();
  uStack_58 = extraout_x8_00;
  FUN_1074e7560(auStack_7b8,lVar7);
  FUN_1074e808c(auStack_448,param_1);
  func_0x0001074e9698();
  FUN_1074e7560();
  plVar8 = param_2 + 1;
  plVar1 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x40) == '\0') {
    plVar1 = plVar8;
  }
  lStack_748 = *plVar1;
  uVar2 = *(uint *)(plVar1 + 1);
  plVar1 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar1 = plVar8;
  }
  lStack_750 = plVar1[2];
  uVar3 = *(uint *)(plVar1 + 3);
  auStack_760[0] = 0;
  uStack_758 = 0;
  if ((uVar3 & 1) == 0) {
    lStack_750 = 0;
  }
  lStack_750 = lStack_750 + *param_2;
  if ((uVar2 & 1) == 0) {
    lStack_748 = 0;
  }
  lStack_748 = lStack_750 + lStack_748;
  FUN_1074e759c(auStack_740,auStack_448);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    FUN_1074e7534(auStack_5a0,auStack_2c8);
    uStack_598 = 1;
    FUN_1074e74bc(auStack_760,auStack_5a0);
    FUN_1074e72ec(auStack_5a0);
  }
  func_0x0001074e9698();
  FUN_1074e7274();
  FUN_1074e729c(auStack_448);
  FUN_1074e78d4(auStack_138,param_3 + 0x58);
  FUN_1074e813c(auStack_448,param_1 + 0x60);
  func_0x0001074e9698();
  FUN_1074e78d4();
  plVar1 = (long *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    plVar1 = plVar8;
  }
  lStack_b0 = *plVar1;
  uVar2 = *(uint *)(plVar1 + 1);
  plVar1 = (long *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 200) == '\0') {
    plVar1 = plVar8;
  }
  lStack_b8 = plVar1[2];
  uVar3 = *(uint *)(plVar1 + 3);
  auStack_c8[0] = 0;
  uStack_c0 = 0;
  if ((uVar3 & 1) == 0) {
    lStack_b8 = 0;
  }
  lStack_b8 = lStack_b8 + *param_2;
  uVar4 = (uVar2 & 1) == 0;
  if ((bool)uVar4) {
    lStack_b0 = 0;
  }
  lStack_b0 = lStack_b8 + lStack_b0;
  FUN_1074e7910(auStack_a8,auStack_448);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    FUN_1074e78a8(auStack_5a0,auStack_2c8);
    uStack_598 = 1;
    FUN_1074e7830(auStack_c8,auStack_5a0);
    FUN_1074e71fc(auStack_5a0);
  }
  func_0x0001074e9698();
  func_0x0001074e7184();
  FUN_1074e71ac(auStack_448);
  func_0x000107432c64(auStack_208,param_3 + 200);
  FUN_107437f20(auStack_1a0,param_1 + 0xd8,param_2,auStack_208);
  func_0x000107432f04(auStack_868,param_3 + 0x130);
  func_0x0001074e9520(auStack_810,param_1 + 0x148);
  func_0x000107432f04(auStack_918,param_3 + 0x188);
  func_0x0001074e9520(auStack_8c0,param_1 + 0x1a8);
  func_0x000107432f04(auStack_9c8,param_3 + 0x1e0);
  func_0x0001074e9520(auStack_970,param_1 + 0x208);
  func_0x000107432f04(auStack_a78,param_3 + 0x238);
  func_0x0001074e9520(auStack_a20,param_1 + 0x268);
  func_0x000107432f04(auStack_b28,param_3 + 0x290);
  func_0x0001074e9520(auStack_ad0,param_1 + 0x2c8);
  func_0x000107432f04(auStack_bd8,param_3 + 0x2e8);
  func_0x0001074e9520(auStack_b80,param_1 + 0x328);
  func_0x000107432f04(auStack_c88,param_3 + 0x340);
  func_0x0001074e9520(auStack_c30,param_1 + 0x388);
  func_0x00010748303c(auStack_388,param_3 + 0x398);
  FUN_10748374c(auStack_2c8,param_1 + 1000,param_2,auStack_388);
  func_0x000107432f04(auStack_d38,param_3 + 0x458);
  func_0x0001074e9520(auStack_ce0,param_1 + 0x4b0);
  func_0x00010748303c(auStack_508,param_3 + 0x4b0);
  FUN_10748374c(auStack_448,param_1 + 0x510,param_2,auStack_508);
  func_0x000107432f04(auStack_de8,param_3 + 0x570);
  func_0x0001074e9520(auStack_d90,param_1 + 0x5d8);
  func_0x000107432f04(auStack_e98,param_3 + 0x5c8);
  func_0x0001074e9520(auStack_e40,param_1 + 0x638);
  func_0x00010748ad58(auStack_f48,param_3 + 0x620);
  FUN_10748dc44(auStack_ef0,param_1 + 0x698,param_2,auStack_f48);
  func_0x000107432f04(auStack_ff8,param_3 + 0x678);
  func_0x0001074e9520(auStack_fa0,param_1 + 0x6f8);
  func_0x000107432f04(auStack_10a8,param_3 + 0x6d0);
  func_0x0001074e9520(auStack_1050,param_1 + 0x758);
  func_0x000107432f04(auStack_1158,param_3 + 0x728);
  func_0x0001074e9520(auStack_1100,param_1 + 0x7b8);
  func_0x000107432e2c(auStack_638,param_3 + 0x780);
  FUN_107437ff8(auStack_5a0,param_1 + 0x818,param_2,auStack_638);
  func_0x000107432f04(auStack_1208,param_3 + 0x818);
  func_0x0001074e9520(auStack_11b0,param_1 + 0x8b8);
  func_0x000107432c64(auStack_708,param_3 + 0x870);
  FUN_107437f20(auStack_6a0,param_1 + 0x918,param_2,auStack_708);
  func_0x000107432f04(auStack_12b8,param_3 + 0x8d8);
  func_0x0001074e9520(auStack_1260,param_1 + 0x988);
  func_0x000107432f04(auStack_1368,param_3 + 0x930);
  func_0x0001074e9520(auStack_1310,param_1 + 0x9e8);
  puVar5 = auStack_760;
  FUN_1074e81e8(extraout_x8,puVar5,auStack_c8,auStack_1a0,auStack_810,auStack_8c0,auStack_970,
                auStack_a20,auStack_ad0,auStack_b80,auStack_c30,auStack_2c8,auStack_ce0,auStack_448,
                auStack_d90,auStack_e40,auStack_ef0,auStack_fa0,auStack_1050,auStack_1100,
                auStack_5a0,auStack_11b0,auStack_6a0,auStack_1260,auStack_1310);
  iVar6 = (int)puVar5;
  func_0x000107410c2c(auStack_1310);
  func_0x000107410c2c(auStack_1368);
  func_0x000107410c2c(auStack_1260);
  func_0x000107410c2c(auStack_12b8);
  FUN_1074335c8(auStack_6a0);
  FUN_1074335c8(auStack_708);
  func_0x000107410c2c(auStack_11b0);
  func_0x000107410c2c(auStack_1208);
  FUN_1074338c4(auStack_5a0);
  FUN_1074338c4(auStack_638);
  func_0x000107410c2c(auStack_1100);
  func_0x000107410c2c(auStack_1158);
  func_0x000107410c2c(auStack_1050);
  func_0x000107410c2c(auStack_10a8);
  func_0x000107410c2c(auStack_fa0);
  func_0x000107410c2c(auStack_ff8);
  func_0x00010748a9e4(auStack_ef0);
  func_0x00010748a9e4(auStack_f48);
  func_0x000107410c2c(auStack_e40);
  func_0x000107410c2c(auStack_e98);
  func_0x0001074e96dc();
  func_0x000107410c2c(auStack_de8);
  func_0x000107482a54(auStack_448);
  func_0x000107482a54(auStack_508);
  func_0x000107410c2c(auStack_ce0);
  func_0x000107410c2c(auStack_d38);
  func_0x0001074e9698();
  func_0x000107482a54();
  func_0x0001074e972c();
  func_0x000107410c2c(auStack_c30);
  func_0x000107410c2c(auStack_c88);
  func_0x000107410c2c(auStack_b80);
  func_0x000107410c2c(auStack_bd8);
  func_0x000107410c2c(auStack_ad0);
  func_0x000107410c2c(auStack_b28);
  func_0x000107410c2c(auStack_a20);
  func_0x000107410c2c(auStack_a78);
  func_0x000107410c2c(auStack_970);
  func_0x000107410c2c(auStack_9c8);
  func_0x000107410c2c(auStack_8c0);
  func_0x000107410c2c(auStack_918);
  func_0x000107410c2c(auStack_810);
  func_0x000107410c2c(auStack_868);
  func_0x0001074e9750();
  func_0x0001074e9744();
  func_0x0001074e9668();
  func_0x0001074e9738();
  FUN_1074e7274(auStack_760);
  puVar5 = auStack_7b8;
  FUN_1074e7274(puVar5);
  func_0x0001074e9460(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) goto LAB_1074e5184;
  func_0x000104bd46a0(puVar5);
  func_0x000107410c2c(auStack_1368);
  func_0x000107410c2c(auStack_1260);
  func_0x000107410c2c(auStack_12b8);
  FUN_1074335c8(auStack_6a0);
  FUN_1074335c8(auStack_708);
  func_0x000107410c2c(auStack_11b0);
  func_0x000107410c2c(auStack_1208);
  FUN_1074338c4(auStack_5a0);
  FUN_1074338c4(auStack_638);
  func_0x000107410c2c(auStack_1100);
  do {
    func_0x000107410c2c(auStack_1158);
    func_0x000107410c2c(auStack_1050);
    func_0x000107410c2c(auStack_10a8);
    func_0x000107410c2c(auStack_fa0);
    func_0x000107410c2c(auStack_ff8);
    func_0x00010748a9e4(auStack_ef0);
    func_0x00010748a9e4(auStack_f48);
    func_0x000107410c2c(auStack_e40);
    func_0x000107410c2c(auStack_e98);
    func_0x0001074e96dc();
    func_0x000107410c2c(auStack_de8);
    func_0x000107482a54(auStack_448);
    func_0x000107482a54(auStack_508);
    func_0x000107410c2c(auStack_ce0);
    func_0x000107410c2c(auStack_d38);
    func_0x0001074e9698();
    func_0x000107482a54();
    func_0x0001074e972c();
    func_0x000107410c2c(auStack_c30);
    func_0x000107410c2c(auStack_c88);
    func_0x000107410c2c(auStack_b80);
    func_0x000107410c2c(auStack_bd8);
    func_0x000107410c2c(auStack_ad0);
    func_0x000107410c2c(auStack_b28);
    func_0x000107410c2c(auStack_a20);
    func_0x000107410c2c(auStack_a78);
    func_0x000107410c2c(auStack_970);
    func_0x000107410c2c(auStack_9c8);
    func_0x000107410c2c(auStack_8c0);
    func_0x000107410c2c(auStack_918);
    func_0x000107410c2c(auStack_810);
    func_0x000107410c2c(auStack_868);
    func_0x0001074e9750();
    func_0x0001074e9744();
    func_0x0001074e9668();
    func_0x0001074e9738();
    FUN_1074e7274(auStack_760);
    FUN_1074e7274(auStack_7b8);
LAB_1074e5184:
    func_0x0001074e9528();
  } while( true );
}



/* Entry: 1074e5220; end: 1074e5367;  */

void FUN_1074e5220(long param_1,uint *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  uint *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined1 auVar5 [16];
  undefined **ppuStack_e18;
  undefined4 uStack_e10;
  undefined **ppuStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined1 auStack_da8 [56];
  undefined1 auStack_d70 [56];
  undefined1 auStack_d38 [56];
  undefined1 auStack_d00 [56];
  undefined1 auStack_cc8 [56];
  undefined1 auStack_c90 [56];
  undefined1 auStack_c58 [56];
  undefined1 auStack_c20 [56];
  undefined1 auStack_be8 [56];
  undefined1 auStack_bb0 [56];
  undefined1 auStack_b78 [56];
  undefined1 auStack_b40 [56];
  undefined1 auStack_b08 [56];
  undefined1 auStack_ad0 [56];
  undefined1 auStack_a98 [56];
  undefined **ppuStack_a60;
  undefined4 uStack_a58;
  undefined **ppuStack_a50;
  undefined4 auStack_a48 [28];
  undefined **ppuStack_9d8;
  undefined4 auStack_9d0 [38];
  undefined **ppuStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 auStack_898 [72];
  undefined1 auStack_850 [80];
  undefined **ppuStack_800;
  undefined4 auStack_7f8 [22];
  undefined1 auStack_7a0 [56];
  undefined8 uStack_768;
  uint auStack_718 [2];
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  ulong uStack_6e0;
  long lStack_6d8;
  undefined *puStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined *puStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_48;
  
  func_0x0001074e9474();
  puStack_6d0 = &UNK_10e52b660;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  puStack_6b0 = &UNK_10e52b660;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  puStack_690 = &UNK_10e52b660;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uStack_48 = extraout_x8;
  FUN_1074e37b8(param_1 + 0x1200,&puStack_6d0);
  func_0x000107266af0(&puStack_6d0);
  lVar1 = unaff_x19 + 0x1200;
  FUN_1074e37ec();
  auStack_718[0] = *param_2;
  uStack_710 = *(undefined8 *)(param_2 + 2);
  uStack_708 = *(undefined8 *)(param_2 + 4);
  uStack_6f8 = *(undefined8 *)(param_2 + 8);
  uStack_700 = *(undefined8 *)(param_2 + 6);
  uStack_6f0 = *(undefined8 *)(param_2 + 10);
  uStack_6e8 = *(undefined8 *)(param_2 + 0xc);
  uStack_6e0 = *(ulong *)(param_2 + 0xe);
  lStack_6d8 = *(long *)(param_2 + 0x10);
  FUN_1074e5368(&puStack_6d0,unaff_x19 + 0x70,auStack_718);
  FUN_1074e7bac(unaff_x19 + 0x9f8,&puStack_6d0);
  func_0x0001074e6f38(&puStack_6d0);
  auStack_718[0] = auStack_718[0] & 0xffffff00;
  uStack_6e0 = uStack_6e0 & 0xffffffffffffff00;
  lStack_6d8 = lVar1;
  FUN_1074e5a10(&puStack_6d0,unaff_x19 + 0x9f8,param_3,auStack_718);
  ppuVar3 = &puStack_6d0;
  func_0x0001074e7f78(unaff_x19 + 0x1080);
  func_0x0001074e6f04(&puStack_6d0);
  func_0x00010724b3d8();
  func_0x0001074e9460(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = auStack_718;
    func_0x00010724b3d8(puVar2);
    func_0x0001074e9528();
    ppuVar4 = ppuVar3;
    func_0x0001074e94a0();
    uStack_930 = CONCAT71(uStack_930._1_7_,1);
    ppuStack_938 = ppuVar4;
    uStack_768 = extraout_x8_01;
    FUN_1074e8484(auStack_a98,puVar2,&ppuStack_938,ppuVar4[2]);
    FUN_1074e8abc(&uStack_930);
    ppuStack_938 = ppuVar3;
    FUN_1074e88a0(auStack_850,puVar2 + 0x16,&ppuStack_938,ppuVar3[2]);
    auVar5 = NEON_fmov(0x3f800000,4);
    uStack_928 = auVar5._8_8_;
    uStack_930 = auVar5._0_8_;
    ppuStack_938 = ppuVar3;
    FUN_1074384fc(auStack_898,puVar2 + 0x32,&ppuStack_938,ppuVar3[2]);
    ppuStack_938 = ppuVar3;
    func_0x0001074e9878(0x3f000000);
    func_0x0001074e955c(auStack_ad0,puVar2 + 0x4c);
    ppuStack_938 = ppuVar3;
    func_0x0001074e9878(0x3ecccccd);
    func_0x0001074e955c(auStack_b08,puVar2 + 0x62);
    ppuStack_938 = ppuVar3;
    func_0x0001074e9878(0x3f800000);
    func_0x0001074e955c(auStack_b40,puVar2 + 0x78);
    func_0x0001074e96fc();
    func_0x0001074e955c(auStack_b78,puVar2 + 0x8e);
    ppuStack_938 = ppuVar3;
    func_0x0001074e9878(0x42000000);
    func_0x0001074e955c(auStack_bb0,puVar2 + 0xa4);
    func_0x0001074e96fc();
    func_0x0001074e955c(auStack_be8,puVar2 + 0xba);
    func_0x0001074e96fc();
    func_0x0001074e955c(auStack_c20,puVar2 + 0xd0);
    FUN_1074e90f8(&ppuStack_a50);
    ppuStack_9d8 = ppuVar3;
    func_0x00010726ccd4(auStack_9d0,&ppuStack_a50);
    FUN_1074e8ed0(&ppuStack_938,puVar2 + 0xe6,&ppuStack_9d8,ppuVar3[2]);
    func_0x0001074e96d4();
    func_0x00010726b164(&ppuStack_a50);
    auStack_9d0[0] = 0;
    ppuStack_9d8 = ppuVar3;
    FUN_107438e4c(auStack_c58,puVar2 + 0x116,&ppuStack_9d8,ppuVar3[2]);
    func_0x0001074e9128(&ppuStack_800);
    ppuStack_a50 = ppuVar3;
    func_0x00010726ccd4(auStack_a48,&ppuStack_800);
    FUN_1074e8ed0(&ppuStack_9d8,puVar2 + 300,&ppuStack_a50,ppuVar3[2]);
    func_0x0001074e96d4();
    func_0x00010726b164(&ppuStack_800);
    func_0x0001074e95b4();
    func_0x0001074e9630(auStack_c90,puVar2 + 0x15c);
    auStack_a48[0] = 0x44800000;
    ppuStack_a50 = ppuVar3;
    func_0x0001074e9630(auStack_cc8,puVar2 + 0x172);
    auStack_a48[0] = CONCAT31(auStack_a48[0]._1_3_,1);
    ppuStack_a50 = ppuVar3;
    FUN_1074e912c(auStack_d00,puVar2 + 0x188,&ppuStack_a50,ppuVar3[2]);
    func_0x0001074e95b4();
    func_0x0001074e9630(auStack_d38,puVar2 + 0x19e);
    func_0x0001074e95b4();
    func_0x0001074e9630(auStack_d70,puVar2 + 0x1b4);
    func_0x0001074e95b4();
    func_0x0001074e9630(auStack_da8,puVar2 + 0x1ca);
    func_0x0001074e92ac(auStack_7a0);
    ppuStack_800 = ppuVar3;
    func_0x000104c318bc(auStack_7f8,auStack_7a0);
    FUN_107438b40(&ppuStack_a50,puVar2 + 0x1e0,&ppuStack_800,ppuVar3[2]);
    func_0x000104c2f714(auStack_7f8);
    func_0x000104c2f714(auStack_7a0);
    auStack_7f8[0] = 0;
    ppuStack_800 = ppuVar3;
    FUN_107438e4c(auStack_7a0,puVar2 + 0x206,&ppuStack_800,ppuVar3[2]);
    uStack_dd0 = 0x3f8000003f6b851f;
    uStack_dd8 = 0x3f4f5c293f07ae14;
    ppuStack_de0 = ppuVar3;
    FUN_1074384fc(&ppuStack_800,puVar2 + 0x21c,&ppuStack_de0,ppuVar3[2]);
    uStack_e10 = 0x3f800000;
    ppuStack_e18 = ppuVar3;
    FUN_107438e4c(&ppuStack_de0,puVar2 + 0x236,&ppuStack_e18,ppuVar3[2]);
    uStack_a58 = 0x3f800000;
    ppuStack_a60 = ppuVar3;
    FUN_107438e4c(&ppuStack_e18,puVar2 + 0x24c,&ppuStack_a60,ppuVar3[2]);
    func_0x0001074e9628();
    FUN_1074e8cb8(extraout_x8_00 + 0x38,auStack_850);
    FUN_107433134(extraout_x8_00 + 0x88,auStack_898);
    FUN_1073dd9b0(extraout_x8_00 + 0xd0,auStack_ad0);
    FUN_1073dd9b0(extraout_x8_00 + 0x108,auStack_b08);
    FUN_1073dd9b0(extraout_x8_00 + 0x140,auStack_b40);
    FUN_1073dd9b0(extraout_x8_00 + 0x178,auStack_b78);
    FUN_1073dd9b0(extraout_x8_00 + 0x1b0,auStack_bb0);
    FUN_1073dd9b0(extraout_x8_00 + 0x1e8,auStack_be8);
    FUN_1073dd9b0(extraout_x8_00 + 0x220,auStack_c20);
    FUN_1073f5cb4(extraout_x8_00 + 0x260,&uStack_930);
    FUN_1073dd9b0(extraout_x8_00 + 0x2f8,auStack_c58);
    FUN_1073f5cb4(extraout_x8_00 + 0x338,auStack_9d0);
    FUN_1073dd9b0(extraout_x8_00 + 0x3d0,auStack_c90);
    FUN_1073dd9b0(extraout_x8_00 + 0x408,auStack_cc8);
    FUN_1073e95fc(extraout_x8_00 + 0x440,auStack_d00);
    FUN_1073dd9b0(extraout_x8_00 + 0x478,auStack_d38);
    FUN_1073dd9b0(extraout_x8_00 + 0x4b0,auStack_d70);
    FUN_1073dd9b0(extraout_x8_00 + 0x4e8,auStack_da8);
    FUN_1073ddccc(extraout_x8_00 + 0x528,auStack_a48);
    FUN_1073dd9b0(extraout_x8_00 + 0x598,auStack_7a0);
    FUN_107433134(extraout_x8_00 + 0x5d0,&ppuStack_800);
    FUN_1073dd9b0(extraout_x8_00 + 0x618,&ppuStack_de0);
    FUN_1073dd9b0(extraout_x8_00 + 0x650,&ppuStack_e18);
    FUN_1073dd4c4(&ppuStack_e18);
    FUN_1073dd4c4(&ppuStack_de0);
    FUN_1073debc4(&ppuStack_800);
    FUN_1073dd4c4(auStack_7a0);
    FUN_1073dd470(auStack_a48);
    FUN_1073dd4c4(auStack_da8);
    FUN_1073dd4c4(auStack_d70);
    FUN_1073dd4c4(auStack_d38);
    FUN_1073e71cc(auStack_d00);
    FUN_1073dd4c4(auStack_cc8);
    FUN_1073dd4c4(auStack_c90);
    FUN_1073e7178(auStack_9d0);
    FUN_1073dd4c4(auStack_c58);
    FUN_1073e7178(&uStack_930);
    FUN_1073dd4c4(auStack_c20);
    FUN_1073dd4c4(auStack_be8);
    FUN_1073dd4c4(auStack_bb0);
    FUN_1073dd4c4(auStack_b78);
    FUN_1073dd4c4(auStack_b40);
    FUN_1073dd4c4(auStack_b08);
    FUN_1073dd4c4(auStack_ad0);
    FUN_1073debc4(auStack_898);
    FUN_1074e7014(auStack_850);
    FUN_1074e7060(auStack_a98);
    func_0x0001074e9460(uStack_768);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001074e9858();
      FUN_1073dd4c4();
      FUN_1073debc4(&ppuStack_800);
      FUN_1073dd4c4(auStack_7a0);
      FUN_1073dd470(auStack_a48);
      FUN_1073dd4c4(auStack_da8);
      do {
        FUN_1073dd4c4(auStack_d70);
        FUN_1073dd4c4(auStack_d38);
        FUN_1073e71cc(auStack_d00);
        FUN_1073dd4c4(auStack_cc8);
        FUN_1073dd4c4(auStack_c90);
        func_0x0001074e959c(&ppuStack_9d8);
        FUN_1073dd4c4(auStack_c58);
        func_0x0001074e959c(&ppuStack_938);
        FUN_1073dd4c4(auStack_c20);
        FUN_1073dd4c4(auStack_be8);
        FUN_1073dd4c4(auStack_bb0);
        FUN_1073dd4c4(auStack_b78);
        FUN_1073dd4c4(auStack_b40);
        FUN_1073dd4c4(auStack_b08);
        FUN_1073dd4c4(auStack_ad0);
        FUN_1073debc4(auStack_898);
        FUN_1074e7014(auStack_850);
        FUN_1074e7060(auStack_a98);
        func_0x0001074e9528();
      } while( true );
    }
  }
  return;
}



/* Entry: 1074e5368; end: 1074e5a0f;  */

void FUN_1074e5368(long param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auVar2 [16];
  long lStack_6f8;
  undefined4 uStack_6f0;
  long alStack_6c0 [7];
  undefined1 auStack_688 [56];
  undefined1 auStack_650 [56];
  undefined1 auStack_618 [56];
  undefined1 auStack_5e0 [56];
  undefined1 auStack_5a8 [56];
  undefined1 auStack_570 [56];
  undefined1 auStack_538 [56];
  undefined1 auStack_500 [56];
  undefined1 auStack_4c8 [56];
  undefined1 auStack_490 [56];
  undefined1 auStack_458 [56];
  undefined1 auStack_420 [56];
  undefined1 auStack_3e8 [56];
  undefined1 auStack_3b0 [56];
  undefined1 auStack_378 [56];
  long lStack_340;
  undefined4 uStack_338;
  long lStack_330;
  undefined4 auStack_328 [28];
  long lStack_2b8;
  undefined4 auStack_2b0 [38];
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_178 [72];
  undefined1 auStack_130 [80];
  long lStack_e0;
  undefined4 auStack_d8 [22];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  lVar1 = param_3;
  func_0x0001074e94a0();
  uStack_210 = CONCAT71(uStack_210._1_7_,1);
  lStack_218 = lVar1;
  uStack_48 = extraout_x8;
  FUN_1074e8484(auStack_378,param_2,&lStack_218,*(undefined8 *)(lVar1 + 0x10));
  FUN_1074e8abc(&uStack_210);
  lStack_218 = param_3;
  FUN_1074e88a0(auStack_130,param_2 + 0x58,&lStack_218,*(undefined8 *)(param_3 + 0x10));
  auVar2 = NEON_fmov(0x3f800000,4);
  uStack_208 = auVar2._8_8_;
  uStack_210 = auVar2._0_8_;
  lStack_218 = param_3;
  FUN_1074384fc(auStack_178,param_2 + 200,&lStack_218,*(undefined8 *)(param_3 + 0x10));
  lStack_218 = param_3;
  func_0x0001074e9878(0x3f000000);
  func_0x0001074e955c(auStack_3b0,param_2 + 0x130);
  lStack_218 = param_3;
  func_0x0001074e9878(0x3ecccccd);
  func_0x0001074e955c(auStack_3e8,param_2 + 0x188);
  lStack_218 = param_3;
  func_0x0001074e9878(0x3f800000);
  func_0x0001074e955c(auStack_420,param_2 + 0x1e0);
  func_0x0001074e96fc();
  func_0x0001074e955c(auStack_458,param_2 + 0x238);
  lStack_218 = param_3;
  func_0x0001074e9878(0x42000000);
  func_0x0001074e955c(auStack_490,param_2 + 0x290);
  func_0x0001074e96fc();
  func_0x0001074e955c(auStack_4c8,param_2 + 0x2e8);
  func_0x0001074e96fc();
  func_0x0001074e955c(auStack_500,param_2 + 0x340);
  FUN_1074e90f8(&lStack_330);
  lStack_2b8 = param_3;
  func_0x00010726ccd4(auStack_2b0,&lStack_330);
  FUN_1074e8ed0(&lStack_218,param_2 + 0x398,&lStack_2b8,*(undefined8 *)(param_3 + 0x10));
  func_0x0001074e96d4();
  func_0x00010726b164(&lStack_330);
  auStack_2b0[0] = 0;
  lStack_2b8 = param_3;
  FUN_107438e4c(auStack_538,param_2 + 0x458,&lStack_2b8,*(undefined8 *)(param_3 + 0x10));
  func_0x0001074e9128(&lStack_e0);
  lStack_330 = param_3;
  func_0x00010726ccd4(auStack_328,&lStack_e0);
  FUN_1074e8ed0(&lStack_2b8,param_2 + 0x4b0,&lStack_330,*(undefined8 *)(param_3 + 0x10));
  func_0x0001074e96d4();
  func_0x00010726b164(&lStack_e0);
  func_0x0001074e95b4();
  func_0x0001074e9630(auStack_570,param_2 + 0x570);
  auStack_328[0] = 0x44800000;
  lStack_330 = param_3;
  func_0x0001074e9630(auStack_5a8,param_2 + 0x5c8);
  auStack_328[0] = CONCAT31(auStack_328[0]._1_3_,1);
  lStack_330 = param_3;
  FUN_1074e912c(auStack_5e0,param_2 + 0x620,&lStack_330,*(undefined8 *)(param_3 + 0x10));
  func_0x0001074e95b4();
  func_0x0001074e9630(auStack_618,param_2 + 0x678);
  func_0x0001074e95b4();
  func_0x0001074e9630(auStack_650,param_2 + 0x6d0);
  func_0x0001074e95b4();
  func_0x0001074e9630(auStack_688,param_2 + 0x728);
  func_0x0001074e92ac(auStack_80);
  lStack_e0 = param_3;
  func_0x000104c318bc(auStack_d8,auStack_80);
  FUN_107438b40(&lStack_330,param_2 + 0x780,&lStack_e0,*(undefined8 *)(param_3 + 0x10));
  func_0x000104c2f714(auStack_d8);
  func_0x000104c2f714(auStack_80);
  auStack_d8[0] = 0;
  lStack_e0 = param_3;
  FUN_107438e4c(auStack_80,param_2 + 0x818,&lStack_e0,*(undefined8 *)(param_3 + 0x10));
  alStack_6c0[2] = 0x3f8000003f6b851f;
  alStack_6c0[1] = 0x3f4f5c293f07ae14;
  alStack_6c0[0] = param_3;
  FUN_1074384fc(&lStack_e0,param_2 + 0x870,alStack_6c0,*(undefined8 *)(param_3 + 0x10));
  uStack_6f0 = 0x3f800000;
  lStack_6f8 = param_3;
  FUN_107438e4c(alStack_6c0,param_2 + 0x8d8,&lStack_6f8,*(undefined8 *)(param_3 + 0x10));
  uStack_338 = 0x3f800000;
  lStack_340 = param_3;
  FUN_107438e4c(&lStack_6f8,param_2 + 0x930,&lStack_340,*(undefined8 *)(param_3 + 0x10));
  func_0x0001074e9628();
  FUN_1074e8cb8(param_1 + 0x38,auStack_130);
  FUN_107433134(param_1 + 0x88,auStack_178);
  FUN_1073dd9b0(param_1 + 0xd0,auStack_3b0);
  FUN_1073dd9b0(param_1 + 0x108,auStack_3e8);
  FUN_1073dd9b0(param_1 + 0x140,auStack_420);
  FUN_1073dd9b0(param_1 + 0x178,auStack_458);
  FUN_1073dd9b0(param_1 + 0x1b0,auStack_490);
  FUN_1073dd9b0(param_1 + 0x1e8,auStack_4c8);
  FUN_1073dd9b0(param_1 + 0x220,auStack_500);
  FUN_1073f5cb4(param_1 + 0x260,&uStack_210);
  FUN_1073dd9b0(param_1 + 0x2f8,auStack_538);
  FUN_1073f5cb4(param_1 + 0x338,auStack_2b0);
  FUN_1073dd9b0(param_1 + 0x3d0,auStack_570);
  FUN_1073dd9b0(param_1 + 0x408,auStack_5a8);
  FUN_1073e95fc(param_1 + 0x440,auStack_5e0);
  FUN_1073dd9b0(param_1 + 0x478,auStack_618);
  FUN_1073dd9b0(param_1 + 0x4b0,auStack_650);
  FUN_1073dd9b0(param_1 + 0x4e8,auStack_688);
  FUN_1073ddccc(param_1 + 0x528,auStack_328);
  FUN_1073dd9b0(param_1 + 0x598,auStack_80);
  FUN_107433134(param_1 + 0x5d0,&lStack_e0);
  FUN_1073dd9b0(param_1 + 0x618,alStack_6c0);
  FUN_1073dd9b0(param_1 + 0x650,&lStack_6f8);
  FUN_1073dd4c4(&lStack_6f8);
  FUN_1073dd4c4(alStack_6c0);
  FUN_1073debc4(&lStack_e0);
  FUN_1073dd4c4(auStack_80);
  FUN_1073dd470(auStack_328);
  FUN_1073dd4c4(auStack_688);
  FUN_1073dd4c4(auStack_650);
  FUN_1073dd4c4(auStack_618);
  FUN_1073e71cc(auStack_5e0);
  FUN_1073dd4c4(auStack_5a8);
  FUN_1073dd4c4(auStack_570);
  FUN_1073e7178(auStack_2b0);
  FUN_1073dd4c4(auStack_538);
  FUN_1073e7178(&uStack_210);
  FUN_1073dd4c4(auStack_500);
  FUN_1073dd4c4(auStack_4c8);
  FUN_1073dd4c4(auStack_490);
  FUN_1073dd4c4(auStack_458);
  FUN_1073dd4c4(auStack_420);
  FUN_1073dd4c4(auStack_3e8);
  FUN_1073dd4c4(auStack_3b0);
  FUN_1073debc4(auStack_178);
  FUN_1074e7014(auStack_130);
  FUN_1074e7060(auStack_378);
  func_0x0001074e9460(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074e9858();
  FUN_1073dd4c4();
  FUN_1073debc4(&lStack_e0);
  FUN_1073dd4c4(auStack_80);
  FUN_1073dd470(auStack_328);
  FUN_1073dd4c4(auStack_688);
  do {
    FUN_1073dd4c4(auStack_650);
    FUN_1073dd4c4(auStack_618);
    FUN_1073e71cc(auStack_5e0);
    FUN_1073dd4c4(auStack_5a8);
    FUN_1073dd4c4(auStack_570);
    func_0x0001074e959c(&lStack_2b8);
    FUN_1073dd4c4(auStack_538);
    func_0x0001074e959c(&lStack_218);
    FUN_1073dd4c4(auStack_500);
    FUN_1073dd4c4(auStack_4c8);
    FUN_1073dd4c4(auStack_490);
    FUN_1073dd4c4(auStack_458);
    FUN_1073dd4c4(auStack_420);
    FUN_1073dd4c4(auStack_3e8);
    FUN_1073dd4c4(auStack_3b0);
    FUN_1073debc4(auStack_178);
    FUN_1074e7014(auStack_130);
    FUN_1074e7060(auStack_378);
    func_0x0001074e9528();
  } while( true );
}



/* Entry: 1074e5a10; end: 1074e5e57;  */

ulong * FUN_1074e5a10(byte *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,byte *param_6)

{
  undefined1 in_ZR;
  byte *pbVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [56];
  undefined1 auStack_1f0 [96];
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  
  pbVar1 = param_6;
  func_0x0001074e94a0();
  uStack_98 = extraout_x8;
  if (*(int *)(pbVar1 + 0x30) == 0) {
    bVar3 = *param_6;
  }
  else {
    pbVar1 = param_6;
    func_0x0001074e9670();
    bVar3 = (byte)pbVar1;
    FUN_1074e87d0();
  }
  FUN_1074e8abc(&uStack_190);
  if (*(int *)(param_6 + 0x80) == 0) {
    uStack_240 = *(undefined8 *)(param_6 + 0x38);
    uStack_238 = *(undefined8 *)(param_6 + 0x40);
    uStack_230 = *(undefined8 *)(param_6 + 0x48);
  }
  else {
    uStack_128 = uStack_188;
    uStack_130 = uStack_190;
    uStack_120 = uStack_180;
    func_0x0001074e9564(&uStack_240,param_6 + 0x38);
    FUN_1074e8d1c();
  }
  auVar23 = NEON_fmov(0x3f800000,4);
  uStack_128 = auVar23._8_8_;
  uStack_130 = auVar23._0_8_;
  uVar5 = func_0x0001074e96ec();
  uStack_130._0_4_ = 0x3f000000;
  uVar24 = param_3;
  uVar25 = param_4;
  uVar26 = param_5;
  uVar6 = func_0x0001074e9450();
  uStack_130._0_4_ = 0x3ecccccd;
  uVar7 = func_0x0001074e9450();
  uStack_130._0_4_ = 0x3f800000;
  uVar8 = func_0x0001074e9450();
  uStack_130._0_4_ = 0;
  uVar9 = func_0x0001074e9450();
  uStack_130._0_4_ = 0x42000000;
  uVar10 = func_0x0001074e9450();
  uStack_130._0_4_ = 0;
  uVar11 = func_0x0001074e9450();
  uStack_130._0_4_ = 0;
  uVar12 = func_0x0001074e9450();
  FUN_1074e90f8(&uStack_130);
  func_0x0001074e9658(&uStack_190);
  func_0x00010726b164(&uStack_130);
  uStack_130._0_4_ = 0;
  uVar13 = func_0x0001074e9450();
  func_0x0001074e9128(&uStack_130);
  func_0x0001074e9658(auStack_1f0);
  func_0x00010726b164(&uStack_130);
  uStack_130._0_4_ = 0;
  uVar14 = func_0x0001074e9450();
  uStack_130 = CONCAT44(uStack_130._4_4_,0x44800000);
  uVar15 = func_0x0001074e9450();
  if (*(int *)(param_6 + 0x470) == 0) {
    bVar4 = param_6[0x440];
  }
  else {
    bVar4 = (char)param_6 + 0x40;
    func_0x0001074e9670();
    func_0x000107280464();
  }
  uStack_130 = uStack_130 & 0xffffffff00000000;
  uVar16 = func_0x0001074e9450();
  uStack_130 = uStack_130 & 0xffffffff00000000;
  uVar17 = func_0x0001074e9450();
  uStack_130 = uStack_130 & 0xffffffff00000000;
  uVar18 = func_0x0001074e9450();
  func_0x0001074e92ac(auStack_d0);
  if (*(int *)(param_6 + 0x590) == 0) {
    func_0x000104c2fe00(auStack_228,param_6 + 0x528);
  }
  else {
    func_0x000104c2fe00(&uStack_130,auStack_d0);
    func_0x0001074e9670(auStack_228,param_6 + 0x528);
    FUN_1073393c0();
    func_0x000104c2f714(&uStack_130);
  }
  func_0x000104c2f714(auStack_d0);
  uStack_130 = uStack_130 & 0xffffffff00000000;
  uVar19 = func_0x0001074e9450();
  uStack_128 = 0x3f8000003f6b851f;
  uStack_130 = 0x3f4f5c293f07ae14;
  uVar20 = func_0x0001074e96ec();
  uStack_130._0_4_ = 0x3f800000;
  uVar21 = func_0x0001074e9450();
  uStack_130 = CONCAT44(uStack_130._4_4_,0x3f800000);
  uVar22 = func_0x0001074e9450();
  *param_1 = bVar3 & 1;
  *(undefined8 *)(param_1 + 0xc) = uStack_238;
  *(undefined8 *)(param_1 + 4) = uStack_240;
  *(undefined8 *)(param_1 + 0x14) = uStack_230;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  *(undefined4 *)(param_1 + 0x44) = uVar12;
  func_0x00010726ccd4(param_1 + 0x48,&uStack_190);
  *(undefined4 *)(param_1 + 0xa8) = uVar13;
  func_0x00010726ccd4(param_1 + 0xb0,auStack_1f0);
  *(undefined4 *)(param_1 + 0x110) = uVar14;
  *(undefined4 *)(param_1 + 0x114) = uVar15;
  param_1[0x118] = bVar4 & 1;
  *(undefined4 *)(param_1 + 0x11c) = uVar16;
  *(undefined4 *)(param_1 + 0x120) = uVar17;
  *(undefined4 *)(param_1 + 0x124) = uVar18;
  func_0x000104c318bc(param_1 + 0x128,auStack_228);
  *(undefined4 *)(param_1 + 0x160) = uVar19;
  *(undefined4 *)(param_1 + 0x164) = uVar20;
  *(undefined4 *)(param_1 + 0x168) = uVar24;
  *(undefined4 *)(param_1 + 0x16c) = uVar25;
  *(undefined4 *)(param_1 + 0x170) = uVar26;
  *(undefined4 *)(param_1 + 0x174) = uVar21;
  *(undefined4 *)(param_1 + 0x178) = uVar22;
  func_0x000104c2f714(auStack_228);
  func_0x00010726b164(auStack_1f0);
  puVar2 = &uStack_190;
  func_0x00010726b164();
  func_0x0001074e9460(uStack_98);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(&uStack_130);
  func_0x000104c2f714(auStack_d0);
  func_0x00010726b164(auStack_1f0);
  puVar2 = &uStack_190;
  func_0x00010726b164();
  func_0x0001074e9528();
  return (ulong *)(ulong)((((((((char)puVar2[0xc] != '\0' || (char)puVar2[1] != '\0') ||
                              ((char)puVar2[0x1a] != '\0' || (char)puVar2[0x27] != '\0')) ||
                             (((char)puVar2[0x32] != '\0' || (char)puVar2[0x3d] != '\0') ||
                             (char)puVar2[0x48] != '\0')) ||
                            ((((char)puVar2[0x53] != '\0' || (char)puVar2[0x5e] != '\0') ||
                             (char)puVar2[0x69] != '\0') || (char)puVar2[0x74] != '\0')) ||
                           (((((char)puVar2[0x8c] != '\0' || (char)puVar2[0x97] != '\0') ||
                             (char)puVar2[0xaf] != '\0') || (char)puVar2[0xba] != '\0') ||
                           (char)puVar2[0xc5] != '\0')) ||
                          ((((((char)puVar2[0xd0] != '\0' || (char)puVar2[0xdb] != '\0') ||
                             (char)puVar2[0xe6] != '\0') || (char)puVar2[0xf1] != '\0') ||
                           (char)puVar2[0x104] != '\0') || (char)puVar2[0x10f] != '\0')) ||
                         ((char)puVar2[0x11c] != '\0' || (char)puVar2[0x127] != '\0'));
}



/* Entry: 1074e5e58; end: 1074e5f37;  */

bool FUN_1074e5e58(long param_1)

{
  return ((((((*(char *)(param_1 + 0x60) != '\0' || *(char *)(param_1 + 8) != '\0') ||
             (*(char *)(param_1 + 0xd0) != '\0' || *(char *)(param_1 + 0x138) != '\0')) ||
            ((*(char *)(param_1 + 400) != '\0' || *(char *)(param_1 + 0x1e8) != '\0') ||
            *(char *)(param_1 + 0x240) != '\0')) ||
           (((*(char *)(param_1 + 0x298) != '\0' || *(char *)(param_1 + 0x2f0) != '\0') ||
            *(char *)(param_1 + 0x348) != '\0') || *(char *)(param_1 + 0x3a0) != '\0')) ||
          ((((*(char *)(param_1 + 0x460) != '\0' || *(char *)(param_1 + 0x4b8) != '\0') ||
            *(char *)(param_1 + 0x578) != '\0') || *(char *)(param_1 + 0x5d0) != '\0') ||
          *(char *)(param_1 + 0x628) != '\0')) ||
         (((((*(char *)(param_1 + 0x680) != '\0' || *(char *)(param_1 + 0x6d8) != '\0') ||
            *(char *)(param_1 + 0x730) != '\0') || *(char *)(param_1 + 0x788) != '\0') ||
          *(char *)(param_1 + 0x820) != '\0') || *(char *)(param_1 + 0x878) != '\0')) ||
         (*(char *)(param_1 + 0x8e0) != '\0' || *(char *)(param_1 + 0x938) != '\0');
}



/* Entry: 1074e5f38; end: 1074e5fdb;  */

undefined8 FUN_1074e5f38(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (*(char *)(param_1 + 0x1260) == '\x01') {
    param_1 = param_1 + 0x1200;
    FUN_1074e387c(param_1);
    func_0x0001074739a0(&uStack_50,param_1);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_30 = 2;
    func_0x0001077506b8(param_2,&uStack_40);
    FUN_1073ebb78(&uStack_40);
    FUN_1073e0028(&uStack_50);
  }
  else {
    param_2 = 1;
  }
  return param_2;
}



/* Entry: 1074e5fdc; end: 1074e602b;  */

void FUN_1074e5fdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x0001074e970c(&lStack_28);
  FUN_1074e602c();
  lVar1 = lStack_28;
  lStack_28 = 0;
  lVar2 = *(long *)(param_1 + 0x14f0);
  *(long *)(param_1 + 0x14f0) = lVar1;
  if (lVar2 != 0) {
    func_0x0001074e94c0();
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001074e94c0();
    }
  }
  return;
}



/* Entry: 1074e602c; end: 1074e6067;  */

void FUN_1074e602c(void)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001074e9550();
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b5db0;
  puVar1[1] = unaff_x20;
  puVar1[2] = unaff_x19;
  *extraout_x8 = puVar1;
  return;
}



/* Entry: 1074e6068; end: 1074e63d3;  */

void FUN_1074e6068(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  ulong uVar11;
  long *plVar12;
  long *unaff_x24;
  long *plVar13;
  float fVar14;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long alStack_170 [6];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 uStack_108;
  undefined1 auStack_f8 [56];
  undefined1 uStack_c0;
  undefined1 auStack_98 [96];
  undefined8 uStack_38;
  
  func_0x0001074e9474();
  *(undefined8 *)(param_1 + 0x1280) = *(undefined8 *)(param_1 + 0x10ac);
  *(undefined8 *)(param_1 + 0x1278) = *(undefined8 *)(param_1 + 0x10a0);
  *(undefined8 *)(param_1 + 0x1290) = *(undefined8 *)(param_1 + 0x10bc);
  *(undefined8 *)(param_1 + 0x1288) = *(undefined8 *)(param_1 + 0x10b4);
  *(undefined4 *)(param_1 + 0x1274) = *(undefined4 *)(param_1 + 0x109c);
  *(undefined4 *)(param_1 + 0x1298) = *(undefined4 *)(param_1 + 0x10c4);
  *(undefined4 *)(param_1 + 0x1300) = *(undefined4 *)(param_1 + 0x1128);
  alStack_170[1] = 0;
  alStack_170[0] = 0;
  alStack_170[3] = 0;
  alStack_170[2] = 0;
  alStack_170[4] = 0x3f800000;
  uStack_38 = extraout_x8;
  func_0x000107278acc(auStack_98,unaff_x19 + 0x10c8);
  *(bool *)(param_1 + 0x12f9) = *(int *)(unaff_x19 + 0x4c0) != 0;
  lVar9 = unaff_x19 + 0x12a0;
  func_0x000107262f24(lVar9,auStack_98);
  if ((int)lVar9 != 0) {
    uVar11 = unaff_x19 + 0x12a0;
    func_0x000107262f3c(uVar11,auStack_98);
    *(undefined1 *)(param_1 + 0x12f8) = 1;
    func_0x0001074e9794();
    if ((uVar11 & 1) == 0) {
      func_0x000104c2fe00(auStack_f8,auStack_98);
      uStack_c0 = 0;
      FUN_1074e63d4(alStack_170,auStack_f8);
      func_0x000104c2f714(auStack_f8);
    }
    else {
      FUN_107456c98(unaff_x19 + 0x12d8);
    }
  }
  func_0x000107278acc(auStack_f8,unaff_x19 + 0x1130);
  *(bool *)(param_1 + 0x1361) = *(int *)(unaff_x19 + 0x5d8) != 0;
  lVar9 = unaff_x19 + 0x1308;
  func_0x000107262f24(lVar9,auStack_f8);
  iVar3 = 0;
  iVar4 = (int)unaff_x19;
  if ((int)lVar9 != 0) {
    uVar11 = unaff_x19 + 0x1308;
    func_0x000107262f3c(uVar11,auStack_f8);
    *(undefined1 *)(param_1 + 0x1360) = 1;
    func_0x0001074e9794();
    if ((uVar11 & 1) == 0) {
      func_0x000104c2fe00(&uStack_140,auStack_f8);
      uStack_108 = 0;
      FUN_1074e63d4(alStack_170,&uStack_140);
      iVar3 = (int)&uStack_140;
      func_0x000104c2f714();
    }
    else {
      iVar3 = iVar4 + 0x1340;
      FUN_107456c98();
    }
  }
  if (alStack_170[3] != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 8);
    FUN_10747b938(uVar5,alStack_170);
    iVar3 = (int)uVar5;
  }
  iVar1 = *(int *)(unaff_x19 + 0x1378);
  *(int *)(unaff_x19 + 0x1378) = (int)*(float *)(unaff_x19 + 0x1194);
  uVar2 = iVar1 == (int)*(float *)(unaff_x19 + 0x1194);
  if (!(bool)uVar2) {
    iVar3 = iVar4 + 0x1370;
    func_0x0001074e9784();
    func_0x0001074e96a4();
  }
  *(undefined4 *)(unaff_x19 + 0x1480) = *(undefined4 *)(unaff_x19 + 0x1190);
  *(undefined1 *)(param_1 + 0x1484) = *(undefined1 *)(param_1 + 0x1198);
  *(undefined4 *)(unaff_x19 + 0x1488) = *(undefined4 *)(unaff_x19 + 0x119c);
  *(float *)(unaff_x19 + 0x148c) = *(float *)(unaff_x19 + 0x11a0);
  *(float *)(unaff_x19 + 0x1490) = *(float *)(unaff_x19 + 0x11a0) * 3.1415927;
  *(undefined4 *)(unaff_x19 + 0x1494) = *(undefined4 *)(unaff_x19 + 0x11a4);
  func_0x0001074e9794();
  if (iVar3 == 0) {
    iVar4 = iVar4 + 0x11a8;
    lVar9 = unaff_x19 + 0x14a8;
    func_0x000107262f24();
    if (iVar4 != 0) {
      func_0x000107262f3c(unaff_x19 + 0x14a8,unaff_x19 + 0x11a8);
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0x3f800000;
      func_0x0001072e89a4(&uStack_140,unaff_x19 + 0x14a8);
      lVar9 = *(long *)(unaff_x19 + 0x14f0);
      FUN_10742d75c(*(undefined8 *)(lVar9 + 8),lVar9,&uStack_140,1,1);
      func_0x00010726ea70(&uStack_140);
    }
  }
  else {
    lVar9 = 0x1138369c0;
    func_0x000107262f3c(unaff_x19 + 0x14a8);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_138 = *(undefined8 *)(unaff_x19 + 0x14e8);
    uStack_140 = *(undefined8 *)(unaff_x19 + 0x14e0);
    *(undefined8 *)(unaff_x19 + 0x14e8) = 0;
    *(undefined8 *)(unaff_x19 + 0x14e0) = 0;
    func_0x000107435084(&uStack_140);
    func_0x000107435084(&uStack_180);
  }
  *(undefined4 *)(unaff_x19 + 0x14f8) = *(undefined4 *)(unaff_x19 + 0x11e0);
  fVar14 = *(float *)(unaff_x19 + 0x11f8);
  *(float *)(unaff_x19 + 0x14fc) = *(float *)(unaff_x19 + 0x11e4) * fVar14;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x11e8);
  *(ulong *)(unaff_x19 + 0x1500) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar14,(float)uVar5 * fVar14);
  *(undefined4 *)(unaff_x19 + 0x1508) = *(undefined4 *)(unaff_x19 + 0x11f4);
  *(float *)(unaff_x19 + 0x150c) = *(float *)(unaff_x19 + 0x11e4);
  *(undefined8 *)(unaff_x19 + 0x1510) = uVar5;
  *(undefined4 *)(unaff_x19 + 0x1518) = *(undefined4 *)(unaff_x19 + 0x11f0);
  func_0x00010726b164(auStack_f8);
  func_0x00010726b164(auStack_98);
  func_0x0001074701f4(alStack_170);
  func_0x0001074e9460(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074e9858();
  func_0x000104c2f714();
  func_0x00010726b164(auStack_f8);
  func_0x00010726b164(auStack_98);
  plVar6 = alStack_170;
  func_0x0001074701f4();
  func_0x0001074e9528();
  plVar10 = plVar6 + 3;
  func_0x00010726364c();
  plVar12 = (long *)plVar6[1];
  if (plVar12 != (long *)0x0) {
    uVar11 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar11) == 0) {
      unaff_x24 = (long *)(uVar11 & (ulong)plVar10);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar12 <= plVar10) {
        uVar8 = 0;
        if (plVar12 != (long *)0x0) {
          uVar8 = (ulong)plVar10 / (ulong)plVar12;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar8 * (long)plVar12);
      }
    }
    plVar13 = *(long **)(*plVar6 + (long)unaff_x24 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_1074e6494;
          plVar7 = (long *)plVar13[1];
          if (plVar7 != plVar10) break;
          uVar8 = (ulong)(plVar13 + 2);
          func_0x000104c32db4(uVar8,lVar9);
          if ((uVar8 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar12 & uVar11) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar11);
        }
        else if (plVar12 <= plVar7) {
          uVar8 = 0;
          if (plVar12 != (long *)0x0) {
            uVar8 = (ulong)plVar7 / (ulong)plVar12;
          }
          plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar12);
        }
      } while (plVar7 == unaff_x24);
    }
  }
LAB_1074e6494:
  plVar13 = plVar6 + 2;
  plVar7 = (long *)0x50;
  __Znwm();
  uStack_1d8 = 1;
  *plVar7 = 0;
  plVar7[1] = (long)plVar10;
  plStack_1e8 = plVar7;
  plStack_1e0 = plVar13;
  func_0x000104c318bc(plVar7 + 2,lVar9);
  *(undefined1 *)(plVar7 + 9) = *(undefined1 *)(lVar9 + 0x38);
  if ((plVar12 == (long *)0x0) || (*(float *)(plVar6 + 4) * (float)plVar12 < (float)(plVar6[3] + 1))
     ) {
    uVar11 = 1;
    if ((long *)0x2 < plVar12) {
      uVar11 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
    }
    uVar11 = uVar11 | (long)plVar12 << 1;
    uVar8 = (ulong)((float)(plVar6[3] + 1) / *(float *)(plVar6 + 4));
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    FUN_1073de554(plVar6,uVar11);
    plVar12 = (long *)plVar6[1];
    if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar12 - 1U & (ulong)plVar10);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar12 <= plVar10) {
        uVar11 = 0;
        if (plVar12 != (long *)0x0) {
          uVar11 = (ulong)plVar10 / (ulong)plVar12;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar11 * (long)plVar12);
      }
    }
  }
  lVar9 = *plVar6;
  plVar10 = *(long **)(lVar9 + (long)unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    *plStack_1e8 = *plVar13;
    *plVar13 = (long)plStack_1e8;
    *(long **)(lVar9 + (long)unaff_x24 * 8) = plVar13;
    if (*plStack_1e8 != 0) {
      plVar10 = *(long **)(*plStack_1e8 + 8);
      if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar12 - 1U);
      }
      else if (plVar12 <= plVar10) {
        uVar11 = 0;
        if (plVar12 != (long *)0x0) {
          uVar11 = (ulong)plVar10 / (ulong)plVar12;
        }
        plVar10 = (long *)((long)plVar10 - uVar11 * (long)plVar12);
      }
      *(long **)(lVar9 + (long)plVar10 * 8) = plStack_1e8;
    }
  }
  else {
    *plStack_1e8 = *plVar10;
    *plVar10 = (long)plStack_1e8;
  }
  plStack_1e8 = (long *)0x0;
  plVar6[3] = plVar6[3] + 1;
  FUN_1073de74c(&plStack_1e8);
  return;
}



/* Entry: 1074e63d4; end: 1074e65f3;  */

void FUN_1074e63d4(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x24;
  long *plVar7;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar4 = param_1 + 3;
  func_0x00010726364c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar5 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar5) == 0) {
      unaff_x24 = (long *)(uVar5 & (ulong)plVar4);
    }
    else {
      unaff_x24 = plVar4;
      if (plVar6 <= plVar4) {
        uVar2 = 0;
        if (plVar6 != (long *)0x0) {
          uVar2 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar4 - uVar2 * (long)plVar6);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1074e6494;
          plVar1 = (long *)plVar7[1];
          if (plVar1 != plVar4) break;
          uVar2 = (ulong)(plVar7 + 2);
          func_0x000104c32db4(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar6 & uVar5) == 0) {
          plVar1 = (long *)((ulong)plVar1 & uVar5);
        }
        else if (plVar6 <= plVar1) {
          uVar2 = 0;
          if (plVar6 != (long *)0x0) {
            uVar2 = (ulong)plVar1 / (ulong)plVar6;
          }
          plVar1 = (long *)((long)plVar1 - uVar2 * (long)plVar6);
        }
      } while (plVar1 == unaff_x24);
    }
  }
LAB_1074e6494:
  plVar7 = param_1 + 2;
  plVar1 = (long *)0x50;
  __Znwm();
  uStack_58 = 1;
  *plVar1 = 0;
  plVar1[1] = (long)plVar4;
  plStack_68 = plVar1;
  plStack_60 = plVar7;
  func_0x000104c318bc(plVar1 + 2,param_2);
  *(undefined1 *)(plVar1 + 9) = *(undefined1 *)(param_2 + 0x38);
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar5 = 1;
    if ((long *)0x2 < plVar6) {
      uVar5 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar6 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    FUN_1073de554(param_1,uVar5);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x24 = plVar4;
      if (plVar6 <= plVar4) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar4 - uVar5 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + (long)unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar7;
    if (*plStack_68 != 0) {
      plVar4 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar4) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar6);
      }
      *(long **)(lVar3 + (long)plVar4 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar4;
    *plVar4 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1073de74c(&plStack_68);
  return;
}



/* Entry: 1074e65f4; end: 1074e68e7;  */

void FUN_1074e65f4(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 uStack_2b0;
  float fStack_2a8;
  undefined8 uStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  float fStack_168;
  undefined8 uStack_f0;
  long *plStack_e8;
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
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  puVar6 = &uStack_f0;
  func_0x0001074e9474();
  uStack_48 = extraout_x8;
  if ((*(char *)(param_1 + 0x12f0) != '\x01') || (*(char *)(param_1 + 0x12f8) == '\x01')) {
    uVar3 = unaff_x19 + 0x12a0;
    func_0x000104c2d614();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 8);
      FUN_10747b8dc(lVar4,unaff_x19 + 0x12a0);
      if ((lVar4 != 0) && (func_0x00010778196c(), (*(byte *)(lVar4 + 0x10) & 1) == 0)) {
        uStack_f0 = CONCAT35(uStack_f0._5_3_,0x10303);
        func_0x0001074e95e4();
        func_0x0001074e979c(0x12d8);
        func_0x0001074e97bc();
        if (lVar4 != 0) {
          func_0x0001074e94c0();
        }
        *(undefined1 *)(param_1 + 0x12f8) = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0x1358) != '\x01') || (*(char *)(param_1 + 0x1360) == '\x01')) {
    uVar3 = unaff_x19 + 0x1308;
    func_0x000104c2d614();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 8);
      FUN_10747b8dc(lVar4,unaff_x19 + 0x1308);
      if ((lVar4 != 0) && (func_0x00010778196c(), (*(byte *)(lVar4 + 0x10) & 1) == 0)) {
        uStack_f0 = CONCAT35(uStack_f0._5_3_,0x10303);
        func_0x0001074e95e4();
        func_0x0001074e979c(0x1340);
        func_0x0001074e97bc();
        if (lVar4 != 0) {
          func_0x0001074e94c0();
        }
        *(undefined1 *)(param_1 + 0x1360) = 0;
      }
    }
  }
  iVar1 = *(int *)(unaff_x19 + 0x630);
  if (*(long *)(unaff_x19 + 0x1370) == 0) {
    uVar11 = (uint)(*(int *)(unaff_x19 + 0x1378) != 0 && iVar1 != 0);
  }
  else {
    uVar11 = 0;
  }
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar2 = 0;
  if (((uint)plVar5 & uVar11) == 1) {
    uStack_d8 = CONCAT35(uStack_d8._5_3_,0x401010000);
    uStack_e0 = CONCAT53(uStack_e0._3_5_,0x100);
    FUN_107497a08(&uStack_d0,param_2,
                  CONCAT44(*(undefined4 *)(unaff_x19 + 0x1378),*(undefined4 *)(unaff_x19 + 0x1378)),
                  &uStack_d8,0xc,&uStack_e0);
    FUN_107431fe4(&uStack_f0,&uStack_d0);
    uVar9 = uStack_f0;
    uStack_f0 = 0;
    FUN_1074301b4(unaff_x19 + 0x1368,uVar9);
    FUN_107439fd0();
    func_0x0001074e97bc();
    if (puVar6 != (undefined8 *)0x0) {
      func_0x0001074e94c0();
    }
    lVar4 = 0;
    uStack_68 = 0;
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
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    do {
      *(undefined1 *)((long)&uStack_d0 + lVar4) = 0;
      *(undefined1 *)((long)&uStack_c0 + lVar4) = 0;
      lVar4 = lVar4 + 0x18;
      uVar2 = lVar4 == 0x60;
    } while (!(bool)uVar2);
    uStack_70 = *(undefined8 *)(unaff_x19 + 0x1368);
    uStack_68 = uStack_68 & 0xffffffff00000000;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    uStack_58 = CONCAT71(uStack_58._1_7_,1);
    uVar9 = CONCAT44(*(undefined4 *)(unaff_x19 + 0x1378),*(undefined4 *)(unaff_x19 + 0x1378));
    param_3 = &uStack_d8;
    uStack_d8 = uVar9;
    (**(code **)(*param_2 + 0x70))(&plStack_e8,param_2,&UNK_10f415d8a,param_3,&uStack_d0);
    puVar6 = (undefined8 *)0x10;
    uStack_f0 = uVar9;
    __Znwm();
    plVar5 = plStack_e8;
    plStack_e8 = (long *)0x0;
    uStack_e0 = 0;
    *puVar6 = uVar9;
    puVar6[1] = plVar5;
    FUN_1074e8414(unaff_x19 + 0x1370);
    FUN_1074e83f4(&uStack_e0);
    plVar5 = plStack_e8;
    plStack_e8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x0001074e94c0();
    }
  }
  if (iVar1 == 0) {
    plVar5 = (long *)(unaff_x19 + 0x1370);
    func_0x0001074e9784();
    func_0x0001074e96a4();
  }
  func_0x0001074e9460(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  plVar7 = plVar5;
  func_0x0001074e97bc();
  if (plVar7 != (long *)0x0) {
    func_0x0001074e94c0();
  }
  func_0x0001074e9528();
  func_0x0001074e9544();
  fVar10 = *(float *)(plVar7 + 0x213);
  uStack_2b0 = plVar7[0x212];
  fStack_2a8 = fVar10;
  if ((char)plVar7[0x210] == '\x01') {
    uStack_230._0_4_ = 0.0;
    uStack_230._4_4_ = 1.875;
    uStack_228._0_4_ = 0.0;
    uStack_228._4_4_ = 0;
    dStack_220 = 0.0;
    uStack_218 = 0;
    uStack_210 = 0x3ff0000000000000;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0x3ff0000000000000;
    fVar10 = SUB84(-(double)param_2[0xe],0);
    func_0x0001078766dc(&uStack_230,&uStack_230);
    func_0x00010787687c(&uStack_340,&uStack_2b0,&uStack_230);
    uStack_2b0 = uStack_340;
    fStack_2a8 = (float)uStack_338;
  }
  uStack_230._0_4_ = (float)uStack_2b0;
  uStack_230._4_4_ = (float)((ulong)uStack_2b0 >> 0x20);
  uStack_228._0_4_ = fStack_2a8;
  FUN_1073b5ea8(&uStack_230,&uStack_230);
  if (1e-06 <= fVar10) {
    if (1e-06 < ABS(fVar10 + -1.0)) {
      fVar10 = 1.0 / SQRT(fVar10);
      uStack_230._0_4_ = fVar10 * (float)uStack_230;
      uStack_230._4_4_ = uStack_230._4_4_ * fVar10;
      uStack_228._0_4_ = (float)uStack_228 * fVar10;
    }
  }
  else {
    uStack_228._0_4_ = 0.0;
    uStack_230._0_4_ = 0.0;
    uStack_230._4_4_ = 0.0;
  }
  dVar12 = (double)(float)uStack_230;
  dVar15 = (double)uStack_230._4_4_;
  dVar16 = (double)(float)uStack_228;
  FUN_1074176fc(param_2);
  fVar10 = (float)dVar12;
  fStack_2b8 = (float)dVar15;
  dVar13 = (double)(ulong)(uint)fStack_2b8;
  fStack_2b4 = (float)dVar16;
  dVar14 = (double)(ulong)(uint)fStack_2b4;
  plVar7 = param_2;
  fStack_2bc = fVar10;
  FUN_107417d68();
  if ((int)plVar7 != 0) {
    fStack_2a8 = *(float *)(plVar5 + 0x213);
    uStack_2b0 = plVar5[0x212];
    fVar10 = fStack_2a8;
    FUN_1073b5ea8(&uStack_2b0,&uStack_2b0);
    if (1e-06 <= fVar10) {
      dVar16 = (double)(ulong)(uint)ABS(fVar10 + -1.0);
      dVar14 = (double)(ulong)(uint)fStack_2a8;
      uStack_230._4_4_ = uStack_2b0._4_4_;
      uStack_230._0_4_ = (float)uStack_2b0;
      if (1e-06 < ABS(fVar10 + -1.0)) {
        dVar16 = 5.26354424712089e-315;
        fVar10 = 1.0 / SQRT(fVar10);
        uStack_230._0_4_ = fVar10 * (float)uStack_2b0;
        uStack_230._4_4_ = fVar10 * uStack_2b0._4_4_;
        uStack_2b0 = CONCAT44(uStack_230._4_4_,(float)uStack_230);
        fStack_2a8 = fVar10 * fStack_2a8;
        dVar14 = (double)(ulong)(uint)fStack_2a8;
      }
    }
    else {
      fStack_2a8 = 0.0;
      dVar14 = 0.0;
      uStack_230._0_4_ = 0.0;
      uStack_2b0 = 0;
      uStack_230._4_4_ = 0.0;
    }
    if ((*(byte *)(plVar5 + 0x210) & 1) == 0) {
      dVar16 = (double)uStack_230._4_4_;
      dVar13 = (double)SUB84(dVar14,0);
      dStack_220 = dVar13;
      uStack_230 = (double)(float)uStack_230;
      uStack_228 = dVar16;
      func_0x000107418524(param_2,&uStack_230);
      uStack_230._0_4_ = (float)dVar13;
      uStack_230._4_4_ = (float)dVar14;
      dVar14 = (double)(ulong)(uint)(float)dVar16;
    }
    uStack_228._0_4_ = SUB84(dVar14,0);
    uVar11 = *(uint *)(param_2 + 0x152);
    dVar15 = 0.0;
    if (*(char *)((long)param_2 + 0xa94) == '\0') {
      uVar11 = 0;
    }
    dVar12 = (double)(ulong)uVar11;
    FUN_1074e6d78(&fStack_2bc,&uStack_230);
    fVar10 = SUB84(dVar12,0);
    fStack_2b8 = SUB84(dVar15,0);
    fStack_2b4 = SUB84(dVar16,0);
    dVar14 = dVar16;
    dVar13 = dVar15;
    fStack_2bc = fVar10;
  }
  *(float *)(plVar5 + 0x24d) = fVar10;
  param_3 = param_3 + 10;
  *(int *)((long)plVar5 + 0x126c) = SUB84(dVar13,0);
  *(int *)(plVar5 + 0x24e) = SUB84(dVar14,0);
  while( true ) {
    param_3 = (undefined8 *)*param_3;
    if (param_3 == (undefined8 *)0x0) break;
    puVar6 = param_3 + 2;
    func_0x000104c32db4(puVar6,plVar5 + 0x254);
    if ((int)puVar6 != 0) {
      FUN_107456c98(plVar5 + 0x25b);
    }
    puVar6 = param_3 + 2;
    func_0x000104c32db4(puVar6,plVar5 + 0x261);
    if ((int)puVar6 != 0) {
      FUN_107456c98(plVar5 + 0x268);
    }
  }
  func_0x0001074e95f8();
  *(float *)(plVar5 + 0x293) = (float)dVar12;
  *(float *)((long)plVar5 + 0x149c) = (float)dVar15;
  dVar14 = (double)(ulong)(uint)(float)dVar16;
  *(float *)(plVar5 + 0x294) = (float)dVar16;
  plVar7 = plVar5;
  FUN_1074e6db8();
  if (((ulong)plVar7 & 1) != 0) {
    lVar4 = plVar5[0xd];
    func_0x0001074e95f8();
    dVar13 = dVar14;
    dVar12 = dVar15;
    FUN_10741776c(param_2);
    dVar17 = 0.0;
    FUN_107417694(param_2);
    fStack_168 = (float)(dVar15 * dVar12 + dVar14 * dVar13 + dVar16 * dVar17);
    uStack_198 = (double)((ulong)uStack_198._4_4_ << 0x20);
    uStack_230._0_4_ = 0.0;
    uStack_230._4_4_ = 0.0;
    uStack_228._0_4_ = 0.0;
    uStack_2b0 = 0;
    fStack_2a8 = -1.0;
    uStack_340 = CONCAT44((float)dVar15,(float)dVar14);
    uStack_338 = CONCAT44(uStack_338._4_4_,(float)dVar16);
    dStack_180 = dVar14;
    dStack_178 = dVar15;
    dStack_170 = dVar16;
    func_0x000107874ff4(&uStack_230,&uStack_2b0,&uStack_340,&uStack_198);
    dStack_188 = (double)(float)uStack_198;
    uStack_198 = dStack_188 * 0.0;
    dStack_188 = -dStack_188;
    dStack_1b0 = (double)(float)plVar5[0x24d];
    dStack_1a8 = (double)(float)((ulong)plVar5[0x24d] >> 0x20);
    dStack_1a0 = (double)*(float *)(plVar5 + 0x24e);
    dStack_190 = uStack_198;
    func_0x0001078771b0(&uStack_230,&uStack_198,&dStack_1b0,&dStack_180);
    func_0x0001078769cc(&uStack_230,&uStack_230);
    func_0x000107876c5c(0xc08f400000000000,0x408f400000000000,0xc08f400000000000,0x408f400000000000,
                        0xc08f400000000000,0x408f400000000000,&uStack_2b0,(char)lVar4);
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    func_0x000107877034(&uStack_340,&uStack_2b0,&uStack_230);
    _memcpy(plVar5 + 0x270,&uStack_340,0x80);
    if ((char)plVar5[0xd] == '\0') {
      puVar8 = &UNK_10de757e0;
    }
    else {
      puVar8 = &UNK_10de75860;
    }
    _memcpy(&uStack_230,puVar8,0x80);
    plVar5[0x28f] = 0;
    plVar5[0x28e] = 0;
    plVar5[0x28d] = 0;
    plVar5[0x28c] = 0;
    plVar5[0x28b] = 0;
    plVar5[0x28a] = 0;
    plVar5[0x289] = 0;
    plVar5[0x288] = 0;
    plVar5[0x287] = 0;
    plVar5[0x286] = 0;
    plVar5[0x285] = 0;
    plVar5[0x284] = 0;
    plVar5[0x283] = 0;
    plVar5[0x282] = 0;
    plVar5[0x281] = 0;
    plVar5[0x280] = 0;
    func_0x000107877034(plVar5 + 0x280,&uStack_230,plVar5 + 0x270);
  }
  return;
}



/* Entry: 1074e68e8; end: 1074e6d77;  */

void FUN_1074e68e8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong unaff_x19;
  long unaff_x20;
  long *plVar5;
  float fVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
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
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  float fStack_78;
  
  func_0x0001074e9544();
  fVar6 = *(float *)(param_1 + 0x1098);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x1090);
  fStack_1b8 = fVar6;
  if (*(char *)(param_1 + 0x1080) == '\x01') {
    uStack_140._0_4_ = 0.0;
    uStack_140._4_4_ = 1.875;
    uStack_138._0_4_ = 0.0;
    uStack_138._4_4_ = 0;
    dStack_130 = 0.0;
    uStack_128 = 0;
    uStack_120 = 0x3ff0000000000000;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0x3ff0000000000000;
    fVar6 = SUB84(-*(double *)(unaff_x20 + 0x70),0);
    func_0x0001078766dc(&uStack_140,&uStack_140);
    func_0x00010787687c(&uStack_250,&uStack_1c0,&uStack_140);
    uStack_1c0 = uStack_250;
    fStack_1b8 = (float)uStack_248;
  }
  uStack_140._0_4_ = (float)uStack_1c0;
  uStack_140._4_4_ = (float)((ulong)uStack_1c0 >> 0x20);
  uStack_138._0_4_ = fStack_1b8;
  FUN_1073b5ea8(&uStack_140,&uStack_140);
  if (1e-06 <= fVar6) {
    if (1e-06 < ABS(fVar6 + -1.0)) {
      fVar6 = 1.0 / SQRT(fVar6);
      uStack_140._0_4_ = fVar6 * (float)uStack_140;
      uStack_140._4_4_ = uStack_140._4_4_ * fVar6;
      uStack_138._0_4_ = (float)uStack_138 * fVar6;
    }
  }
  else {
    uStack_138._0_4_ = 0.0;
    uStack_140._0_4_ = 0.0;
    uStack_140._4_4_ = 0.0;
  }
  dVar8 = (double)(float)uStack_140;
  dVar11 = (double)uStack_140._4_4_;
  dVar12 = (double)(float)uStack_138;
  FUN_1074176fc();
  fVar6 = (float)dVar8;
  fStack_1c8 = (float)dVar11;
  dVar9 = (double)(ulong)(uint)fStack_1c8;
  fStack_1c4 = (float)dVar12;
  dVar10 = (double)(ulong)(uint)fStack_1c4;
  lVar2 = unaff_x20;
  fStack_1cc = fVar6;
  FUN_107417d68();
  if ((int)lVar2 != 0) {
    fStack_1b8 = *(float *)(unaff_x19 + 0x1098);
    uStack_1c0 = *(undefined8 *)(unaff_x19 + 0x1090);
    fVar6 = fStack_1b8;
    FUN_1073b5ea8(&uStack_1c0,&uStack_1c0);
    if (1e-06 <= fVar6) {
      dVar12 = (double)(ulong)(uint)ABS(fVar6 + -1.0);
      dVar10 = (double)(ulong)(uint)fStack_1b8;
      uStack_140._4_4_ = uStack_1c0._4_4_;
      uStack_140._0_4_ = (float)uStack_1c0;
      if (1e-06 < ABS(fVar6 + -1.0)) {
        dVar12 = 5.26354424712089e-315;
        fVar6 = 1.0 / SQRT(fVar6);
        uStack_140._0_4_ = fVar6 * (float)uStack_1c0;
        uStack_140._4_4_ = fVar6 * uStack_1c0._4_4_;
        uStack_1c0 = CONCAT44(uStack_140._4_4_,(float)uStack_140);
        fStack_1b8 = fVar6 * fStack_1b8;
        dVar10 = (double)(ulong)(uint)fStack_1b8;
      }
    }
    else {
      fStack_1b8 = 0.0;
      dVar10 = 0.0;
      uStack_140._0_4_ = 0.0;
      uStack_1c0 = 0;
      uStack_140._4_4_ = 0.0;
    }
    if ((*(byte *)(unaff_x19 + 0x1080) & 1) == 0) {
      dVar12 = (double)uStack_140._4_4_;
      dVar9 = (double)SUB84(dVar10,0);
      dStack_130 = dVar9;
      uStack_140 = (double)(float)uStack_140;
      uStack_138 = dVar12;
      func_0x000107418524();
      uStack_140._0_4_ = (float)dVar9;
      uStack_140._4_4_ = (float)dVar10;
      dVar10 = (double)(ulong)(uint)(float)dVar12;
    }
    uStack_138._0_4_ = SUB84(dVar10,0);
    uVar7 = *(uint *)(unaff_x20 + 0xa90);
    dVar11 = 0.0;
    if (*(char *)(unaff_x20 + 0xa94) == '\0') {
      uVar7 = 0;
    }
    dVar8 = (double)(ulong)uVar7;
    FUN_1074e6d78(&fStack_1cc,&uStack_140);
    fVar6 = SUB84(dVar8,0);
    fStack_1c8 = SUB84(dVar11,0);
    fStack_1c4 = SUB84(dVar12,0);
    dVar10 = dVar12;
    dVar9 = dVar11;
    fStack_1cc = fVar6;
  }
  *(float *)(unaff_x19 + 0x1268) = fVar6;
  plVar5 = (long *)(param_3 + 0x50);
  *(int *)(unaff_x19 + 0x126c) = SUB84(dVar9,0);
  *(int *)(unaff_x19 + 0x1270) = SUB84(dVar10,0);
  while( true ) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
    lVar2 = (long)(plVar5 + 2);
    func_0x000104c32db4(lVar2,unaff_x19 + 0x12a0);
    if ((int)lVar2 != 0) {
      FUN_107456c98(unaff_x19 + 0x12d8);
    }
    lVar2 = (long)(plVar5 + 2);
    func_0x000104c32db4(lVar2,unaff_x19 + 0x1308);
    if ((int)lVar2 != 0) {
      FUN_107456c98(unaff_x19 + 0x1340);
    }
  }
  func_0x0001074e95f8();
  *(float *)(unaff_x19 + 0x1498) = (float)dVar8;
  *(float *)(unaff_x19 + 0x149c) = (float)dVar11;
  dVar10 = (double)(ulong)(uint)(float)dVar12;
  *(float *)(unaff_x19 + 0x14a0) = (float)dVar12;
  uVar3 = unaff_x19;
  FUN_1074e6db8();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined1 *)(unaff_x19 + 0x68);
    func_0x0001074e95f8();
    dVar9 = dVar10;
    dVar8 = dVar11;
    FUN_10741776c();
    dVar13 = 0.0;
    FUN_107417694();
    fStack_78 = (float)(dVar11 * dVar8 + dVar10 * dVar9 + dVar12 * dVar13);
    uStack_a8 = (double)((ulong)uStack_a8._4_4_ << 0x20);
    uStack_140._0_4_ = 0.0;
    uStack_140._4_4_ = 0.0;
    uStack_138._0_4_ = 0.0;
    uStack_1c0 = 0;
    fStack_1b8 = -1.0;
    uStack_250 = CONCAT44((float)dVar11,(float)dVar10);
    uStack_248 = CONCAT44(uStack_248._4_4_,(float)dVar12);
    dStack_90 = dVar10;
    dStack_88 = dVar11;
    dStack_80 = dVar12;
    func_0x000107874ff4(&uStack_140,&uStack_1c0,&uStack_250,&uStack_a8);
    dStack_98 = (double)(float)uStack_a8;
    uStack_a8 = dStack_98 * 0.0;
    dStack_98 = -dStack_98;
    dStack_c0 = (double)(float)*(undefined8 *)(unaff_x19 + 0x1268);
    dStack_b8 = (double)(float)((ulong)*(undefined8 *)(unaff_x19 + 0x1268) >> 0x20);
    dStack_b0 = (double)*(float *)(unaff_x19 + 0x1270);
    dStack_a0 = uStack_a8;
    func_0x0001078771b0(&uStack_140,&uStack_a8,&dStack_c0,&dStack_90);
    func_0x0001078769cc(&uStack_140,&uStack_140);
    func_0x000107876c5c(0xc08f400000000000,0x408f400000000000,0xc08f400000000000,0x408f400000000000,
                        0xc08f400000000000,0x408f400000000000,&uStack_1c0,uVar1);
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    func_0x000107877034(&uStack_250,&uStack_1c0,&uStack_140);
    _memcpy(unaff_x19 + 0x1380,&uStack_250,0x80);
    if (*(char *)(unaff_x19 + 0x68) == '\0') {
      puVar4 = &UNK_10de757e0;
    }
    else {
      puVar4 = &UNK_10de75860;
    }
    _memcpy(&uStack_140,puVar4,0x80);
    *(undefined8 *)(unaff_x19 + 0x1478) = 0;
    *(undefined8 *)(unaff_x19 + 0x1470) = 0;
    *(undefined8 *)(unaff_x19 + 0x1468) = 0;
    *(undefined8 *)(unaff_x19 + 0x1460) = 0;
    *(undefined8 *)(unaff_x19 + 0x1458) = 0;
    *(undefined8 *)(unaff_x19 + 0x1450) = 0;
    *(undefined8 *)(unaff_x19 + 0x1448) = 0;
    *(undefined8 *)(unaff_x19 + 0x1440) = 0;
    *(undefined8 *)(unaff_x19 + 0x1438) = 0;
    *(undefined8 *)(unaff_x19 + 0x1430) = 0;
    *(undefined8 *)(unaff_x19 + 0x1428) = 0;
    *(undefined8 *)(unaff_x19 + 0x1420) = 0;
    *(undefined8 *)(unaff_x19 + 0x1418) = 0;
    *(undefined8 *)(unaff_x19 + 0x1410) = 0;
    *(undefined8 *)(unaff_x19 + 0x1408) = 0;
    *(undefined8 *)(unaff_x19 + 0x1400) = 0;
    func_0x000107877034(unaff_x19 + 0x1400,&uStack_140,unaff_x19 + 0x1380);
  }
  return;
}



/* Entry: 1074e6d78; end: 1074e6db7;  */

float FUN_1074e6d78(float param_1,float *param_2,float *param_3)

{
  return (1.0 - param_1) * *param_2 + param_1 * *param_3;
}



/* Entry: 1074e6db8; end: 1074e6de7;  */

void FUN_1074e6db8(void)

{
  FUN_1074e6e30();
  return;
}



/* Entry: 1074e6de8; end: 1074e6e2f;  */

long FUN_1074e6de8(long param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x12f0) != '\x01') {
    return param_2;
  }
  lVar1 = param_1 + 0x12d8;
  if ((*(byte *)(param_1 + 0x12f0) & 1) != 0) {
    return lVar1;
  }
  func_0x000104bdc2c8();
  FUN_1073f6580();
  *(undefined1 *)(lVar1 + 0x68) = 1;
  return lVar1;
}



/* Entry: 1074e6e30; end: 1074e6e9f;  */

long * FUN_1074e6e30(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x1370) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x1370) + 8);
    (**(code **)(*plVar1 + 0x10))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)(ulong)(*(long *)(param_1 + 0x1368) != 0);
    }
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 1074e6ea0; end: 1074e6eab;  */

long FUN_1074e6ea0(long param_1)

{
  long lVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0x14e0);
  if (*(int *)(lVar1 + 0x50) == 1) {
    return lVar1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001074e94fc();
  *(undefined4 *)(lVar1 + 0x30) = extraout_w8;
  FUN_1074e80bc();
  return unaff_x19;
}



/* Entry: 1074e6eac; end: 1074e7013;  */

long FUN_1074e6eac(long param_1)

{
  func_0x000107435084(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1074e7014; end: 1074e7057;  */

void FUN_1074e7014(long param_1)

{
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    func_0x0001074e9538((&PTR_FUN_1109b5c00)[*(uint *)(param_1 + 0x48)]);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 1074e7058; end: 1074e705f;  */

void FUN_1074e7058(void)

{
  return;
}



/* Entry: 1074e7060; end: 1074e70a3;  */

void FUN_1074e7060(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x0001074e9538((&PTR_FUN_1109b5c10)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1074e70a4; end: 1074e70ab;  */

void FUN_1074e70a4(void)

{
  return;
}



/* Entry: 1074e70ac; end: 1074e71ab;  */

void FUN_1074e70ac(long param_1)

{
  func_0x000107410c2c(param_1 + 0x930);
  func_0x000107410c2c(param_1 + 0x8d8);
  FUN_1074335c8(param_1 + 0x870);
  func_0x000107410c2c(param_1 + 0x818);
  FUN_1074338c4(param_1 + 0x780);
  func_0x000107410c2c(param_1 + 0x728);
  func_0x000107410c2c(param_1 + 0x6d0);
  func_0x000107410c2c(param_1 + 0x678);
  func_0x00010748a9e4(param_1 + 0x620);
  func_0x000107410c2c(param_1 + 0x5c8);
  func_0x000107410c2c(param_1 + 0x570);
  func_0x000107482a54(param_1 + 0x4b0);
  func_0x000107410c2c(param_1 + 0x458);
  func_0x000107482a54(param_1 + 0x398);
  func_0x000107410c2c(param_1 + 0x340);
  func_0x000107410c2c(param_1 + 0x2e8);
  func_0x000107410c2c(param_1 + 0x290);
  func_0x000107410c2c(param_1 + 0x238);
  func_0x000107410c2c(param_1 + 0x1e0);
  func_0x000107410c2c(param_1 + 0x188);
  func_0x000107410c2c(param_1 + 0x130);
  FUN_1074335c8(param_1 + 200);
  func_0x0001074e7184(param_1 + 0x58);
  FUN_1074e729c(param_1 + 0x20);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074e730c();
  }
  return;
}



/* Entry: 1074e71ac; end: 1074e71ef;  */

void FUN_1074e71ac(long param_1)

{
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    func_0x0001074e9538((&PTR_FUN_1109b5c20)[*(uint *)(param_1 + 0x48)]);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}


