/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108935cc4; end: 108935d0b;  */

void FUN_108935cc4(void)

{
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc83c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_108937110();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935d0c; end: 108935d67;  */

ulong FUN_108935d0c(ulong param_1)

{
  _objc_autoreleasePoolPush();
  func_0x000108935f8c();
  func_0x00010bfc3cc0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10893555c();
  func_0x000108935f7c();
  _objc_autoreleasePoolPop();
  return param_1 & 0xffffffffff;
}



/* Entry: 108935d68; end: 108935daf;  */

void FUN_108935d68(void)

{
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc24e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_108935458();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935db0; end: 108935df7;  */

void FUN_108935db0(void)

{
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc5260();
  _objc_retainAutoreleasedReturnValue();
  FUN_108935628();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935df8; end: 108935e3f;  */

void FUN_108935df8(void)

{
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc3780();
  _objc_retainAutoreleasedReturnValue();
  FUN_108944268();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935e40; end: 108935e87;  */

void FUN_108935e40(void)

{
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc7360();
  _objc_retainAutoreleasedReturnValue();
  FUN_10894817c();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935e88; end: 108935f1b;  */

long FUN_108935e88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a660;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108935f1c; end: 108935f2b;  */

void FUN_108935f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a6a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108935f2c; end: 108935f57;  */

long FUN_108935f2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108935f58; end: 108935fa3;  */

void FUN_108935f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108935fa4; end: 108936023; -[SCNTalkcoreTsTalkCoreTypeScriptModuleFactory initWithCpp:] */

undefined1 * FUN_108935fa4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
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
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000108936178(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 108936024; end: 1089360d3; +[SCNTalkcoreTsTalkCoreTypeScriptModuleFactory createModuleFactory:androidContext:] */

void FUN_108936024(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  _objc_retain(param_4);
  FUN_10893599c(auStack_40,param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_4);
  }
  func_0x0001089361dc();
  FUN_10893f3ac(auStack_30,auStack_40,param_4);
  func_0x0001089361a0(auStack_40);
  func_0x00010b970e0c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001089361d0();
  func_0x0001089361dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1089360d4; end: 10893612f; -[SCNTalkcoreTsTalkCoreTypeScriptModuleFactory .cxx_destruct] */

void FUN_1089360d4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9a7b0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108936178((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108936130; end: 1089361c7; -[SCNTalkcoreTsTalkCoreTypeScriptModuleFactory .cxx_construct] */

undefined8 * FUN_108936130(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1089361c8; end: 1089361e3;  */

void FUN_1089361c8(void)

{
  return;
}



/* Entry: 1089361e4; end: 10893625b; -[SCNTalkcoreTsVideoRendererControllerCppProxy initWithCpp:] */

undefined1 * FUN_1089361e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd390;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108936720();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001089366d0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10893625c; end: 1089362af; -[SCNTalkcoreTsVideoRendererControllerCppProxy setListener:] */

void FUN_10893625c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1089368a8(auStack_30,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_30);
  func_0x0001089366f8(auStack_30);
  return;
}



/* Entry: 1089362b0; end: 1089363ab;  */

void FUN_1089362b0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dad90;
    _objc_opt_class(PTR_PTR_1126dad90);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110a9a818;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_108936440);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1089366a8(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108936720();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1089363ac; end: 1089363ff; -[SCNTalkcoreTsVideoRendererControllerCppProxy .cxx_destruct] */

void FUN_1089363ac(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9a8e8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001089366d0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108936400; end: 10893643f; -[SCNTalkcoreTsVideoRendererControllerCppProxy .cxx_construct] */

undefined8 * FUN_108936400(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108936720();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108936440; end: 108936533;  */

void FUN_108936440(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a9a858;
  puVar1[3] = &PTR_DAT_110a9a8d0;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_108936720();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110a9a8a8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1089366a8(&uStack_50);
  return;
}



/* Entry: 108936534; end: 108936537;  */

void FUN_108936534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a858;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108936538; end: 10893654b;  */

void FUN_108936538(void)

{
  FUN_108936698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893654c; end: 108936557;  */

long FUN_10893654c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a818;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108936558; end: 108936593;  */

void FUN_108936558(void)

{
  func_0x000108936744();
  return;
}



/* Entry: 108936594; end: 108936603;  */

void FUN_108936594(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1089368f8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be240(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108936604; end: 108936697;  */

long FUN_108936604(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a818;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108936698; end: 1089366a7;  */

void FUN_108936698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a858;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089366a8; end: 10893671f;  */

long FUN_1089366a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108936720; end: 108936757;  */

void FUN_108936720(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108936758; end: 1089367cf; -[SCNTalkcoreTsVideoRendererControllerListener initWithCpp:] */

undefined1 * FUN_108936758(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108936ad4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001089366f8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1089367d0; end: 108936893; -[SCNTalkcoreTsVideoRendererControllerListener onStartRendering:callback:] */

long * FUN_1089367d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_48,param_3);
  FUN_1089452d0(auStack_58,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,auStack_58);
  FUN_108936aa8(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  _objc_release(param_4);
  return plVar1;
}



/* Entry: 108936894; end: 1089368a7; -[SCNTalkcoreTsVideoRendererControllerListener onStopRendering:] */

void FUN_108936894(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001089368a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 1089368a8; end: 1089368f7;  */

void FUN_1089368a8(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_108936ad4();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1089368f8; end: 108936923;  */

void FUN_1089368f8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1089369bc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108936924; end: 108936977; -[SCNTalkcoreTsVideoRendererControllerListener .cxx_destruct] */

void FUN_108936924(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9a8f8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001089366f8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108936978; end: 1089369bb; -[SCNTalkcoreTsVideoRendererControllerListener .cxx_construct] */

undefined8 * FUN_108936978(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108936ad4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1089369bc; end: 108936a33;  */

void FUN_1089369bc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9a8f8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108936ad4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108936a34);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108936af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108936a34; end: 108936aa7;  */

void FUN_108936a34(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dad98;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108936ad4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001089366f8(&uStack_30);
  return;
}



/* Entry: 108936aa8; end: 108936ad3;  */

long FUN_108936aa8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108936ad4; end: 108936afb;  */

void FUN_108936ad4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108936afc; end: 108936bd7; -[SCNTalkcoreTsAppInfo initWithDeviceName:appVersion:] */

undefined1 *
FUN_108936afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd3a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108936bd8; end: 108936bdf; -[SCNTalkcoreTsAppInfo deviceName] */

undefined8 FUN_108936bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108936be0; end: 108936be7; -[SCNTalkcoreTsAppInfo appVersion] */

undefined8 FUN_108936be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108936be8; end: 108936c17; -[SCNTalkcoreTsAppInfo .cxx_destruct] */

void FUN_108936be8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108936c18; end: 108936c8f; -[SCNTalkcoreTsCodecConfig initWithHasH264Encoder:hasH264Decoder:hasH265Encoder:hasH265Decoder:enableDecoderOptimizations:] */

void FUN_108936c18(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fd3a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
  }
  return;
}



/* Entry: 108936c90; end: 108936c97; -[SCNTalkcoreTsCodecConfig hasH264Encoder] */

undefined1 FUN_108936c90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108936c98; end: 108936c9f; -[SCNTalkcoreTsCodecConfig hasH264Decoder] */

undefined1 FUN_108936c98(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108936ca0; end: 108936ca7; -[SCNTalkcoreTsCodecConfig hasH265Encoder] */

undefined1 FUN_108936ca0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108936ca8; end: 108936caf; -[SCNTalkcoreTsCodecConfig hasH265Decoder] */

undefined1 FUN_108936ca8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108936cb0; end: 108936cb7; -[SCNTalkcoreTsCodecConfig enableDecoderOptimizations] */

undefined1 FUN_108936cb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108936cb8; end: 108936e07; -[TCV3AndroidCodecDetails initWithMimeType:mediaCodecName:mediaCodecStatus:mediaCodecInitAttemptCount:mediaCodecInitAttemptFailure:mediaCodecExceptionCount:illegalStateExceptionCount:illegalStateExceptionPerSetParametersCount:mediaCodecExceptionRecoverableCount:mediaCodecExceptionTransientCount:mediaCodecFallbackDepth:encoderDetails:] */

undefined1 *
FUN_108936cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x25;
  
  func_0x000108936f80();
  _objc_retain(param_3);
  _objc_retain();
  func_0x000108936f98();
  puVar1 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x30);
    *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
    _objc_release(uVar2);
    *(undefined8 *)(puVar1 + 0x38) = unaff_x25;
    *(undefined4 *)(puVar1 + 8) = param_6;
    *(undefined4 *)(puVar1 + 0xc) = param_7;
    *(undefined4 *)(puVar1 + 0x10) = param_8;
    *(undefined4 *)(puVar1 + 0x14) = param_9;
    *(undefined4 *)(puVar1 + 0x18) = param_10;
    *(undefined4 *)(puVar1 + 0x1c) = param_11;
    *(undefined4 *)(puVar1 + 0x20) = param_12;
    *(undefined4 *)(puVar1 + 0x24) = param_13;
    func_0x000108936f98();
    uVar2 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = unaff_x21;
    _objc_release(uVar2);
  }
  _objc_release();
  func_0x000108936f78();
  func_0x000108936f70();
  return puVar1;
}



/* Entry: 108936e08; end: 108936ec7; +[TCV3AndroidCodecDetails AndroidCodecDetailsWithMimeType:mediaCodecName:mediaCodecStatus:mediaCodecInitAttemptCount:mediaCodecInitAttemptFailure:mediaCodecExceptionCount:illegalStateExceptionCount:illegalStateExceptionPerSetParametersCount:mediaCodecExceptionRecoverableCount:mediaCodecExceptionTransientCount:mediaCodecFallbackDepth:encoderDetails:] */

void FUN_108936e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_stack_00000008;
  
  func_0x000108936f80();
  _objc_retain(param_3);
  _objc_retain();
  func_0x000108936f98();
  _objc_alloc();
  func_0x00010c02bfe0();
  func_0x000108936f64();
  func_0x000108936f78();
  func_0x000108936f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_stack_00000008);
  return;
}



/* Entry: 108936ec8; end: 108936ecf; -[TCV3AndroidCodecDetails mimeType] */

undefined8 FUN_108936ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108936ed0; end: 108936ed7; -[TCV3AndroidCodecDetails mediaCodecName] */

undefined8 FUN_108936ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108936ed8; end: 108936edf; -[TCV3AndroidCodecDetails mediaCodecStatus] */

undefined8 FUN_108936ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108936ee0; end: 108936ee7; -[TCV3AndroidCodecDetails mediaCodecInitAttemptCount] */

undefined4 FUN_108936ee0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108936ee8; end: 108936eef; -[TCV3AndroidCodecDetails mediaCodecInitAttemptFailure] */

undefined4 FUN_108936ee8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108936ef0; end: 108936ef7; -[TCV3AndroidCodecDetails mediaCodecExceptionCount] */

undefined4 FUN_108936ef0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108936ef8; end: 108936eff; -[TCV3AndroidCodecDetails illegalStateExceptionCount] */

undefined4 FUN_108936ef8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108936f00; end: 108936f07; -[TCV3AndroidCodecDetails illegalStateExceptionPerSetParametersCount] */

undefined4 FUN_108936f00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108936f08; end: 108936f0f; -[TCV3AndroidCodecDetails mediaCodecExceptionRecoverableCount] */

undefined4 FUN_108936f08(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 108936f10; end: 108936f17; -[TCV3AndroidCodecDetails mediaCodecExceptionTransientCount] */

undefined4 FUN_108936f10(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 108936f18; end: 108936f1f; -[TCV3AndroidCodecDetails mediaCodecFallbackDepth] */

undefined4 FUN_108936f18(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 108936f20; end: 108936f27; -[TCV3AndroidCodecDetails encoderDetails] */

undefined8 FUN_108936f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108936f28; end: 108936f63; -[TCV3AndroidCodecDetails .cxx_destruct] */

void FUN_108936f28(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 108936f64; end: 108936f9f;  */

void FUN_108936f64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108936fa0; end: 108936ff7; -[TCV3AndroidEncoderDetails initWithSendToExtBufferCount:extBufferToInputBufferSuccessCount:extBufferFullCount:extBufferFullTimeMs:] */

void FUN_108936fa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000108937054();
  puStack_38 = PTR_PTR_1126fd3b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = unaff_w22;
    *(undefined4 *)((long)puVar1 + 0xc) = unaff_w21;
    *(undefined4 *)((long)puVar1 + 0x10) = unaff_w20;
    *(undefined8 *)((long)puVar1 + 0x18) = unaff_x19;
  }
  return;
}



/* Entry: 108936ff8; end: 108937033; +[TCV3AndroidEncoderDetails AndroidEncoderDetailsWithSendToExtBufferCount:extBufferToInputBufferSuccessCount:extBufferFullCount:extBufferFullTimeMs:] */

void FUN_108936ff8(void)

{
  func_0x000108937054();
  _objc_alloc();
  func_0x00010c044400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108937034; end: 10893703b; -[TCV3AndroidEncoderDetails sendToExtBufferCount] */

undefined4 FUN_108937034(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10893703c; end: 108937043; -[TCV3AndroidEncoderDetails extBufferToInputBufferSuccessCount] */

undefined4 FUN_10893703c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108937044; end: 10893704b; -[TCV3AndroidEncoderDetails extBufferFullCount] */

undefined4 FUN_108937044(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10893704c; end: 108937067; -[TCV3AndroidEncoderDetails extBufferFullTimeMs] */

undefined8 FUN_10893704c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108937068; end: 1089370df; -[TCV3OpsDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_108937068(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd3c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108937598();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108937570(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1089370e0; end: 1089370ef; -[TCV3OpsDataProviderCppProxy getBatteryLevel] */

void FUN_1089370e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089370ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1089370f0; end: 1089370ff; -[TCV3OpsDataProviderCppProxy isPowered] */

void FUN_1089370f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089370fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 108937100; end: 10893710f; -[TCV3OpsDataProviderCppProxy getTemperature] */

void FUN_108937100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010893710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 108937110; end: 10893720b;  */

void FUN_108937110(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dada0;
    _objc_opt_class(PTR_PTR_1126dada0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110a9a960;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_1089372ac);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108937548(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108937598();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10893720c; end: 108937267; -[TCV3OpsDataProviderCppProxy .cxx_destruct] */

void FUN_10893720c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9aa50;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108937570((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108937268; end: 1089372ab; -[TCV3OpsDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_108937268(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108937598();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1089372ac; end: 1089373a7;  */

void FUN_1089372ac(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a9a9a0;
  puVar1[3] = &PTR_DAT_110a9aa28;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  puVar1[4] = *puVar3;
  lVar4 = puVar3[1];
  puVar1[5] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_108937598();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110a9a9f0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108937548(&uStack_50);
  return;
}



/* Entry: 1089373a8; end: 1089373ab;  */

void FUN_1089373a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a9a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089373ac; end: 1089373bf;  */

void FUN_1089373ac(void)

{
  FUN_108937538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089373c0; end: 1089373cb;  */

void FUN_1089373c0(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x0001089375b0(param_1 + 0x20);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x0001089375a8();
  return;
}



/* Entry: 1089373cc; end: 108937407;  */

void FUN_1089373cc(void)

{
  func_0x0001089375c0();
  return;
}



/* Entry: 108937408; end: 108937443;  */

undefined8 FUN_108937408(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001089375b0();
  func_0x00010bfc2ee0(*(undefined8 *)(unaff_x19 + 0x18));
  func_0x0001089375a8();
  return param_1;
}



/* Entry: 108937444; end: 1089374ab;  */

undefined8 FUN_108937444(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001089375b0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x00010c07a920(uVar1);
  func_0x0001089375a8();
  return uVar1;
}



/* Entry: 1089374ac; end: 108937537;  */

void FUN_1089374ac(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x0001089375b0();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x0001089375a8();
  return;
}



/* Entry: 108937538; end: 108937547;  */

void FUN_108937538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a9a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108937548; end: 108937597;  */

long FUN_108937548(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108937598; end: 1089375cb;  */

void FUN_108937598(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1089375cc; end: 10893762f; -[TCV3ReconnectSlice initWithStartTimeMs:durationMs:resolveRequestsSent:cachedResolverResults:quicConnectionAttempts:numReachabilityChanges:] */

void FUN_1089375cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x0001089376ac();
  puStack_48 = PTR_PTR_1126fd3c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = unaff_x24;
    *(undefined4 *)((long)puVar1 + 8) = unaff_w23;
    *(undefined4 *)((long)puVar1 + 0xc) = unaff_w22;
    *(undefined4 *)((long)puVar1 + 0x10) = unaff_w21;
    *(undefined4 *)((long)puVar1 + 0x14) = unaff_w20;
    *(undefined4 *)((long)puVar1 + 0x18) = unaff_w19;
  }
  return;
}



/* Entry: 108937630; end: 10893767b; +[TCV3ReconnectSlice ReconnectSliceWithStartTimeMs:durationMs:resolveRequestsSent:cachedResolverResults:quicConnectionAttempts:numReachabilityChanges:] */

void FUN_108937630(void)

{
  func_0x0001089376ac();
  _objc_alloc();
  func_0x00010c04bbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10893767c; end: 108937683; -[TCV3ReconnectSlice startTimeMs] */

undefined8 FUN_10893767c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108937684; end: 10893768b; -[TCV3ReconnectSlice durationMs] */

undefined4 FUN_108937684(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10893768c; end: 108937693; -[TCV3ReconnectSlice resolveRequestsSent] */

undefined4 FUN_10893768c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108937694; end: 10893769b; -[TCV3ReconnectSlice cachedResolverResults] */

undefined4 FUN_108937694(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10893769c; end: 1089376a3; -[TCV3ReconnectSlice quicConnectionAttempts] */

undefined4 FUN_10893769c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1089376a4; end: 1089376c7; -[TCV3ReconnectSlice numReachabilityChanges] */

undefined4 FUN_1089376a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1089376c8; end: 10893780b; -[TCV3VideoCodecStats initWithCodecName:codecType:videoMediaType:sourceId:startTimeMs:durationMs:activeDurationMs:initAttemptCount:initAttemptFailureCount:inputFrameCount:outputFrameCount:submitFrameCount:submitFailureCount:processFailureCount:avgFrameProcessTimeUs:androidCodecDetails:] */

undefined8 *
FUN_1089376c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_6);
  func_0x0001089379a0();
  puStack_68 = PTR_PTR_1126fd3d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = param_3;
    puVar1[7] = param_4;
    puVar1[8] = param_5;
    func_0x00010bf51e00();
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 1) = param_8;
    *(undefined4 *)((long)puVar1 + 0xc) = param_9;
    *(undefined4 *)(puVar1 + 2) = param_10;
    *(undefined4 *)((long)puVar1 + 0x14) = param_11;
    *(undefined4 *)(puVar1 + 3) = param_12;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_13;
    *(undefined4 *)(puVar1 + 4) = param_14;
    *(undefined4 *)((long)puVar1 + 0x24) = param_15;
    *(undefined4 *)(puVar1 + 5) = param_16;
    puVar1[10] = param_7;
    puVar1[0xb] = param_17;
    func_0x0001089379a0();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  func_0x000108937998();
  return puVar1;
}


