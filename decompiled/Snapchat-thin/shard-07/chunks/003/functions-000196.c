/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053919ac; end: 105391a3b;  */

undefined8 *
FUN_1053919ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x0001053920a4();
  uStack_38 = extraout_x8;
  func_0x000100450688(auStack_50,1);
  FUN_105391a3c(puStack_40,param_2,param_3,param_4);
  func_0x000105392130();
  func_0x000100450b64();
  func_0x00010539206c(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x000100450b64();
  func_0x000105392080();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1107ea880;
  puVar1[1] = 0;
  FUN_105391a78(puVar1 + 3);
  return puVar1;
}



/* Entry: 105391a3c; end: 105391a77;  */

undefined8 * FUN_105391a3c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_105391a78(param_1 + 3);
  return param_1;
}



/* Entry: 105391a78; end: 105391adb;  */

undefined8
FUN_105391a78(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x0001053920dc(param_1,*param_2);
  func_0x00010028bc78(param_1,auStack_48,*param_3,param_4,0);
  func_0x00010539209c();
  return param_1;
}



/* Entry: 105391adc; end: 105391b03;  */

long FUN_105391adc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105391b04; end: 105391ba3;  */

undefined1 *
FUN_105391b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x0001053920a4();
  uStack_48 = extraout_x8;
  FUN_105391ba4(auStack_60,1);
  FUN_105391bfc(puStack_50,param_2,param_3,param_4,param_5);
  func_0x000105392130();
  func_0x000105391cb8();
  func_0x00010539206c(uStack_48);
  if ((bool)in_ZR) {
    return puStack_50;
  }
  ___stack_chk_fail();
  func_0x000105391cb8();
  func_0x000105392080();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_105391bcc();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 105391ba4; end: 105391bcb;  */

long FUN_105391ba4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105391bcc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105391bcc; end: 105391bfb;  */

undefined8 * FUN_105391bcc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087f6e0;
  FUN_105391c5c(param_1 + 3);
  return param_1;
}



/* Entry: 105391bfc; end: 105391c33;  */

undefined8 * FUN_105391bfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087f6e0;
  FUN_105391c5c(param_1 + 3);
  return param_1;
}



/* Entry: 105391c34; end: 105391c37;  */

void FUN_105391c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f6e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105391c38; end: 105391c4b;  */

void FUN_105391c38(void)

{
  FUN_105391ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105391c4c; end: 105391c5b;  */

void FUN_105391c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105391c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105391c5c; end: 105391ca7;  */

undefined8 FUN_105391c5c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10538d6a8();
  func_0x000100561d44(&uStack_30);
  return param_1;
}



/* Entry: 105391ca8; end: 105391cc7;  */

void FUN_105391ca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087f6e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105391cc8; end: 105391cef;  */

long FUN_105391cc8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105391cf0; end: 105391d53;  */

void FUN_105391cf0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x58))();
  plVar2 = plVar1;
  FUN_105392dd0();
  func_0x0001053920dc();
  FUN_105392ccc(plVar2,auStack_38,(long)(int)plVar1);
  func_0x00010539209c();
  return;
}



/* Entry: 105391d54; end: 105391d8b;  */

void FUN_105391d54(void)

{
  return;
}



/* Entry: 105391d8c; end: 105391ebf;  */

void FUN_105391d8c(void)

{
  long unaff_x19;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  long lStack_30;
  
  func_0x00010539210c();
  if (lStack_30 == 0) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      func_0x00010002b838(&lStack_88,&UNK_10dd98a28);
      FUN_105391f00(&uStack_a8,"TokenManagerImpl object has been destroyed");
      uStack_60 = uStack_78;
      uStack_68 = uStack_80;
      lStack_70 = lStack_88;
      uStack_80 = 0;
      uStack_78 = 0;
      lStack_88 = 0;
      uStack_58 = 2;
      uStack_50 = uStack_50 & 0xffffffffffffff00;
      uStack_38 = cStack_90 == '\x01';
      if ((bool)uStack_38) {
        uStack_48 = uStack_a0;
        uStack_50 = uStack_a8;
        uStack_40 = uStack_98;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_a8 = 0;
      }
      func_0x0001001148fc(&uStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_88);
      (**(code **)(**(long **)(unaff_x19 + 0x20) + 0x18))(*(long **)(unaff_x19 + 0x20),&lStack_70);
      FUN_1052a03ac(&lStack_70);
    }
  }
  else {
    lStack_70 = *(long *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    FUN_10539124c(lStack_30,*(undefined8 *)(unaff_x19 + 0x28),&lStack_70);
    if (lStack_70 != 0) {
      func_0x000105392050();
    }
  }
  func_0x0001053920f4();
  return;
}



/* Entry: 105391ec0; end: 105391eff;  */

void FUN_105391ec0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 105391f00; end: 105391f1b;  */

void FUN_105391f00(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105391f1c; end: 105391f4b;  */

undefined8 FUN_105391f1c(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 8;
  func_0x000105391980(param_1 + 0x18);
  func_0x00010538d1c4();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105391f4c; end: 105392023;  */

void FUN_105391f4c(void)

{
  ulong uVar1;
  long unaff_x19;
  long alStack_50 [3];
  undefined8 uStack_38;
  long lStack_30;
  
  func_0x00010539210c();
  if (lStack_30 != 0) {
    uStack_38 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar1 = lStack_30 + 0x1d0;
    func_0x000104c2ffc0(uVar1,&uStack_38,0,5);
    if ((uVar1 & 1) == 0) {
      FUN_105392dd0();
      func_0x000105392160();
      func_0x0001053920dc();
      func_0x000105392148();
      func_0x00010539209c();
      func_0x0001053920cc();
    }
    else {
      alStack_50[0] = 0;
      FUN_10539124c(lStack_30,"preemptive_refresh",alStack_50);
      if (alStack_50[0] != 0) {
        func_0x000105392050();
      }
    }
  }
  func_0x0001053920f4();
  return;
}



/* Entry: 105392024; end: 1053921cb;  */

void FUN_105392024(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010538d1c4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1053921cc; end: 105392227;  */

long FUN_1053921cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000100456794(param_1,param_2,"/token.bin");
  lVar4 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 105392228; end: 10539238b;  */

undefined *** FUN_105392228(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined8 extraout_x8;
  undefined ***pppuVar4;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined4 uStack_288;
  long alStack_280 [2];
  undefined1 auStack_270 [16];
  byte abStack_260 [552];
  undefined8 uStack_38;
  
  func_0x000105392864();
  ppuStack_2b0 = &PTR_FUN_11087fcd0;
  uStack_2a8 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  pppuVar4 = &ppuStack_2b0;
  uStack_38 = extraout_x8;
  FUN_10539238c();
  ppuVar3 = pppuVar4[1];
  if (((ulong)ppuVar3 & 1) != 0) {
    ppuVar3 = *(undefined ***)((ulong)ppuVar3 & 0xfffffffffffffffe);
  }
  func_0x00010539283c(pppuVar4 + 2,*param_2,param_2[1] - *param_2,ppuVar3);
  *(int *)(pppuVar4 + 3) = (int)param_2[3];
  *(undefined4 *)(pppuVar4 + 4) = *(undefined4 *)((long)param_2 + 0x1c);
  lStack_290 = param_2[4] / 1000000;
  func_0x00010045684c(alStack_280,param_1,0x34);
  uVar1 = (abStack_260[*(long *)(alStack_280[0] + -0x18)] & 5) == 0;
  if ((bool)uVar1) {
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    pppuVar4 = &ppuStack_2b0;
    func_0x0001001a556c(pppuVar4,&uStack_2c8);
    if (((ulong)pppuVar4 & 1) != 0) {
      func_0x0001006282fc(auStack_270,&uStack_2c8);
    }
    func_0x00010533a9e0(alStack_280);
    func_0x00010539285c();
  }
  else {
    pppuVar4 = (undefined ***)0x0;
  }
  func_0x0001004569a0(alStack_280);
  FUN_105393b44();
  func_0x000105392848(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010539285c();
    func_0x0001004569a0(alStack_280);
    pppuVar4 = &ppuStack_2b0;
    FUN_105393b44();
    func_0x000105392840();
    *(uint *)(pppuVar4 + 2) = *(uint *)(pppuVar4 + 2) | 1;
    pppuVar2 = (undefined ***)pppuVar4[3];
    if (pppuVar2 == (undefined ***)0x0) {
      pppuVar2 = (undefined ***)pppuVar4[1];
      if (((ulong)pppuVar2 & 1) != 0) {
        pppuVar2 = *(undefined ****)((ulong)pppuVar2 & 0xfffffffffffffffe);
      }
      func_0x0001053927e8();
      pppuVar4[3] = (undefined **)pppuVar2;
    }
    return pppuVar2;
  }
  return pppuVar4;
}



/* Entry: 10539238c; end: 10539239b;  */

void FUN_10539238c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001053927e8();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10539239c; end: 105392447;  */

long * FUN_10539239c(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined1 auStack_260 [128];
  long lStack_1e0;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  func_0x000105392864();
  iVar1 = (int)plVar2;
  uStack_28 = extraout_x8;
  FUN_105392448();
  if (iVar1 != 0) {
    plVar2 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar2 = (long *)*param_1;
    }
    iVar1 = (int)plVar2;
    _remove();
    if (iVar1 != 0) {
      FUN_105392490(auStack_260);
      FUN_105392524(auStack_260,param_1,0x30);
      if (lStack_1e0 != 0) {
        func_0x000100628854(auStack_260);
      }
      func_0x000100628b10(auStack_260);
      plVar2 = (long *)0x0;
      goto LAB_105392414;
    }
  }
  plVar2 = (long *)0x1;
LAB_105392414:
  func_0x000105392848(uStack_28);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000105392840();
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  iVar1 = (int)plVar2;
  _stat();
  if (iVar1 != 0) {
    ___error();
  }
  return (long *)(ulong)(iVar1 == 0);
}



/* Entry: 105392448; end: 10539248f;  */

bool FUN_105392448(long *param_1)

{
  undefined1 auStack_b0 [144];
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (long *)*param_1;
  }
  _stat(param_1,auStack_b0);
  if ((int)param_1 != 0) {
    ___error();
  }
  return (int)param_1 == 0;
}



/* Entry: 105392490; end: 105392523;  */

undefined8 * FUN_105392490(undefined8 *param_1)

{
  param_1[0x3a] = 0;
  *param_1 = &PTR_SUB_11087cb40;
  param_1[0x34] = &PTR_DAT_11087cb68;
  func_0x000100625b7c(param_1,&PTR_PTR_11087cb80,param_1 + 1);
  *param_1 = &PTR_SUB_11087cb40;
  param_1[0x34] = &PTR_DAT_11087cb68;
  func_0x0001000daff0(param_1 + 1);
  return param_1;
}



/* Entry: 105392524; end: 10539256f;  */

void FUN_105392524(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long extraout_x8;
  
  lVar1 = param_1 + 8;
  func_0x0001000db26c(lVar1,param_2,param_3 | 0x10);
  func_0x0001003abf2c();
  if (lVar1 == 0) {
    uVar2 = *(uint *)(param_1 + extraout_x8 + 0x20) | 4;
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_1103468e0)(param_1 + extraout_x8,uVar2);
  return;
}



/* Entry: 105392570; end: 1053927af;  */

void FUN_105392570(undefined1 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [24];
  undefined8 ***pppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  long lStack_298;
  undefined4 uStack_290;
  long alStack_288 [4];
  byte abStack_268 [8];
  undefined8 auStack_260 [67];
  undefined8 uStack_48;
  
  uVar5 = param_2;
  func_0x000105392864();
  uStack_48 = extraout_x8;
  FUN_105392448();
  if ((uVar5 & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    ppuStack_2b8 = &PTR_FUN_11087fcd0;
    uStack_2b0 = 0;
    ppuStack_2a0 = (undefined **)0x0;
    lStack_298 = 0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    func_0x0001000daeac(alStack_288,param_2,0xc);
    if ((abStack_268[*(long *)(alStack_288[0] + -0x18)] & 5) == 0) {
      func_0x000100610c40(&pppuStack_2d0,
                          *(undefined8 *)((long)auStack_260 + *(long *)(alStack_288[0] + -0x18)),0);
      in_ZR = bStack_2b9 == 0;
      if (-1 < (char)bStack_2b9) {
        uStack_2c8 = (ulong)bStack_2b9;
        pppuStack_2d0 = &pppuStack_2d0;
      }
      pppuVar6 = &ppuStack_2b8;
      func_0x0001001a3c94(pppuVar6,pppuStack_2d0,uStack_2c8);
      lVar4 = lStack_298;
      if (((ulong)pppuVar6 & 1) == 0) {
        FUN_105344a58(alStack_288);
        *param_1 = 0;
        param_1[0x38] = 0;
      }
      else {
        ppuVar7 = &PTR_PTR_1130d1128;
        if (ppuStack_2a0 != (undefined **)0x0) {
          ppuVar7 = ppuStack_2a0;
        }
        puVar9 = (undefined8 *)((ulong)ppuVar7[2] & 0xfffffffffffffffc);
        lVar8 = (long)*(char *)((long)puVar9 + 0x17);
        if (lVar8 < 0) {
          lVar8 = puVar9[1];
          puVar9 = (undefined8 *)*puVar9;
        }
        func_0x00010069648c(auStack_2e8,puVar9,(long)puVar9 + lVar8);
        func_0x00010054f8dc(&uStack_340,auStack_2e8);
        in_ZR = ppuStack_2a0 == (undefined **)0x0;
        ppuVar7 = &PTR_PTR_1130d1128;
        if (!(bool)in_ZR) {
          ppuVar7 = ppuStack_2a0;
        }
        uStack_308 = *(undefined4 *)(ppuVar7 + 3);
        uStack_304 = *(undefined4 *)(ppuVar7 + 4);
        lStack_300 = lVar4 * 1000000;
        uStack_318 = uStack_338;
        uStack_320 = uStack_340;
        uStack_310 = uStack_330;
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0;
        uStack_2f0 = *(undefined8 *)(param_2 + 0x20);
        uStack_2f8 = *(undefined8 *)(param_2 + 0x18);
        if (*(long *)(param_2 + 0x20) != 0) {
          plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_1053901dc(param_1,&uStack_320);
        param_1[0x38] = 1;
        FUN_10538de14(&uStack_320);
        func_0x000100100fec(&uStack_340);
        func_0x000100100fec(auStack_2e8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_2d0);
    }
    else {
      *param_1 = 0;
      param_1[0x38] = 0;
      in_ZR = 0;
    }
    func_0x000100557e14(alStack_288);
    FUN_105393b44();
  }
  func_0x000105392848(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100100fec(auStack_2e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_2d0);
  func_0x000100557e14(alStack_288);
  pppuVar6 = &ppuStack_2b8;
  FUN_105393b44();
  func_0x000105392840();
  if (pppuVar6[3] == (undefined **)0x0) {
    ppuVar7 = pppuVar6[1];
    if (((ulong)ppuVar7 & 1) != 0) {
      ppuVar7 = *(undefined ***)((ulong)ppuVar7 & 0xfffffffffffffffe);
    }
    func_0x0001053927e8();
    pppuVar6[3] = ppuVar7;
  }
  return;
}



/* Entry: 1053927b0; end: 10539283b;  */

void FUN_1053927b0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001053927e8();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10539283c; end: 10539287b;  */

void FUN_10539283c(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if ((*param_1 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)
              (*param_1 & 0xfffffffffffffffc);
    return;
  }
  if (param_4 == 0) {
    func_0x000107c39894(param_2,param_3);
  }
  else {
    func_0x00010b4bf054();
    param_2 = param_4;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10539287c; end: 1053928d7;  */

void FUN_10539287c(long param_1)

{
  if ((*(char *)(param_1 + 0x28) == '\x01') && (func_0x000105392a4c(5), param_1 != 0)) {
    __ZNSt3__16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (param_1 + 0x18,0,10);
  }
  return;
}



/* Entry: 1053928d8; end: 1053928df;  */

void FUN_1053928d8(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 1;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uStack_24 = 1;
    lVar1 = param_2;
    FUN_1053929b0(param_2,&uStack_24);
    if (lVar1 != 0) {
      FUN_1053929b0(param_2,&uStack_28);
      func_0x0001002a8308(param_1,param_2 + 0x18);
      return;
    }
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1053928e0; end: 10539294b;  */

void FUN_1053928e0(undefined1 *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(char *)(param_2 + 0x28) == '\x01') &&
     (lVar1 = param_2, uStack_28 = param_3, uStack_24 = param_3, FUN_1053929b0(param_2,&uStack_24),
     lVar1 != 0)) {
    FUN_1053929b0(param_2,&uStack_28);
    func_0x0001002a8308(param_1,param_2 + 0x18);
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10539294c; end: 105392953;  */

void FUN_10539294c(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 4;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uStack_24 = 4;
    lVar1 = param_2;
    FUN_1053929b0(param_2,&uStack_24);
    if (lVar1 != 0) {
      FUN_1053929b0(param_2,&uStack_28);
      func_0x0001002a8308(param_1,param_2 + 0x18);
      return;
    }
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 105392954; end: 1053929af;  */

void FUN_105392954(long param_1)

{
  if ((*(char *)(param_1 + 0x28) == '\x01') && (func_0x000105392a4c(2), param_1 != 0)) {
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (param_1 + 0x18,0,10);
  }
  return;
}



/* Entry: 1053929b0; end: 105392a57;  */

long FUN_1053929b0(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 105392a58; end: 105392ab3;  */

void FUN_105392a58(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  FUN_105392e40();
  func_0x000105392eb8();
  func_0x000105392ef8();
  puVar1 = &UNK_11087f7a8;
  func_0x000105392e94();
  func_0x000105392ee0();
  func_0x000105392ee8();
  func_0x000105392ea4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105392ec8();
    func_0x000105392ee8();
    func_0x000105392ef0();
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    (**(code **)(*(long *)*param_1 + 0x18))
              ((long *)*param_1,&UNK_11087f7f8,&uStack_98,(long)puVar1 / 1000000);
    func_0x000105392ee0();
    return;
  }
  return;
}



/* Entry: 105392ab4; end: 105392b0f;  */

void FUN_105392ab4(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*(long *)*param_1 + 0x18))
            ((long *)*param_1,&UNK_11087f7f8,&uStack_38,param_2 / 1000000);
  func_0x000105392ee0();
  return;
}



/* Entry: 105392b10; end: 105392b6b;  */

undefined1 * FUN_105392b10(undefined1 *param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_280 [56];
  undefined8 uStack_248;
  undefined8 uStack_1d8;
  undefined1 auStack_190 [56];
  undefined8 uStack_158;
  undefined8 uStack_e8;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  FUN_105392e40();
  func_0x000105392eb8();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  func_0x000105392ee8();
  func_0x000105392ea4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105392ec8();
    func_0x000105392ee8();
    func_0x000105392ef0();
    FUN_105392e40();
    func_0x000105392eb8();
    func_0x000105392ef8();
    func_0x000105392e94();
    func_0x000105392ee0();
    func_0x000105392ee8();
    func_0x000105392ea4(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105392ec8();
      func_0x000105392ee8();
      func_0x000105392ef0();
      FUN_105392e40();
      func_0x000105392eb8();
      func_0x000105392ef8();
      func_0x000105392e94();
      func_0x000105392ee0();
      func_0x000105392ee8();
      func_0x000105392ea4(uStack_e8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000105392ec8();
        func_0x000105392ee8();
        func_0x000105392ef0();
        uStack_158 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000105392e74();
        func_0x000105392f14();
        func_0x000105392f30();
        func_0x000105392ef8();
        func_0x000105392e94();
        func_0x000105392ee0();
        lVar5 = 0x18;
        do {
          puVar3 = auStack_190 + lVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
          lVar5 = lVar5 + -0x18;
          bVar1 = lVar5 == -0x18;
        } while (!bVar1);
        func_0x000105392ea4(uStack_158);
        if (!bVar1) {
          ___stack_chk_fail();
          func_0x000105392ec8();
          lVar5 = 0x18;
          do {
            puVar3 = auStack_190 + lVar5;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
            lVar5 = lVar5 + -0x18;
            uVar2 = lVar5 == -0x18;
          } while (!(bool)uVar2);
          func_0x000105392ef0();
          FUN_105392e40();
          func_0x000105392eb8();
          func_0x000105392ef8();
          func_0x000105392e94();
          func_0x000105392ee0();
          func_0x000105392ee8();
          func_0x000105392ea4(uStack_1d8);
          if ((bool)uVar2) {
            return puVar3;
          }
          ___stack_chk_fail();
          func_0x000105392ec8();
          func_0x000105392ee8();
          func_0x000105392ef0();
          uStack_248 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          func_0x000105392e74();
          func_0x000105392f14();
          func_0x000105392f30();
          func_0x000105392ef8();
          func_0x000105392e94();
          func_0x000105392ee0();
          lVar5 = 0x18;
          do {
            puVar3 = auStack_280 + lVar5;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
            lVar5 = lVar5 + -0x18;
            bVar1 = lVar5 == -0x18;
          } while (!bVar1);
          func_0x000105392ea4(uStack_248);
          if (!bVar1) {
            ___stack_chk_fail();
            func_0x000105392ec8();
            lVar5 = 0x18;
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                        (auStack_280 + lVar5);
              lVar5 = lVar5 + -0x18;
            } while (lVar5 != -0x18);
            func_0x000105392ef0();
            if ((bRam00000001138196f0 & 1) == 0) {
              uVar4 = 0x1138196f0;
              ___cxa_guard_acquire();
              if ((int)uVar4 != 0) {
                func_0x000100077ef8();
                uRam00000001138196e8 = uVar4;
                ___cxa_guard_release(0x1138196f0);
              }
            }
            return (undefined1 *)0x1138196e8;
          }
        }
        return puVar3;
      }
    }
  }
  return param_1;
}



/* Entry: 105392b6c; end: 105392bc7;  */

undefined1 * FUN_105392b6c(undefined1 *param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_220 [56];
  undefined8 uStack_1e8;
  undefined8 uStack_178;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  FUN_105392e40();
  func_0x000105392eb8();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  func_0x000105392ee8();
  func_0x000105392ea4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105392ec8();
    func_0x000105392ee8();
    func_0x000105392ef0();
    FUN_105392e40();
    func_0x000105392eb8();
    func_0x000105392ef8();
    func_0x000105392e94();
    func_0x000105392ee0();
    func_0x000105392ee8();
    func_0x000105392ea4(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105392ec8();
      func_0x000105392ee8();
      func_0x000105392ef0();
      uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      func_0x000105392e74();
      func_0x000105392f14();
      func_0x000105392f30();
      func_0x000105392ef8();
      func_0x000105392e94();
      func_0x000105392ee0();
      lVar5 = 0x18;
      do {
        puVar3 = auStack_130 + lVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
        lVar5 = lVar5 + -0x18;
        bVar1 = lVar5 == -0x18;
      } while (!bVar1);
      func_0x000105392ea4(uStack_f8);
      if (!bVar1) {
        ___stack_chk_fail();
        func_0x000105392ec8();
        lVar5 = 0x18;
        do {
          puVar3 = auStack_130 + lVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
          lVar5 = lVar5 + -0x18;
          uVar2 = lVar5 == -0x18;
        } while (!(bool)uVar2);
        func_0x000105392ef0();
        FUN_105392e40();
        func_0x000105392eb8();
        func_0x000105392ef8();
        func_0x000105392e94();
        func_0x000105392ee0();
        func_0x000105392ee8();
        func_0x000105392ea4(uStack_178);
        if ((bool)uVar2) {
          return puVar3;
        }
        ___stack_chk_fail();
        func_0x000105392ec8();
        func_0x000105392ee8();
        func_0x000105392ef0();
        uStack_1e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000105392e74();
        func_0x000105392f14();
        func_0x000105392f30();
        func_0x000105392ef8();
        func_0x000105392e94();
        func_0x000105392ee0();
        lVar5 = 0x18;
        do {
          puVar3 = auStack_220 + lVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
          lVar5 = lVar5 + -0x18;
          bVar1 = lVar5 == -0x18;
        } while (!bVar1);
        func_0x000105392ea4(uStack_1e8);
        if (!bVar1) {
          ___stack_chk_fail();
          func_0x000105392ec8();
          lVar5 = 0x18;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      (auStack_220 + lVar5);
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != -0x18);
          func_0x000105392ef0();
          if ((bRam00000001138196f0 & 1) == 0) {
            uVar4 = 0x1138196f0;
            ___cxa_guard_acquire();
            if ((int)uVar4 != 0) {
              func_0x000100077ef8();
              uRam00000001138196e8 = uVar4;
              ___cxa_guard_release(0x1138196f0);
            }
          }
          return (undefined1 *)0x1138196e8;
        }
      }
      return puVar3;
    }
  }
  return param_1;
}



/* Entry: 105392bc8; end: 105392c23;  */

undefined1 * FUN_105392bc8(undefined1 *param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined8 uStack_118;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  FUN_105392e40();
  func_0x000105392eb8();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  func_0x000105392ee8();
  func_0x000105392ea4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000105392ec8();
  func_0x000105392ee8();
  func_0x000105392ef0();
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105392e74();
  func_0x000105392f14();
  func_0x000105392f30();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  lVar5 = 0x18;
  do {
    puVar3 = auStack_d0 + lVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    lVar5 = lVar5 + -0x18;
    bVar1 = lVar5 == -0x18;
  } while (!bVar1);
  func_0x000105392ea4(uStack_98);
  if (!bVar1) {
    ___stack_chk_fail();
    func_0x000105392ec8();
    lVar5 = 0x18;
    do {
      puVar3 = auStack_d0 + lVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      lVar5 = lVar5 + -0x18;
      uVar2 = lVar5 == -0x18;
    } while (!(bool)uVar2);
    func_0x000105392ef0();
    FUN_105392e40();
    func_0x000105392eb8();
    func_0x000105392ef8();
    func_0x000105392e94();
    func_0x000105392ee0();
    func_0x000105392ee8();
    func_0x000105392ea4(uStack_118);
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    func_0x000105392ec8();
    func_0x000105392ee8();
    func_0x000105392ef0();
    uStack_188 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000105392e74();
    func_0x000105392f14();
    func_0x000105392f30();
    func_0x000105392ef8();
    func_0x000105392e94();
    func_0x000105392ee0();
    lVar5 = 0x18;
    do {
      puVar3 = auStack_1c0 + lVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      lVar5 = lVar5 + -0x18;
      bVar1 = lVar5 == -0x18;
    } while (!bVar1);
    func_0x000105392ea4(uStack_188);
    if (!bVar1) {
      ___stack_chk_fail();
      func_0x000105392ec8();
      lVar5 = 0x18;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0 + lVar5);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000105392ef0();
      if ((bRam00000001138196f0 & 1) == 0) {
        uVar4 = 0x1138196f0;
        ___cxa_guard_acquire();
        if ((int)uVar4 != 0) {
          func_0x000100077ef8();
          uRam00000001138196e8 = uVar4;
          ___cxa_guard_release(0x1138196f0);
        }
      }
      return (undefined1 *)0x1138196e8;
    }
  }
  return puVar3;
}



/* Entry: 105392c24; end: 105392ccb;  */

undefined1 * FUN_105392c24(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  undefined8 uStack_b8;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105392e74();
  func_0x000105392f14();
  func_0x000105392f30();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  lVar5 = 0x18;
  do {
    puVar3 = auStack_70 + lVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    lVar5 = lVar5 + -0x18;
    bVar1 = lVar5 == -0x18;
  } while (!bVar1);
  func_0x000105392ea4(uStack_38);
  if (!bVar1) {
    ___stack_chk_fail();
    func_0x000105392ec8();
    lVar5 = 0x18;
    do {
      puVar3 = auStack_70 + lVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      lVar5 = lVar5 + -0x18;
      uVar2 = lVar5 == -0x18;
    } while (!(bool)uVar2);
    func_0x000105392ef0();
    func_0x000105392e40();
    func_0x000105392eb8();
    func_0x000105392ef8();
    func_0x000105392e94();
    func_0x000105392ee0();
    func_0x000105392ee8();
    func_0x000105392ea4(uStack_b8);
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    func_0x000105392ec8();
    func_0x000105392ee8();
    func_0x000105392ef0();
    uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000105392e74();
    func_0x000105392f14();
    func_0x000105392f30();
    func_0x000105392ef8();
    func_0x000105392e94();
    func_0x000105392ee0();
    lVar5 = 0x18;
    do {
      puVar3 = auStack_160 + lVar5;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      lVar5 = lVar5 + -0x18;
      bVar1 = lVar5 == -0x18;
    } while (!bVar1);
    func_0x000105392ea4(uStack_128);
    if (!bVar1) {
      ___stack_chk_fail();
      func_0x000105392ec8();
      lVar5 = 0x18;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160 + lVar5);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000105392ef0();
      if ((bRam00000001138196f0 & 1) == 0) {
        uVar4 = 0x1138196f0;
        ___cxa_guard_acquire();
        if ((int)uVar4 != 0) {
          func_0x000100077ef8();
          uRam00000001138196e8 = uVar4;
          ___cxa_guard_release(0x1138196f0);
        }
      }
      return (undefined1 *)0x1138196e8;
    }
  }
  return puVar3;
}



/* Entry: 105392ccc; end: 105392d27;  */

undefined1 * FUN_105392ccc(undefined1 *param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  FUN_105392e40();
  func_0x000105392eb8();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  func_0x000105392ee8();
  func_0x000105392ea4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000105392ec8();
  func_0x000105392ee8();
  func_0x000105392ef0();
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105392e74();
  func_0x000105392f14();
  func_0x000105392f30();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  lVar4 = 0x18;
  do {
    puVar2 = auStack_d0 + lVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105392ea4(uStack_98);
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105392ec8();
  lVar4 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000105392ef0();
  if ((bRam00000001138196f0 & 1) == 0) {
    uVar3 = 0x1138196f0;
    ___cxa_guard_acquire();
    if ((int)uVar3 != 0) {
      func_0x000100077ef8();
      uRam00000001138196e8 = uVar3;
      ___cxa_guard_release(0x1138196f0);
    }
  }
  return (undefined1 *)0x1138196e8;
}



/* Entry: 105392d28; end: 105392dcf;  */

undefined1 * FUN_105392d28(void)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105392e74();
  func_0x000105392f14();
  func_0x000105392f30();
  func_0x000105392ef8();
  func_0x000105392e94();
  func_0x000105392ee0();
  lVar4 = 0x18;
  do {
    puVar2 = auStack_70 + lVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105392ea4(uStack_38);
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105392ec8();
  lVar4 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000105392ef0();
  if ((bRam00000001138196f0 & 1) == 0) {
    uVar3 = 0x1138196f0;
    ___cxa_guard_acquire();
    if ((int)uVar3 != 0) {
      func_0x000100077ef8();
      uRam00000001138196e8 = uVar3;
      ___cxa_guard_release(0x1138196f0);
    }
  }
  return (undefined1 *)0x1138196e8;
}



/* Entry: 105392dd0; end: 105392e3f;  */

undefined8 FUN_105392dd0(void)

{
  undefined8 uVar1;
  
  if ((bRam00000001138196f0 & 1) == 0) {
    uVar1 = 0x1138196f0;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam00000001138196e8 = uVar1;
      ___cxa_guard_release(0x1138196f0);
    }
  }
  return 0x1138196e8;
}



/* Entry: 105392e40; end: 105392f3f;  */

void FUN_105392e40(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 105392f40; end: 105392f6f;  */

long FUN_105392f40(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 105392f70; end: 105392f73;  */

long FUN_105392f70(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 105392f74; end: 105392f87;  */

void FUN_105392f74(void)

{
  FUN_105392f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105392f88; end: 105392f93;  */

undefined ** FUN_105392f88(void)

{
  return &PTR_DAT_11087fb58;
}



/* Entry: 105392f94; end: 105392fd3;  */

void FUN_105392f94(long param_1)

{
  ulong *puVar1;
  
  func_0x00010029b2d4(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 105392fd4; end: 1053930c3;  */

long * FUN_105392fd4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_2 = param_3;
    func_0x0001001a5a30(param_3,1);
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar1 = param_3;
    func_0x0001001a597c(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x20);
    uVar2 = 0x10;
    func_0x0001001a59d0(0x10,plVar1);
    func_0x0001001a59d0(param_2,uVar2);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x0001001a597c(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x18);
    uVar2 = 0x18;
    func_0x0001001a59d0(0x18,plVar1);
    func_0x0001001a5a04(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar4,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 1053930c4; end: 10539321b;  */

long FUN_1053930c4(long *param_1,undefined8 param_2,int param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  
  if (*param_1 - (long)param_4 < (long)param_3) {
    while( true ) {
      iVar2 = ((int)*param_1 - (int)param_4) + 0x10;
      if (param_3 - iVar2 == 0 || param_3 < iVar2) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_4 + (long)iVar2;
      param_4 = param_1;
      func_0x000107c303e4(param_1,lVar1);
      param_3 = param_3 - iVar2;
    }
    func_0x00010b4d5738();
    return (long)param_4 + (long)param_3;
  }
  _memcpy(param_4,param_2,param_3);
  return (long)param_4 + (long)param_3;
}



/* Entry: 10539321c; end: 105393227;  */

undefined1  [16] FUN_10539321c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 9;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 105393228; end: 105393257;  */

long FUN_105393228(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_105393258(param_1);
  return param_1;
}



/* Entry: 105393258; end: 105393297;  */

long * FUN_105393258(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10539381c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10539381c();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 105393298; end: 10539329b;  */

long FUN_105393298(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_105393258(param_1);
  return param_1;
}



/* Entry: 10539329c; end: 1053932af;  */

void FUN_10539329c(void)

{
  FUN_105393228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053932b0; end: 1053932bb;  */

undefined ** FUN_1053932b0(void)

{
  return &PTR_DAT_11087fb98;
}



/* Entry: 1053932bc; end: 105393327;  */

void FUN_1053932bc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_1053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_105393874(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_105393874(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 105393328; end: 10539340f;  */

long * FUN_105393328(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x20);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_2 = (long *)0x1;
    func_0x0001053937a4(1,*puVar1,*(undefined4 *)(*puVar1 + 0x24));
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x0001053937a4(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x24));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x0001053937a4(3,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x24));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 105393410; end: 1053934bb;  */

long FUN_105393410(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar4 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = lVar4 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    FUN_1053934bc();
    lVar4 = uVar3 + lVar4;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      FUN_1053934bc();
      lVar4 = lVar4 + lVar5 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      FUN_1053934bc();
      lVar4 = lVar4 + lVar5 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1053934bc; end: 1053934e7;  */

long FUN_1053934bc(long param_1)

{
  FUN_1053939b0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1053934e8; end: 1053935cb;  */

void FUN_1053934e8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x00010064e820(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_105393744(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_105393a5c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_105393744(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_105393a5c();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1053935cc; end: 1053935db;  */

void FUN_1053935cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_11087fac8;
  puVar1[1] = param_2;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1053935dc; end: 10539360b;  */

long * FUN_1053935dc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10539360c; end: 1053936e3;  */

void FUN_10539360c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_11087fac8;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1053936e4; end: 105393743;  */

void FUN_1053936e4(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 105393744; end: 105393787;  */

undefined8 * FUN_105393744(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_11087fc28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar3 = param_2 + 0x10;
  func_0x0001002a0e60(lVar3,param_1);
  puVar2[2] = lVar3;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  puVar2[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(puVar2 + 4) = uVar1;
  return puVar2;
}



/* Entry: 105393788; end: 1053937ab;  */

void FUN_105393788(void)

{
  return;
}



/* Entry: 1053937ac; end: 10539381b;  */

undefined8 * FUN_1053937ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_11087fc28;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x0001002a0e60(lVar2,param_2);
  param_1[2] = lVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* Entry: 10539381c; end: 10539384f;  */

long FUN_10539381c(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 105393850; end: 105393853;  */

long FUN_105393850(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 105393854; end: 105393867;  */

void FUN_105393854(void)

{
  FUN_10539381c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105393868; end: 105393873;  */

undefined ** FUN_105393868(void)

{
  return &PTR_DAT_11087fc68;
}



/* Entry: 105393874; end: 1053938b7;  */

void FUN_105393874(long param_1)

{
  ulong *puVar1;
  
  func_0x00010029b2d4(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1053938b8; end: 1053939af;  */

long * FUN_1053938b8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = (long)*(char *)((param_1[2] & 0xfffffffffffffffcU) + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)((param_1[2] & 0xfffffffffffffffcU) + 8);
  }
  plVar2 = param_1;
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x0001001a5a30(param_3,1);
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[3] != 0) {
    func_0x000105393b04();
    plVar1 = (long *)0x10;
    func_0x0001001a59d0(0x10,plVar2);
    func_0x000105393b2c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x000105393b04();
    plVar2 = (long *)0x18;
    func_0x0001001a59d0(0x18,plVar1);
    func_0x000105393b2c();
    param_2 = plVar2;
  }
  if ((int)param_1[4] != 0) {
    func_0x000105393b04();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 4);
    uVar3 = 0x20;
    func_0x0001001a59d0(0x20,plVar2);
    func_0x0001001a59fc(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1053939b0; end: 105393a57;  */

void FUN_1053939b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1053939e8;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1053939e8:
    iVar1 = 0;
    goto LAB_1053939ec;
  }
  func_0x0001006016cc();
  iVar1 = (int)uVar2 + 1;
LAB_1053939ec:
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x000105393b10();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000105393b10();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 105393a58; end: 105393a5b;  */

void FUN_105393a58(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105393a5c; end: 105393aef;  */

void FUN_105393a5c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105393af0; end: 105393b43;  */

undefined1  [16] FUN_105393af0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0xc;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 105393b44; end: 105393b73;  */

long FUN_105393b44(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_105393b74(param_1);
  return param_1;
}



/* Entry: 105393b74; end: 105393b8f;  */

void FUN_105393b74(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10539381c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105393b90; end: 105393b93;  */

long FUN_105393b90(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_105393b74(param_1);
  return param_1;
}



/* Entry: 105393b94; end: 105393ba7;  */

void FUN_105393b94(void)

{
  FUN_105393b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105393ba8; end: 105393bb3;  */

undefined ** FUN_105393ba8(void)

{
  return &PTR_DAT_11087fd10;
}



/* Entry: 105393bb4; end: 105393c03;  */

void FUN_105393bb4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_105393874(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 105393c04; end: 105393cdf;  */

long * FUN_105393c04(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000100601864(1,param_1[3],*(undefined4 *)(param_1[3] + 0x24),param_2,param_3);
    param_2 = plVar1;
  }
  plVar6 = plVar1;
  if (param_1[4] != 0) {
    func_0x000105393e8c();
    plVar6 = (long *)param_1[4];
    uVar2 = 0x10;
    func_0x0001001a59d0(0x10,plVar1);
    func_0x0001001a5a04(plVar6,uVar2);
    param_2 = plVar6;
  }
  if ((int)param_1[5] != 0) {
    func_0x000105393e8c();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar2 = 0x18;
    func_0x0001001a59d0(0x18,plVar6);
    func_0x0001001a59d0(param_2,uVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 105393ce0; end: 105393d77;  */

void FUN_105393ce0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_1053934bc();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 105393d78; end: 105393e23;  */

void FUN_105393d78(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_105393744(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_105393a5c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 105393e24; end: 105393e37;  */

undefined1  [16] FUN_105393e24(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x14;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 105393e38; end: 105393e83;  */

void FUN_105393e38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_11087fcd0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 105393e84; end: 105393e97;  */

void FUN_105393e84(void)

{
  return;
}



/* Entry: 105393e98; end: 105393ecb;  */

undefined8 * FUN_105393e98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087fd78;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x000100561eb4();
  return param_1;
}



/* Entry: 105393ecc; end: 1053940bb;  */

void FUN_105393ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_158 [104];
  undefined4 uStack_f0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_88;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  func_0x0001005ff708(param_2,&uStack_48);
  if ((int)param_2 == 0) {
    plVar4 = (long *)*param_4;
    _bzero(auStack_158,0xf0);
    uStack_f0 = 0x3f800000;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x0001006b1fa8();
    func_0x000105394120(&uStack_190,0xd,&puStack_1a8);
    func_0x00010539552c(*(undefined8 *)(*plVar4 + 0x30));
    func_0x000100601c8c(&uStack_190);
    func_0x0001006b1fc4();
    func_0x00010060867c(auStack_158);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010002b838(auStack_158,"ArgosService");
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110880098;
    uStack_190 = uVar1;
    lStack_188 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x0001004b6e78();
      } while (extraout_w10 != 0);
      do {
        func_0x0001004b6e78();
      } while (extraout_w10_00 != 0);
    }
    puVar3[4] = uVar1;
    puVar3[5] = lVar2;
    func_0x000100601d1c(&uStack_190);
    puStack_1a8 = puVar3 + 3;
    *puStack_1a8 = &PTR_DAT_1108800e8;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_190 = 0;
    lStack_188 = 0;
    puStack_1a0 = puVar3;
    func_0x000100601d8c(uVar5,"/snap.security.ArgosService/GetTokens",&uStack_48,auStack_158,param_3
                        ,&puStack_1a8,&uStack_190);
    func_0x000100608514(&uStack_190);
    func_0x00010061db9c();
    FUN_10539538c(&uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  }
  func_0x000100601aa4(&uStack_48);
  return;
}



/* Entry: 1053940bc; end: 1053940e7;  */

bool FUN_1053940bc(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x000104ae2f28(lVar2,0);
    bVar1 = (int)lVar2 - 1U < 2;
  }
  return bVar1;
}



/* Entry: 1053940e8; end: 10539414f;  */

void FUN_1053940e8(void)

{
  func_0x000105395538();
  return;
}



/* Entry: 105394150; end: 1053941e3;  */

void FUN_105394150(long param_1)

{
  long *plVar1;
  int extraout_w10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [4];
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  plVar1 = alStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010060cc80();
  if (*plVar1 == *(long *)(param_1 + 0x38)) {
    FUN_1053941e4(&uStack_50);
  }
  else {
    FUN_105394250(*(long *)(param_1 + 0x38),&uStack_50);
  }
  FUN_1053943c0(&uStack_50);
  return;
}


