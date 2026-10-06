/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcbe6f8; end: 10bcbe6ff; -[SCMainThreadTracer setInTransition:] */

void FUN_10bcbe6f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10bcbe700; end: 10bcbe70b; -[SCMainThreadTracer loggingQueue] */

void FUN_10bcbe700(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10bcbe70c; end: 10bcbe717; -[SCMainThreadTracer .cxx_destruct] */

void FUN_10bcbe70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10bcbe718; end: 10bcbe763; +[SCResult failureWithError:] */

void FUN_10bcbe718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5d0;
  _objc_alloc_init();
  *(undefined8 *)(puVar1 + 8) = 1;
  uVar2 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbe764; end: 10bcbe787; -[SCResult copyWithZone:] */

undefined8 FUN_10bcbe764(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bcbe788; end: 10bcbe7ff; -[SCResult hash] */

undefined8 * FUN_10bcbe788(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10bcbe890:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10bcbe89c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10bcbe89c;
        }
        goto LAB_10bcbe890;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10bcbe89c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10bcbe800; end: 10bcbe8b7; -[SCResult isEqual:] */

long FUN_10bcbe800(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10bcbe890:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bcbe89c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10bcbe89c;
        }
        goto LAB_10bcbe890;
      }
    }
    lVar3 = 0;
  }
LAB_10bcbe89c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bcbe8b8; end: 10bcbe96b; -[SCResult map:] */

void FUN_10bcbe8b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    _objc_opt_class(param_1);
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    unaff_x21 = param_1;
    _objc_opt_class(param_1);
    lVar1 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10bcbe96c; end: 10bcbe9ef; -[SCResult flatMap:] */

void FUN_10bcbe96c(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    _objc_opt_class(param_1);
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    unaff_x21 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10bcbe9f0; end: 10bcbea4f;  */

void FUN_10bcbe9f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e717d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e717d8,
                      &PTR____CFConstantStringClassReference_110dd1318,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10bcbea50; end: 10bcbeb2b;  */

void FUN_10bcbea50(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_11102e258;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_11102e258,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10bcbeb2c; end: 10bcbeb2f;  */

void FUN_10bcbeb2c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_11102e258;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_11102e258,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10bcbeb30; end: 10bcbeb6f;  */

undefined1 FUN_10bcbeb30(void)

{
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  return uRam00000001137fe068;
}



/* Entry: 10bcbeb70; end: 10bcbec13;  */

void FUN_10bcbeb70(undefined **param_1)

{
  undefined **ppuVar1;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  else {
    if (lRam00000001137fe070 != -1) {
      func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
    }
    if ((bRam00000001137fe068 & 1) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb80d8;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110de7af8;
    }
    func_0x00010c25ce40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10bcbec14; end: 10bcbec93; -[SCNInspectorLogsInspectorLogWriter initWithCpp:] */

undefined1 * FUN_10bcbec14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e660;
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
    func_0x00010bcbee68(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10bcbec94; end: 10bcbec9b; +[SCNInspectorLogsInspectorLogWriter available] */

undefined8 FUN_10bcbec94(void)

{
  return 0;
}



/* Entry: 10bcbec9c; end: 10bcbedbf; +[SCNInspectorLogsInspectorLogWriter log:category:subCategory:message:] */

void FUN_10bcbec9c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  func_0x000107c27f20(auStack_58,in_x3);
  func_0x000107c27f20(auStack_70,in_x4);
  func_0x000107c27f20(auStack_88,in_x5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 10bcbedc0; end: 10bcbee1b; -[SCNInspectorLogsInspectorLogWriter .cxx_destruct] */

void FUN_10bcbedc0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d98dc8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010bcbee68((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcbee1c; end: 10bcbee93; -[SCNInspectorLogsInspectorLogWriter .cxx_construct] */

undefined8 * FUN_10bcbee1c(undefined8 *param_1)

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



/* Entry: 10bcbee94; end: 10bcbeef7;  */

void FUN_10bcbee94(undefined8 param_1)

{
  long *plVar1;
  
  uRam0000000113847068 = param_1;
  FUN_10bcbeef8();
  __ZNSt3__15mutex4lockEv();
  func_0x00010bcbef68();
  plVar1 = (long *)0x1138470c8;
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_10bcbfd64(plVar1[2]);
  }
  func_0x00010bcbef68();
  FUN_10bcbf134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x113847070);
  return;
}



/* Entry: 10bcbeef8; end: 10bcbefc7;  */

undefined8 FUN_10bcbeef8(void)

{
  int iVar1;
  
  if ((bRam00000001138470b0 & 1) == 0) {
    iVar1 = 0x138470b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113847070 = 0x32aaaba7;
      uRam0000000113847080 = 0;
      uRam0000000113847078 = 0;
      uRam0000000113847090 = 0;
      uRam0000000113847088 = 0;
      uRam00000001138470a0 = 0;
      uRam0000000113847098 = 0;
      uRam00000001138470a8 = 0;
      ___cxa_guard_release(0x1138470b0);
    }
  }
  return 0x113847070;
}



/* Entry: 10bcbefc8; end: 10bcbf01f;  */

void FUN_10bcbefc8(uint param_1)

{
  FUN_10bcbeef8();
  __ZNSt3__15mutex4lockEv();
  func_0x00010bcbef68();
  FUN_10bcbf020();
  if ((param_1 & 1) == 0) {
    func_0x00010bcbef68();
    func_0x00010bcbf03c();
  }
  FUN_10bcbf9fc();
  return;
}



/* Entry: 10bcbf020; end: 10bcbf053;  */

bool FUN_10bcbf020(long param_1)

{
  FUN_10bcbf1b8();
  return param_1 != 0;
}



/* Entry: 10bcbf054; end: 10bcbf103;  */

void FUN_10bcbf054(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10bcbf104(param_3,param_4,param_5,param_2);
  plVar4 = (long *)*param_2;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,param_3,param_4,&uStack_40);
  func_0x00010bcbf9d4(&uStack_40);
  return;
}



/* Entry: 10bcbf104; end: 10bcbf133;  */

void FUN_10bcbf104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10bcbf6d4(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10bcbf134; end: 10bcbf1b7;  */

void FUN_10bcbf134(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010bcbf188(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10bcbf1b8; end: 10bcbf283;  */

long FUN_10bcbf1b8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    uVar2 = *param_2;
    FUN_10bcbf284();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar3[1];
        if (uVar2 != uVar6) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar7 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar1 * uVar7;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10bcbf284; end: 10bcbf2df;  */

void FUN_10bcbf284(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10bcbf2e0; end: 10bcbf68f;  */

undefined1  [16] FUN_10bcbf2e0(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined1 auVar15 [16];
  
  uVar3 = *param_2;
  FUN_10bcbf284();
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar14 <= uVar3) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar3 / uVar14;
        }
        unaff_x25 = uVar3 - uVar7 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10bcbf3a4;
          uVar7 = plVar12[1];
          if (uVar7 != uVar3) break;
          if (plVar12[2] == *param_2) {
            uVar4 = 0;
            goto LAB_10bcbf65c;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar14 <= uVar7) {
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar7 / uVar14;
          }
          uVar7 = uVar7 - uVar6 * uVar14;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_10bcbf3a4:
  lVar13 = *param_3;
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar3;
  plVar12[2] = lVar13;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10bcbf5e4;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_10bcbf450:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10bcbf684);
      (*pcVar2)();
    }
    lVar13 = uVar5 << 3;
    __Znwm(lVar13);
    FUN_10bcbf690(param_1,lVar13);
    param_1[1] = uVar5;
    lVar13 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar13 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar5 - 1;
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar10 / uVar5;
      }
      uVar11 = uVar10;
      if (uVar5 <= uVar10) {
        uVar11 = uVar10 - uVar7 * uVar5;
      }
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar13 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar10 * uVar5;
        }
        if (uVar7 != uVar11) {
          if (*(long *)(lVar13 + uVar7 * 8) == 0) {
            *(long **)(lVar13 + uVar7 * 8) = plVar9;
            uVar11 = uVar7;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar13 + uVar7 * 8);
            **(long **)(lVar13 + uVar7 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_10bcbf450;
      FUN_10bcbf690(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & uVar3;
  }
  else {
    unaff_x25 = uVar3;
    if (uVar14 <= uVar3) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar3 / uVar14;
      }
      unaff_x25 = uVar3 - uVar5 * uVar14;
    }
  }
LAB_10bcbf5e4:
  lVar13 = *param_1;
  plVar8 = *(long **)(lVar13 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar13 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar3 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar3 = uVar3 & uVar14 - 1;
      }
      else if (uVar14 <= uVar3) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar3 / uVar14;
        }
        uVar3 = uVar3 - uVar5 * uVar14;
      }
      *(long **)(lVar13 + uVar3 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010bcbfa18();
  uVar4 = 1;
LAB_10bcbf65c:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10bcbf690; end: 10bcbf6a7;  */

void FUN_10bcbf690(long *param_1,long param_2)

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



/* Entry: 10bcbf6a8; end: 10bcbf6d3;  */

long * FUN_10bcbf6a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcbf6d4; end: 10bcbf79b;  */

void FUN_10bcbf6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_60 [2];
  long lStack_50;
  long lStack_48;
  
  puVar4 = auStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10bcbf7b0(auStack_60,1);
  FUN_10bcbf808(lStack_50,param_3,param_4,param_5,param_6);
  lVar5 = lStack_50;
  lStack_50 = 0;
  FUN_10bcbf79c(param_1,lVar5 + 0x18);
  FUN_10bcbf99c(auStack_60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10bcbf99c();
  func_0x00010bcbfa10();
  *extraout_x8 = puVar4;
  extraout_x8[1] = lVar5;
  if ((puVar4 != (undefined8 *)0x0) && ((puVar4[1] == 0 || (*(long *)(puVar4[1] + 8) == -1)))) {
    pcStack_68 = FUN_10bcbf79c;
    lVar5 = extraout_x8[1];
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
      plVar1 = (long *)(lVar5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_78 = puVar4[1];
    uStack_80 = *puVar4;
    puStack_90 = puVar4;
    lStack_88 = lVar5;
    puStack_70 = &stack0xfffffffffffffff0;
    *puVar4 = puVar4;
    puVar4[1] = lVar5;
    func_0x00010bcbf9d4(&uStack_80);
    func_0x00010bcbf9ac(&puStack_90);
    return;
  }
  return;
}



/* Entry: 10bcbf79c; end: 10bcbf7af;  */

void FUN_10bcbf79c(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = (long)param_2;
  param_1[1] = param_3;
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_2;
    param_2[1] = lStack_28;
    puStack_30 = param_2;
    func_0x00010bcbf9d4(&uStack_20);
    func_0x00010bcbf9ac(&puStack_30);
    return;
  }
  return;
}



/* Entry: 10bcbf7b0; end: 10bcbf7d7;  */

long FUN_10bcbf7b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcbf7d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcbf7d8; end: 10bcbf807;  */

undefined8 * FUN_10bcbf7d8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1745d1745d1745e) {
    puVar1 = (undefined8 *)(param_2 * 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d98de8;
  FUN_10bcbf870(param_1 + 3);
  return param_1;
}



/* Entry: 10bcbf808; end: 10bcbf84b;  */

undefined8 * FUN_10bcbf808(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d98de8;
  FUN_10bcbf870(param_1 + 3);
  return param_1;
}



/* Entry: 10bcbf84c; end: 10bcbf84f;  */

void FUN_10bcbf84c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d98de8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcbf850; end: 10bcbf863;  */

void FUN_10bcbf850(void)

{
  FUN_10bcbf908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcbf864; end: 10bcbf86f;  */

void FUN_10bcbf864(long param_1)

{
  long *aplStack_30 [2];
  
  FUN_10bcbfbe4(aplStack_30,param_1 + 0xa0);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x30))(aplStack_30[0],param_1 + 0x18);
  }
  func_0x0001077f3bd4(aplStack_30);
  func_0x00010bcbfd34(param_1 + 0xa0);
  func_0x00010bcbfd0c(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  func_0x00010bcbf9d4(param_1 + 0x18);
  return;
}



/* Entry: 10bcbf870; end: 10bcbf907;  */

undefined8
FUN_10bcbf870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,param_3);
  FUN_10bcbfaa4(param_1,auStack_48,auStack_60,param_4,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return param_1;
}



/* Entry: 10bcbf908; end: 10bcbf917;  */

void FUN_10bcbf908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d98de8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcbf918; end: 10bcbf99b;  */

void FUN_10bcbf918(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lStack_28;
    uStack_30 = param_3;
    func_0x00010bcbf9d4(&uStack_20);
    func_0x00010bcbf9ac(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10bcbf99c; end: 10bcbf9ab;  */

void FUN_10bcbf99c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcbf9ac; end: 10bcbf9fb;  */

long FUN_10bcbf9ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcbf9fc; end: 10bcbfa23;  */

void FUN_10bcbf9fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x113847070);
  return;
}



/* Entry: 10bcbfa24; end: 10bcbfa37;  */

void FUN_10bcbfa24(void)

{
  FUN_10bcbfa74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcbfa38; end: 10bcbfa73;  */

void FUN_10bcbfa38(void)

{
  return;
}



/* Entry: 10bcbfa74; end: 10bcbfaa3;  */

undefined8 * FUN_10bcbfa74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d98e38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcbfaa4; end: 10bcbfb67;  */

undefined8 *
FUN_10bcbfaa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  do {
    lVar4 = lRam00000001138470e8 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1138470e8,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      lRam00000001138470e8 = lVar4;
    }
  } while (cVar2 != '\0');
  param_1[2] = lVar4;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[5] = param_2[2];
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[8] = param_3[2];
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10bcbfc24(param_1 + 9,param_4);
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[0x12] = param_5[1];
  param_1[0x11] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
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



/* Entry: 10bcbfb68; end: 10bcbfbe3;  */

void FUN_10bcbfb68(long param_1)

{
  long *aplStack_30 [2];
  
  FUN_10bcbfbe4(aplStack_30,param_1 + 0x88);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x30))(aplStack_30[0],param_1);
  }
  func_0x0001077f3bd4(aplStack_30);
  func_0x00010bcbfd34(param_1 + 0x88);
  func_0x00010bcbfd0c(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x00010bcbf9d4(param_1);
  return;
}



/* Entry: 10bcbfbe4; end: 10bcbfc23;  */

void FUN_10bcbfbe4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10bcbfc24; end: 10bcbfc67;  */

long FUN_10bcbfc24(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10bcbfc68();
  func_0x00010724cbe8(lVar1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 10bcbfc68; end: 10bcbfd5b;  */

long FUN_10bcbfc68(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10bcbfd5c; end: 10bcbfd63;  */

void FUN_10bcbfd5c(void)

{
  return;
}



/* Entry: 10bcbfd64; end: 10bcbfe1b;  */

undefined8 FUN_10bcbfd64(long param_1)

{
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    if (lRam0000000113847068 == 0) {
      FUN_10bcbefc8(param_1);
      return 0;
    }
    FUN_10bcbf054(auStack_30,lRam0000000113847068,param_1,param_1 + 0x18,param_1 + 0x30);
    func_0x00010bcbfdd8((long *)(param_1 + 0x70),auStack_30);
    FUN_10bcbf9ac(auStack_30);
  }
  return 1;
}



/* Entry: 10bcbfe1c; end: 10bcbfeb3;  */

void FUN_10bcbfe1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126e3028;
  _objc_alloc(PTR_PTR_1126e3028);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7780(puVar1,param_2,lVar2,param_1);
  FUN_10bcbfeb4();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcbfeb4; end: 10bcbfebf;  */

void FUN_10bcbfeb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcbfec0; end: 10bcbffb3;  */

void FUN_10bcbfec0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_48);
  func_0x00010bf45e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c27914(&uStack_60);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  FUN_10bcbffb4();
  func_0x00010bcbffbc();
  return;
}



/* Entry: 10bcbffb4; end: 10bcbffc3;  */

void FUN_10bcbffb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcbffc4; end: 10bcc0033;  */

void FUN_10bcbffc4(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0f0600();
  _objc_retainAutoreleasedReturnValue();
  FUN_10bcc0034(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x00010863d398(&uStack_40);
  FUN_10bcc05a4();
  return;
}



/* Entry: 10bcc0034; end: 10bcc01a7;  */

void FUN_10bcc0034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_198 [40];
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_150 [6];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00010bf529e0();
  FUN_10bcc01a8(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x00010bcc05ac();
  if (puVar2 != (undefined8 *)0x0) {
    lVar6 = *plStack_110;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lStack_118 + (long)puVar7 * 8);
        _objc_retain(uVar5);
        FUN_10bcbfec0(auStack_150,uVar5);
        puVar1 = auStack_150;
        func_0x00010bcc0450(param_1);
        puVar3 = auStack_150;
        func_0x00010863d440();
        func_0x00010bcc05c8();
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar7 < puVar2);
      func_0x00010bcc05ac();
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  plVar4 = (long *)0x0;
  func_0x00010bcc05a4();
  func_0x00010bcc05a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010bcc05a4();
    func_0x00010863d398(param_1);
    func_0x00010bcc05a4();
    __Unwind_Resume();
    pcStack_158 = FUN_10bcc01a8;
    if ((undefined8 *)((plVar4[2] - *plVar4) / 0x30) < puVar1) {
      puStack_170 = param_1;
      puStack_168 = param_2;
      puStack_160 = &stack0xfffffffffffffff0;
      if ((undefined8 *)0x555555555555555 < puVar1) {
        func_0x00010880d964();
        func_0x00010bcc05c0();
        __Unwind_Resume();
        lVar6 = puVar1[1] + ((plVar4[1] - *plVar4) / -0x30) * 0x30;
        FUN_10bcc030c(plVar4 + 2,*plVar4,plVar4[1],lVar6);
        puVar1[1] = lVar6;
        lVar6 = *plVar4;
        plVar4[1] = lVar6;
        *plVar4 = puVar1[1];
        puVar1[1] = lVar6;
        lVar6 = plVar4[1];
        plVar4[1] = puVar1[2];
        puVar1[2] = lVar6;
        lVar6 = plVar4[2];
        plVar4[2] = puVar1[3];
        puVar1[3] = lVar6;
        *puVar1 = puVar1[1];
        return;
      }
      FUN_10bcc02c0(auStack_198);
      func_0x00010bcc05d8();
      func_0x00010bcc05c0();
    }
    return;
  }
  return;
}



/* Entry: 10bcc01a8; end: 10bcc0233;  */

void FUN_10bcc01a8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x30) < param_2) {
    if ((undefined8 *)0x555555555555555 < param_2) {
      func_0x00010880d964();
      func_0x00010bcc05c0();
      __Unwind_Resume();
      lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
      FUN_10bcc030c(param_1 + 2,*param_1,param_1[1],lVar1);
      param_2[1] = lVar1;
      lVar1 = *param_1;
      param_1[1] = lVar1;
      *param_1 = param_2[1];
      param_2[1] = lVar1;
      lVar1 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar1;
      lVar1 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar1;
      *param_2 = param_2[1];
      return;
    }
    FUN_10bcc02c0(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
    func_0x00010bcc05d8();
    func_0x00010bcc05c0();
  }
  return;
}



/* Entry: 10bcc0234; end: 10bcc02bf;  */

void FUN_10bcc0234(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10bcc030c(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10bcc02c0; end: 10bcc030b;  */

long * FUN_10bcc02c0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010880d970();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10bcc030c; end: 10bcc03a3;  */

void FUN_10bcc030c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x30) {
    FUN_10bcc03a4(param_4,lVar1);
    param_4 = lStack_38 + 0x30;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x00010863d440(param_2);
  }
  func_0x00010880d9bc(&uStack_60);
  return;
}



/* Entry: 10bcc03a4; end: 10bcc03df;  */

void FUN_10bcc03a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10bcc03e0; end: 10bcc040b;  */

long * FUN_10bcc03e0(long *param_1)

{
  FUN_10bcc040c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcc040c; end: 10bcc0413;  */

void FUN_10bcc040c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x00010863d440();
  }
  return;
}



/* Entry: 10bcc0414; end: 10bcc04b7;  */

void FUN_10bcc0414(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x00010863d440();
  }
  return;
}



/* Entry: 10bcc04b8; end: 10bcc0553;  */

long FUN_10bcc04b8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10bcc0554(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_10bcc02c0(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_10bcc03a4(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x30;
  func_0x00010bcc05d8();
  lVar2 = param_1[1];
  func_0x00010bcc05c0();
  return lVar2;
}



/* Entry: 10bcc0554; end: 10bcc05a3;  */

ulong FUN_10bcc0554(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x555555555555555 < param_2) {
    func_0x00010880d964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    uVar2 = 0x555555555555555;
  }
  return uVar2;
}



/* Entry: 10bcc05a4; end: 10bcc05e3;  */

void FUN_10bcc05a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bcc05e4; end: 10bcc065b; -[SCNShimsDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_10bcc05e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c3a338();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27f10(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc065c; end: 10bcc06b3; -[SCNShimsDataProviderCppProxy isPlatformSafe] */

void FUN_10bcc065c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10bcc06b4; end: 10bcc072b; -[SCNShimsDataProviderCppProxy data] */

void FUN_10bcc06b4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc072c; end: 10bcc07bf; -[SCNShimsDataProviderCppProxy subspan:len:] */

void FUN_10bcc072c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
            (auStack_30,*(long **)(param_1 + 0x18),param_3,param_4);
  FUN_10bcc07c0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc0ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc07c0; end: 10bcc082f;  */

void FUN_10bcc07c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110875360,&PTR_DAT_110d98ea0,0);
    if (lVar1 == 0) {
      FUN_10bcc09dc(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bcc0830; end: 10bcc0883; -[SCNShimsDataProviderCppProxy .cxx_destruct] */

void FUN_10bcc0830(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d98fa0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f10((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc0884; end: 10bcc08c3; -[SCNShimsDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_10bcc0884(undefined8 *param_1)

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
      func_0x000107c3a338();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc08c4; end: 10bcc08c7;  */

void FUN_10bcc08c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d98f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc08c8; end: 10bcc08db;  */

void FUN_10bcc08c8(void)

{
  FUN_10bcc09cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc08dc; end: 10bcc0953;  */

void FUN_10bcc08dc(void)

{
  func_0x00010bcc0acc();
  return;
}



/* Entry: 10bcc0954; end: 10bcc09cb;  */

void FUN_10bcc0954(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  func_0x00010c260b80(*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31308(param_1);
  func_0x000107c3a340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10bcc09cc; end: 10bcc09db;  */

void FUN_10bcc09cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d98f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc09dc; end: 10bcc0a4f;  */

void FUN_10bcc09dc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d98fa0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c3a338();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10bcc0a50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc0ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcc0a50; end: 10bcc0ab7;  */

void FUN_10bcc0a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e3030;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c3a338();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27f10(&uStack_30);
  return;
}



/* Entry: 10bcc0ab8; end: 10bcc0af7;  */

void FUN_10bcc0ab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10bcc0af8; end: 10bcc0b6f; -[SCNShimsDispatchQueueCppProxy initWithCpp:] */

undefined1 * FUN_10bcc0af8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e670;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c3a348();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27e70(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcc0b70; end: 10bcc0c07; -[SCNShimsDispatchQueueCppProxy submit:] */

void FUN_10bcc0b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010bcc10ac();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  func_0x000107c27e74(auStack_40);
  func_0x000107c3a34c();
  return;
}



/* Entry: 10bcc0c08; end: 10bcc0ca7; -[SCNShimsDispatchQueueCppProxy submitWithDelay:delayMs:] */

void FUN_10bcc0c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010bcc10ac();
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_40,param_4);
  func_0x000107c27e74(auStack_40);
  func_0x000107c3a34c();
  return;
}



/* Entry: 10bcc0ca8; end: 10bcc0d03; -[SCNShimsDispatchQueueCppProxy isCurrentQueueOrTrueOnAndroid] */

void FUN_10bcc0ca8(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 10bcc0d04; end: 10bcc0d73;  */

void FUN_10bcc0d04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110873960,&PTR_DAT_110d98fb0,0);
    if (lVar1 == 0) {
      FUN_10bcc0f74(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bcc0d74; end: 10bcc0dc7; -[SCNShimsDispatchQueueCppProxy .cxx_destruct] */

void FUN_10bcc0d74(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d990e8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27e70((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10bcc0dc8; end: 10bcc0e07; -[SCNShimsDispatchQueueCppProxy .cxx_construct] */

undefined8 * FUN_10bcc0dc8(undefined8 *param_1)

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
      func_0x000107c3a348();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10bcc0e08; end: 10bcc0e0b;  */

void FUN_10bcc0e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc0e0c; end: 10bcc0e1f;  */

void FUN_10bcc0e0c(void)

{
  FUN_10bcc0f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc0e20; end: 10bcc0e2b;  */

long FUN_10bcc0e20(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d98ff8;
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



/* Entry: 10bcc0e2c; end: 10bcc0e67;  */

void FUN_10bcc0e2c(void)

{
  func_0x00010bcc10a0();
  return;
}



/* Entry: 10bcc0e68; end: 10bcc0ecf;  */

void FUN_10bcc0e68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c31314(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f940(uVar2);
  func_0x000107c3a354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10bcc0ed0; end: 10bcc0f63;  */

long FUN_10bcc0ed0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110d98ff8;
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


