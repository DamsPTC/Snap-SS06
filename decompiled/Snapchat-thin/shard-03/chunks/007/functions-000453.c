/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b695c0; end: 102b6972b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b695c0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000100087bd4(FUN_102b6b788,auStack_70,PTR___sytN_11034f1b0 + 8);
  lVar3 = _DAT_112ef90b8;
  func_0x000107c61428(unaff_x20 + _DAT_112ef90b8,auStack_70,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4ede4();
    func_0x000107c615e8(lVar3);
  }
  FUN_102b692d4();
  lVar4 = lVar3;
  func_0x000107c614f0();
  puVar5 = &UNK_1105a41a0;
  func_0x000107c613fc(&UNK_1105a41a0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105a42f0;
  func_0x000107c613fc(&UNK_1105a42f0,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(long *)(puVar6 + 0x18) = lVar1;
  func_0x000107c6157c(puVar5);
  func_0x00010488b6c8(0x3ff0000000000000,FUN_102b6b7a4,puVar6,lVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c615e8(lVar3);
  func_0x000107c61574(puVar6);
  puVar5 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 102b6972c; end: 102b69a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b6972c(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  byte abStack_c0 [32];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_68 [24];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_a0);
  uVar10 = (ulong)puStack_a0 & 0xffffffff;
  uVar3 = 0;
  FUN_102b71ff0();
  func_0x000107c613fc();
  FUN_102b6fb84(uVar10,uVar3);
  lVar11 = unaff_x20 + _DAT_112ef90d0;
  func_0x000107c61428(lVar11,auStack_68,0,0);
  lVar4 = lVar11;
  func_0x000107c61618(lVar11);
  lVar7 = uVar10 + _DAT_113804ec0;
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar11 + 8);
  func_0x000107c61604(lVar7,lVar4);
  func_0x000107c615e8(lVar4);
  func_0x000100087bd4(abStack_c0,FUN_102b6b1e8,&puStack_a0,PTR___sSbN_11034dd40);
  if ((abStack_c0[0] & 1) == 0) {
    *(undefined ***)(uVar10 + 0x28) = &PTR_DAT_1105a4200;
    func_0x000107c61604(uVar10 + 0x20);
    lVar11 = unaff_x20 + _DAT_112ef90c0;
    func_0x000107c61428(lVar11,abStack_c0,0,0);
    lVar7 = lVar11;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar11 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar11 + 8))();
      func_0x000107c615e8(lVar7);
    }
    func_0x0001007d6c6c(1,0x1000000000000037,0x800000010f0f5cc0,lVar1,&PTR_DAT_1105a48e8);
    func_0x000107c43bf4(param_2);
    func_0x000107c61180();
    puVar8 = &UNK_1105a41a0;
    func_0x000107c613fc(&UNK_1105a41a0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    ppuVar9 = &puStack_a0;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puVar8);
    FUN_102b692d4();
    func_0x000107c5dc64(param_2);
    func_0x000107c615e8(puVar8);
    func_0x000107c60bd0(ppuVar9);
  }
  else {
    puVar5 = (undefined8 *)0x2;
    func_0x0001007d6c6c(2,0xd000000000000023,0x800000010f0f5d00,lVar1,&PTR_DAT_1105a48e8);
    FUN_102b6b228();
    puVar8 = &UNK_110652ef8;
    func_0x000107c613f8(&UNK_110652ef8,puVar5,0,0);
    puVar5[1] = 0;
    *puVar5 = 4;
    *(undefined1 *)(puVar5 + 2) = 2;
    puVar6 = puVar8;
    func_0x000107c5ed2c();
    param_2 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c614ac(puVar8);
    func_0x000107c3fef8(puVar2);
  }
  func_0x000107c61170(param_2);
  puVar8 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar10);
  return puVar8;
}



/* Entry: 102b69a68; end: 102b69b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b69a68(undefined1 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_38 [4];
  char cStack_34;
  
  plVar1 = (long *)(param_2 + _DAT_112ef90e8);
  if (*plVar1 == 0) {
    *plVar1 = param_3;
    plVar1[1] = param_4;
    func_0x000107c6157c(param_3);
    func_0x000107c61174(param_4);
    func_0x0001000d224c(auStack_38);
    if (cStack_34 == '\x01') {
      uVar3 = *(undefined1 *)(param_5 + _DAT_113075878);
    }
    else {
      uVar3 = 0;
    }
    uVar2 = 0;
    *(undefined1 *)(param_2 + _DAT_112ef90f0) = uVar3;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102b69b24; end: 102b69baf;  */

void FUN_102b69b24(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  if ((param_1 == 0) || (func_0x000107c49820(), param_1 != 0)) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    FUN_102b69bb0();
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    func_0x000102b69db0();
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102b69bb0; end: 102b69f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b69bb0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [16];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar2 = 0x112ef9158;
  func_0x0001000285a8(0x112ef9158,&UNK_10db28680);
  func_0x000100087bd4(&lStack_80,0x102b6b7f8,auStack_60,uVar2);
  lVar8 = _DAT_112ef90c8;
  func_0x000107c61428(unaff_x20 + _DAT_112ef90c8,auStack_60,0,0);
  if (*(long *)(unaff_x20 + lVar8) != 0) {
    func_0x000107c5be0c();
  }
  lVar8 = unaff_x20 + _DAT_112ef90c0;
  func_0x000107c61428(lVar8,&lStack_80,0,0);
  lVar3 = lVar8;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar8 + 0x10))();
    func_0x000107c615e8(lVar3);
  }
  if (lStack_80 == 0) {
    func_0x0001007d6c6c(2,0xd000000000000033,0x800000010f0f5ec0,lVar1,&PTR_DAT_1105a48e8);
  }
  else {
    func_0x000107c6157c(lStack_80);
    uVar2 = uStack_78;
    func_0x000107c61174(uStack_78);
    puVar4 = (undefined8 *)0x1;
    func_0x0001007d6c6c(1,0x100000000000002e,0x800000010f0f5f00,lVar1,&PTR_DAT_1105a48e8);
    FUN_102b6f878();
    FUN_102b6b228();
    puVar5 = &UNK_110652ef8;
    func_0x000107c613f8(&UNK_110652ef8,puVar4,0,0);
    puVar4[1] = 0;
    *puVar4 = 3;
    *(undefined1 *)(puVar4 + 2) = 2;
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c614ac(puVar5);
    func_0x000107c3fef8(uVar2);
    func_0x000107c61574(lStack_80);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar7);
    func_0x000100d1be54(lStack_80,uStack_78);
  }
  return;
}



/* Entry: 102b69f88; end: 102b69fff; -[SCPlainBuffersCaptureHandler startVideoCaptureWithConfiguration:stopRecordingPromise:] */

void FUN_102b69f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102b6972c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6a000; end: 102b6a077; -[SCPlainBuffersCaptureHandler startVideoCaptureWithConfiguration:outputSettings:audioConfiguration:stopRecordingPromise:] */

void FUN_102b6a000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102b6972c(param_3,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6a078; end: 102b6a07f; -[SCPlainBuffersCaptureHandler isAsync] */

undefined8 FUN_102b6a078(void)

{
  return 1;
}



/* Entry: 102b6a080; end: 102b6a287;  */

/* WARNING: Possible PIC construction at 0x000102b6a18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b6a264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6a190) */
/* WARNING: Removing unreachable block (ram,0x000102b6a268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a080(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  char cStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 in_stack_ffffffffffffffa0;
  
  func_0x000107c614f0();
  lVar1 = param_1;
  func_0x000107c515d4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c60a2c();
  if ((int)lVar2 != 0) {
    lVar2 = lVar1;
    func_0x000107c60a1c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c60a24(&uStack_70,lVar1);
      lVar3 = param_1;
      func_0x000107c51704();
      if ((int)lVar3 == 2) {
        func_0x000107c4e080(param_1);
        FUN_102b6a288(lVar2,uStack_70,uStack_68,in_stack_ffffffffffffffa0,param_1);
      }
      else if ((int)lVar3 == 1) {
        uVar4 = 0x112ef9118;
        func_0x0001000285a8(0x112ef9118,&UNK_10db285f0);
        func_0x000100087bd4(&cStack_80,FUN_102b6b2b4,&uStack_70,uVar4);
        lVar3 = CONCAT71(uStack_7f,cStack_80);
        if (lVar3 != 0) {
          func_0x000107c6157c(lVar3);
          func_0x000102b6f1a0(lVar2,uStack_70,uStack_68,in_stack_ffffffffffffffa0);
          func_0x000107c61578(lVar3,2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  func_0x000100087bd4(&cStack_80,FUN_102b6b268,&uStack_70,PTR___sSbN_11034dd40);
  if (cStack_80 == '\x01') {
    func_0x000104366fc4(0xd000000000000024,0x800000010f0f5d30,unaff_x20,&PTR_DAT_1105a48e8);
    FUN_102b6ad08(1,0,2);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102b6a288; end: 102b6a403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a288(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined1 auStack_80 [16];
  char cStack_61;
  
  func_0x000107c614f0();
  func_0x000100087bd4(&cStack_61,FUN_102b6b658,auStack_80,PTR___sSbN_11034dd40);
  if (cStack_61 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c45b18();
    puVar2 = puVar1;
    FUN_102b69408();
    func_0x000107c42c78(puVar1);
    puVar3 = puVar2;
    func_0x000107c4094c();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      func_0x000104366fc4(0xd00000000000002a,0x800000010f0f5da0,unaff_x20,&PTR_DAT_1105a48e8);
      func_0x000102b6ad08(1,0,2);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c45afc(0x3ff0000000000000);
      func_0x000102b6ae88();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
      puVar1 = puVar2;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102b6a404; end: 102b6a44b; -[SCPlainBuffersCaptureHandler observeSampleBuffer:] */

void FUN_102b6a404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102b6a080(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b6a44c; end: 102b6a4ab; -[SCPlainBuffersCaptureHandler observeSampleBufferAsynchronously:completion:] */

void FUN_102b6a44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102b6a080(param_3);
  (**(code **)(param_4 + 0x10))(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b6a4ac; end: 102b6a50b; -[SCPlainBuffersCaptureHandler init] */

void FUN_102b6a4ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlainBuffersDataSource.PlainBuffersCaptureHandler",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b6a4d8);
  (*pcVar1)();
}



/* Entry: 102b6a50c; end: 102b6a613; -[SCPlainBuffersCaptureHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b6a588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6a58c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a50c(long param_1)

{
  func_0x000100d1be08(param_1 + _DAT_112ef90b8);
  func_0x000100d1be08(param_1 + _DAT_112ef90c0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef90c8));
  func_0x000100d1be08(param_1 + _DAT_112ef90d0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef9108));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef90d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef90e0));
  return;
}



/* Entry: 102b6a614; end: 102b6a707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a614(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ef90d0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102b6a708; end: 102b6a70b;  */

void FUN_102b6a708(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102b6a70c; end: 102b6a77f;  */

void FUN_102b6a70c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102b6a780; end: 102b6a7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a780(undefined1 *param_1,long param_2,long param_3)

{
  if (*(long *)(param_2 + _DAT_112ef90e8) == 0 || param_3 != *(long *)(param_2 + _DAT_112ef90e8)) {
    *param_1 = 0;
    return;
  }
  *param_1 = *(undefined1 *)(param_2 + _DAT_112ef90f0);
  return;
}



/* Entry: 102b6a7b4; end: 102b6a937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a7b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long alStack_a0 [3];
  undefined1 auStack_88 [8];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  uVar1 = 0x112ef9148;
  func_0x0001000285a8(0x112ef9148,&UNK_10db28668);
  func_0x000100087bd4(alStack_a0,FUN_102b6b640,auStack_60,uVar1);
  lVar8 = _DAT_112ef90c8;
  if (alStack_a0[0] != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ef90c8,auStack_60,0,0);
    if (*(long *)(unaff_x20 + lVar8) != 0) {
      func_0x000107c5be0c();
    }
    func_0x000107c614cc(param_1,auStack_70,auStack_88);
    puVar2 = puStack_80;
    uVar1 = uStack_78;
    func_0x000107c60640();
    puVar3 = puVar2;
    FUN_102b6b228();
    puVar4 = &UNK_110652ef8;
    func_0x000107c613f8(&UNK_110652ef8,puVar3,0,0);
    *puVar3 = puVar2;
    puVar3[1] = uVar1;
    *(undefined1 *)(puVar3 + 2) = 1;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(puVar4);
    func_0x000107c3fef8(alStack_a0[0]);
    func_0x000107c61170(puVar6);
    lVar8 = unaff_x20 + _DAT_112ef90c0;
    func_0x000107c61428(lVar8,alStack_a0,0,0);
    lVar7 = lVar8;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar8 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar8 + 0x10))();
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(alStack_a0[0]);
  }
  return;
}



/* Entry: 102b6a938; end: 102b6a9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6a938(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  long lStack_38;
  
  uVar1 = 0x112ef9118;
  func_0x0001000285a8(0x112ef9118,&UNK_10db285f0);
  func_0x000100087bd4(&lStack_38,FUN_102b6b7e4,auStack_50,uVar1);
  if (lStack_38 != 0) {
    func_0x000107c6157c(lStack_38);
    FUN_102b6ef90(param_1);
    func_0x000107c61578(lStack_38,2);
  }
  return;
}



/* Entry: 102b6a9cc; end: 102b6ac9f;  */

void FUN_102b6a9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)(lVar10 - extraout_x8_00);
  func_0x0001010ee020(param_1,puVar8);
  puVar3 = puVar8;
  func_0x000107c614c4(puVar8,lVar2);
  if ((int)puVar3 == 1) {
    uVar9 = *puVar8;
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c5fb78(0xd000000000000018,0x800000010f0f5e80);
    uVar7 = 0x112d393f0;
    uStack_78 = uVar9;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_78,&uStack_70,uVar7,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar7 = uStack_68;
    func_0x0001007d6c6c(3,uStack_70,uStack_68,param_3,&PTR_DAT_1105a48e8);
    func_0x000107c6142c(uVar7);
    func_0x000107c614cc(uVar9,auStack_80,auStack_98);
    puVar3 = puStack_90;
    uVar7 = uStack_88;
    func_0x000107c60640();
    puVar8 = puVar3;
    FUN_102b6b228();
    puVar4 = &UNK_110652ef8;
    func_0x000107c613f8(&UNK_110652ef8,puVar8,0,0);
    *puVar8 = puVar3;
    puVar8[1] = uVar7;
    *(undefined1 *)(puVar8 + 2) = 1;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(puVar4);
    func_0x000107c3fef8(param_2);
    func_0x000107c61170(puVar6);
    func_0x000107c614ac(uVar9);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar10,puVar8,lVar1);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd00000000000001b;
    uStack_68 = 0x800000010f0f5ea0;
    func_0x000107c5ed88();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    uVar7 = uStack_68;
    func_0x0001007d6c6c(1,uStack_70,uStack_68,param_3,&PTR_DAT_1105a48e8);
    func_0x000107c6142c(uVar7);
    func_0x000107c5ed90();
    func_0x000107c3fefc(param_2);
    func_0x000107c61170(uVar7);
    (**(code **)(lVar11 + 8))(lVar10,lVar1);
  }
  return;
}



/* Entry: 102b6aca0; end: 102b6ad07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6aca0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + _DAT_112ef90e8);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x000107c61174(lVar2);
    func_0x000100d1be54(lVar3,lVar2);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102b6ad08; end: 102b6b00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6ad08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = 0x112ef9148;
  func_0x0001000285a8(0x112ef9148,&UNK_10db28668);
  func_0x000100087bd4(&lStack_58,FUN_102b6b7b4,auStack_70,uVar3);
  lVar1 = _DAT_112ef90b8;
  if (lStack_58 == 0) {
    func_0x0001007d6c6c(2,0xd000000000000017,0x800000010f0f5dd0,lVar2,&PTR_DAT_1105a48e8);
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112ef90b8,auStack_70,0,0);
    puVar4 = (undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61618();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000107c41ab0();
      func_0x000107c615e8();
    }
    FUN_102b6b228();
    puVar5 = &UNK_110652ef8;
    func_0x000107c613f8(&UNK_110652ef8,puVar4,0,0);
    *puVar4 = param_1;
    puVar4[1] = param_2;
    *(char *)(puVar4 + 2) = (char)param_3;
    FUN_102b6b720(param_1,param_2,param_3);
    puVar6 = puVar5;
    func_0x000107c5ed2c(puVar5);
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c614ac(puVar5);
    func_0x000107c3fef8(lStack_58);
    func_0x000107c61170(lStack_58);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 102b6b00c; end: 102b6b15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b00c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = 0x112ef9148;
    lStack_70 = param_1;
    func_0x0001000285a8(0x112ef9148,&UNK_10db28668);
    puVar2 = (undefined8 *)0x102b6b7c8;
    func_0x000100087bd4(&lStack_60,0x102b6b7c8,auStack_80,uVar1);
    if (lStack_60 != 0) {
      FUN_102b6b228();
      puVar3 = &UNK_110652ef8;
      func_0x000107c613f8(&UNK_110652ef8,puVar2,0,0);
      puVar2[1] = 0;
      *puVar2 = 0x3ff0000000000000;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar4 = puVar3;
      func_0x000107c5ed2c();
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar4);
      func_0x000107c614ac(puVar3);
      func_0x000107c3fef8(lStack_60);
      func_0x000107c61170(puVar5);
      lVar6 = _DAT_112ef90b8;
      func_0x000107c61428(param_1 + _DAT_112ef90b8,auStack_80,0,0);
      lVar6 = param_1 + lVar6;
      func_0x000107c61618();
      if (lVar6 != 0) {
        func_0x000107c41ab0();
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c61170(param_1);
      param_1 = lStack_60;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b6b15c; end: 102b6b1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _DAT_112ef90e0;
  if (*(long *)(param_1 + _DAT_112ef90e0) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000104366fc4(0xd00000000000001b,0x800000010f0f5f30,param_3,&PTR_DAT_1105a48e8);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  *(undefined8 *)(param_1 + lVar1) = param_2;
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  return;
}



/* Entry: 102b6b1e8; end: 102b6b203;  */

void FUN_102b6b1e8(void)

{
  long unaff_x20;
  
  FUN_102b69a68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102b6b204; end: 102b6b227;  */

void FUN_102b6b204(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((param_1 == 0) || (func_0x000107c49820(), param_1 != 0)) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_102b69bb0();
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000102b69db0();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102b6b228; end: 102b6b267;  */

void FUN_102b6b228(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef9110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc2ab0;
  func_0x000107c61520(&UNK_10dbc2ab0,&UNK_110652ef8);
  puRam0000000112ef9110 = puVar1;
  return;
}



/* Entry: 102b6b268; end: 102b6b2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b268(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long unaff_x20;
  
  bVar1 = false;
  if (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ef90e0) != 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c51704();
    bVar1 = iVar2 == 2;
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 102b6b2b4; end: 102b6b2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b2b4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ef90e8);
  if (lVar1 != 0) {
    func_0x000107c6157c();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102b6b2ec; end: 102b6b31f;  */

void FUN_102b6b2ec(void)

{
  FUN_102b6b5e8();
  return;
}



/* Entry: 102b6b320; end: 102b6b3b3;  */

void FUN_102b6b320(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
    return;
  }
  return;
}



/* Entry: 102b6b3b4; end: 102b6b46b;  */

ulong * FUN_102b6b3b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      func_0x000107c6157c();
      func_0x000107c61174(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      func_0x000107c6157c();
      func_0x000107c61574(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      func_0x000107c61174();
      func_0x000107c61170(uVar1);
      return param_1;
    }
    func_0x000107c61574(uVar2);
    func_0x000107c61170(param_1[1]);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 102b6b46c; end: 102b6b4f7;  */

ulong * FUN_102b6b46c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else if (*param_2 < 0xffffffff) {
    func_0x000107c61574(uVar1);
    func_0x000107c61170(param_1[1]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    func_0x000107c61574(uVar1);
    uVar1 = param_1[1];
    param_1[1] = param_2[1];
    func_0x000107c61170(uVar1);
  }
  return param_1;
}



/* Entry: 102b6b4f8; end: 102b6b5e7;  */

int FUN_102b6b4f8(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 102b6b5e8; end: 102b6b63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b5e8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ef90f0) == '\x01') {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ef90e8);
    if (lVar1 != 0) {
      func_0x000107c6157c();
    }
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102b6b640; end: 102b6b657;  */

void FUN_102b6b640(void)

{
  long unaff_x20;
  
  FUN_102b6aca0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b6b658; end: 102b6b693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b658(undefined8 param_1)

{
  long unaff_x20;
  
  *(bool *)param_1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ef90e0) != 0;
  return;
}



/* Entry: 102b6b694; end: 102b6b6db;  */

undefined8 FUN_102b6b694(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d5dff8;
  func_0x0001000285a8(0x112d5dff8,&UNK_10d9246e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102b6b6dc; end: 102b6b71f;  */

void FUN_102b6b6dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d5dce8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001010f6448(0xff);
  puVar2 = &UNK_10d9244d4;
  func_0x000107c61520(&UNK_10d9244d4,uVar1);
  puRam0000000112d5dce8 = puVar2;
  return;
}



/* Entry: 102b6b720; end: 102b6b737;  */

void FUN_102b6b720(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 102b6b738; end: 102b6b74b;  */

void FUN_102b6b738(void)

{
  func_0x000102b6b754();
  return;
}



/* Entry: 102b6b74c; end: 102b6b787;  */

void FUN_102b6b74c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)(lVar12 - extraout_x8_00);
  func_0x0001010ee020(param_1,puVar10);
  puVar4 = puVar10;
  func_0x000107c614c4(puVar10,lVar3);
  if ((int)puVar4 == 1) {
    uVar11 = *puVar10;
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c5fb78(0xd000000000000018,0x800000010f0f5e80);
    uVar8 = 0x112d393f0;
    uStack_78 = uVar11;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_78,&uStack_70,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar8 = uStack_68;
    func_0x0001007d6c6c(3,uStack_70,uStack_68,uVar9,&PTR_DAT_1105a48e8);
    func_0x000107c6142c(uVar8);
    func_0x000107c614cc(uVar11,auStack_80,auStack_98);
    puVar4 = puStack_90;
    uVar9 = uStack_88;
    func_0x000107c60640();
    puVar10 = puVar4;
    FUN_102b6b228();
    puVar5 = &UNK_110652ef8;
    func_0x000107c613f8(&UNK_110652ef8,puVar10,0,0);
    *puVar10 = puVar4;
    puVar10[1] = uVar9;
    *(undefined1 *)(puVar10 + 2) = 1;
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c614ac(puVar5);
    func_0x000107c3fef8(uVar1);
    func_0x000107c61170(puVar7);
    func_0x000107c614ac(uVar11);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar12,puVar10,lVar2);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd00000000000001b;
    uStack_68 = 0x800000010f0f5ea0;
    func_0x000107c5ed88();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar10);
    uVar8 = uStack_68;
    func_0x0001007d6c6c(1,uStack_70,uStack_68,uVar9,&PTR_DAT_1105a48e8);
    func_0x000107c6142c(uVar8);
    func_0x000107c5ed90();
    func_0x000107c3fefc(uVar1);
    func_0x000107c61170(uVar8);
    (**(code **)(lVar13 + 8))(lVar12,lVar2);
  }
  return;
}



/* Entry: 102b6b788; end: 102b6b7a3;  */

void FUN_102b6b788(void)

{
  long unaff_x20;
  
  FUN_102b6b15c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102b6b7a4; end: 102b6b7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b7a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0x112ef9148;
    lStack_70 = lVar1;
    func_0x0001000285a8(0x112ef9148,&UNK_10db28668);
    puVar3 = (undefined8 *)0x102b6b7c8;
    func_0x000100087bd4(&lStack_60,0x102b6b7c8,auStack_80,uVar2);
    if (lStack_60 != 0) {
      FUN_102b6b228();
      puVar4 = &UNK_110652ef8;
      func_0x000107c613f8(&UNK_110652ef8,puVar3,0,0);
      puVar3[1] = 0;
      *puVar3 = 0x3ff0000000000000;
      *(undefined1 *)(puVar3 + 2) = 0;
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      puVar6 = puVar5;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar5);
      func_0x000107c614ac(puVar4);
      func_0x000107c3fef8(lStack_60);
      func_0x000107c61170(puVar6);
      lVar7 = _DAT_112ef90b8;
      func_0x000107c61428(lVar1 + _DAT_112ef90b8,auStack_80,0,0);
      lVar7 = lVar1 + lVar7;
      func_0x000107c61618();
      if (lVar7 != 0) {
        func_0x000107c41ab0();
        func_0x000107c615e8(lVar7);
      }
      func_0x000107c61170(lVar1);
      lVar1 = lStack_60;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b6b7ac; end: 102b6b7af; -[SCPlainBuffersCaptureHandler captureImageWithConfiguration:] */

void FUN_102b6b7ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b695c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6b7b0; end: 102b6b7b3; -[SCPlainBuffersCaptureHandler captureImageWithQualityLevel:] */

void FUN_102b6b7b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b695c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6b7b4; end: 102b6b7db;  */

void FUN_102b6b7b4(void)

{
  func_0x000102b6b678();
  return;
}



/* Entry: 102b6b7dc; end: 102b6b7e3;  */

ulong * FUN_102b6b7dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    uVar2 = param_2[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 102b6b7e4; end: 102b6b80b;  */

void FUN_102b6b7e4(void)

{
  FUN_102b6b2ec();
  return;
}



/* Entry: 102b6b80c; end: 102b6b897; -[SCPlainBuffersDataSource delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b80c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(param_1 + _DAT_112ef9160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6b898; end: 102b6ba33; -[SCPlainBuffersDataSource setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6b898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(param_1 + _DAT_112ef9160,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ef9168);
  func_0x000107c614f0(uVar3);
  puVar2 = &UNK_1105a4460;
  func_0x000107c613fc(&UNK_1105a4460,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c615f0(param_3);
  func_0x00010090569c(0x102b6eec0,puVar2,uVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102b6ba34; end: 102b6ba93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6ba34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(param_1 + _DAT_112ef9160,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c412a8();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 102b6ba94; end: 102b6ba9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6ba94(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9160;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112ef9160,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c412a8();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b6ba9c; end: 102b6bb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b6ba9c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0xcb5b);
  }
  *param_1 = lVar1;
  lVar2 = _DAT_112ef9160;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  *(long *)(lVar1 + 0x28) = lVar2;
  func_0x000107c61428(unaff_x20 + lVar2,lVar1,0x21,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  *(long *)(lVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)(lVar1 + 0x18);
  auVar3._0_8_ = FUN_102b6bb20;
  return auVar3;
}



/* Entry: 102b6bb20; end: 102b6bbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bb20(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  func_0x000107c61604(*(long *)(lVar2 + 0x20) + *(long *)(lVar2 + 0x28),uVar3);
  if ((param_2 & 1) == 0) {
    lVar4 = *(long *)(lVar2 + 0x20);
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + _DAT_112ef9168);
    func_0x000107c614f0(uVar3);
    puVar1 = &UNK_1105a4358;
    func_0x000107c613fc(&UNK_1105a4358,0x18,7);
    *(long *)(puVar1 + 0x10) = lVar4;
    func_0x000107c61174(lVar4);
    func_0x00010090569c(FUN_102b6eeb8,puVar1,uVar3);
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102b6bbf0; end: 102b6bcab; -[SCPlainBuffersDataSource context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bbf0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef9170);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102b6bcac; end: 102b6bd6f; -[SCPlainBuffersDataSource setContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef9170);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102b6bd70; end: 102b6bdaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b6bd70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ef9170;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9170,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102b6eec8;
  return auVar2;
}



/* Entry: 102b6bdb0; end: 102b6bdc7; -[SCPlainBuffersDataSource captureHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bdb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9178;
  func_0x000107c61428(param_1 + _DAT_112ef9178,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6bdc8; end: 102b6bddf; -[SCPlainBuffersDataSource setCaptureHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef9178;
  func_0x000107c61428(param_1 + _DAT_112ef9178,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102b6bde0; end: 102b6be1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b6bde0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ef9178;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9178,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102b6eecc;
  return auVar2;
}



/* Entry: 102b6be20; end: 102b6be37; -[SCPlainBuffersDataSource audioHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6be20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(param_1 + _DAT_112ef9180,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6be38; end: 102b6be4f; -[SCPlainBuffersDataSource setAudioHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6be38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(param_1 + _DAT_112ef9180,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102b6be50; end: 102b6be8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b6be50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9180,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102b6be90;
  return auVar2;
}



/* Entry: 102b6be90; end: 102b6be93;  */

void FUN_102b6be90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102b6be94; end: 102b6beab; -[SCPlainBuffersDataSource positionSettingHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6be94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9188;
  func_0x000107c61428(param_1 + _DAT_112ef9188,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6beac; end: 102b6bec3; -[SCPlainBuffersDataSource setPositionSettingHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6beac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef9188;
  func_0x000107c61428(param_1 + _DAT_112ef9188,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102b6bec4; end: 102b6bf03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b6bec4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ef9188;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9188,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102b6eed0;
  return auVar2;
}



/* Entry: 102b6bf04; end: 102b6bf0f; -[SCPlainBuffersDataSource zoomingHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bf04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9190;
  func_0x000107c61428(param_1 + _DAT_112ef9190,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6bf10; end: 102b6bf53;  */

void FUN_102b6bf10(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6bf54; end: 102b6bf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bf54(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9190;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9190,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 102b6bf60; end: 102b6bf9f;  */

void FUN_102b6bf60(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 102b6bfa0; end: 102b6bfab; -[SCPlainBuffersDataSource setZoomingHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6bfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef9190;
  func_0x000107c61428(param_1 + _DAT_112ef9190,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102b6bfac; end: 102b6c00b;  */

void FUN_102b6bfac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 102b6c00c; end: 102b6c017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6c00c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef9190;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9190,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102b6c018; end: 102b6c067;  */

void FUN_102b6c018(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 102b6c068; end: 102b6c0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b6c068(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ef9190;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9190,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102b6eed4;
  return auVar2;
}



/* Entry: 102b6c0a8; end: 102b6c0c7; -[SCPlainBuffersDataSource sampleBufferMetadataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6c0a8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ef9198));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6c0c8; end: 102b6c113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6c0c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112ef91a0;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 102b6c114; end: 102b6c2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6c114(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ef91a0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102b6c2e0; end: 102b6c6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b6c2e0(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  undefined8 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  long alStack_100 [2];
  undefined8 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar5 = 0;
  alStack_100[0] = param_1;
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar13 = (long)alStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_c0 = lVar13;
  func_0x000107c5f824();
  lStack_b8 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_d8 = lVar13;
  func_0x000107c5f7f0();
  lStack_e8 = *(long *)(lVar5 + -8);
  lStack_e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  puVar14 = (undefined8 *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0;
  puStack_f0 = (undefined8 *)((long)puVar14 - extraout_x12);
  func_0x000107c5f83c();
  lStack_d0 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar13 = ((long)puVar14 - extraout_x12) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  alStack_100[1] = lVar13;
  func_0x000107c5fffc();
  puVar11 = PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa_11034f9a8;
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar13 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_102b6ed44(0);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112ef9168);
  func_0x000107c614f0(uVar15);
  func_0x000100bcb214();
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d60c70;
  FUN_102b6ed90(0x112d60c70,puVar11,
                PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVs10SetAlgebraACMc_11034f9b8);
  uVar7 = 0x112d60c78;
  func_0x0001000285a8(0x112d60c78,&UNK_10db286c0);
  uVar8 = 0x112d60c80;
  func_0x000102b6edd0(0x112d60c80,0x112d60c78,&UNK_10db286c0);
  func_0x000107c60264(lVar13,&puStack_98,uVar7,uVar8,lVar5,uVar6);
  lVar9 = lVar13;
  func_0x000107c60000(lVar13,uVar15);
  func_0x000107c61170(uVar15);
  (**(code **)(lVar17 + 8))(lVar13,lVar5);
  lVar13 = alStack_100[1];
  lVar5 = alStack_100[0];
  func_0x000107c5f828(alStack_100[1],*(undefined8 *)(alStack_100[0] + _DAT_112ef9210));
  lVar17 = lStack_e8;
  puVar2 = puStack_f0;
  *puStack_f0 = *(undefined8 *)(lVar5 + _DAT_112ef9218);
  lVar3 = lStack_e0;
  uVar1 = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778;
  pcVar16 = *(code **)(lVar17 + 0x68);
  (*pcVar16)(puVar2,uVar1,lStack_e0);
  lVar10 = lVar9;
  func_0x000107c614f0(lVar9);
  *puVar14 = *(undefined8 *)(lVar5 + _DAT_112ef9220);
  (*pcVar16)(puVar14,uVar1,lVar3);
  func_0x000107c6007c(lVar13,puVar2,puVar14,lVar10);
  pcVar16 = *(code **)(lVar17 + 8);
  (*pcVar16)(puVar14,lVar3);
  puVar11 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar11 + 0x10,lVar5);
  pcStack_78 = FUN_102b6ed88;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1105a4400;
  ppuVar12 = &puStack_98;
  puStack_70 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c6157c(puVar11);
  lVar5 = lStack_d8;
  func_0x000107c5f808(lStack_d8);
  lVar17 = lStack_c0;
  func_0x0001002661b0(lStack_c0,lVar10);
  func_0x000107c60018(lVar5,lVar17,ppuVar12,lVar10);
  func_0x000107c60bd0(ppuVar12);
  (**(code **)(lStack_a8 + 8))(lVar17,lStack_a0);
  (**(code **)(lStack_b8 + 8))(lVar5,lStack_b0);
  (*pcVar16)(puVar2,lVar3);
  (**(code **)(lStack_d0 + 8))(lVar13,lStack_c8);
  puVar4 = puStack_70;
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar4);
  return lVar9;
}



/* Entry: 102b6c6e0; end: 102b6c733;  */

void FUN_102b6c6e0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102b6dc9c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b6c734; end: 102b6c753; -[SCPlainBuffersDataSource pixelBufferProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6c734(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ef91a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6c754; end: 102b6c85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b6c754(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112ef91f0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ef91f0);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    pcVar3 = "tokenHandler";
    func_0x0001000c10c0("tokenHandler");
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126c8e98;
    func_0x000107c610f8();
    func_0x000107c47e14();
    func_0x000107c615e8(pcVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar2);
  return puVar4;
}



/* Entry: 102b6c860; end: 102b6caf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102b6c860(undefined8 param_1,long param_2,long param_3,undefined *param_4,long param_5,
                    long **param_6,undefined8 param_7,undefined8 param_8)

{
  double *pdVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long extraout_x8;
  long unaff_x20;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_230 [8];
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long **pplStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [24];
  long lStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_60;
  long lStack_58;
  
  puVar15 = &uStack_110;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(unaff_x20 + _DAT_112ef91a8);
  if (plVar5 != (long *)0x0) {
    dVar17 = *(double *)(unaff_x20 + _DAT_112ef9208);
    dVar18 = ((double *)(unaff_x20 + _DAT_112ef9208))[1];
    func_0x000107c40ac8();
    func_0x000107c61180();
    if (plVar5 != (long *)0x0) goto LAB_102b6caa8;
  }
  plStack_60 = (long *)0x0;
  lVar8 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 6;
  *(undefined8 *)(lVar8 + 0x10) = 3;
  uVar6 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
  func_0x000107c5faec();
  *(undefined8 *)(lVar8 + 0x20) = uVar6;
  *(undefined8 **)(lVar8 + 0x28) = puVar15;
  puVar7 = PTR___sSbN_11034dd40;
  *(undefined **)(lVar8 + 0x48) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar8 + 0x30) = 1;
  uVar6 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
  func_0x000107c5faec();
  *(undefined8 *)(lVar8 + 0x50) = uVar6;
  *(undefined8 **)(lVar8 + 0x58) = puVar15;
  *(undefined **)(lVar8 + 0x78) = puVar7;
  *(undefined1 *)(lVar8 + 0x60) = 1;
  uVar6 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  func_0x000107c5faec();
  *(undefined8 *)(lVar8 + 0x80) = uVar6;
  *(undefined8 **)(lVar8 + 0x88) = puVar15;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  uVar6 = 0x112da99a0;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  *(undefined8 *)(lVar8 + 0xa8) = uVar6;
  *(undefined **)(lVar8 + 0x90) = puVar7;
  lVar11 = lVar8;
  func_0x000100214a84();
  func_0x000107c61588(lVar8);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar8 + 0x20),3,uVar6);
  dVar17 = (double)(long)*(double *)(unaff_x20 + _DAT_112ef9208);
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6cae0);
    (*pcVar4)();
  }
  if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6cae4);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6cae8);
    (*pcVar4)();
  }
  dVar18 = (double)(long)((double *)(unaff_x20 + _DAT_112ef9208))[1];
  if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6caec);
    (*pcVar4)();
  }
  if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6caf0);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6caf4);
    (*pcVar4)();
  }
  unaff_x20 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  param_2 = (long)dVar17;
  param_3 = (long)dVar18;
  lVar8 = lVar11;
  func_0x000107c5f9dc(lVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(lVar11);
  param_6 = &plStack_60;
  param_4 = (undefined *)0x42475241;
  param_5 = lVar8;
  func_0x000107c60aa0(unaff_x20);
  func_0x000107c61170(lVar8);
  plVar5 = plStack_60;
LAB_102b6caa8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar5;
  }
  func_0x000107c60e78();
  lVar8 = 0;
  uStack_218 = param_8;
  uStack_210 = param_7;
  lStack_208 = param_5;
  pplStack_200 = param_6;
  puStack_1f8 = param_4;
  func_0x000107c5f804();
  lVar16 = *(long *)(lVar8 + -8);
  lStack_228 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lStack_220 = unaff_x20;
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ef9160,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef9178) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9180) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9188) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9190) = 0;
  lVar8 = unaff_x20 + _DAT_112ef91a0;
  *(undefined8 *)(lVar8 + 8) = 0;
  func_0x000107c61614(lVar8,0);
  lVar8 = _DAT_112ef91b0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91b0) = 0;
  lVar11 = _DAT_112ef91b8;
  uVar9 = 0;
  func_0x00010006a340();
  uVar6 = uVar9;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar11) = uVar6;
  lVar11 = _DAT_112ef91c0;
  func_0x000107c613fc(uVar9,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar11) = uVar9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91c8) = 0;
  lVar11 = _DAT_112ef91d0;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar11) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef91e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91f8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9200) = 0;
  pdVar1 = (double *)(unaff_x20 + _DAT_112ef9208);
  *pdVar1 = dVar17;
  pdVar1[1] = dVar18;
  *(long **)(unaff_x20 + _DAT_112ef9210) = plVar5;
  if (param_2 == 0) {
    lVar11 = 0x21;
  }
  else {
    lVar11 = param_2;
    func_0x000107c49820();
  }
  lVar3 = lStack_228;
  *(long *)(unaff_x20 + _DAT_112ef9218) = lVar11;
  *(long *)(unaff_x20 + _DAT_112ef9220) = param_3;
  plVar5 = (long *)(unaff_x20 + _DAT_112ef9170);
  *plVar5 = lStack_208;
  plVar5[1] = (long)pplStack_200;
  if (lVar11 != 0) {
    uVar2 = 0;
    if (lVar11 != 0) {
      uVar2 = (undefined4)(1000 / lVar11);
    }
    *(undefined4 *)(unaff_x20 + _DAT_112ef9228) = uVar2;
    puVar10 = puStack_1f8;
    puVar7 = puStack_1f8;
    pplStack_200 = (long **)param_2;
    if (puStack_1f8 == (undefined *)0x0) {
      (**(code **)(lVar16 + 0x68))
                (auStack_230 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8
                 ,lStack_228);
      puVar10 = PTR_PTR_1126ae790;
      func_0x000107c610f8();
      uVar6 = 0xd000000000000025;
      func_0x000107c5fadc(0xd000000000000025,0x800000010f0f5f50);
      func_0x000107c5f800();
      func_0x000107c470d0();
      puVar7 = puStack_1f8;
      func_0x000107c61170(uVar6);
      (**(code **)(lVar16 + 8))(auStack_230 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    }
    uVar6 = uStack_210;
    *(undefined **)(unaff_x20 + _DAT_112ef9168) = puVar10;
    *(undefined8 *)(unaff_x20 + _DAT_112ef9198) = uStack_210;
    *(undefined8 *)(unaff_x20 + _DAT_112ef91a8) = uStack_110;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
    *(long *)(unaff_x20 + lVar8) = lStack_108;
    func_0x000107c615f0(uStack_210);
    func_0x000107c615f0(uStack_110);
    func_0x000107c615f0(lStack_108);
    func_0x000107c615f0(puVar7);
    func_0x000107c615e8(uVar9);
    lStack_190 = lStack_220;
    plVar5 = &lStack_198;
    lStack_198 = unaff_x20;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    if ((lStack_108 != 0) && (lStack_100 != 0)) {
      lVar11 = 0;
      FUN_102b68c20();
      lVar8 = lVar11;
      func_0x000107c610f8();
      *(long *)(lVar8 + _DAT_112ef9050) = lStack_108;
      *(long *)(lVar8 + _DAT_112ef9058) = lStack_100;
      puVar7 = PTR_s_init_1125d9248;
      lStack_1d8 = lVar8;
      lStack_1d0 = lVar11;
      func_0x000107c615f4(lStack_108,2);
      func_0x000107c615f4(lStack_100,2);
      plVar12 = &lStack_1d8;
      func_0x000107c61154(plVar12,puVar7);
      lVar8 = _DAT_112ef9180;
      func_0x000107c61428((long)plVar5 + _DAT_112ef9180,auStack_1f0,1,0);
      uVar9 = *(undefined8 *)((long)plVar5 + lVar8);
      *(long **)((long)plVar5 + lVar8) = plVar12;
      func_0x000107c615e8(uVar9);
      func_0x000107c3d740(lStack_108);
      func_0x000107c615e8(lStack_108);
      func_0x000107c615e8(lStack_100);
    }
    puVar7 = &UNK_1105a4380;
    func_0x000107c613fc(&UNK_1105a4380,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,plVar5);
    pcStack_1a8 = FUN_102b6d228;
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0x42000000;
    puStack_1b8 = &UNK_10169aca4;
    puStack_1b0 = &UNK_1105a4398;
    ppuVar13 = &puStack_1c8;
    puStack_1a0 = puVar7;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_1a0);
    uVar9 = uStack_218;
    uVar14 = uStack_218;
    func_0x000107c5c320(uStack_218);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c3e924(uVar14);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(puStack_1f8);
    func_0x000107c615e8(uVar6);
    func_0x000107c615e8(uStack_110);
    func_0x000107c615e8(lStack_108);
    func_0x000107c615e8(lStack_100);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(pplStack_200);
    return plVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6d004);
  (*pcVar4)();
}



/* Entry: 102b6caf8; end: 102b6d003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b6caf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,long param_13)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  long extraout_x8;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar5 = 0;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar5 + -8);
  lStack_118 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ef9160,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef9178) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9180) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9188) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9190) = 0;
  lVar5 = unaff_x20 + _DAT_112ef91a0;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  lVar5 = _DAT_112ef91b0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91b0) = 0;
  lVar9 = _DAT_112ef91b8;
  uVar6 = 0;
  func_0x00010006a340();
  uVar12 = uVar6;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar9) = uVar12;
  lVar9 = _DAT_112ef91c0;
  func_0x000107c613fc(uVar6,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar9) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91c8) = 0;
  lVar9 = _DAT_112ef91d0;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar9) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef91e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91f8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9200) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef9208);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9210) = param_3;
  if (param_4 == 0) {
    lVar9 = 0x21;
  }
  else {
    lVar9 = param_4;
    func_0x000107c49820();
  }
  lVar3 = lStack_118;
  *(long *)(unaff_x20 + _DAT_112ef9218) = lVar9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9220) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef9170);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b6d004);
    (*pcVar4)();
  }
  uVar2 = 0;
  if (lVar9 != 0) {
    uVar2 = (undefined4)(1000 / lVar9);
  }
  *(undefined4 *)(unaff_x20 + _DAT_112ef9228) = uVar2;
  puVar7 = param_6;
  if (param_6 == (undefined *)0x0) {
    (**(code **)(lVar13 + 0x68))
              (auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lStack_118);
    puVar7 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar12 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f0f5f50);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar12);
    (**(code **)(lVar13 + 8))(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_112ef9168) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9198) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91a8) = param_11;
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  *(long *)(unaff_x20 + lVar5) = param_12;
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_6);
  func_0x000107c615e8(uVar12);
  puVar8 = auStack_88;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  if ((param_12 != 0) && (param_13 != 0)) {
    lVar9 = 0;
    FUN_102b68c20();
    lVar5 = lVar9;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112ef9050) = param_12;
    *(long *)(lVar5 + _DAT_112ef9058) = param_13;
    puVar7 = PTR_s_init_1125d9248;
    lStack_c8 = lVar5;
    lStack_c0 = lVar9;
    func_0x000107c615f4(param_12,2);
    func_0x000107c615f4(param_13,2);
    plVar10 = &lStack_c8;
    func_0x000107c61154(plVar10,puVar7);
    lVar5 = _DAT_112ef9180;
    func_0x000107c61428(puVar8 + _DAT_112ef9180,auStack_e0,1,0);
    uVar12 = *(undefined8 *)(puVar8 + lVar5);
    *(long **)(puVar8 + lVar5) = plVar10;
    func_0x000107c615e8(uVar12);
    func_0x000107c3d740(param_12);
    func_0x000107c615e8(param_12);
    func_0x000107c615e8(param_13);
  }
  puVar7 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,puVar8);
  pcStack_98 = FUN_102b6d228;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10169aca4;
  puStack_a0 = &UNK_1105a4398;
  ppuVar11 = &puStack_b8;
  puStack_90 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61574(puStack_90);
  uVar12 = param_10;
  func_0x000107c5c320(param_10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c3e924(uVar12);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_4);
  return puVar8;
}



/* Entry: 102b6d004; end: 102b6d133; -[SCPlainBuffersDataSource initWithTargetBufferSize:startTime:timeIntervalMsec:leewayMsec:performer:context:sampleBufferMetadataProvider:screenLifecycleEvents:pixelBufferProvider:audioDataSource:audioConfigurationFactory:] */

undefined8
FUN_102b6d004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_9);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  FUN_102b6e6ac(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_4,param_10,param_11,
                param_12,param_13,param_14);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  return param_5;
}



/* Entry: 102b6d134; end: 102b6d15b; -[SCPlainBuffersDataSource initWithTargetBufferSize:startTime:timeIntervalMsec:leewayMsec:performer:context:sampleBufferMetadataProvider:screenLifecycleEvents:pixelBufferProvider:] */

void FUN_102b6d134(void)

{
  func_0x000107c48c3c();
  return;
}



/* Entry: 102b6d15c; end: 102b6d183; -[SCPlainBuffersDataSource initWithTargetBufferSize:startTime:timeIntervalMsec:leewayMsec:performer:context:sampleBufferMetadataProvider:screenLifecycleEvents:] */

void FUN_102b6d15c(void)

{
  func_0x000107c48c3c();
  return;
}



/* Entry: 102b6d184; end: 102b6d227;  */

void FUN_102b6d184(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_60 = param_2;
    lStack_40 = param_2;
    func_0x0001008546f4(0x102b6d230,0,FUN_102b6ee14,auStack_50,FUN_102b6d2cc,0,0x102b6d2d0,0,
                        0x102b6ee1c,auStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b6d228; end: 102b6d233;  */

void FUN_102b6d228(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lStack_60 = lVar1;
    lStack_40 = lVar1;
    func_0x0001008546f4(0x102b6d230,0,FUN_102b6ee14,auStack_50,FUN_102b6d2cc,0,0x102b6d2d0,0,
                        0x102b6ee1c,auStack_70);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b6d234; end: 102b6d2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d234(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lStack_40 = param_2;
  func_0x000100087bd4(0x102b6eea4,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(param_2 + _DAT_112ef9160,auStack_50,0,0);
  param_2 = param_2 + lVar1;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c412a8();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 102b6d2cc; end: 102b6d2d3;  */

void FUN_102b6d2cc(void)

{
  return;
}



/* Entry: 102b6d2d4; end: 102b6d393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d2d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lStack_40 = param_2;
  func_0x000100087bd4(0x102b6ee90,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(param_2 + _DAT_112ef9180,auStack_50,0,0);
  if (*(long *)(param_2 + lVar1) != 0) {
    func_0x000107c5be0c();
  }
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(param_2 + _DAT_112ef9160,auStack_70,0,0);
  param_2 = param_2 + lVar1;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c412ac();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 102b6d394; end: 102b6d3af;  */

void FUN_102b6d394(long param_1,long param_2)

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



/* Entry: 102b6d3b0; end: 102b6d493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b6d3b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  FUN_102b6c754();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010db28670);
  uVar2 = param_1;
  func_0x000107c4d654(param_1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(uVar1);
  func_0x000100087bd4(FUN_102b6eb6c,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar3 = _DAT_112ef9160;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_50,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c412a8();
    func_0x000107c615e8(lVar3);
  }
  return uVar2;
}



/* Entry: 102b6d494; end: 102b6d4c7; -[SCPlainBuffersDataSource start] */

void FUN_102b6d494(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b6d3b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6d4c8; end: 102b6d4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d4c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(0x102b6eb88,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9180,auStack_50,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c5be0c();
  }
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_70,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c412ac();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102b6d4d4; end: 102b6d4fb; -[SCPlainBuffersDataSource didInvalidateAllTokens] */

void FUN_102b6d4d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b6d9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


