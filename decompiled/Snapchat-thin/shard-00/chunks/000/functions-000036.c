/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000e1c14; end: 1000e1c63;  */

void FUN_1000e1c14(void)

{
  return;
}



/* Entry: 1000e1c64; end: 1000e1c87;  */

undefined8 FUN_1000e1c64(undefined8 param_1)

{
  func_0x0001000e1c4c(param_1,0);
  return param_1;
}



/* Entry: 1000e1c88; end: 1000e1c93;  */

void FUN_1000e1c88(void)

{
  return;
}



/* Entry: 1000e1c94; end: 1000e1cf7; -[SCPreferences userId] */

void FUN_1000e1c94(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110ee4d18);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000e1cf8; end: 1000e1d13; -[SCDocPreferences objectForKeyedSubscript:] */

void FUN_1000e1cf8(void)

{
  func_0x000107c4d9c0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000e1d14; end: 1000e2313; -[SCDocPreferences objectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e1d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_218 = &uStack_1e8;
  uStack_1e8 = 0;
  uStack_1d8 = 0x3032000000;
  pcStack_1d0 = FUN_1000e3840;
  pcStack_1c8 = FUN_1001056cc;
  uStack_1c0 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  lVar11 = (long)_DAT_11278e9ec;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_1000e3bd4;
  puStack_230 = &UNK_110c742b0;
  lStack_228 = param_1;
  puStack_200 = &uStack_208;
  puStack_1e0 = puStack_218;
  func_0x000107c61174(param_3);
  uStack_220 = param_3;
  puStack_210 = &uStack_208;
  FUN_10006eaa4(uVar8,&puStack_248);
  if (*(char *)(puStack_200 + 3) == '\x01') {
    uVar8 = puStack_1e0[5];
    func_0x000107c61174(uVar8);
    goto LAB_1000e2240;
  }
  lVar10 = *(long *)(param_1 + _DAT_11278e9f4);
  func_0x000107c61174(lVar10);
  func_0x000107c61174(param_3);
  func_0x000107c61158(PTR_PTR_1126e0340);
  if (lVar10 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_b0,lVar10);
  }
  puVar4 = &uStack_121;
  FUN_1000e773c();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  func_0x000107c61174(param_3);
  ppuStack_198 = &PTR_DAT_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_110862700;
  pppuStack_e0 = &ppuStack_198;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar5 = &uStack_b0;
  uStack_168 = param_3;
  puStack_e8 = puVar4;
  FUN_1000e77a0(puVar5,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  func_0x000107c61180();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    func_0x000107c60e14();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_DAT_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  FUN_100105004(&puStack_1b0);
  plVar3 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862760;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1b0 = &uStack_150;
  FUN_100105004(&puStack_1b0);
  func_0x000107c61170(uStack_168);
  FUN_1000e76e0(&uStack_88);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  puVar9 = puVar5;
  func_0x000107c40808();
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar5;
    func_0x000107c43638();
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar10);
  if (puVar9 == (undefined8 *)0x0) {
    if (*(char *)(param_1 + _DAT_11278ea08) == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + lVar11);
      puStack_280 = puVar2;
      uStack_278 = 0xc2000000;
      puStack_270 = &UNK_10b5e5d70;
      puStack_268 = &UNK_110994c48;
      puStack_250 = &uStack_1e8;
      lStack_260 = param_1;
      func_0x000107c61174(param_3);
      uStack_258 = param_3;
      FUN_10006eaa4(uVar8,&puStack_280);
      uVar8 = uStack_258;
      goto LAB_1000e21e4;
    }
  }
  else {
    func_0x000107c61174(puVar9);
    puVar5 = puVar9;
    func_0x000107c5dba0();
    puVar6 = PTR_PTR_1126bdbc0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = (uint)puVar5 & 0xff;
    if (uVar1 < 4) {
      if (uVar1 == 1) {
        puVar5 = puVar9;
        func_0x000107c5db8c(puVar9);
        func_0x000107c61180();
        func_0x000107c4d9f0();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
      }
      else if (uVar1 == 2) {
        func_0x000107c5db80(puVar9);
        func_0x000107c4d950();
        func_0x000107c61180();
        puVar6 = puVar7;
      }
      else {
        puVar6 = (undefined *)0x0;
        if (uVar1 == 3) {
          func_0x000107c5db98(puVar9);
          func_0x000107c4d968();
          func_0x000107c61180();
          puVar6 = puVar7;
        }
      }
    }
    else if (uVar1 == 4) {
      func_0x000107c5dba8(puVar9);
      func_0x000107c4d978();
      func_0x000107c61180();
      puVar6 = puVar7;
    }
    else if (uVar1 == 5) {
      func_0x000107c5db90(puVar9);
      func_0x000107c4d958();
      func_0x000107c61180();
      puVar6 = puVar7;
    }
    else {
      puVar6 = (undefined *)0x0;
      if (uVar1 == 6) {
        func_0x000107c5db88(puVar9);
        func_0x000107c4d954();
        func_0x000107c61180();
        puVar6 = puVar7;
      }
    }
    func_0x000107c61170(puVar9);
    uVar8 = puStack_1e0[5];
    puStack_1e0[5] = puVar6;
LAB_1000e21e4:
    func_0x000107c61170(uVar8);
  }
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  puStack_2b8 = puVar2;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_100105554;
  puStack_2a0 = &UNK_110994c48;
  lStack_298 = param_1;
  func_0x000107c61174(param_3);
  puStack_288 = &uStack_1e8;
  uStack_290 = param_3;
  FUN_10006eaa4(uVar8,&puStack_2b8);
  uVar8 = puStack_1e0[5];
  func_0x000107c61174(uVar8);
  func_0x000107c61170(uStack_290);
  func_0x000107c61170(puVar9);
LAB_1000e2240:
  func_0x000107c61170(uStack_220);
  func_0x000107c60bcc(&uStack_208,8);
  func_0x000107c60bcc(&uStack_1e8,8);
  func_0x000107c61170(uStack_1c0);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1000e2314; end: 1000e2567; -[SCPageLoadMetricServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e2314(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar14 = (long)_DAT_1127461a4;
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c9f10;
  func_0x000107c610f4();
  lVar4 = param_1 + _DAT_1127461ac;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_1127461a8;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c40fb0();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c40fa4();
  func_0x000107c61180();
  lVar9 = param_1 + _DAT_1127461b0;
  func_0x000107c61148(lVar9);
  lVar10 = lVar9;
  func_0x000107c42eb4();
  func_0x000107c61180();
  lVar11 = param_1 + _DAT_1127461c0;
  func_0x000107c61148(lVar11);
  lVar12 = lVar11;
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c41424();
  func_0x000107c61180();
  func_0x000107c477e0();
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar3;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar3 = PTR_PTR_1126c9f18;
  func_0x000107c610f4(PTR_PTR_1126c9f18);
  func_0x000107c47d14();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1000e2568; end: 1000e2597; -[SCRequestScheduler setRunningNSURLSessionTasks:] */

void FUN_1000e2568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e2598; end: 1000e260b; -[SCRequestTaskPool init] */

undefined1 * FUN_1000e2598(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706008;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    func_0x000107c59c34(puVar1);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e260c; end: 1000e263b; -[SCRequestTaskPool setTasks:] */

void FUN_1000e260c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e263c; end: 1000e266b; -[SCRequestScheduler setAllTasks:] */

void FUN_1000e263c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e266c; end: 1000e269b; +[SCDisplayContextFactory rootContextForPageType:] */

void FUN_1000e266c(void)

{
  func_0x000107c610f4(PTR_PTR_1126dfe20);
  func_0x000107c483f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000e269c; end: 1000e276f;  */

void FUN_1000e269c(long param_1)

{
  if (param_1 < 3) {
    if (param_1 == 0) {
      func_0x000107c3f040(PTR_PTR_1126b19f8);
      func_0x000107c61180();
    }
    else if (param_1 == 1) {
      func_0x000107c4cdf0(PTR_PTR_1126b19f8);
      func_0x000107c61180();
    }
    else if (param_1 == 2) {
      func_0x000107c41f5c(PTR_PTR_1126b19f8);
      func_0x000107c61180();
    }
  }
  else if (param_1 == 3) {
    func_0x000107c4c27c(PTR_PTR_1126b19f8);
    func_0x000107c61180();
  }
  else if (param_1 == 4) {
    func_0x000107c4f8b4(PTR_PTR_1126b19f8);
    func_0x000107c61180();
  }
  else if (param_1 == 5) {
    func_0x000107c4cb08(PTR_PTR_1126b19f8);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000e2770; end: 1000e27d3; -[SCDisplayContext initWithRootPageType:] */

undefined8 FUN_1000e2770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1000e269c(param_3);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c496ac(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1000e27d4; end: 1000e27ef; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts camera] */

void FUN_1000e27d4(void)

{
  if (lRam000000011363c890 != -1) {
    func_0x000107c61568(0x11363c890,FUN_1000e2878);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813988);
  return;
}



/* Entry: 1000e27f0; end: 1000e2833;  */

void FUN_1000e27f0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 1000e2834; end: 1000e2877;  */

void FUN_1000e2834(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4c408 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4c408 = puVar1;
  return;
}



/* Entry: 1000e2878; end: 1000e28b7;  */

void FUN_1000e2878(void)

{
  undefined *puVar1;
  
  FUN_1000e2834(0);
  puVar1 = &DAT_10f2e822b;
  func_0x000107c60124(&DAT_10f2e822b,6,2);
  puRam0000000113813988 = puVar1;
  return;
}



/* Entry: 1000e28b8; end: 1000e296b; -[SCDisplayContext initwithContext:] */

undefined1 * FUN_1000e28b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar2 = param_1;
  puVar4 = puVar1;
  func_0x000107c4614c();
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  func_0x000107c60e78();
  ppuVar3 = &puStack_70;
  pcStack_48 = FUN_1000e296c;
  puStack_60 = param_1;
  puStack_58 = puVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar4);
  puStack_68 = PTR_PTR_112705f40;
  puStack_70 = puVar1;
  func_0x000107c61154(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar1 = puVar4;
    func_0x000107c40794();
    uVar5 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined **)((long)ppuVar3 + 0x10) = puVar1;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar4);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1000e296c; end: 1000e29e3; -[SCDisplayContext initWithContexts:] */

undefined1 * FUN_1000e296c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705f40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000e29e4; end: 1000e29ff; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts messages] */

void FUN_1000e29e4(void)

{
  if (lRam000000011363c8a0 != -1) {
    func_0x000107c61568(0x11363c8a0,FUN_1000e2a00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813998);
  return;
}



/* Entry: 1000e2a00; end: 1000e2a3f;  */

void FUN_1000e2a00(void)

{
  undefined *puVar1;
  
  FUN_1000e2834(0);
  puVar1 = &DAT_10f355863;
  func_0x000107c60124(&DAT_10f355863,8,2);
  puRam0000000113813998 = puVar1;
  return;
}



/* Entry: 1000e2a40; end: 1000e2a43; -[SCRequestScheduler _setupNetworkTracing] */

void FUN_1000e2a40(void)

{
  return;
}



/* Entry: 1000e2a44; end: 1000e2ac3; -[SCApplicationWindow applyAnimationsDisabled:] */

void FUN_1000e2a44(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c59628(0x42c80000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1000e2ac4; end: 1000e2acf; -[SCRequestScheduler setDelegate:] */

void FUN_1000e2ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1000e2ad0; end: 1000e2b27; -[SCNetworkManager _addObservers] */

void FUN_1000e2ad0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1000e2b28; end: 1000e2b33; -[SCNetworkManager setDelegate:] */

void FUN_1000e2b28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1000e2b34; end: 1000e2b3b; -[SCNetworkManager queuePerformer] */

undefined8 FUN_1000e2b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000e2b3c; end: 1000e2b43; -[SCRequestManager setNetworkInterceptors:] */

void FUN_1000e2b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cc290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setNetworkInterceptors__112650ac8);
  return;
}



/* Entry: 1000e2b44; end: 1000e2b7b; -[SCNetworkManager setNetworkInterceptors:] */

void FUN_1000e2b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c56a50(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000e2b7c; end: 1000e2b83; -[SCRequestScheduler setNetworkInterceptors:] */

void FUN_1000e2b7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1000e2b84; end: 1000e2b8b; -[SCRequestManager setNetworkDeps:] */

void FUN_1000e2b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cc190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setNetworkDeps__112650a88);
  return;
}



/* Entry: 1000e2b8c; end: 1000e2c2b; -[SCNetworkManager setNetworkDeps:] */

/* WARNING: Possible PIC construction at 0x0001000e2be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e2c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e2be8) */
/* WARNING: Removing unreachable block (ram,0x0001000e2c0c) */

void FUN_1000e2b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c56a48(uVar2,param_2,param_3);
  puVar1 = PTR_PTR_1126c1078;
  func_0x000107c3f6cc(param_3);
  func_0x000107c61180();
  func_0x000107c53280(puVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000e2c2c; end: 1000e2c5b; -[SCRequestScheduler setNetworkDeps:] */

void FUN_1000e2c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e2c5c; end: 1000e2c67; -[SCNetworkDeps carrierInfoProvider] */

void FUN_1000e2c5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 1000e2c68; end: 1000e2c97; +[SCCarrierNetworkInfoStaticProvider setCarrierNetworkInfoProvider:] */

void FUN_1000e2c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001137f46a0;
  uRam00000001137f46a0 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e2c98; end: 1000e2ca3; -[SCNetworkDeps connectivityInternalMonitor] */

void FUN_1000e2c98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1000e2ca4; end: 1000e2ce7; +[SCAPIClientLogger setConnectivityMonitor:] */

/* WARNING: Possible PIC construction at 0x0001000e2cd4: Changing call to branch */

void FUN_1000e2ca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    lVar1 = lRam00000001137f4648;
    lRam00000001137f4648 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1000e2ce8; end: 1000e2cef; -[SCApplicationCircumstanceEngineServices circumstanceEngine] */

void FUN_1000e2ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1000e2cf0; end: 1000e2d4f;  */

void FUN_1000e2cf0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000cb560();
  FUN_1000cb690();
  FUN_1000e2d70();
  FUN_1000e2e1c(uStack_30,param_2);
  func_0x0001000cb6f8();
  FUN_1000e2e50();
  func_0x0001000cb720(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010533bc84();
  FUN_1000e2e50();
  func_0x00010533bbe8();
  pcStack_48 = FUN_1000e2d50;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1000e2cf0(&uStack_51,uStack_30);
  return;
}



/* Entry: 1000e2d50; end: 1000e2d6f;  */

void FUN_1000e2d50(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1000e2cf0(&uStack_11,param_1);
  return;
}



/* Entry: 1000e2d70; end: 1000e2d8f;  */

void FUN_1000e2d70(void)

{
  func_0x0001000cb69c();
  FUN_1000e2d90();
  FUN_1000cb6e4();
  return;
}



/* Entry: 1000e2d90; end: 1000e2dab;  */

void FUN_1000e2d90(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((ulong)param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1000e2dac; end: 1000e2e1b;  */

void FUN_1000e2dac(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1000e2e1c; end: 1000e2e4f;  */

undefined8 * FUN_1000e2e1c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11087c4c8;
  param_1[1] = 0;
  FUN_1000e2dac(param_1 + 3);
  return param_1;
}



/* Entry: 1000e2e50; end: 1000e2e5f;  */

void FUN_1000e2e50(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1000e2e60; end: 1000e2eb3;  */

void FUN_1000e2e60(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1000e2eb4; end: 1000e2ecb;  */

void FUN_1000e2eb4(long *param_1)

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



/* Entry: 1000e2ecc; end: 1000e2f13;  */

undefined8 FUN_1000e2ecc(undefined8 param_1)

{
  FUN_1000e2eb4(param_1,0);
  return param_1;
}



/* Entry: 1000e2f14; end: 1000e2f4f;  */

void FUN_1000e2f14(long param_1)

{
  FUN_1000e1320();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1000e2f50; end: 1000e2f5b;  */

void FUN_1000e2f50(void)

{
  return;
}



/* Entry: 1000e2f5c; end: 1000e2f9f;  */

void FUN_1000e2f5c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  
  FUN_1000e2f50();
  puVar1 = (undefined8 *)0x60;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_11087c340;
  FUN_1000e1320();
  *unaff_x20 = puVar2;
  unaff_x20[1] = puVar1;
  return;
}



/* Entry: 1000e2fa0; end: 1000e2fe7;  */

void FUN_1000e2fa0(void)

{
  func_0x0001000dee18();
  func_0x0001000e2fc4();
  return;
}



/* Entry: 1000e2fe8; end: 1000e2fff;  */

void FUN_1000e2fe8(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000048;
  func_0x0001000d04c0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000e3000; end: 1000e3067;  */

void FUN_1000e3000(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  func_0x0001000e2ff0();
  FUN_1000e3068();
  func_0x0001000e3088();
  FUN_1000e30d0();
  puVar1 = (undefined8 *)&UNK_11087bf20;
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000105338714();
  func_0x0001000e312c();
  func_0x00010533873c();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 1000e3068; end: 1000e3097;  */

void FUN_1000e3068(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 1000e3098; end: 1000e30cf;  */

undefined8 * FUN_1000e3098(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10007e1e8(param_1,param_2,param_2 + param_3 * 0x18,param_3);
  return param_1;
}



/* Entry: 1000e30d0; end: 1000e30f3;  */

void FUN_1000e30d0(void)

{
  return;
}



/* Entry: 1000e30f4; end: 1000e311f;  */

undefined8 FUN_1000e30f4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10007e5dc(&uStack_28);
  return param_1;
}



/* Entry: 1000e3120; end: 1000e315b;  */

void FUN_1000e3120(void)

{
  return;
}



/* Entry: 1000e315c; end: 1000e31fb;  */

void FUN_1000e315c(long param_1)

{
  func_0x0001000d04c0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000e31fc; end: 1000e3257; -[SCConfigRepository _markAserSyncIfNecessary] */

void FUN_1000e31fc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1000f6d38;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x000107c4e590(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1000e3258; end: 1000e32cf; -[SCQueuePerformer performImmediatelyIfCurrentPerformer:] */

/* WARNING: Possible PIC construction at 0x0001000e329c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e32a0) */

void FUN_1000e3258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c49be8();
  if ((int)uVar1 == 0) {
    func_0x000107c4e524(param_1,param_2,param_3);
  }
  else {
    func_0x000107c3becc(param_1,param_2,param_3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000e32d0; end: 1000e331b; -[SCQueuePerformer isCurrentPerformer] */

undefined * FUN_1000e32d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x42) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
                    /* WARNING: Could not recover jumptable at 0x00010c077490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSThread_1126b47e0,PTR_s_isMainThread_1125fb730);
    return puVar2;
  }
  iVar1 = 0xe6045a8;
  func_0x000107c60f30(&UNK_10e6045a8);
  return (undefined *)(ulong)(*(int *)(param_1 + 0x18) == iVar1);
}



/* Entry: 1000e331c; end: 1000e3357;  */

void FUN_1000e331c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000e3358; end: 1000e338b;  */

void FUN_1000e3358(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1000e338c; end: 1000e3397;  */

void FUN_1000e338c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 auStack_80 [6];
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  FUN_1000298f0(puVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000026;
  FUN_1000a9a18(0xd000000000000026,0x800000010ef872d0);
  func_0x000107c61170(uVar3);
  func_0x0001000ad7c4();
  uVar8 = uVar3;
  func_0x0001000ad7c4();
  puVar5 = PTR_PTR_1126a7540;
  func_0x000107c610f8(PTR_PTR_1126a7540);
  func_0x000107c459d4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar5);
  puVar6 = puVar5;
  func_0x0001000ad7c4();
  FUN_100083b20(auStack_80);
  puVar7 = PTR_PTR_1126d5428;
  func_0x000107c610f8();
  func_0x000107c4751c();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(auStack_80[0]);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(puVar5);
    *param_1 = puVar7;
    func_0x000107c61428(puVar2,auStack_80,0,0);
    uVar8 = *puVar2;
    func_0x000107c61174(uVar8);
    FUN_1000aa0a8(uVar4);
    func_0x000107c61170(uVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e3518);
  (*pcVar1)();
}



/* Entry: 1000e3398; end: 1000e3517;  */

void FUN_1000e3398(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 auStack_80 [6];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000026;
  FUN_1000a9a18(0xd000000000000026,0x800000010ef872d0);
  func_0x000107c61170(uVar2);
  func_0x0001000ad7c4();
  uVar7 = uVar2;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126a7540;
  func_0x000107c610f8(PTR_PTR_1126a7540);
  func_0x000107c459d4();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar4);
  puVar5 = puVar4;
  func_0x0001000ad7c4();
  FUN_100083b20(auStack_80);
  puVar6 = PTR_PTR_1126d5428;
  func_0x000107c610f8();
  func_0x000107c4751c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(auStack_80[0]);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    *param_1 = puVar6;
    func_0x000107c61428(param_2,auStack_80,0,0);
    uVar7 = *param_2;
    func_0x000107c61174(uVar7);
    FUN_1000aa0a8(uVar3);
    func_0x000107c61170(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e3518);
  (*pcVar1)();
}



/* Entry: 1000e3518; end: 1000e35bb; -[SCExposureLogBlizzard initWithBlizzard:deviceIdentifierProvider:] */

undefined1 *
FUN_1000e3518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7950;
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



/* Entry: 1000e35bc; end: 1000e36f7; -[SCExperimentStore initWithLogger:metrics:appStartExperimentReader:] */

undefined1 *
FUN_1000e35bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1126f8ce8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d5430;
    func_0x000107c610f4();
    puVar5 = puVar4;
    FUN_100088750();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c46918();
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61174(puVar2);
    puVar1 = puRam00000001136ca0d8;
    puRam00000001136ca0d8 = (undefined1 *)puVar2;
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1000e36f8; end: 1000e37f3; -[SCExperimentPreferenceStore initWithFilePath:logger:metrics:appStartExperimentReader:] */

undefined8
FUN_1000e36f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6ac8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b7870;
  func_0x000107c442b0(PTR_PTR_1126b7870);
  func_0x000107c61180();
  func_0x000107c4691c(param_1,param_2,param_3,param_4,param_5,puVar1,0,puVar2,param_6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1000e37f4; end: 1000e383f;  */

/* WARNING: Possible PIC construction at 0x0001000e3824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e3828) */

void FUN_1000e37f4(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 1000e3840; end: 1000e384f;  */

void FUN_1000e3840(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1000e3850; end: 1000e38a3; +[SCAppStartExperimentReaderConstants getSetOfSafeModeOptOutConfigs] */

void FUN_1000e3850(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc238 != -1) {
    FUN_10002a2fc(0x1137fc238,&PTR___NSConcreteGlobalBlock_110d66a08);
  }
  uVar1 = uRam00000001137fc230;
  func_0x000107c61174(uRam00000001137fc230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000e38a4; end: 1000e3b93;  */

void FUN_1000e38a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c610f4();
  func_0x000107c47b54();
  uVar1 = puRam00000001137fc230;
  puRam00000001137fc230 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e3b94; end: 1000e3bb3; -[_TtC13SCSystemScope13SCSystemScope applicationLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3b94(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113091b70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000e3bb4; end: 1000e3bd3; -[_TtC21SCAttributionServices21SCAttributionServices currentPageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3bb4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113097748));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000e3bd4; end: 1000e3c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3bd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e9f8);
  func_0x000107c4d9e8(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar2 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107c61170();
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  FUN_1000e3c80();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if (lVar4 == lVar2) {
    *(undefined8 *)(lVar3 + 0x28) = 0;
    func_0x000107c61170();
  }
  else if (*(long *)(lVar3 + 0x28) == 0) {
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1000e3c80; end: 1000e3cd3;  */

void FUN_1000e3c80(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7310 != -1) {
    FUN_10002a2fc(0x1137f7310,&PTR___NSConcreteGlobalBlock_110d25440);
  }
  uVar1 = uRam00000001137f7318;
  func_0x000107c61174(uRam00000001137f7318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000e3cd4; end: 1000e3cff;  */

void FUN_1000e3cd4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x000107c61160();
  uVar1 = puRam00000001137f7318;
  puRam00000001137f7318 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e3d00; end: 1000e3d3f;  */

/* WARNING: Possible PIC construction at 0x0001000e3d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e3d30) */

void FUN_1000e3d00(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x38),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000e3d40; end: 1000e3d5f; -[_TtC30SCFeatureStartupSignalServices28FeatureStartupSignalServices featureStartupEventBus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e3d40(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11307d830));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000e3d60; end: 1000e40df; -[SCPageLoadMetricManagerImpl initWithMetricReport:applicationLifecycleEvents:currentPageEvent:featureStartupEventBus:deckTransitionEvents:] */

undefined8 *
FUN_1000e3d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
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
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_80 = PTR_PTR_1126f0fd0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    uVar4 = puVar1[6];
    puVar1[6] = 0;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_90,puVar1);
    uVar3 = puVar1[3];
    func_0x000107c41b80(uVar3);
    func_0x000107c61180();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1063737a4;
    puStack_a0 = &UNK_110846510;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar3 = puVar1[3];
    func_0x000107c5e370(uVar3);
    func_0x000107c61180();
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_1063737d0;
    puStack_c8 = &UNK_110846510;
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    puStack_108 = puVar2;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_100878030;
    puStack_f0 = &UNK_11085f420;
    func_0x000107c6111c(auStack_e8,auStack_90);
    uVar4 = param_7;
    func_0x000107c5c320(param_7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c6111c(auStack_110,auStack_90);
    uVar4 = param_5;
    func_0x000107c5c320(param_5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    *(undefined4 *)(puVar1 + 10) = 0;
    func_0x000107c61120(auStack_110);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000e40e0; end: 1000e40f3; -[SCApplicationLifecycleEventsImpl willEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e40e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091dd0));
  return;
}



/* Entry: 1000e40f4; end: 1000e429f; -[SCSQLiteDocObjectContext fetchForClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e40f4(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b04a8;
  func_0x000107c421f0();
  func_0x000107c61180();
  func_0x000107c61170();
  if (param_2 == puVar1) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_11278eb28);
    uVar2 = *(undefined8 *)(param_2 + _DAT_11278eb18);
    uVar4 = *(undefined8 *)(param_2 + _DAT_11278eb14);
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar2);
    *param_1 = FUN_1000e7990;
    param_1[1] = param_4;
    param_1[2] = param_2;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1000e76e0(&uStack_60);
  }
  else {
    puVar1 = PTR_PTR_1126e0378;
    FUN_1000e4380();
    func_0x000107c61180();
    if ((puVar1 == (undefined *)0x0) || (param_2 != *(undefined **)(puVar1 + 0x18))) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_11278eb28);
      FUN_1000e441c(&uStack_60,*(undefined8 *)(param_2 + _DAT_11278eb1c));
      uVar2 = *(undefined8 *)(param_2 + _DAT_11278eb18);
      func_0x000107c61174(param_2);
      func_0x000107c61174(uVar2);
      *param_1 = FUN_1000e7990;
      param_1[1] = param_4;
      param_1[2] = param_2;
      param_1[3] = uVar2;
      param_1[4] = uVar3;
      param_1[6] = uStack_58;
      param_1[5] = uStack_60;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + _DAT_11278eb18);
      uVar3 = *(undefined8 *)(puVar1 + 0x20);
      uVar4 = *(undefined8 *)(puVar1 + 8);
      func_0x000107c61174(param_2);
      func_0x000107c61174(uVar2);
      *param_1 = FUN_1000e7990;
      param_1[1] = param_4;
      param_1[2] = param_2;
      param_1[3] = uVar2;
      param_1[4] = uVar3;
      param_1[5] = uVar4;
      param_1[6] = 0;
    }
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1000e76e0(&uStack_60);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1000e42a0; end: 1000e4337; +[SCDocObjectContext docObjectCurrentContext] */

void FUN_1000e42a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c8f4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1000e4338; end: 1000e437f;  */

/* WARNING: Possible PIC construction at 0x0001000e436c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e4370) */

void FUN_1000e4338(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1000e4380; end: 1000e441b;  */

void FUN_1000e4380(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61168();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c8f4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1000e441c; end: 1000e44f3;  */

/* WARNING: Possible PIC construction at 0x0001000e4484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e44b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e4488) */
/* WARNING: Removing unreachable block (ram,0x0001000e44b4) */
/* WARNING: Removing unreachable block (ram,0x0001000e44d4) */
/* WARNING: Removing unreachable block (ram,0x0001000e448c) */
/* WARNING: Removing unreachable block (ram,0x0001000e44cc) */
/* WARNING: Removing unreachable block (ram,0x0001000e44e0) */

void FUN_1000e441c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  func_0x000107c60d88(param_2 + 5);
  if (((*(byte *)((long)param_2 + 0x69) & 1) == 0) && ((char)param_2[0xd] == '\x01')) {
    func_0x000107c60f38(param_2[4]);
    if (*param_2 != param_2[1]) {
      puVar1 = (undefined8 *)(param_2[1] + -8);
      *puVar1 = 0;
      FUN_1000fed50(puVar1,0);
      param_2[1] = (long)puVar1;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 5);
  return;
}



/* Entry: 1000e44f4; end: 1000e45c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e44f4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_2 = param_2 + 0x20;
  func_0x000107c61148();
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = 0x88;
    func_0x000107c60e20();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11278eb10);
    func_0x000107c3ac4c(uVar2);
    FUN_1000e45c8(lVar1,uVar2,2);
    *param_1 = lVar1;
    if ((*(byte *)(lVar1 + 0x50) & 1) == 0) {
      FUN_1000fed50(param_1,0);
    }
    else {
      func_0x000107c6133c(*(undefined8 *)(lVar1 + 0x58),0x1000fed78,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1000e45c8; end: 1000e4673;  */

undefined8 * FUN_1000e45c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  puVar1 = param_1 + 0xb;
  param_1[0xc] = 0;
  *puVar1 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  func_0x000107c6139c(param_2,puVar1,param_3,0);
  *(bool *)(param_1 + 10) = (int)param_2 == 0;
  if ((int)param_2 == 0) {
    func_0x000107c61384(*puVar1,1);
  }
  return param_1;
}



/* Entry: 1000e4674; end: 1000e46e3; -[SCPageLoadMetricManagerImpl _onPageEvent:] */

void FUN_1000e4674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1000e487c;
  puStack_20 = &UNK_110872390;
  uStack_18 = param_1;
  func_0x000107c4c730(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_11091f268,
                      &PTR___NSConcreteGlobalBlock_11091f288,&PTR___NSConcreteGlobalBlock_11091f2a8)
  ;
  return;
}



/* Entry: 1000e46e4; end: 1000e4757; -[SCCurrentPageEvent matchStartPageView:endPageView:startTransition:endTransition:] */

void FUN_1000e46e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_1000d1128(FUN_1000e4758,auStack_40,FUN_1008ce078,auStack_60,&UNK_10489a65c,auStack_80,
                &UNK_10489a664,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1000e4758; end: 1000e475f;  */

void FUN_1000e4758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d373d8;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  FUN_1000bc298(param_4,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(param_1,lVar3,param_2,param_3,puVar5,param_5 & 1);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1000e4760; end: 1000e487b;  */

void FUN_1000e4760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,long param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  FUN_1000bc298(param_4,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  (**(code **)(param_6 + 0x10))(param_1,param_6,param_2,param_3,puVar4,param_5 & 1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1000e487c; end: 1000e48bf;  */

void FUN_1000e487c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afdd8;
  func_0x000107c441b4(PTR_PTR_1126afdd8,param_2,param_2);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1000e48c0; end: 1000e6447;  */

undefined1  [16] FUN_1000e48c0(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined8 uStack_18;
  
  uVar2 = 0xe000000000000000;
  switch(param_1) {
  case 0:
    goto code_r0x0001000e6414;
  case 1:
    pcVar4 = "ACTION_SHEET/DUMMY";
    goto code_r0x0001000e6400;
  case 2:
    auVar36._8_8_ = 0xef5245544e45435f;
    auVar36._0_8_ = 0x5954495649544341;
    return auVar36;
  case 3:
    uVar3 = 0x5954495649544341;
    goto code_r0x0001000e59e4;
  case 4:
    pcVar4 = "ACTIVITY_FEED_PAGE";
    goto code_r0x0001000e6400;
  case 5:
    auVar43._8_8_ = 0xe200000000000000;
    auVar43._0_8_ = 0x4441;
    return auVar43;
  case 6:
    pcVar4 = "AdOpera/Settings";
    goto code_r0x0001000e6088;
  case 7:
    auVar24._8_8_ = 0xea00000000006465;
    auVar24._0_8_ = 0x6546746168436441;
    return auVar24;
  case 8:
    auVar117._8_8_ = 0xeb0000000053444e;
    auVar117._0_8_ = 0x454952465f444441;
    return auVar117;
  case 9:
    pcVar4 = "ADD_FRIENDS/RECENT_ADD";
    goto code_r0x0001000e6288;
  case 10:
    pcVar4 = "ADD_FRIENDS/RECENT_IGNORE";
    goto code_r0x0001000e624c;
  case 0xb:
    pcVar4 = "ADD_FRIENDS/RECENT_HIDE";
    break;
  case 0xc:
    pcVar4 = "add_paid_partnership_composer_page";
    goto code_r0x0001000e632c;
  case 0xd:
    auVar120._8_8_ = 0xec00000045474150;
    auVar120._0_8_ = 0x5f4f464e495f4441;
    return auVar120;
  case 0xe:
    pcVar4 = "AD_INFO_PREFERENCES";
    goto code_r0x0001000e6274;
  case 0xf:
    pcVar4 = "AdPlayback/Settings";
    goto code_r0x0001000e6274;
  case 0x10:
    pcVar4 = "ANIMATED_STICKERS";
    goto code_r0x0001000e63a0;
  case 0x11:
    auVar103._8_8_ = 0xec00000065766974;
    auVar103._0_8_ = 0x63616e695f707061;
    return auVar103;
  case 0x12:
    auVar28._8_8_ = 0xec00000070755f74;
    auVar28._0_8_ = 0x726174735f707061;
    return auVar28;
  case 0x13:
    pcVar4 = "AURA_ASTROLOGICAL_SIGN";
    goto code_r0x0001000e6288;
  case 0x14:
    auVar137._8_8_ = 0xea00000000004d52;
    auVar137._0_8_ = 0x4148435f41525541;
    return auVar137;
  case 0x15:
    pcVar4 = "AURA_CONTEXT_CARD";
    goto code_r0x0001000e63a0;
  case 0x16:
    auVar113._8_8_ = 0xee004b4e494c5f50;
    auVar113._0_8_ = 0x4545445f41525541;
    return auVar113;
  case 0x17:
    auVar124._8_8_ = 0xe800000000000000;
    auVar124._0_8_ = 0x5941444854524942;
    return auVar124;
  case 0x18:
    auVar123._8_8_ = 0xed0000454741505f;
    auVar123._0_8_ = 0x5941444854524942;
    return auVar123;
  case 0x19:
    pcVar4 = "BIRTHDAY_SETTINGS";
    goto code_r0x0001000e63a0;
  case 0x1a:
    auVar31._8_8_ = 0xee0044454b4e494c;
    auVar31._0_8_ = 0x2f494a4f4d544942;
    return auVar31;
  case 0x1b:
    pcVar4 = "BITMOJI/UNLINKED";
    goto code_r0x0001000e6088;
  case 0x1c:
    auVar134._8_8_ = 0xee0050414e535f54;
    auVar134._0_8_ = 0x53414344414f5242;
    return auVar134;
  case 0x1d:
    pcVar4 = "CALIFORNIA_PRIVACY_CHOICES";
    goto code_r0x0001000e6130;
  case 0x1e:
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x54494b5f4c4c4143;
    return auVar6;
  case 0x1f:
    pcVar4 = "CAMERA/VIEW_FINDER";
    goto code_r0x0001000e6400;
  case 0x20:
    pcVar4 = "CAMERA_VIEWFINDER";
    goto code_r0x0001000e63a0;
  case 0x21:
    uVar2 = 0x4e4143;
    goto code_r0x0001000e5b94;
  case 0x22:
    pcVar4 = "CAMEOS_ONBOARDING";
    goto code_r0x0001000e63a0;
  case 0x23:
    pcVar4 = "CAMEOS_ONBOARDING/LENSES";
    goto code_r0x0001000e5fbc;
  case 0x24:
    pcVar4 = "CAMEOS_ONBOARDING/CHANGE_TARGET";
    goto code_r0x0001000e5be0;
  case 0x25:
    auVar14._8_8_ = 0x800000010f214b60;
    auVar14._0_8_ = 0xd000000000000026;
    return auVar14;
  case 0x26:
    pcVar4 = "CHANNEL_VERIFICATION";
    goto code_r0x0001000e62e8;
  case 0x27:
    uVar2 = 0x544148432f47;
    goto code_r0x0001000e61f0;
  case 0x28:
    auVar19._8_8_ = 0xeb00000000524547;
    auVar19._0_8_ = 0x5255425f54414843;
    return auVar19;
  case 0x29:
    pcVar4 = "MESSAGING/COUNTDOWNS_PAGE";
    goto code_r0x0001000e624c;
  case 0x2a:
    uVar2 = 0x54414843;
    goto code_r0x0001000e525c;
  case 0x2b:
    auVar10._8_8_ = 0xe400000000000000;
    auVar10._0_8_ = 0x54414843;
    return auVar10;
  case 0x2c:
    pcVar4 = "CHOOSE_NEW_PASSWORD";
    goto code_r0x0001000e6274;
  case 0x2d:
    uVar2 = 0x41454c43;
    goto code_r0x0001000e5314;
  case 0x2e:
    pcVar4 = "CODE_VERIFICATION";
    goto code_r0x0001000e63a0;
  case 0x2f:
    pcVar4 = "COMMERCE/COMPOSER_PAGE";
    goto code_r0x0001000e6288;
  case 0x30:
    auVar79._8_8_ = 0x800000010f214a50;
    auVar79._0_8_ = 0xd000000000000025;
    return auVar79;
  case 0x31:
    pcVar4 = "COMMERCE/NATIVE_PAGE";
    goto code_r0x0001000e62e8;
  case 0x32:
    pcVar4 = "COMMERCE/NAVIGATION";
    goto code_r0x0001000e6274;
  case 0x33:
    pcVar4 = "COMMERCE/PRODUCT";
    goto code_r0x0001000e6088;
  case 0x34:
    pcVar4 = "COMMERCE_SHOWCASE_STORE";
    break;
  case 0x35:
    pcVar4 = "COMMERCE/TOPIC_PAGE";
    goto code_r0x0001000e6274;
  case 0x36:
    auVar83._8_8_ = 0xeb00000000534549;
    auVar83._0_8_ = 0x54494e554d4d4f43;
    return auVar83;
  case 0x37:
    pcVar4 = "COMMUNITIES_PROFILE";
    goto code_r0x0001000e6274;
  case 0x38:
    pcVar4 = "COMMUNITY_ONBOARDING_COMPLETE";
    goto code_r0x0001000e5f78;
  case 0x39:
    pcVar4 = "CONTENT_COMMENTS_TRAY";
    goto code_r0x0001000e62c8;
  case 0x3a:
    pcVar4 = "CONSOLIDATED_SHOPPING_BAG";
    goto code_r0x0001000e624c;
  case 0x3b:
    pcVar4 = "Content_Understanding_details";
    goto code_r0x0001000e5f78;
  case 0x3c:
    auVar133._8_8_ = 0xed00005344524143;
    auVar133._0_8_ = 0x5f545845544e4f43;
    return auVar133;
  case 0x3d:
    pcVar4 = "CONTEXT_CARD/SWIPE_UP";
    goto code_r0x0001000e62c8;
  case 0x3e:
    pcVar4 = "CONTEXT_CARD/TAPPABLE_ELEMENTS";
    goto code_r0x0001000e62a8;
  case 0x3f:
    auVar5._8_8_ = 0xec000000554e454d;
    auVar5._0_8_ = 0x5f545845544e4f43;
    return auVar5;
  case 0x40:
    pcVar4 = "COS_EMAIL_REGISTRATION";
    goto code_r0x0001000e6288;
  case 0x41:
    pcVar4 = "COS_PHONE_REGISTRATION";
    goto code_r0x0001000e6288;
  case 0x42:
    pcVar4 = "COS_PHONE_VERIFICATION";
    goto code_r0x0001000e6288;
  case 0x43:
    auVar131._8_8_ = 0xee0052454b434950;
    auVar131._0_8_ = 0x5f5952544e554f43;
    return auVar131;
  case 0x44:
    pcVar4 = "CREATIVE_KIT/SEND_TO";
    goto code_r0x0001000e62e8;
  case 0x45:
    auVar33._8_8_ = 0xeb00000000425548;
    auVar33._0_8_ = 0x5f524f5441455243;
    return auVar33;
  case 0x46:
    pcVar4 = "CREATOR_MY_SUB_MANAGEMENT";
    goto code_r0x0001000e624c;
  case 0x47:
    pcVar4 = "CREDIT_CARD_EDIT_VIEW";
    goto code_r0x0001000e62c8;
  case 0x48:
    pcVar4 = "DATA_UNAVAILABLE";
    goto code_r0x0001000e6088;
  case 0x49:
    auVar38._8_8_ = 0xef45524148532f4b;
    auVar38._0_8_ = 0x4e494c5f50454544;
    return auVar38;
  case 0x4a:
    auVar17._8_8_ = 0xeb00000000544e45;
    auVar17._0_8_ = 0x4d504f4c45564544;
    return auVar17;
  case 0x4b:
    auVar30._8_8_ = 0xef524f5443455249;
    auVar30._0_8_ = 0x442f4152454d4143;
    return auVar30;
  case 0x4c:
    uVar3 = 0x5245564f43534944;
code_r0x0001000e59e4:
    auVar78._8_8_ = 0xed0000444545465f;
    auVar78._0_8_ = uVar3;
    return auVar78;
  case 0x4d:
    pcVar4 = "DISCOVER_FEED/BADGE";
    goto code_r0x0001000e6274;
  case 0x4e:
    pcVar4 = "DISCOVER_FEED/DEEPLINK_WRAPPER";
    goto code_r0x0001000e62a8;
  case 0x4f:
    pcVar4 = "DISCOVER_FEED/MANAGEMENT_SETTINGS";
    goto code_r0x0001000e5728;
  case 0x50:
    pcVar4 = "DISCOVER_FEED/RECOMMENDED_ACCOUNTS";
    goto code_r0x0001000e632c;
  case 0x51:
    pcVar4 = "DISCOVER_FEED/SUBSCRIPTIONS";
    goto code_r0x0001000e5d14;
  case 0x52:
    pcVar4 = "DISCOVER_MANAGEMENT";
    goto code_r0x0001000e6274;
  case 0x53:
    pcVar4 = "DISCOVER_STORIES_PLAYBACK";
    goto code_r0x0001000e624c;
  case 0x54:
    auVar51._8_8_ = 0xec000000454d414e;
    auVar51._0_8_ = 0x5f59414c50534944;
    return auVar51;
  case 0x55:
    pcVar4 = "DOWNLOAD_MY_DATA";
    goto code_r0x0001000e6088;
  case 0x56:
    auVar67._8_8_ = 0xe600000000000000;
    auVar67._0_8_ = 0x534d41455244;
    return auVar67;
  case 0x57:
    pcVar4 = "DREAMS_COMPOSER_PAGE";
    goto code_r0x0001000e62e8;
  case 0x58:
    pcVar4 = "dreams_composer_page";
    goto code_r0x0001000e62e8;
  case 0x59:
    uVar2 = 0x5f4c49414d45;
    goto code_r0x0001000e5140;
  case 0x5a:
    auVar9._8_8_ = 0xee0053474e495454;
    auVar9._0_8_ = 0x45535f4c49414d45;
    return auVar9;
  case 0x5b:
    pcVar4 = "EMAIL_SETTINGS_PASSWORD";
    break;
  case 0x5c:
    pcVar4 = "EMAIL_VERIFICATION";
    goto code_r0x0001000e6400;
  case 0x5d:
    pcVar4 = "EXPANDED_STORY_FEED";
    goto code_r0x0001000e6274;
  case 0x5e:
    auVar114._8_8_ = 0xe800000000000000;
    auVar114._0_8_ = 0x4c414e5245545845;
    return auVar114;
  case 0x5f:
    auVar119._8_8_ = 0xed00005245544e45;
    auVar119._0_8_ = 0x435f594c494d4146;
    return auVar119;
  case 0x60:
    pcVar4 = "FAMILY_CENTER_MANAGE_PAGE";
    goto code_r0x0001000e624c;
  case 0x61:
    pcVar4 = "FAMILY_CENTER_SETUP_PAGE";
    goto code_r0x0001000e5fbc;
  case 0x62:
    pcVar4 = "FAMILY_CENTER_VIEW_FRIENDS";
    goto code_r0x0001000e6130;
  case 99:
    pcVar4 = "FAVORITES_CATALOG";
    goto code_r0x0001000e63a0;
  case 100:
    auVar7._8_8_ = 0xe800000000000000;
    auVar7._0_8_ = 0x4b43414244454546;
    return auVar7;
  case 0x65:
    pcVar4 = "FLORIDA_PRIVACY_CHOICES";
    break;
  case 0x66:
    uVar2 = 0x444e45495246;
    goto code_r0x0001000e5080;
  case 0x67:
    uVar2 = 0x444545462f47;
code_r0x0001000e61f0:
    auVar122._8_8_ = uVar2 | 0xee00000000000000;
    auVar122._0_8_ = 0x4e4947415353454d;
    return auVar122;
  case 0x68:
    uVar3 = 0x2f53444e45495246;
    goto code_r0x0001000e58c4;
  case 0x69:
    auVar106._8_8_ = 0xed00004552414853;
    auVar106._0_8_ = 0x2f53444e45495246;
    return auVar106;
  case 0x6a:
    auVar8._8_8_ = 0x800000010f214560;
    auVar8._0_8_ = 0xd00000000000002c;
    return auVar8;
  case 0x6b:
    pcVar4 = "GALLERY/ADD_TO_STORY";
    goto code_r0x0001000e62e8;
  case 0x6c:
    uVar2 = 0x5f4c4c41;
    goto code_r0x0001000e57c0;
  case 0x6d:
    uVar2 = 0xec00000053424154;
    goto code_r0x0001000e61d0;
  case 0x6e:
    uVar2 = 0x50554b434142;
    goto code_r0x0001000e61cc;
  case 0x6f:
    uVar2 = 0x4553574f5242;
code_r0x0001000e61cc:
    uVar2 = uVar2 | 0xee00000000000000;
    goto code_r0x0001000e61d0;
  case 0x70:
    pcVar4 = "GALLERY/CAMERA_ROLL_TAB";
    break;
  case 0x71:
    pcVar4 = "GALLERY/FRIENDS_TAB";
    goto code_r0x0001000e6274;
  case 0x72:
    pcVar4 = "GALLERY/CONSOLIDATED_AUTO_SAVED_STORIES";
    goto code_r0x0001000e5780;
  case 0x73:
    pcVar4 = "GALLERY/DIRECTOR_MODE_DRAFTS";
    goto code_r0x0001000e5dc4;
  case 0x74:
    pcVar4 = "GALLERY/EDIT_STORY";
    goto code_r0x0001000e6400;
  case 0x75:
    pcVar4 = "GALLERY/FAVORITE_SNAPS_STORY";
    goto code_r0x0001000e5dc4;
  case 0x76:
    auVar21._8_8_ = 0xee0052454b434950;
    auVar21._0_8_ = 0x5f5952454c4c4147;
    return auVar21;
  case 0x77:
    pcVar4 = "GALLERY/SNAPS_PROTOTYPE";
    break;
  case 0x78:
    pcVar4 = "GALLERY/FULL_SEARCH_VIEW";
    goto code_r0x0001000e5fbc;
  case 0x79:
    pcVar4 = "GALLERY/IMPORT_CAMERA_ROLL";
    goto code_r0x0001000e6130;
  case 0x7a:
    pcVar4 = "GALLERY_LINK_MANAGEMENT";
    break;
  case 0x7b:
    pcVar4 = "GALLERY/LOCKED_SNAPS";
    goto code_r0x0001000e62e8;
  case 0x7c:
    pcVar4 = "GALLERY/MEO_FLOW";
    goto code_r0x0001000e6088;
  case 0x7d:
    uVar2 = 0x5f4f454d;
code_r0x0001000e57c0:
    uVar2 = uVar2 | 0xef42415400000000;
code_r0x0001000e61d0:
    auVar121._8_8_ = uVar2;
    auVar121._0_8_ = 0x2f5952454c4c4147;
    return auVar121;
  case 0x7e:
    pcVar4 = "GALLERY_MYSTORY_SAVE_SETTINGS";
    goto code_r0x0001000e5f78;
  case 0x7f:
    uVar2 = 0xef57454956455250;
    goto code_r0x0001000e61d0;
  case 0x80:
    pcVar4 = "GALLERY_SAVE_TO_SETTINGS";
    goto code_r0x0001000e5fbc;
  case 0x81:
    pcVar4 = "GALLERY/SCREENSHOP_TAB";
    goto code_r0x0001000e6288;
  case 0x82:
    pcVar4 = "GALLERY_SETTINGS";
    goto code_r0x0001000e6088;
  case 0x83:
    pcVar4 = "GALLERY/STORIES_TAB";
    goto code_r0x0001000e6274;
  case 0x84:
    pcVar4 = "GALLERY/WEB_VIEW";
    goto code_r0x0001000e6088;
  case 0x85:
    auVar91._8_8_ = 0xed0000454c49464f;
    auVar91._0_8_ = 0x52505f50554f5247;
    return auVar91;
  case 0x86:
    pcVar4 = "CAMERA/IMPORT_TRIMMER";
    goto code_r0x0001000e62c8;
  case 0x87:
    auVar50._8_8_ = 0xe600000000000000;
    auVar50._0_8_ = 0x616c61706d69;
    return auVar50;
  case 0x88:
    pcVar4 = "IMPALA/PUBLIC_PROFILE";
    goto code_r0x0001000e62c8;
  case 0x89:
    pcVar4 = "IMPALA/PUBLISHER_PROFILE";
    goto code_r0x0001000e5fbc;
  case 0x8a:
    auVar93._8_8_ = 0xef5245564f454b41;
    auVar93._0_8_ = 0x545f5050415f4e49;
    return auVar93;
  case 0x8b:
    pcVar4 = "IN_LENS_CREATION_TRENDING_LIST";
code_r0x0001000e62a8:
    auVar128._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar128._0_8_ = 0xd00000000000001e;
    return auVar128;
  case 0x8c:
    pcVar4 = "LEGAL_COMPLIANCE_TAKEOVER";
    goto code_r0x0001000e624c;
  case 0x8d:
    auVar82._8_8_ = 0xed00005345534e45;
    auVar82._0_8_ = 0x4c2f4152454d4143;
    return auVar82;
  case 0x8e:
    auVar55._8_8_ = 0xed00005245524f4c;
    auVar55._0_8_ = 0x5058455f534e454c;
    return auVar55;
  case 0x8f:
    pcVar4 = "LOCATION_SHARING_SETTINGS";
    goto code_r0x0001000e624c;
  case 0x90:
    auVar97._8_8_ = 0xee00524554534947;
    auVar97._0_8_ = 0x45525f4e49474f4c;
    return auVar97;
  case 0x91:
    auVar13._8_8_ = 0xea00000000004544;
    auVar13._0_8_ = 0x4f435f434947414d;
    return auVar13;
  case 0x92:
    pcVar4 = "PREVIEW_SETTINGS";
    goto code_r0x0001000e6088;
  case 0x93:
    auVar102._8_8_ = 0xe300000000000000;
    auVar102._0_8_ = 0x50414d;
    return auVar102;
  case 0x94:
    pcVar4 = "MapPlacesValdiVideoView";
    break;
  case 0x95:
    pcVar4 = "MAP/SECONDARY_LOCATION_DEVICE";
    goto code_r0x0001000e5f78;
  case 0x96:
    pcVar4 = "MESSAGING/CONTEXT";
    goto code_r0x0001000e63a0;
  case 0x97:
    auVar105._8_8_ = 0xea00000000007961;
    auVar105._0_8_ = 0x72542f73696e694d;
    return auVar105;
  case 0x98:
    auVar107._8_8_ = 0xef53474e49545445;
    auVar107._0_8_ = 0x535f454c49424f4d;
    return auVar107;
  case 0x99:
    auVar25._8_8_ = 0xe400000000000000;
    auVar25._0_8_ = 0x4b434f4d;
    return auVar25;
  case 0x9a:
    auVar53._8_8_ = 0xea00000000005441;
    auVar53._0_8_ = 0x48435f4c41444f4d;
    return auVar53;
  case 0x9b:
    auVar20._8_8_ = 0xec0000004c4c4143;
    auVar20._0_8_ = 0x5f52414c55444f4d;
    return auVar20;
  case 0x9c:
    pcVar4 = "SCPageNameMultiProfileSwitcherTray";
code_r0x0001000e632c:
    auVar132._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar132._0_8_ = 0xd000000000000022;
    return auVar132;
  case 0x9d:
    pcVar4 = "MUSIC/MUSIC PICKER";
    goto code_r0x0001000e6400;
  case 0x9e:
    pcVar4 = "MUSIC/MUSIC PICKER LIST";
    break;
  case 0x9f:
    auVar11._8_8_ = 0xee0053444e454952;
    auVar11._0_8_ = 0x465f4c415554554d;
    return auVar11;
  case 0xa0:
    auVar22._8_8_ = 0xea00000000005344;
    auVar22._0_8_ = 0x4e454952465f594d;
    return auVar22;
  case 0xa1:
    auVar104._8_8_ = 0xe900000000000073;
    auVar104._0_8_ = 0x74726f706552794d;
    return auVar104;
  case 0xa2:
    pcVar4 = "COMMERCE/MY_SHOPPING_BAG";
    goto code_r0x0001000e5fbc;
  case 0xa3:
    pcVar4 = "BUSINESS/AD_NATIVE_CREATION_PAGE";
    goto code_r0x0001000e5c5c;
  case 0xa4:
    auVar15._8_8_ = 0x800000010f2140e0;
    auVar15._0_8_ = 0xd00000000000002b;
    return auVar15;
  case 0xa5:
    pcVar4 = "NEARBY_FRIENDS_PAGE";
    goto code_r0x0001000e6274;
  case 0xa6:
    pcVar4 = "NON_VERIFIED_COMMUNITIES_PROFILE";
    goto code_r0x0001000e5c5c;
  case 0xa7:
    uVar3 = 0x4143494649544f4e;
    goto code_r0x0001000e5df8;
  case 0xa8:
    auVar68._8_8_ = 0xec000000474e4944;
    auVar68._0_8_ = 0x4e414c5f564c444f;
    return auVar68;
  case 0xa9:
    auVar42._8_8_ = 0xeb00000000594649;
    auVar42._0_8_ = 0x5245565f564c444f;
    return auVar42;
  case 0xaa:
    auVar26._8_8_ = 0xed00004e49474f4c;
    auVar26._0_8_ = 0x5f5041545f454e4f;
    return auVar26;
  case 0xab:
    auVar35._8_8_ = 0xe900000000000053;
    auVar35._0_8_ = 0x44412f415245504f;
    return auVar35;
  case 0xac:
    auVar27._8_8_ = 0xe900000000000061;
    auVar27._0_8_ = 0x7265704f61727541;
    return auVar27;
  case 0xad:
    auVar12._8_8_ = 0xee00617265704f73;
    auVar12._0_8_ = 0x65736e654c626557;
    return auVar12;
  case 0xae:
    auVar116._8_8_ = 0xe700000000000000;
    auVar116._0_8_ = 0x544355444f5250;
    return auVar116;
  case 0xaf:
    auVar111._8_8_ = 0xe500000000000000;
    auVar111._0_8_ = 0x45524f5453;
    return auVar111;
  case 0xb0:
    pcVar4 = "DISCOVER/EDITION";
    goto code_r0x0001000e6088;
  case 0xb1:
    pcVar4 = "OPERA/FILTER_ATTACHMENT";
    break;
  case 0xb2:
    auVar41._8_8_ = 0xed00005952454c4c;
    auVar41._0_8_ = 0x41472f415245504f;
    return auVar41;
  case 0xb3:
    pcVar4 = "OPERA/LENS_STORIES";
    goto code_r0x0001000e6400;
  case 0xb4:
    pcVar4 = "OPERA/MAP_SCREENSHOT";
    goto code_r0x0001000e62e8;
  case 0xb5:
    auVar112._8_8_ = 0xed000053544e454d;
    auVar112._0_8_ = 0x4f4d2f415245504f;
    return auVar112;
  case 0xb6:
    auVar18._8_8_ = 0xef414944454d5f4c;
    auVar18._0_8_ = 0x52552f415245504f;
    return auVar18;
  case 0xb7:
    auVar32._8_8_ = 0xea00000000005041;
    auVar32._0_8_ = 0x4e532f415245504f;
    return auVar32;
  case 0xb8:
    auVar34._8_8_ = 0xea00000000005245;
    auVar34._0_8_ = 0x53552f59524f5453;
    return auVar34;
  case 0xb9:
    pcVar4 = "OTP_TWO_FACTOR_CODE_CONFIRMATION";
    goto code_r0x0001000e5c5c;
  case 0xba:
    pcVar4 = "SCPageNamePartnershipAdCode";
    goto code_r0x0001000e5d14;
  case 0xbb:
    auVar37._8_8_ = 0xe800000000000000;
    auVar37._0_8_ = 0x44524f5753534150;
    return auVar37;
  case 0xbc:
    pcVar4 = "PASSWORD_RESET_SUCCESS";
    goto code_r0x0001000e6288;
  case 0xbd:
    pcVar4 = "PASSWORD_SETTINGS";
    goto code_r0x0001000e63a0;
  case 0xbe:
    pcVar4 = "PASSWORD_SETTINGS_REAUTH";
    goto code_r0x0001000e5fbc;
  case 0xbf:
    pcVar4 = "Add Shipping Address";
    goto code_r0x0001000e62e8;
  case 0xc0:
    auVar23._8_8_ = 0xef736c6961746544;
    auVar23._0_8_ = 0x20746361746e6f43;
    return auVar23;
  case 0xc1:
    auVar98._8_8_ = 0xee00646f6874654d;
    auVar98._0_8_ = 0x20746e656d796150;
    return auVar98;
  case 0xc2:
    pcVar4 = "PAYMENT_METHODS_LIST_VIEW";
    goto code_r0x0001000e624c;
  case 0xc3:
    auVar69._8_8_ = 0xea00000000004544;
    auVar69._0_8_ = 0x4f435f454e4f4850;
    return auVar69;
  case 0xc4:
    uVar2 = 0x5f454e4f4850;
code_r0x0001000e5140:
    auVar44._0_8_ = uVar2 | 0x4e45000000000000;
    auVar44._8_8_ = 0xeb00000000595254;
    return auVar44;
  case 0xc5:
    pcVar4 = "PHONE_VERIFICATION";
    goto code_r0x0001000e6400;
  case 0xc6:
    auVar96._8_8_ = 0xec000000474e4954;
    auVar96._0_8_ = 0x4649472f53554c50;
    return auVar96;
  case 199:
    auVar109._8_8_ = 0xef544e454d454741;
    auVar109._0_8_ = 0x4e414d2f53554c50;
    return auVar109;
  case 200:
    auVar47._8_8_ = 0xea00000000004f49;
    auVar47._0_8_ = 0x422f4e494c52454d;
    return auVar47;
  case 0xc9:
    pcVar4 = "PLUS/STREAK_RESTORE";
    goto code_r0x0001000e6274;
  case 0xca:
    pcVar4 = "PLUS/STREAK_RESTORE_SUPPORT";
    goto code_r0x0001000e5d14;
  case 0xcb:
    auVar80._8_8_ = 0xee00454249524353;
    auVar80._0_8_ = 0x4255532f53554c50;
    return auVar80;
  case 0xcc:
    auVar49._8_8_ = 0x800000010f213e90;
    auVar49._0_8_ = 0xd000000000000028;
    return auVar49;
  case 0xcd:
    auVar94._8_8_ = 0x800000010f213e60;
    auVar94._0_8_ = 0xd00000000000002d;
    return auVar94;
  case 0xce:
    auVar101._8_8_ = 0xee00574549564552;
    auVar101._0_8_ = 0x502f4152454d4143;
    return auVar101;
  case 0xcf:
    pcVar4 = "PREVIEW_CAPTION_EDITOR";
    goto code_r0x0001000e6288;
  case 0xd0:
    pcVar4 = "PREVIEW_DRAWING_EDITOR";
    goto code_r0x0001000e6288;
  case 0xd1:
    pcVar4 = "PREVIEW_MUSIC_PICKER";
    goto code_r0x0001000e62e8;
  case 0xd2:
    pcVar4 = "PREVIEW_SNAP_EDITOR";
    goto code_r0x0001000e6274;
  case 0xd3:
    pcVar4 = "PREVIEW_STICKER_EDITOR";
    goto code_r0x0001000e6288;
  case 0xd4:
    pcVar4 = "PREVIEW_STICKER_PICKER";
    goto code_r0x0001000e6288;
  case 0xd5:
    pcVar4 = "PREVIEW_TIMER_PAGE";
    goto code_r0x0001000e6400;
  case 0xd6:
    pcVar4 = "SETTINGS/CLEAR_DATA";
    goto code_r0x0001000e6274;
  case 0xd7:
    auVar84._8_8_ = 0xee005943494c4f50;
    auVar84._0_8_ = 0x5f59434156495250;
    return auVar84;
  case 0xd8:
    auVar16._8_8_ = 0xe700000000000000;
    auVar16._0_8_ = 0x454c49464f5250;
    return auVar16;
  case 0xd9:
    pcVar4 = "PROFILE/ADDED_ME";
    goto code_r0x0001000e6088;
  case 0xda:
    pcVar4 = "PROFILE/ADD_FRIENDS";
    goto code_r0x0001000e6274;
  case 0xdb:
    pcVar4 = "PROFILE/ADD_FROM_CONTACTS";
    goto code_r0x0001000e624c;
  case 0xdc:
    uVar2 = 0x534d52414843;
    goto code_r0x0001000e58ac;
  case 0xdd:
    auVar72._8_8_ = 0x800000010f213cc0;
    auVar72._0_8_ = 0xd00000000000001e;
    return auVar72;
  case 0xde:
    pcVar4 = "PROFILE/COUNTDOWNS_PAGE";
    break;
  case 0xdf:
    pcVar4 = "PROFILE/GROUP_CHAT";
    goto code_r0x0001000e6400;
  case 0xe0:
    uVar2 = 0x414c41504d49;
code_r0x0001000e58ac:
    uVar2 = uVar2 | 0xee00000000000000;
code_r0x0001000e5bb8:
    auVar88._8_8_ = uVar2;
    auVar88._0_8_ = 0x2f454c49464f5250;
    return auVar88;
  case 0xe1:
    pcVar4 = "PROFILE/IMPALA_PUBLIC";
    goto code_r0x0001000e62c8;
  case 0xe2:
    pcVar4 = "PROFILE/IMPALA_SNAP_INSIGHTS";
    goto code_r0x0001000e5dc4;
  case 0xe3:
    uVar3 = 0x2f454c49464f5250;
code_r0x0001000e58c4:
    auVar71._8_8_ = 0xea0000000000594d;
    auVar71._0_8_ = uVar3;
    return auVar71;
  case 0xe4:
    pcVar4 = "PROFILE/MY_FRIENDS_AND_CONTACTS";
    goto code_r0x0001000e5be0;
  case 0xe5:
    pcVar4 = "PROFILE_SAVED_MEDIA";
code_r0x0001000e6274:
    auVar126._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar126._0_8_ = 0xd000000000000013;
    return auVar126;
  case 0xe6:
    pcVar4 = "PROFILE/SETTINGS";
    goto code_r0x0001000e6088;
  case 0xe7:
    uVar2 = 0xef474e4952414853;
    goto code_r0x0001000e5bb8;
  case 0xe8:
    pcVar4 = "PROFILE/STORY_MANAGEMENT";
    goto code_r0x0001000e5fbc;
  case 0xe9:
    uVar2 = 0x53504954;
    goto code_r0x0001000e5bb4;
  case 0xea:
    uVar2 = 0xef4e574f4e4b4e55;
    goto code_r0x0001000e5bb8;
  case 0xeb:
    uVar2 = 0x52455355;
code_r0x0001000e5bb4:
    uVar2 = uVar2 | 0xec00000000000000;
    goto code_r0x0001000e5bb8;
  case 0xec:
    pcVar4 = "SCPageNamePromotionInsightsTray";
    goto code_r0x0001000e5be0;
  case 0xed:
    uVar2 = 0x43494c425550;
code_r0x0001000e5080:
    auVar40._0_8_ = uVar2 | 0x505f000000000000;
    auVar40._8_8_ = 0xee00454c49464f52;
    return auVar40;
  case 0xee:
    pcVar4 = "PUBLIC_PROFILE_MANAGEMENT";
    goto code_r0x0001000e624c;
  case 0xef:
    pcVar4 = "QUICKADD_PRIVACY_SETTINGS";
    goto code_r0x0001000e624c;
  case 0xf0:
    pcVar4 = "RECENTLY_VIEWED_CATALOG";
    break;
  case 0xf1:
    pcVar4 = "RECIPIENT_PICKER";
    goto code_r0x0001000e6088;
  case 0xf2:
    pcVar4 = "RECOVER_PASSWORD_PHONE_ENTRY";
    goto code_r0x0001000e5dc4;
  case 0xf3:
    pcVar4 = "RECOVER_PASSWORD_USER_CHALLENGE";
    goto code_r0x0001000e5be0;
  case 0xf4:
    pcVar4 = "RECOVERY_CODE_PASSWORD";
    goto code_r0x0001000e6288;
  case 0xf5:
    uVar3 = 0x4152545349474552;
code_r0x0001000e5df8:
    auVar100._8_8_ = 0xec0000004e4f4954;
    auVar100._0_8_ = uVar3;
    return auVar100;
  case 0xf6:
    pcVar4 = "REGISTRATION/INVITE_CONTACTS";
code_r0x0001000e5dc4:
    auVar99._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar99._0_8_ = 0xd00000000000001c;
    return auVar99;
  case 0xf7:
    pcVar4 = "SCRootContainerViewController";
    goto code_r0x0001000e5f78;
  case 0xf8:
    auVar29._8_8_ = 0xe400000000000000;
    auVar29._0_8_ = 0x4e414353;
    return auVar29;
  case 0xf9:
    pcVar4 = "SCScanResultsViewController";
    goto code_r0x0001000e5d14;
  case 0xfa:
    pcVar4 = "SCREENSHOP_CATALOG";
    goto code_r0x0001000e6400;
  case 0xfb:
    auVar39._8_8_ = 0xe600000000000000;
    auVar39._0_8_ = 0x484352414553;
    return auVar39;
  case 0xfc:
    uVar2 = 0x2f534441;
    goto code_r0x0001000e5b80;
  case 0xfd:
    uVar2 = 0xed00004843524145;
    goto code_r0x0001000e5b98;
  case 0xfe:
    uVar2 = 0x54414843;
    goto code_r0x0001000e5858;
  case 0xff:
    uVar3 = 0x5245564f43534944;
    goto code_r0x0001000e5190;
  case 0x100:
    uVar2 = 0x44454546;
code_r0x0001000e5858:
    auVar70._0_8_ = uVar2 | 0x4145532f00000000;
    auVar70._8_8_ = 0xeb00000000484352;
    return auVar70;
  case 0x101:
    pcVar4 = "LENS_EXPLORER/SEARCH";
    goto code_r0x0001000e62e8;
  case 0x102:
    uVar2 = 0x2f50414d;
    goto code_r0x0001000e5b80;
  case 0x103:
    uVar3 = 0x534549524f4d454d;
code_r0x0001000e5190:
    auVar45._8_8_ = 0xef4843524145532f;
    auVar45._0_8_ = uVar3;
    return auVar45;
  case 0x104:
    uVar2 = 0x2f415245504f;
    goto code_r0x0001000e5c04;
  case 0x105:
    uVar2 = 0x2f59524f5453;
code_r0x0001000e5c04:
    auVar90._0_8_ = uVar2 | 0x4553000000000000;
    auVar90._8_8_ = 0xec00000048435241;
    return auVar90;
  case 0x106:
    pcVar4 = "SEARCH/STORY_SHARE";
    goto code_r0x0001000e6400;
  case 0x107:
    pcVar4 = "WEB_ATTACHMENT/SEARCH";
    goto code_r0x0001000e62c8;
  case 0x108:
    uVar2 = 0x2f424557;
code_r0x0001000e5b80:
    auVar86._0_8_ = uVar2 | 0x5241455300000000;
    auVar86._8_8_ = 0xea00000000004843;
    return auVar86;
  case 0x109:
    uVar2 = 0x444e45;
code_r0x0001000e5b94:
    uVar2 = uVar2 | 0xeb00000000000000;
code_r0x0001000e5b98:
    auVar87._8_8_ = uVar2;
    auVar87._0_8_ = 0x532f4152454d4143;
    return auVar87;
  case 0x10a:
    pcVar4 = "SEND_TO/SHARE_FRIEND_BASE";
    goto code_r0x0001000e624c;
  case 0x10b:
    auVar81._8_8_ = 0xe800000000000000;
    auVar81._0_8_ = 0x53474e4954544553;
    return auVar81;
  case 0x10c:
    pcVar4 = "SETTINGS/ACCOUNT_STATUS";
    break;
  case 0x10d:
    pcVar4 = "SETTINGS/AD_OVERRIDES";
    goto code_r0x0001000e62c8;
  case 0x10e:
    pcVar4 = "SETTINGS/APP_APPEARANCE";
    break;
  case 0x10f:
    pcVar4 = "SETTINGS/BLOCKED_USERS";
    goto code_r0x0001000e6288;
  case 0x110:
    pcVar4 = "SETTINGS/CONNECTED_APPS";
    break;
  case 0x111:
    pcVar4 = "SETTINGS/CONTACT_ME";
    goto code_r0x0001000e5974;
  case 0x112:
    pcVar4 = "SETTINGS/CUSTOM_STORY";
    goto code_r0x0001000e62c8;
  case 0x113:
    pcVar4 = "SETTINGS/DELETE_ACCOUNT";
    break;
  case 0x114:
    pcVar4 = "SETTINGS/DYNAMIC_DELIVERY";
    goto code_r0x0001000e624c;
  case 0x115:
    pcVar4 = "SETTINGS/LOG_OUT";
    goto code_r0x0001000e6088;
  case 0x116:
    pcVar4 = "SETTINGS/MUSIC_NOW_PLAYING";
    goto code_r0x0001000e6130;
  case 0x117:
    pcVar4 = "SETTINGS/MY_ACCOUNT";
    goto code_r0x0001000e5974;
  case 0x118:
    uVar3 = 0xef5050415f594d2f;
    goto code_r0x0001000e5b34;
  case 0x119:
    pcVar4 = "SETTINGS/NOTIFICATIONS";
    goto code_r0x0001000e6288;
  case 0x11a:
    pcVar4 = "SETTINGS/OTHER_LEGAL";
code_r0x0001000e62e8:
    auVar130._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar130._0_8_ = 0xd000000000000014;
    return auVar130;
  case 0x11b:
    pcVar4 = "SETTINGS/OUR_STORY";
    goto code_r0x0001000e6400;
  case 0x11c:
    pcVar4 = "SC_SETTINGS_PASSWORD_REAUTH";
    goto code_r0x0001000e5d14;
  case 0x11d:
    pcVar4 = "SETTINGS/PRIVACY_AND_DATA";
    goto code_r0x0001000e624c;
  case 0x11e:
    pcVar4 = "SETTINGS/PUBLIC_PROFILE";
    break;
  case 0x11f:
    uVar3 = 0xef4d415a4148532f;
code_r0x0001000e5b34:
    auVar85._8_8_ = uVar3;
    auVar85._0_8_ = 0x53474e4954544553;
    return auVar85;
  case 0x120:
    pcVar4 = "SETTINGS/SUPPORT_AND_SAFETY";
    goto code_r0x0001000e5d14;
  case 0x121:
    pcVar4 = "SETTINGS_TWO_FA_AUTH_APP_CHOICE";
code_r0x0001000e5be0:
    auVar89._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar89._0_8_ = 0xd00000000000001f;
    return auVar89;
  case 0x122:
    pcVar4 = "SETTINGS_TWO_FA_DISABLED_V2";
code_r0x0001000e5d14:
    auVar95._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar95._0_8_ = 0xd00000000000001b;
    return auVar95;
  case 0x123:
    pcVar4 = "SETTINGS_TWO_FA_ENABLED_V2";
    goto code_r0x0001000e6130;
  case 0x124:
    pcVar4 = "SETTINGS_TFA_LOAD_PAGE";
    goto code_r0x0001000e6288;
  case 0x125:
    pcVar4 = "SETTINGS_TWO_FA_OTP_PROMPT";
    goto code_r0x0001000e6130;
  case 0x126:
    pcVar4 = "SETTINGS_TWO_FA_RECOVERY_CODE";
    goto code_r0x0001000e5f78;
  case 0x127:
    pcVar4 = "SETTINGS_TWO_FA_RECOVERY_CODE_GENERATED";
code_r0x0001000e5780:
    auVar66._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar66._0_8_ = 0xd000000000000027;
    return auVar66;
  case 0x128:
    pcVar4 = "SETTINGS_TWO_FA_SETUP_SECOND_AUTH";
    goto code_r0x0001000e5728;
  case 0x129:
    pcVar4 = "SETTINGS_TWO_FA_SETUP_TPA";
    goto code_r0x0001000e624c;
  case 0x12a:
    pcVar4 = "SETTINGS_TWO_FA_SMS_PROMPT";
    goto code_r0x0001000e6130;
  case 299:
    pcVar4 = "SETTINGS_TWO_FA_TPA_MANUAL_SETUP";
code_r0x0001000e5c5c:
    auVar92._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar92._0_8_ = 0xd000000000000020;
    return auVar92;
  case 300:
    pcVar4 = "SETTINGS_TWO_FA_WARNING";
    break;
  case 0x12d:
    auVar77._8_8_ = 0xec00000054524f50;
    auVar77._0_8_ = 0x455232454b414853;
    return auVar77;
  case 0x12e:
    pcVar4 = "SHOWCASE_CATALOG";
code_r0x0001000e6088:
    auVar115._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar115._0_8_ = 0xd000000000000010;
    return auVar115;
  case 0x12f:
    uVar2 = 0x574f4853;
code_r0x0001000e525c:
    auVar48._0_8_ = uVar2 | 0x4545465f00000000;
    auVar48._8_8_ = 0xe900000000000044;
    return auVar48;
  case 0x130:
    auVar46._8_8_ = 0xef52454b4349505f;
    auVar46._0_8_ = 0x45444f4350414e53;
    return auVar46;
  case 0x131:
    pcVar4 = "SNAPCODE_PICKER_FROM_SETTINGS";
code_r0x0001000e5f78:
    auVar108._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar108._0_8_ = 0xd00000000000001d;
    return auVar108;
  case 0x132:
    pcVar4 = "SNAPCODE_SETTINGS";
    goto code_r0x0001000e63a0;
  case 0x133:
    auVar65._8_8_ = 0xed00007374686769;
    auVar65._0_8_ = 0x736e695f70616e73;
    return auVar65;
  case 0x134:
    auVar58._8_8_ = 0xea0000000000524f;
    auVar58._0_8_ = 0x5449444550414e53;
    return auVar58;
  case 0x135:
    pcVar4 = "SNAP_RECEIVE_NOTIFS_FROM_SETTINGS";
code_r0x0001000e5728:
    auVar64._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar64._0_8_ = 0xd000000000000021;
    return auVar64;
  case 0x136:
    auVar76._8_8_ = 0x800000010f213580;
    auVar76._0_8_ = 0xd000000000000023;
    return auVar76;
  case 0x137:
    pcVar4 = "SPECTACLES/SETTINGS";
    goto code_r0x0001000e5974;
  case 0x138:
    uVar3 = 0xee00444545465f54;
    goto code_r0x0001000e5958;
  case 0x139:
    pcVar4 = "SPOTLIGHT_CONTEXT";
    goto code_r0x0001000e63a0;
  case 0x13a:
    pcVar4 = "SPOTLIGHT_MANAGEMENT_PAGE";
code_r0x0001000e624c:
    auVar125._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar125._0_8_ = 0xd000000000000019;
    return auVar125;
  case 0x13b:
    pcVar4 = "PUBLIC_STORY_MODAL_VC";
code_r0x0001000e62c8:
    auVar129._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar129._0_8_ = 0xd000000000000015;
    return auVar129;
  case 0x13c:
    uVar3 = 0xed00004241545f54;
code_r0x0001000e5958:
    auVar74._8_8_ = uVar3;
    auVar74._0_8_ = 0x4847494c544f5053;
    return auVar74;
  case 0x13d:
    pcVar4 = "STORIES_EVERYWHERE";
    goto code_r0x0001000e6400;
  case 0x13e:
    auVar61._8_8_ = 0xe500000000000000;
    auVar61._0_8_ = 0x59524f5453;
    return auVar61;
  case 0x13f:
    uVar2 = 0x5f59524f5453;
    goto code_r0x0001000e5660;
  case 0x140:
    auVar73._8_8_ = 0xec00000045544956;
    auVar73._0_8_ = 0x4e492f59524f5453;
    return auVar73;
  case 0x141:
    pcVar4 = "STORY_PRIVACY_SETTINGS";
code_r0x0001000e6288:
    auVar127._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar127._0_8_ = 0xd000000000000016;
    return auVar127;
  case 0x142:
    pcVar4 = "STORY_VIEWERS_LIST";
    goto code_r0x0001000e6400;
  case 0x143:
    pcVar4 = "SUGGESTED_USERNAME";
    goto code_r0x0001000e6400;
  case 0x144:
    pcVar4 = "SUGGESTION_TAKEOVER";
code_r0x0001000e5974:
    auVar75._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar75._0_8_ = 0xd000000000000013;
    return auVar75;
  case 0x145:
    uVar2 = 0x45505553;
code_r0x0001000e5314:
    uVar2 = uVar2 | 0x5f5200000000;
code_r0x0001000e5660:
    auVar59._0_8_ = uVar2 | 0x4546000000000000;
    auVar59._8_8_ = 0xea00000000004445;
    return auVar59;
  case 0x146:
    auVar62._8_8_ = 0xe700000000000000;
    auVar62._0_8_ = 0x54524f50505553;
    return auVar62;
  case 0x147:
    auVar52._8_8_ = 0xec0000004553555f;
    auVar52._0_8_ = 0x464f5f534d524554;
    return auVar52;
  case 0x148:
    pcVar4 = "THIRD_PARTY_LOGIN";
    goto code_r0x0001000e63a0;
  case 0x149:
    auVar63._8_8_ = 0xea00000000004547;
    auVar63._0_8_ = 0x41505f4349504f54;
    return auVar63;
  case 0x14a:
    auVar54._8_8_ = 0xef534349504f545f;
    auVar54._0_8_ = 0x474e49444e455254;
    return auVar54;
  case 0x14b:
    pcVar4 = "TWO_FA_CODE_VERIFICATION";
code_r0x0001000e5fbc:
    auVar110._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar110._0_8_ = 0xd000000000000018;
    return auVar110;
  case 0x14c:
    pcVar4 = "TWO_FA_OTP_VERIFICATION";
    break;
  case 0x14d:
    pcVar4 = "TWO_FA_ENABLED_SETTINGS_V2";
code_r0x0001000e6130:
    auVar118._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar118._0_8_ = 0xd00000000000001a;
    return auVar118;
  case 0x14e:
    auVar60._8_8_ = 0xe800000000000000;
    auVar60._0_8_ = 0x454d414e52455355;
    return auVar60;
  case 0x14f:
    pcVar4 = "USERNAME_CHALLENGE";
code_r0x0001000e6400:
    uVar2 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    param_1 = 0xd000000000000012;
code_r0x0001000e6414:
    auVar138._8_8_ = uVar2;
    auVar138._0_8_ = param_1;
    return auVar138;
  case 0x150:
    pcVar4 = "USERNAME_SETTINGS";
    goto code_r0x0001000e63a0;
  case 0x151:
    pcVar4 = "USERNAME_PASSWORD";
code_r0x0001000e63a0:
    auVar135._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar135._0_8_ = 0xd000000000000011;
    return auVar135;
  case 0x152:
    auVar56._8_8_ = 0xef3131565f524553;
    auVar56._0_8_ = 0x574f52425f424557;
    return auVar56;
  case 0x153:
    auVar57._8_8_ = 0xe900000000000054;
    auVar57._0_8_ = 0x55435f4b43495551;
    return auVar57;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_1107adcb8,&uStack_18,&UNK_1107adcb8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e6448);
    (*pcVar1)();
  }
  auVar136._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar136._0_8_ = 0xd000000000000017;
  return auVar136;
}



/* Entry: 1000e6448; end: 1000e647f; +[_TtC15SnapAttribution24AttributedPageObjCHelper getPageNameFrom:] */

void FUN_1000e6448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000e48c0(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1000e6480; end: 1000e64f3; -[SCPageLoadMetricServices initWithPageLoadMetricManager:] */

undefined1 * FUN_1000e6480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705660;
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



/* Entry: 1000e64f4; end: 1000e6547;  */

void FUN_1000e64f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


