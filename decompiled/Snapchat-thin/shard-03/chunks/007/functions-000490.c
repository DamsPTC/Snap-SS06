/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c28048; end: 102c2810b; -[SCWUserBlocker blockSnapchatter:uiContainer:thenAlwaysReport:] */

void FUN_102c28048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105b4450;
  func_0x000107c613fc(&UNK_1105b4450,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  uVar2 = param_4;
  func_0x000107c614f0(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000102c282c0(param_3,param_4,FUN_102c28424,puVar1,param_1,uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102c2810c; end: 102c2816b; -[SCWUserBlocker init] */

void FUN_102c2810c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCWChatMessageReporting.SCWUserBlocker",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c28138);
  (*pcVar1)();
}



/* Entry: 102c2816c; end: 102c281a3; -[SCWUserBlocker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c28188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2818c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2816c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f00be0));
  return;
}



/* Entry: 102c281a4; end: 102c283db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c281a4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(param_5 + _DAT_112f00be8);
  func_0x000107c5b4a8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    (*param_3)();
  }
  else {
    puVar3 = &UNK_1105b44f0;
    func_0x000107c613fc(&UNK_1105b44f0,0x20,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    pcStack_50 = FUN_102c286f4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_1105b4508;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c3eb04(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102c283dc; end: 102c28403;  */

void FUN_102c283dc(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      uVar7 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar7 + 0x10);
      }
      else {
        uVar6 = param_1;
        if (-1 < (long)param_1) {
          uVar6 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar6 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102c27f7c);
            (*pcVar2)();
          }
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = 0;
          func_0x00010103193c(0,param_1);
        }
        puVar5 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        FUN_102c281a4(uVar4,puVar5,pcVar2,uVar1,lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar5);
        return;
      }
    }
    func_0x000107c61170();
  }
  (*pcVar2)();
  return;
}



/* Entry: 102c28404; end: 102c28423;  */

void FUN_102c28404(void)

{
  func_0x000107c61168(&PTR_PTR_112898588);
  return;
}



/* Entry: 102c28424; end: 102c2842f;  */

void FUN_102c28424(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102c2842c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102c28430; end: 102c286bf;  */

/* WARNING: Possible PIC construction at 0x000102c2853c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2860c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c28634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c28610) */
/* WARNING: Removing unreachable block (ram,0x000102c28540) */
/* WARNING: Removing unreachable block (ram,0x000102c28638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c28430(ulong param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = &UNK_1105b4478;
  func_0x000107c613fc(&UNK_1105b4478,0x18,7);
  *(long *)(puVar3 + 0x10) = param_5;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || (param_3 == 0)) {
    func_0x000107c60bc4(param_5);
  }
  else {
    lVar5 = *(long *)(param_4 + _DAT_112f00be0);
    func_0x000107c60bc4(param_5);
    func_0x000107c61174(param_3);
    func_0x000107c5b484();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c60bd0(param_5);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c286c0);
      (*pcVar2)();
    }
    lVar4 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 != 0) {
      puVar3 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(ulong *)(puVar3 + 0x20) = param_1;
      *(ulong *)(puVar3 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
      goto code_r0x000107c61574;
    }
    func_0x000107c61170(param_3);
  }
  (**(code **)(param_5 + 0x10))(param_5);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102c286c0; end: 102c286f3;  */

void FUN_102c286c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c286f4; end: 102c28753;  */

void FUN_102c286f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c28754; end: 102c28777;  */

void FUN_102c28754(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      uVar7 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar7 + 0x10);
      }
      else {
        uVar6 = param_1;
        if (-1 < (long)param_1) {
          uVar6 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar6 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102c27f7c);
            (*pcVar2)();
          }
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = 0;
          func_0x00010103193c(0,param_1);
        }
        puVar5 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        FUN_102c281a4(uVar4,puVar5,pcVar2,uVar1,lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar5);
        return;
      }
    }
    func_0x000107c61170();
  }
  (*pcVar2)();
  return;
}



/* Entry: 102c28778; end: 102c287fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c28778(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002a641c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f00c20) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f00c28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102c287fc; end: 102c28803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c287fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  func_0x0001002a641c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f00c20) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f00c28) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102c28804; end: 102c28867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c28804(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f00c20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f00c28) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c28868; end: 102c2889b; -[_TtC23SCWChatMessageReporting23SCWUserBlockingServices userBlocker] */

void FUN_102c28868(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c2889c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c2889c; end: 102c28933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2889c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000100083b20(&uStack_38);
  lVar2 = 0;
  FUN_102c28404();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f00be0) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112f00be8) = uStack_38;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c28934; end: 102c28993; -[_TtC23SCWChatMessageReporting23SCWUserBlockingServices init] */

void FUN_102c28934(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCWChatMessageReporting.SCWUserBlockingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c28960);
  (*pcVar1)();
}



/* Entry: 102c28994; end: 102c289a3;  */

undefined1  [16] FUN_102c28994(void)

{
  return ZEXT816(0x1105b45b8);
}



/* Entry: 102c289a4; end: 102c289db; -[_TtC23SCWChatMessageReporting23SCWUserBlockingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c289c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c289c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c289a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00c20));
  return;
}



/* Entry: 102c289dc; end: 102c28a4b; +[AdUnifiedEventObservableBusFactory busWithPluginsFuture:trackPerformer:adConfigProviderV2:] */

void FUN_102c289dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_102c2bacc(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_102c28adc(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c28a4c; end: 102c28a87; -[AdUnifiedEventObservableBusFactory init] */

void FUN_102c28a4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c28a88; end: 102c28adb;  */

void FUN_102c28a88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c28adc; end: 102c28efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c28adc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  func_0x000107c614f0();
  lVar3 = _DAT_112f00c80;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00c88;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00c90;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00c98;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00ca0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00ca8;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cb0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cb8;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cc0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cc8;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cd0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cd8;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00ce0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00ce8;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cf0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00cf8;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d00;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d08;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d10;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d18;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d20;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d28;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d30;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d38;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  lVar3 = _DAT_112f00d40;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112f00d48) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar2,puVar1);
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ffe00);
    func_0x000107c3ebdc(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
  }
  puVar1 = &UNK_1105b4680;
  func_0x000107c613fc(&UNK_1105b4680,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,puVar2);
  pcStack_70 = FUN_102c2baec;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102a3545c;
  puStack_78 = &UNK_1105b4698;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  pcVar6 = "init(pluginsFuture:trackPerformer:adConfigProviderV2:)";
  func_0x0001000c10c0("init(pluginsFuture:trackPerformer:adConfigProviderV2:)");
  func_0x000107c61180();
  func_0x000107c5dc68(param_1);
  func_0x000107c615e8(pcVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 102c28efc; end: 102c2913b;  */

void FUN_102c28efc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    func_0x000107c3db80();
    func_0x000107c61180();
    puVar2 = PTR___sypN_11034f1a8;
    lVar4 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    lVar12 = *(long *)(lVar4 + 0x10);
    if (lVar12 == 0) {
      func_0x000107c6142c(lVar4);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar11 = lVar4;
      do {
        lVar11 = lVar11 + 0x20;
        func_0x0001000bb420(lVar11,auStack_80);
        func_0x000100102924(auStack_80,auStack_a8);
        uVar7 = 0x112f00d78;
        func_0x0001000285a8(0x112f00d78,&UNK_10db340d0);
        plVar8 = &lStack_88;
        func_0x000107c6147c(plVar8,auStack_a8,puVar2 + 8,uVar7,6);
        lVar3 = lStack_88;
        if ((((ulong)plVar8 & 1) != 0) && (lStack_88 != 0)) {
          puVar6 = puVar9;
          func_0x000107c61550();
          if (((int)puVar6 == 0) ||
             (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar5 = puVar9;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            func_0x000102c2bcb4(0,puVar5 + 1,1,puVar9);
          }
          uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar9 = puVar6;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            func_0x000102c2bcb4(puVar9,uVar1 + 1,1,puVar6);
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar3;
        }
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      func_0x000107c6142c(lVar4);
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    func_0x000107c6142c(puVar9);
  }
  else {
    FUN_102c291d4(puVar9);
    func_0x000102c29448(puVar9);
    func_0x000102c29764(puVar9);
    func_0x000102c29a80(puVar9);
    func_0x000102c29d9c(puVar9);
    func_0x000102c2a0b8(puVar9);
    func_0x000102c2a3d4(puVar9);
    func_0x000102c2a6f0(puVar9);
    func_0x000102c2aa0c(puVar9);
    func_0x000102c2ad24(puVar9);
    FUN_102c2b03c(puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102c2913c; end: 102c29143; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl streamsType] */

undefined8 FUN_102c2913c(void)

{
  return 0;
}



/* Entry: 102c29144; end: 102c29153; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adInteractionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c29144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cf8));
  return;
}



/* Entry: 102c29154; end: 102c29163; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewConfigEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c29154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d00));
  return;
}



/* Entry: 102c29164; end: 102c29173; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewUserEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c29164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d08));
  return;
}



/* Entry: 102c29174; end: 102c29183; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewLoadingEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c29174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d10));
  return;
}



/* Entry: 102c29184; end: 102c29193; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewGaEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c29184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d18));
  return;
}



/* Entry: 102c29194; end: 102c291a3; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adReminderEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c29194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d20));
  return;
}



/* Entry: 102c291a4; end: 102c291b3; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adSubscribeEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c291a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d28));
  return;
}



/* Entry: 102c291b4; end: 102c291c3; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adCaptionCtaImpressionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c291b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d30));
  return;
}



/* Entry: 102c291c4; end: 102c291d3; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adLiveReviewEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c291c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00d38));
  return;
}



/* Entry: 102c291d4; end: 102c2b03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c291d4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102c2c124(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c29448);
      (*pcVar1)();
    }
    uVar10 = 0;
    do {
      puVar6 = puStack_90;
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar11 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c615f0(uVar11);
      }
      else {
        uVar11 = uVar10;
        FUN_102c2c270(uVar10,param_1);
      }
      uVar2 = uVar11;
      func_0x000107c3d320();
      func_0x000107c61180();
      func_0x000107c615e8(uVar11);
      uVar11 = *(ulong *)(puVar6 + 0x10);
      puStack_90 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
        FUN_102c2c124(1 < *(ulong *)(puVar6 + 0x18),uVar11 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puStack_90 + 0x10) = uVar11 + 1;
      *(ulong *)(puStack_90 + uVar11 * 8 + 0x20) = uVar2;
      puVar6 = puStack_90;
    } while (uVar9 != uVar10);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f00c88);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  uVar4 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar5 = puVar6;
  func_0x000107c5fc48(puVar6,uVar4);
  func_0x000107c6142c(puVar6);
  func_0x000107c4cd50();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar3 != (undefined *)0x0) {
    puVar6 = &UNK_1105b4bd0;
    func_0x000107c613fc(&UNK_1105b4bd0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,uVar8);
    uStack_70 = 0x102c2c4fc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000d0bb0;
    puStack_78 = &UNK_1105b4be8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar6);
    puVar6 = puVar3;
    func_0x000107c5c320(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c3e924(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102c2b03c; end: 102c2b857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2b03c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  ppuVar9 = &puStack_80;
  ppuVar10 = &puStack_80;
  if (param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2b83c);
          (*pcVar1)();
        }
        uVar11 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
        func_0x000107c615f0(uVar11);
      }
      else {
        uVar11 = uVar14;
        FUN_102c2c270(uVar14,param_1);
      }
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2b0e8);
        (*pcVar1)();
      }
      uVar15 = uVar14 + 1;
      uVar2 = uVar11;
      func_0x000107c5c154();
      if ((int)uVar2 == 2) {
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00d00);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewConfigEventObservable_11259b2d0);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d53c(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b48b0;
          func_0x000107c613fc(&UNK_1105b48b0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4d4;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b48c8;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c3e924(uVar14);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
        }
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00d08);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewUserEventObservableV2_11259b348);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d560(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b4860;
          func_0x000107c613fc(&UNK_1105b4860,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4d0;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b4878;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c3e924(uVar14);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
        }
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00c90);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewAsmEventObservable_11259b2c8);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d538(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b4810;
          func_0x000107c613fc(&UNK_1105b4810,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4e4;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b4828;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c3e924(uVar14);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
        }
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00d10);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewLoadingEventObservable_11259b300);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d54c(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b47c0;
          func_0x000107c613fc(&UNK_1105b47c0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4cc;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b47d8;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c3e924(uVar14);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
        }
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00c98);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewNavigationEventObservab_11259b318);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d550(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b4770;
          func_0x000107c613fc(&UNK_1105b4770,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4c8;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b4788;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c3e924(uVar14);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
        }
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00d18);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewGaEventObservable_11259b2f0);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d544(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b4720;
          func_0x000107c613fc(&UNK_1105b4720,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4c0;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b4738;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c3e924(uVar14);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
        }
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f00ca0);
        uVar13 = uVar11;
        func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adWebviewEventObservable_11259b2e8);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar11;
          func_0x000107c3d540(uVar11);
          func_0x000107c61180();
          puVar3 = &UNK_1105b46d0;
          func_0x000107c613fc(&UNK_1105b46d0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,uVar12);
          uStack_60 = 0x102c2c4c4;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000d0bb0;
          puStack_68 = &UNK_1105b46e8;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar3 = puStack_58;
          func_0x000107c61174(uVar13);
          func_0x000107c61574(puVar3);
          uVar14 = uVar13;
          func_0x000107c5c320(uVar13);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c3e924(uVar14);
          func_0x000107c615e8(uVar11);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar14);
          return;
        }
        func_0x000107c615e8(uVar11);
        return;
      }
      func_0x000107c615e8(uVar11);
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar13);
  }
  return;
}



/* Entry: 102c2b858; end: 102c2b8b3;  */

void FUN_102c2b858(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4d664();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c2b8b4; end: 102c2b913; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl init] */

void FUN_102c2b8b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdUnifiedEventObservableBusImplSwift.AdUnifiedEventObservableBusImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2b8e0);
  (*pcVar1)();
}



/* Entry: 102c2b914; end: 102c2bacb; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c2b930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2b950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2b970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2b990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2b9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2b9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2b9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2ba10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2ba30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2ba50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2ba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2ba90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c2bab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2ba94) */
/* WARNING: Removing unreachable block (ram,0x000102c2ba74) */
/* WARNING: Removing unreachable block (ram,0x000102c2ba54) */
/* WARNING: Removing unreachable block (ram,0x000102c2ba34) */
/* WARNING: Removing unreachable block (ram,0x000102c2ba14) */
/* WARNING: Removing unreachable block (ram,0x000102c2b9f4) */
/* WARNING: Removing unreachable block (ram,0x000102c2b9d4) */
/* WARNING: Removing unreachable block (ram,0x000102c2b9b4) */
/* WARNING: Removing unreachable block (ram,0x000102c2b994) */
/* WARNING: Removing unreachable block (ram,0x000102c2b974) */
/* WARNING: Removing unreachable block (ram,0x000102c2b954) */
/* WARNING: Removing unreachable block (ram,0x000102c2b934) */
/* WARNING: Removing unreachable block (ram,0x000102c2bab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2b914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f00c80));
  return;
}



/* Entry: 102c2bacc; end: 102c2baeb;  */

void FUN_102c2bacc(void)

{
  func_0x000107c61168(&PTR_PTR_1128987c8);
  return;
}



/* Entry: 102c2baec; end: 102c2bb0f;  */

void FUN_102c2baec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    func_0x000107c3db80();
    func_0x000107c61180();
    puVar2 = PTR___sypN_11034f1a8;
    lVar4 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    lVar12 = *(long *)(lVar4 + 0x10);
    if (lVar12 == 0) {
      func_0x000107c6142c(lVar4);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar11 = lVar4;
      do {
        lVar11 = lVar11 + 0x20;
        func_0x0001000bb420(lVar11,auStack_80);
        func_0x000100102924(auStack_80,auStack_a8);
        uVar7 = 0x112f00d78;
        func_0x0001000285a8(0x112f00d78,&UNK_10db340d0);
        plVar8 = &lStack_88;
        func_0x000107c6147c(plVar8,auStack_a8,puVar2 + 8,uVar7,6);
        lVar3 = lStack_88;
        if ((((ulong)plVar8 & 1) != 0) && (lStack_88 != 0)) {
          puVar6 = puVar9;
          func_0x000107c61550();
          if (((int)puVar6 == 0) ||
             (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar5 = puVar9;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            func_0x000102c2bcb4(0,puVar5 + 1,1,puVar9);
          }
          uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar9 = puVar6;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            func_0x000102c2bcb4(puVar9,uVar1 + 1,1,puVar6);
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar3;
        }
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      func_0x000107c6142c(lVar4);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar12 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar12 == 0) {
    func_0x000107c6142c(puVar9);
  }
  else {
    FUN_102c291d4(puVar9);
    func_0x000102c29448(puVar9);
    func_0x000102c29764(puVar9);
    func_0x000102c29a80(puVar9);
    func_0x000102c29d9c(puVar9);
    func_0x000102c2a0b8(puVar9);
    func_0x000102c2a3d4(puVar9);
    func_0x000102c2a6f0(puVar9);
    func_0x000102c2aa0c(puVar9);
    func_0x000102c2ad24(puVar9);
    FUN_102c2b03c(puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(lVar12);
  }
  return;
}



/* Entry: 102c2bb10; end: 102c2bb77;  */

/* WARNING: Possible PIC construction at 0x000102c2bb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c2bb44) */
/* WARNING: Removing unreachable block (ram,0x000102c2bb48) */

void FUN_102c2bb10(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x102c2bb44;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102c2bb78; end: 102c2bb8b;  */

void FUN_102c2bb78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00d80 == (undefined *)0x0 || ((ulong)puRam0000000112f00d80 & 1) != 0) {
    puVar1 = &UNK_10e9505fe;
    func_0x000107c61518(&UNK_10e9505fe,0x1d,0,0);
    puRam0000000112f00d80 = puVar1;
  }
  return;
}



/* Entry: 102c2bb8c; end: 102c2bddb;  */

ulong FUN_102c2bb8c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2bcb4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102c2bddc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2bcb0);
      (*pcVar1)();
    }
    FUN_102c2bedc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102c2bddc; end: 102c2bedb;  */

undefined * FUN_102c2bddc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102c2bb10();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102c2bedc; end: 102c2c123;  */

long FUN_102c2bedc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c2bffc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102c2c000);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d5b0a0;
        func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d5b0a0;
      func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c2bff8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102c2c124; end: 102c2c13f;  */

void FUN_102c2c124(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102c2c140();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102c2c140; end: 102c2c26f;  */

undefined * FUN_102c2c140(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c2c270);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102c2bb10();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112d5b0a0;
    func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102c2c270; end: 102c2c41f;  */

ulong FUN_102c2c270(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c2c34c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c2c350);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x53746e6576456441,0xee00736d61657274);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c2c420);
  (*pcVar2)();
}



/* Entry: 102c2c420; end: 102c2c437;  */

void FUN_102c2c420(void)

{
  FUN_102c2b858();
  return;
}



/* Entry: 102c2c438; end: 102c2c4ff;  */

void FUN_102c2c438(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102c2c500; end: 102c2c503; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adLifecycleEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c80));
  return;
}



/* Entry: 102c2c504; end: 102c2c507; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adLifecycleEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c80));
  return;
}



/* Entry: 102c2c508; end: 102c2c50b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adLifecycleEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c88));
  return;
}



/* Entry: 102c2c50c; end: 102c2c50f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adLifecycleEventSubjectV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c88));
  return;
}



/* Entry: 102c2c510; end: 102c2c513; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewAsmEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c90));
  return;
}



/* Entry: 102c2c514; end: 102c2c517; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewAsmEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c90));
  return;
}



/* Entry: 102c2c518; end: 102c2c51b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewNavigationEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c98));
  return;
}



/* Entry: 102c2c51c; end: 102c2c51f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewNavigationEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00c98));
  return;
}



/* Entry: 102c2c520; end: 102c2c523; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ca0));
  return;
}



/* Entry: 102c2c524; end: 102c2c527; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adWebviewEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ca0));
  return;
}



/* Entry: 102c2c528; end: 102c2c52b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAppInstallEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ca8));
  return;
}



/* Entry: 102c2c52c; end: 102c2c52f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAppInstallEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ca8));
  return;
}



/* Entry: 102c2c530; end: 102c2c533; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAppInstallEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cb0));
  return;
}



/* Entry: 102c2c534; end: 102c2c537; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAppInstallEventSubjectV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cb0));
  return;
}



/* Entry: 102c2c538; end: 102c2c53b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAdToMessageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cb8));
  return;
}



/* Entry: 102c2c53c; end: 102c2c53f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAdToMessageEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cb8));
  return;
}



/* Entry: 102c2c540; end: 102c2c543; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAdToMessageEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cc0));
  return;
}



/* Entry: 102c2c544; end: 102c2c547; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adAdToMessageEventSubjectV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cc0));
  return;
}



/* Entry: 102c2c548; end: 102c2c54b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adDeepLinkEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cc8));
  return;
}



/* Entry: 102c2c54c; end: 102c2c54f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adDeepLinkEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cc8));
  return;
}



/* Entry: 102c2c550; end: 102c2c553; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adDeepLinkEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cd0));
  return;
}



/* Entry: 102c2c554; end: 102c2c557; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adDeepLinkEventSubjectV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cd0));
  return;
}



/* Entry: 102c2c558; end: 102c2c55b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adReportEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cd8));
  return;
}



/* Entry: 102c2c55c; end: 102c2c55f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adReportEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c55c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cd8));
  return;
}



/* Entry: 102c2c560; end: 102c2c563; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adReportEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ce0));
  return;
}



/* Entry: 102c2c564; end: 102c2c567; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adReportEventSubjectV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ce0));
  return;
}



/* Entry: 102c2c568; end: 102c2c56b; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl stickersEventSubjectV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ce8));
  return;
}



/* Entry: 102c2c56c; end: 102c2c56f; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adStickersEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00ce8));
  return;
}



/* Entry: 102c2c570; end: 102c2c573; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adModularLensEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cf0));
  return;
}



/* Entry: 102c2c574; end: 102c2c577; -[_TtC38SCAdUnifiedEventObservableBusImplSwift31AdUnifiedEventObservableBusImpl adModularLensEventSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f00cf0));
  return;
}



/* Entry: 102c2c578; end: 102c2c5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c578(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c2c96c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f00d90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102c2c5e4; end: 102c2c64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c5e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f00d90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c2c650; end: 102c2c6af; -[_TtC46ActiveOperaSessionScopedFactoryServiceProvider32ActiveOperaSessionScopedServices init] */

void FUN_102c2c650(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActiveOperaSessionScopedFactoryServiceProvider.ActiveOperaSessionScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2c67c);
  (*pcVar1)();
}



/* Entry: 102c2c6b0; end: 102c2c6bf; -[_TtC46ActiveOperaSessionScopedFactoryServiceProvider32ActiveOperaSessionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c6b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00d90));
  return;
}



/* Entry: 102c2c6c0; end: 102c2c72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2c6c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105b4dd8;
  func_0x000107c613fc(&UNK_1105b4dd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102c2ca04,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102c2c72c; end: 102c2c7c7;  */

void FUN_102c2c72c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105b4ce8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105b4ce8;
  return;
}



/* Entry: 102c2c7c8; end: 102c2c7ff;  */

void FUN_102c2c7c8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102c2c800; end: 102c2c807;  */

undefined8 FUN_102c2c800(void)

{
  return 0x1b;
}



/* Entry: 102c2c808; end: 102c2c93b;  */

void FUN_102c2c808(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105b4e00;
  func_0x000107c613fc(&UNK_1105b4e00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c2c9dc;
  func_0x00010058fa64(FUN_102c2c9dc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c2c93c; end: 102c2c96b;  */

undefined ** FUN_102c2c93c(void)

{
  return &PTR_DAT_1130664a8;
}



/* Entry: 102c2c96c; end: 102c2c98b;  */

void FUN_102c2c96c(void)

{
  func_0x000107c61168(&PTR_PTR_112898950);
  return;
}



/* Entry: 102c2c98c; end: 102c2c9db;  */

undefined1  [16] FUN_102c2c98c(void)

{
  return ZEXT816(0x1105b4d38);
}



/* Entry: 102c2c9dc; end: 102c2ca03;  */

void FUN_102c2c9dc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102c2ca04; end: 102c2ca07;  */

void FUN_102c2ca04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c2ca08; end: 102c2cfd7;  */

void FUN_102c2ca08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f00df8,&UNK_10db34300);
  puVar1 = &UNK_1105b4e40;
  func_0x000107c613fc(&UNK_1105b4e40,0x128,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_17;
  *(undefined8 *)(puVar1 + 0x20) = param_22;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_13;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  *(undefined8 *)(puVar1 + 0x88) = param_15;
  *(undefined8 *)(puVar1 + 0x90) = param_16;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_23;
  *(undefined8 *)(puVar1 + 0xb8) = param_24;
  *(undefined8 *)(puVar1 + 0xc0) = param_25;
  *(undefined8 *)(puVar1 + 200) = param_26;
  *(undefined8 *)(puVar1 + 0xd0) = param_27;
  *(undefined8 *)(puVar1 + 0xd8) = param_28;
  *(undefined8 *)(puVar1 + 0xe0) = param_29;
  *(undefined8 *)(puVar1 + 0xe8) = param_30;
  *(undefined8 *)(puVar1 + 0xf0) = param_31;
  *(undefined8 *)(puVar1 + 0xf8) = param_32;
  *(undefined8 *)(puVar1 + 0x100) = param_33;
  *(undefined8 *)(puVar1 + 0x108) = param_34;
  *(undefined8 *)(puVar1 + 0x110) = param_35;
  *(undefined8 *)(puVar1 + 0x118) = param_7;
  *(undefined8 *)(puVar1 + 0x120) = param_18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_18);
  func_0x0001000823a8(FUN_102c2cfd8,puVar1);
  return;
}



/* Entry: 102c2cfd8; end: 102c2d043;  */

void FUN_102c2cfd8(void)

{
  long unaff_x20;
  
  func_0x000102c2ccd8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 102c2d044; end: 102c2d053;  */

undefined1  [16] FUN_102c2d044(void)

{
  return ZEXT816(0x1105b4e68);
}



/* Entry: 102c2d054; end: 102c2d7c7;  */

void FUN_102c2d054(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 auStack_70 [2];
  
  uVar20 = *param_2;
  func_0x0001000285a8(0x112f00e08,&UNK_10db34348);
  puVar1 = auStack_70;
  auStack_70[0] = uVar20;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f00e10,&UNK_10db34350);
  puVar2 = &UNK_1105b4eb0;
  func_0x000107c613fc(&UNK_1105b4eb0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar3 = FUN_102c2d984;
  func_0x0001000823a8(FUN_102c2d984,puVar2);
  func_0x000100082720("AdCrossInventoryRuleTrackerEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f00e18,&UNK_10db345f0);
  puVar2 = &UNK_1105b4ed8;
  func_0x000107c613fc(&UNK_1105b4ed8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar20 = 0x102c2d98c;
  func_0x0001000823a8(0x102c2d98c,puVar2);
  pcVar4 = "AdMultiSegmentOperaSessionEntryPointWrapperServiceProvider";
  func_0x000100082720("AdMultiSegmentOperaSessionEntryPointWrapperServiceProvider",0x3a,2);
  FUN_102c2f850();
  pcVar5 = "OperaPageViewScopeExposerSubjectServiceProvider";
  func_0x000100082720("OperaPageViewScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_102c2f89c();
  func_0x000100082720("SCAdPlaybackScopeExposerSubjectServiceProvider",0x2e,2);
  puVar6 = puVar1;
  FUN_102ca908c();
  func_0x000100082720("OperaPageViewScopedFactoryServiceProvider",0x29,2);
  puVar7 = puVar1;
  FUN_102c3b5dc(puVar1,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                param_15,param_16,param_17,param_18,param_19,param_20,param_21,param_22,param_5,
                param_23,param_24,param_25,param_26,param_27,param_28,param_29,param_30,param_31,
                param_32,param_33,param_34,param_35);
  func_0x000100082720("SCAdPlaybackScopedFactoryServiceProvider",0x28,2);
  pcVar8 = pcVar4;
  FUN_102c2f890();
  func_0x000100082720("OperaPageViewScopeExposerObservableServiceProvider",0x32,2);
  pcVar9 = pcVar5;
  FUN_102c2f928();
  func_0x000100082720("SCAdPlaybackScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_102c2c7c8;
  func_0x0001000823a8(FUN_102c2c7c8,0);
  func_0x000100082720("ActiveOperaSessionScopedServicesCleanupRelayServiceProvider",0x3b,2);
  pcVar11 = pcVar4;
  FUN_102c2f5e4(pcVar4,pcVar5);
  func_0x000100082720("ActiveOperaSessionScopeGraphBridgeServicesServiceProvider",0x39,2);
  puVar12 = puVar6;
  func_0x00010442acec();
  func_0x000100082720("OperaPageViewScopeServicesServiceProvider",0x29,2);
  puVar13 = puVar7;
  func_0x0001041f4750();
  func_0x000100082720("SCAdPlaybackScopeServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112f00e20,&UNK_10db34370);
  puVar2 = &UNK_1105b4f00;
  func_0x000107c613fc(&UNK_1105b4f00,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 **)(puVar2 + 0x18) = puVar12;
  *(char **)(puVar2 + 0x20) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar12);
  func_0x000107c6157c(pcVar8);
  pcVar14 = FUN_102c2d9cc;
  func_0x0001000823a8(FUN_102c2d9cc,puVar2);
  func_0x000100082720("ActiveOperaSessionEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f00e28,&UNK_10db34360);
  puVar2 = &UNK_1105b4f28;
  func_0x000107c613fc(&UNK_1105b4f28,0x50,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_27;
  *(undefined8 *)(puVar2 + 0x20) = param_36;
  *(undefined8 *)(puVar2 + 0x28) = param_14;
  *(undefined8 **)(puVar2 + 0x30) = puVar13;
  *(undefined8 *)(puVar2 + 0x38) = param_19;
  *(undefined8 *)(puVar2 + 0x40) = param_37;
  *(char **)(puVar2 + 0x48) = pcVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(pcVar9);
  uVar15 = 0x102c2d9d8;
  func_0x0001000823a8(0x102c2d9d8,puVar2);
  func_0x000100082720("AdOperaPluginEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f00e30,&UNK_10db34368);
  puVar2 = &UNK_1105b4f50;
  func_0x000107c613fc(&UNK_1105b4f50,0x48,7);
  *(code **)(puVar2 + 0x10) = pcVar14;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar11;
  *(code **)(puVar2 + 0x28) = pcVar10;
  *(code **)(puVar2 + 0x30) = pcVar3;
  *(undefined8 *)(puVar2 + 0x38) = uVar20;
  *(undefined8 *)(puVar2 + 0x40) = uVar15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x102c2d9ec;
  func_0x0001000823a8(0x102c2d9ec,puVar2);
  func_0x000100082720("ActiveOperaSessionScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f00d98,&UNK_10db340f0);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x102c2da00;
  func_0x0001000823a8(0x102c2da00,uVar16);
  func_0x000100082720("ActiveOperaSessionScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f00d88,&UNK_10db340e0);
  func_0x000107c6157c(uVar17);
  uVar18 = 0x102c2da08;
  func_0x0001000823a8(0x102c2da08,uVar17);
  func_0x000100082720("ActiveOperaSessionScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105b4f78;
  func_0x000107c613fc(&UNK_1105b4f78,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar18;
  *(code **)(puVar2 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  pcVar19 = FUN_102c2da3c;
  func_0x0001000823a8(FUN_102c2da3c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000100082720("ActiveOperaSessionScopeEntryPointProvider",0x29,2);
  *param_1 = pcVar19;
  return;
}



/* Entry: 102c2d7c8; end: 102c2d983;  */

void FUN_102c2d7c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


