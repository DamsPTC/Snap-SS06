/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fec2e8; end: 105fec3a7; -[SCChatEraseMessageController _checkAndUpdateFirstTimeForDialogType:] */

uint FUN_105fec2e8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar4);
  }
  return (uint)uVar3 ^ 1;
}



/* Entry: 105fec3a8; end: 105fec4e7; -[SCChatEraseMessageController _eraseMessage:] */

void FUN_105fec3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105fec4e8;
  puStack_60 = &UNK_110906090;
  uStack_58 = param_3;
  lStack_50 = lVar1;
  uStack_48 = uVar5;
  _objc_retain(uVar5);
  _objc_retain(lVar1);
  _objc_retain(param_3);
  func_0x00010bf986c0(uVar2,param_2,uVar3,uVar4,0,&puStack_78);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 105fec4e8; end: 105fec64f;  */

void FUN_105fec4e8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  if (8 < param_2 - 4U) {
    if (2 < param_2 - 1U) {
      if (param_2 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf98690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_eraseMessageControllerDidEraseMe_1125c3b48);
      return;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1e358;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e358,0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 != (undefined **)0x0) goto LAB_105fec524;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e359f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e359f8,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105fec524:
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105fec5ec;
  puStack_38 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  ppuStack_30 = ppuVar1;
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  _objc_retain(ppuVar1);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(ppuStack_30);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 105fec650; end: 105fec65b; -[SCChatEraseMessageController dialogDidDismiss:] */

void FUN_105fec650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105fec658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 105fec65c; end: 105fec697; -[SCChatEraseMessageController _didDismissAlertView] */

void FUN_105fec65c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf98660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fec698; end: 105fec6ff; -[SCChatEraseMessageController .cxx_destruct] */

void FUN_105fec698(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fec700; end: 105fec967; -[SCChatEraseMessageScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fec700(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar12 = (long)_DAT_11273c8e0;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c6e68;
  _objc_alloc();
  lVar10 = (long)_DAT_11273c8e4;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11273c8e8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar7 = lVar12;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273c8ec;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005740();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11273c8f0);
  *(undefined **)(param_1 + _DAT_11273c8f0) = puVar3;
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bfa5f80(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 105fec968; end: 105fec9bb;  */

void FUN_105fec968(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be128a0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105fec9bc; end: 105feca13; -[SCChatEraseMessageScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fec9bc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf84140(*(undefined8 *)(param_1 + _DAT_11273c8f0));
  puStack_28 = PTR_PTR_1126eee20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105feca14; end: 105fecbb7; -[SCChatEraseMessageScopeEntryPoint _fetchMessageAndStartEraseFlowForConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105feca14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11273c8e0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_11273c8e4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe5d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfa89a0(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105fecbb8; end: 105fecc8f;  */

void FUN_105fecbb8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105fecc90;
    puStack_50 = &UNK_110848218;
    _objc_copyWeak(auStack_38,param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105fecc90; end: 105feccc3;  */

void FUN_105fecc90(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd34e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105feccc4; end: 105fecd57; -[SCChatEraseMessageScopeEntryPoint _beginEraseFlowForConversation:message:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105feccc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273c8f0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f4aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c074920(param_3);
  _objc_release(param_3);
  func_0x00010bf18080(uVar3,param_2,uVar1,uVar2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fecd58; end: 105fecdcb; -[SCChatEraseMessageScopeEntryPoint eraseMessageControllerWillDisplayAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fecd58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c8e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf98780(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fecdcc; end: 105fece3f; -[SCChatEraseMessageScopeEntryPoint eraseMessageControllerDidDismissAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fecdcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c8e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf986e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fece40; end: 105feceb3; -[SCChatEraseMessageScopeEntryPoint eraseMessageControllerDidEraseMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fece40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c8e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf98700(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105feceb4; end: 105fecf13; -[SCChatEraseMessageScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105feceb4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273c8e8);
  _objc_destroyWeak(param_1 + _DAT_11273c8ec);
  _objc_destroyWeak(param_1 + _DAT_11273c8e4);
  _objc_destroyWeak(param_1 + _DAT_11273c8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c8f0,0);
  return;
}



/* Entry: 105fecf14; end: 105fed063;  */

void FUN_105fecf14(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e35a18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e35a18,
                      &PTR____CFConstantStringClassReference_110e35a38,0);
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



/* Entry: 105fed064; end: 105fed06f; +[SCCDwebUpsellExplainerTrayView componentPath] */

undefined ** FUN_105fed064(void)

{
  return &PTR____CFConstantStringClassReference_110e35bf8;
}



/* Entry: 105fed070; end: 105fed093; -[SCCDwebUpsellExplainerTrayView initWithViewModel:componentContext:runtime:] */

void FUN_105fed070(void)

{
  FUN_105fed1b4(PTR_PTR_1126eee28);
  return;
}



/* Entry: 105fed094; end: 105fed0cb; -[SCCDwebUpsellExplainerTrayView setViewModel:] */

void FUN_105fed094(void)

{
  func_0x000105fed1d0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed1e0();
  func_0x000105fed1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed0cc; end: 105fed10b; -[SCCDwebUpsellExplainerTrayView viewModel] */

void FUN_105fed0cc(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fed10c; end: 105fed117; +[SCCDwebUpsellStatusView componentPath] */

undefined ** FUN_105fed10c(void)

{
  return &PTR____CFConstantStringClassReference_110e35c18;
}



/* Entry: 105fed118; end: 105fed13b; -[SCCDwebUpsellStatusView initWithViewModel:componentContext:runtime:] */

void FUN_105fed118(void)

{
  FUN_105fed1b4(PTR_PTR_1126eee30);
  return;
}



/* Entry: 105fed13c; end: 105fed173; -[SCCDwebUpsellStatusView setViewModel:] */

void FUN_105fed13c(void)

{
  func_0x000105fed1d0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed1e0();
  func_0x000105fed1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed174; end: 105fed1b3; -[SCCDwebUpsellStatusView viewModel] */

void FUN_105fed174(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fed1b4; end: 105fed1eb;  */

void FUN_105fed1b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fed1ec; end: 105fed2e7; -[SCCChatDwebTrayOpenSource__Enum init] */

undefined * FUN_105fed1ec(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e35c38;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e35c58;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e35c78;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e35c98;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e35cb8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e35cd8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e35cf8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e35d18;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e35d38;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110daca98;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e35d58;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_80,0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000105fed388(PTR_PTR_1126eee38);
  return puVar1;
}



/* Entry: 105fed2e8; end: 105fed307; -[SCCDwebUpsellExplainerTrayContext init] */

void FUN_105fed2e8(void)

{
  func_0x000105fed388(PTR_PTR_1126eee38);
  return;
}



/* Entry: 105fed308; end: 105fed31b; +[SCCDwebUpsellExplainerTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105fed308(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109060f0;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110906240;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fed31c; end: 105fed33b; -[SCCDwebUpsellStatusContext init] */

void FUN_105fed31c(void)

{
  func_0x000105fed388(PTR_PTR_1126eee40);
  return;
}



/* Entry: 105fed33c; end: 105fed34f; +[SCCDwebUpsellStatusContext valdiMarshallableObjectDescriptor] */

void FUN_105fed33c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906268;
  param_1[1] = &PTR_s_SCBridgeObservable_1109062f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fed350; end: 105fed36f; -[SCCDwebUpsellStatusViewModel init] */

void FUN_105fed350(void)

{
  func_0x000105fed388(PTR_PTR_1126eee48);
  return;
}



/* Entry: 105fed370; end: 105fed3b3; +[SCCDwebUpsellStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fed370(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110906310;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fed3b4; end: 105fed3cf; +[SCCIMusicSharingSettingsPresenter valdiMarshallableObjectDescriptor] */

void FUN_105fed3b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110906340;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105fed3d0; end: 105fed3db; +[SCCMusicSharingAllowlistPickerComponent componentPath] */

undefined ** FUN_105fed3d0(void)

{
  return &PTR____CFConstantStringClassReference_110e35d78;
}



/* Entry: 105fed3dc; end: 105fed3fb; -[SCCMusicSharingAllowlistPickerComponent initWithViewModel:componentContext:runtime:] */

void FUN_105fed3dc(void)

{
  FUN_105fed630(PTR_PTR_1126eee50);
  return;
}



/* Entry: 105fed3fc; end: 105fed42f; -[SCCMusicSharingAllowlistPickerComponent setViewModel:] */

void FUN_105fed3fc(void)

{
  func_0x000105fed644();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed654();
  func_0x000105fed66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed430; end: 105fed467; -[SCCMusicSharingAllowlistPickerComponent viewModel] */

void FUN_105fed430(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fed468; end: 105fed473; +[SCCMusicSharingPermissionsSheetComponent componentPath] */

undefined ** FUN_105fed468(void)

{
  return &PTR____CFConstantStringClassReference_110e35d98;
}



/* Entry: 105fed474; end: 105fed493; -[SCCMusicSharingPermissionsSheetComponent initWithViewModel:componentContext:runtime:] */

void FUN_105fed474(void)

{
  FUN_105fed630(PTR_PTR_1126eee58);
  return;
}



/* Entry: 105fed494; end: 105fed4c7; -[SCCMusicSharingPermissionsSheetComponent setViewModel:] */

void FUN_105fed494(void)

{
  func_0x000105fed644();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed654();
  func_0x000105fed66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed4c8; end: 105fed4ff; -[SCCMusicSharingPermissionsSheetComponent viewModel] */

void FUN_105fed4c8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fed500; end: 105fed50b; +[SCCMusicSharingSettingsComponent componentPath] */

undefined ** FUN_105fed500(void)

{
  return &PTR____CFConstantStringClassReference_110e35db8;
}



/* Entry: 105fed50c; end: 105fed52b; -[SCCMusicSharingSettingsComponent initWithViewModel:componentContext:runtime:] */

void FUN_105fed50c(void)

{
  FUN_105fed630(PTR_PTR_1126eee60);
  return;
}



/* Entry: 105fed52c; end: 105fed55f; -[SCCMusicSharingSettingsComponent setViewModel:] */

void FUN_105fed52c(void)

{
  func_0x000105fed644();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed654();
  func_0x000105fed66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed560; end: 105fed597; -[SCCMusicSharingSettingsComponent viewModel] */

void FUN_105fed560(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fed598; end: 105fed5a3; +[SCCMusicSharingTrayComponent componentPath] */

undefined ** FUN_105fed598(void)

{
  return &PTR____CFConstantStringClassReference_110e35dd8;
}



/* Entry: 105fed5a4; end: 105fed5c3; -[SCCMusicSharingTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105fed5a4(void)

{
  FUN_105fed630(PTR_PTR_1126eee68);
  return;
}



/* Entry: 105fed5c4; end: 105fed5f7; -[SCCMusicSharingTrayComponent setViewModel:] */

void FUN_105fed5c4(void)

{
  func_0x000105fed644();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed654();
  func_0x000105fed66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed5f8; end: 105fed62f; -[SCCMusicSharingTrayComponent viewModel] */

void FUN_105fed5f8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fed630; end: 105fed68b;  */

void FUN_105fed630(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fed68c; end: 105fed69f; +[SCCMapLiveUpgradeLiveUpgradeActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105fed68c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110906388;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105fed6a0; end: 105fed6c3; +[SCCMapLiveUpgradeLiveUpgradeQuickPickerActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105fed6a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109063e8;
  param_1[1] = &PTR_DAT_110906448;
  param_1[2] = &PTR_s_ooio_v_1109063b8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105fed6c4; end: 105fed6ef;  */

undefined8 FUN_105fed6c4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3]);
  return 0;
}



/* Entry: 105fed6f0; end: 105fed76b;  */

void FUN_105fed6f0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fed8bc;
  puStack_30 = &UNK_1108849d0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000105fed904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105fed76c; end: 105fed777; +[SCCMapLiveUpgradeLiveUpgradeQuickPicker componentPath] */

undefined ** FUN_105fed76c(void)

{
  return &PTR____CFConstantStringClassReference_110e35df8;
}



/* Entry: 105fed778; end: 105fed79b; -[SCCMapLiveUpgradeLiveUpgradeQuickPicker initWithViewModel:componentContext:runtime:] */

void FUN_105fed778(void)

{
  FUN_105fed8f0(PTR_PTR_1126eee70);
  return;
}



/* Entry: 105fed79c; end: 105fed7d3; -[SCCMapLiveUpgradeLiveUpgradeQuickPicker setViewModel:] */

void FUN_105fed79c(void)

{
  func_0x000105fed90c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed91c();
  func_0x000105fed904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed7d4; end: 105fed813; -[SCCMapLiveUpgradeLiveUpgradeQuickPicker viewModel] */

void FUN_105fed7d4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fed814; end: 105fed81f; +[SCCMapLiveUpgradeLiveUpgradeView componentPath] */

undefined ** FUN_105fed814(void)

{
  return &PTR____CFConstantStringClassReference_110e35e18;
}



/* Entry: 105fed820; end: 105fed843; -[SCCMapLiveUpgradeLiveUpgradeView initWithViewModel:componentContext:runtime:] */

void FUN_105fed820(void)

{
  FUN_105fed8f0(PTR_PTR_1126eee78);
  return;
}



/* Entry: 105fed844; end: 105fed87b; -[SCCMapLiveUpgradeLiveUpgradeView setViewModel:] */

void FUN_105fed844(void)

{
  func_0x000105fed90c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed91c();
  func_0x000105fed904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fed87c; end: 105fed8bb; -[SCCMapLiveUpgradeLiveUpgradeView viewModel] */

void FUN_105fed87c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fed904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fed8bc; end: 105fed8ef;  */

void FUN_105fed8bc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105fed8f0; end: 105fed933;  */

void FUN_105fed8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fed934; end: 105fed9b7; -[SCCMusicSharingAllowlistPickerContext initWithOnDone:currentUser:friendmojiProvider:] */

undefined8 * FUN_105fed934(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(in_x4);
  func_0x000105fee1c0();
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126eee80;
  uStack_40 = param_1;
  func_0x000105fee140();
  puVar1 = &uStack_40;
  func_0x000105fee138(puVar1);
  func_0x000105fee17c();
  func_0x000105fee1ac();
  func_0x000105fee1a4();
  return puVar1;
}



/* Entry: 105fed9b8; end: 105fed9cb; +[SCCMusicSharingAllowlistPickerContext valdiMarshallableObjectDescriptor] */

void FUN_105fed9b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906458;
  param_1[1] = &PTR_DAT_1109064b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fed9cc; end: 105fed9eb; -[SCCMusicSharingAllowlistPickerState initWithSelectedUserIds:] */

void FUN_105fed9cc(void)

{
  func_0x000105fee0f4(PTR_PTR_1126eee88);
  return;
}



/* Entry: 105fed9ec; end: 105fed9ff; +[SCCMusicSharingAllowlistPickerState valdiMarshallableObjectDescriptor] */

void FUN_105fed9ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109064d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105feda00; end: 105feda2f; -[SCCMusicSharingAllowlistPickerViewModel initWithFriends:initialSelectedUserIds:] */

void FUN_105feda00(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eee90;
  uStack_20 = param_1;
  func_0x000105fee140();
  func_0x000105fee138(&uStack_20);
  return;
}



/* Entry: 105feda30; end: 105feda43; +[SCCMusicSharingAllowlistPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_105feda30(undefined8 *param_1)

{
  *param_1 = &PTR_s_friends_110906500;
  param_1[1] = &PTR_DAT_110906548;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105feda44; end: 105fedae7; -[SCCMusicSharingPermissionsSheetContext initWithOnAllow:onDismiss:alertPresenter:deckHierarchy:navigator:] */

undefined1 * FUN_105feda44(void)

{
  undefined1 *puVar1;
  
  func_0x000105fee1b4();
  func_0x000105fee1c0();
  func_0x000105fee18c();
  func_0x000105fee1f0();
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x000105fee1e8();
  func_0x000105fee140();
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000105fee138(puVar1);
  func_0x000105fee1a4();
  func_0x000105fee1ac();
  func_0x000105fee17c();
  func_0x000105fee1e0();
  func_0x000105fee194();
  return puVar1;
}



/* Entry: 105fedae8; end: 105fedb0b; +[SCCMusicSharingPermissionsSheetContext valdiMarshallableObjectDescriptor] */

void FUN_105fedae8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906588;
  param_1[1] = &PTR_DAT_110906630;
  param_1[2] = &PTR_s_oi_v_110906558;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedb0c; end: 105fedb2f;  */

undefined8 FUN_105fedb0c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 105fedb30; end: 105fedb97;  */

void FUN_105fedb30(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fee0ac;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  func_0x000105fee18c();
  _objc_retainBlock(&puStack_48);
  func_0x000105fee1d4();
  func_0x000105fee17c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fedb98; end: 105fedbbf; -[SCCMusicSharingPermissionsSheetData initWithAllowlistDisplayNames:allowlistRemainingCount:] */

void FUN_105fedb98(void)

{
  func_0x000105fee120(PTR_PTR_1126eeea0);
  func_0x000105fee110();
  return;
}



/* Entry: 105fedbc0; end: 105fedbd3; +[SCCMusicSharingPermissionsSheetData valdiMarshallableObjectDescriptor] */

void FUN_105fedbc0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110906658;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedbd4; end: 105fedc03; -[SCCMusicSharingPermissionsSheetState initWithSelectedAudience:allowlistSubtitle:providerName:hasAllowlist:] */

void FUN_105fedbd4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee120(PTR_PTR_1126eeea8);
  func_0x000105fee138(auStack_20);
  return;
}



/* Entry: 105fedc04; end: 105fedc17; +[SCCMusicSharingPermissionsSheetState valdiMarshallableObjectDescriptor] */

void FUN_105fedc04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109066b8;
  param_1[1] = &PTR_DAT_110906730;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedc18; end: 105fedc37; -[SCCMusicSharingPermissionsSheetViewModel initWithSheetData:] */

void FUN_105fedc18(void)

{
  func_0x000105fee0f4(PTR_PTR_1126eeeb0);
  return;
}



/* Entry: 105fedc38; end: 105fedc4b; +[SCCMusicSharingPermissionsSheetViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fedc38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906740;
  param_1[1] = &PTR_s_SCBridgeObservable_110906770;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedc4c; end: 105fedc7b; -[SCCMusicSharingSettings initWithSelectedAudience:allFriends:allowlistUsers:privacySettingsEnabled:] */

void FUN_105fedc4c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee120(PTR_PTR_1126eeeb8);
  func_0x000105fee138(auStack_20);
  return;
}



/* Entry: 105fedc7c; end: 105fedc8f; +[SCCMusicSharingSettings valdiMarshallableObjectDescriptor] */

void FUN_105fedc7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906788;
  param_1[1] = &PTR_DAT_110906800;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedc90; end: 105fedddb; -[SCCMusicSharingSettingsContext initWithOnDismiss:onConnect:onDisconnect:onPermissionModeChanged:alertPresenter:deckHierarchy:navigator:currentUser:friendmojiProvider:] */

undefined8 *
FUN_105fedc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_12);
  func_0x000105fee1f0();
  _objc_retain(param_9);
  func_0x000105fee1c0();
  func_0x000105fee18c();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_68 = PTR_PTR_1126eeec0;
  uStack_70 = param_1;
  func_0x000105fee140();
  puVar3 = &uStack_70;
  func_0x000105fee138(puVar3);
  func_0x000105fee194();
  func_0x000105fee1e8();
  func_0x000105fee1a4();
  func_0x000105fee1ac();
  func_0x000105fee17c();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000105fee1e0();
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105fedddc; end: 105feddff; +[SCCMusicSharingSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_105fedddc(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_110906860;
  param_1[1] = &PTR_DAT_110906980;
  param_1[2] = &PTR_s_oi_v_110906818;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fede00; end: 105fede27;  */

undefined8 FUN_105fede00(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105fede28; end: 105fede8f;  */

void FUN_105fede28(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105fee0c8;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  func_0x000105fee18c();
  _objc_retainBlock(&puStack_48);
  func_0x000105fee1d4();
  func_0x000105fee17c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fede90; end: 105fedebf; -[SCCMusicSharingSettingsState initWithIsListeningPrivately:selectedAudience:allFriends:allowlistUsers:privacySettingsEnabled:] */

void FUN_105fede90(void)

{
  func_0x000105fee120(PTR_PTR_1126eeec8);
  func_0x000105fee110();
  return;
}



/* Entry: 105fedec0; end: 105feded3; +[SCCMusicSharingSettingsState valdiMarshallableObjectDescriptor] */

void FUN_105fedec0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109069c8;
  param_1[1] = &PTR_DAT_110906a58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105feded4; end: 105fedf0f; -[SCCMusicSharingSettingsUserInfo initWithUserId:displayName:] */

void FUN_105feded4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee120(PTR_PTR_1126eeed0);
  func_0x000105fee138(auStack_20);
  return;
}



/* Entry: 105fedf10; end: 105fedf23; +[SCCMusicSharingSettingsUserInfo valdiMarshallableObjectDescriptor] */

void FUN_105fedf10(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110906a70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedf24; end: 105fedf4b; -[SCCMusicSharingSettingsViewModel initWithMusicProviders:sharingSettings:] */

void FUN_105fedf24(void)

{
  func_0x000105fee120(PTR_PTR_1126eeed8);
  func_0x000105fee110();
  return;
}



/* Entry: 105fedf4c; end: 105fedf5f; +[SCCMusicSharingSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fedf4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906b30;
  param_1[1] = &PTR_s_SCBridgeObservable_110906b90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fedf60; end: 105fee017; -[SCCMusicSharingTrayContext initWithOnDismiss:onConnect:onDisconnect:alertPresenter:deckHierarchy:] */

undefined1 * FUN_105fedf60(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  
  func_0x000105fee1b4();
  func_0x000105fee18c();
  func_0x000105fee1f0();
  _objc_retain(in_x3);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x000105fee194();
  _objc_retainBlock();
  func_0x000105fee1e8();
  func_0x000105fee140();
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000105fee138(puVar1);
  func_0x000105fee1ac();
  func_0x000105fee17c();
  func_0x000105fee194();
  func_0x000105fee1e0();
  func_0x000105fee1a4();
  return puVar1;
}



/* Entry: 105fee018; end: 105fee03b; +[SCCMusicSharingTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105fee018(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_110906be0;
  param_1[1] = &PTR_DAT_110906c70;
  param_1[2] = &PTR_s_oi_v_110906bb0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee03c; end: 105fee05b; -[SCCMusicSharingTrayViewModel initWithMusicProviders:] */

void FUN_105fee03c(void)

{
  func_0x000105fee0f4(PTR_PTR_1126eeee8);
  return;
}



/* Entry: 105fee05c; end: 105fee06f; +[SCCMusicSharingTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fee05c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906c90;
  param_1[1] = &PTR_s_SCBridgeObservable_110906cc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee070; end: 105fee097; -[SCCPermissionModeChange initWithMode:] */

void FUN_105fee070(void)

{
  func_0x000105fee120(PTR_PTR_1126eeef0);
  func_0x000105fee110();
  return;
}



/* Entry: 105fee098; end: 105fee0ab; +[SCCPermissionModeChange valdiMarshallableObjectDescriptor] */

void FUN_105fee098(undefined8 *param_1)

{
  *param_1 = &PTR_s_mode_110906cd8;
  param_1[1] = &PTR_DAT_110906d38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


