/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d294a0; end: 108d294c7; -[SCChatStickerFuzzySearchListenerAnnouncer .cxx_destruct] */

void FUN_108d294a0(long param_1)

{
  FUN_108d294fc(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108d294c8; end: 108d294e7; -[SCChatStickerFuzzySearchListenerAnnouncer .cxx_construct] */

void FUN_108d294c8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 108d294e8; end: 108d294fb;  */

undefined * FUN_108d294e8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 108d294fc; end: 108d29553;  */

long FUN_108d294fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 108d29554; end: 108d29563;  */

void FUN_108d29554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac2960;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108d29564; end: 108d29583;  */

void FUN_108d29564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac2960;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108d29584; end: 108d295eb;  */

void FUN_108d29584(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108d295ec; end: 108d295ef;  */

void FUN_108d295ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108d295f0; end: 108d29693; -[SCComposerNetworkingClient initWithSessionRequestManager:snapTokenProvider:] */

undefined1 *
FUN_108d295f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d29694; end: 108d2969f; -[SCComposerNetworkingClient pushToValdiMarshaller:] */

void FUN_108d29694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899f18(param_3,param_1);
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 108d296a0; end: 108d29857; -[SCComposerNetworkingClient makeRequestWithRequest:completion:] */

void FUN_108d296a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108d29754;
  puStack_40 = &UNK_110ac29a0;
  uStack_38 = param_4;
  _objc_retain();
  func_0x00010c0b7760(param_1,param_2,param_3,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d29858; end: 108d29b4f; -[SCComposerNetworkingClient makeRequestWithErrorMetadataWithRequest:completion:] */

void FUN_108d29858(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_61 = 0;
  lVar1 = param_3;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf1e9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    uVar3 = param_1;
    func_0x00010be70480();
    uVar5 = uStack_70;
    _objc_retain(uStack_70);
    uVar6 = uStack_78;
    _objc_retain(uStack_78);
    lVar1 = lStack_80;
    _objc_retain(lStack_80);
    _objc_release(lVar2);
    if ((uVar3 & 1) == 0) {
      puVar7 = PTR_PTR_1126dbcf8;
      _objc_alloc(PTR_PTR_1126dbcf8);
      lVar2 = lVar1;
      func_0x00010c09e4e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a2a0(0,puVar7);
      (**(code **)(param_4 + 0x10))(param_4,0,puVar7);
      _objc_release(puVar7);
      _objc_release(lVar2);
      puVar7 = (undefined *)0x0;
      goto LAB_108d29b04;
    }
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c13b760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f3c0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfebae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf1f3c0();
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126bc0e8;
  lVar1 = param_3;
  func_0x00010c0cc940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc980();
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108d29b50;
  puStack_c8 = &UNK_110ac2a00;
  uStack_c0 = param_1;
  _objc_retain(param_3);
  lStack_b8 = param_3;
  _objc_retain(param_4);
  lStack_98 = param_4;
  _objc_retain(uVar6);
  uStack_b0 = uVar6;
  lStack_a8 = lVar1;
  _objc_retain(uVar5);
  uStack_88 = (undefined1)lVar2;
  uStack_87 = (undefined1)lVar4;
  uStack_a0 = uVar5;
  puStack_90 = puVar7;
  _objc_retain(lVar1);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_e0);
  puVar7 = PTR_PTR_1126dbd00;
  _objc_alloc(PTR_PTR_1126dbd00);
  func_0x00010c0455a0();
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lStack_98);
  _objc_release(lStack_b8);
LAB_108d29b04:
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108d29b50; end: 108d29cb3;  */

void FUN_108d29b50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2438e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_60,auStack_48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uStack_58 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined2 *)(param_1 + 0x58);
  func_0x00010be90900(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108d29cb4; end: 108d29ec7;  */

void FUN_108d29cb4(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c2438e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 0) && (lVar1 != 0)) {
    _objc_release();
    if (param_3 != (undefined *)0x0) {
      lVar1 = *(long *)(param_1 + 0x40);
      puVar4 = PTR_PTR_1126dbcf8;
      _objc_alloc(PTR_PTR_1126dbcf8);
      puVar2 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a2a0(0x4079100000000000,puVar4);
      (**(code **)(lVar1 + 0x10))(lVar1,0,puVar4);
      goto LAB_108d29e8c;
    }
  }
  else {
    _objc_release();
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe02c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(uVar3);
  puVar4 = (undefined *)(param_1 + 0x48);
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbb500();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10b60();
  func_0x00010be056e0(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
LAB_108d29e8c:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d29ec8; end: 108d2a3b3; -[SCComposerNetworkingClient _doPerformRequestWithEndpoint:orURL:parameters:headers:key:postData:method:authenticated:respondWithString:includeErrorResponseBody:completion:] */

void FUN_108d29ec8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000010;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000010);
  puVar1 = PTR_PTR_1126bbf20;
  puVar2 = PTR_PTR_1126b4960;
  if (param_3 == 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010bf58780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
  }
  else {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010bdc1d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58620(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    param_5 = puVar1;
  }
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_stack_00000010);
  func_0x00010c25f5e0(uVar4);
  _objc_release(uVar3);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000010);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 108d2a3b4; end: 108d2a54f; -[SCComposerNetworkingClient _requestAuthTokenIfNeededFromScope:completion:] */

void FUN_108d2a3b4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    _objc_retain(param_4);
    func_0x00010be918c0(param_1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108d2a550; end: 108d2a6db; -[SCComposerNetworkingClient _requestSnapTokenWithScope:completion:] */

void FUN_108d2a550(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd360;
  func_0x00010beecde0();
  if (puVar1 == (undefined *)0xc) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ef2df8;
    func_0x000108d2b8d8(&PTR____CFConstantStringClassReference_110ef2df8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)param_4[2])(param_4,0,ppuVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_4);
    func_0x00010bfa48e0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_4);
    ppuVar2 = param_4;
  }
  _objc_release(ppuVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108d2a6dc; end: 108d2a6ff;  */

void FUN_108d2a6dc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108d2a6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 108d2a700; end: 108d2a95f; -[SCComposerNetworkingClient _parseRequestBody:postData:parameters:hasRawBodyData:error:] */

long FUN_108d2a700(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                  undefined1 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf25f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010c28f4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      lVar7 = param_3;
      func_0x00010c0d2780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110ef2e18;
        func_0x000108d2b8d8();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_7 = ppuVar5;
        lVar7 = 0;
        goto LAB_108d2a8f8;
      }
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar7 = param_3;
      func_0x00010c0d2780();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010bf96fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar3);
          }
          uVar8 = *(undefined8 *)(lVar9 * 8);
          uVar4 = uVar8;
          func_0x00010bf4bc60(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d4f60(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar8);
          _objc_release(uVar4);
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      _objc_retainAutorelease(puVar2);
      *param_4 = (long)puVar2;
      _objc_release();
    }
    else {
      lVar7 = param_3;
      func_0x00010c28f4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = lVar7;
    }
    lVar7 = 1;
  }
  else {
    lVar7 = 1;
    *param_6 = 1;
    lVar1 = param_3;
    func_0x00010bf25f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = lVar1;
  }
LAB_108d2a8f8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar7;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
  param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
  return param_3;
}



/* Entry: 108d2a960; end: 108d2a98f; -[SCComposerNetworkingClient .cxx_destruct] */

void FUN_108d2a960(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2a990; end: 108d2aa03; -[SCComposerNetworkingGrpcCallHandleImpl initWithNativeHandle:] */

undefined1 * FUN_108d2a990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d2aa04; end: 108d2aa0b; -[SCComposerNetworkingGrpcCallHandleImpl cancel] */

void FUN_108d2aa04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 108d2aa0c; end: 108d2aa17; -[SCComposerNetworkingGrpcCallHandleImpl pushToValdiMarshaller:] */

void FUN_108d2aa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899f18(param_3,param_1);
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 108d2aa18; end: 108d2aa23; -[SCComposerNetworkingGrpcCallHandleImpl .cxx_destruct] */

void FUN_108d2aa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2aa24; end: 108d2ad8f; -[SCComposerNetworkingGrpcService unaryCallWithMethod:request:options:callback:] */

void FUN_108d2aa24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108d2ad90;
  puStack_70 = &UNK_110ac2a60;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126be598;
  uStack_68 = param_6;
  _objc_opt_class(PTR_PTR_1126be598);
  func_0x00010c0199c0(puVar1,param_2,&puStack_88,puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar3 = param_5;
  func_0x00010befd000(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar5,param_2,lVar4 + 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110deb478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5,param_2,puVar2,&PTR____CFConstantStringClassReference_110dbeff8);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  lVar3 = param_5;
  func_0x00010befd000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_5;
    func_0x00010befd000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar5,param_2,lVar3);
    _objc_release(lVar3);
  }
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c142440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010c142440(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067ec0();
    func_0x00010c1eeba0(puVar2,param_2,(long)(int)lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = param_5;
  func_0x00010bf3d540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010bf3d540(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d160(puVar2,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c27f2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar9);
  puVar6 = PTR_PTR_1126dbd10;
  _objc_alloc(PTR_PTR_1126dbd10);
  func_0x00010c02df40();
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d2ad90; end: 108d2aea7;  */

void FUN_108d2ad90(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (param_3 == 0) {
      puVar1 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = *(code **)(lVar5 + 0x10);
      puVar2 = (undefined *)0x0;
      puVar4 = puVar1;
    }
    else {
      puVar2 = PTR_PTR_1126b3588;
      _objc_alloc(PTR_PTR_1126b3588);
      lVar5 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2e0(puVar2);
      _objc_release(lVar5);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf3ec40(param_3);
      func_0x00010c0df780(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17dba0(puVar2);
      _objc_release(puVar1);
      lVar5 = *(long *)(param_1 + 0x20);
      pcVar3 = *(code **)(lVar5 + 0x10);
      puVar1 = (undefined *)0x0;
      puVar4 = puVar2;
    }
    (*pcVar3)(lVar5,puVar1,puVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d2aea8; end: 108d2b213; -[SCComposerNetworkingGrpcService serverStreamingCallWithMethod:request:options:callback:onRetry:] */

void FUN_108d2aea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b8580;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108d2b214;
  puStack_70 = &UNK_110ac2a90;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126be598;
  uStack_68 = param_6;
  _objc_opt_class(PTR_PTR_1126be598);
  func_0x00010c0199c0(puVar1,param_2,&puStack_88,puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar3 = param_5;
  func_0x00010befd000(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar5,param_2,lVar4 + 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110deb478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5,param_2,puVar2,&PTR____CFConstantStringClassReference_110dbeff8);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  lVar3 = param_5;
  func_0x00010befd000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_5;
    func_0x00010befd000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar5,param_2,lVar3);
    _objc_release(lVar3);
  }
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c142440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010c142440(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067ec0();
    func_0x00010c1eeba0(puVar2,param_2,(long)(int)lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = param_5;
  func_0x00010bf3d540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010bf3d540(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d160(puVar2,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c15f5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar9);
  puVar6 = PTR_PTR_1126dbd10;
  _objc_alloc(PTR_PTR_1126dbd10);
  func_0x00010c02df40();
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d2b214; end: 108d2b2fb;  */

void FUN_108d2b214(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (param_4 == 0) {
      puVar1 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = *(code **)(lVar5 + 0x10);
      puVar2 = (undefined *)0x0;
      puVar4 = puVar1;
    }
    else {
      puVar2 = PTR_PTR_1126b3588;
      _objc_alloc(PTR_PTR_1126b3588);
      lVar5 = param_4;
      func_0x00010c09e4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2e0(puVar2);
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0x20);
      pcVar3 = *(code **)(lVar5 + 0x10);
      param_2 = 1;
      puVar1 = (undefined *)0x0;
      puVar4 = puVar2;
    }
    (*pcVar3)(lVar5,param_2,puVar1,puVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d2b2fc; end: 108d2b307; -[SCComposerNetworkingGrpcService pushToValdiMarshaller:] */

void FUN_108d2b2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899f18(param_3,param_1);
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 108d2b308; end: 108d2b313; -[SCComposerNetworkingGrpcService .cxx_destruct] */

void FUN_108d2b308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2b314; end: 108d2b387; -[SCValdiCancelableRequestToken initWithRequestToken:] */

undefined1 * FUN_108d2b314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe658;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d2b388; end: 108d2b38f; -[SCValdiCancelableRequestToken cancel] */

void FUN_108d2b388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 108d2b390; end: 108d2b39b; -[SCValdiCancelableRequestToken .cxx_destruct] */

void FUN_108d2b390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2b39c; end: 108d2b7af; -[SCComposerSnapHTTPRequestManager performRequest:completion:] */

void FUN_108d2b39c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cc940();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if (((((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c0720c0(), (uVar2 & 1) == 0)) &&
      (uVar2 = uVar1, func_0x00010c0720c0(), (uVar2 & 1) == 0)) &&
     (uVar2 = uVar1, func_0x00010c0720c0(), (uVar2 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  _objc_release(uVar1);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b7218;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b3f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2bc200(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b9840();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b0180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2a95e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2af6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar12 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar3 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113c80();
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2bcaa0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar15 = uVar13;
  func_0x00010c25f600(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar13);
  puVar3 = PTR_PTR_1126dbd18;
  _objc_alloc(PTR_PTR_1126dbd18);
  func_0x00010c03f5c0();
  _objc_release(uVar15);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d2b7b0; end: 108d2b8cb;  */

void FUN_108d2b7b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 1) {
    if (param_6 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126d9250;
      _objc_alloc(PTR_PTR_1126d9250);
      func_0x00010c252ee0(param_4);
      uVar2 = param_4;
      func_0x00010bf001c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04c440(puVar1);
      _objc_release(uVar2);
      func_0x00010c0e2fc0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = param_6;
      func_0x00010c09e4e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e40a0(uVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d2b8cc; end: 108d2b8f3; -[SCComposerSnapHTTPRequestManager .cxx_destruct] */

void FUN_108d2b8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2b8f4; end: 108d2b987; -[SCComposerNetworkingRequestCanceler initWithSessionRequestManager:requestKey:] */

undefined1 *
FUN_108d2b8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x00010c1ebe00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d2b988; end: 108d2b993; -[SCComposerNetworkingRequestCanceler pushToValdiMarshaller:] */

undefined8 FUN_108d2b988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b20;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 108d2b994; end: 108d2ba1f; -[SCComposerNetworkingRequestCanceler cancel] */

void FUN_108d2b994(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c135a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1;
    func_0x00010c135a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee60(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1ebe00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1781b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanceled__11263ba88,1);
  return;
}



/* Entry: 108d2ba20; end: 108d2ba2b; -[SCComposerNetworkingRequestCanceler canceled] */

byte FUN_108d2ba20(long param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



/* Entry: 108d2ba2c; end: 108d2ba33; -[SCComposerNetworkingRequestCanceler setCanceled:] */

void FUN_108d2ba2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108d2ba34; end: 108d2ba3f; -[SCComposerNetworkingRequestCanceler requestKey] */

void FUN_108d2ba34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 108d2ba40; end: 108d2ba47; -[SCComposerNetworkingRequestCanceler setRequestKey:] */

void FUN_108d2ba40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108d2ba48; end: 108d2ba73; -[SCComposerNetworkingRequestCanceler .cxx_destruct] */

void FUN_108d2ba48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108d2ba74; end: 108d2bba7; -[SCBitmojiStickerSearch initWithDatabase:avatarProvider:friendProvider:renderStyleProvider:maxCustomojiCount:customojiSearchService:] */

undefined1 *
FUN_108d2ba74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fe670;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d2bba8; end: 108d2bcf3; -[SCBitmojiStickerSearch searchStickersWithText:avatarIds:forceFriendmojis:completionBlock:] */

void FUN_108d2bba8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,PTR____NSArray0__struct_11034ab48);
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_108d2bcf4;
    uStack_50 = 0x108d2bd04;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_48 = puVar1;
    _objc_retain(param_6);
    func_0x00010c0f8480(uVar2);
    _objc_release(param_6);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d2bcf4; end: 108d2bd0b;  */

void FUN_108d2bcf4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d2bd0c; end: 108d2bfbb;  */

void FUN_108d2bd0c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba808;
  _objc_alloc();
  func_0x00010bff7e20();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb7c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c286080(puVar1);
  }
  puVar4 = PTR_PTR_1126bb1d8;
  _objc_alloc_init();
  func_0x00010c1e12a0();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_2);
  puVar10 = &uStack_130;
  puVar11 = auStack_f0;
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_2);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar5 = uVar13;
        func_0x00010bf96f00();
        if (uVar5 == 2) {
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126ba800;
          _objc_opt_class(PTR_PTR_1126ba800);
          uVar7 = uVar13;
          _objc_opt_isKindOfClass(uVar13,puVar6);
          uVar5 = uVar13;
          if ((uVar7 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar13);
          if ((lVar3 != 0) || (uVar13 = uVar5, func_0x00010bf1c500(), uVar13 != 2)) {
            puVar6 = puVar4;
            func_0x00010c10f580();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126ba7a8;
            _objc_alloc();
            func_0x00010bffa520();
            func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          _objc_release(uVar5);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar10 = &uStack_130;
      puVar11 = auStack_f0;
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  lVar2 = *(long *)(param_2 + 0x18);
  _objc_retain(puVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb7c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c08fa60(lVar3);
  puVar1 = PTR_PTR_1126ba808;
  _objc_alloc(PTR_PTR_1126ba808);
  func_0x00010bff7e20();
  if (lVar3 != 0) {
    func_0x00010c286080(puVar1);
  }
  puVar4 = PTR_PTR_1126bb1d8;
  _objc_alloc_init();
  func_0x00010c1e12a0();
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar11);
  _objc_retain(puVar4);
  func_0x00010c153800(uVar9);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 108d2bfbc; end: 108d2c16f; -[SCBitmojiStickerSearch searchCustomojiStickersWithText:completionBlock:] */

void FUN_108d2bfbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfb7c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010c08fa60(lVar1);
  puVar2 = PTR_PTR_1126ba808;
  _objc_alloc(PTR_PTR_1126ba808);
  func_0x00010bff7e20();
  if (lVar1 != 0) {
    func_0x00010c286080(puVar2,param_2,lVar1);
  }
  puVar3 = PTR_PTR_1126bb1d8;
  _objc_alloc_init();
  func_0x00010c1e12a0();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108d2c170;
  puStack_80 = &UNK_1108950d8;
  lStack_78 = param_1;
  puStack_70 = puVar3;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar3);
  func_0x00010c153800(uVar4,param_2,param_3,uVar6,lVar5 != 0,1,&puStack_98);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 108d2c170; end: 108d2c2f7;  */

void FUN_108d2c170(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bf529e0(param_2);
  func_0x00010bffc4a0(puVar2);
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bec2aa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar6 = *(long *)(param_1 + 0x30);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_clearCachedStickerSearchResults_1125ac4f8);
  return;
}



/* Entry: 108d2c2f8; end: 108d2c2ff; -[SCBitmojiStickerSearch clearCachedStickerSearchResults] */

void FUN_108d2c2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clearCachedStickerSearchResults_1125ac4f8);
  return;
}



/* Entry: 108d2c300; end: 108d2c507; -[SCBitmojiStickerSearch _stickerFromCustomojiResult:itemPresentationModelProvider:] */

void FUN_108d2c300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ba800;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2540c0(param_3);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c073880();
  uVar7 = 1;
  if ((int)uVar4 != 0) {
    uVar7 = 2;
  }
  puVar5 = PTR_PTR_1126bb280;
  _objc_alloc(PTR_PTR_1126bb280);
  uVar4 = param_3;
  func_0x00010c1306a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03e2a0(puVar5,param_2,uVar4,uVar6);
  func_0x00010bfffd00(puVar1,param_2,puVar3,uVar7,0,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  puVar3 = puVar1;
  func_0x00010bf41a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf41a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fe20(puVar2,param_2,puVar3,2,puVar1,puVar5,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(puVar5);
  _objc_release(puVar3);
  uVar7 = param_4;
  func_0x00010c10f580(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126ba7a8;
  _objc_alloc(PTR_PTR_1126ba7a8);
  func_0x00010bffa520();
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d2c508; end: 108d2c55b; -[SCBitmojiStickerSearch .cxx_destruct] */

void FUN_108d2c508(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2c55c; end: 108d2c5b3; -[SCChatQSIRotationStickerProvider initWithRotationType:timeIntervalBetweenRotations:] */

void FUN_108d2c55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe678;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  return;
}



/* Entry: 108d2c5b4; end: 108d2c77f; -[SCChatQSIRotationStickerProvider startRotationWithStickers:] */

void FUN_108d2c5b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (1 < uVar1) {
    uVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_3);
    uVar2 = param_3;
    func_0x00010c25e980(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be21d00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c270920(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    _objc_release(uVar5);
    func_0x00010c216ce0(*(double *)(param_1 + 0x18) * 0.1,*(undefined8 *)(param_1 + 0x10));
    puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108d2c780; end: 108d2c7ab;  */

void FUN_108d2c780(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d2c7ac; end: 108d2c7e3; -[SCChatQSIRotationStickerProvider stopRotation] */

void FUN_108d2c7ac(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d2c7e4; end: 108d2c967; -[SCChatQSIRotationStickerProvider _getQSIStickersWithInitialSticker:stickers:] */

void FUN_108d2c7e4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 != 0) {
      param_1 = (undefined *)0x0;
      if (lVar3 == 1) {
        param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_108d2c934;
    }
    func_0x00010be1d660(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
LAB_108d2c910:
    func_0x00010bf0a0c0(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 == 2) {
      func_0x00010be60860(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d2c934;
    }
    if (lVar3 == 3) {
      param_1 = param_4;
      func_0x00010c11f260(param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d2c910;
    }
    param_1 = (undefined *)0x0;
    if (lVar3 != 4) goto LAB_108d2c934;
    param_1 = param_4;
    func_0x00010c11f260(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c099060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  param_1 = puVar2;
LAB_108d2c934:
  func_0x00010befa120(param_1,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d2c968; end: 108d2ca6f; -[SCChatQSIRotationStickerProvider _getByOneStickerOfEachTypeExceptSticker:stickers:] */

void FUN_108d2c968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c27dd80(param_3);
  func_0x00010c0df840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108d2ca70;
  puStack_40 = &UNK_110ac2af0;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  uVar3 = param_4;
  func_0x00010bfb2660(param_4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0d3c80(uVar3);
  _objc_release(uVar3);
  _objc_release(puStack_38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108d2ca70; end: 108d2cb4b;  */

void FUN_108d2ca70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c27dd80(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27dd80(param_2);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar1);
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d2cb4c; end: 108d2cc8b; -[SCChatQSIRotationStickerProvider _mixAllTypesStickers:] */

void FUN_108d2cb4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010be24980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar5 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf529e0();
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    uVar5 = (ulong)(1 < uVar5);
    do {
      for (; uVar2 = param_1, func_0x00010bf529e0(), uVar5 < uVar2; uVar5 = uVar5 + 1) {
        uVar2 = param_1;
        func_0x00010c0dfd40(param_1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        if (uVar4 < uVar3) {
          uVar3 = uVar2;
          func_0x00010c0dfd40(uVar2,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar3);
          _objc_release(uVar3);
        }
        _objc_release(uVar2);
      }
      uVar4 = uVar4 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
      uVar5 = 0;
    } while (uVar4 < uVar2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d2cc8c; end: 108d2cf87; -[SCChatQSIRotationStickerProvider _groupStickersByType:] */

/* WARNING: Possible PIC construction at 0x000108d2d010: Changing call to branch */

void FUN_108d2cc8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c27dd80(*(undefined8 *)(lVar10 * 8));
      func_0x00010c0df840(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010bf4b900();
      _objc_release(puVar5);
      if ((int)puVar11 == 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar5);
        func_0x00010befa120(puVar3);
      }
      else {
        puVar5 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar3);
      }
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar6);
      puVar11 = puVar11 + 1;
    } while (puVar4 != puVar11);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar4 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(param_3 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfb1920(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37220();
    _objc_release(lVar7);
    func_0x00010c12d3c0(*(undefined8 *)(param_3 + 0x20));
    lVar7 = *(long *)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c256890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stopRotation_112673448);
  return;
}



/* Entry: 108d2cf88; end: 108d2d03b; -[SCChatQSIRotationStickerProvider _rotateToNextSticker] */

/* WARNING: Possible PIC construction at 0x000108d2d010: Changing call to branch */

void FUN_108d2cf88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37220();
    _objc_release(lVar1);
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c256890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopRotation_112673448);
  return;
}



/* Entry: 108d2d03c; end: 108d2d053; -[SCChatQSIRotationStickerProvider delegate] */

void FUN_108d2d03c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d2d054; end: 108d2d05f; -[SCChatQSIRotationStickerProvider setDelegate:] */

void FUN_108d2d054(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 108d2d060; end: 108d2d097; -[SCChatQSIRotationStickerProvider .cxx_destruct] */

void FUN_108d2d060(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108d2d098; end: 108d2d0ab;  */

void FUN_108d2d098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ef2e58,0,0);
  return;
}



/* Entry: 108d2d0ac; end: 108d2d103;  */

long FUN_108d2d0ac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ef2e78,0,0);
  uVar1 = (uint)param_1;
  if (4 < uVar1) {
    uVar1 = 0;
  }
  return (long)(int)uVar1;
}



/* Entry: 108d2d104; end: 108d2d207; +[SCStickerRankingUtils checkTagValidity:] */

uint FUN_108d2d104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  if (lRam000000011372e540 != -1) {
    func_0x000107c27d9c(0x11372e540,&PTR___NSConcreteGlobalBlock_110ac2b20);
  }
  uVar1 = uRam000000011372e538;
  _objc_retain(uRam000000011372e538);
  if (lRam000000011372e550 != -1) {
    func_0x000107c27d9c(0x11372e550,&PTR___NSConcreteGlobalBlock_110ac2b40);
  }
  uVar2 = uRam000000011372e548;
  _objc_retain(uRam000000011372e548);
  uVar3 = param_3;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900();
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x00010bf4b900(uVar1);
    uVar5 = (uint)uVar4 ^ 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108d2d208; end: 108d2d2af;  */

void FUN_108d2d208(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  func_0x00010c0309a0();
  uVar1 = puRam000000011372e538;
  puRam000000011372e538 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d2d2b0; end: 108d2e5f3;  */

void FUN_108d2d2b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  func_0x00010c0309a0();
  uVar1 = puRam000000011372e548;
  puRam000000011372e548 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d2e5f4; end: 108d2e637; -[SCChatSearchStickersPrioritizer initWithDefaultPriorities] */

void FUN_108d2e5f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bff83a0(param_1,param_2,7,8,5,4,3,4,2,4,4,4);
  return;
}



/* Entry: 108d2e638; end: 108d2e80f; -[SCChatSearchStickersPrioritizer initWithBitmojiStickerPriority:bitmojiStickerBatchSize:cameoStickerPriority:cameoStickerBatchSize:snapchatStickerPriority:snapchatStickerBatchSize:emojiStickerPriority:emojiStickerBatchSize:giphyStickerPriority:giphyStickerBatchSize:] */

undefined8 *
FUN_108d2e638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fe680;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c246ba0(puVar7);
    puVar2 = puVar7;
    func_0x00010bf51e00();
    uVar8 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar8);
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    puVar1[7] = param_7;
    puVar1[8] = param_8;
    puVar1[9] = param_9;
    puVar1[10] = param_10;
    puVar1[0xb] = param_11;
    puVar1[0xc] = param_12;
    _objc_release(puVar7);
  }
  return puVar1;
}



/* Entry: 108d2e810; end: 108d2e81b;  */

void FUN_108d2e810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 108d2e81c; end: 108d2e897; -[SCChatSearchStickersPrioritizer sortStickers:] */

void FUN_108d2e81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010bebe1e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d2e898; end: 108d2e913; -[SCChatSearchStickersPrioritizer sortItems:] */

void FUN_108d2e898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010bebe0e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d2e914; end: 108d2ed4b; -[SCChatSearchStickersPrioritizer _sortStickers:] */

void FUN_108d2e914(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *unaff_x21;
  undefined *puVar20;
  long unaff_x23;
  undefined *unaff_x24;
  long lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined *puVar24;
  long unaff_x28;
  undefined8 *puVar25;
  undefined *puVar26;
  undefined1 auStack_520 [128];
  long lStack_4a0;
  long lStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined1 ***pppuStack_440;
  code *pcStack_438;
  undefined *puStack_428;
  uint uStack_41c;
  undefined *puStack_418;
  uint uStack_40c;
  undefined *puStack_408;
  uint uStack_3fc;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  uint uStack_3e4;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [128];
  long lStack_320;
  long lStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_140 = puVar19;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_148 = puVar26;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = param_3;
  puStack_150 = puVar9;
  func_0x00010c0d3c80();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_138 = puVar26;
  _objc_retain(param_3);
  puVar26 = param_3;
  func_0x00010bf52a60();
  if (puVar26 != (undefined *)0x0) {
    unaff_x23 = *plStack_120;
    puStack_158 = puVar19;
    do {
      unaff_x24 = (undefined *)0x0;
      puVar9 = unaff_x21;
      do {
        if (*plStack_120 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        uVar17 = *(ulong *)(lStack_128 + (long)unaff_x24 * 8);
        uVar4 = uVar17;
        func_0x00010c27dd80();
        unaff_x21 = puStack_148;
        puVar11 = puStack_150;
        if ((long)uVar4 < 3) {
          if (uVar4 == 1) {
            puVar9 = puStack_148;
            func_0x00010bf529e0();
            puVar24 = *(undefined **)(param_1 + 0x50);
            goto LAB_108d2eba0;
          }
          unaff_x21 = puVar9;
          if (uVar4 == 2) {
            puVar9 = puVar19;
            func_0x00010bf529e0();
            puVar24 = *(undefined **)(param_1 + 0x40);
            unaff_x21 = puVar19;
            goto LAB_108d2eba0;
          }
LAB_108d2ebe4:
          func_0x00010c12d360(puStack_138);
        }
        else {
          if (uVar4 == 0xb) {
            puVar9 = puVar2;
            func_0x00010bf529e0();
            puVar24 = *(undefined **)(param_1 + 0x30);
            unaff_x21 = puVar2;
LAB_108d2eba0:
            if (puVar9 < puVar24) {
LAB_108d2eba8:
              func_0x00010befa120(unaff_x21);
            }
            else {
LAB_108d2ebe0:
              if (puVar24 != (undefined *)0x0) goto LAB_108d2ebf0;
            }
            goto LAB_108d2ebe4;
          }
          if (uVar4 == 7) {
            puVar9 = puStack_150;
            func_0x00010bf529e0();
            puVar24 = *(undefined **)(param_1 + 0x60);
            unaff_x21 = puVar11;
            goto LAB_108d2eba0;
          }
          unaff_x21 = puVar9;
          if (uVar4 != 3) goto LAB_108d2ebe4;
          unaff_x21 = puVar1;
          func_0x00010bf529e0();
          puVar9 = puStack_140;
          func_0x00010bf529e0();
          if (puVar9 + (long)unaff_x21 < (undefined *)(*(long *)(param_1 + 0x20) + 8U)) {
            func_0x00010c271a80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar17;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar17);
            puVar19 = PTR_PTR_1126ba800;
            _objc_opt_class(PTR_PTR_1126ba800);
            uVar17 = uVar3;
            _objc_opt_isKindOfClass(uVar3,puVar19);
            uVar4 = uVar3;
            if ((uVar17 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain(uVar4);
            _objc_release(uVar3);
            uVar17 = uVar4;
            func_0x00010bf62ee0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar17);
            unaff_x21 = puStack_140;
            if (uVar17 != 0) {
              puVar9 = puStack_140;
              func_0x00010bf529e0();
              puVar19 = puStack_158;
              if ((undefined *)0x7 < puVar9) goto LAB_108d2ebf0;
              goto LAB_108d2eba8;
            }
            puVar9 = puVar1;
            func_0x00010bf529e0();
            puVar24 = *(undefined **)(param_1 + 0x20);
            unaff_x21 = puVar1;
            puVar19 = puStack_158;
            if (puVar9 < puVar24) goto LAB_108d2eba8;
            goto LAB_108d2ebe0;
          }
        }
LAB_108d2ebf0:
        unaff_x24 = unaff_x24 + 1;
        puVar9 = unaff_x21;
      } while (puVar26 != unaff_x24);
      puVar26 = param_3;
      func_0x00010bf52a60();
      unaff_x28 = 0;
    } while (puVar26 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar26 = param_1;
  func_0x00010be60880();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar26;
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if ((uVar4 < 0x60) && (puVar11 = puStack_138, func_0x00010bf529e0(), puVar11 != (undefined *)0x0))
  {
    puVar9 = puStack_138;
    func_0x00010bebe1e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    param_1 = *(undefined **)(param_1 + 0x10);
    if (uVar4 < 0x61) {
      _objc_retain(param_1);
    }
    else {
      puVar9 = (undefined *)0x0;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar26);
  _objc_release(puStack_138);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puVar19);
  _objc_release(puVar2);
  _objc_release(puStack_140);
  _objc_release(puVar1);
  puVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_108d2ed4c;
    lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1c0 = unaff_x28;
    puStack_1b8 = puVar19;
    puStack_1b0 = puVar2;
    puStack_1a8 = param_1;
    puStack_1a0 = unaff_x24;
    lStack_198 = unaff_x23;
    puStack_190 = puVar1;
    puStack_188 = unaff_x21;
    puStack_180 = puVar26;
    puStack_178 = param_3;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    ppuVar18 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_298 = puVar19;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_2a0 = puVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_2a8 = puVar19;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar9;
    func_0x00010c0d3c80();
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    _objc_retain(puVar9);
    puVar24 = puVar9;
    func_0x00010bf52a60();
    if (puVar24 != (undefined *)0x0) {
      ppuVar18 = (undefined **)*plStack_280;
      do {
        unaff_x21 = (undefined *)0x0;
        puVar10 = puVar1;
        do {
          if ((undefined **)*plStack_280 != ppuVar18) {
            _objc_enumerationMutation(puVar9);
          }
          unaff_x28 = *(long *)(lStack_288 + (long)unaff_x21 * 8);
          lVar13 = unaff_x28;
          func_0x00010bf96f00();
          puVar20 = puStack_298;
          puVar12 = puStack_2a0;
          puVar1 = puStack_2a8;
          if (lVar13 < 5) {
            if (lVar13 == 1) {
              puVar5 = puStack_2a8;
              func_0x00010bf529e0();
              puVar16 = *(undefined **)(puVar11 + 0x40);
              goto LAB_108d2eef4;
            }
            if (lVar13 == 2) {
              puVar5 = puStack_298;
              func_0x00010bf529e0();
              puVar16 = *(undefined **)(puVar11 + 0x20);
              puVar1 = puVar20;
              goto LAB_108d2eef4;
            }
LAB_108d2ef10:
            func_0x00010c12d360(puVar26);
            puVar1 = puVar10;
          }
          else {
            if (lVar13 == 5) {
              puVar5 = puVar2;
              func_0x00010bf529e0();
              puVar16 = *(undefined **)(puVar11 + 0x50);
              puVar1 = puVar2;
            }
            else if (lVar13 == 6) {
              puVar5 = puVar19;
              func_0x00010bf529e0();
              puVar16 = *(undefined **)(puVar11 + 0x60);
              puVar1 = puVar19;
            }
            else {
              if (lVar13 != 8) goto LAB_108d2ef10;
              puVar5 = puStack_2a0;
              func_0x00010bf529e0();
              puVar16 = *(undefined **)(puVar11 + 0x30);
              puVar1 = puVar12;
            }
LAB_108d2eef4:
            puVar10 = puVar1;
            if (puVar5 < puVar16) {
              func_0x00010befa120(puVar1);
              goto LAB_108d2ef10;
            }
            if (puVar16 == (undefined *)0x0) goto LAB_108d2ef10;
          }
          unaff_x21 = unaff_x21 + 1;
          puVar10 = puVar1;
        } while (puVar24 != unaff_x21);
        puVar24 = puVar9;
        func_0x00010bf52a60();
      } while (puVar24 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar24 = puVar11;
    puVar12 = PTR____NSArray0__struct_11034ab48;
    puVar20 = puStack_2a0;
    puVar5 = puStack_2a8;
    puVar16 = puVar2;
    puVar15 = puVar19;
    func_0x00010be60880();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar24;
    func_0x00010befa160(*(undefined8 *)(puVar11 + 0x10));
    uVar4 = *(ulong *)(puVar11 + 0x10);
    func_0x00010bf529e0();
    if ((uVar4 < 0x60) && (puVar6 = puVar26, func_0x00010bf529e0(), puVar6 != (undefined *)0x0)) {
      puVar10 = puVar26;
      func_0x00010bebe0e0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar11;
    }
    else {
      uVar4 = *(ulong *)(puVar11 + 0x10);
      func_0x00010bf529e0();
      param_1 = *(undefined **)(puVar11 + 0x10);
      if (uVar4 < 0x61) {
        _objc_retain(param_1);
      }
      else {
        puVar10 = (undefined *)0x0;
        puVar12 = (undefined *)0x60;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar24);
    _objc_release(puVar26);
    _objc_release(puVar19);
    _objc_release(puVar2);
    _objc_release(puStack_2a8);
    _objc_release(puStack_2a0);
    _objc_release(puStack_298);
    puVar11 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
      ___stack_chk_fail();
      pcStack_2b8 = FUN_108d2f074;
      lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_310 = unaff_x28;
      puStack_308 = puVar24;
      puStack_300 = puVar26;
      puStack_2f8 = param_1;
      puStack_2f0 = puVar19;
      puStack_2e8 = puVar2;
      puStack_2e0 = puVar1;
      puStack_2d8 = unaff_x21;
      ppuStack_2d0 = ppuVar18;
      puStack_2c8 = puVar9;
      ppuStack_2c0 = &puStack_170;
      _objc_retain(puVar10);
      puStack_3f0 = puVar12;
      _objc_retain(puVar12);
      puStack_408 = puVar20;
      _objc_retain(puVar20);
      puStack_418 = puVar5;
      _objc_retain(puVar5);
      puStack_428 = puVar16;
      _objc_retain(puVar16);
      _objc_retain(puVar15);
      param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      puStack_3d0 = (undefined8 *)0x0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      puVar19 = *(undefined **)(puVar11 + 8);
      _objc_retain(puVar19);
      puVar8 = &uStack_3e0;
      puVar23 = auStack_3a0;
      lVar13 = 0x10;
      puVar1 = puVar19;
      puStack_3f8 = puVar19;
      func_0x00010bf52a60();
      if (puVar1 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        uStack_3e4 = 0;
        uStack_3fc = 0;
        uStack_40c = 0;
        uStack_41c = 0;
        puVar20 = (undefined *)0x0;
        puVar19 = (undefined *)*puStack_3d0;
        do {
          puVar24 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_3d0 != puVar19) {
              _objc_enumerationMutation(puStack_3f8);
            }
            lVar21 = *(long *)(lStack_3d8 + (long)puVar24 * 8);
            lVar13 = lVar21;
            func_0x00010c2827c0();
            if ((lVar13 == *(long *)(puVar11 + 0x18) && (int)puVar20 == 0) &&
               (puVar2 = puVar10, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
              puVar20 = (undefined *)0x1;
LAB_108d2f2b0:
              func_0x00010befa160(param_1);
            }
            else {
              lVar13 = lVar21;
              func_0x00010c2827c0();
              if ((lVar13 == 6 && (int)puVar16 == 0) &&
                 (puVar2 = puStack_3f0, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
                puVar16 = (undefined *)0x1;
                goto LAB_108d2f2b0;
              }
              lVar13 = lVar21;
              func_0x00010c2827c0();
              if ((lVar13 == *(long *)(puVar11 + 0x28) && (uStack_3e4 & 1) == 0) &&
                 (puVar2 = puStack_408, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
                uStack_3e4 = 1;
                goto LAB_108d2f2b0;
              }
              lVar13 = lVar21;
              func_0x00010c2827c0();
              if ((lVar13 == *(long *)(puVar11 + 0x38) && (uStack_3fc & 1) == 0) &&
                 (puVar2 = puStack_418, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
                uStack_3fc = 1;
                goto LAB_108d2f2b0;
              }
              lVar13 = lVar21;
              func_0x00010c2827c0();
              if ((lVar13 == *(long *)(puVar11 + 0x48) && (uStack_40c & 1) == 0) &&
                 (puVar2 = puStack_428, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
                uStack_40c = 1;
                goto LAB_108d2f2b0;
              }
              func_0x00010c2827c0();
              if (lVar21 == *(long *)(puVar11 + 0x58) && (uStack_41c & 1) == 0) {
                puVar2 = puVar15;
                func_0x00010bf529e0();
                if (puVar2 != (undefined *)0x0) {
                  uStack_41c = 1;
                  goto LAB_108d2f2b0;
                }
                uStack_41c = 0;
              }
            }
            puVar24 = puVar24 + 1;
          } while (puVar1 != puVar24);
          puVar8 = &uStack_3e0;
          puVar23 = auStack_3a0;
          lVar13 = 0x10;
          puVar1 = puStack_3f8;
          func_0x00010bf52a60();
          unaff_x28 = 0;
          puVar5 = puVar15;
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(puStack_3f8);
      _objc_release(puVar15);
      _objc_release(puStack_428);
      _objc_release(puStack_418);
      _objc_release(puStack_408);
      _objc_release(puStack_3f0);
      puVar1 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_320) {
        ___stack_chk_fail();
        pcStack_438 = FUN_108d2f3ac;
        lStack_4a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_490 = unaff_x28;
        puStack_488 = puVar24;
        puStack_480 = puVar11;
        puStack_478 = param_1;
        puStack_470 = puVar15;
        puStack_468 = puVar16;
        puStack_460 = puVar5;
        puStack_458 = puVar20;
        puStack_450 = puVar19;
        puStack_448 = puVar10;
        pppuStack_440 = &ppuStack_2c0;
        _objc_retain(puVar8);
        puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        _objc_retain(puVar8);
        puVar22 = auStack_520;
        lVar14 = 0x10;
        puVar7 = puVar8;
        func_0x00010bf52a60();
        lVar21 = lRam0000000000000000;
        if (puVar7 != (undefined8 *)0x0) {
          do {
            puVar25 = (undefined8 *)0x0;
            do {
              if (lRam0000000000000000 != lVar21) {
                _objc_enumerationMutation(puVar8);
              }
              puVar22 = *(undefined1 **)((long)puVar25 * 8);
              func_0x00010c27dd80();
              if ((puVar22 != puVar23) ||
                 (puVar26 = puVar19, func_0x00010bf529e0(), puVar9 = puVar19,
                 (undefined *)(lVar13 * 6) <= puVar26)) {
                puVar9 = puVar2;
              }
              func_0x00010befa120(puVar9);
              puVar25 = (undefined8 *)((long)puVar25 + 1);
            } while (puVar7 != puVar25);
            puVar22 = auStack_520;
            lVar14 = 0x10;
            puVar7 = puVar8;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined8 *)0x0);
        }
        _objc_release(puVar8);
        func_0x00010c246b20();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar19;
        puVar11 = puVar1;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar26;
        func_0x00010bf529e0();
        param_1 = puVar26;
        if (puVar9 < (undefined *)0x61) {
          _objc_retain(puVar26);
        }
        else {
          puVar11 = (undefined *)0x0;
          puVar22 = (undefined1 *)0x60;
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar26);
        _objc_release(puVar1);
        _objc_release(puVar2);
        _objc_release(puVar19);
        _objc_release(puVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a0) {
          ___stack_chk_fail();
          lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar11);
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retain(puVar11);
          puVar2 = puVar11;
          func_0x00010bf52a60();
          lVar13 = lRam0000000000000000;
          if (puVar2 != (undefined *)0x0) {
            do {
              puVar26 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar13) {
                  _objc_enumerationMutation(puVar11);
                }
                puVar23 = *(undefined1 **)((long)puVar26 * 8);
                func_0x00010bf96f00();
                if ((puVar23 != puVar22) ||
                   (puVar9 = puVar1, func_0x00010bf529e0(), puVar24 = puVar1,
                   (undefined *)(lVar14 * 6) <= puVar9)) {
                  puVar24 = puVar19;
                }
                func_0x00010befa120(puVar24);
                puVar26 = puVar26 + 1;
              } while (puVar2 != puVar26);
              puVar2 = puVar11;
              func_0x00010bf52a60();
            } while (puVar2 != (undefined *)0x0);
          }
          _objc_release(puVar11);
          func_0x00010c246a20(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf09f80();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar2;
          func_0x00010bf529e0();
          param_1 = puVar2;
          if (puVar26 < (undefined *)0x61) {
            _objc_retain(puVar2);
          }
          else {
            func_0x00010c25e980(puVar2);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar2);
          _objc_release(puVar8);
          _objc_release(puVar19);
          _objc_release(puVar1);
          _objc_release(puVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
            ___stack_chk_fail();
            _objc_storeStrong(puVar11 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_storeStrong_11034d330)(puVar11 + 8,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d2ed4c; end: 108d2f073; -[SCChatSearchStickersPrioritizer _sortItems:] */

void FUN_108d2ed4c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *unaff_x21;
  undefined *puVar16;
  undefined *unaff_x22;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  long unaff_x28;
  undefined8 *puVar21;
  undefined1 auStack_3c0 [128];
  long lStack_340;
  long lStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2c8;
  uint uStack_2bc;
  undefined *puStack_2b8;
  uint uStack_2ac;
  undefined *puStack_2a8;
  uint uStack_29c;
  undefined *puStack_298;
  undefined *puStack_290;
  uint uStack_284;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar14 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_138 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_140 = puVar15;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_148 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0d3c80();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar20 = param_3;
  func_0x00010bf52a60();
  if (puVar20 != (undefined *)0x0) {
    ppuVar14 = (undefined **)*plStack_120;
    do {
      unaff_x21 = (undefined *)0x0;
      puVar8 = unaff_x22;
      do {
        if ((undefined **)*plStack_120 != ppuVar14) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x28 = *(long *)(lStack_128 + (long)unaff_x21 * 8);
        lVar10 = unaff_x28;
        func_0x00010bf96f00();
        puVar16 = puStack_138;
        puVar9 = puStack_140;
        unaff_x22 = puStack_148;
        if (lVar10 < 5) {
          if (lVar10 == 1) {
            puVar3 = puStack_148;
            func_0x00010bf529e0();
            puVar13 = *(undefined **)(param_1 + 0x40);
            goto LAB_108d2eef4;
          }
          if (lVar10 == 2) {
            puVar3 = puStack_138;
            func_0x00010bf529e0();
            puVar13 = *(undefined **)(param_1 + 0x20);
            unaff_x22 = puVar16;
            goto LAB_108d2eef4;
          }
LAB_108d2ef10:
          func_0x00010c12d360(puVar2);
          unaff_x22 = puVar8;
        }
        else {
          if (lVar10 == 5) {
            puVar3 = puVar15;
            func_0x00010bf529e0();
            puVar13 = *(undefined **)(param_1 + 0x50);
            unaff_x22 = puVar15;
          }
          else if (lVar10 == 6) {
            puVar3 = puVar1;
            func_0x00010bf529e0();
            puVar13 = *(undefined **)(param_1 + 0x60);
            unaff_x22 = puVar1;
          }
          else {
            if (lVar10 != 8) goto LAB_108d2ef10;
            puVar3 = puStack_140;
            func_0x00010bf529e0();
            puVar13 = *(undefined **)(param_1 + 0x30);
            unaff_x22 = puVar9;
          }
LAB_108d2eef4:
          puVar8 = unaff_x22;
          if (puVar3 < puVar13) {
            func_0x00010befa120(unaff_x22);
            goto LAB_108d2ef10;
          }
          if (puVar13 == (undefined *)0x0) goto LAB_108d2ef10;
        }
        unaff_x21 = unaff_x21 + 1;
        puVar8 = unaff_x22;
      } while (puVar20 != unaff_x21);
      puVar20 = param_3;
      func_0x00010bf52a60();
    } while (puVar20 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar20 = param_1;
  puVar9 = PTR____NSArray0__struct_11034ab48;
  puVar16 = puStack_140;
  puVar3 = puStack_148;
  puVar13 = puVar15;
  puVar12 = puVar1;
  func_0x00010be60880();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar20;
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if ((uVar4 < 0x60) && (puVar5 = puVar2, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
    puVar8 = puVar2;
    func_0x00010bebe0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    param_1 = *(undefined **)(param_1 + 0x10);
    if (uVar4 < 0x61) {
      _objc_retain(param_1);
    }
    else {
      puVar8 = (undefined *)0x0;
      puVar9 = (undefined *)0x60;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar20);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar15);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_108d2f074;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1b0 = unaff_x28;
    puStack_1a8 = puVar20;
    puStack_1a0 = puVar2;
    puStack_198 = param_1;
    puStack_190 = puVar1;
    puStack_188 = puVar15;
    puStack_180 = unaff_x22;
    puStack_178 = unaff_x21;
    ppuStack_170 = ppuVar14;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    puStack_290 = puVar9;
    _objc_retain(puVar9);
    puStack_2a8 = puVar16;
    _objc_retain(puVar16);
    puStack_2b8 = puVar3;
    _objc_retain(puVar3);
    puStack_2c8 = puVar13;
    _objc_retain(puVar13);
    _objc_retain(puVar12);
    param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    puStack_270 = (undefined8 *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puVar15 = *(undefined **)(puVar5 + 8);
    _objc_retain(puVar15);
    puVar7 = &uStack_280;
    puVar19 = auStack_240;
    lVar10 = 0x10;
    puVar1 = puVar15;
    puStack_298 = puVar15;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      uStack_284 = 0;
      uStack_29c = 0;
      uStack_2ac = 0;
      uStack_2bc = 0;
      puVar16 = (undefined *)0x0;
      puVar15 = (undefined *)*puStack_270;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_270 != puVar15) {
            _objc_enumerationMutation(puStack_298);
          }
          lVar17 = *(long *)(lStack_278 + (long)puVar20 * 8);
          lVar10 = lVar17;
          func_0x00010c2827c0();
          if ((lVar10 == *(long *)(puVar5 + 0x18) && (int)puVar16 == 0) &&
             (puVar2 = puVar8, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
            puVar16 = (undefined *)0x1;
LAB_108d2f2b0:
            func_0x00010befa160(param_1);
          }
          else {
            lVar10 = lVar17;
            func_0x00010c2827c0();
            if ((lVar10 == 6 && (int)puVar13 == 0) &&
               (puVar2 = puStack_290, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
              puVar13 = (undefined *)0x1;
              goto LAB_108d2f2b0;
            }
            lVar10 = lVar17;
            func_0x00010c2827c0();
            if ((lVar10 == *(long *)(puVar5 + 0x28) && (uStack_284 & 1) == 0) &&
               (puVar2 = puStack_2a8, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
              uStack_284 = 1;
              goto LAB_108d2f2b0;
            }
            lVar10 = lVar17;
            func_0x00010c2827c0();
            if ((lVar10 == *(long *)(puVar5 + 0x38) && (uStack_29c & 1) == 0) &&
               (puVar2 = puStack_2b8, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
              uStack_29c = 1;
              goto LAB_108d2f2b0;
            }
            lVar10 = lVar17;
            func_0x00010c2827c0();
            if ((lVar10 == *(long *)(puVar5 + 0x48) && (uStack_2ac & 1) == 0) &&
               (puVar2 = puStack_2c8, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
              uStack_2ac = 1;
              goto LAB_108d2f2b0;
            }
            func_0x00010c2827c0();
            if (lVar17 == *(long *)(puVar5 + 0x58) && (uStack_2bc & 1) == 0) {
              puVar2 = puVar12;
              func_0x00010bf529e0();
              if (puVar2 != (undefined *)0x0) {
                uStack_2bc = 1;
                goto LAB_108d2f2b0;
              }
              uStack_2bc = 0;
            }
          }
          puVar20 = puVar20 + 1;
        } while (puVar1 != puVar20);
        puVar7 = &uStack_280;
        puVar19 = auStack_240;
        lVar10 = 0x10;
        puVar1 = puStack_298;
        func_0x00010bf52a60();
        unaff_x28 = 0;
        puVar3 = puVar12;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puStack_298);
    _objc_release(puVar12);
    _objc_release(puStack_2c8);
    _objc_release(puStack_2b8);
    _objc_release(puStack_2a8);
    _objc_release(puStack_290);
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      pcStack_2d8 = FUN_108d2f3ac;
      lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_330 = unaff_x28;
      puStack_328 = puVar20;
      puStack_320 = puVar5;
      puStack_318 = param_1;
      puStack_310 = puVar12;
      puStack_308 = puVar13;
      puStack_300 = puVar3;
      puStack_2f8 = puVar16;
      puStack_2f0 = puVar15;
      puStack_2e8 = puVar8;
      ppuStack_2e0 = &puStack_160;
      _objc_retain(puVar7);
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(puVar7);
      puVar18 = auStack_3c0;
      lVar11 = 0x10;
      puVar6 = puVar7;
      func_0x00010bf52a60();
      lVar17 = lRam0000000000000000;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar21 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar17) {
              _objc_enumerationMutation(puVar7);
            }
            puVar18 = *(undefined1 **)((long)puVar21 * 8);
            func_0x00010c27dd80();
            if ((puVar18 != puVar19) ||
               (puVar20 = puVar15, func_0x00010bf529e0(), puVar8 = puVar15,
               (undefined *)(lVar10 * 6) <= puVar20)) {
              puVar8 = puVar2;
            }
            func_0x00010befa120(puVar8);
            puVar21 = (undefined8 *)((long)puVar21 + 1);
          } while (puVar6 != puVar21);
          puVar18 = auStack_3c0;
          lVar11 = 0x10;
          puVar6 = puVar7;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined8 *)0x0);
      }
      _objc_release(puVar7);
      func_0x00010c246b20();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar15;
      puVar9 = puVar1;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar20;
      func_0x00010bf529e0();
      param_1 = puVar20;
      if (puVar8 < (undefined *)0x61) {
        _objc_retain(puVar20);
      }
      else {
        puVar9 = (undefined *)0x0;
        puVar18 = (undefined1 *)0x60;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar20);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar15);
      _objc_release(puVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_340) {
        ___stack_chk_fail();
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar9);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retain(puVar9);
        puVar2 = puVar9;
        func_0x00010bf52a60();
        lVar10 = lRam0000000000000000;
        if (puVar2 != (undefined *)0x0) {
          do {
            puVar20 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar10) {
                _objc_enumerationMutation(puVar9);
              }
              puVar19 = *(undefined1 **)((long)puVar20 * 8);
              func_0x00010bf96f00();
              if ((puVar19 != puVar18) ||
                 (puVar8 = puVar1, func_0x00010bf529e0(), puVar16 = puVar1,
                 (undefined *)(lVar11 * 6) <= puVar8)) {
                puVar16 = puVar15;
              }
              func_0x00010befa120(puVar16);
              puVar20 = puVar20 + 1;
            } while (puVar2 != puVar20);
            puVar2 = puVar9;
            func_0x00010bf52a60();
          } while (puVar2 != (undefined *)0x0);
        }
        _objc_release(puVar9);
        func_0x00010c246a20(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar2;
        func_0x00010bf529e0();
        param_1 = puVar2;
        if (puVar20 < (undefined *)0x61) {
          _objc_retain(puVar2);
        }
        else {
          func_0x00010c25e980(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar2);
        _objc_release(puVar7);
        _objc_release(puVar15);
        _objc_release(puVar1);
        _objc_release(puVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
          ___stack_chk_fail();
          _objc_storeStrong(puVar9 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_storeStrong_11034d330)(puVar9 + 8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d2f074; end: 108d2f3ab; -[SCChatSearchStickersPrioritizer _mixBitmojiStickers:customojiStickers:bloopsStickers:snapchatStickers:emojiStickers:giphyStickers:] */

void FUN_108d2f074(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auStack_270 [128];
  long lStack_1f0;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_178;
  uint uStack_16c;
  long lStack_168;
  uint uStack_15c;
  long lStack_158;
  uint uStack_14c;
  long lStack_148;
  long lStack_140;
  uint uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_140 = param_4;
  _objc_retain(param_4);
  lStack_158 = param_5;
  _objc_retain(param_5);
  lStack_168 = param_6;
  _objc_retain(param_6);
  lStack_178 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 8);
  _objc_retain(lVar11);
  puVar8 = &uStack_130;
  puVar14 = auStack_f0;
  lVar9 = 0x10;
  lVar2 = lVar11;
  lStack_148 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    param_7 = 0;
    uStack_134 = 0;
    uStack_14c = 0;
    uStack_15c = 0;
    uStack_16c = 0;
    param_5 = 0;
    lVar11 = *plStack_120;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_148);
        }
        lVar12 = *(long *)(lStack_128 + unaff_x27 * 8);
        lVar9 = lVar12;
        func_0x00010c2827c0();
        if ((lVar9 == *(long *)(param_1 + 0x18) && (int)param_5 == 0) &&
           (lVar9 = param_3, func_0x00010bf529e0(), lVar9 != 0)) {
          param_5 = 1;
LAB_108d2f2b0:
          func_0x00010befa160(puVar1);
        }
        else {
          lVar9 = lVar12;
          func_0x00010c2827c0();
          if ((lVar9 == 6 && (int)param_7 == 0) &&
             (lVar9 = lStack_140, func_0x00010bf529e0(), lVar9 != 0)) {
            param_7 = 1;
            goto LAB_108d2f2b0;
          }
          lVar9 = lVar12;
          func_0x00010c2827c0();
          if ((lVar9 == *(long *)(param_1 + 0x28) && (uStack_134 & 1) == 0) &&
             (lVar9 = lStack_158, func_0x00010bf529e0(), lVar9 != 0)) {
            uStack_134 = 1;
            goto LAB_108d2f2b0;
          }
          lVar9 = lVar12;
          func_0x00010c2827c0();
          if ((lVar9 == *(long *)(param_1 + 0x38) && (uStack_14c & 1) == 0) &&
             (lVar9 = lStack_168, func_0x00010bf529e0(), lVar9 != 0)) {
            uStack_14c = 1;
            goto LAB_108d2f2b0;
          }
          lVar9 = lVar12;
          func_0x00010c2827c0();
          if ((lVar9 == *(long *)(param_1 + 0x48) && (uStack_15c & 1) == 0) &&
             (lVar9 = lStack_178, func_0x00010bf529e0(), lVar9 != 0)) {
            uStack_15c = 1;
            goto LAB_108d2f2b0;
          }
          func_0x00010c2827c0();
          if (lVar12 == *(long *)(param_1 + 0x58) && (uStack_16c & 1) == 0) {
            lVar9 = param_8;
            func_0x00010bf529e0();
            if (lVar9 != 0) {
              uStack_16c = 1;
              goto LAB_108d2f2b0;
            }
            uStack_16c = 0;
          }
        }
        unaff_x27 = unaff_x27 + 1;
      } while (lVar2 != unaff_x27);
      puVar8 = &uStack_130;
      puVar14 = auStack_f0;
      lVar9 = 0x10;
      lVar2 = lStack_148;
      func_0x00010bf52a60();
      unaff_x28 = 0;
      param_6 = param_8;
    } while (lVar2 != 0);
  }
  _objc_release(lStack_148);
  _objc_release(param_8);
  _objc_release(lStack_178);
  _objc_release(lStack_168);
  _objc_release(lStack_158);
  _objc_release(lStack_140);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_188 = FUN_108d2f3ac;
    lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1e0 = unaff_x28;
    lStack_1d8 = unaff_x27;
    lStack_1d0 = param_1;
    puStack_1c8 = puVar1;
    lStack_1c0 = param_8;
    lStack_1b8 = param_7;
    lStack_1b0 = param_6;
    lStack_1a8 = param_5;
    lStack_1a0 = lVar11;
    lStack_198 = param_3;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar8);
    puVar13 = auStack_270;
    lVar12 = 0x10;
    puVar5 = puVar8;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        puVar15 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(puVar8);
          }
          puVar13 = *(undefined1 **)((long)puVar15 * 8);
          func_0x00010c27dd80();
          if ((puVar13 != puVar14) ||
             (puVar1 = puVar3, func_0x00010bf529e0(), puVar6 = puVar3,
             (undefined *)(lVar9 * 6) <= puVar1)) {
            puVar6 = puVar4;
          }
          func_0x00010befa120(puVar6);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar5 != puVar15);
        puVar13 = auStack_270;
        lVar12 = 0x10;
        puVar5 = puVar8;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined8 *)0x0);
    }
    _objc_release(puVar8);
    func_0x00010c246b20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    lVar9 = lVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    puVar1 = puVar6;
    if (puVar7 < (undefined *)0x61) {
      _objc_retain(puVar6);
    }
    else {
      lVar9 = 0;
      puVar13 = (undefined1 *)0x60;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f0) {
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar9);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retain(lVar9);
      lVar11 = lVar9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (lVar11 != 0) {
        do {
          lVar16 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar9);
            }
            puVar14 = *(undefined1 **)(lVar16 * 8);
            func_0x00010bf96f00();
            if ((puVar14 != puVar13) ||
               (puVar1 = puVar3, func_0x00010bf529e0(), puVar6 = puVar3,
               (undefined *)(lVar12 * 6) <= puVar1)) {
              puVar6 = puVar4;
            }
            func_0x00010befa120(puVar6);
            lVar16 = lVar16 + 1;
          } while (lVar11 != lVar16);
          lVar11 = lVar9;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar9);
      func_0x00010c246a20(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      puVar1 = puVar6;
      if (puVar7 < (undefined *)0x61) {
        _objc_retain(puVar6);
      }
      else {
        func_0x00010c25e980(puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        _objc_storeStrong(lVar9 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(lVar9 + 8,0);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d2f3ac; end: 108d2f5a7; -[SCChatSearchStickersPrioritizer sortStickers:boostingStickerType:stickersPerRow:] */

void FUN_108d2f3ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar9 = 0x10;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lVar9 * 8);
        func_0x00010c27dd80();
        if ((lVar11 != param_4) ||
           (puVar4 = puVar1, func_0x00010bf529e0(), puVar5 = puVar1,
           (undefined *)(param_5 * 6) <= puVar4)) {
          puVar5 = puVar2;
        }
        func_0x00010befa120(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar8 = auStack_f0;
      lVar9 = 0x10;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  func_0x00010c246b20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  lVar7 = param_1;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  if (puVar5 < (undefined *)0x61) {
    _objc_retain(puVar4);
  }
  else {
    lVar7 = 0;
    puVar8 = (undefined1 *)0x60;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(lVar7);
    lVar11 = lVar7;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar11 != 0) {
      do {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar7);
          }
          puVar12 = *(undefined1 **)(lVar13 * 8);
          func_0x00010bf96f00();
          if ((puVar12 != puVar8) ||
             (puVar4 = puVar1, func_0x00010bf529e0(), puVar5 = puVar1,
             (undefined *)(lVar9 * 6) <= puVar4)) {
            puVar5 = puVar2;
          }
          func_0x00010befa120(puVar5);
          lVar13 = lVar13 + 1;
        } while (lVar11 != lVar13);
        lVar11 = lVar7;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    _objc_release(lVar7);
    func_0x00010c246a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    puVar6 = puVar4;
    if (puVar5 < (undefined *)0x61) {
      _objc_retain(puVar4);
    }
    else {
      func_0x00010c25e980(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      _objc_storeStrong(lVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d2f5a8; end: 108d2f7a3; -[SCChatSearchStickersPrioritizer sortItems:boostingEntityType:stickersPerRow:] */

void FUN_108d2f5a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lVar10 * 8);
        func_0x00010bf96f00();
        if ((lVar9 != param_4) ||
           (puVar5 = puVar2, func_0x00010bf529e0(), puVar6 = puVar2,
           (undefined *)(param_5 * 6) <= puVar5)) {
          puVar6 = puVar3;
        }
        func_0x00010befa120(puVar6);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  func_0x00010c246a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar7 = puVar5;
  if (puVar6 < (undefined *)0x61) {
    _objc_retain(puVar5);
  }
  else {
    func_0x00010c25e980(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 108d2f7a4; end: 108d2f7d3; -[SCChatSearchStickersPrioritizer .cxx_destruct] */

void FUN_108d2f7a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d2f7d4; end: 108d2f8df; -[SCStickerTagFuzzySearch initWithBitmojiAvatarProvider:bitmojiStickerSearch:] */

undefined1 *
FUN_108d2f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fe688;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d2f8e0; end: 108d2f997; +[SCStickerTagFuzzySearch isStopWord:] */

undefined8 FUN_108d2f8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = lRam000000011372e560;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x11372e560,&PTR___NSConcreteGlobalBlock_110ac2b80);
  }
  func_0x00010c115860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uRam000000011372e558;
  uVar2 = param_1;
  func_0x00010c0b5ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108d2f998; end: 108d2fd33;  */

void FUN_108d2f998(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110e6fab8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e558;
  puRam000000011372e558 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d2fd34; end: 108d2fd3b; +[SCStickerTagFuzzySearch isSearchEnabled] */

undefined8 FUN_108d2fd34(void)

{
  return 1;
}



/* Entry: 108d2fd3c; end: 108d2fda7; +[SCStickerTagFuzzySearch _isOffensiveWord:] */

undefined8 FUN_108d2fd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam000000011372e570;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x11372e570,&PTR___NSConcreteGlobalBlock_110ac2ba0);
  }
  uVar2 = uRam000000011372e568;
  func_0x00010bf4b900(uRam000000011372e568);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108d2fda8; end: 108d2fe83;  */

void FUN_108d2fda8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110ef5e58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e568;
  puRam000000011372e568 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d2fe84; end: 108d2ff0f;  */

undefined8 FUN_108d2fe84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c0dfd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108d2ff10; end: 108d2ff5b; +[SCStickerTagFuzzySearch removeDup:] */

void FUN_108d2ff10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d2ff5c; end: 108d300a7; -[SCStickerTagFuzzySearch searchStickersWithSearch:fuzzyTextAndParameter:stickerTarget:shouldIncludeFriendBitmojiForQuickSend:similarity:numShortList:numFuzzyTag:completionHandler:] */

void FUN_108d2ff5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  func_0x00010bfd46e0();
  if (iVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  lVar4 = param_4;
  puVar5 = puVar7;
  func_0x00010c154300(param_2);
  _objc_release(puVar7);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  _objc_retain(puVar5);
  _objc_retain(param_10);
  puVar7 = PTR_PTR_1126cbde8;
  func_0x00010c115860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cbde8;
  func_0x00010be42600();
  if ((int)puVar3 == 0) {
    _objc_initWeak(auStack_108,param_4);
    uVar2 = *(undefined8 *)(param_4 + 8);
    _objc_copyWeak(auStack_138,auStack_108);
    _objc_retain(lVar4);
    _objc_retain(puVar7);
    uStack_130 = param_6;
    _objc_retain(puVar5);
    uStack_128 = param_1;
    uStack_120 = param_8;
    uStack_118 = param_9;
    uStack_110 = param_7;
    _objc_retain(param_10);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_10);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_108);
  }
  else {
    (**(code **)(param_10 + 0x10))
              (param_10,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(param_10);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(lVar4);
  return;
}



/* Entry: 108d300a8; end: 108d3027f; -[SCStickerTagFuzzySearch searchStickers:fuzzyTextAndParameter:stickerTarget:avatarIds:shouldIncludeFriendBitmojiForQuickSend:similarity:numShortList:numFuzzyTag:completionHandler:] */

void FUN_108d300a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126cbde8;
  func_0x00010c115860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbde8;
  func_0x00010be42600();
  if ((int)puVar2 == 0) {
    _objc_initWeak(auStack_78,param_2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    uStack_a0 = param_6;
    _objc_retain(param_7);
    uStack_88 = param_10;
    uStack_98 = param_1;
    uStack_90 = param_9;
    uStack_80 = param_8;
    _objc_retain(param_11);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_11);
    _objc_release(param_7);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
  }
  else {
    (**(code **)(param_11 + 0x10))
              (param_11,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108d30280; end: 108d302d3;  */

void FUN_108d30280(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be72740(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d302d4; end: 108d30327; -[SCStickerTagFuzzySearch clearCachedStickerSearchResults:] */

void FUN_108d302d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  func_0x00010bf3ad40(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bfd46e0();
    if (iVar1 != 0) {
      func_0x00010bf3ad40(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108d30328; end: 108d308b3; -[SCStickerTagFuzzySearch _performSearch:fuzzyTextAndParameter:stickerTarget:avatarIds:shouldIncludeFriendBitmojiForQuickSend:similarity:numShortList:numFuzzyTag:completionHandler:] */

void FUN_108d30328(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
                  undefined *param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  
  dVar13 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar3 = param_5;
  func_0x00010c08fa60();
  if (uVar3 < 2) {
    puVar12 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(puVar12);
    if (uVar4 != 0) {
      puVar12 = puVar1;
      func_0x00010bf51e00(puVar1);
      (**(code **)(param_11 + 0x10))
                (param_11,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 puVar12);
      goto LAB_108d30858;
    }
  }
  puVar11 = puVar1;
  func_0x00010bf529e0();
  puVar12 = param_9;
  if (puVar11 <= param_9) {
    puVar12 = puVar11;
  }
  if (puVar12 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      _objc_autoreleasePoolPush();
      puVar5 = puVar1;
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(param_5);
      func_0x00010c150c60(param_5);
      dVar14 = dVar13;
      func_0x00010c150c60(puVar5);
      dVar15 = dVar14;
      _objc_release(puVar5);
      _objc_release(param_5);
      if (dVar14 <= dVar13) {
        dVar14 = dVar13;
      }
      _objc_release(puVar5);
      dVar13 = dVar15;
      if (param_1 <= dVar14) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
        puVar6 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
        func_0x00010befa120(puVar2);
        _objc_release(puVar5);
        dVar13 = dVar14;
      }
      _objc_autoreleasePoolPop(puVar11);
      puVar12 = puVar12 + 1;
      puVar11 = puVar1;
      func_0x00010bf529e0();
      puVar5 = param_9;
      if (puVar11 <= param_9) {
        puVar5 = puVar11;
      }
    } while (puVar12 < puVar5);
  }
  puVar5 = puVar2;
  func_0x00010c246ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  _dispatch_group_create();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _dispatch_group_enter(puVar12);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108d308b4;
  puStack_a8 = &UNK_110ac2bf0;
  _objc_retain(puVar6);
  puStack_a0 = puVar6;
  _objc_retain(puVar7);
  puStack_98 = puVar7;
  _objc_retain(puVar12);
  puStack_90 = puVar12;
  func_0x00010c154320(param_2);
  puVar8 = puVar5;
  func_0x00010bf529e0();
  puVar11 = param_10;
  if (puVar8 <= param_10) {
    puVar11 = puVar8;
  }
  if (puVar11 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      puVar8 = puVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf529e0();
      _objc_release(puVar8);
      if ((undefined *)0x1 < puVar9) {
        _dispatch_group_enter(puVar12);
        puVar8 = puVar5;
        func_0x00010c0dfd40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        uStack_e8 = 0x108d30910;
        puStack_e0 = &UNK_110ac2bf0;
        _objc_retain(puVar6);
        puStack_d8 = puVar6;
        _objc_retain(puVar7);
        puStack_d0 = puVar7;
        _objc_retain(puVar12);
        puStack_c8 = puVar12;
        func_0x00010c154320(param_2);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puStack_c8);
        _objc_release(puStack_d0);
        _objc_release(puStack_d8);
      }
      puVar11 = puVar11 + 1;
      puVar9 = puVar5;
      func_0x00010bf529e0();
      puVar8 = param_10;
      if (puVar9 <= param_10) {
        puVar8 = puVar9;
      }
    } while (puVar11 < puVar8);
  }
  uVar10 = *(undefined8 *)(param_2 + 8);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_108d3096c;
  puStack_120 = &UNK_1108465d0;
  puStack_118 = puVar6;
  puStack_110 = puVar7;
  puStack_108 = puVar5;
  _objc_retain(param_11);
  lStack_100 = param_11;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  func_0x000107c27d98(puVar12,uVar10,&puStack_138);
  _objc_release(uVar10);
  _objc_release(lStack_100);
  _objc_release(puStack_108);
  _objc_release(puStack_110);
  _objc_release(puStack_118);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
LAB_108d30858:
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108d308b4; end: 108d3096b;  */

void FUN_108d308b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010befa160(uVar1);
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108d3096c; end: 108d30b23;  */

void FUN_108d3096c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 in_x5;
  undefined8 in_x6;
  int iVar13;
  undefined8 in_x7;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 unaff_x28;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  byte bStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cbde8;
  func_0x00010c12c060(PTR_PTR_1126cbde8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126cbde8;
  func_0x00010c12c060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar15 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar15);
  uVar11 = 0x10;
  lVar5 = lVar15;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        uVar16 = *(ulong *)(lStack_128 + lVar18 * 8);
        uVar4 = uVar16;
        func_0x00010bf529e0();
        if (1 < uVar4) {
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar16);
        }
        lVar18 = lVar18 + 1;
      } while (lVar5 != lVar18);
      uVar11 = 0x10;
      lVar5 = lVar15;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar15);
  puVar6 = puVar19;
  puVar7 = puVar3;
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar2);
  _objc_release(puVar3);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = lStack_130;
  pcStack_138 = FUN_108d30b24;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(lVar5);
  iVar13 = (int)*(undefined8 *)(puVar2 + 0x10);
  func_0x00010bfd46e0();
  if (iVar13 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    unaff_x28 = *(undefined8 *)(puVar2 + 0x10);
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1a0 = unaff_x28;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x28);
  }
  lStack_1a8 = lVar5;
  bStack_1b0 = (byte)in_x7;
  puVar9 = puVar6;
  puVar10 = puVar7;
  puVar12 = puVar19;
  uVar14 = in_x6;
  func_0x00010c154320(puVar2);
  iVar13 = (int)uVar14;
  _objc_release(puVar19);
  _objc_release(lVar5);
  _objc_release(puVar7);
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = lStack_1a8;
  bVar1 = bStack_1b0;
  lStack_1d8 = lVar5;
  pcStack_1b8 = FUN_108d30c64;
  uStack_210 = unaff_x28;
  puStack_208 = puVar19;
  puStack_200 = puVar2;
  uStack_1f8 = in_x7;
  uStack_1f0 = uVar11;
  uStack_1e8 = in_x5;
  uStack_1e0 = in_x6;
  puStack_1d0 = puVar7;
  puStack_1c8 = puVar6;
  ppuStack_1c0 = &puStack_140;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  _objc_retain(lVar15);
  if (bVar1 == 0 || iVar13 != 0) {
    lVar5 = *(long *)(puVar3 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1 == 0) ||
       ((lVar5 != 0 && (puVar2 = puVar12, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)))) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar7 = puVar6;
      _dispatch_group_create();
      if ((bVar1 & 1) == 0) {
        _dispatch_group_enter(puVar7);
        puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_240 = 0xc2000000;
        pcStack_238 = FUN_108d31004;
        puStack_230 = &UNK_110860d58;
        _objc_retain(puVar19);
        puStack_228 = puVar19;
        _objc_retain(puVar7);
        puStack_220 = puVar7;
        func_0x00010c154380(puVar9);
        _objc_release(puStack_220);
        _objc_release(puStack_228);
      }
      if ((lVar5 != 0) && (puVar8 = puVar12, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
        if ((bVar1 & 1) == 0) {
          _dispatch_group_enter(puVar7);
          puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_270 = 0xc2000000;
          uStack_268 = 0x108d31030;
          puStack_260 = &UNK_110860d58;
          _objc_retain(puVar2);
          puStack_258 = puVar2;
          _objc_retain(puVar7);
          puStack_250 = puVar7;
          func_0x00010c154360(lVar5);
          _objc_release(puStack_250);
          _objc_release(puStack_258);
        }
        if (iVar13 != 0) {
          _dispatch_group_enter(puVar7);
          puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2a0 = 0xc2000000;
          uStack_298 = 0x108d3105c;
          puStack_290 = &UNK_110860d58;
          _objc_retain(puVar6);
          puStack_288 = puVar6;
          _objc_retain(puVar7);
          puStack_280 = puVar7;
          func_0x00010c1537e0(lVar5);
          _objc_release(puStack_280);
          _objc_release(puStack_288);
        }
      }
      uVar11 = *(undefined8 *)(puVar3 + 8);
      func_0x00010c11de00(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e8 = 0xc2000000;
      pcStack_2e0 = FUN_108d31088;
      puStack_2d8 = &UNK_110852488;
      puStack_2d0 = puVar2;
      puStack_2c8 = puVar19;
      _objc_retain(puVar12);
      puStack_2c0 = puVar12;
      puStack_2b8 = puVar6;
      _objc_retain(lVar15);
      lStack_2b0 = lVar15;
      _objc_retain(puVar6);
      _objc_retain(puVar19);
      _objc_retain(puVar2);
      func_0x000107c27d98(puVar7,uVar11,&puStack_2f0);
      _objc_release(uVar11);
      _objc_release(lStack_2b0);
      _objc_release(puStack_2b8);
      _objc_release(puStack_2c0);
      _objc_release(puStack_2c8);
      _objc_release(puStack_2d0);
      _objc_release(puVar6);
      _objc_release(puVar19);
      _objc_release(puVar2);
      _objc_release(puVar7);
    }
    else {
      (**(code **)(lVar15 + 0x10))
                (lVar15,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 PTR____NSArray0__struct_11034ab48);
    }
    _objc_release(lVar5);
  }
  else {
    (**(code **)(lVar15 + 0x10))
              (lVar15,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(lVar15);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 108d30b24; end: 108d30c63; -[SCStickerTagFuzzySearch searchStickersWithSearch:singleText:stickerTarget:shouldIncludeFriendBitmojiForQuickSend:includeCustomoji:customojiOnly:completionHandler:] */

void FUN_108d30b24(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  undefined *puVar14;
  undefined8 unaff_x28;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  byte bStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  iVar13 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bfd46e0();
  if (iVar13 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    unaff_x28 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x28;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x28);
  }
  lStack_78 = param_9;
  bStack_80 = (byte)param_8;
  lVar10 = param_3;
  uVar11 = param_4;
  puVar12 = puVar14;
  uVar9 = param_7;
  func_0x00010c154320(param_1);
  iVar13 = (int)uVar9;
  _objc_release(puVar14);
  _objc_release(param_9);
  _objc_release(param_4);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lStack_78;
  bVar1 = bStack_80;
  lStack_a8 = param_9;
  pcStack_88 = FUN_108d30c64;
  uStack_e0 = unaff_x28;
  puStack_d8 = puVar14;
  lStack_d0 = param_1;
  uStack_c8 = param_8;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  uStack_b0 = param_7;
  uStack_a0 = param_4;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(lVar10);
  _objc_retain(uVar11);
  _objc_retain(puVar12);
  _objc_retain(lVar2);
  if (bVar1 == 0 || iVar13 != 0) {
    lVar4 = *(long *)(lVar3 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1 == 0) ||
       ((lVar4 != 0 && (puVar14 = puVar12, func_0x00010bf529e0(), puVar14 != (undefined *)0x0)))) {
      puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar7 = puVar6;
      _dispatch_group_create();
      if ((bVar1 & 1) == 0) {
        _dispatch_group_enter(puVar7);
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_110 = 0xc2000000;
        pcStack_108 = FUN_108d31004;
        puStack_100 = &UNK_110860d58;
        _objc_retain(puVar5);
        puStack_f8 = puVar5;
        _objc_retain(puVar7);
        puStack_f0 = puVar7;
        func_0x00010c154380(lVar10);
        _objc_release(puStack_f0);
        _objc_release(puStack_f8);
      }
      if ((lVar4 != 0) && (puVar8 = puVar12, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
        if ((bVar1 & 1) == 0) {
          _dispatch_group_enter(puVar7);
          puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_140 = 0xc2000000;
          uStack_138 = 0x108d31030;
          puStack_130 = &UNK_110860d58;
          _objc_retain(puVar14);
          puStack_128 = puVar14;
          _objc_retain(puVar7);
          puStack_120 = puVar7;
          func_0x00010c154360(lVar4);
          _objc_release(puStack_120);
          _objc_release(puStack_128);
        }
        if (iVar13 != 0) {
          _dispatch_group_enter(puVar7);
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          uStack_168 = 0x108d3105c;
          puStack_160 = &UNK_110860d58;
          _objc_retain(puVar6);
          puStack_158 = puVar6;
          _objc_retain(puVar7);
          puStack_150 = puVar7;
          func_0x00010c1537e0(lVar4);
          _objc_release(puStack_150);
          _objc_release(puStack_158);
        }
      }
      uVar9 = *(undefined8 *)(lVar3 + 8);
      func_0x00010c11de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_108d31088;
      puStack_1a8 = &UNK_110852488;
      puStack_1a0 = puVar14;
      puStack_198 = puVar5;
      _objc_retain(puVar12);
      puStack_190 = puVar12;
      puStack_188 = puVar6;
      _objc_retain(lVar2);
      lStack_180 = lVar2;
      _objc_retain(puVar6);
      _objc_retain(puVar5);
      _objc_retain(puVar14);
      func_0x000107c27d98(puVar7,uVar9,&puStack_1c0);
      _objc_release(uVar9);
      _objc_release(lStack_180);
      _objc_release(puStack_188);
      _objc_release(puStack_190);
      _objc_release(puStack_198);
      _objc_release(puStack_1a0);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar14);
      _objc_release(puVar7);
    }
    else {
      (**(code **)(lVar2 + 0x10))
                (lVar2,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 PTR____NSArray0__struct_11034ab48);
    }
    _objc_release(lVar4);
  }
  else {
    (**(code **)(lVar2 + 0x10))
              (lVar2,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(lVar2);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  return;
}



/* Entry: 108d30c64; end: 108d31003; -[SCStickerTagFuzzySearch searchStickers:singleText:avatarIds:stickerTarget:shouldIncludeFriendBitmojiForQuickSend:includeCustomoji:customojiOnly:completionHandler:] */

void FUN_108d30c64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,byte param_9,
                  undefined4 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  if (param_9 == 0 || param_8 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((param_9 == 0) || ((lVar1 != 0 && (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)))) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      puVar6 = puVar5;
      _dispatch_group_create();
      if ((param_9 & 1) == 0) {
        _dispatch_group_enter(puVar6);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_108d31004;
        puStack_80 = &UNK_110860d58;
        _objc_retain(puVar4);
        puStack_78 = puVar4;
        _objc_retain(puVar6);
        puStack_70 = puVar6;
        func_0x00010c154380(param_3);
        _objc_release(puStack_70);
        _objc_release(puStack_78);
      }
      if ((lVar1 != 0) && (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)) {
        if ((param_9 & 1) == 0) {
          _dispatch_group_enter(puVar6);
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0xc2000000;
          uStack_b8 = 0x108d31030;
          puStack_b0 = &UNK_110860d58;
          _objc_retain(puVar3);
          puStack_a8 = puVar3;
          _objc_retain(puVar6);
          puStack_a0 = puVar6;
          func_0x00010c154360(lVar1);
          _objc_release(puStack_a0);
          _objc_release(puStack_a8);
        }
        if (param_8 != 0) {
          _dispatch_group_enter(puVar6);
          puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f0 = 0xc2000000;
          uStack_e8 = 0x108d3105c;
          puStack_e0 = &UNK_110860d58;
          _objc_retain(puVar5);
          puStack_d8 = puVar5;
          _objc_retain(puVar6);
          puStack_d0 = puVar6;
          func_0x00010c1537e0(lVar1);
          _objc_release(puStack_d0);
          _objc_release(puStack_d8);
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_108d31088;
      puStack_128 = &UNK_110852488;
      puStack_120 = puVar3;
      puStack_118 = puVar4;
      _objc_retain(param_5);
      lStack_110 = param_5;
      puStack_108 = puVar5;
      _objc_retain(param_11);
      lStack_100 = param_11;
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      func_0x000107c27d98(puVar6,uVar7,&puStack_140);
      _objc_release(uVar7);
      _objc_release(lStack_100);
      _objc_release(puStack_108);
      _objc_release(lStack_110);
      _objc_release(puStack_118);
      _objc_release(puStack_120);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
    else {
      (**(code **)(param_11 + 0x10))
                (param_11,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                 PTR____NSArray0__struct_11034ab48);
    }
    _objc_release(lVar1);
  }
  else {
    (**(code **)(param_11 + 0x10))
              (param_11,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d31004; end: 108d31087;  */

void FUN_108d31004(long param_1,undefined8 param_2)

{
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}


