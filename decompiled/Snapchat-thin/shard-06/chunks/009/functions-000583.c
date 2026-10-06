/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f2cac0; end: 104f2cac7; -[SCComposerChatMediaDownloaderRequestPayload mediaId] */

undefined8 FUN_104f2cac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f2cac8; end: 104f2cacf; -[SCComposerChatMediaDownloaderRequestPayload initialAutoload] */

undefined1 FUN_104f2cac8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f2cad0; end: 104f2cad7; -[SCComposerChatMediaDownloaderRequestPayload waitForSavedToCache] */

undefined1 FUN_104f2cad0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104f2cad8; end: 104f2cadf; -[SCComposerChatMediaDownloaderRequestPayload downloadSource] */

undefined8 FUN_104f2cad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f2cae0; end: 104f2cae7; -[SCComposerChatMediaDownloaderRequestPayload isQuoted] */

undefined1 FUN_104f2cae0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104f2cae8; end: 104f2cb23; -[SCComposerChatMediaDownloaderRequestPayload .cxx_destruct] */

void FUN_104f2cae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f2cb24; end: 104f2cb97; -[SCGrapheneComposerChatMediaDownloaderMetric2 init] */

undefined1 * FUN_104f2cb24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f2cb98; end: 104f2ce0b;  */

/* WARNING: Removing unreachable block (ram,0x000104f2cddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104f2cb98(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x24;
  char *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  char *pcStack_f8;
  undefined8 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = auStack_70;
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar5 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      param_4 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcVar9 = acStack_140;
    pcStack_c8 = FUN_104f2ce0c;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar5;
    puStack_100 = unaff_x24;
    pcStack_f8 = param_4;
    puStack_f0 = auStack_a0;
    pcStack_e8 = pcVar2;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    plVar12 = (long *)0x0;
    pcVar2 = (char *)auStack_a0;
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      param_4 = (char *)auStack_120;
      func_0x00010002b838(auStack_120,pcVar4);
      acStack_140[0] = '\0';
      acStack_140[1] = '\0';
      acStack_140[2] = '\0';
      acStack_140[3] = '\0';
      acStack_140[4] = '\0';
      acStack_140[5] = '\0';
      acStack_140[6] = '\0';
      acStack_140[7] = '\0';
      acStack_140[8] = '\0';
      acStack_140[9] = '\0';
      acStack_140[10] = '\0';
      acStack_140[0xb] = '\0';
      acStack_140[0xc] = '\0';
      acStack_140[0xd] = '\0';
      acStack_140[0xe] = '\0';
      acStack_140[0xf] = '\0';
      acStack_140[0x10] = '\0';
      acStack_140[0x11] = '\0';
      acStack_140[0x12] = '\0';
      acStack_140[0x13] = '\0';
      acStack_140[0x14] = '\0';
      acStack_140[0x15] = '\0';
      acStack_140[0x16] = '\0';
      acStack_140[0x17] = '\0';
      func_0x00010007e1e8(acStack_140,auStack_120,&lStack_108,1);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11085c208);
      puStack_128 = acStack_140;
      func_0x00010007e5dc(&puStack_128);
      pcVar8 = pcVar9;
      pcVar4 = pcVar5;
      pcVar2 = acStack_140;
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
        pcVar8 = pcVar9;
        pcVar4 = pcVar5;
        pcVar2 = acStack_140;
      }
    }
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      pcVar3 = pcVar5;
      __Unwind_Resume();
      ppcVar6 = &pcStack_190;
      pcStack_148 = FUN_104f2cf80;
      puStack_180 = unaff_x24;
      pcStack_178 = param_4;
      puStack_170 = (undefined8 *)pcVar2;
      plStack_168 = plVar12;
      pcStack_160 = pcVar5;
      pcStack_158 = pcVar1;
      ppuStack_150 = &puStack_d0;
      _objc_retain(pcVar8);
      _objc_retain(pcVar4);
      _objc_retain(pcVar10);
      puStack_188 = PTR_PTR_1126e5158;
      pcStack_190 = pcVar3;
      _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        lVar11 = (long)_DAT_112717380;
        _objc_retain(pcVar8);
        uVar7 = *(undefined8 *)((long)ppcVar6 + lVar11);
        *(char **)((long)ppcVar6 + lVar11) = pcVar8;
        _objc_release(uVar7);
        lVar11 = (long)_DAT_112717384;
        _objc_retain(pcVar4);
        uVar7 = *(undefined8 *)((long)ppcVar6 + lVar11);
        *(char **)((long)ppcVar6 + lVar11) = pcVar4;
        _objc_release(uVar7);
        lVar11 = (long)_DAT_112717388;
        _objc_retain(pcVar10);
        uVar7 = *(undefined8 *)((long)ppcVar6 + lVar11);
        *(char **)((long)ppcVar6 + lVar11) = pcVar10;
        _objc_release(uVar7);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar4);
      _objc_release(pcVar8);
      return (char *)ppcVar6;
    }
    return pcVar5;
  }
  return pcVar2;
}



/* Entry: 104f2ce0c; end: 104f2cf7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104f2ce0c(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  char *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11085c208);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_c8 = PTR_PTR_1126e5158;
  pcStack_d0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    lVar7 = (long)_DAT_112717380;
    _objc_retain(puVar4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + lVar7);
    *(undefined1 **)((long)ppcVar2 + lVar7) = puVar4;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_112717384;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + lVar7);
    *(undefined1 **)((long)ppcVar2 + lVar7) = param_4;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_112717388;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppcVar2 + lVar7);
    *(undefined8 *)((long)ppcVar2 + lVar7) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  return (char *)ppcVar2;
}



/* Entry: 104f2cf80; end: 104f2d067; -[SCContinueUserActivityHandlerConversationPlugin initWithConversationManager:userId:navigationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104f2cf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5158;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112717380;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112717384;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112717388;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2d068; end: 104f2d06f; -[SCContinueUserActivityHandlerConversationPlugin uniquePluginType] */

undefined8 FUN_104f2d068(void)

{
  return 0;
}



/* Entry: 104f2d070; end: 104f2d307; -[SCContinueUserActivityHandlerConversationPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f2d070(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSUserActivity_1126b27c0;
  _objc_opt_class(PTR__OBJC_CLASS___NSUserActivity_1126b27c0);
  uVar8 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar8 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  uVar8 = uVar2;
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar8;
  func_0x00010c068100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar2;
  func_0x00010bf50480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c08fa60();
  _objc_release(uVar8);
  if (uVar3 == 0) {
    uVar8 = uVar2;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf529e0();
    if (uVar3 == 1) {
      uVar3 = uVar2;
      func_0x00010c122f00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf616a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      if (uVar6 != 0) {
        uVar3 = uVar2;
        func_0x00010c122f00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf616a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
        goto LAB_104f2d214;
      }
    }
    else {
      _objc_release(uVar8);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = uVar2;
    func_0x00010bf50480();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_104f2d214:
  uVar3 = uVar8;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar7 = 3;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112717388);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112717380);
    func_0x00010beee460(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_retain(uVar9);
    func_0x00010bfa5f80(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar9);
    uVar7 = 1;
  }
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 104f2d308; end: 104f2d433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2d308(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c074920();
    if ((int)lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010c122e40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b01c0;
      func_0x00010c294260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    else {
      puVar2 = PTR_PTR_1126b01c0;
      func_0x00010bfcf680();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f2d434;
    puStack_48 = &UNK_110841f80;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    puStack_38 = puVar2;
    _objc_retain(puVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(puStack_38);
    _objc_release(uStack_40);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f2d434; end: 104f2d497;  */

void FUN_104f2d434(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104f2d498; end: 104f2d4e7; -[SCContinueUserActivityHandlerConversationPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2d498(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717388,0);
  _objc_storeStrong(param_1 + _DAT_112717384,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717380,0);
  return;
}



/* Entry: 104f2d4e8; end: 104f2d63f; -[SCContinueUserActivityHandlerConversationPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2d4e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b27c8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271738c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112717390;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112717394;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf07a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005760(puVar1,param_2,lVar3,lVar6,lVar8);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112717398);
  *(undefined **)(param_1 + _DAT_112717398) = puVar1;
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271739c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2d640; end: 104f2d6df; -[SCContinueUserActivityHandlerConversationPluginEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2d640(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271739c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112717398;
  func_0x00010c12c0c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  puStack_38 = PTR_PTR_1126e5160;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2d6e0; end: 104f2d74b; -[SCContinueUserActivityHandlerConversationPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2d6e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271738c);
  _objc_destroyWeak(param_1 + _DAT_112717394);
  _objc_destroyWeak(param_1 + _DAT_112717390);
  _objc_destroyWeak(param_1 + _DAT_11271739c);
  _objc_destroyWeak(param_1 + _DAT_1127173a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717398,0);
  return;
}



/* Entry: 104f2d74c; end: 104f2d96b; -[SCCreateChatCTACollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104f2d74c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e5168;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c20eaa0(puVar1);
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165ea0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104f2d96c;
    puStack_78 = &UNK_11085c2d0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127173a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127173a4) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127173a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127173a8) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 104f2d96c; end: 104f2d9eb;  */

void FUN_104f2d96c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebc380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f2d9ec; end: 104f2de5f; -[SCCreateChatCTACollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2d9ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_1127173ac;
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126b27d0;
  if ((uVar1 & 1) != 0) goto LAB_104f2de44;
  uVar7 = *(ulong *)(param_1 + lVar9);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b27d0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar7 = uVar3;
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar4);
  _objc_release(uVar7);
  uVar7 = uVar3;
  func_0x00010bf154a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60();
  _objc_release(uVar4);
  _objc_release(uVar7);
  uVar7 = uVar3;
  func_0x00010beecec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar4);
  _objc_release(uVar7);
  uVar7 = uVar1;
  func_0x00010c08dec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08dec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c071ae0();
  _objc_release(uVar4);
  _objc_release(uVar7);
  if ((uVar5 & 1) == 0) {
    lVar8 = (long)_DAT_1127173b0;
    if (*(long *)(param_1 + lVar8) == 0) {
      uVar7 = uVar3;
      func_0x00010c08dec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar7 == 0) goto LAB_104f2dbc0;
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      uVar7 = uVar3;
      func_0x00010c08dec0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar2;
      _objc_release(uVar6);
      _objc_release(uVar7);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar8));
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar8));
      _objc_release(puVar2);
      uVar7 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9fe0();
    }
    else {
LAB_104f2dbc0:
      uVar7 = uVar3;
      func_0x00010c08dec0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar8));
    }
    _objc_release(uVar7);
  }
  uVar7 = uVar3;
  func_0x00010c268c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 != 0) {
    lVar8 = (long)_DAT_1127173a4;
    uVar7 = *(ulong *)(param_1 + lVar8);
    func_0x00010c06f880();
    if ((uVar7 & 1) == 0) {
      uVar7 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
  }
  uVar7 = uVar3;
  func_0x00010c1550e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    func_0x00010c161a60();
LAB_104f2de10:
    _objc_release(uVar4);
  }
  else {
    func_0x00010c161a60();
    _objc_release(uVar4);
    lVar8 = (long)_DAT_1127173a8;
    uVar7 = *(ulong *)(param_1 + lVar8);
    func_0x00010c06f880();
    if ((uVar7 & 1) == 0) {
      uVar7 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010beee7e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(uVar4);
      _objc_release(uVar7);
      uVar4 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010beee7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar7);
      goto LAB_104f2de10;
    }
  }
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(ulong *)(param_1 + lVar9) = param_3;
  _objc_release(uVar6);
  func_0x00010c1cbe20(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_104f2de44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f2de60; end: 104f2de67; +[SCCreateChatCTACollectionViewCell cellStyle] */

undefined8 FUN_104f2de60(void)

{
  return 0;
}



/* Entry: 104f2de68; end: 104f2dea3; +[SCCreateChatCTACollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_104f2de68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bfe0740(PTR_PTR_1126b2780,param_3,0,1,0xf);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 104f2dea4; end: 104f2df6b; -[SCCreateChatCTACollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2dea4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b27d0;
  uVar4 = *(ulong *)(param_1 + _DAT_1127173ac);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c268c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127173b4);
    uVar3 = uVar1;
    func_0x00010c268c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2df6c; end: 104f2e033; -[SCCreateChatCTACollectionViewCell _didSecondaryTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2df6c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b27d0;
  uVar4 = *(ulong *)(param_1 + _DAT_1127173ac);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c1550e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127173b4);
    uVar3 = uVar1;
    func_0x00010c1550e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2e034; end: 104f2e073; -[SCCreateChatCTACollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_104f2e034(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 104f2e074; end: 104f2e0d7; -[SCCreateChatCTACollectionViewCell touchesBegan:withEvent:] */

void FUN_104f2e074(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesBegan_withEvent__11267b780);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(param_1);
  return;
}



/* Entry: 104f2e0d8; end: 104f2e13b; -[SCCreateChatCTACollectionViewCell touchesEnded:withEvent:] */

void FUN_104f2e0d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesEnded_withEvent__11267b788);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(param_1);
  return;
}



/* Entry: 104f2e13c; end: 104f2e19f; -[SCCreateChatCTACollectionViewCell touchesCancelled:withEvent:] */

void FUN_104f2e13c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(param_1);
  return;
}



/* Entry: 104f2e1a0; end: 104f2e1e7; -[SCCreateChatCTACollectionViewCell _singleTapGestureRecognizer] */

void FUN_104f2e1a0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f2e1e8; end: 104f2e21f; -[SCCreateChatCTACollectionViewCell _secondaryTapGestureRecognizer] */

void FUN_104f2e1e8(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2e220; end: 104f2e22f; -[SCCreateChatCTACollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f2e220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127173ac);
}



/* Entry: 104f2e230; end: 104f2e23f; -[SCCreateChatCTACollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f2e230(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127173b4);
}



/* Entry: 104f2e240; end: 104f2e27f; -[SCCreateChatCTACollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2e240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127173b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2e280; end: 104f2e2ef; -[SCCreateChatCTACollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2e280(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127173b4,0);
  _objc_storeStrong(param_1 + _DAT_1127173ac,0);
  _objc_storeStrong(param_1 + _DAT_1127173b0,0);
  _objc_storeStrong(param_1 + _DAT_1127173a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127173a4,0);
  return;
}



/* Entry: 104f2e2f0; end: 104f2e393; -[SCCreateChatGroupLinkWorkflow initWithGroupLinkHandler:userId:] */

undefined1 *
FUN_104f2e2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5170;
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



/* Entry: 104f2e394; end: 104f2e64f; -[SCCreateChatGroupLinkWorkflow startGroupLinkCreationWithSelectedParticipants:currentTitle:] */

void FUN_104f2e394(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    auStack_f0[0] = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 == 0) {
      _objc_release(param_3);
    }
    else {
      uVar8 = 0;
      lVar9 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          uVar2 = uVar3;
          func_0x00010c0720c0();
          func_0x00010befa120(puVar4);
          _objc_release(uVar3);
          uVar8 = (uint)uVar2 | uVar8;
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      _objc_release(param_3);
      if ((uVar8 & 1) != 0) goto LAB_104f2e538;
    }
    func_0x00010befa120(puVar4);
  }
LAB_104f2e538:
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_initWeak(auStack_f0,param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_f0;
  _objc_copyWeak(auStack_138,puVar5);
  func_0x00010c24ee20(uVar7);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_f0);
    __Unwind_Resume(param_3);
    _objc_retain(puVar5);
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    func_0x00010be2a600();
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 104f2e650; end: 104f2e697;  */

void FUN_104f2e650(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2e698; end: 104f2e6df; -[SCCreateChatGroupLinkWorkflow startGroupLinkCreationWithExistingGroupId:] */

void FUN_104f2e698(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1340();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2e6e0; end: 104f2e72f; -[SCCreateChatGroupLinkWorkflow deleteInviteLinkToGroup:] */

void FUN_104f2e6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c080();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2e730; end: 104f2e837; -[SCCreateChatGroupLinkWorkflow _handleGroupLinkActionResult:] */

void FUN_104f2e730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f2e838;
  puStack_58 = &UNK_11085c330;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c0800(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104f2e838; end: 104f2e89f;  */

void FUN_104f2e838(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a580();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2e8a0; end: 104f2e8d3;  */

void FUN_104f2e8a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2e8d4; end: 104f2e93b; -[SCCreateChatGroupLinkWorkflow _handleGroupInviteLinkCreationSuccessWithGroup:formattedDeepLink:] */

void FUN_104f2e8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c1e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2e93c; end: 104f2e96f; -[SCCreateChatGroupLinkWorkflow _handleGroupInviteFailureWithError:] */

void FUN_104f2e93c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf764c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2e970; end: 104f2e987; -[SCCreateChatGroupLinkWorkflow delegate] */

void FUN_104f2e970(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2e988; end: 104f2e993; -[SCCreateChatGroupLinkWorkflow setDelegate:] */

void FUN_104f2e988(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104f2e994; end: 104f2e9cb; -[SCCreateChatGroupLinkWorkflow .cxx_destruct] */

void FUN_104f2e994(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f2e9cc; end: 104f2ebb7; -[SCCreateChatGroupLinkWorkflowResultHandler initWithEventTracker:newChatStatePublisher:circumstanceEngine:notificationPool:groupsDataCreator:navigationDelegate:standardExternalContentShareScopeExposer:groupExternalShareScopeExposer:groupExternalShareScopeServices:] */

undefined1 *
FUN_104f2e9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e5178;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2ebb8; end: 104f2ecfb; -[SCCreateChatGroupLinkWorkflowResultHandler didSucceedWithGroup:deeplink:] */

void FUN_104f2ebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104f2ec70;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104f2ecfc; end: 104f2ed53; -[SCCreateChatGroupLinkWorkflowResultHandler didFailWithLinkHandlerError:] */

void FUN_104f2ecfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104f2ed54;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_40);
  return;
}



/* Entry: 104f2ed54; end: 104f2ed77;  */

void FUN_104f2ed54(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be2c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleMaxParticipants_1125689c0);
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleNoGroupName_112568d40);
    return;
  }
  return;
}



/* Entry: 104f2ed78; end: 104f2edcf; -[SCCreateChatGroupLinkWorkflowResultHandler didBeginGroupLinkDeletion] */

void FUN_104f2ed78(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f2edd0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f2edd0; end: 104f2ee57;  */

void FUN_104f2edd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000106562a74();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f2ee58; end: 104f2eeaf; -[SCCreateChatGroupLinkWorkflowResultHandler didSuccessfullyDeleteGroupLink] */

void FUN_104f2ee58(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f2eeb0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f2eeb0; end: 104f2ef37;  */

void FUN_104f2eeb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000106562a8c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f2ef38; end: 104f2efe3; -[SCCreateChatGroupLinkWorkflowResultHandler handleGroupLinkCreationUsingOffPlatformGroupScopeForGroup:] */

void FUN_104f2ef38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf22f20(uVar2,param_2,param_1,uVar1,param_3,0,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2efe4; end: 104f2f047; -[SCCreateChatGroupLinkWorkflowResultHandler _presentShareSheetWithDeeplinkURL:group:] */

void FUN_104f2efe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bfcef60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7ce60(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f2f048; end: 104f2f217; -[SCCreateChatGroupLinkWorkflowResultHandler _presentOffPlatformShareSheetWithDeepkinkURL:groupName:] */

void FUN_104f2f048(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    func_0x000106562a5c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106562a44();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f2f218;
  puStack_68 = &UNK_11085c390;
  puStack_60 = puVar2;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b24a0;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0574a0(puVar6,param_2,uVar5,puVar3,0,0,0,1,puVar7,param_1);
  _objc_release(puVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 104f2f218; end: 104f2f297;  */

void FUN_104f2f218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar2,param_2,uVar1,puVar3,0,0x13,0,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2f298; end: 104f2f403; -[SCCreateChatGroupLinkWorkflowResultHandler _handleNoGroupName] */

void FUN_104f2f298(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000106562aec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000106562abc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000106562ad4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  uVar7 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x10);
  func_0x00010bf9a2e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b27e0;
  func_0x00010c135680(PTR_PTR_1126b27e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 104f2f404; end: 104f2f477;  */

void FUN_104f2f404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf9a2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b27e0;
  func_0x00010c135680(PTR_PTR_1126b27e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2f478; end: 104f2f62b; -[SCCreateChatGroupLinkWorkflowResultHandler _handleMaxParticipants] */

void FUN_104f2f478(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000106562aec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2920();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106562b04();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar4;
  func_0x000106562b1c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f2f62c; end: 104f2f63b;  */

void FUN_104f2f62c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f2f63c; end: 104f2f6bf; -[SCCreateChatGroupLinkWorkflowResultHandler _handleGroupCreationFailure] */

void FUN_104f2f63c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000106562a2c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f2f6c0; end: 104f2f753; -[SCCreateChatGroupLinkWorkflowResultHandler _updateGeneratorsForAddToGroup] */

void FUN_104f2f6c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b27e8;
  _objc_alloc(PTR_PTR_1126b27e8);
  func_0x00010c002080();
  puVar2 = PTR_PTR_1126b27e0;
  func_0x00010c286200(PTR_PTR_1126b27e0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9a2e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f2f754; end: 104f2f75b;  */

void FUN_104f2f754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b28a0;
  _objc_alloc(PTR_PTR_1126b28a0);
  puVar2 = puVar1;
  func_0x000104f37444();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053160(puVar1,param_2,puVar2,1,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f2f75c; end: 104f2f763; -[SCCreateChatGroupLinkWorkflowResultHandler handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_104f2f75c(void)

{
  return 0;
}



/* Entry: 104f2f764; end: 104f2f783; -[SCCreateChatGroupLinkWorkflowResultHandler shareSheetDismissedWithShareDestination:] */

void FUN_104f2f764(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104f2f784; end: 104f2f7cb; -[SCCreateChatGroupLinkWorkflowResultHandler groupExternalShareScopeDidEnd:] */

void FUN_104f2f784(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f2f7cc; end: 104f2f7d3; -[SCCreateChatGroupLinkWorkflowResultHandler uiContainer] */

undefined8 FUN_104f2f7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f2f7d4; end: 104f2f803; -[SCCreateChatGroupLinkWorkflowResultHandler setUiContainer:] */

void FUN_104f2f7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2f804; end: 104f2f89f; -[SCCreateChatGroupLinkWorkflowResultHandler .cxx_destruct] */

void FUN_104f2f804(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f2f8a0; end: 104f2fa5b; -[SCCreateChatNewGroupActionHandler initWithEventTracker:selectionTracker:userId:groupsDataFetcher:groupLinkWorkflow:createChatTooltipService:newChatStatePublisher:newGroupButtonSelectedPublisher:] */

undefined1 *
FUN_104f2f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e5180;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b27f0;
    _objc_alloc();
    func_0x00010c02f8c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2fa5c; end: 104f2fb57; -[SCCreateChatNewGroupActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104f2fa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar1 == 0) {
        uVar2 = 0;
        goto LAB_104f2fb30;
      }
      func_0x00010be28220(param_1);
    }
    else {
      func_0x00010be27a60(param_1);
    }
  }
  else {
    func_0x00010be2cd80(param_1);
  }
  uVar2 = 1;
LAB_104f2fb30:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 104f2fb58; end: 104f2fcaf; -[SCCreateChatNewGroupActionHandler _handleNewGroupPressed] */

void FUN_104f2fb58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar3 = PTR_PTR_1126b27e8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_alloc(puVar3);
  func_0x00010c002080();
  puVar4 = PTR_PTR_1126b27e0;
  func_0x00010c286200(PTR_PTR_1126b27e0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa4e0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a2e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar5);
  func_0x00010befe320(*(undefined8 *)(param_1 + 0x38));
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104f2fcb0; end: 104f2fcc7;  */

void FUN_104f2fcb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x000104f3742c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x000108425fd8(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf529e0(uVar3);
  _objc_release(uVar3);
  func_0x00010c2b06a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f2fcc8; end: 104f2fd67; -[SCCreateChatNewGroupActionHandler _handleCreateGroupInviteLink] */

void FUN_104f2fcc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bef20();
  _objc_release(uVar1);
  return;
}



/* Entry: 104f2fd68; end: 104f2fd7f;  */

void FUN_104f2fd68(void)

{
  return;
}



/* Entry: 104f2fd80; end: 104f2fe1f; -[SCCreateChatNewGroupActionHandler _handleCreateNewGroupInviteLink] */

void FUN_104f2fd80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0eccc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe0100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa540();
  _objc_release(uVar3);
  func_0x00010c24ee00(*(undefined8 *)(param_1 + 0x28),param_2,uVar2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f2fe20; end: 104f2fe83; -[SCCreateChatNewGroupActionHandler _handleCreateExistingGroupInviteLink:] */

void FUN_104f2fe20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa540();
  _objc_release(uVar1);
  func_0x00010c24edc0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f2fe84; end: 104f2ff0b; -[SCCreateChatNewGroupActionHandler _handleDeleteGroupInviteLink] */

void FUN_104f2fe84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bef20();
  _objc_release(uVar1);
  return;
}



/* Entry: 104f2ff0c; end: 104f2ff1f;  */

void FUN_104f2ff0c(void)

{
  return;
}



/* Entry: 104f2ff20; end: 104f3019f; -[SCCreateChatNewGroupActionHandler _presentDeleteExistingGroupInviteLinkActionSheetForGroupId:] */

void FUN_104f2ff20(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000104f31a78();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_70,puVar6);
  _objc_retain(param_3);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000104f31a90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b27f8;
  _objc_alloc(PTR_PTR_1126b27f8);
  func_0x00010c040200();
  func_0x00010c161de0(puVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010bf6c080(*(undefined8 *)(param_3 + 0x28));
    func_0x00010bf82fe0(puVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104f301a0; end: 104f301ff;  */

void FUN_104f301a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf6c080(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf82fe0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f30200; end: 104f30207;  */

void FUN_104f30200(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 104f30208; end: 104f3020f; -[SCCreateChatNewGroupActionHandler uiContainer] */

undefined8 FUN_104f30208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f30210; end: 104f3023f; -[SCCreateChatNewGroupActionHandler setUiContainer:] */

void FUN_104f30210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f30240; end: 104f302c3; -[SCCreateChatNewGroupActionHandler .cxx_destruct] */

void FUN_104f30240(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f302c4; end: 104f3042b; -[SCCreateChatNewGroupPlugin initWithActionHandler:groupLinkWorkflowResultHandler:createChatTooltipService:newChatStateObservable:sendToExperimentConfiguration:] */

undefined1 *
FUN_104f302c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2800;
    _objc_alloc();
    func_0x00010bff0440();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2808;
    _objc_alloc();
    func_0x00010c0537c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f3042c; end: 104f30433; -[SCCreateChatNewGroupPlugin sectionIdentifiers] */

undefined8 FUN_104f3042c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f30434; end: 104f3043b; -[SCCreateChatNewGroupPlugin sectionCreator] */

undefined8 FUN_104f30434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f3043c; end: 104f30443; -[SCCreateChatNewGroupPlugin sectionDescriptor] */

undefined8 FUN_104f3043c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f30444; end: 104f3044b; -[SCCreateChatNewGroupPlugin sectionIndexer] */

undefined8 FUN_104f30444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f3044c; end: 104f30493; -[SCCreateChatNewGroupPlugin .cxx_destruct] */

void FUN_104f3044c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f30494; end: 104f3095b; -[SCCreateChatNewGroupPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f30494(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar1 = param_1 + _DAT_112717424;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c155fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf4b900(lVar2,param_2,&PTR____CFConstantStringClassReference_110f48778);
  if ((int)lVar1 != 0) {
    lVar22 = (long)_DAT_112717428;
    lVar1 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bf9a3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar20 = (long)_DAT_11271742c;
    lVar1 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010bfced40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar20 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar7 = lVar20;
    func_0x00010bfcf8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar20);
    lVar1 = param_1 + _DAT_112717430;
    _objc_loadWeakRetained();
    lVar20 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar20;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar20);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112717434;
    _objc_loadWeakRetained();
    lVar9 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112717438;
    _objc_loadWeakRetained();
    lVar10 = lVar1;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11271743c;
    _objc_loadWeakRetained();
    lVar11 = lVar1;
    func_0x00010bf55200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112717440;
    _objc_loadWeakRetained();
    lVar12 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar13 = PTR_PTR_1126b2818;
    _objc_alloc();
    lVar21 = (long)_DAT_112717444;
    lVar1 = param_1 + lVar21;
    _objc_loadWeakRetained(lVar1);
    lVar14 = lVar1;
    func_0x00010c2527e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112717448;
    _objc_loadWeakRetained(lVar20);
    lVar15 = lVar20;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + _DAT_11271744c);
    uVar23 = *(undefined8 *)(param_1 + _DAT_112717450);
    lVar16 = param_1 + _DAT_112717454;
    _objc_loadWeakRetained();
    func_0x00010c010de0(puVar13,param_2,lVar3,lVar14,lVar9,lVar10,lVar7,lVar15,uVar24,uVar23,lVar16)
    ;
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar20);
    _objc_release(lVar14);
    _objc_release(lVar1);
    puVar17 = PTR_PTR_1126b2820;
    _objc_alloc(PTR_PTR_1126b2820);
    func_0x00010c019160();
    func_0x00010c18b5e0();
    puVar18 = PTR_PTR_1126b2828;
    _objc_alloc(PTR_PTR_1126b2828);
    lVar1 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar16 = lVar1;
    func_0x00010c2527e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar14 = lVar20;
    func_0x00010bfce6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010e00(puVar18,param_2,lVar3,lVar4,lVar8,lVar6,puVar17,lVar11,lVar16,lVar14);
    _objc_release(lVar14);
    _objc_release(lVar20);
    _objc_release(lVar16);
    _objc_release(lVar1);
    puVar19 = PTR_PTR_1126b2830;
    _objc_alloc(PTR_PTR_1126b2830);
    lVar21 = param_1 + lVar21;
    _objc_loadWeakRetained(lVar21);
    lVar1 = lVar21;
    func_0x00010c2527e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0460(puVar19,param_2,puVar18,puVar13,lVar11,lVar1,lVar12);
    _objc_release(lVar1);
    _objc_release(lVar21);
    param_1 = param_1 + lVar22;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f3095c; end: 104f30a1f; -[SCCreateChatNewGroupPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3095c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717454);
  _objc_storeStrong(param_1 + _DAT_112717450,0);
  _objc_storeStrong(param_1 + _DAT_11271744c,0);
  _objc_destroyWeak(param_1 + _DAT_112717440);
  _objc_destroyWeak(param_1 + _DAT_112717448);
  _objc_destroyWeak(param_1 + _DAT_11271743c);
  _objc_destroyWeak(param_1 + _DAT_112717428);
  _objc_destroyWeak(param_1 + _DAT_112717424);
  _objc_destroyWeak(param_1 + _DAT_112717444);
  _objc_destroyWeak(param_1 + _DAT_11271742c);
  _objc_destroyWeak(param_1 + _DAT_112717430);
  _objc_destroyWeak(param_1 + _DAT_112717434);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717438);
  return;
}



/* Entry: 104f30a20; end: 104f30b1b; -[SCCreateChatNewGroupSectionCreator initWithActionHandler:groupLinkWorkflowResultHandler:createChatTooltipService:newChatStateObservable:] */

undefined1 *
FUN_104f30a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5190;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f30b1c; end: 104f30bcf; -[SCCreateChatNewGroupSectionCreator sectionForDescriptor:] */

void FUN_104f30b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    puVar2 = PTR_PTR_1126b2838;
    _objc_alloc(PTR_PTR_1126b2838);
    func_0x00010c006660();
    func_0x00010c1f9240(puVar3,param_2,puVar2);
    func_0x00010c161980(puVar3,param_2,*(undefined8 *)(param_1 + 8));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f30bd0; end: 104f30c33; -[SCCreateChatNewGroupSectionCreator setUiContainer:] */

void FUN_104f30bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c21b220(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010c21b220(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


