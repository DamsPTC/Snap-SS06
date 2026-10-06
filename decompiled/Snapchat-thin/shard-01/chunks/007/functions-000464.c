/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10139b3b4; end: 10139b3d3;  */

void FUN_10139b3b4(void)

{
  func_0x000107c61168(&PTR_PTR_112d783f8);
  return;
}



/* Entry: 10139b3d4; end: 10139b557;  */

void FUN_10139b3d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar2 = param_3;
  func_0x000107c450e0();
  if (lVar2 == 0) {
    func_0x000107c61174(param_3);
  }
  else {
    func_0x000107c5b078(param_3);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(param_1,param_2);
    puVar4 = &UNK_1103aae58;
    func_0x000107c613fc(&UNK_1103aae58,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    puVar5 = &UNK_1103aae80;
    func_0x000107c613fc(&UNK_1103aae80,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10139b63c;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    uStack_60 = 0x10139b674;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_100f9148c;
    puStack_68 = &UNK_1103aae98;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c45138(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c60bd0(ppuVar6);
    puVar7 = puVar5;
    func_0x000107c61544(puVar5,"",0x81,0x24,0x1f,1);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10139b558);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10139b558; end: 10139b63b;  */

undefined1  [16] FUN_10139b558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c46110();
  func_0x000107c61170(param_1);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_10139b3d4();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x000107c60bb4(0x3ff0000000000000);
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar2);
        goto LAB_10139b628;
      }
      func_0x000107c61170(puVar1);
      puVar1 = puVar2;
    }
    func_0x000107c61170(puVar1);
  }
  puVar4 = (undefined *)0x0;
  param_2 = 0xf000000000000000;
LAB_10139b628:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar4;
  return auVar5;
}



/* Entry: 10139b63c; end: 10139b693;  */

void FUN_10139b63c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5b078(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,param_1,param_2,uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10139b694; end: 10139b6af;  */

void FUN_10139b694(long param_1,long param_2)

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



/* Entry: 10139b6b0; end: 10139b6bb; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78460;
  func_0x000107c61428(param_1 + _DAT_112d78460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139b6bc; end: 10139b6c7; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78460;
  func_0x000107c61428(param_1 + _DAT_112d78460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139b6c8; end: 10139b6d3; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78468;
  func_0x000107c61428(param_1 + _DAT_112d78468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139b6d4; end: 10139b6df; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78468;
  func_0x000107c61428(param_1 + _DAT_112d78468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139b6e0; end: 10139b6eb; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint genAIIdentityServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78470;
  func_0x000107c61428(param_1 + _DAT_112d78470,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139b6ec; end: 10139b6f7; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint setGenAIIdentityServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78470;
  func_0x000107c61428(param_1 + _DAT_112d78470,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139b6f8; end: 10139b703; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b6f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78478;
  func_0x000107c61428(param_1 + _DAT_112d78478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139b704; end: 10139b747;  */

void FUN_10139b704(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139b748; end: 10139b753; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78478;
  func_0x000107c61428(param_1 + _DAT_112d78478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139b754; end: 10139b7a7;  */

void FUN_10139b754(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139b7a8; end: 10139b8cb;  */

/* WARNING: Possible PIC construction at 0x00010139b8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139b898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139b8ac) */
/* WARNING: Removing unreachable block (ram,0x00010139b89c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139b7a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c43d54();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c40434();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = 0;
        FUN_101398a6c(0);
        func_0x000107c613fc();
        FUN_101398668(lVar1,lVar2,lVar3,lVar4,uVar5);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d78480);
        *(long *)(unaff_x20 + _DAT_112d78480) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar5);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10139b8cc; end: 10139b8f3; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint begin] */

void FUN_10139b8cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10139b7a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139b8f4; end: 10139b937; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint end] */

void FUN_10139b8f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139b938; end: 10139bba7;  */

void FUN_10139b938(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53414();
    }
    else {
      if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10c5bd0)) {
        uVar2 = 0xd000000000000015;
        func_0x000107c605b8(0xd000000000000015,0x800000010ef3a430,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000017;
          if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e6230)) &&
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "GenerativeAIIdentityRemoteApiPlugin/SCGenerativeAIIdentityRemoteApiPluginEntryPoint.swift"
                                ,0x59,2,0x33,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10139bba8);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53808();
          goto LAB_10139b9c4;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c54de4();
    }
  }
LAB_10139b9c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10139bba8; end: 10139bc53; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint setValue:forIvarName:] */

void FUN_10139bba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10139b938(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10139bc54; end: 10139bcef; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139bc54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d78460,0);
  func_0x000107c61614(param_1 + _DAT_112d78468,0);
  func_0x000107c61614(param_1 + _DAT_112d78470,0);
  func_0x000107c61614(param_1 + _DAT_112d78478,0);
  *(undefined8 *)(param_1 + _DAT_112d78480) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10139bcf0; end: 10139bd23;  */

void FUN_10139bcf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10139bd24; end: 10139bd8b; -[SCGenerativeAIIdentityRemoteApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139bd24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d78460);
  func_0x000107c61610(param_1 + _DAT_112d78468);
  func_0x000107c61610(param_1 + _DAT_112d78470);
  func_0x000107c61610(param_1 + _DAT_112d78478);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d78480));
  return;
}



/* Entry: 10139bd8c; end: 10139bdab;  */

void FUN_10139bd8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ccfc8);
  return;
}



/* Entry: 10139bdac; end: 10139c12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139bdac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d784b0);
  *puVar1 = 0xd000000000000032;
  puVar1[1] = 0x800000010ef3a4b0;
  *(undefined8 *)(unaff_x20 + _DAT_112d784b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d784c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d784c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d784d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d784d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d784e0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d784e8) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10139c12c; end: 10139c1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c12c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + _DAT_112d784b8);
      *(long *)(param_2 + _DAT_112d784b8) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61170(uVar1);
      FUN_10139c1cc(param_1,param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10139c1cc; end: 10139c617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar6;
  long unaff_x20;
  undefined1 *puVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_b0 [7];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0x112d3ae80;
  lStack_68 = param_1;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar10 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  puVar2 = PTR_PTR_1126a6bf0;
  func_0x000107c610f8();
  func_0x000107c464a0();
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar6 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar6)(lVar12,1,1,lVar1);
  (*pcVar6)(lVar11,1,1,lVar1);
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar7,1,1,lVar1);
  *(undefined1 *)(lVar9 + -8) = 0;
  *(undefined8 *)(lVar9 + -0x10) = 0;
  *(undefined8 *)(lVar9 + -0x18) = 0;
  *(undefined8 *)(lVar9 + -0x20) = 0;
  *(undefined8 *)(lVar9 + -0x28) = 0;
  *(undefined8 *)(lVar9 + -0x30) = 0;
  *(undefined8 *)(lVar9 + -0x38) = 0;
  *(undefined1 **)(lVar9 + -0x40) = puVar7;
  func_0x000104638e24(lVar9,0x18,lVar12,0,lVar11,0,0,0,0);
  func_0x000103bda44c(0);
  puVar8 = *(ulong **)(unaff_x20 + _DAT_112d784e8);
  FUN_100e39298(lVar9,lVar10);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000104651d90(lVar10);
  func_0x000103bda584(puVar8,0,lVar10);
  lVar1 = *(long *)(unaff_x20 + _DAT_112d784e0);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar10 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar10 != 0) {
      puVar3 = PTR_PTR_1126b0e90;
      func_0x000107c610f8(PTR_PTR_1126b0e90);
      func_0x000107c46868();
      func_0x000107c59ac8(puVar2);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(puVar3);
    }
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d784d8) + _DAT_112fbabe0);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c53548(puVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c5a6a4(puVar2);
    puVar5 = PTR_PTR_1126a6bf8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = &UNK_1103aafe0;
    func_0x000107c613fc(&UNK_1103aafe0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    func_0x000103ed3d4c(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar2);
    func_0x000107c615f0(param_2);
    pcVar6 = FUN_10139c7f4;
    func_0x000103ed3cf4(FUN_10139c7f4,puVar3);
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x80))();
    lVar1 = lStack_68;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000100e392dc(lVar9);
      func_0x000107c61170(pcVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar8);
    }
    else {
      func_0x000107c4f6f4();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(pcVar6);
      func_0x000107c61170(lVar1);
      func_0x000100e392dc(lVar9);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10139c618);
  (*pcVar6)();
}



/* Entry: 10139c618; end: 10139c677; -[_TtC38SCGenAIManageContentSettingsEntryPoint36GenAIManageContentSettingsEntryPoint init] */

void FUN_10139c618(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIManageContentSettingsEntryPoint.GenAIManageContentSettingsEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10139c644);
  (*pcVar1)();
}



/* Entry: 10139c678; end: 10139c733; -[_TtC38SCGenAIManageContentSettingsEntryPoint36GenAIManageContentSettingsEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010139c694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139c6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139c6d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139c6b8) */
/* WARNING: Removing unreachable block (ram,0x00010139c698) */
/* WARNING: Removing unreachable block (ram,0x00010139c6d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d784c0));
  return;
}



/* Entry: 10139c734; end: 10139c73b;  */

undefined8 FUN_10139c734(void)

{
  return 0;
}



/* Entry: 10139c73c; end: 10139c7af; -[_TtC38SCGenAIManageContentSettingsEntryPoint36GenAIManageContentSettingsEntryPoint genAIManagerContentSettingsOnDismissTapped] */

/* WARNING: Possible PIC construction at 0x00010139c788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139c78c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c73c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d784b8);
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4eb48();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10139c7b0; end: 10139c7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c7b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112d784b8);
      *(long *)(lVar2 + _DAT_112d784b8) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61170(uVar3);
      FUN_10139c1cc(param_1,uVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10139c7d4; end: 10139c7f3;  */

void FUN_10139c7d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd0a0);
  return;
}



/* Entry: 10139c7f4; end: 10139c8fb;  */

void FUN_10139c7f4(void)

{
  func_0x000107c610f8(PTR_PTR_1126a6c00);
                    /* WARNING: Could not recover jumptable at 0x00010c061d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10139c8fc; end: 10139c907; -[SCGenAIManageContentSettingsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c8fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78518;
  func_0x000107c61428(param_1 + _DAT_112d78518,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139c908; end: 10139c913; -[SCGenAIManageContentSettingsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78518;
  func_0x000107c61428(param_1 + _DAT_112d78518,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139c914; end: 10139c91f; -[SCGenAIManageContentSettingsEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78520;
  func_0x000107c61428(param_1 + _DAT_112d78520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139c920; end: 10139c92b; -[SCGenAIManageContentSettingsEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78520;
  func_0x000107c61428(param_1 + _DAT_112d78520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139c92c; end: 10139c937; -[SCGenAIManageContentSettingsEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c92c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78528;
  func_0x000107c61428(param_1 + _DAT_112d78528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139c938; end: 10139c943; -[SCGenAIManageContentSettingsEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78528;
  func_0x000107c61428(param_1 + _DAT_112d78528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139c944; end: 10139c94f; -[SCGenAIManageContentSettingsEntryPoint valdiCOFStoresServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c944(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78530;
  func_0x000107c61428(param_1 + _DAT_112d78530,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139c950; end: 10139c95b; -[SCGenAIManageContentSettingsEntryPoint setValdiCOFStoresServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78530;
  func_0x000107c61428(param_1 + _DAT_112d78530,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139c95c; end: 10139c967; -[SCGenAIManageContentSettingsEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c95c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78538;
  func_0x000107c61428(param_1 + _DAT_112d78538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139c968; end: 10139c9ab;  */

void FUN_10139c968(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139c9ac; end: 10139c9b7; -[SCGenAIManageContentSettingsEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139c9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78538;
  func_0x000107c61428(param_1 + _DAT_112d78538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139c9b8; end: 10139ca0b;  */

void FUN_10139c9b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139ca0c; end: 10139ca53; -[SCGenAIManageContentSettingsEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ca0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78540;
  func_0x000107c61428(param_1 + _DAT_112d78540,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10139ca54; end: 10139cab7; -[SCGenAIManageContentSettingsEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ca54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78540;
  func_0x000107c61428(param_1 + _DAT_112d78540,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10139cab8; end: 10139cd57;  */

/* WARNING: Possible PIC construction at 0x00010139cc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139cce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ccd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139cce4) */
/* WARNING: Removing unreachable block (ram,0x00010139cd04) */
/* WARNING: Removing unreachable block (ram,0x00010139cd34) */
/* WARNING: Removing unreachable block (ram,0x00010139cd24) */
/* WARNING: Removing unreachable block (ram,0x00010139cc88) */
/* WARNING: Removing unreachable block (ram,0x00010139cc78) */
/* WARNING: Removing unreachable block (ram,0x00010139cc68) */
/* WARNING: Removing unreachable block (ram,0x00010139ccd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139cab8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = unaff_x20;
      func_0x000107c5dbb4();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = unaff_x20;
        func_0x000107c5e1d0();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c42eb0();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar8 = 0;
            FUN_10139c7d4();
            lVar9 = lVar8;
            func_0x000107c610f8();
            puVar1 = (undefined8 *)(lVar9 + _DAT_112d784b0);
            *puVar1 = 0xd000000000000032;
            puVar1[1] = 0x800000010ef3a4b0;
            *(undefined8 *)(lVar9 + _DAT_112d784b8) = 0;
            *(long *)(lVar9 + _DAT_112d784c0) = lVar3;
            *(long *)(lVar9 + _DAT_112d784c8) = lVar4;
            *(long *)(lVar9 + _DAT_112d784d0) = lVar5;
            *(long *)(lVar9 + _DAT_112d784d8) = lVar6;
            *(long *)(lVar9 + _DAT_112d784e0) = unaff_x20;
            *(long *)(lVar9 + _DAT_112d784e8) = lVar7;
            puVar2 = PTR_s_init_1125d9248;
            lStack_70 = lVar9;
            lStack_68 = lVar8;
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar7);
            func_0x000107c61174(unaff_x20);
            func_0x000107c61154(&lStack_70,puVar2);
            func_0x00010139be94();
            lVar3 = unaff_x20;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10139cd58; end: 10139cd7f; -[SCGenAIManageContentSettingsEntryPoint begin] */

void FUN_10139cd58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10139cab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139cd80; end: 10139cdc3; -[SCGenAIManageContentSettingsEntryPoint end] */

void FUN_10139cd80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139cdc4; end: 10139d10b;  */

void FUN_10139cdc4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d1d30)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef2e2d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a474();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
            uVar2 = 0xd000000000000017;
            func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
                uVar2 = 0xd000000000000017;
                func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SCGenAIManageContentSettingsEntryPoint/SCGenAIManageContentSettingsEntryPoint.swift"
                                      ,0x53,2,0x41,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10139d10c);
                  (*pcVar1)();
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
              goto LAB_10139ce50;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5491c();
        }
      }
    }
  }
LAB_10139ce50:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10139d10c; end: 10139d1b7; -[SCGenAIManageContentSettingsEntryPoint setValue:forIvarName:] */

void FUN_10139d10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10139cdc4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10139d1b8; end: 10139d273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139d1b8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d78518,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d78520,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d78528,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d78530,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d78538,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d78540) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d78548) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10139d274; end: 10139d293; -[SCGenAIManageContentSettingsEntryPoint init] */

void FUN_10139d274(void)

{
  FUN_10139d1b8();
  return;
}



/* Entry: 10139d294; end: 10139d2c7;  */

void FUN_10139d294(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10139d2c8; end: 10139d34f; -[SCGenAIManageContentSettingsEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010139d334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139d338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139d2c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d78518);
  func_0x000107c61610(param_1 + _DAT_112d78520);
  func_0x000107c61610(param_1 + _DAT_112d78528);
  func_0x000107c61610(param_1 + _DAT_112d78530);
  func_0x000107c61610(param_1 + _DAT_112d78538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d78540));
  return;
}



/* Entry: 10139d350; end: 10139d36f;  */

void FUN_10139d350(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd198);
  return;
}



/* Entry: 10139d370; end: 10139d617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10139d370(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112d78578);
  if (uVar4 != 0) {
    uVar1 = uVar4;
    func_0x000107c3da54();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c3da58();
      func_0x000107c61180();
      func_0x000107c615e8(uVar1);
      if (uVar2 == 0) {
        return 0;
      }
      func_0x000107c4b6c0();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar1 = uVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        uVar3 = uVar1;
        func_0x000107c5faec();
        func_0x000107c61170(uVar1);
        uVar4 = *(ulong *)(uVar2 + _DAT_11307e7c0);
        uVar1 = ((ulong *)(uVar2 + _DAT_11307e7c0))[1];
        if (uVar4 == uVar3 && uVar1 == param_2) {
          func_0x000107c6142c(param_2);
          return uVar2;
        }
        func_0x000107c605b8(uVar4,uVar1,uVar3,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar4 & 1) != 0) {
          return uVar2;
        }
      }
      func_0x000107c61170(uVar2);
    }
  }
  return 0;
}



/* Entry: 10139d618; end: 10139d8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139d618(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d78580);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar6 = lVar1;
  func_0x000107c5d180();
  func_0x000107c61180();
  lVar2 = lVar6;
  func_0x000107c4d070();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112d78588);
  puVar3 = puVar5;
  func_0x000107c49bc8();
  if ((int)puVar3 == 0) {
LAB_10139d73c:
    func_0x00010139d478();
    if (puVar3 != (undefined *)0x0) {
      if (*(long *)(unaff_x20 + _DAT_112d78578) != 0) {
        func_0x000107c43b20();
      }
      puVar4 = PTR_PTR_1126a6160;
      func_0x000107c610f8(PTR_PTR_1126a6160);
      func_0x000107c45650();
      func_0x000107c610f8(PTR_PTR_1126bd648);
      func_0x000107c454a0();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar3);
LAB_10139d7c0:
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(lVar2);
      return;
    }
    func_0x00010139d370();
    if (puVar3 != (undefined *)0x0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112d78578);
      if (lVar6 != 0) {
        func_0x000107c615f0();
        func_0x000107c43b20();
        puVar4 = PTR_PTR_1126a6160;
        func_0x000107c610f8(PTR_PTR_1126a6160);
        func_0x000107c45650();
        func_0x000107c610f8(PTR_PTR_1126bd648);
        func_0x000107c454a0();
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar3);
        goto LAB_10139d7c0;
      }
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar3);
      goto LAB_10139d884;
    }
  }
  else {
    puVar3 = puVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) goto LAB_10139d73c;
    puVar4 = puVar3;
    func_0x000107c499f0();
    func_0x000107c615e8();
    if ((int)puVar4 == 0) goto LAB_10139d73c;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar5;
      func_0x000107c404d0();
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
      if (puVar4 != (undefined *)0x0) {
        puVar3 = PTR_PTR_1126bd648;
        func_0x000107c610f8(PTR_PTR_1126bd648);
        func_0x000107c61174(puVar4);
        func_0x000107c47d60(puVar3,param_2,puVar4,lVar2);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(puVar4);
        goto LAB_10139d7c0;
      }
    }
  }
  func_0x000107c615e8(lVar1);
LAB_10139d884:
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 10139d8a4; end: 10139d903; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController init] */

void FUN_10139d8a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureAIContentFeedbackImpl.PreviewFeatureAIContentFeedbackController"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10139d8d0);
  (*pcVar1)();
}



/* Entry: 10139d904; end: 10139d9bb; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010139d930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139d950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139d970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139d990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139d974) */
/* WARNING: Removing unreachable block (ram,0x00010139d954) */
/* WARNING: Removing unreachable block (ram,0x00010139d934) */
/* WARNING: Removing unreachable block (ram,0x00010139d994) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139d904(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d78578));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d78580));
  return;
}



/* Entry: 10139d9bc; end: 10139da2b; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139d9bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  
  puStack_38 = PTR_DAT_11269e3f0;
  lVar1 = param_3;
  func_0x000107c61494(param_3,1,&puStack_38);
  if (lVar1 != 0) {
    func_0x000107c61174(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d785c0);
  *(long *)(param_1 + _DAT_112d785c0) = lVar1;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10139da2c; end: 10139dca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139da2c(void)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  if ((*(byte *)(unaff_x20 + _DAT_112d785d0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d785d0) = 1;
    pcVar2 = "subscribeToPostCaptureUpdatesIfNeeded()";
    func_0x0001000c10c0("subscribeToPostCaptureUpdatesIfNeeded()");
    func_0x000107c61180();
    lVar3 = *(long *)(unaff_x20 + _DAT_112d785a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c3da5c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
      func_0x000107c4da88(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar5 = &UNK_1103ab0e8;
      func_0x000107c613fc(&UNK_1103ab0e8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      uStack_60 = 0x10139e154;
      puStack_80 = puVar1;
      uStack_78 = 0x42000000;
      uStack_70 = 0x10139e14c;
      puStack_68 = &UNK_1103ab128;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112d785a0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c51c78();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
      func_0x000107c4da88(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar5 = &UNK_1103ab0e8;
      func_0x000107c613fc(&UNK_1103ab0e8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      uStack_60 = 0x10139e110;
      puStack_80 = puVar1;
      uStack_78 = 0x42000000;
      uStack_70 = 0x10139e150;
      puStack_68 = &UNK_1103ab100;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      lVar4 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 10139dca4; end: 10139ddbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139dca4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  if (lRam0000000112d78850 != -1) {
    func_0x000107c61568(0x112d78850,FUN_10139ecec);
  }
  puVar1 = PTR_PTR_1126b6138;
  func_0x000107c610f8(PTR_PTR_1126b6138);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5527c(0x402c000000000000,0x402c000000000000);
  func_0x000107c5a29c(puVar1);
  func_0x000107c55258(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c52b50();
  func_0x000107c3d8b4(puVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d785c0);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    func_0x000107c59ee8();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  *(undefined1 *)(unaff_x20 + _DAT_112d785d8) = 1;
  return;
}



/* Entry: 10139ddc0; end: 10139decf; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ddc0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112d78578);
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c49c6c();
    if ((uVar1 & 1) != 0) goto LAB_10139de10;
  }
  FUN_10139da2c();
  func_0x00010139d564();
  if ((uVar1 & 1) != 0) {
    FUN_10139dca4();
  }
LAB_10139de10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139ded0; end: 10139df1b;  */

void FUN_10139ded0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10139df1c; end: 10139df7b; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_10139df1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x00010139e0c0(param_4,param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139df7c; end: 10139dff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139df7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  FUN_10139d618();
  lVar1 = _DAT_112d785d8;
  if (param_1 != 0) {
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d78590),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112d785d8) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112d785c0) != 0) {
      func_0x000107c59ee8(*(long *)(unaff_x20 + _DAT_112d785c0),param_2,0);
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 10139dff4; end: 10139e01b; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController openAILensFeedback] */

void FUN_10139dff4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10139df7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139e01c; end: 10139e09f; -[_TtC35PreviewFeatureAIContentFeedbackImpl41PreviewFeatureAIContentFeedbackController generativeContentReportDidCompleteWithCancelled:] */

/* WARNING: Possible PIC construction at 0x00010139e058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139e074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139e05c) */
/* WARNING: Removing unreachable block (ram,0x00010139e078) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139e01c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10139e0a0; end: 10139e127;  */

void FUN_10139e0a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127cd280);
  return;
}



/* Entry: 10139e128; end: 10139e157;  */

void FUN_10139e128(long param_1,long param_2)

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



/* Entry: 10139e158; end: 10139e247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10139e158(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_112d78998);
  func_0x000107c6157c(uVar5);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  uVar2 = 0x112d73a18;
  func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
  pcVar3 = FUN_10139e248;
  func_0x0001000cb480(FUN_10139e248,0,uVar2);
  pcVar4 = pcVar3;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar3);
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(pcVar4);
  return unaff_x20;
}



/* Entry: 10139e248; end: 10139e26f;  */

void FUN_10139e248(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10139e270; end: 10139e28f;  */

void FUN_10139e270(void)

{
  func_0x000107c61168(&PTR_PTR_112d78648);
  return;
}



/* Entry: 10139e290; end: 10139e313;  */

long FUN_10139e290(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d787b0,&UNK_10d937e78);
    func_0x000107c613fc();
    lVar2 = 1;
    func_0x00010008747c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 10139e314; end: 10139e417;  */

long FUN_10139e314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = param_6;
  func_0x000107c3dd34();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 10139e418; end: 10139e5c3;  */

undefined * FUN_10139e418(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  ppuVar8 = &puStack_70;
  lVar3 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c3e280();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10139e5c4);
      (*pcVar2)();
    }
    puVar5 = &UNK_1103ab1a8;
    func_0x000107c613fc(&UNK_1103ab1a8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcStack_50 = (code *)0x10139eca8;
    puStack_70 = puVar1;
    uStack_68 = 0x42000000;
    puStack_60 = (undefined *)0x10101bff0;
    puStack_58 = &UNK_1103ab1e8;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar3 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar3);
    func_0x000107c61170(lVar3);
  }
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_1103ab1a8;
  func_0x000107c613fc(&UNK_1103ab1a8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  pcStack_50 = FUN_10139ec84;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1008e3890;
  puStack_58 = &UNK_1103ab1c0;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  return puVar7;
}



/* Entry: 10139e5c4; end: 10139e87b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139e5c4(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  long lStack_70;
  long lStack_68;
  
  lVar6 = param_2;
  func_0x000107c6162c();
  uVar2 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  uVar3 = uVar2;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c6162c(param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  uVar2 = uVar4;
  func_0x000107c5b1fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c6162c(param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  uVar4 = uVar5;
  func_0x000107c3da60();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c6162c(param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  func_0x000107c6162c(param_2);
  lVar6 = *(long *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  uVar7 = *(undefined8 *)(lVar6 + _DAT_112ff6390);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  func_0x000107c6162c(param_2);
  lVar6 = *(long *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  uVar8 = *(undefined8 *)(lVar6 + _DAT_112ff6380);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  lVar9 = 0;
  FUN_10139e0a0();
  lVar10 = lVar9;
  func_0x000107c610f8();
  auVar14 = NEON_fmov(0x402c000000000000,8);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112d785b0);
  puVar1[1] = auVar14._8_8_;
  *puVar1 = auVar14._0_8_;
  lVar6 = _DAT_112d785b8;
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar12 = puVar11;
  func_0x000107c3fdd0(0x3fd3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  *(undefined **)(lVar10 + lVar6) = puVar12;
  *(undefined8 *)(lVar10 + _DAT_112d785c0) = 0;
  lVar6 = _DAT_112d785c8;
  puVar11 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + lVar6) = puVar11;
  *(undefined1 *)(lVar10 + _DAT_112d785d0) = 0;
  *(undefined1 *)(lVar10 + _DAT_112d785d8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112d78578) = uVar3;
  *(undefined8 *)(lVar10 + _DAT_112d78580) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112d78588) = uVar4;
  *(undefined8 *)(lVar10 + _DAT_112d78590) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112d78598) = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112d785a0) = uVar8;
  *(undefined8 *)(lVar10 + _DAT_112d785a8) = param_3;
  puVar11 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c61174(param_3);
  plVar13 = &lStack_70;
  func_0x000107c61154(plVar13,puVar11);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 10139e87c; end: 10139e883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139e87c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  long unaff_x20;
  undefined1 auVar15 [16];
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = lVar1;
  func_0x000107c6162c();
  uVar4 = *(undefined8 *)(lVar8 + 0x10);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar5 = uVar4;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c6162c(lVar1);
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar4 = uVar6;
  func_0x000107c5b1fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c6162c(lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar6 = uVar7;
  func_0x000107c3da60();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c6162c(lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  func_0x000107c6162c(lVar1);
  lVar8 = *(long *)(lVar1 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar9 = *(undefined8 *)(lVar8 + _DAT_112ff6390);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  func_0x000107c6162c(lVar1);
  lVar8 = *(long *)(lVar1 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_112ff6380);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  lVar11 = 0;
  FUN_10139e0a0();
  lVar8 = lVar11;
  func_0x000107c610f8();
  auVar15 = NEON_fmov(0x402c000000000000,8);
  puVar3 = (undefined8 *)(lVar8 + _DAT_112d785b0);
  puVar3[1] = auVar15._8_8_;
  *puVar3 = auVar15._0_8_;
  lVar1 = _DAT_112d785b8;
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar13 = puVar12;
  func_0x000107c3fdd0(0x3fd3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  *(undefined **)(lVar8 + lVar1) = puVar13;
  *(undefined8 *)(lVar8 + _DAT_112d785c0) = 0;
  lVar1 = _DAT_112d785c8;
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar1) = puVar12;
  *(undefined1 *)(lVar8 + _DAT_112d785d0) = 0;
  *(undefined1 *)(lVar8 + _DAT_112d785d8) = 0;
  *(undefined8 *)(lVar8 + _DAT_112d78578) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112d78580) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112d78588) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112d78590) = uVar7;
  *(undefined8 *)(lVar8 + _DAT_112d78598) = uVar9;
  *(undefined8 *)(lVar8 + _DAT_112d785a0) = uVar10;
  *(undefined8 *)(lVar8 + _DAT_112d785a8) = uVar2;
  puVar12 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  func_0x000107c61174(uVar2);
  plVar14 = &lStack_70;
  func_0x000107c61154(plVar14,puVar12);
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 10139e884; end: 10139e9ab;  */

void FUN_10139e884(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plStack_60;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  plVar1 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c61170(plVar1);
  plVar1 = plVar2;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001044952bc();
  if ((plVar1 == (long *)*plVar2) && (puVar3 == (undefined1 *)plVar2[1])) {
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x000107c605b8(plVar1,puVar3,(long *)*plVar2,(undefined1 *)plVar2[1],0);
    func_0x000107c6142c(puVar3);
    if (((ulong)plVar1 & 1) == 0) goto LAB_10139e98c;
  }
  FUN_10139e290();
  func_0x000107c50300();
  func_0x000107c61180();
  plStack_60 = param_1;
  func_0x000100087c34(&plStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar3);
LAB_10139e98c:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 10139e9ac; end: 10139ea3f;  */

long FUN_10139e9ac(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10139e290();
    func_0x0001008e39f0(0);
    func_0x000107c613fc();
    func_0x000102ab95b4(lVar1);
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 10139ea40; end: 10139eb8f;  */

void FUN_10139ea40(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10139eb90; end: 10139ec57;  */

void FUN_10139eb90(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  FUN_10139e418();
  func_0x000107c6162c();
  func_0x000107c61628();
  func_0x000107c61574();
  puVar1 = &UNK_1103ab180;
  func_0x000107c613fc(&UNK_1103ab180,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x0001000285a8(0x112d786a0,&UNK_10d937de0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  uVar2 = 0x10139ecb8;
  func_0x0001000bdd8c(0x10139ecb8,puVar1);
  uVar3 = 0;
  FUN_1013a00a4(0);
  func_0x000107c610f8();
  func_0x00010139ffe8(uVar2,uVar3);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 10139ec58; end: 10139ec83;  */

void FUN_10139ec58(void)

{
  long unaff_x20;
  
  func_0x000107c61624(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10139ec84; end: 10139eccb;  */

long FUN_10139ec84(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10139e290();
    func_0x0001008e39f0(0);
    func_0x000107c613fc();
    func_0x000102ab95b4(lVar2);
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 10139eccc; end: 10139eceb;  */

void FUN_10139eccc(void)

{
  func_0x000107c61168(&PTR_PTR_112d787f8);
  return;
}



/* Entry: 10139ecec; end: 10139edd3;  */

void FUN_10139ecec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_10139eccc();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef3a6e0);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam00000001137ff3d8 = puVar3;
  return;
}



/* Entry: 10139edd4; end: 10139eddf; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139edd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78858;
  func_0x000107c61428(param_1 + _DAT_112d78858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139ede0; end: 10139edeb; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ede0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78858;
  func_0x000107c61428(param_1 + _DAT_112d78858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139edec; end: 10139edf7; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint previewFeatureAIContentFeedbackAPIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139edec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78860;
  func_0x000107c61428(param_1 + _DAT_112d78860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139edf8; end: 10139ee3b;  */

void FUN_10139edf8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139ee3c; end: 10139ee47; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint setPreviewFeatureAIContentFeedbackAPIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ee3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78860;
  func_0x000107c61428(param_1 + _DAT_112d78860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139ee48; end: 10139ee9b;  */

void FUN_10139ee48(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139ee9c; end: 10139effb;  */

/* WARNING: Possible PIC construction at 0x00010139ef68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ef7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ef8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ef9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139ef90) */
/* WARNING: Removing unreachable block (ram,0x00010139ef80) */
/* WARNING: Removing unreachable block (ram,0x00010139ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010139efa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139ee9c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4f0e8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_10139e270(0);
    func_0x000107c613fc();
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + _DAT_112d78998));
    func_0x000107c4e9e4(lVar1);
    func_0x000107c61180();
    uVar2 = 0x112d73a18;
    func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
    pcVar3 = FUN_10139e248;
    func_0x0001000cb480(FUN_10139e248,0,uVar2);
    func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(pcVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10139effc; end: 10139f023; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint begin] */

void FUN_10139effc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10139ee9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139f024; end: 10139f067; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint end] */

void FUN_10139f024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139f068; end: 10139f1ff;  */

void FUN_10139f068(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef10c5900)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010ef3a700,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PreviewFeatureAIContentFeedbackImpl/SCPreviewFeatureAIContentFeedbackPlugInEntryPoint.swift"
                            ,0x5b,2,0x29,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10139f200);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57788();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10139f200; end: 10139f2ab; -[SCPreviewFeatureAIContentFeedbackPlugInEntryPoint setValue:forIvarName:] */

void FUN_10139f200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10139f068(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


