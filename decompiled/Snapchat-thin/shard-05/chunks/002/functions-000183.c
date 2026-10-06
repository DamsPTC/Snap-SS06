/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c4a9a0; end: 103c4aa4f; +[WebURLHelperSwift isUrlUnEncoded:] */

uint FUN_103c4a9a0(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  if (param_3 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    puVar1 = param_3;
    func_0x000100e8b654();
    puVar2 = PTR___sSSN_11034da80;
    func_0x000107c60208();
    if (puVar1 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      if (puVar2 == param_3 && puVar1 == param_2) {
        uVar3 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar3 = (uint)puVar2;
      }
      func_0x000107c6142c(puVar1);
    }
    func_0x000107c6142c(param_2);
  }
  return uVar3 & 1;
}



/* Entry: 103c4aa50; end: 103c4aa8b; -[WebURLHelperSwift init] */

void FUN_103c4aa50(undefined8 param_1)

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



/* Entry: 103c4aa8c; end: 103c4aabf;  */

void FUN_103c4aa8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c4aac0; end: 103c4aac3; -[WebURLHelperSwift .cxx_destruct] */

void FUN_103c4aac0(void)

{
  return;
}



/* Entry: 103c4aac4; end: 103c4abf7;  */

undefined1  [16] FUN_103c4aac4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar2 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar2 - extraout_x12;
  if (param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lStack_50 = param_1;
    lStack_48 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c5eb6c(lVar3,0x23,0xe100000000000000);
    func_0x000107c5eb80(lVar2);
    func_0x000107c5eb98(lVar2);
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(lVar2,lVar1);
    func_0x000107c5eb78(lVar2);
    func_0x000107c5eb98(lVar2);
    (*pcVar6)(lVar2,lVar1);
    func_0x000100e8b654();
    param_1 = lVar3;
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c60200(lVar3,PTR___sSSN_11034da80,lVar2);
    (*pcVar6)(lVar3,lVar1);
    func_0x000107c6142c(param_2);
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 103c4abf8; end: 103c4ac17;  */

void FUN_103c4abf8(void)

{
  func_0x000107c61168(&PTR_PTR_112948fb0);
  return;
}



/* Entry: 103c4ac18; end: 103c4ad27;  */

undefined * FUN_103c4ac18(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126ad9f0;
  func_0x000107c610f8(PTR_PTR_1126ad9f0);
  func_0x000107c453e4();
  lVar3 = param_1;
  func_0x000107c433ec();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4ad24);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  FUN_103c4ad28();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
  func_0x000107c6142c(lVar4);
  func_0x000107c54998(puVar2);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c43854();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c54b34(puVar2);
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c43720(param_1);
    FUN_103c4c844();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar5);
    func_0x000107c54ac0(puVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c3f3b4(param_1);
    func_0x000107c53148(puVar2);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4ad28);
  (*pcVar1)();
}



/* Entry: 103c4ad28; end: 103c4ae5b;  */

undefined * FUN_103c4ad28(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = &UNK_1106eef90;
  func_0x000107c613fc(&UNK_1106eef90,0x20,7);
  *(undefined ***)(puVar2 + 0x10) = &puStack_48;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar3 = &UNK_1106eefb8;
  func_0x000107c613fc(&UNK_1106eefb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x103c4c994;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_58 = FUN_103c4c99c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10104fffc;
  puStack_60 = &UNK_1106eefd0;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_50;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c429d8(param_1);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x41,0x70,0x23,1);
  func_0x000107c61574(puVar3);
  puVar3 = puStack_48;
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000107c61574(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4ae5c);
  (*pcVar1)();
}



/* Entry: 103c4ae5c; end: 103c4ae9f; +[DynamicScriptUtil convertFocusedEventToSCCAutofillInfo:] */

void FUN_103c4ae5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103c4ac18();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c4aea0; end: 103c4aea3;  */

undefined * FUN_103c4aea0(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar1 = param_2;
  puVar5 = param_2;
  func_0x000107c402f8();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d6d68;
    func_0x000107c610f8(PTR_PTR_1126d6d68);
    func_0x000107c453e4();
  }
  uVar2 = param_1;
  func_0x000107c43634();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c43634(param_1);
      func_0x000107c61180();
      func_0x000107c54a50(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4aa24();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4aa24(param_1);
      func_0x000107c61180();
      func_0x000107c55a5c(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4248c(param_1);
      func_0x000107c61180();
      func_0x000107c54440(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4e6c0(param_1);
      func_0x000107c61180();
      func_0x000107c57360(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c3d9a4();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c3d9a4(param_1);
      func_0x000107c61180();
      func_0x000107c52504(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c3fa10();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c3fa10(param_1);
      func_0x000107c61180();
      func_0x000107c53418(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c5bcc0(param_1);
      func_0x000107c61180();
      func_0x000107c59840(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4ebd8();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4ebd8(param_1);
      func_0x000107c61180();
      func_0x000107c57618(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  puVar3 = param_2;
  func_0x000107c40d80();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ad9f8;
    func_0x000107c610f8(PTR_PTR_1126ad9f8);
    func_0x000107c453e4();
  }
  uVar2 = param_1;
  func_0x000107c40d84();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar7 = 0;
    puVar5 = (undefined *)0xe000000000000000;
  }
  else {
    uVar7 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  puVar4 = puVar5;
  func_0x000103c58ad4(uVar7);
  puVar6 = puVar4;
  func_0x000107c6142c(puVar5);
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar4;
    func_0x000107c5fadc(uVar7);
    func_0x000107c6142c(puVar4);
    func_0x000107c53220(puVar3);
    func_0x000107c61170(uVar7);
  }
  uVar2 = param_1;
  func_0x000107c40d7c();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar7 = 0;
    puVar6 = (undefined *)0xe000000000000000;
  }
  else {
    uVar7 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  puVar5 = puVar6;
  func_0x000103c58b94(uVar7);
  puVar4 = puVar5;
  func_0x000107c6142c(puVar6);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x000107c5fadc(uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c547a4(puVar3);
    func_0x000107c61170(uVar7);
  }
  uVar2 = param_1;
  func_0x000107c4d3f4();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar4);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c4d3f4(param_1);
      func_0x000107c61180();
      func_0x000107c56958(puVar3);
      func_0x000107c61170(param_1);
    }
  }
  puVar5 = PTR_PTR_1126ada00;
  func_0x000107c610f8(PTR_PTR_1126ada00);
  func_0x000107c453e4();
  func_0x000107c5379c();
  func_0x000107c53b58(puVar5);
  if (param_2 != (undefined *)0x0) {
    func_0x000107c3ef0c();
    func_0x000107c61180();
    if (param_2 != (undefined *)0x0) goto LAB_103c4cf90;
  }
  param_2 = (undefined *)0x0;
LAB_103c4cf90:
  func_0x000107c52f0c(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  return puVar5;
}



/* Entry: 103c4aea4; end: 103c4af03; +[DynamicScriptUtil mergeFormDataToAutofillFormInfo:autofillFormInfo:] */

void FUN_103c4aea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  FUN_103c4c9d8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c4af04; end: 103c4af07;  */

undefined * FUN_103c4af04(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x000107c43634();
  func_0x000107c61180();
  uVar7 = param_2;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(param_2);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar1 != 0) {
      puVar3 = (undefined *)0x0;
      uVar7 = 1;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar2 = *(ulong *)(puVar3 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar3);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6d614e7473726966;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe900000000000065;
    }
  }
  uVar2 = param_1;
  func_0x000107c4aa24();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x656d614e7473616c;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe800000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6c69616d65;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe500000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6d754e656e6f6870;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xeb00000000726562;
    }
  }
  uVar2 = param_1;
  func_0x000107c3d9a4();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x73736572646461;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe700000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c3fa10();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x79746963;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe400000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6574617473;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe500000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c4ebd8();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6c6174736f70;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe600000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c40d84();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x626d754e64726163;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xea00000000007265;
    }
  }
  uVar2 = param_1;
  func_0x000107c40d7c();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6974617269707865;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xee00657461446e6f;
    }
  }
  uVar2 = param_1;
  func_0x000107c4d3f4();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x61436e4f656d616e;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xea00000000006472;
    }
  }
  func_0x000107c40d78();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar7);
    uVar1 = uVar1 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar1 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000d182c(puVar6,uVar1 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = 0x767663;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = 0xe300000000000000;
    }
  }
  return puVar6;
}



/* Entry: 103c4af08; end: 103c4af5b; +[DynamicScriptUtil getNoneEmptyFieldsFromFormData:] */

void FUN_103c4af08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103c4cfd0();
  func_0x000107c61170(param_3);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c4af5c; end: 103c4b00b;  */

void FUN_103c4af5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_103c4c844();
  uVar4 = *param_4;
  uVar2 = uVar4;
  func_0x000107c61558();
  *param_4 = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *param_4 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar4,uVar2 + 1,1,uVar3);
    *param_4 = uVar4;
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 103c4b00c; end: 103c4b06b; +[DynamicScriptUtil convertProtoEnumArrayToStringArray:] */

void FUN_103c4b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103c4ad28();
  func_0x000107c61170(param_3);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c4b06c; end: 103c4b0a3; +[DynamicScriptUtil convertFormFieldTypeToString:] */

void FUN_103c4b06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103c4c844(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c4b0a4; end: 103c4b0b3;  */

uint FUN_103c4b0a4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar2 = lVar1;
  func_0x000100403a6c();
  func_0x000107c61408(lVar1 + 0x20,8,PTR___sSSN_11034da80);
  FUN_103c4b410(param_1,lVar2);
  func_0x000107c6142c(lVar2);
  return ((uint)param_1 ^ 0xffffffff) & 1;
}



/* Entry: 103c4b0b4; end: 103c4b0d3; +[DynamicScriptUtil spectrumAutofillFormDetectedContactFields:] */

uint FUN_103c4b0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar3 = lVar2;
  func_0x000100403a6c();
  func_0x000107c61408(lVar2 + 0x20,8,puVar1);
  uVar4 = param_3;
  FUN_103c4b410(param_3,lVar3);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(lVar3);
  return ((uint)uVar4 ^ 0xffffffff) & 1;
}



/* Entry: 103c4b0d4; end: 103c4b15b;  */

uint FUN_103c4b0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar2 = lVar1;
  func_0x000100403a6c();
  func_0x000107c61408(lVar1 + 0x20,param_3,PTR___sSSN_11034da80);
  FUN_103c4b410(param_1,lVar2);
  func_0x000107c6142c(lVar2);
  return ((uint)param_1 ^ 0xffffffff) & 1;
}



/* Entry: 103c4b15c; end: 103c4b16b; +[DynamicScriptUtil spectrumAutofillFormDetectedCreditCardFields:] */

uint FUN_103c4b15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar3 = lVar2;
  func_0x000100403a6c();
  func_0x000107c61408(lVar2 + 0x20,4,puVar1);
  uVar4 = param_3;
  FUN_103c4b410(param_3,lVar3);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(lVar3);
  return ((uint)uVar4 ^ 0xffffffff) & 1;
}



/* Entry: 103c4b16c; end: 103c4b33b;  */

uint FUN_103c4b16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar3 = lVar2;
  func_0x000100403a6c();
  func_0x000107c61408(lVar2 + 0x20,param_5,puVar1);
  uVar4 = param_3;
  FUN_103c4b410(param_3,lVar3);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(lVar3);
  return ((uint)uVar4 ^ 0xffffffff) & 1;
}



/* Entry: 103c4b33c; end: 103c4b33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103c4b33c(undefined8 ****param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  ppppuVar13 = param_2;
  func_0x000107c5ef14();
  lStack_a0 = *(long *)(lVar4 + -8);
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  ppppuVar5 = (undefined8 ****)0x0;
  puStack_a8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eb9c();
  ppuStack_d0 = ppppuVar5[-1];
  pppuStack_c8 = ppppuVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppuStack_d0[8]);
  uStack_d8 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
              (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR_PTR_1126d6d68;
  func_0x000107c610f8(PTR_PTR_1126d6d68);
  func_0x000107c453e4();
  ppppuVar5 = param_2;
  func_0x000107c4213c();
  func_0x000107c61180();
  ppppuVar14 = ppppuVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar5);
  if (ppppuVar14 == (undefined8 ****)0x0) {
LAB_103c4ddb0:
    ppppuVar5 = (undefined8 ****)0x0;
    ppppuVar14 = (undefined8 ****)0xe000000000000000;
  }
  else {
    ppppuVar5 = ppppuVar14;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar14);
    if (ppppuVar5 == (undefined8 ****)0x0) goto LAB_103c4ddb0;
    pppuStack_90 = (undefined8 ****)0x0;
    pppuStack_88 = (undefined8 ****)0x0;
    ppppuVar13 = &pppuStack_90;
    func_0x000107c5fae8(ppppuVar5);
    func_0x000107c61170(ppppuVar5);
    ppppuVar5 = (undefined8 ****)pppuStack_90;
    ppppuVar14 = (undefined8 ****)pppuStack_88;
    if ((undefined8 ****)pppuStack_88 == (undefined8 ****)0x0) goto LAB_103c4ddb0;
  }
  ppppuVar7 = param_2;
  func_0x000107c42498();
  func_0x000107c61180();
  ppppuVar12 = ppppuVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar7);
  if (ppppuVar12 == (undefined8 ****)0x0) {
LAB_103c4de28:
    ppppuVar7 = param_2;
    func_0x000107c42498();
    func_0x000107c61180();
    ppppuVar12 = ppppuVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar7);
    if (ppppuVar12 != (undefined8 ****)0x0) {
      ppppuVar7 = ppppuVar12;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(ppppuVar12);
      if (ppppuVar7 != (undefined8 ****)0x0) {
        ppppuVar12 = ppppuVar7;
        func_0x000107c4e4d8();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar7);
        if (ppppuVar12 != (undefined8 ****)0x0) goto LAB_103c4de98;
      }
    }
    pppuStack_b0 = (undefined8 ****)0x0;
    ppppuVar13 = (undefined8 ****)0xe000000000000000;
  }
  else {
    ppppuVar7 = ppppuVar12;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar12);
    if (ppppuVar7 == (undefined8 ****)0x0) goto LAB_103c4de28;
    ppppuVar12 = ppppuVar7;
    func_0x000107c4248c();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar7);
    if (ppppuVar12 == (undefined8 ****)0x0) goto LAB_103c4de28;
LAB_103c4de98:
    ppppuVar7 = ppppuVar12;
    func_0x000107c5faec();
    pppuStack_b0 = ppppuVar7;
    func_0x000107c61170(ppppuVar12);
  }
  func_0x000107c4e6c4();
  func_0x000107c61180();
  ppppuVar7 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  pppuStack_b8 = ppppuVar13;
  if (ppppuVar7 == (undefined8 ****)0x0) {
LAB_103c4df40:
    pppuStack_c0 = (undefined8 ****)0x0;
    ppppuVar12 = (undefined8 ****)0xe000000000000000;
  }
  else {
    ppppuVar13 = ppppuVar7;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar7);
    if (ppppuVar13 == (undefined8 ****)0x0) goto LAB_103c4df40;
    ppppuVar7 = *(undefined8 *****)((long)ppppuVar13 + _DAT_1130937d8);
    ppppuVar12 = (undefined8 ****)((undefined8 *)((long)ppppuVar13 + _DAT_1130937d8))[1];
    func_0x000107c61434(ppppuVar12);
    func_0x000107c61170(ppppuVar13);
    pppuStack_c0 = ppppuVar7;
    if (ppppuVar12 == (undefined8 ****)0x0) goto LAB_103c4df40;
  }
  ppppuVar7 = ppppuVar5;
  ppppuVar10 = ppppuVar14;
  FUN_103c4daf0();
  ppppuVar13 = (undefined8 ****)0x0;
  if (ppppuVar10 != (undefined8 ****)0x0) {
    ppppuVar13 = ppppuVar7;
  }
  ppppuVar7 = (undefined8 ****)0xe000000000000000;
  if (ppppuVar10 != (undefined8 ****)0x0) {
    ppppuVar7 = ppppuVar10;
  }
  ppppuVar8 = param_1;
  func_0x000107c43634();
  func_0x000107c61180();
  if (ppppuVar8 == (undefined8 ****)0x0) {
    func_0x000107c61434(ppppuVar7);
    ppppuVar9 = ppppuVar13;
    ppppuVar10 = ppppuVar7;
  }
  else {
    ppppuVar9 = ppppuVar8;
    func_0x000107c5faec();
    func_0x000107c61170(ppppuVar8);
  }
  ppppuVar8 = ppppuVar10;
  func_0x000107c5fadc(ppppuVar9);
  func_0x000107c6142c(ppppuVar10);
  func_0x000107c54a50(puVar6);
  func_0x000107c61170(ppppuVar9);
  ppppuVar10 = param_1;
  func_0x000107c4aa24();
  func_0x000107c61180();
  if (ppppuVar10 == (undefined8 ****)0x0) {
    ppppuVar10 = ppppuVar5;
    func_0x000107c5fb5c(ppppuVar5,ppppuVar14);
    ppppuVar9 = ppppuVar13;
    ppppuVar8 = ppppuVar7;
    func_0x000107c5fb5c();
    if ((long)ppppuVar9 < (long)ppppuVar10) {
      func_0x000107c5fb5c(ppppuVar13,ppppuVar7);
      func_0x000107c6142c(ppppuVar7);
      ppppuVar7 = ppppuVar14;
      func_0x0001011a7878();
      func_0x000107c6142c(ppppuVar14);
      uVar1 = uStack_d8;
      pppuStack_90 = ppppuVar13;
      pppuStack_88 = ppppuVar5;
      pppuStack_80 = ppppuVar7;
      uStack_78 = param_4;
      func_0x000107c5eb68(uStack_d8);
      func_0x000101478db0();
      uVar11 = uVar1;
      ppppuVar7 = (undefined8 ****)PTR___sSsN_11034e1d8;
      func_0x000107c601f0(uVar1,PTR___sSsN_11034e1d8,ppppuVar14);
      ppppuVar8 = (undefined8 ****)pppuStack_c8;
      (*(code *)ppuStack_d0[1])(uVar1);
      func_0x000107c6142c(param_4);
      uVar1 = uVar11 & 0xffffffffffff;
      if (((ulong)ppppuVar7 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)ppppuVar7 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        ppppuVar8 = ppppuVar7;
        func_0x000107c5fadc(uVar11);
        func_0x000107c6142c(ppppuVar7);
        func_0x000107c55a5c(puVar6);
        func_0x000107c61170(uVar11);
        goto LAB_103c4e128;
      }
    }
    else {
      func_0x000107c6142c(ppppuVar14);
    }
    func_0x000107c6142c(ppppuVar7);
  }
  else {
    func_0x000107c6142c(ppppuVar14);
    func_0x000107c6142c(ppppuVar7);
    func_0x000107c55a5c(puVar6);
    func_0x000107c61170(ppppuVar10);
  }
LAB_103c4e128:
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  ppppuVar14 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  if (ppppuVar14 != (undefined8 ****)0x0) {
    ppppuVar5 = ppppuVar14;
    func_0x000107c5faec();
    func_0x000107c6142c(ppppuVar12);
    func_0x000107c61170(ppppuVar14);
    ppppuVar12 = ppppuVar8;
  }
  ppppuVar14 = (undefined8 ****)pppuStack_b0;
  ppppuVar13 = ppppuVar12;
  func_0x000107c5fadc(ppppuVar5);
  func_0x000107c6142c(ppppuVar12);
  func_0x000107c57360(puVar6);
  func_0x000107c61170(ppppuVar5);
  ppppuVar5 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  ppppuVar7 = (undefined8 ****)pppuStack_b8;
  if (ppppuVar5 != (undefined8 ****)0x0) {
    ppppuVar14 = ppppuVar5;
    func_0x000107c5faec();
    func_0x000107c6142c(pppuStack_b8);
    func_0x000107c61170(ppppuVar5);
    ppppuVar7 = ppppuVar13;
  }
  ppppuVar13 = ppppuVar7;
  func_0x000107c5fadc(ppppuVar14);
  func_0x000107c6142c(ppppuVar7);
  func_0x000107c54440(puVar6);
  func_0x000107c61170(ppppuVar14);
  ppppuVar5 = param_1;
  func_0x000107c4ebd8(param_1);
  func_0x000107c61180();
  func_0x000107c57618(puVar6);
  func_0x000107c61170(ppppuVar5);
  ppppuVar5 = param_1;
  func_0x000107c3d9a8();
  func_0x000107c61180();
  if (ppppuVar5 == (undefined8 ****)0x0) {
    ppppuVar14 = (undefined8 ****)0x0;
    ppppuVar5 = (undefined8 ****)0xe000000000000000;
    ppppuVar7 = ppppuVar13;
  }
  else {
    ppppuVar14 = ppppuVar5;
    func_0x000107c5faec();
    ppppuVar7 = ppppuVar13;
    func_0x000107c61170(ppppuVar5);
    ppppuVar5 = ppppuVar13;
  }
  ppppuVar13 = param_1;
  pppuStack_90 = ppppuVar14;
  pppuStack_88 = ppppuVar5;
  func_0x000107c3d9ac();
  func_0x000107c61180();
  if (ppppuVar13 != (undefined8 ****)0x0) {
    ppppuVar5 = ppppuVar13;
    func_0x000107c5faec();
    func_0x000107c61170(ppppuVar13);
    uStack_70 = 0x20;
    uStack_68 = 0xe100000000000000;
    func_0x000107c5fb78(ppppuVar5,ppppuVar7);
    func_0x000107c6142c(ppppuVar7);
    uVar3 = uStack_68;
    func_0x000107c5fb78(uStack_70,uStack_68);
    func_0x000107c6142c(uVar3);
    ppppuVar5 = (undefined8 ****)pppuStack_88;
    ppppuVar14 = (undefined8 ****)pppuStack_90;
  }
  ppppuVar13 = ppppuVar5;
  func_0x000107c5fadc(ppppuVar14);
  func_0x000107c52504(puVar6);
  func_0x000107c61170(ppppuVar14);
  ppppuVar14 = param_1;
  func_0x000107c3fa10(param_1);
  func_0x000107c61180();
  func_0x000107c53418(puVar6);
  func_0x000107c61170(ppppuVar14);
  func_0x000107c5bcc0(param_1);
  func_0x000107c61180();
  func_0x000107c59840(puVar6);
  func_0x000107c61170(param_1);
  puVar2 = puStack_a8;
  func_0x000107c5ef04(puStack_a8);
  func_0x000107c5eed8();
  if (ppppuVar13 == (undefined8 ****)0x0) {
    param_1 = (undefined8 ****)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(ppppuVar13);
  }
  (**(code **)(lStack_a0 + 8))(puVar2,lStack_98);
  func_0x000107c53a1c(puVar6);
  func_0x000107c6142c(ppppuVar5);
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 103c4b340; end: 103c4b39f; +[DynamicScriptUtil getDefaultUserAutofillInfoWithPreferences:userInfoServices:] */

void FUN_103c4b340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_103c4dc84(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c4b3a0; end: 103c4b3db; -[DynamicScriptUtil init] */

void FUN_103c4b3a0(undefined8 param_1)

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



/* Entry: 103c4b3dc; end: 103c4b40f;  */

void FUN_103c4b3dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c4b410; end: 103c4b75b;  */

undefined8 FUN_103c4b410(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 1;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (*(long *)(param_2 + 0x10) != 0) {
        puVar1 = (ulong *)(param_1 + 0x20 + lVar10 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61434(uVar3);
        puVar5 = auStack_a8;
        func_0x000107c5fb58(puVar5,uVar2,uVar3);
        func_0x000107c606a8();
        uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar8 = (ulong)puVar5 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
            uVar6 = *puVar1;
            uVar4 = puVar1[1];
            if ((uVar6 == uVar2 && uVar4 == uVar3) ||
               (func_0x000107c605b8(uVar6,uVar4,uVar2,uVar3,0), (uVar6 & 1) != 0)) {
              func_0x000107c6142c(uVar3);
              return 0;
            }
            uVar8 = uVar8 + 1 & ~uVar7;
          } while ((*(ulong *)(param_2 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(uVar3);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar9);
  }
  return 1;
}



/* Entry: 103c4b75c; end: 103c4b84b;  */

undefined8 FUN_103c4b75c(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_88 [9];
  
  lVar5 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar5 + 0x28));
  uVar4 = param_2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      if ((int)uVar3 == (int)param_2) {
        uVar1 = 0;
        goto LAB_103c4b830;
      }
      uVar4 = uVar4 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  alStack_88[0] = *unaff_x20;
  FUN_103c4ba30(param_2,uVar4,lVar5);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
  uVar3 = param_2;
LAB_103c4b830:
  *param_1 = uVar3;
  return uVar1;
}



/* Entry: 103c4b84c; end: 103c4ba2f;  */

void FUN_103c4b84c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = 0;
  func_0x000107c5ebbc();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar5 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      func_0x000103c4c008();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x000103c4bb60(uVar5 + 1);
    }
    else {
      FUN_103c4c31c();
    }
    lVar9 = *unaff_x20;
    param_2 = *(ulong *)(lVar9 + 0x28);
    uVar3 = 0x112ffb280;
    FUN_103c4e424(0x112ffb280,PTR___s10Foundation12URLQueryItemVSHAAMc_110350500);
    func_0x000107c5fa4c(param_2,lVar2,uVar3);
    uVar5 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar5 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar9 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      lVar6 = *(long *)(lVar8 + 0x48);
      pcVar1 = *(code **)(lVar8 + 0x10);
      do {
        (*pcVar1)(puVar7,*(long *)(lVar9 + 0x30) + lVar6 * param_2,lVar2);
        uVar3 = 0x112ffb288;
        FUN_103c4e424(0x112ffb288,PTR___s10Foundation12URLQueryItemVSQAAMc_110350508);
        puVar4 = puVar7;
        func_0x000107c5fab8(puVar7,param_1,lVar2,uVar3);
        (**(code **)(lVar8 + 8))(puVar7,lVar2);
        if (((ulong)puVar4 & 1) != 0) {
          func_0x000107c60620(lVar2);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4ba30);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar5;
      } while ((*(ulong *)(lVar9 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar6 = *unaff_x20;
  lVar9 = lVar6 + (param_2 >> 6) * 8;
  *(ulong *)(lVar9 + 0x38) = *(ulong *)(lVar9 + 0x38) | 1L << (param_2 & 0x3f);
  (**(code **)(lVar8 + 0x20))
            (*(long *)(lVar6 + 0x30) + *(long *)(lVar8 + 0x48) * param_2,param_1,lVar2);
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4ba24);
  (*pcVar1)();
}



/* Entry: 103c4ba30; end: 103c4bb5f;  */

void FUN_103c4ba30(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_103c4c1dc();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x000103c4bdf8(uVar3 + 1);
    }
    else {
      func_0x000103c4c5f0();
    }
    lVar4 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == (int)param_1) {
          func_0x000107c60620(&UNK_1107a1918);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4bb60);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c4bb50);
  (*pcVar1)();
}



/* Entry: 103c4bb60; end: 103c4c1db;  */

void FUN_103c4bb60(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar4 = 0;
  func_0x000107c5ebbc();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112ffb290;
  func_0x0001000285a8(0x112ffb290,&UNK_10dc698f0);
  lVar6 = lVar15;
  func_0x000107c602e0(lVar15,lVar1,0,uVar5);
  if (*(long *)(lVar15 + 0x10) == 0) {
    func_0x000107c61574(lVar15);
LAB_103c4bdcc:
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar15 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar16 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar14 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4bdf4);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          func_0x000107c61574(lVar15);
          goto LAB_103c4bdcc;
        }
        uVar13 = ((ulong *)(lVar15 + 0x38))[lVar14];
        lVar16 = lVar16 + 1;
      } while (uVar13 == 0);
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar16;
    }
    lVar16 = *(long *)(lVar7 + 0x48);
    (**(code **)(lVar7 + 0x10))
              (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(long *)(lVar15 + 0x30) + lVar16 * (LZCOUNT(uVar8) | lVar14 << 6),lVar4);
    uVar12 = *(ulong *)(lVar6 + 0x28);
    uVar5 = 0x112ffb280;
    FUN_103c4e424(0x112ffb280,PTR___s10Foundation12URLQueryItemVSHAAMc_110350500);
    func_0x000107c5fa4c(uVar12,lVar4,uVar5);
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar11 >> 6;
      do {
        uVar12 = uVar9 + 1;
        if ((uVar12 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4bdf8);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar12 != uVar8) {
          uVar9 = uVar12;
        }
        bVar2 = (bool)(uVar12 == uVar8 | bVar2);
        uVar12 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    (**(code **)(lVar7 + 0x20))
              (*(long *)(lVar6 + 0x30) + uVar8 * lVar16,
               &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar16 = lVar14;
  } while( true );
}



/* Entry: 103c4c1dc; end: 103c4c31b;  */

void FUN_103c4c1dc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112ffb278,&UNK_10dc698e8);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103c4c31c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_103c4c2fc;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_103c4c2fc:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 103c4c31c; end: 103c4c843;  */

void FUN_103c4c31c(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112ffb290;
  func_0x0001000285a8(0x112ffb290,&UNK_10dc698f0);
  lVar5 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar4);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_103c4c5bc:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar15 = (ulong *)(lVar12 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar17 = uVar17 & *puVar15;
  lVar1 = lVar5 + 0x38;
  lVar14 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103c4c5ec);
          (*pcVar8)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar15 = -1L << (uVar17 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_103c4c5bc;
        }
        uVar17 = puVar15[lVar16];
        lVar14 = lVar14 + 1;
      } while (uVar17 == 0);
      uVar7 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar7 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar14;
    }
    lVar14 = *(long *)(lVar6 + 0x48);
    pcVar8 = *(code **)(lVar6 + 0x20);
    (*pcVar8)(&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
              *(long *)(lVar12 + 0x30) + lVar14 * (LZCOUNT(uVar7) | lVar16 << 6),lVar3);
    uVar13 = *(ulong *)(lVar5 + 0x28);
    uVar4 = 0x112ffb280;
    FUN_103c4e424(0x112ffb280,PTR___s10Foundation12URLQueryItemVSHAAMc_110350500);
    func_0x000107c5fa4c(uVar13,lVar3,uVar4);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar13 = uVar13 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar13 >> 6;
    uVar7 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar13 = uVar9 + 1;
        if ((uVar13 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103c4c5f0);
          (*pcVar8)();
        }
        uVar9 = 0;
        if (uVar13 != uVar7) {
          uVar9 = uVar13;
        }
        bVar2 = (bool)(uVar13 == uVar7 | bVar2);
        uVar13 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    (*pcVar8)(*(long *)(lVar5 + 0x30) + uVar7 * lVar14,
              &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar14 = lVar16;
  } while( true );
}



/* Entry: 103c4c844; end: 103c4c99b;  */

undefined1  [16] FUN_103c4c844(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  
  uVar2 = 0xe500000000000000;
  uVar1 = 0x6c69616d65;
  switch(param_1) {
  case 1:
    break;
  case 2:
    auVar3._8_8_ = 0xe900000000000065;
    auVar3._0_8_ = 0x6d614e7473726966;
    return auVar3;
  case 3:
    auVar7._8_8_ = 0xe800000000000000;
    auVar7._0_8_ = 0x656d614e7473616c;
    return auVar7;
  case 4:
    auVar8._8_8_ = 0xeb00000000726562;
    auVar8._0_8_ = 0x6d754e656e6f6870;
    return auVar8;
  case 5:
    auVar5._8_8_ = 0xe700000000000000;
    auVar5._0_8_ = 0x73736572646461;
    return auVar5;
  case 6:
    auVar10._8_8_ = 0xe400000000000000;
    auVar10._0_8_ = 0x79746963;
    return auVar10;
  case 7:
    auVar11._8_8_ = 0xe500000000000000;
    auVar11._0_8_ = 0x6574617473;
    return auVar11;
  case 8:
    auVar9._8_8_ = 0xe600000000000000;
    auVar9._0_8_ = 0x6c6174736f70;
    return auVar9;
  case 9:
    auVar13._8_8_ = 0xea00000000007265;
    auVar13._0_8_ = 0x626d754e64726163;
    return auVar13;
  case 10:
    auVar6._8_8_ = 0xee00657461446e6f;
    auVar6._0_8_ = 0x6974617269707865;
    return auVar6;
  case 0xb:
    auVar12._8_8_ = 0xea00000000006472;
    auVar12._0_8_ = 0x61436e4f656d616e;
    return auVar12;
  case 0xc:
    auVar4._8_8_ = 0xe300000000000000;
    auVar4._0_8_ = 0x767663;
    return auVar4;
  default:
    uVar1 = 0;
    uVar2 = 0xe000000000000000;
  }
  auVar14._8_8_ = uVar2;
  auVar14._0_8_ = uVar1;
  return auVar14;
}



/* Entry: 103c4c99c; end: 103c4c9bb;  */

void FUN_103c4c99c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c4c9bc; end: 103c4c9d7;  */

void FUN_103c4c9bc(long param_1,long param_2)

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



/* Entry: 103c4c9d8; end: 103c4cfcf;  */

undefined * FUN_103c4c9d8(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar1 = param_2;
  puVar5 = param_2;
  func_0x000107c402f8();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d6d68;
    func_0x000107c610f8(PTR_PTR_1126d6d68);
    func_0x000107c453e4();
  }
  uVar2 = param_1;
  func_0x000107c43634();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c43634(param_1);
      func_0x000107c61180();
      func_0x000107c54a50(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4aa24();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4aa24(param_1);
      func_0x000107c61180();
      func_0x000107c55a5c(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4248c(param_1);
      func_0x000107c61180();
      func_0x000107c54440(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4e6c0(param_1);
      func_0x000107c61180();
      func_0x000107c57360(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c3d9a4();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c3d9a4(param_1);
      func_0x000107c61180();
      func_0x000107c52504(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c3fa10();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c3fa10(param_1);
      func_0x000107c61180();
      func_0x000107c53418(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  puVar3 = puVar5;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar3 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar5);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c5bcc0(param_1);
      func_0x000107c61180();
      func_0x000107c59840(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x000107c4ebd8();
  func_0x000107c61180();
  puVar5 = puVar3;
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    puVar5 = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar3);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x000107c4ebd8(param_1);
      func_0x000107c61180();
      func_0x000107c57618(puVar1);
      func_0x000107c61170(uVar2);
    }
  }
  puVar3 = param_2;
  func_0x000107c40d80();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ad9f8;
    func_0x000107c610f8(PTR_PTR_1126ad9f8);
    func_0x000107c453e4();
  }
  uVar2 = param_1;
  func_0x000107c40d84();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar7 = 0;
    puVar5 = (undefined *)0xe000000000000000;
  }
  else {
    uVar7 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  puVar4 = puVar5;
  func_0x000103c58ad4(uVar7);
  puVar6 = puVar4;
  func_0x000107c6142c(puVar5);
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar4;
    func_0x000107c5fadc(uVar7);
    func_0x000107c6142c(puVar4);
    func_0x000107c53220(puVar3);
    func_0x000107c61170(uVar7);
  }
  uVar2 = param_1;
  func_0x000107c40d7c();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar7 = 0;
    puVar6 = (undefined *)0xe000000000000000;
  }
  else {
    uVar7 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  puVar5 = puVar6;
  func_0x000103c58b94(uVar7);
  puVar4 = puVar5;
  func_0x000107c6142c(puVar6);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x000107c5fadc(uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c547a4(puVar3);
    func_0x000107c61170(uVar7);
  }
  uVar2 = param_1;
  func_0x000107c4d3f4();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar7 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar4);
    uVar2 = uVar7 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c4d3f4(param_1);
      func_0x000107c61180();
      func_0x000107c56958(puVar3);
      func_0x000107c61170(param_1);
    }
  }
  puVar5 = PTR_PTR_1126ada00;
  func_0x000107c610f8(PTR_PTR_1126ada00);
  func_0x000107c453e4();
  func_0x000107c5379c();
  func_0x000107c53b58(puVar5);
  if (param_2 != (undefined *)0x0) {
    func_0x000107c3ef0c();
    func_0x000107c61180();
    if (param_2 != (undefined *)0x0) goto LAB_103c4cf90;
  }
  param_2 = (undefined *)0x0;
LAB_103c4cf90:
  func_0x000107c52f0c(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  return puVar5;
}



/* Entry: 103c4cfd0; end: 103c4d92f;  */

undefined * FUN_103c4cfd0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x000107c43634();
  func_0x000107c61180();
  uVar7 = param_2;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(param_2);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar1 != 0) {
      puVar3 = (undefined *)0x0;
      uVar7 = 1;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar2 = *(ulong *)(puVar3 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar3);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6d614e7473726966;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe900000000000065;
    }
  }
  uVar2 = param_1;
  func_0x000107c4aa24();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x656d614e7473616c;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe800000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6c69616d65;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe500000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6d754e656e6f6870;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xeb00000000726562;
    }
  }
  uVar2 = param_1;
  func_0x000107c3d9a4();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x73736572646461;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe700000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c3fa10();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x79746963;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe400000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6574617473;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe500000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c4ebd8();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6c6174736f70;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xe600000000000000;
    }
  }
  uVar2 = param_1;
  func_0x000107c40d84();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x626d754e64726163;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xea00000000007265;
    }
  }
  uVar2 = param_1;
  func_0x000107c40d7c();
  func_0x000107c61180();
  uVar1 = uVar7;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar7);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar1 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar7 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar1 = uVar7;
        func_0x0001000d182c(puVar6,uVar7,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x6974617269707865;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xee00657461446e6f;
    }
  }
  uVar2 = param_1;
  func_0x000107c4d3f4();
  func_0x000107c61180();
  uVar7 = uVar1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar7 = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar1);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(long *)(puVar6 + 0x10) + 1;
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar7,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar1 = uVar2 + 1;
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        uVar7 = uVar1;
        func_0x0001000d182c(puVar6,uVar1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = 0x61436e4f656d616e;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = 0xea00000000006472;
    }
  }
  func_0x000107c40d78();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar7);
    uVar1 = uVar1 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar1 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar3 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000d182c(puVar6,uVar1 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = 0x767663;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = 0xe300000000000000;
    }
  }
  return puVar6;
}



/* Entry: 103c4d930; end: 103c4da7f;  */

void FUN_103c4d930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = 0x112ffb280;
  FUN_103c4e424(0x112ffb280,PTR___s10Foundation12URLQueryItemVSHAAMc_110350500);
  lVar3 = lVar6;
  func_0x000107c5fe14(lVar6,lVar1,uVar2);
  if (lVar6 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar7 + 0x48);
    pcVar9 = *(code **)(lVar7 + 0x10);
    lStack_68 = lVar3;
    do {
      (*pcVar9)(lVar5 - extraout_x12_00,param_1,lVar1);
      (**(code **)(lVar7 + 0x20))(puVar4,lVar5 - extraout_x12_00,lVar1);
      func_0x000103c4b54c(lVar5,puVar4);
      (**(code **)(lVar7 + 8))(lVar5,lVar1);
      param_1 = param_1 + lVar8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 103c4da80; end: 103c4daef;  */

void FUN_103c4da80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x000103c4e3e4();
  lVar2 = lVar3;
  func_0x000107c5fe14(lVar3,&UNK_1107a1918,lVar1);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar2;
    do {
      FUN_103c4b75c(auStack_40,*puVar4);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 103c4daf0; end: 103c4dc83;  */

undefined1  [16] FUN_103c4daf0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    puVar2 = &UNK_1106ef008;
    func_0x000107c613fc(&UNK_1106ef008,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar3 = &UNK_1106ef030;
    func_0x000107c613fc(&UNK_1106ef030,0x20,7);
    puVar8 = (undefined8 *)(puVar3 + 0x10);
    *puVar8 = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0xe000000000000000;
    uVar6 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uStack_58 = 7;
    if (uVar6 == 0) {
      uStack_58 = 0xb;
    }
    uStack_58 = uStack_58 | uVar1 << 0x10;
    uStack_60 = 0xf;
    puVar4 = &UNK_1106ef058;
    uStack_78 = param_1;
    uStack_70 = param_2;
    func_0x000107c613fc(&UNK_1106ef058,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar3);
    uVar7 = 0x112d483b0;
    func_0x0001000285a8(0x112d483b0,&UNK_10d90f140);
    uVar9 = uVar7;
    func_0x000100e8b654();
    uVar5 = uVar9;
    func_0x000100eca688();
    func_0x000107c601f4(&uStack_60,2,FUN_103c4e464,puVar4,PTR___sSSN_11034da80,uVar7,uVar9,uVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61428(puVar8,&uStack_78,0,0);
    uVar7 = *puVar8;
    uVar9 = *(undefined8 *)(puVar3 + 0x18);
    func_0x000107c61434(uVar9);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 103c4dc84; end: 103c4e3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103c4dc84(undefined8 ****param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  ppppuVar13 = param_2;
  func_0x000107c5ef14();
  lStack_a0 = *(long *)(lVar4 + -8);
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  ppppuVar5 = (undefined8 ****)0x0;
  puStack_a8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eb9c();
  ppuStack_d0 = ppppuVar5[-1];
  pppuStack_c8 = ppppuVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppuStack_d0[8]);
  uStack_d8 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
              (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR_PTR_1126d6d68;
  func_0x000107c610f8(PTR_PTR_1126d6d68);
  func_0x000107c453e4();
  ppppuVar5 = param_2;
  func_0x000107c4213c();
  func_0x000107c61180();
  ppppuVar14 = ppppuVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar5);
  if (ppppuVar14 == (undefined8 ****)0x0) {
LAB_103c4ddb0:
    ppppuVar5 = (undefined8 ****)0x0;
    ppppuVar14 = (undefined8 ****)0xe000000000000000;
  }
  else {
    ppppuVar5 = ppppuVar14;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar14);
    if (ppppuVar5 == (undefined8 ****)0x0) goto LAB_103c4ddb0;
    pppuStack_90 = (undefined8 ****)0x0;
    pppuStack_88 = (undefined8 ****)0x0;
    ppppuVar13 = &pppuStack_90;
    func_0x000107c5fae8(ppppuVar5);
    func_0x000107c61170(ppppuVar5);
    ppppuVar5 = (undefined8 ****)pppuStack_90;
    ppppuVar14 = (undefined8 ****)pppuStack_88;
    if ((undefined8 ****)pppuStack_88 == (undefined8 ****)0x0) goto LAB_103c4ddb0;
  }
  ppppuVar7 = param_2;
  func_0x000107c42498();
  func_0x000107c61180();
  ppppuVar12 = ppppuVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar7);
  if (ppppuVar12 == (undefined8 ****)0x0) {
LAB_103c4de28:
    ppppuVar7 = param_2;
    func_0x000107c42498();
    func_0x000107c61180();
    ppppuVar12 = ppppuVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar7);
    if (ppppuVar12 != (undefined8 ****)0x0) {
      ppppuVar7 = ppppuVar12;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(ppppuVar12);
      if (ppppuVar7 != (undefined8 ****)0x0) {
        ppppuVar12 = ppppuVar7;
        func_0x000107c4e4d8();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar7);
        if (ppppuVar12 != (undefined8 ****)0x0) goto LAB_103c4de98;
      }
    }
    pppuStack_b0 = (undefined8 ****)0x0;
    ppppuVar13 = (undefined8 ****)0xe000000000000000;
  }
  else {
    ppppuVar7 = ppppuVar12;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar12);
    if (ppppuVar7 == (undefined8 ****)0x0) goto LAB_103c4de28;
    ppppuVar12 = ppppuVar7;
    func_0x000107c4248c();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar7);
    if (ppppuVar12 == (undefined8 ****)0x0) goto LAB_103c4de28;
LAB_103c4de98:
    ppppuVar7 = ppppuVar12;
    func_0x000107c5faec();
    pppuStack_b0 = ppppuVar7;
    func_0x000107c61170(ppppuVar12);
  }
  func_0x000107c4e6c4();
  func_0x000107c61180();
  ppppuVar7 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  pppuStack_b8 = ppppuVar13;
  if (ppppuVar7 == (undefined8 ****)0x0) {
LAB_103c4df40:
    pppuStack_c0 = (undefined8 ****)0x0;
    ppppuVar12 = (undefined8 ****)0xe000000000000000;
  }
  else {
    ppppuVar13 = ppppuVar7;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar7);
    if (ppppuVar13 == (undefined8 ****)0x0) goto LAB_103c4df40;
    ppppuVar7 = *(undefined8 *****)((long)ppppuVar13 + _DAT_1130937d8);
    ppppuVar12 = (undefined8 ****)((undefined8 *)((long)ppppuVar13 + _DAT_1130937d8))[1];
    func_0x000107c61434(ppppuVar12);
    func_0x000107c61170(ppppuVar13);
    pppuStack_c0 = ppppuVar7;
    if (ppppuVar12 == (undefined8 ****)0x0) goto LAB_103c4df40;
  }
  ppppuVar7 = ppppuVar5;
  ppppuVar10 = ppppuVar14;
  FUN_103c4daf0();
  ppppuVar13 = (undefined8 ****)0x0;
  if (ppppuVar10 != (undefined8 ****)0x0) {
    ppppuVar13 = ppppuVar7;
  }
  ppppuVar7 = (undefined8 ****)0xe000000000000000;
  if (ppppuVar10 != (undefined8 ****)0x0) {
    ppppuVar7 = ppppuVar10;
  }
  ppppuVar8 = param_1;
  func_0x000107c43634();
  func_0x000107c61180();
  if (ppppuVar8 == (undefined8 ****)0x0) {
    func_0x000107c61434(ppppuVar7);
    ppppuVar9 = ppppuVar13;
    ppppuVar10 = ppppuVar7;
  }
  else {
    ppppuVar9 = ppppuVar8;
    func_0x000107c5faec();
    func_0x000107c61170(ppppuVar8);
  }
  ppppuVar8 = ppppuVar10;
  func_0x000107c5fadc(ppppuVar9);
  func_0x000107c6142c(ppppuVar10);
  func_0x000107c54a50(puVar6);
  func_0x000107c61170(ppppuVar9);
  ppppuVar10 = param_1;
  func_0x000107c4aa24();
  func_0x000107c61180();
  if (ppppuVar10 == (undefined8 ****)0x0) {
    ppppuVar10 = ppppuVar5;
    func_0x000107c5fb5c(ppppuVar5,ppppuVar14);
    ppppuVar9 = ppppuVar13;
    ppppuVar8 = ppppuVar7;
    func_0x000107c5fb5c();
    if ((long)ppppuVar9 < (long)ppppuVar10) {
      func_0x000107c5fb5c(ppppuVar13,ppppuVar7);
      func_0x000107c6142c(ppppuVar7);
      ppppuVar7 = ppppuVar14;
      func_0x0001011a7878();
      func_0x000107c6142c(ppppuVar14);
      uVar1 = uStack_d8;
      pppuStack_90 = ppppuVar13;
      pppuStack_88 = ppppuVar5;
      pppuStack_80 = ppppuVar7;
      uStack_78 = param_4;
      func_0x000107c5eb68(uStack_d8);
      func_0x000101478db0();
      uVar11 = uVar1;
      ppppuVar7 = (undefined8 ****)PTR___sSsN_11034e1d8;
      func_0x000107c601f0(uVar1,PTR___sSsN_11034e1d8,ppppuVar14);
      ppppuVar8 = (undefined8 ****)pppuStack_c8;
      (*(code *)ppuStack_d0[1])(uVar1);
      func_0x000107c6142c(param_4);
      uVar1 = uVar11 & 0xffffffffffff;
      if (((ulong)ppppuVar7 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)ppppuVar7 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        ppppuVar8 = ppppuVar7;
        func_0x000107c5fadc(uVar11);
        func_0x000107c6142c(ppppuVar7);
        func_0x000107c55a5c(puVar6);
        func_0x000107c61170(uVar11);
        goto LAB_103c4e128;
      }
    }
    else {
      func_0x000107c6142c(ppppuVar14);
    }
    func_0x000107c6142c(ppppuVar7);
  }
  else {
    func_0x000107c6142c(ppppuVar14);
    func_0x000107c6142c(ppppuVar7);
    func_0x000107c55a5c(puVar6);
    func_0x000107c61170(ppppuVar10);
  }
LAB_103c4e128:
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  ppppuVar14 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  if (ppppuVar14 != (undefined8 ****)0x0) {
    ppppuVar5 = ppppuVar14;
    func_0x000107c5faec();
    func_0x000107c6142c(ppppuVar12);
    func_0x000107c61170(ppppuVar14);
    ppppuVar12 = ppppuVar8;
  }
  ppppuVar14 = (undefined8 ****)pppuStack_b0;
  ppppuVar13 = ppppuVar12;
  func_0x000107c5fadc(ppppuVar5);
  func_0x000107c6142c(ppppuVar12);
  func_0x000107c57360(puVar6);
  func_0x000107c61170(ppppuVar5);
  ppppuVar5 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  ppppuVar7 = (undefined8 ****)pppuStack_b8;
  if (ppppuVar5 != (undefined8 ****)0x0) {
    ppppuVar14 = ppppuVar5;
    func_0x000107c5faec();
    func_0x000107c6142c(pppuStack_b8);
    func_0x000107c61170(ppppuVar5);
    ppppuVar7 = ppppuVar13;
  }
  ppppuVar13 = ppppuVar7;
  func_0x000107c5fadc(ppppuVar14);
  func_0x000107c6142c(ppppuVar7);
  func_0x000107c54440(puVar6);
  func_0x000107c61170(ppppuVar14);
  ppppuVar5 = param_1;
  func_0x000107c4ebd8(param_1);
  func_0x000107c61180();
  func_0x000107c57618(puVar6);
  func_0x000107c61170(ppppuVar5);
  ppppuVar5 = param_1;
  func_0x000107c3d9a8();
  func_0x000107c61180();
  if (ppppuVar5 == (undefined8 ****)0x0) {
    ppppuVar14 = (undefined8 ****)0x0;
    ppppuVar5 = (undefined8 ****)0xe000000000000000;
    ppppuVar7 = ppppuVar13;
  }
  else {
    ppppuVar14 = ppppuVar5;
    func_0x000107c5faec();
    ppppuVar7 = ppppuVar13;
    func_0x000107c61170(ppppuVar5);
    ppppuVar5 = ppppuVar13;
  }
  ppppuVar13 = param_1;
  pppuStack_90 = ppppuVar14;
  pppuStack_88 = ppppuVar5;
  func_0x000107c3d9ac();
  func_0x000107c61180();
  if (ppppuVar13 != (undefined8 ****)0x0) {
    ppppuVar5 = ppppuVar13;
    func_0x000107c5faec();
    func_0x000107c61170(ppppuVar13);
    uStack_70 = 0x20;
    uStack_68 = 0xe100000000000000;
    func_0x000107c5fb78(ppppuVar5,ppppuVar7);
    func_0x000107c6142c(ppppuVar7);
    uVar3 = uStack_68;
    func_0x000107c5fb78(uStack_70,uStack_68);
    func_0x000107c6142c(uVar3);
    ppppuVar5 = (undefined8 ****)pppuStack_88;
    ppppuVar14 = (undefined8 ****)pppuStack_90;
  }
  ppppuVar13 = ppppuVar5;
  func_0x000107c5fadc(ppppuVar14);
  func_0x000107c52504(puVar6);
  func_0x000107c61170(ppppuVar14);
  ppppuVar14 = param_1;
  func_0x000107c3fa10(param_1);
  func_0x000107c61180();
  func_0x000107c53418(puVar6);
  func_0x000107c61170(ppppuVar14);
  func_0x000107c5bcc0(param_1);
  func_0x000107c61180();
  func_0x000107c59840(puVar6);
  func_0x000107c61170(param_1);
  puVar2 = puStack_a8;
  func_0x000107c5ef04(puStack_a8);
  func_0x000107c5eed8();
  if (ppppuVar13 == (undefined8 ****)0x0) {
    param_1 = (undefined8 ****)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(ppppuVar13);
  }
  (**(code **)(lStack_a0 + 8))(puVar2,lStack_98);
  func_0x000107c53a1c(puVar6);
  func_0x000107c6142c(ppppuVar5);
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 103c4e3c4; end: 103c4e423;  */

void FUN_103c4e3c4(void)

{
  func_0x000107c61168(&PTR_PTR_112949060);
  return;
}



/* Entry: 103c4e424; end: 103c4e463;  */

void FUN_103c4e424(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5ebbc(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103c4e464; end: 103c4e487;  */

void FUN_103c4e464(void)

{
  func_0x000103c4b214();
  return;
}



/* Entry: 103c4e488; end: 103c4ee2b;  */

void FUN_103c4e488(undefined8 param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long lVar21;
  undefined8 unaff_x20;
  undefined *puVar22;
  undefined1 *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined *apuStack_b8 [9];
  undefined *puStack_70;
  
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar23 = &stack0xfffffffffffffed0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = (long)puVar23 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5ebbc();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  uVar25 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = uVar25 - extraout_x12_00;
  lVar6 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar26 - extraout_x8_01;
  lVar5 = 0;
  func_0x000107c5ec24();
  lVar27 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  puVar22 = (undefined *)(lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ebe4(lVar21);
  lVar6 = lVar21;
  (**(code **)(lVar27 + 0x30))(lVar21,1,lVar5);
  if ((int)lVar6 == 1) {
    FUN_103c4f754(lVar21,0x112d4b5b0,&UNK_10d912140);
    lVar6 = 0;
    func_0x000107c5ede0();
    pcVar18 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  }
  else {
    puVar7 = puVar22;
    (**(code **)(lVar27 + 0x20))(puVar22,lVar21,lVar5);
    func_0x000107c5ebc4();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) {
      puVar2 = puVar7;
    }
    lVar6 = *(long *)(puVar2 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar6 != 0) {
      apuStack_b8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar6,0);
      puVar9 = puVar2 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff));
      lVar21 = *(long *)(lVar17 + 0x48);
      pcVar18 = *(code **)(lVar17 + 0x10);
      do {
        puVar7 = apuStack_b8[0];
        lVar8 = lVar26;
        puVar13 = puVar9;
        (*pcVar18)(lVar26,puVar9,lVar4);
        func_0x000107c5ebb4();
        (**(code **)(lVar17 + 8))(lVar26,lVar4);
        uVar19 = *(ulong *)(puVar7 + 0x10);
        apuStack_b8[0] = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
          func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar19 + 1,1);
        }
        *(ulong *)(apuStack_b8[0] + 0x10) = uVar19 + 1;
        *(long *)(apuStack_b8[0] + uVar19 * 0x10 + 0x20) = lVar8;
        *(undefined **)(apuStack_b8[0] + uVar19 * 0x10 + 0x28) = puVar13;
        puVar9 = puVar9 + lVar21;
        lVar6 = lVar6 + -1;
        puVar7 = apuStack_b8[0];
      } while (lVar6 != 0);
    }
    puVar9 = puVar7;
    func_0x000100403a6c();
    func_0x000107c6142c(puVar7);
    lVar6 = *(long *)(param_2 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar6 != 0) {
      lVar21 = 0;
      uVar19 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
      lVar26 = *(long *)(lVar17 + 0x48);
      pcVar18 = *(code **)(lVar17 + 0x10);
      do {
        uVar15 = param_2 + uVar19 + lVar26 * lVar21;
        uVar20 = uVar25;
        (*pcVar18)(uVar25,uVar15,lVar4);
        func_0x000107c5ebb8();
        if (uVar15 == 0) {
LAB_103c4e7d0:
          (**(code **)(lVar17 + 8))(uVar25,lVar4);
        }
        else {
          uVar10 = uVar15;
          uVar16 = uVar15;
          func_0x000107c6142c();
          uVar20 = uVar20 & 0xffffffffffff;
          if ((uVar15 & 0x2000000000000000) != 0) {
            uVar20 = uVar15 >> 0x38 & 0xf;
          }
          if (uVar20 == 0) goto LAB_103c4e7d0;
          func_0x000107c5ebb4();
          if (*(long *)(puVar9 + 0x10) != 0) {
            func_0x000107c6068c(apuStack_b8,*(undefined8 *)(puVar9 + 0x28));
            ppuVar11 = apuStack_b8;
            func_0x000107c5fb58(ppuVar11,uVar10,uVar16);
            func_0x000107c606a8();
            uVar20 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
            uVar15 = (ulong)ppuVar11 & (uVar20 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar9 + (uVar15 >> 6) * 8 + 0x38) >> (uVar15 & 0x3f) & 1) != 0) {
              do {
                puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar15 * 0x10);
                uVar12 = *puVar1;
                uVar3 = puVar1[1];
                if ((uVar12 == uVar10 && uVar3 == uVar16) ||
                   (func_0x000107c605b8(uVar12,uVar3,uVar10,uVar16,0), (uVar12 & 1) != 0)) {
                  func_0x000107c6142c(uVar16);
                  if ((param_3 & 1) != 0) goto LAB_103c4e8e4;
                  goto LAB_103c4e7d0;
                }
                uVar15 = uVar15 + 1 & ~uVar20;
              } while ((*(ulong *)(puVar9 + (uVar15 >> 6) * 8 + 0x38) >> (uVar15 & 0x3f) & 1) != 0);
            }
          }
          func_0x000107c6142c(uVar16);
LAB_103c4e8e4:
          puVar13 = puVar7;
          func_0x000107c61558();
          puStack_70 = puVar7;
          if (((ulong)puVar13 & 1) == 0) {
            func_0x000103094ed4(0,*(long *)(puVar7 + 0x10) + 1,1);
          }
          uVar20 = *(ulong *)(puStack_70 + 0x10);
          if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar20) {
            func_0x000103094ed4(1 < *(ulong *)(puStack_70 + 0x18),uVar20 + 1,1);
          }
          puVar7 = puStack_70;
          *(ulong *)(puStack_70 + 0x10) = uVar20 + 1;
          (**(code **)(lVar17 + 0x20))(puStack_70 + uVar20 * lVar26 + uVar19,uVar25,lVar4);
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != lVar6);
    }
    func_0x000107c6142c(puVar9);
    apuStack_b8[0] = puVar2;
    func_0x0001016fc344(puVar7);
    func_0x000107c5ebc8(apuStack_b8[0]);
    func_0x000107c5ebe8(lVar24);
    (**(code **)(lVar27 + 8))(puVar22,lVar5);
    func_0x0001001021cc(lVar24,puVar23);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar4 = *(long *)(lVar6 + -8);
    pcVar18 = *(code **)(lVar4 + 0x30);
    puVar14 = puVar23;
    (*pcVar18)(puVar23,1,lVar6);
    if ((int)puVar14 == 1) {
      (**(code **)(lVar4 + 0x10))(param_1,unaff_x20,lVar6);
      puVar14 = puVar23;
      (*pcVar18)(puVar23,1,lVar6);
      if ((int)puVar14 == 1) {
        return;
      }
      FUN_103c4f754(puVar23,0x112d36580,&UNK_10d9016d0);
      return;
    }
    pcVar18 = *(code **)(lVar4 + 0x20);
  }
  (*pcVar18)(param_1);
  return;
}



/* Entry: 103c4ee2c; end: 103c4efd7;  */

uint FUN_103c4ee2c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar4 = 0;
  func_0x000107c5edbc();
  if (param_2 != 0) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar2 != 0) && (uVar2 = param_1, uVar3 = param_2, func_0x000107c5edbc(), uVar3 != 0)) {
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uStack_50 = param_1;
        uStack_48 = param_2;
        uStack_40 = uVar2;
        uStack_38 = uVar3;
        func_0x000100e8b654();
        func_0x000107c6022c(&uStack_50,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar2,uVar2);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(param_2);
        goto LAB_103c4eedc;
      }
      func_0x000107c6142c(param_2);
      param_2 = uVar3;
    }
    func_0x000107c6142c(param_2);
  }
  uVar4 = 0;
LAB_103c4eedc:
  return uVar4 & 1;
}



/* Entry: 103c4efd8; end: 103c4f753;  */

uint FUN_103c4efd8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *puVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  
  lVar1 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = puVar3 + -extraout_x12;
  lVar1 = 0;
  func_0x000107c5ec24();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar8 - extraout_x12_00;
  func_0x000107c5ebe4(puVar11);
  pcVar12 = *(code **)(lVar13 + 0x30);
  puVar2 = puVar11;
  (*pcVar12)(puVar11,1,lVar1);
  if ((int)puVar2 != 1) {
    pcVar14 = *(code **)(lVar13 + 0x20);
    (*pcVar14)(lVar7,puVar11,lVar1);
    func_0x000107c5ebe4(puVar3,param_1,0);
    puVar2 = puVar3;
    (*pcVar12)(puVar3,1,lVar1);
    if ((int)puVar2 != 1) {
      puVar2 = puVar8;
      (*pcVar14)(puVar8,puVar3,lVar1);
      func_0x000107c5ec0c();
      if (puVar3 == (undefined *)0x0) {
        puVar11 = puVar2;
        puVar5 = puVar3;
        func_0x000107c5ec0c();
        puVar3 = puVar11;
        if (puVar5 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          goto LAB_103c4f20c;
        }
        goto LAB_103c4f284;
      }
      puVar9 = puVar3;
      func_0x000107c5fb1c();
      puVar5 = puVar9;
      func_0x000107c6142c();
      func_0x000107c5ec0c();
      puVar11 = puVar3;
      if (puVar5 == (undefined *)0x0) {
        if (puVar9 == (undefined *)0x0) goto LAB_103c4f284;
LAB_103c4f314:
        puVar4 = puVar9;
        uVar10 = 0;
LAB_103c4f434:
        func_0x000107c6142c(puVar4);
      }
      else {
LAB_103c4f20c:
        puVar3 = puVar5;
        puVar4 = puVar3;
        func_0x000107c5fb1c();
        puVar5 = puVar4;
        func_0x000107c6142c();
        if (puVar9 == (undefined *)0x0) {
          if (puVar4 == (undefined *)0x0) goto LAB_103c4f284;
LAB_103c4f324:
          uVar10 = 0;
          goto LAB_103c4f434;
        }
        if (puVar4 == (undefined *)0x0) goto LAB_103c4f314;
        if (puVar2 == puVar11 && puVar9 == puVar4) {
          func_0x000107c6142c(puVar9);
          func_0x000107c6142c();
          puVar3 = puVar4;
LAB_103c4f284:
          func_0x000107c5ebec();
          if (puVar5 == (undefined *)0x0) {
            puVar2 = puVar3;
            puVar11 = puVar5;
            func_0x000107c5ebec();
            puVar5 = puVar2;
            if (puVar11 != (undefined *)0x0) {
              puVar9 = (undefined *)0x0;
              puVar6 = puVar11;
              goto LAB_103c4f2d0;
            }
          }
          else {
            puVar9 = puVar5;
            func_0x000107c5fb1c();
            puVar11 = puVar9;
            func_0x000107c6142c();
            func_0x000107c5ebec();
            puVar2 = puVar5;
            puVar6 = puVar11;
            if (puVar11 == (undefined *)0x0) {
              if (puVar9 != (undefined *)0x0) goto LAB_103c4f314;
            }
            else {
LAB_103c4f2d0:
              puVar4 = puVar6;
              func_0x000107c5fb1c();
              puVar11 = puVar4;
              func_0x000107c6142c();
              if (puVar9 == (undefined *)0x0) {
                puVar5 = puVar6;
                if (puVar4 != (undefined *)0x0) goto LAB_103c4f324;
              }
              else {
                if (puVar4 == (undefined *)0x0) goto LAB_103c4f314;
                if ((puVar3 == puVar2) && (puVar9 == puVar4)) {
                  func_0x000107c6142c(puVar9);
                  func_0x000107c6142c();
                  puVar5 = puVar4;
                }
                else {
                  puVar11 = puVar9;
                  func_0x000107c605b8(puVar3,puVar9,puVar2,puVar4,0);
                  func_0x000107c6142c(puVar9);
                  func_0x000107c6142c();
                  puVar5 = puVar4;
                  if (((ulong)puVar3 & 1) == 0) goto LAB_103c4f47c;
                }
              }
            }
          }
          func_0x000107c5ebf4();
          puVar2 = puVar5;
          puVar3 = puVar11;
          func_0x000107c5ebf4();
          if ((puVar5 == puVar2) && (puVar11 == puVar3)) {
            func_0x000107c6142c(puVar11);
            func_0x000107c6142c();
          }
          else {
            func_0x000107c605b8(puVar5,puVar11,puVar2,puVar3,0);
            func_0x000107c6142c(puVar11);
            func_0x000107c6142c();
            if (((ulong)puVar5 & 1) == 0) goto LAB_103c4f47c;
          }
          func_0x000107c5ebc4();
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar3 != (undefined *)0x0) {
            puVar2 = puVar3;
          }
          puVar3 = puVar2;
          FUN_103c4d930(puVar2);
          func_0x000107c6142c();
          func_0x000107c5ebc4();
          if (puVar2 != (undefined *)0x0) {
            puVar11 = puVar2;
          }
          puVar4 = puVar11;
          FUN_103c4d930(puVar11);
          func_0x000107c6142c(puVar11);
          puVar2 = puVar3;
          func_0x000103c4f484(puVar3,puVar4);
          uVar10 = (uint)puVar2;
          func_0x000107c6142c(puVar3);
          goto LAB_103c4f434;
        }
        puVar5 = puVar9;
        func_0x000107c605b8(puVar2,puVar9,puVar11,puVar4,0);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c();
        puVar3 = puVar4;
        if (((ulong)puVar2 & 1) != 0) goto LAB_103c4f284;
LAB_103c4f47c:
        uVar10 = 0;
      }
      pcVar12 = *(code **)(lVar13 + 8);
      (*pcVar12)(puVar8,lVar1);
      (*pcVar12)(lVar7,lVar1);
      goto LAB_103c4f458;
    }
    (**(code **)(lVar13 + 8))(lVar7,lVar1);
    puVar11 = puVar3;
  }
  lVar1 = 0x112d4b5b0;
  FUN_103c4f754(puVar11,0x112d4b5b0,&UNK_10d912140);
  func_0x000107c5ed70();
  puVar2 = puVar11;
  lVar7 = lVar1;
  func_0x000107c5ed70();
  if ((puVar11 == puVar2) && (lVar1 == lVar7)) {
    func_0x000107c6142c(lVar1);
    func_0x000107c6142c(lVar7);
    uVar10 = 1;
  }
  else {
    func_0x000107c605b8(puVar11,lVar1,puVar2,lVar7,0);
    uVar10 = (uint)puVar11;
    func_0x000107c6142c(lVar1);
    func_0x000107c6142c(lVar7);
  }
LAB_103c4f458:
  return uVar10 & 1;
}



/* Entry: 103c4f754; end: 103c4f7d3;  */

undefined8 FUN_103c4f754(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c4f7d4; end: 103c4fa87;  */

undefined * FUN_103c4f7d4(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar10 = 0;
  func_0x000107c5ebbc();
  lVar12 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    func_0x000103094ed4(0,lVar17,0);
    uVar1 = param_1 + 0x40;
    uVar11 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    do {
      if (uVar11 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103c4fa78);
        (*pcVar9)();
      }
      uVar19 = uVar11 >> 6;
      uVar20 = 1L << (uVar11 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar19 * 8) & uVar20) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103c4fa7c);
        (*pcVar9)();
      }
      iVar7 = *(int *)(param_1 + 0x24);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 0x10);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c5ebb0(&stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          uVar3,uVar5,uVar4,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar5);
      uVar16 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        func_0x000103094ed4(1 < *(ulong *)(puVar8 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar16 + 1;
      (**(code **)(lVar12 + 0x20))
                (puVar8 + *(long *)(lVar12 + 0x48) * uVar16 +
                          ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),
                 &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar10);
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103c4fa80);
        (*pcVar9)();
      }
      uVar13 = *(ulong *)(uVar1 + uVar19 * 8);
      if ((uVar13 & uVar20) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103c4fa84);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103c4fa88);
        (*pcVar9)();
      }
      uVar13 = uVar13 & -2L << (uVar11 & 0x3f);
      if (uVar13 == 0) {
        lVar18 = uVar19 << 6;
        puVar15 = (ulong *)(param_1 + 0x48 + uVar19 * 8);
        do {
          uVar19 = uVar19 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar19) {
            func_0x000100d69d2c(uVar11,iVar7,0);
            goto LAB_103c4f8a8;
          }
          uVar20 = *puVar15;
          lVar18 = lVar18 + 0x40;
          puVar15 = puVar15 + 1;
        } while (uVar20 == 0);
        func_0x000100d69d2c(uVar11,iVar7,0);
        uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar18;
      }
      else {
        uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
LAB_103c4f8a8:
      lVar14 = lVar14 + 1;
      uVar11 = uVar16;
    } while (lVar14 != lVar17);
  }
  return puVar8;
}



/* Entry: 103c4fa88; end: 103c4fc97;  */

undefined * FUN_103c4fa88(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    func_0x00010168d76c(0,lVar5,0);
    uVar1 = param_1 + 0x38;
    uVar9 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar13 = 0;
    do {
      if (uVar9 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c4fc88);
        (*pcVar4)();
      }
      uVar14 = uVar9 >> 6;
      uVar11 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar14 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c4fc8c);
        (*pcVar4)();
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 8);
      iVar2 = *(int *)(param_1 + 0x24);
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        func_0x00010168d76c(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar3 + uVar10 * 8 + 0x20) = uVar8;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar10 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c4fc90);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar1 + uVar14 * 8);
      if ((uVar6 & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c4fc94);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c4fc98);
        (*pcVar4)();
      }
      uVar6 = uVar6 & -2L << (uVar9 & 0x3f);
      if (uVar6 == 0) {
        lVar12 = uVar14 << 6;
        puVar7 = (ulong *)(param_1 + 0x40 + uVar14 * 8);
        do {
          uVar14 = uVar14 + 1;
          if (uVar10 + 0x3f >> 6 <= uVar14) {
            func_0x000100d69d2c();
            uVar9 = uVar10;
            goto LAB_103c4fb24;
          }
          uVar9 = *puVar7;
          lVar12 = lVar12 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar9 == 0);
        func_0x000100d69d2c();
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar12;
      }
      else {
        uVar14 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
LAB_103c4fb24:
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar5);
  }
  return puVar3;
}



/* Entry: 103c4fc98; end: 103c4ffa7;  */

void FUN_103c4fc98(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0x72756f735f6d7475;
  func_0x0001000285a8(0x112ffb3e0,&UNK_10dc69930);
  lVar4 = 6;
  func_0x000107c60498();
  func_0x000107c6157c();
  uVar5 = 0xea00000000006563;
  func_0x000100029284();
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff7c);
    (*pcVar3)();
  }
  lVar1 = lVar4 + 0x40;
  uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar6 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 0x10);
  *puVar2 = 0x72756f735f6d7475;
  puVar2[1] = 0xea00000000006563;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = 10;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff80);
    (*pcVar3)();
  }
  uVar5 = 0x6964656d5f6d7475;
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  uVar6 = 0xea00000000006d75;
  func_0x000100029284();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff84);
    (*pcVar3)();
  }
  uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar5 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 0x10);
  *puVar2 = 0x6964656d5f6d7475;
  puVar2[1] = 0xea00000000006d75;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = 0xb;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff88);
    (*pcVar3)();
  }
  uVar5 = 0xec0000006e676961;
  uVar6 = 0x706d61635f6d7475;
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  func_0x000100029284();
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff8c);
    (*pcVar3)();
  }
  uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar6 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 0x10);
  *puVar2 = 0x706d61635f6d7475;
  puVar2[1] = 0xec0000006e676961;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = 0xc;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff90);
    (*pcVar3)();
  }
  uVar5 = 0xeb00000000746e65;
  uVar6 = 0x746e6f635f6d7475;
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  func_0x000100029284();
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff94);
    (*pcVar3)();
  }
  uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar6 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 0x10);
  *puVar2 = 0x746e6f635f6d7475;
  puVar2[1] = 0xeb00000000746e65;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = 0xd;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    uVar5 = 0x6d7265745f6d7475;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    uVar6 = 0;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff9c);
      (*pcVar3)();
    }
    uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar5 & 0x3f);
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 0x10);
    *puVar2 = 0x6d7265745f6d7475;
    puVar2[1] = 0xe800000000000000;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = 0xe;
    if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ffa0);
      (*pcVar3)();
    }
    uVar5 = 0x64695f6d7475;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    uVar6 = 0;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ffa4);
      (*pcVar3)();
    }
    uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar5 & 0x3f);
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 0x10);
    *puVar2 = 0x64695f6d7475;
    puVar2[1] = 0xe600000000000000;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = 0xf;
    if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
      func_0x000107c61574(lVar4);
      lRam0000000112ffb3c8 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ffa8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c4ff98);
  (*pcVar3)();
}



/* Entry: 103c4ffa8; end: 103c5067f;  */

/* WARNING: Removing unreachable block (ram,0x000103c50670) */

void FUN_103c4ffa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar10;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  undefined *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *apuStack_78 [3];
  
  lVar4 = 0;
  uStack_d0 = param_1;
  func_0x000107c5ebbc();
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar19 = (long)&puStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d4b5b0;
  lStack_b8 = lVar19;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_00;
  lVar5 = 0;
  func_0x000107c5ec24();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  puVar10 = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112d36580;
  puStack_d8 = puVar10;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar17 = (long)puVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar17 - extraout_x12;
  lStack_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar21 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_2,lVar13);
  pcStack_f0 = *(code **)(lVar14 + 0x30);
  lVar4 = lVar13;
  (*pcStack_f0)(lVar13,1,lVar6);
  if ((int)lVar4 == 1) {
    FUN_103c545b4(lVar13,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcStack_f8 = *(code **)(lVar14 + 0x20);
    (*pcStack_f8)(lVar21,lVar13,lVar6);
    if (param_3 != 0) {
      func_0x000107c5ebe4(lVar19,lVar21,0);
      lVar4 = lVar19;
      (**(code **)(lVar22 + 0x30))(lVar19,1,lVar5);
      if ((int)lVar4 == 1) {
        FUN_103c545b4(lVar19,0x112d4b5b0,&UNK_10d912140);
        uVar8 = uStack_d0;
        (*pcStack_f8)(uStack_d0,lVar21,lVar6);
        pcVar11 = *(code **)(lVar14 + 0x38);
      }
      else {
        puVar7 = puStack_d8;
        lStack_120 = lVar17;
        lStack_118 = lVar22;
        lStack_110 = lVar5;
        lStack_108 = lVar21;
        lStack_100 = lVar14;
        lStack_e0 = param_3;
        (**(code **)(lVar22 + 0x20))(puStack_d8,lVar19,lVar5);
        func_0x000107c5ebc4();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar7 != (undefined *)0x0) {
          puVar10 = puVar7;
        }
        lVar4 = *(long *)(puVar10 + 0x10);
        if (lVar4 == 0) {
          func_0x000107c6142c(puVar10);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
          lStack_128 = lVar6;
          func_0x000102d68ef4(0,lVar4,0);
          puVar7 = puVar10 + ((ulong)*(byte *)(lStack_a8 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lStack_a8 + 0x50) ^ 0xffffffffffffffff));
          lStack_c0 = *(long *)(lStack_a8 + 0x48);
          pcStack_c8 = *(code **)(lStack_a8 + 0x10);
          puStack_130 = puVar10;
          do {
            puVar10 = puStack_98;
            lVar19 = lStack_b0;
            lVar5 = lStack_b8;
            lVar13 = lStack_b8;
            puVar15 = puVar7;
            (*pcStack_c8)(lStack_b8,puVar7,lStack_b0);
            func_0x000107c5ebb4();
            lVar14 = lVar13;
            puVar9 = puVar15;
            func_0x000107c5ebb8();
            lVar6 = 0;
            if (puVar9 != (undefined *)0x0) {
              lVar6 = lVar14;
            }
            puVar2 = (undefined *)0xe000000000000000;
            if (puVar9 != (undefined *)0x0) {
              puVar2 = puVar9;
            }
            (**(code **)(lStack_a8 + 8))(lVar5,lVar19);
            uVar20 = *(ulong *)(puVar10 + 0x10);
            puStack_98 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar20) {
              func_0x000102d68ef4(1 < *(ulong *)(puVar10 + 0x18),uVar20 + 1,1);
            }
            puVar10 = puStack_98;
            *(ulong *)(puStack_98 + 0x10) = uVar20 + 1;
            *(long *)(puStack_98 + uVar20 * 0x20 + 0x20) = lVar13;
            *(undefined **)(puStack_98 + uVar20 * 0x20 + 0x28) = puVar15;
            *(long *)(puStack_98 + uVar20 * 0x20 + 0x30) = lVar6;
            *(undefined **)(puStack_98 + uVar20 * 0x20 + 0x38) = puVar2;
            puVar7 = puVar7 + lStack_c0;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          func_0x000107c6142c(puStack_130);
          lVar6 = lStack_128;
        }
        uVar8 = uStack_d0;
        lVar4 = lStack_e0;
        puVar15 = *(undefined **)(puVar10 + 0x10);
        puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (puVar15 != (undefined *)0x0) {
          func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
          func_0x000107c60498();
          puVar7 = puVar15;
        }
        puStack_98 = puVar7;
        FUN_103c5431c(puVar10,1,&puStack_98);
        func_0x000107c6142c(puVar10);
        puVar10 = puStack_98;
        puVar16 = (ulong *)(lVar4 + 0x40);
        apuStack_78[0] = puStack_98;
        uVar18 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
        uVar20 = 0xffffffffffffffff;
        if (-uVar18 < 0x40) {
          uVar20 = ~(-1L << (-uVar18 & 0x3f));
        }
        uVar20 = uVar20 & *puVar16;
        func_0x000107c6157c(puStack_98);
        func_0x000107c61434(lVar4);
        lVar5 = 0;
        puVar7 = puVar10;
        lVar4 = lVar5;
        while( true ) {
          for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
            uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = lVar4 << 10 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 4;
            puVar1 = (undefined8 *)(*(long *)(lStack_e0 + 0x30) + uVar12);
            puStack_98 = (undefined *)*puVar1;
            uStack_90 = puVar1[1];
            puVar1 = (undefined8 *)(*(long *)(lStack_e0 + 0x38) + uVar12);
            uStack_88 = *puVar1;
            uStack_80 = puVar1[1];
            FUN_103c50680(&puStack_a0,apuStack_78,&puStack_98);
            func_0x000107c6142c(puVar7);
            lVar5 = lVar4;
            puVar7 = puStack_a0;
            apuStack_78[0] = puStack_a0;
          }
          bVar3 = SCARRY8(lVar4,1);
          lVar4 = lVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x103c50670);
            (*pcVar11)();
          }
          if ((long)(0x3f - uVar18 >> 6) <= lVar4) break;
          uVar20 = puVar16[lVar4];
        }
        func_0x000100f18de0(lStack_e0,puVar16,~uVar18,lVar5,0);
        puVar15 = puVar7;
        func_0x000101058cd4(puVar7,puVar10);
        func_0x000107c61574(puVar10);
        if (((ulong)puVar15 & 1) == 0) {
          puVar15 = puVar7;
          FUN_103c4f7d4(puVar7);
          func_0x000107c6142c(puVar7);
          puVar10 = puStack_d8;
          func_0x000107c5ebc8(puVar15);
          lVar5 = lStack_e8;
          func_0x000107c5ebe8(lStack_e8);
          (**(code **)(lStack_118 + 8))(puVar10,lStack_110);
          lVar4 = lStack_120;
          func_0x0001001021cc(lVar5,lStack_120);
          pcVar11 = pcStack_f0;
          lVar19 = lVar4;
          (*pcStack_f0)(lVar4,1,lVar6);
          lVar5 = lStack_100;
          if ((int)lVar19 == 1) {
            (*pcStack_f8)(uVar8,lStack_108,lVar6);
            lVar19 = lVar4;
            (*pcVar11)(lVar4,1,lVar6);
            lVar5 = lStack_100;
            if ((int)lVar19 != 1) {
              FUN_103c545b4(lVar4,0x112d36580,&UNK_10d9016d0);
            }
          }
          else {
            (**(code **)(lStack_100 + 8))(lStack_108,lVar6);
            (*pcStack_f8)(uVar8,lVar4,lVar6);
          }
          pcVar11 = *(code **)(lVar5 + 0x38);
        }
        else {
          (**(code **)(lStack_118 + 8))(puStack_d8,lStack_110);
          func_0x000107c6142c(puVar7);
          (*pcStack_f8)(uVar8,lStack_108,lVar6);
          pcVar11 = *(code **)(lStack_100 + 0x38);
        }
      }
      (*pcVar11)(uVar8,0,1,lVar6);
      return;
    }
    (**(code **)(lVar14 + 8))(lVar21,lVar6);
  }
  func_0x000100029394(param_2,uStack_d0);
  return;
}



/* Entry: 103c50680; end: 103c507e7;  */

void FUN_103c50680(ulong *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = *param_2;
  uVar2 = param_3[2];
  uVar10 = param_3[3];
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar4 = uVar10 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    *param_1 = uVar8;
    func_0x000107c61434(uVar8);
    return;
  }
  lVar3 = *param_3;
  uVar4 = param_3[1];
  lVar9 = *(long *)(uVar8 + 0x10);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar10);
  if (lVar9 != 0) {
    func_0x000107c61434(uVar8);
    uVar6 = uVar4;
    func_0x000100029284(lVar3);
    func_0x000107c6142c(uVar8);
    if ((uVar6 & 1) != 0) {
      uVar6 = uVar4;
      if (*(long *)(uVar8 + 0x10) != 0) {
        func_0x000107c61434(uVar8);
        lVar9 = lVar3;
        uVar7 = uVar4;
        func_0x000100029284();
        if ((uVar7 & 1) == 0) {
          func_0x000107c6142c(uVar10);
          uVar6 = uVar8;
          uVar10 = uVar4;
        }
        else {
          puVar1 = (ulong *)(*(long *)(uVar8 + 0x38) + lVar9 * 0x10);
          uVar7 = *puVar1;
          uVar5 = puVar1[1];
          func_0x000107c6142c(uVar8);
          uVar7 = uVar7 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar7 = uVar5 >> 0x38 & 0xf;
          }
          if (uVar7 == 0) goto LAB_103c50748;
        }
      }
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar6);
      *param_1 = uVar8;
      func_0x000107c61434(uVar8);
      return;
    }
  }
LAB_103c50748:
  *param_1 = uVar8;
  uVar6 = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c61558();
  func_0x00010018433c(uVar2,uVar10,lVar3,uVar4,uVar6);
  func_0x000107c6142c(uVar4);
  *param_1 = uVar8;
  return;
}



/* Entry: 103c507e8; end: 103c5095b; +[URLParameterAppendUtil autoCorrectCidParametersWithUrl:expectedCidParams:] */

void FUN_103c507e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar4,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,param_3 == 0,1);
  if (param_4 != 0) {
    func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  FUN_103c4ffa8(lVar5,puVar4,param_4);
  func_0x000107c6142c(param_4);
  FUN_103c545b4(puVar4,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  lVar1 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  uVar3 = 0;
  if ((int)lVar1 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(lVar5,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c5095c; end: 103c51237;  */

/* WARNING: Removing unreachable block (ram,0x000103c51228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5095c(undefined8 param_1,ulong param_2,code *param_3)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  ulong uVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  ulong *puVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long extraout_x12;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  undefined *puVar27;
  ulong auStack_f0 [4];
  long lStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong *puStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_68;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar16 = (long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar7 = 0;
  auStack_f0[3] = lVar16;
  func_0x000107c5ebbc();
  lStack_78 = *(long *)(lVar7 + -8);
  lStack_80 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar17 = (ulong *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0x112d4b5b0;
  puStack_88 = puVar17;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)puVar17 - extraout_x8_01;
  lVar16 = 0;
  func_0x000107c5ec24();
  lVar25 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  puVar27 = (undefined *)(lVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ebe4(lVar22,param_2,0);
  lVar7 = lVar22;
  (**(code **)(lVar25 + 0x30))(lVar22,1,lVar16);
  if ((int)lVar7 == 1) {
    FUN_103c545b4(lVar22,0x112d4b5b0,&UNK_10d912140);
    lVar16 = 0;
    func_0x000107c5ede0();
    pcVar18 = *(code **)(*(long *)(lVar16 + -8) + 0x10);
  }
  else {
    puVar8 = puVar27;
    auStack_f0[1] = param_2;
    (**(code **)(lVar25 + 0x20))(puVar27,lVar22,lVar16);
    func_0x000107c5ebc4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) {
      puVar14 = puVar8;
    }
    lVar7 = *(long *)(puVar14 + 0x10);
    auStack_f0[2] = lVar16;
    uStack_b8 = param_1;
    puStack_b0 = puVar27;
    lStack_a8 = lVar25;
    if (lVar7 == 0) {
      func_0x000107c6142c(puVar14);
      pcVar18 = *(code **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      pcVar26 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      pcVar13 = (code *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    else {
      pcStack_68 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      pcStack_a0 = param_3;
      func_0x000102d68ef4(0,lVar7,0);
      puVar27 = puVar14 + ((ulong)*(byte *)(lStack_78 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lStack_78 + 0x50) ^ 0xffffffffffffffff));
      puStack_90 = *(undefined **)(lStack_78 + 0x48);
      pcStack_98 = *(code **)(lStack_78 + 0x10);
      puStack_c0 = puVar14;
      do {
        pcVar18 = pcStack_68;
        lVar16 = lStack_80;
        puVar5 = puStack_88;
        puVar9 = puStack_88;
        puVar14 = puVar27;
        (*pcStack_98)(puStack_88,puVar27,lStack_80);
        func_0x000107c5ebb4();
        puVar10 = puVar9;
        puVar8 = puVar14;
        func_0x000107c5ebb8();
        puVar17 = (ulong *)0x0;
        if (puVar8 != (undefined *)0x0) {
          puVar17 = puVar10;
        }
        puVar2 = (undefined *)0xe000000000000000;
        if (puVar8 != (undefined *)0x0) {
          puVar2 = puVar8;
        }
        (**(code **)(lStack_78 + 8))(puVar5,lVar16);
        uVar24 = *(ulong *)(pcVar18 + 0x10);
        pcStack_68 = pcVar18;
        if (*(ulong *)(pcVar18 + 0x18) >> 1 <= uVar24) {
          func_0x000102d68ef4(1 < *(ulong *)(pcVar18 + 0x18),uVar24 + 1,1);
        }
        pcVar26 = pcStack_68;
        *(ulong *)(pcStack_68 + 0x10) = uVar24 + 1;
        *(ulong **)(pcStack_68 + uVar24 * 0x20 + 0x20) = puVar9;
        *(undefined **)(pcStack_68 + uVar24 * 0x20 + 0x28) = puVar14;
        *(ulong **)(pcStack_68 + uVar24 * 0x20 + 0x30) = puVar17;
        *(undefined **)(pcStack_68 + uVar24 * 0x20 + 0x38) = puVar2;
        puVar27 = puVar27 + (long)puStack_90;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      func_0x000107c6142c(puStack_c0);
      pcVar18 = *(code **)(pcVar26 + 0x10);
      param_3 = pcStack_a0;
      param_1 = uStack_b8;
      pcVar13 = (code *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    PTR___swiftEmptyDictionarySingleton_11034f1d0 = pcVar13;
    if (pcVar18 != (code *)0x0) {
      func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
      func_0x000107c60498();
      pcVar13 = pcVar18;
    }
    pcStack_68 = pcVar13;
    FUN_103c5431c(pcVar26,1,&pcStack_68);
    func_0x000107c6142c(pcVar26);
    pcStack_98 = pcStack_68;
    pcVar18 = *(code **)(param_3 + _DAT_1130917c0);
    if ((ulong)pcVar18 >> 0x3e == 0) {
      pcVar26 = *(code **)(((ulong)pcVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pcVar26 = (code *)((ulong)pcVar18 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < pcVar18) {
        pcVar26 = pcVar18;
      }
      func_0x000107c60480();
    }
    auStack_f0[0] = 0;
    pcVar13 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pcVar26 != (code *)0x0) {
      pcStack_68 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102ad82bc(0,(ulong)pcVar26 & ((long)pcVar26 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)pcVar26 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x103c51218);
        (*pcVar18)();
      }
      if (((ulong)pcVar18 & 0xc000000000000001) == 0) {
        pcVar18 = pcVar18 + 0x20;
        do {
          pcVar23 = pcStack_68;
          pcVar13 = pcStack_98;
          pcVar12 = *(code **)pcVar18;
          if (pcVar12[_DAT_113091780] == (code)0x1) {
            func_0x000107c61434(pcStack_98);
          }
          else {
            func_0x000107c61174();
            pcVar13 = pcVar12;
            func_0x000103c52704();
            func_0x000107c61170(pcVar12);
          }
          uVar24 = *(ulong *)(pcVar23 + 0x10);
          pcStack_68 = pcVar23;
          if (*(ulong *)(pcVar23 + 0x18) >> 1 <= uVar24) {
            func_0x000102ad82bc(1 < *(ulong *)(pcVar23 + 0x18),uVar24 + 1,1);
          }
          *(ulong *)(pcStack_68 + 0x10) = uVar24 + 1;
          *(code **)(pcStack_68 + uVar24 * 8 + 0x20) = pcVar13;
          pcVar26 = pcVar26 + -1;
          pcVar13 = pcStack_68;
          pcVar18 = pcVar18 + 8;
        } while (pcVar26 != (code *)0x0);
      }
      else {
        pcVar23 = (code *)0x0;
        do {
          pcVar13 = pcStack_68;
          pcVar12 = pcVar23;
          FUN_103c52dac(pcVar23,pcVar18);
          if (((byte)pcVar12[_DAT_113091780] & 1) == 0) {
            pcVar11 = pcVar12;
            func_0x000103c52704();
            func_0x000107c615e8(pcVar12);
          }
          else {
            func_0x000107c615e8();
            pcVar11 = pcStack_98;
            func_0x000107c61434(pcStack_98);
          }
          uVar24 = *(ulong *)(pcVar13 + 0x10);
          pcStack_68 = pcVar13;
          if (*(ulong *)(pcVar13 + 0x18) >> 1 <= uVar24) {
            func_0x000102ad82bc(1 < *(ulong *)(pcVar13 + 0x18),uVar24 + 1,1);
          }
          pcVar23 = pcVar23 + 1;
          *(ulong *)(pcStack_68 + 0x10) = uVar24 + 1;
          *(code **)(pcStack_68 + uVar24 * 8 + 0x20) = pcVar11;
          pcVar13 = pcStack_68;
        } while (pcVar26 != pcVar23);
      }
    }
    puVar27 = *(undefined **)(pcVar13 + 0x10);
    pcVar18 = pcStack_98;
    pcStack_a0 = pcVar13;
    func_0x000107c6157c();
    puStack_c0 = puVar27;
    if (puVar27 != (undefined *)0x0) {
      pcStack_c8 = pcStack_a0 + 0x20;
      puVar27 = (undefined *)0x0;
      pcVar18 = pcStack_98;
      do {
        if (*(undefined **)(pcStack_a0 + 0x10) <= puVar27) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x103c511fc);
          (*pcVar18)();
        }
        lVar7 = *(long *)(pcStack_c8 + (long)puVar27 * 8);
        puStack_90 = puVar27 + 1;
        func_0x000107c61434(lVar7);
        pcVar26 = pcVar18;
        func_0x000107c61558();
        uVar20 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
        uVar24 = 0xffffffffffffffff;
        if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
          uVar24 = ~(-1L << (uVar20 & 0x3f));
        }
        uVar24 = uVar24 & *(ulong *)(lVar7 + 0x40);
        lStack_80 = lVar7;
        pcStack_68 = pcVar18;
        func_0x000107c61434(lVar7);
        lVar16 = 0;
        puStack_88 = (ulong *)(lVar7 + 0x40);
        while( true ) {
          while (lVar7 = lStack_80, uVar24 != 0) {
            uVar4 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            uVar19 = lVar16 << 10 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 4;
            puVar17 = (ulong *)(*(long *)(lStack_80 + 0x30) + uVar19);
            uVar4 = *puVar17;
            uVar3 = puVar17[1];
            plVar1 = (long *)(*(long *)(lStack_80 + 0x38) + uVar19);
            lStack_78 = *plVar1;
            lVar22 = plVar1[1];
            func_0x000107c61434(uVar3);
            func_0x000107c61434(lVar22);
            uVar19 = uVar4;
            uVar15 = uVar3;
            func_0x000100029284();
            uVar21 = (ulong)~(uint)uVar15 & 1;
            lVar7 = *(long *)(pcVar18 + 0x10) + uVar21;
            if (SCARRY8(*(long *)(pcVar18 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x103c511f4);
              (*pcVar18)();
            }
            if (*(long *)(pcVar18 + 0x18) < lVar7) {
              func_0x0001001833c8(lVar7,(uint)pcVar26 & 1);
              uVar19 = uVar4;
              uVar21 = uVar3;
              func_0x000100029284();
              if (((uint)uVar15 & 1) != ((uint)uVar21 & 1)) {
                func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x103c51228);
                (*pcVar18)();
              }
            }
            else if (((ulong)pcVar26 & 1) == 0) {
              func_0x000100184498();
            }
            pcVar18 = pcStack_68;
            uVar24 = uVar24 - 1 & uVar24;
            if ((uVar15 & 1) == 0) {
              *(ulong *)(pcStack_68 + (uVar19 >> 6) * 8 + 0x40) =
                   *(ulong *)(pcStack_68 + (uVar19 >> 6) * 8 + 0x40) | 1L << (uVar19 & 0x3f);
              puVar17 = (ulong *)(*(long *)(pcStack_68 + 0x30) + uVar19 * 0x10);
              *puVar17 = uVar4;
              puVar17[1] = uVar3;
              plVar1 = (long *)(*(long *)(pcStack_68 + 0x38) + uVar19 * 0x10);
              *plVar1 = lStack_78;
              plVar1[1] = lVar22;
              if (SCARRY8(*(long *)(pcStack_68 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x103c511f8);
                (*pcVar18)();
              }
              *(long *)(pcStack_68 + 0x10) = *(long *)(pcStack_68 + 0x10) + 1;
            }
            else {
              func_0x000107c6142c(uVar3);
              plVar1 = (long *)(*(long *)(pcVar18 + 0x38) + uVar19 * 0x10);
              lVar7 = plVar1[1];
              *plVar1 = lStack_78;
              plVar1[1] = lVar22;
              func_0x000107c6142c(lVar7);
            }
            pcVar26 = (code *)0x1;
          }
          bVar6 = SCARRY8(lVar16,1);
          lVar16 = lVar16 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x103c511bc);
            (*pcVar18)();
          }
          if ((long)(uVar20 + 0x3f >> 6) <= lVar16) break;
          uVar24 = puStack_88[lVar16];
        }
        func_0x000107c61574(lStack_80);
        func_0x000107c6142c(lVar7);
        puVar27 = puStack_90;
        param_1 = uStack_b8;
      } while (puStack_90 != puStack_c0);
    }
    lVar7 = lStack_a8;
    puVar27 = puStack_b0;
    func_0x000107c6142c(pcStack_a0);
    pcVar26 = pcStack_98;
    pcVar13 = pcVar18;
    func_0x000101058cd4(pcVar18,pcStack_98);
    func_0x000107c61574(pcVar26);
    if (((ulong)pcVar13 & 1) == 0) {
      pcVar26 = pcVar18;
      FUN_103c4f7d4(pcVar18);
      func_0x000107c6142c(pcVar18);
      func_0x000107c5ebc8(pcVar26);
      uVar24 = auStack_f0[3];
      func_0x000107c5ebe8(auStack_f0[3]);
      (**(code **)(lVar7 + 8))(puVar27,auStack_f0[2]);
      param_2 = lStack_d0;
      func_0x0001001021cc(uVar24,lStack_d0);
      lVar16 = 0;
      func_0x000107c5ede0();
      lVar22 = *(long *)(lVar16 + -8);
      pcVar18 = *(code **)(lVar22 + 0x30);
      lVar7 = param_2;
      (*pcVar18)(param_2,1,lVar16);
      if ((int)lVar7 == 1) {
        (**(code **)(lVar22 + 0x10))(param_1,auStack_f0[1],lVar16);
        lVar7 = param_2;
        (*pcVar18)(param_2,1,lVar16);
        if ((int)lVar7 == 1) {
          return;
        }
        FUN_103c545b4(param_2,0x112d36580,&UNK_10d9016d0);
        return;
      }
      pcVar18 = *(code **)(lVar22 + 0x20);
    }
    else {
      (**(code **)(lVar7 + 8))(puVar27,auStack_f0[2]);
      func_0x000107c6142c(pcVar18);
      lVar16 = 0;
      func_0x000107c5ede0();
      pcVar18 = *(code **)(*(long *)(lVar16 + -8) + 0x10);
      param_2 = auStack_f0[1];
    }
  }
  (*pcVar18)(param_1,param_2,lVar16);
  return;
}



/* Entry: 103c51238; end: 103c5131b; +[URLParameterAppendUtil modifyUrlParametersWithUrl:urlParameterUpdate:] */

void FUN_103c51238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_4);
  FUN_103c5095c(lVar3,puVar2,param_4);
  func_0x000107c61170(param_4);
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(puVar2,lVar1);
  func_0x000107c5ed90();
  (*pcVar5)(lVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103c5131c; end: 103c51463; +[URLParameterAppendUtil makeLoggingEventWithOriginalUrl:modifiedUrl:domain:adId:serveItemId:] */

void FUN_103c5131c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  func_0x000107c5edb4(lVar6,param_3);
  func_0x000107c5edb4(puVar5,param_4);
  func_0x000107c5faec(param_5);
  uVar3 = param_2;
  func_0x000107c5faec(param_6);
  uVar4 = uVar3;
  func_0x000107c5faec(param_7);
  lVar2 = lVar6;
  FUN_103c530e4(lVar6,puVar5,param_5,param_2,param_6,uVar3,param_7,uVar4);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(puVar5,lVar1);
  (*pcVar7)(lVar6,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103c51464; end: 103c51467;  */

bool FUN_103c51464(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  bool bVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_80 - extraout_x8;
  lVar11 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,lVar13);
  lVar16 = lVar13;
  (**(code **)(lVar14 + 0x30))(lVar13,1,lVar11);
  if ((int)lVar16 == 1) {
    FUN_103c545b4(lVar13,0x112d36580,&UNK_10d9016d0);
    bVar10 = false;
  }
  else {
    lStack_80 = lVar15;
    lStack_78 = lVar14;
    lStack_70 = lVar11;
    (**(code **)(lVar14 + 0x20))(lVar15,lVar13,lVar11);
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,6,0);
    lVar16 = 0;
    do {
      bVar6 = *(byte *)(lVar16 + 0x112ffb328);
      uVar2 = 0x6d7265745f6d7475;
      if (bVar6 != 4) {
        uVar2 = 0x64695f6d7475;
      }
      uVar1 = 0xe800000000000000;
      if (bVar6 != 4) {
        uVar1 = 0xe600000000000000;
      }
      uVar4 = 0xeb00000000746e65;
      uVar7 = 0x746e6f635f6d7475;
      if (bVar6 != 3) {
        uVar4 = uVar1;
        uVar7 = uVar2;
      }
      uVar2 = 0xea00000000006d75;
      uVar1 = 0x6964656d5f6d7475;
      if (bVar6 != 1) {
        uVar2 = 0xec0000006e676961;
        uVar1 = 0x706d61635f6d7475;
      }
      uVar3 = 0xea00000000006563;
      uVar8 = 0x72756f735f6d7475;
      if (bVar6 != 0) {
        uVar3 = uVar2;
        uVar8 = uVar1;
      }
      if (bVar6 < 3) {
        uVar4 = uVar3;
        uVar7 = uVar8;
      }
      uVar5 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar5) {
        func_0x000100403514(1 < *(ulong *)(puStack_68 + 0x18),uVar5 + 1,1);
      }
      puVar9 = puStack_68;
      lVar11 = lStack_80;
      lVar16 = lVar16 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puStack_68 + uVar5 * 0x10 + 0x20) = uVar7;
      *(undefined8 *)(puStack_68 + uVar5 * 0x10 + 0x28) = uVar4;
    } while (lVar16 != 6);
    puVar12 = puStack_68;
    func_0x000103c4eaa0();
    func_0x000107c61574(puVar9);
    lVar16 = *(long *)(puVar12 + 0x10);
    func_0x000107c6142c(puVar12);
    (**(code **)(lStack_78 + 8))(lVar11,lStack_70);
    bVar10 = lVar16 != 0;
  }
  return bVar10;
}



/* Entry: 103c51468; end: 103c51533; +[URLParameterAppendUtil containsCommonGaUtmParametersWithUrl:] */

uint FUN_103c51468(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffe0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  puVar2 = puVar3;
  func_0x000103c5400c(puVar3);
  FUN_103c545b4(puVar3,0x112d36580,&UNK_10d9016d0);
  return (uint)puVar2 & 1;
}



/* Entry: 103c51534; end: 103c51723;  */

void FUN_103c51534(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_2,lVar6);
  lVar1 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_103c545b4(lVar6,0x112d36580,&UNK_10d9016d0);
    func_0x000100029394(param_2,param_1);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,lVar6,lVar2);
    (**(code **)(lVar7 + 0x10))(puVar4,lVar5,lVar2);
    (**(code **)(lVar7 + 0x38))(puVar4,0,1,lVar2);
    lVar1 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar6 = lVar1;
    func_0x0001001830b8();
    uVar3 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c61408(lVar1 + 0x20,2,uVar3);
    FUN_103c4ffa8(param_1,puVar4,lVar6);
    func_0x000107c6142c(lVar6);
    FUN_103c545b4(puVar4,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
  }
  return;
}



/* Entry: 103c51724; end: 103c5185f; +[URLParameterAppendUtil appendUtmSourceAndMediumForOrganicsWithUrl:] */

void FUN_103c51724(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar5 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar5,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x38))(puVar5,param_3 == 0,1,lVar1);
  FUN_103c51534(lVar4,puVar5);
  FUN_103c545b4(puVar5,0x112d36580,&UNK_10d9016d0);
  func_0x000107c5ede0(0);
  lVar2 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar1);
  uVar3 = 0;
  if ((int)lVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(lVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c51860; end: 103c51ec3;  */

/* WARNING: Removing unreachable block (ram,0x000103c51eb4) */

void FUN_103c51860(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar19;
  code *pcVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  
  lVar9 = 0;
  pcStack_78 = param_3;
  func_0x000107c5ebbc();
  lStack_88 = *(long *)(lVar9 + -8);
  lStack_80 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  puVar24 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar23 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar25 - extraout_x12_00;
  lVar10 = 0;
  func_0x000107c5ede0();
  lVar26 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar18 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_01;
  func_0x000100029394(param_2,lVar22);
  pcVar21 = *(code **)(lVar26 + 0x30);
  lVar9 = lVar22;
  (*pcVar21)(lVar22,1,lVar10);
  if ((int)lVar9 == 1) {
    FUN_103c545b4(lVar22,0x112d36580,&UNK_10d9016d0);
    func_0x000100029394(param_2,param_1);
  }
  else {
    pcVar20 = *(code **)(lVar26 + 0x20);
    (*pcVar20)(lVar18,lVar22,lVar10);
    func_0x000100029394(pcStack_78,lVar25);
    lVar9 = lVar25;
    (*pcVar21)(lVar25,1,lVar10);
    if ((int)lVar9 == 1) {
      FUN_103c545b4(lVar25,0x112d36580,&UNK_10d9016d0);
      (*pcVar20)(param_1,lVar18,lVar10);
      (**(code **)(lVar26 + 0x38))(param_1,0,1,lVar10);
    }
    else {
      lStack_c0 = lVar18;
      lStack_b8 = lVar26;
      lStack_b0 = lVar23;
      lStack_a8 = lVar10;
      uStack_a0 = param_1;
      (*pcVar20)(lStack_98,lVar25,lVar10);
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,6,0);
      lVar9 = 0;
      do {
        bVar6 = *(byte *)(lVar9 + 0x112ffb328);
        uVar2 = 0x6d7265745f6d7475;
        if (bVar6 != 4) {
          uVar2 = 0x64695f6d7475;
        }
        uVar1 = 0xe800000000000000;
        if (bVar6 != 4) {
          uVar1 = 0xe600000000000000;
        }
        uVar4 = 0xeb00000000746e65;
        uVar7 = 0x746e6f635f6d7475;
        if (bVar6 != 3) {
          uVar4 = uVar1;
          uVar7 = uVar2;
        }
        uVar2 = 0xea00000000006d75;
        uVar1 = 0x6964656d5f6d7475;
        if (bVar6 != 1) {
          uVar2 = 0xec0000006e676961;
          uVar1 = 0x706d61635f6d7475;
        }
        uVar3 = 0xea00000000006563;
        uVar8 = 0x72756f735f6d7475;
        if (bVar6 != 0) {
          uVar3 = uVar2;
          uVar8 = uVar1;
        }
        if (bVar6 < 3) {
          uVar4 = uVar3;
          uVar7 = uVar8;
        }
        uVar5 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar5) {
          func_0x000100403514(1 < *(ulong *)(puStack_68 + 0x18),uVar5 + 1,1);
        }
        puVar16 = puStack_68;
        lVar9 = lVar9 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puStack_68 + uVar5 * 0x10 + 0x20) = uVar7;
        *(undefined8 *)(puStack_68 + uVar5 * 0x10 + 0x28) = uVar4;
      } while (lVar9 != 6);
      puVar11 = puStack_68;
      func_0x000103c4eaa0();
      func_0x000107c61574(puVar16);
      lVar9 = *(long *)(puVar11 + 0x10);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_c8 = puVar11;
      if (lVar9 != 0) {
        puVar11 = puVar11 + ((ulong)*(byte *)(lStack_88 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lStack_88 + 0x50) ^ 0xffffffffffffffff));
        lVar18 = *(long *)(lStack_88 + 0x48);
        pcStack_78 = *(code **)(lStack_88 + 0x10);
        lVar10 = lStack_80;
        lVar22 = lStack_88;
        lStack_90 = lVar18;
        do {
          puVar12 = puVar24;
          puVar19 = puVar11;
          (*pcStack_78)(puVar24,puVar11,lVar10);
          func_0x000107c5ebb8();
          if (puVar19 == (undefined *)0x0) {
            (**(code **)(lVar22 + 8))(puVar24,lVar10);
          }
          else {
            uVar5 = (ulong)puVar12 & 0xffffffffffff;
            if (((ulong)puVar19 & 0x2000000000000000) != 0) {
              uVar5 = (ulong)puVar19 >> 0x38 & 0xf;
            }
            if (uVar5 == 0) {
              (**(code **)(lVar22 + 8))(puVar24,lVar10);
              func_0x000107c6142c(puVar19);
            }
            else {
              puVar13 = puVar12;
              puVar17 = puVar19;
              func_0x000107c5ebb4();
              (**(code **)(lVar22 + 8))(puVar24,lVar10);
              puVar14 = puVar16;
              func_0x000107c61558();
              puVar15 = puVar16;
              if (((ulong)puVar14 & 1) == 0) {
                puVar15 = (undefined *)0x0;
                FUN_103c52c7c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
              }
              uVar5 = *(ulong *)(puVar15 + 0x10);
              puVar16 = puVar15;
              if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
                puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
                FUN_103c52c7c(puVar16,uVar5 + 1,1,puVar15);
              }
              *(ulong *)(puVar16 + 0x10) = uVar5 + 1;
              *(undefined1 **)(puVar16 + uVar5 * 0x20 + 0x20) = puVar13;
              *(undefined **)(puVar16 + uVar5 * 0x20 + 0x28) = puVar17;
              *(undefined1 **)(puVar16 + uVar5 * 0x20 + 0x30) = puVar12;
              *(undefined **)(puVar16 + uVar5 * 0x20 + 0x38) = puVar19;
              lVar10 = lStack_80;
              lVar18 = lStack_90;
              lVar22 = lStack_88;
            }
          }
          puVar11 = puVar11 + lVar18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      func_0x000107c6142c(puStack_c8);
      lVar9 = lStack_b8;
      puVar19 = *(undefined **)(puVar16 + 0x10);
      puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (puVar19 != (undefined *)0x0) {
        func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
        func_0x000107c60498();
        puVar11 = puVar19;
      }
      uVar2 = uStack_a0;
      lVar22 = lStack_a8;
      lVar18 = lStack_b0;
      lVar10 = lStack_c0;
      puStack_68 = puVar11;
      FUN_103c5431c(puVar16,1,&puStack_68);
      func_0x000107c6142c(puVar16);
      puVar16 = puStack_68;
      (**(code **)(lVar9 + 0x10))(lVar18,lVar10,lVar22);
      (**(code **)(lVar9 + 0x38))(lVar18,0,1,lVar22);
      FUN_103c4ffa8(uVar2,lVar18,puVar16);
      func_0x000107c61574(puVar16);
      FUN_103c545b4(lVar18,0x112d36580,&UNK_10d9016d0);
      pcVar21 = *(code **)(lVar9 + 8);
      (*pcVar21)(lStack_98,lVar22);
      (*pcVar21)(lVar10,lVar22);
    }
  }
  return;
}



/* Entry: 103c51ec4; end: 103c5207f; +[URLParameterAppendUtil appendUtmParamsWithTargetUrl:landingPageUrl:] */

void FUN_103c51ec4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar5 - extraout_x12_00;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar5,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,param_3 == 0,1);
  if (param_4 != 0) {
    func_0x000107c5edb4(puVar3,param_4);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x38))(puVar3,param_4 == 0,1,lVar1);
  FUN_103c51860(lVar4,lVar5,puVar3);
  FUN_103c545b4(puVar3,0x112d36580,&UNK_10d9016d0);
  FUN_103c545b4(lVar5,0x112d36580,&UNK_10d9016d0);
  lVar5 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar1);
  uVar2 = 0;
  if ((int)lVar5 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar6 + 8))(lVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c52080; end: 103c5243b;  */

void FUN_103c52080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  
  lVar1 = 0x112d36580;
  uStack_c8 = param_4;
  lStack_c0 = param_5;
  uStack_a8 = param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = lVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (lVar3 - extraout_x12) - extraout_x12_00;
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12_02;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar10 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_03;
  func_0x000100029394(param_2,lVar5);
  pcVar8 = *(code **)(lVar6 + 0x30);
  lVar1 = lVar5;
  (*pcVar8)(lVar5,1,lVar2);
  if ((int)lVar1 != 1) {
    pcVar7 = *(code **)(lVar6 + 0x20);
    uStack_d0 = param_1;
    (*pcVar7)(lVar9,lVar5,lVar2);
    func_0x000100029394(uStack_a8,lVar4);
    lVar1 = lVar4;
    (*pcVar8)(lVar4,1,lVar2);
    if ((int)lVar1 != 1) {
      (*pcVar7)(lVar10,lVar4,lVar2);
      lVar5 = lStack_b8;
      pcVar8 = *(code **)(lVar6 + 0x10);
      (*pcVar8)(lStack_b8,lVar9,lVar2);
      pcVar7 = *(code **)(lVar6 + 0x38);
      (*pcVar7)(lVar5,0,1,lVar2);
      (*pcVar8)(lVar3,lVar10,lVar2);
      (*pcVar7)(lVar3,0,1,lVar2);
      lVar4 = lStack_b0;
      FUN_103c51860(lStack_b0,lVar5,lVar3);
      FUN_103c545b4(lVar3,0x112d36580,&UNK_10d9016d0);
      FUN_103c545b4(lVar5,0x112d36580,&UNK_10d9016d0);
      lVar1 = lStack_c0;
      if (lStack_c0 == 0) {
        pcVar8 = *(code **)(lVar6 + 8);
        (*pcVar8)(lVar10,lVar2);
        (*pcVar8)(lVar9,lVar2);
      }
      else {
        lVar3 = 0x112d38300;
        func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
        func_0x000107c61534();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined8 *)(lVar3 + 0x20) = 0x6469436353;
        *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
        *(undefined8 *)(lVar3 + 0x30) = uStack_c8;
        *(long *)(lVar3 + 0x38) = lVar1;
        func_0x000107c61434(lVar1);
        lVar1 = lVar3;
        func_0x0001001830b8(lVar3);
        func_0x000107c61588(lVar3);
        FUN_103c545b4((undefined8 *)(lVar3 + 0x20),0x112d38308,&UNK_10d902040);
        FUN_103c4ffa8(lVar5,lVar4,lVar1);
        func_0x000107c6142c(lVar1);
        FUN_103c545b4(lVar4,0x112d36580,&UNK_10d9016d0);
        pcVar8 = *(code **)(lVar6 + 8);
        (*pcVar8)(lVar10,lVar2);
        (*pcVar8)(lVar9,lVar2);
        func_0x0001001021cc(lVar5,lVar4);
      }
      func_0x0001001021cc(lVar4,uStack_d0);
      return;
    }
    (**(code **)(lVar6 + 8))(lVar9,lVar2);
    param_1 = uStack_d0;
    lVar5 = lVar4;
  }
  FUN_103c545b4(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x000100029394(param_2,param_1);
  return;
}



/* Entry: 103c5243c; end: 103c52477; -[URLParameterAppendUtil init] */

void FUN_103c5243c(undefined8 param_1)

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



/* Entry: 103c52478; end: 103c524ab;  */

void FUN_103c52478(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c524ac; end: 103c524af; -[URLParameterAppendUtil .cxx_destruct] */

void FUN_103c524ac(void)

{
  return;
}



/* Entry: 103c524b0; end: 103c52b83;  */

void FUN_103c524b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12_00;
  FUN_103c545f4();
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(lVar5);
  pcVar8 = *(code **)(lVar9 + 0x38);
  (*pcVar8)(lVar5,0,1,lVar1);
  func_0x000100029394(lVar5,lVar7);
  lVar2 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    FUN_103c545b4(lVar7,0x112d36580,&UNK_10d9016d0);
    func_0x0001001021cc(lVar5,param_1);
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar4,lVar7,lVar1);
    (*pcVar10)(lVar6,puVar4,lVar1);
    (*pcVar8)(lVar6,0,1,lVar1);
    lVar2 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar7 = lVar2;
    func_0x0001001830b8();
    uVar3 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c61408(lVar2 + 0x20,2,uVar3);
    FUN_103c4ffa8(param_1,lVar6,lVar7);
    func_0x000107c6142c(lVar7);
    FUN_103c545b4(lVar6,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar9 + 8))(puVar4,lVar1);
    FUN_103c545b4(lVar5,0x112d36580,&UNK_10d9016d0);
  }
  return;
}



/* Entry: 103c52b84; end: 103c52c7b;  */

undefined *
FUN_103c52b84(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c52c7c);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar5 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 3) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar3,puVar1,uVar6 << 3);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 8 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar5;
}



/* Entry: 103c52c7c; end: 103c52dab;  */

undefined * FUN_103c52c7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c52dac);
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
    puVar3 = (undefined *)0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103c52dac; end: 103c530e3;  */

ulong FUN_103c52dac(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c52e7c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c52e80);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010483f940(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x00010483f940(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000021,0x800000010f1b1780);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c52f48);
  (*pcVar2)();
}



/* Entry: 103c530e4; end: 103c5431b;  */

void FUN_103c530e4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long *plVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long extraout_x8;
  long lVar26;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar31;
  undefined *puVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  code *pcVar36;
  code *pcVar37;
  long lVar38;
  ulong uVar39;
  undefined8 uVar40;
  undefined8 auStack_160 [4];
  undefined1 auStack_140 [8];
  undefined8 auStack_138 [2];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *apuStack_70 [2];
  
  lVar10 = 0;
  uStack_b8 = param_5;
  uStack_b0 = param_7;
  func_0x000107c5ebbc();
  puStack_80 = *(undefined **)(lVar10 + -8);
  puStack_88 = (undefined *)lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)puStack_80 + 0x40));
  puStack_90 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar10 = 0x112d4b5b0;
  puStack_98 = (undefined *)lVar26;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar26 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar26 - extraout_x12_00;
  lVar11 = 0;
  func_0x000107c5ec24();
  lVar38 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar38 + 0x40));
  puVar30 = (undefined *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puStack_c8 = puVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (long)puVar30 - extraout_x12_01;
  uVar39 = param_1;
  uVar35 = param_2;
  lStack_c0 = lVar27;
  func_0x000107c5edac();
  uVar40 = param_8;
  if ((uVar39 & 1) == 0) {
    uStack_d8 = param_1;
    uStack_d0 = param_3;
    func_0x000107c5ebe4(lVar10,param_1,0);
    pcVar31 = *(code **)(lVar38 + 0x30);
    lVar13 = lVar10;
    (*pcVar31)(lVar10,1,lVar11);
    lVar8 = lStack_c0;
    if ((int)lVar13 != 1) {
      pcVar36 = *(code **)(lVar38 + 0x20);
      uStack_e0 = param_6;
      (*pcVar36)(lStack_c0,lVar10,lVar11);
      func_0x000107c5ebe4(lVar26,param_2,0);
      lVar10 = lVar26;
      (*pcVar31)(lVar26,1,lVar11);
      if ((int)lVar10 != 1) {
        puVar32 = puStack_c8;
        lStack_108 = lVar38;
        lStack_100 = lVar11;
        uStack_e8 = param_8;
        (*pcVar36)(puStack_c8,lVar26,lVar11);
        func_0x000107c5ebc4();
        puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar32 != (undefined *)0x0) {
          puVar30 = puVar32;
        }
        lVar10 = *(long *)(puVar30 + 0x10);
        uStack_f8 = param_2;
        uStack_f0 = param_4;
        if (lVar10 == 0) {
          func_0x000107c6142c(puVar30);
          puVar30 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
          puVar32 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar20 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        }
        else {
          apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000102d68ef4(0,lVar10,0);
          puVar20 = puVar30 + ((ulong)*(byte *)((long)puStack_80 + 0x50) + 0x20 &
                              ((ulong)*(byte *)((long)puStack_80 + 0x50) ^ 0xffffffffffffffff));
          pcStack_a0 = *(code **)((long)puStack_80 + 0x48);
          pcStack_a8 = *(code **)((long)puStack_80 + 0x10);
          puStack_110 = puVar30;
          do {
            puVar18 = apuStack_70[0];
            puVar32 = puStack_88;
            puVar30 = puStack_98;
            puVar15 = puStack_98;
            puVar24 = puVar20;
            (*pcStack_a8)(puStack_98,puVar20,puStack_88);
            func_0x000107c5ebb4();
            lVar26 = (long)puVar15;
            puVar25 = puVar24;
            func_0x000107c5ebb8();
            lVar11 = 0;
            if (puVar25 != (undefined *)0x0) {
              lVar11 = lVar26;
            }
            puVar4 = (undefined *)0xe000000000000000;
            if (puVar25 != (undefined *)0x0) {
              puVar4 = puVar25;
            }
            (**(code **)((long)puStack_80 + 8))(puVar30,puVar32);
            uVar39 = *(ulong *)(puVar18 + 0x10);
            apuStack_70[0] = puVar18;
            if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar39) {
              func_0x000102d68ef4(1 < *(ulong *)(puVar18 + 0x18),uVar39 + 1,1);
            }
            puVar32 = apuStack_70[0];
            *(ulong *)(apuStack_70[0] + 0x10) = uVar39 + 1;
            *(undefined **)(apuStack_70[0] + uVar39 * 0x20 + 0x20) = puVar15;
            *(undefined **)(apuStack_70[0] + uVar39 * 0x20 + 0x28) = puVar24;
            *(long *)(apuStack_70[0] + uVar39 * 0x20 + 0x30) = lVar11;
            *(undefined **)(apuStack_70[0] + uVar39 * 0x20 + 0x38) = puVar4;
            puVar20 = puVar20 + (long)pcStack_a0;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          func_0x000107c6142c(puStack_110);
          puVar30 = *(undefined **)(puVar32 + 0x10);
          puVar20 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        }
        PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar20;
        if (puVar30 != (undefined *)0x0) {
          uVar35 = 0x112d38330;
          func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
          func_0x000107c60498(puVar30,uVar35);
          puVar20 = puVar30;
        }
        apuStack_70[0] = puVar20;
        FUN_103c5431c(puVar32,1,apuStack_70);
        func_0x000107c6142c();
        pcVar31 = (code *)apuStack_70[0];
        func_0x000107c5ebc4();
        puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar32 != (undefined *)0x0) {
          puVar30 = puVar32;
        }
        lVar10 = *(long *)(puVar30 + 0x10);
        pcStack_a8 = pcVar31;
        if (lVar10 == 0) {
          func_0x000107c6142c(puVar30);
          puVar32 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
          puVar30 = (undefined *)0x0;
          puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar18 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        }
        else {
          puStack_110 = (undefined *)0x0;
          apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000102d68ef4(0,lVar10,0);
          puVar32 = puVar30 + ((ulong)*(byte *)((long)puStack_80 + 0x50) + 0x20 &
                              ((ulong)*(byte *)((long)puStack_80 + 0x50) ^ 0xffffffffffffffff));
          puStack_98 = *(undefined **)((long)puStack_80 + 0x48);
          pcStack_a0 = *(code **)((long)puStack_80 + 0x10);
          puStack_118 = puVar30;
          do {
            puVar20 = apuStack_70[0];
            puVar30 = puStack_88;
            puVar9 = puStack_90;
            puVar16 = puStack_90;
            puVar18 = puVar32;
            (*pcStack_a0)(puStack_90,puVar32,puStack_88);
            func_0x000107c5ebb4();
            puVar17 = puVar16;
            puVar15 = puVar18;
            func_0x000107c5ebb8();
            puVar5 = (undefined1 *)0x0;
            if (puVar15 != (undefined *)0x0) {
              puVar5 = puVar17;
            }
            puVar24 = (undefined *)0xe000000000000000;
            if (puVar15 != (undefined *)0x0) {
              puVar24 = puVar15;
            }
            (**(code **)((long)puStack_80 + 8))(puVar9,puVar30);
            uVar39 = *(ulong *)(puVar20 + 0x10);
            apuStack_70[0] = puVar20;
            if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar39) {
              func_0x000102d68ef4(1 < *(ulong *)(puVar20 + 0x18),uVar39 + 1,1);
            }
            puVar20 = apuStack_70[0];
            *(ulong *)(apuStack_70[0] + 0x10) = uVar39 + 1;
            *(undefined1 **)(apuStack_70[0] + uVar39 * 0x20 + 0x20) = puVar16;
            *(undefined **)(apuStack_70[0] + uVar39 * 0x20 + 0x28) = puVar18;
            *(undefined1 **)(apuStack_70[0] + uVar39 * 0x20 + 0x30) = puVar5;
            *(undefined **)(apuStack_70[0] + uVar39 * 0x20 + 0x38) = puVar24;
            puVar32 = puVar32 + (long)puStack_98;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          func_0x000107c6142c(puStack_118);
          puVar32 = *(undefined **)(puVar20 + 0x10);
          puVar30 = puStack_110;
          puVar18 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
          pcVar31 = pcStack_a8;
        }
        PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar18;
        if (puVar32 != (undefined *)0x0) {
          func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
          func_0x000107c60498();
          puVar18 = puVar32;
        }
        apuStack_70[0] = puVar18;
        FUN_103c5431c(puVar20,1,apuStack_70);
        pcStack_a0 = (code *)puVar30;
        if (puVar30 != (undefined *)0x0) {
          func_0x000107c6142c(puVar20);
          func_0x000107c61574(apuStack_70[0]);
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x103c5400c);
          (*pcVar31)();
        }
        func_0x000107c6142c(puVar20);
        pcVar36 = (code *)(apuStack_70[0] + 0x40);
        puStack_98 = (undefined *)(-1L << ((ulong)(byte)apuStack_70[0][0x20] & 0x3f));
        uVar39 = 0xffffffffffffffff;
        if ((ulong)-(long)puStack_98 < 0x40) {
          uVar39 = ~(-1L << (-(long)puStack_98 & 0x3fU));
        }
        uVar39 = uVar39 & *(ulong *)pcVar36;
        puStack_90 = apuStack_70[0];
        uVar28 = 0x3f - (long)puStack_98;
        func_0x000107c6157c();
        puVar20 = (undefined *)0;
        puVar30 = (undefined *)0;
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar32 = puStack_90;
joined_r0x000103c537cc:
        do {
          while (puStack_90 = puVar32, uVar39 == 0) {
            lVar10 = (long)puVar20 + 1;
            if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
              pcVar31 = (code *)SoftwareBreakpoint(1,0x103c53ff4);
              (*pcVar31)();
            }
            if ((long)(uVar28 >> 6) <= lVar10) {
              func_0x000107c61574(puVar32);
              func_0x000107c61574(pcVar31);
              func_0x000100f18de0(puVar32,pcVar36,~(ulong)puStack_98,puVar30,0);
              uVar39 = 0;
              lVar10 = *(long *)(puStack_80 + 0x10);
              puStack_88 = puStack_80 + 0x28;
              puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
              puStack_90 = (undefined1 *)lVar10;
              do {
                puVar34 = (undefined8 *)(puStack_88 + uVar39 * 0x10);
                uVar28 = uVar39;
                do {
                  puVar5 = puStack_90;
                  lVar11 = lRam0000000112ffb3c0;
                  uVar39 = uVar28 + 1;
                  if (uVar39 - lVar10 == 1) {
                    uVar39 = 0;
                    puStack_88 = puStack_80 + 0x28;
                    puVar32 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    puStack_98 = puVar30;
                    goto LAB_103c53c30;
                  }
                  if (*(ulong *)(puStack_80 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
                    pcVar31 = (code *)SoftwareBreakpoint(1,0x103c53ff8);
                    (*pcVar31)();
                  }
                  uVar29 = puVar34[-1];
                  pcVar31 = (code *)*puVar34;
                  func_0x000107c61434(pcVar31);
                  if (lVar11 != -1) {
                    pcVar36 = FUN_103c4fc98;
                    func_0x000107c61568(0x112ffb3c0);
                  }
                  pcVar37 = pcRam0000000112ffb3c8;
                  if (*(long *)(pcRam0000000112ffb3c8 + 0x10) != 0) {
                    func_0x000107c61434(pcRam0000000112ffb3c8);
                    uVar28 = uVar29;
                    pcVar36 = pcVar31;
                    func_0x000100029284();
                    if (((ulong)pcVar36 & 1) == 0) {
                      func_0x000107c6142c(pcVar37);
                      goto LAB_103c53a98;
                    }
                    uVar35 = *(undefined8 *)(*(long *)(pcVar37 + 0x38) + uVar28 * 8);
                    func_0x000107c6142c(pcVar37);
LAB_103c53b6c:
                    func_0x000107c6142c(pcVar31);
                    goto LAB_103c53b74;
                  }
LAB_103c53a98:
                  if (((uVar29 == 0x74626e) && (pcVar31 == (code *)0xe300000000000000)) ||
                     (uVar28 = uVar29, pcVar36 = pcVar31,
                     func_0x000107c605b8(uVar29,pcVar31,0x74626e,0xe300000000000000,0),
                     (uVar28 & 1) != 0)) {
                    uVar35 = 5;
                    goto LAB_103c53b6c;
                  }
                  if (((uVar29 == 0x6372756f735f7774) && (pcVar31 == (code *)0xe900000000000065)) ||
                     (uVar28 = uVar29, pcVar36 = pcVar31,
                     func_0x000107c605b8(uVar29,pcVar31,0x6372756f735f7774,0xe900000000000065,0),
                     (uVar28 & 1) != 0)) {
                    uVar35 = 6;
                    goto LAB_103c53b6c;
                  }
                  if ((uVar29 == 0x646964615f7774) && (pcVar31 == (code *)0xe700000000000000)) {
                    uVar35 = 8;
                    goto LAB_103c53b6c;
                  }
                  puVar34 = puVar34 + 2;
                  pcVar36 = pcVar31;
                  func_0x000107c605b8(uVar29,pcVar31,0x646964615f7774,0xe700000000000000,0);
                  func_0x000107c6142c(pcVar31);
                  uVar28 = uVar39;
                } while ((uVar29 & 1) == 0);
                uVar35 = 8;
LAB_103c53b74:
                puVar32 = puVar30;
                func_0x000107c61558();
                puVar20 = puVar30;
                if (((ulong)puVar32 & 1) == 0) {
                  pcVar36 = (code *)(*(long *)(puVar30 + 0x10) + 1);
                  puVar20 = (undefined *)0x0;
                  FUN_103c52b84(0,pcVar36,1,puVar30,0x112ffb3d8,&UNK_10dc69928);
                }
                uVar28 = *(ulong *)(puVar20 + 0x10);
                pcVar31 = (code *)(uVar28 + 1);
                puVar30 = puVar20;
                if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar28) {
                  puVar30 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
                  pcVar36 = pcVar31;
                  FUN_103c52b84(puVar30,pcVar31,1,puVar20,0x112ffb3d8,&UNK_10dc69928);
                }
                *(code **)(puVar30 + 0x10) = pcVar31;
                *(undefined8 *)(puVar30 + uVar28 * 8 + 0x20) = uVar35;
              } while( true );
            }
            puVar20 = (undefined *)lVar10;
            uVar39 = *(ulong *)(pcVar36 + lVar10 * 8);
          }
          uVar29 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar39 = uVar39 - 1 & uVar39;
          uVar29 = (long)puVar20 << 10 | LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) << 4;
          plVar2 = (long *)(*(long *)(puVar32 + 0x30) + uVar29);
          lVar10 = *plVar2;
          uVar33 = plVar2[1];
          puVar3 = (ulong *)(*(long *)(puVar32 + 0x38) + uVar29);
          uVar29 = *puVar3;
          uVar6 = puVar3[1];
          lVar11 = *(long *)(pcVar31 + 0x10);
          puStack_88 = puVar20;
          func_0x000107c61434(uVar33);
          if (lVar11 == 0) {
LAB_103c538f8:
            puVar30 = puStack_80;
            func_0x000107c61558();
            if (((ulong)puVar30 & 1) == 0) {
              puVar30 = (undefined *)0x0;
              func_0x0001000d182c(0,*(long *)(puStack_80 + 0x10) + 1,1);
              puStack_80 = puVar30;
            }
            puVar20 = puStack_88;
            uVar29 = *(ulong *)(puStack_80 + 0x10);
            if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar29) {
              puVar30 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
              func_0x0001000d182c(puVar30,uVar29 + 1,1,puStack_80);
              puStack_80 = puVar30;
            }
            *(ulong *)(puStack_80 + 0x10) = uVar29 + 1;
            *(long *)(puStack_80 + uVar29 * 0x10 + 0x20) = lVar10;
            *(ulong *)(puStack_80 + uVar29 * 0x10 + 0x28) = uVar33;
            puVar30 = puVar20;
            pcVar31 = pcStack_a8;
            puVar32 = puStack_90;
            goto joined_r0x000103c537cc;
          }
          func_0x000107c61434(uVar6);
          pcVar31 = pcStack_a8;
          func_0x000107c6157c(pcStack_a8);
          lVar11 = lVar10;
          uVar19 = uVar33;
          func_0x000100029284();
          if ((uVar19 & 1) == 0) {
            func_0x000107c6142c(uVar6);
            func_0x000107c61574(pcVar31);
            goto LAB_103c538f8;
          }
          puVar3 = (ulong *)(*(long *)(pcVar31 + 0x38) + lVar11 * 0x10);
          uVar19 = *puVar3;
          uVar7 = puVar3[1];
          func_0x000107c61434(uVar7);
          func_0x000107c61574(pcVar31);
          if (uVar19 == uVar29 && uVar7 == uVar6) {
            func_0x000107c6142c(uVar6);
            func_0x000107c6142c(uVar33);
            uVar33 = uVar7;
          }
          else {
            func_0x000107c605b8(uVar19,uVar7,uVar29,uVar6,0);
            func_0x000107c6142c(uVar7);
            func_0x000107c6142c(uVar6);
            if ((uVar19 & 1) == 0) goto LAB_103c538f8;
          }
          func_0x000107c6142c(uVar33);
          puVar20 = puStack_88;
          puVar30 = puStack_88;
          pcVar31 = pcStack_a8;
          puVar32 = puStack_90;
        } while( true );
      }
      (**(code **)(lVar38 + 8))(lVar8,lVar11);
      param_6 = uStack_e0;
      lVar10 = lVar26;
    }
    uVar35 = 0x112d4b5b0;
    FUN_103c545b4(lVar10,0x112d4b5b0,&UNK_10d912140);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434();
    func_0x000107c5ed70();
    uVar14 = uVar40;
    uVar23 = uVar35;
    func_0x000107c5ed70();
    uVar12 = 0;
    func_0x0001046add20(0);
    func_0x000107c610f8();
    *(undefined1 *)(lVar27 + -8) = 1;
    *(undefined **)(lVar27 + -0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + -0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar27 + -0x20) = 0;
    *(undefined **)(lVar27 + -0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + -0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(lVar27 + -0x40) = uVar14;
    *(undefined8 *)(lVar27 + -0x38) = uVar23;
    param_3 = uStack_d0;
  }
  else {
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434();
    func_0x000107c5ed70();
    uVar14 = uVar40;
    uVar23 = uVar35;
    func_0x000107c5ed70();
    uVar12 = 0;
    func_0x0001046add20(0);
    func_0x000107c610f8();
    *(undefined1 *)(lVar27 + -8) = 1;
    *(undefined **)(lVar27 + -0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + -0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar27 + -0x20) = 0;
    *(undefined **)(lVar27 + -0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar27 + -0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(lVar27 + -0x40) = uVar14;
    *(undefined8 *)(lVar27 + -0x38) = uVar23;
  }
  func_0x0001046ac0ec(uVar12,param_3,param_4,uStack_b8,param_6,uStack_b0,param_8,uVar40,uVar35);
  return;
LAB_103c53c30:
  puVar34 = (undefined8 *)(puStack_88 + uVar39 * 0x10);
  uVar28 = uVar39;
  do {
    lVar10 = lRam0000000112ffb3c0;
    uVar39 = uVar28 + 1;
    if (uVar39 - (long)puVar5 == 1) {
      puVar20 = puVar32;
      FUN_103c4da80();
      func_0x000107c6142c(puVar32);
      puVar30 = puStack_98;
      pcVar31 = *(code **)(puStack_98 + 0x10);
      if (pcVar31 == (code *)0x0) {
        func_0x000107c6142c(puStack_98);
        puVar32 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar35 = uStack_d0;
      }
      else {
        apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        pcVar36 = pcVar31;
        func_0x00010168d76c(0,pcVar31,0);
        uVar35 = uStack_d0;
        lVar10 = 0x20;
        pcVar37 = *(code **)(apuStack_70[0] + 0x10);
        do {
          uVar40 = *(undefined8 *)(puVar30 + lVar10);
          pcVar1 = pcVar37 + 1;
          if ((code *)(*(ulong *)(apuStack_70[0] + 0x18) >> 1) <= pcVar37) {
            pcVar36 = pcVar1;
            func_0x00010168d76c(1 < *(ulong *)(apuStack_70[0] + 0x18),pcVar1,1);
          }
          puVar32 = apuStack_70[0];
          *(code **)(apuStack_70[0] + 0x10) = pcVar1;
          *(undefined8 *)(apuStack_70[0] + (long)pcVar37 * 8 + 0x20) = uVar40;
          lVar10 = lVar10 + 8;
          pcVar31 = pcVar31 + -1;
          pcVar37 = pcVar1;
        } while (pcVar31 != (code *)0x0);
        func_0x000107c6142c(puVar30);
      }
      puVar30 = puVar20;
      FUN_103c4fa88();
      func_0x000107c6142c(puVar20);
      uVar40 = uStack_f0;
      func_0x000107c61434(uStack_f0);
      uVar23 = uStack_e0;
      func_0x000107c61434(uStack_e0);
      uVar14 = uStack_e8;
      uVar12 = uStack_e8;
      func_0x000107c61434();
      func_0x000107c5ed70();
      uVar21 = uVar12;
      pcVar31 = pcVar36;
      func_0x000107c5ed70();
      uVar22 = 0;
      func_0x0001046add20(0);
      func_0x000107c610f8();
      *(undefined1 *)(lVar27 + -8) = 1;
      *(undefined **)(lVar27 + -0x18) = puVar30;
      *(undefined **)(lVar27 + -0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined1 *)(lVar27 + -0x20) = 0;
      puVar30 = puStack_80;
      *(undefined **)(lVar27 + -0x30) = puVar32;
      *(undefined **)(lVar27 + -0x28) = puVar30;
      *(undefined8 *)(lVar27 + -0x40) = uVar21;
      *(code **)(lVar27 + -0x38) = pcVar31;
      func_0x0001046ac0ec(uVar22,uVar35,uVar40,uStack_b8,uVar23,uStack_b0,uVar14,uVar12,pcVar36);
      lVar10 = lStack_100;
      pcVar31 = *(code **)(lStack_108 + 8);
      (*pcVar31)(puStack_c8,lStack_100);
      (*pcVar31)(lStack_c0,lVar10);
      return;
    }
    if (*(ulong *)(puStack_80 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x103c53ffc);
      (*pcVar31)();
    }
    uVar29 = puVar34[-1];
    pcVar31 = (code *)*puVar34;
    func_0x000107c61434(pcVar31);
    if (lVar10 != -1) {
      pcVar36 = FUN_103c4fc98;
      func_0x000107c61568(0x112ffb3c0);
    }
    pcVar37 = pcRam0000000112ffb3c8;
    if (*(long *)(pcRam0000000112ffb3c8 + 0x10) != 0) {
      func_0x000107c61434(pcRam0000000112ffb3c8);
      pcVar36 = pcVar31;
      func_0x000100029284(uVar29);
      if (((ulong)pcVar36 & 1) == 0) {
        func_0x000107c6142c(pcVar37);
        goto LAB_103c53ce0;
      }
      func_0x000107c6142c(pcVar31);
      uVar35 = 1;
LAB_103c53dac:
      func_0x000107c6142c(pcVar37);
      goto LAB_103c53db4;
    }
LAB_103c53ce0:
    pcVar37 = pcVar31;
    if (((uVar29 == 0x74626e) && (pcVar31 == (code *)0xe300000000000000)) ||
       (uVar28 = uVar29, pcVar36 = pcVar31,
       func_0x000107c605b8(uVar29,pcVar31,0x74626e,0xe300000000000000,0), (uVar28 & 1) != 0)) {
      uVar35 = 2;
      goto LAB_103c53dac;
    }
    if (((uVar29 == 0x6372756f735f7774) && (pcVar31 == (code *)0xe900000000000065)) ||
       ((uVar28 = uVar29, pcVar36 = pcVar31,
        func_0x000107c605b8(uVar29,pcVar31,0x6372756f735f7774,0xe900000000000065,0),
        (uVar28 & 1) != 0 ||
        ((uVar29 == 0x646964615f7774 && (pcVar31 == (code *)0xe700000000000000)))))) {
      uVar35 = 3;
      goto LAB_103c53dac;
    }
    puVar34 = puVar34 + 2;
    pcVar36 = pcVar31;
    func_0x000107c605b8(uVar29,pcVar31,0x646964615f7774,0xe700000000000000,0);
    func_0x000107c6142c(pcVar31);
    uVar28 = uVar39;
  } while ((uVar29 & 1) == 0);
  uVar35 = 3;
LAB_103c53db4:
  puVar30 = puVar32;
  func_0x000107c61558();
  puVar20 = puVar32;
  if (((ulong)puVar30 & 1) == 0) {
    pcVar36 = (code *)(*(long *)(puVar32 + 0x10) + 1);
    puVar20 = (undefined *)0x0;
    FUN_103c52b84(0,pcVar36,1,puVar32,0x112ffb3d0,&UNK_10dc69920);
  }
  uVar28 = *(ulong *)(puVar20 + 0x10);
  pcVar31 = (code *)(uVar28 + 1);
  puVar32 = puVar20;
  if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar28) {
    puVar32 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
    pcVar36 = pcVar31;
    FUN_103c52b84(puVar32,pcVar31,1,puVar20,0x112ffb3d0,&UNK_10dc69920);
  }
  *(code **)(puVar32 + 0x10) = pcVar31;
  *(undefined8 *)(puVar32 + uVar28 * 8 + 0x20) = uVar35;
  goto LAB_103c53c30;
}



/* Entry: 103c5431c; end: 103c545b3;  */

void FUN_103c5431c(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar14 = *param_3;
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  uVar8 = uVar3;
  uVar10 = uVar5;
  func_0x000100029284();
  lVar11 = *(long *)(lVar14 + 0x10);
  uVar12 = (ulong)~(uint)uVar10 & 1;
  lVar15 = lVar11 + uVar12;
  if (SCARRY8(lVar11,uVar12)) {
LAB_103c545ac:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103c545b0);
    (*pcVar7)();
  }
  if (*(long *)(lVar14 + 0x18) < lVar15) {
    func_0x0001001833c8(lVar15,param_2 & 1);
    uVar8 = uVar3;
    uVar12 = uVar5;
    func_0x000100029284();
    if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) {
LAB_103c543d0:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x103c543e0);
      (*pcVar7)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000100184498();
    lVar15 = *param_3;
    goto joined_r0x000103c54430;
  }
  lVar15 = *param_3;
joined_r0x000103c54430:
  if ((uVar10 & 1) == 0) {
    lVar11 = lVar15 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
    *puVar16 = uVar4;
    puVar16[1] = uVar6;
    if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
LAB_103c545b0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x103c545b4);
      (*pcVar7)();
    }
    *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
  }
  else {
    func_0x000107c6142c(uVar5);
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
    uVar9 = puVar16[1];
    *puVar16 = uVar4;
    puVar16[1] = uVar6;
    func_0x000107c6142c(uVar9);
  }
  if (lVar13 != 1) {
    lVar13 = lVar13 + -1;
    puVar16 = (undefined8 *)(param_1 + 0x58);
    do {
      uVar3 = puVar16[-3];
      uVar5 = puVar16[-2];
      uVar4 = puVar16[-1];
      uVar6 = *puVar16;
      lVar14 = *param_3;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      uVar8 = uVar3;
      uVar10 = uVar5;
      func_0x000100029284();
      lVar11 = *(long *)(lVar14 + 0x10);
      uVar12 = (ulong)~(uint)uVar10 & 1;
      lVar15 = lVar11 + uVar12;
      if (SCARRY8(lVar11,uVar12)) goto LAB_103c545ac;
      if (*(long *)(lVar14 + 0x18) < lVar15) {
        func_0x0001001833c8(lVar15,1);
        uVar8 = uVar3;
        uVar12 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) goto LAB_103c543d0;
      }
      lVar15 = *param_3;
      if ((uVar10 & 1) == 0) {
        lVar11 = lVar15 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) goto LAB_103c545b0;
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
        uVar9 = puVar2[1];
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        func_0x000107c6142c(uVar9);
      }
      puVar16 = puVar16 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 103c545b4; end: 103c545f3;  */

undefined8 FUN_103c545b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c545f4; end: 103c54613;  */

void FUN_103c545f4(void)

{
  func_0x000107c61168(&PTR_PTR_112949110);
  return;
}



/* Entry: 103c54614; end: 103c5470f; +[URLUtil appendQueryParamsWithUrl:queryParams:overwrite:] */

void FUN_103c54614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar3 - extraout_x12;
  func_0x000107c5edb4(puVar3,param_3);
  uVar2 = 0;
  func_0x000107c5ebbc(0);
  func_0x000107c5fc54(param_4,uVar2);
  FUN_103c4e488(lVar5);
  func_0x000107c6142c(param_4);
  pcVar4 = *(code **)(lVar6 + 8);
  (*pcVar4)(puVar3,lVar1);
  func_0x000107c5ed90();
  (*pcVar4)(lVar5,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103c54710; end: 103c5472f;  */

uint FUN_103c54710(undefined8 param_1,undefined8 param_2)

{
  FUN_103c54a88(param_1,param_2,FUN_103c4efd8);
  return (uint)param_1 & 1;
}



/* Entry: 103c54730; end: 103c5473b; +[URLUtil isSameWithLeft:right:] */

uint FUN_103c54730(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar3,param_3 == 0,1);
  if (param_4 != 0) {
    func_0x000107c5edb4(puVar2,param_4);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_4 == 0,1,lVar1);
  lVar1 = lVar3;
  FUN_103c54a88(lVar3,puVar2,FUN_103c4efd8);
  func_0x0001000293e4(puVar2);
  func_0x0001000293e4(lVar3);
  return (uint)lVar1 & 1;
}



/* Entry: 103c5473c; end: 103c5480f; +[URLUtil getQueryParamsWithUrl:keys:] */

void FUN_103c5473c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  uVar2 = param_4;
  func_0x000103c4eaa0();
  func_0x000107c6142c(param_4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uVar3 = 0;
  func_0x000107c5ebbc(0);
  uVar4 = uVar2;
  func_0x000107c5fc48(uVar2,uVar3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103c54810; end: 103c5481b; +[URLUtil shareTheSameDomainWithUrl1:url2:] */

uint FUN_103c54810(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar3,param_3 == 0,1);
  if (param_4 != 0) {
    func_0x000107c5edb4(puVar2,param_4);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_4 == 0,1,lVar1);
  lVar1 = lVar3;
  FUN_103c54a88(lVar3,puVar2,FUN_103c4ee2c);
  func_0x0001000293e4(puVar2);
  func_0x0001000293e4(lVar3);
  return (uint)lVar1 & 1;
}



/* Entry: 103c5481c; end: 103c5495b;  */

uint FUN_103c5481c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar3,param_3 == 0,1);
  if (param_4 != 0) {
    func_0x000107c5edb4(puVar2,param_4);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_4 == 0,1,lVar1);
  lVar1 = lVar3;
  FUN_103c54a88(lVar3,puVar2,param_5);
  func_0x0001000293e4(puVar2);
  func_0x0001000293e4(lVar3);
  return (uint)lVar1 & 1;
}



/* Entry: 103c5495c; end: 103c54a17; +[URLUtil isSnapchatDomainWithUrl:] */

uint FUN_103c5495c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffe0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  puVar2 = puVar3;
  FUN_103c54c2c(puVar3);
  func_0x0001000293e4(puVar3);
  return (uint)puVar2 & 1;
}



/* Entry: 103c54a18; end: 103c54a53; -[URLUtil init] */

void FUN_103c54a18(undefined8 param_1)

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



/* Entry: 103c54a54; end: 103c54a87;  */

void FUN_103c54a54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c54a88; end: 103c54c2b;  */

uint FUN_103c54a88(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar7 - extraout_x12;
  lVar2 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar5 - extraout_x8_00;
  lVar11 = (long)*(int *)(lVar2 + 0x30);
  func_0x000100029394(param_1,lVar8);
  func_0x000100029394(param_2,lVar8 + lVar11);
  pcVar9 = *(code **)(lVar10 + 0x30);
  lVar3 = lVar8;
  (*pcVar9)(lVar8,1,lVar1);
  lVar2 = lVar8 + lVar11;
  (*pcVar9)(lVar2,1,lVar1);
  if ((int)lVar3 == 1) {
    if ((int)lVar2 == 1) {
      uVar6 = 1;
      goto LAB_103c54c08;
    }
    lVar8 = lVar8 + lVar11;
  }
  else if ((int)lVar2 != 1) {
    pcVar9 = *(code **)(lVar10 + 0x20);
    (*pcVar9)(lVar5,lVar8,lVar1);
    (*pcVar9)(puVar7,lVar8 + lVar11,lVar1);
    puVar4 = puVar7;
    (*param_3)(puVar7);
    uVar6 = (uint)puVar4;
    pcVar9 = *(code **)(lVar10 + 8);
    (*pcVar9)(puVar7,lVar1);
    (*pcVar9)(lVar5,lVar1);
    goto LAB_103c54c08;
  }
  func_0x0001000293e4(lVar8);
  uVar6 = 0;
LAB_103c54c08:
  return uVar6 & 1;
}



/* Entry: 103c54c2c; end: 103c54da7;  */

uint FUN_103c54c2c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  func_0x000100029394(param_1,puVar6);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar4 = 1;
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar6);
    uVar7 = 0;
  }
  else {
    func_0x000107c5edbc();
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c5fb1c();
      func_0x000107c6142c(lVar4);
      if ((puVar2 == (undefined1 *)0x7461686370616e73 && lVar5 == -0x13ffffff92909cd2) ||
         (puVar3 = puVar2, func_0x000107c605b8(puVar2,lVar5,0x7461686370616e73,0xec0000006d6f632e,0)
         , ((ulong)puVar3 & 1) != 0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        func_0x000107c5fbb8(0x61686370616e732e,0xed00006d6f632e74,puVar2,lVar5);
      }
      func_0x000107c6142c(lVar5);
    }
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
  }
  return uVar7 & 1;
}



/* Entry: 103c54da8; end: 103c54dc7;  */

void FUN_103c54da8(void)

{
  func_0x000107c61168(&PTR_PTR_1129491c0);
  return;
}



/* Entry: 103c54dc8; end: 103c54e0f;  */

undefined * FUN_103c54dc8(void)

{
  return &UNK_1106ef070;
}



/* Entry: 103c54e10; end: 103c54e4b; -[_TtC11WebViewUtil26WebViewScriptCallbackNames init] */

void FUN_103c54e10(undefined8 param_1)

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



/* Entry: 103c54e4c; end: 103c54e7f;  */

void FUN_103c54e4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c54e80; end: 103c54e83; -[_TtC11WebViewUtil26WebViewScriptCallbackNames .cxx_destruct] */

void FUN_103c54e80(void)

{
  return;
}



/* Entry: 103c54e84; end: 103c54ea3;  */

void FUN_103c54e84(void)

{
  func_0x000107c61168(&PTR_PTR_112949270);
  return;
}



/* Entry: 103c54ea4; end: 103c5501f;  */

void FUN_103c54ea4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000104848f7c(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000104848b58(0x6d7361,0xe300000000000000,param_1,param_2,1,0,uVar1);
  return;
}



/* Entry: 103c55020; end: 103c5505b; -[_TtC11WebViewUtil17WebViewScriptUtil init] */

void FUN_103c55020(undefined8 param_1)

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



/* Entry: 103c5505c; end: 103c550cb;  */

void FUN_103c5505c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c550cc; end: 103c55197;  */

undefined * FUN_103c550cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1b1830);
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c3ee18();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c4539c();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x000107c5f9e8();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      return puVar4;
    }
    func_0x000107c61170(puVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 103c55198; end: 103c551b7;  */

void FUN_103c55198(undefined8 param_1,undefined8 param_2)

{
  FUN_103c551b8();
  uRam0000000112ffb538 = param_1;
  uRam0000000112ffb540 = param_2;
  return;
}



/* Entry: 103c551b8; end: 103c5542f;  */

undefined1  [16] FUN_103c551b8(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar6 = 0;
  uVar7 = 0;
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar1 = PTR___sypN_11034f1a8;
  if (puVar4 == (undefined8 *)0x0) {
LAB_103c552d4:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    func_0x000103c56980(&uStack_50,0x112d387f8,&UNK_10d902650);
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_103c552fc:
    func_0x000103c56980(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar3 = puVar4;
    puVar8 = (undefined8 *)PTR___sSSN_11034da80;
    func_0x000107c5f9e8(puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar4);
    if (puVar3 == (undefined8 *)0x0) goto LAB_103c552d4;
    lVar5 = *(long *)PTR__kCFBundleExecutableKey_11034ab98;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c5542c);
      (*pcVar2)();
    }
    func_0x000107c5faec();
    if (puVar3[2] == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
LAB_103c5535c:
      func_0x000107c6142c(puVar8);
LAB_103c55364:
      puVar4 = (undefined8 *)0x112d387f8;
      func_0x000103c56980(&uStack_50,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000107c61434(puVar3);
      puVar4 = puVar8;
      func_0x000100029284(lVar5);
      if (((ulong)puVar4 & 1) == 0) {
        uStack_48 = 0;
        uStack_50 = 0;
        lStack_38 = 0;
        uStack_40 = 0;
        func_0x000107c6142c(puVar8);
        puVar8 = puVar3;
        goto LAB_103c5535c;
      }
      func_0x0001000bb420(puVar3[7] + lVar5 * 0x20,&uStack_50);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puVar3);
      if (lStack_38 == 0) goto LAB_103c55364;
      puVar4 = &uStack_50;
      func_0x000107c6147c(&uStack_60,puVar4,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) != 0) {
        func_0x000107c6142c(puVar3);
        goto LAB_103c55328;
      }
    }
    lVar5 = *(long *)PTR__kCFBundleIdentifierKey_11034aba0;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c55430);
      (*pcVar2)();
    }
    func_0x000107c5faec();
    if (puVar3[2] == 0) {
LAB_103c553e0:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(puVar3);
      puVar8 = puVar4;
      func_0x000100029284(lVar5);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000107c6142c(puVar3);
        goto LAB_103c553e0;
      }
      func_0x0001000bb420(puVar3[7] + lVar5 * 0x20,&uStack_50);
      func_0x000107c6142c(puVar4);
      puVar4 = puVar3;
    }
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar3);
    if (lStack_38 == 0) goto LAB_103c552fc;
    func_0x000107c6147c(&uStack_60,&uStack_50,puVar1 + 8,PTR___sSSN_11034da80,6);
    if ((uVar7 & 1) != 0) goto LAB_103c55328;
  }
  uStack_58 = 0xe800000000000000;
  uStack_60 = 0x7461686370616e53;
LAB_103c55328:
  auVar9._8_8_ = uStack_58;
  auVar9._0_8_ = uStack_60;
  return auVar9;
}



/* Entry: 103c55430; end: 103c5544f;  */

void FUN_103c55430(undefined8 param_1,undefined8 param_2)

{
  FUN_103c55450();
  uRam0000000112ffb580 = param_1;
  uRam0000000112ffb588 = param_2;
  return;
}



/* Entry: 103c55450; end: 103c555c3;  */

undefined1  [16] FUN_103c55450(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar6 = 0;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = PTR___sypN_11034f1a8;
  if (puVar3 == (undefined *)0x0) {
LAB_103c55560:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_103c5558c:
    func_0x000103c56980(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar4 = puVar3;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c5f9e8(puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_103c55560;
    lVar5 = *(long *)PTR__kCFBundleVersionKey_11034abb0;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c555c4);
      (*pcVar1)();
    }
    func_0x000107c5faec();
    if (*(long *)(puVar4 + 0x10) == 0) {
LAB_103c55574:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar4);
      goto LAB_103c5558c;
    }
    func_0x000107c61434(puVar4);
    puVar3 = puVar7;
    func_0x000100029284(lVar5);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c6142c(puVar4);
      goto LAB_103c55574;
    }
    func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar5 * 0x20,&uStack_50);
    func_0x000107c6142c(puVar7);
    func_0x000107c61430(puVar4,2);
    if (lStack_38 == 0) goto LAB_103c5558c;
    func_0x000107c6147c(&uStack_60,&uStack_50,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((uVar6 & 1) != 0) goto LAB_103c555ac;
  }
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
LAB_103c555ac:
  auVar8._8_8_ = uStack_58;
  auVar8._0_8_ = uStack_60;
  return auVar8;
}


