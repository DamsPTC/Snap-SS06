/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f64a14; end: 103f64a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64a14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113035b60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f64a78; end: 103f64ad7; -[_TtC33MiniCameraActivationStateServices35SCMiniCameraActivationStateServices init] */

void FUN_103f64a78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MiniCameraActivationStateServices.SCMiniCameraActivationStateServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f64aa4);
  (*pcVar1)();
}



/* Entry: 103f64ad8; end: 103f64bbb; -[_TtC33MiniCameraActivationStateServices35SCMiniCameraActivationStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f64ad8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113035b58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035b60));
  return;
}



/* Entry: 103f64bbc; end: 103f64beb;  */

bool FUN_103f64bbc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f64bec; end: 103f64c0f;  */

void FUN_103f64bec(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f64c10; end: 103f64cbb;  */

undefined8 FUN_103f64c10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000050;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000050,0x800000010f1d2670);
  func_0x000107c5e59c(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = 0xd00000000000004c;
  FUN_103f64cbc(0xd00000000000004c,0x800000010f1d26d0,0xd000000000000040,0x800000010f1d2720);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f64cbc; end: 103f64e8f;  */

undefined8 FUN_103f64cbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  
  lVar1 = 0x113035c48;
  func_0x0001008003f8(0x113035c48,&PTR_PTR_1126de6c8,0x113035c50,&UNK_10dcaffc0);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  puVar2 = PTR_PTR_1126b62d8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c5e848();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = 0;
  if (param_2 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    uVar4 = param_1;
  }
  puVar2 = puVar3;
  func_0x000107c5e84c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar4 = param_3;
  }
  puVar3 = puVar2;
  func_0x000107c5e4a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126b62e0;
  _objc_allocWithZone(PTR_PTR_1126b62e0);
  uVar4 = 0;
  func_0x0001008005b4(0,0x113035c48,&PTR_PTR_1126de6c8);
  lVar5 = lVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar4);
  _swift_release(lVar1);
  func_0x000107c483cc(puVar2);
  _objc_release(lVar5);
  func_0x000107c5e764();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  return unaff_x20;
}



/* Entry: 103f64e90; end: 103f64f6f;  */

void FUN_103f64e90(void)

{
  FUN_103f64cbc(0,0,0xd000000000000040,0x800000010f1d2620);
  return;
}



/* Entry: 103f64f70; end: 103f6503f;  */

undefined8 FUN_103f64f70(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126e1350;
  _objc_allocWithZone();
  func_0x000107c453e4();
  uVar3 = 0x5058455f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5058455f534e454c,0xed00005245524f4c);
  puVar4 = puVar2;
  func_0x000107c5e454();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x000107c5e854(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f65040);
  (*pcVar1)();
}



/* Entry: 103f65040; end: 103f65153;  */

undefined8 FUN_103f65040(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  uVar1 = 0x4f4355;
  uVar4 = 0xe300000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f4355,0xe300000000000000);
  func_0x000107c5e6f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e77078;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110e77078);
  func_0x0001008005b4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = 0;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC(0);
  puVar3 = PTR_PTR_1126bb808;
  _objc_allocWithZone(PTR_PTR_1126bb808);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  func_0x000107c46c1c(puVar3);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  uVar1 = unaff_x20;
  func_0x000107c5e498(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x20);
  _objc_release(puVar3);
  return uVar1;
}



/* Entry: 103f65154; end: 103f65423;  */

undefined8 FUN_103f65154(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010b0aee1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5e6f0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_103f65040();
  _objc_release(param_1);
  uVar2 = 0xd00000000000005d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000005d,0x800000010f1d2520);
  uVar3 = uVar1;
  func_0x000107c5e59c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 103f65424; end: 103f6545b;  */

void FUN_103f65424(void)

{
  FUN_103f6545c(0xd00000000000008c,0x800000010f1d2230);
  return;
}



/* Entry: 103f6545c; end: 103f655e7;  */

undefined8 FUN_103f6545c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  
  lVar1 = 0x113035c48;
  func_0x0001008003f8(0x113035c48,&PTR_PTR_1126de6c8,0x113035c50,&UNK_10dcaffc0);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  puVar2 = PTR_PTR_1126b62d8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c5e848();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar2 = puVar3;
  func_0x000107c5e7b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  *(undefined **)(lVar1 + 0x20) = puVar3;
  puVar2 = PTR_PTR_1126b62e0;
  _objc_allocWithZone(PTR_PTR_1126b62e0);
  uVar4 = 0;
  func_0x0001008005b4(0,0x113035c48,&PTR_PTR_1126de6c8);
  lVar5 = lVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar4);
  _swift_release(lVar1);
  func_0x000107c483cc(puVar2);
  _objc_release(lVar5);
  func_0x000107c5e764();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  return unaff_x20;
}



/* Entry: 103f655e8; end: 103f658bf;  */

void FUN_103f655e8(void)

{
  FUN_103f6545c(0xd00000000000008c,0x800000010f1d21a0);
  return;
}



/* Entry: 103f658c0; end: 103f65e4f;  */

long FUN_103f658c0(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0x113035c40;
  func_0x0001000285a8(0x113035c40,&UNK_10dcaffb8);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 0x1c;
  *(undefined8 *)(lVar1 + 0x10) = 0xe;
  puVar2 = &UNK_110725f18;
  _swift_allocObject(&UNK_110725f18,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3138313330323334;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000343531;
  *(undefined8 *)(puVar2 + 0x20) = 0x3138313330323334;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000343531;
  *(code **)(puVar2 + 0x30) = FUN_103f65424;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0x3138313330323334;
  *(undefined8 *)(lVar1 + 0x28) = 0xeb00000000343531;
  *(undefined8 *)(lVar1 + 0x30) = 0x3138313330323334;
  *(undefined8 *)(lVar1 + 0x38) = 0xeb00000000343531;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined **)(lVar1 + 0x50) = &UNK_1007ffc90;
  *(undefined **)(lVar1 + 0x58) = puVar2;
  puVar2 = &UNK_110725f40;
  _swift_allocObject(&UNK_110725f40,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3034373830383833;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000313539;
  *(undefined8 *)(puVar2 + 0x20) = 0x3034373830383833;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000313539;
  *(code **)(puVar2 + 0x30) = FUN_103f655e8;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0x3034373830383833;
  *(undefined8 *)(lVar1 + 0x68) = 0xeb00000000313539;
  *(undefined8 *)(lVar1 + 0x70) = 0x3034373830383833;
  *(undefined8 *)(lVar1 + 0x78) = 0xeb00000000313539;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0x103f65eac;
  *(undefined **)(lVar1 + 0x98) = puVar2;
  puVar2 = &UNK_110725f68;
  _swift_allocObject(&UNK_110725f68,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3035343533383634;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000363039;
  *(undefined8 *)(puVar2 + 0x20) = 0x3035343533383634;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000363039;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65620;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0x3035343533383634;
  *(undefined8 *)(lVar1 + 0xa8) = 0xeb00000000363039;
  *(undefined8 *)(lVar1 + 0xb0) = 0x3035343533383634;
  *(undefined8 *)(lVar1 + 0xb8) = 0xeb00000000363039;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0x103f65eb0;
  *(undefined **)(lVar1 + 0xd8) = puVar2;
  puVar2 = &UNK_110725f90;
  _swift_allocObject(&UNK_110725f90,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3039383733373533;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000303839;
  *(undefined8 *)(puVar2 + 0x20) = 0x3039383733373533;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000303839;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65658;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0x3039383733373533;
  *(undefined8 *)(lVar1 + 0xe8) = 0xeb00000000303839;
  *(undefined8 *)(lVar1 + 0xf0) = 0x3039383733373533;
  *(undefined8 *)(lVar1 + 0xf8) = 0xeb00000000303839;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0x103f65eb4;
  *(undefined **)(lVar1 + 0x118) = puVar2;
  puVar2 = &UNK_110725fb8;
  _swift_allocObject(&UNK_110725fb8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3734383038343732;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000363332;
  *(undefined8 *)(puVar2 + 0x20) = 0x3734383038343732;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000363332;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65690;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0x3734383038343732;
  *(undefined8 *)(lVar1 + 0x128) = 0xeb00000000363332;
  *(undefined8 *)(lVar1 + 0x130) = 0x3734383038343732;
  *(undefined8 *)(lVar1 + 0x138) = 0xeb00000000363332;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  *(undefined8 *)(lVar1 + 0x150) = 0x103f65eb8;
  *(undefined **)(lVar1 + 0x158) = puVar2;
  puVar2 = &UNK_110725fe0;
  _swift_allocObject(&UNK_110725fe0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3733343034373131;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000343532;
  *(undefined8 *)(puVar2 + 0x20) = 0x3733343034373131;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000343532;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f656c8;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0x3733343034373131;
  *(undefined8 *)(lVar1 + 0x168) = 0xeb00000000343532;
  *(undefined8 *)(lVar1 + 0x170) = 0x3733343034373131;
  *(undefined8 *)(lVar1 + 0x178) = 0xeb00000000343532;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar1 + 400) = 0x103f65ebc;
  *(undefined **)(lVar1 + 0x198) = puVar2;
  puVar2 = &UNK_110726008;
  _swift_allocObject(&UNK_110726008,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3736313331363031;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000393036;
  *(undefined8 *)(puVar2 + 0x20) = 0x3736313331363031;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000393036;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65700;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x1a0) = 0x3736313331363031;
  *(undefined8 *)(lVar1 + 0x1a8) = 0xeb00000000393036;
  *(undefined8 *)(lVar1 + 0x1b0) = 0x3736313331363031;
  *(undefined8 *)(lVar1 + 0x1b8) = 0xeb00000000393036;
  *(undefined8 *)(lVar1 + 0x1c0) = 0;
  *(undefined8 *)(lVar1 + 0x1c8) = 0;
  *(undefined8 *)(lVar1 + 0x1d0) = 0x103f65ec0;
  *(undefined **)(lVar1 + 0x1d8) = puVar2;
  puVar2 = &UNK_110726030;
  _swift_allocObject(&UNK_110726030,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3739363738303431;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000393232;
  *(undefined8 *)(puVar2 + 0x20) = 0x3739363738303431;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000393232;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65738;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x1e0) = 0x3739363738303431;
  *(undefined8 *)(lVar1 + 0x1e8) = 0xeb00000000393232;
  *(undefined8 *)(lVar1 + 0x1f0) = 0x3739363738303431;
  *(undefined8 *)(lVar1 + 0x1f8) = 0xeb00000000393232;
  *(undefined8 *)(lVar1 + 0x208) = 0;
  *(undefined8 *)(lVar1 + 0x200) = 0;
  *(undefined8 *)(lVar1 + 0x210) = 0x103f65ec4;
  *(undefined **)(lVar1 + 0x218) = puVar2;
  puVar2 = &UNK_110726058;
  _swift_allocObject(&UNK_110726058,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3039373131373933;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000323939;
  *(undefined8 *)(puVar2 + 0x20) = 0x3039373131373933;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000323939;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65770;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x220) = 0x3039373131373933;
  *(undefined8 *)(lVar1 + 0x228) = 0xeb00000000323939;
  *(undefined8 *)(lVar1 + 0x230) = 0x3039373131373933;
  *(undefined8 *)(lVar1 + 0x238) = 0xeb00000000323939;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined8 *)(lVar1 + 0x250) = 0x103f65ec8;
  *(undefined **)(lVar1 + 600) = puVar2;
  puVar2 = &UNK_110726080;
  _swift_allocObject(&UNK_110726080,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3033393739333036;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000363938;
  *(undefined8 *)(puVar2 + 0x20) = 0x3033393739333036;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000363938;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f657a8;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x260) = 0x3033393739333036;
  *(undefined8 *)(lVar1 + 0x268) = 0xeb00000000363938;
  *(undefined8 *)(lVar1 + 0x270) = 0x3033393739333036;
  *(undefined8 *)(lVar1 + 0x278) = 0xeb00000000363938;
  *(undefined8 *)(lVar1 + 0x288) = 0;
  *(undefined8 *)(lVar1 + 0x280) = 0;
  *(undefined8 *)(lVar1 + 0x290) = 0x103f65ecc;
  *(undefined **)(lVar1 + 0x298) = puVar2;
  puVar2 = &UNK_1107260a8;
  _swift_allocObject(&UNK_1107260a8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3033303537373036;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000303938;
  *(undefined8 *)(puVar2 + 0x20) = 0x3033303537373036;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000303938;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f657e0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x2a0) = 0x3033303537373036;
  *(undefined8 *)(lVar1 + 0x2a8) = 0xeb00000000303938;
  *(undefined8 *)(lVar1 + 0x2b0) = 0x3033303537373036;
  *(undefined8 *)(lVar1 + 0x2b8) = 0xeb00000000303938;
  *(undefined8 *)(lVar1 + 0x2c8) = 0;
  *(undefined8 *)(lVar1 + 0x2c0) = 0;
  *(undefined8 *)(lVar1 + 0x2d0) = 0x103f65ed0;
  *(undefined **)(lVar1 + 0x2d8) = puVar2;
  puVar2 = &UNK_1107260d0;
  _swift_allocObject(&UNK_1107260d0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x3239383838383036;
  *(undefined8 *)(puVar2 + 0x18) = 0xeb00000000333836;
  *(undefined8 *)(puVar2 + 0x20) = 0x3239383838383036;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000333836;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65818;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x2e0) = 0x3239383838383036;
  *(undefined8 *)(lVar1 + 0x2e8) = 0xeb00000000333836;
  *(undefined8 *)(lVar1 + 0x2f0) = 0x3239383838383036;
  *(undefined8 *)(lVar1 + 0x2f8) = 0xeb00000000333836;
  *(undefined8 *)(lVar1 + 0x300) = 0;
  *(undefined8 *)(lVar1 + 0x308) = 0;
  *(undefined8 *)(lVar1 + 0x310) = 0x103f65ed4;
  *(undefined **)(lVar1 + 0x318) = puVar2;
  puVar2 = &UNK_1107260f8;
  _swift_allocObject(&UNK_1107260f8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0xd000000000000010;
  *(undefined8 *)(puVar2 + 0x18) = 0x800000010f1d1aa0;
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(puVar2 + 0x28) = 0x800000010f1d1aa0;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65850;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 800) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x328) = 0x800000010f1d1aa0;
  *(undefined8 *)(lVar1 + 0x330) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x338) = 0x800000010f1d1aa0;
  *(undefined8 *)(lVar1 + 0x348) = 0;
  *(undefined8 *)(lVar1 + 0x340) = 0;
  *(undefined8 *)(lVar1 + 0x350) = 0x103f65ed8;
  *(undefined **)(lVar1 + 0x358) = puVar2;
  puVar2 = &UNK_110726120;
  _swift_allocObject(&UNK_110726120,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0xd000000000000010;
  *(undefined8 *)(puVar2 + 0x18) = 0x800000010f1d1ac0;
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(puVar2 + 0x28) = 0x800000010f1d1ac0;
  *(undefined8 *)(puVar2 + 0x30) = 0x103f65888;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x360) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x368) = 0x800000010f1d1ac0;
  *(undefined8 *)(lVar1 + 0x370) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x378) = 0x800000010f1d1ac0;
  *(undefined8 *)(lVar1 + 0x388) = 0;
  *(undefined8 *)(lVar1 + 0x380) = 0;
  *(undefined8 *)(lVar1 + 0x390) = 0x103f65edc;
  *(undefined **)(lVar1 + 0x398) = puVar2;
  return lVar1;
}



/* Entry: 103f65e50; end: 103f65e8b;  */

void FUN_103f65e50(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103f65e8c; end: 103f65f2f;  */

undefined8 FUN_103f65e8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010b0aee1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5e6f0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_103f65040();
  _objc_release(param_1);
  uVar2 = 0xd00000000000005d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000005d,0x800000010f1d2520);
  uVar3 = uVar1;
  func_0x000107c5e59c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 103f65f30; end: 103f6633f;  */

undefined1  [16] FUN_103f65f30(void)

{
  return ZEXT816(0x110726490);
}



/* Entry: 103f66340; end: 103f663ab; -[SCBundledLensProviderImpl bundledLensWithCode:bundle:] */

void FUN_103f66340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  func_0x0001007ffa0c(param_3,param_2,param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f663ac; end: 103f66413; -[SCBundledLensProviderImpl bundledLensIconWithCode:] */

void FUN_103f663ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  func_0x0001008022b8(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f66414; end: 103f664cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f66414(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_113035cb8);
  lVar1 = lVar2;
  func_0x000107c4b1c4(lVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x000107c4af6c();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar1 = param_1;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(param_1);
      func_0x0001008022b8(lVar1,param_2);
      _swift_bridgeObjectRelease(param_2);
      if (lVar1 != 0) {
        func_0x000107c55d68(lVar2);
      }
    }
  }
  return;
}



/* Entry: 103f664cc; end: 103f66527; -[SCBundledLensProviderImpl bundledLensIconWithKey:] */

void FUN_103f664cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103f66414(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f66528; end: 103f66613;  */

undefined1  [16] FUN_103f66528(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  uVar3 = param_1;
  FUN_103f66614();
  puVar8 = (undefined8 *)(uVar3 + 0x38);
  lVar9 = *(long *)(uVar3 + 0x10) + 1;
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      goto LAB_103f665e8;
    }
    uVar4 = puVar8[-3];
    uVar2 = puVar8[-2];
    uVar1 = *puVar8;
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[4];
    if (uVar4 == param_1 && uVar2 == param_2) break;
    puVar8 = puVar8 + 8;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar4,uVar2,param_1,param_2,0);
  } while ((uVar4 & 1) == 0);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar7);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_release(uVar7);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
  uVar3 = uVar2;
LAB_103f665e8:
  _swift_bridgeObjectRelease(uVar3);
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Entry: 103f66614; end: 103f6688f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f66614(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar2 = _DAT_113035cc0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = *(undefined **)(unaff_x20 + _DAT_113035cc0);
  if (puVar10 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(puVar10);
    return puVar10;
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_113035ca0);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(long *)(lVar7 + 0x10) != 0) &&
     (lVar4 = lRam0000000113035c90, func_0x0001007ff45c(),
     puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8, ((ulong)param_2 & 1) != 0)) {
    puVar10 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar4 * 0x18 + 0x10);
    _swift_bridgeObjectRetain(puVar10);
  }
  uVar11 = *(ulong *)(puVar10 + 0x10);
  puVar12 = *(undefined **)(puVar8 + 0x10);
  puVar1 = puVar12 + uVar11;
  if (SCARRY8((long)puVar12,uVar11)) goto LAB_103f66880;
  puVar5 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar5 == 0) || (uVar6 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar6 < (long)puVar1)) {
    param_2 = puVar12;
    if ((long)puVar12 <= (long)puVar1) {
      param_2 = puVar1;
    }
    FUN_103f67870();
    uVar6 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (*(long *)(puVar10 + 0x10) == 0) goto LAB_103f66750;
LAB_103f666d8:
    if (uVar6 - *(long *)(puVar5 + 0x10) < uVar11) goto LAB_103f66888;
    param_2 = puVar10 + 0x20;
    _swift_arrayInitWithCopy
              (puVar5 + *(long *)(puVar5 + 0x10) * 0x40 + 0x20,param_2,uVar11,&UNK_110726510);
    _swift_bridgeObjectRelease(puVar10);
    if (uVar11 != 0) {
      if (SCARRY8(*(long *)(puVar5 + 0x10),uVar11)) goto LAB_103f6688c;
      *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar11;
    }
  }
  else {
    puVar5 = puVar8;
    if (*(long *)(puVar10 + 0x10) != 0) goto LAB_103f666d8;
LAB_103f66750:
    _swift_bridgeObjectRelease(puVar10);
    if (uVar11 != 0) goto LAB_103f66884;
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(long *)(lVar7 + 0x10) != 0) &&
     (lVar4 = lRam0000000113035c98, func_0x0001007ff45c(),
     puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8, ((ulong)param_2 & 1) != 0)) {
    puVar8 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar4 * 0x18 + 0x10);
    _swift_bridgeObjectRetain(puVar8);
  }
  uVar11 = *(ulong *)(puVar8 + 0x10);
  lVar7 = *(long *)(puVar5 + 0x10);
  if (SCARRY8(lVar7,uVar11)) {
LAB_103f66880:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f66884);
    (*pcVar3)();
  }
  puVar10 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar10 == 0) ||
     (uVar6 = *(ulong *)(puVar5 + 0x18) >> 1, (long)uVar6 < (long)(lVar7 + uVar11))) {
    FUN_103f67870();
    uVar6 = *(ulong *)(puVar10 + 0x18) >> 1;
    lVar7 = *(long *)(puVar8 + 0x10);
    puVar5 = puVar10;
  }
  else {
    lVar7 = *(long *)(puVar8 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(puVar8);
    if (uVar11 != 0) {
LAB_103f66884:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f66888);
      (*pcVar3)();
    }
  }
  else {
    if (uVar6 - *(long *)(puVar5 + 0x10) < uVar11) {
LAB_103f66888:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f6688c);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy
              (puVar5 + *(long *)(puVar5 + 0x10) * 0x40 + 0x20,puVar8 + 0x20,uVar11,&UNK_110726510);
    _swift_bridgeObjectRelease(puVar8);
    if (uVar11 != 0) {
      if (SCARRY8(*(long *)(puVar5 + 0x10),uVar11)) {
LAB_103f6688c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f66890);
        (*pcVar3)();
      }
      *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar11;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  _swift_bridgeObjectRetain(puVar5);
  _swift_bridgeObjectRelease(uVar9);
  return puVar5;
}



/* Entry: 103f66890; end: 103f6691f; -[SCBundledLensProviderImpl tagForLensWithId:] */

void FUN_103f66890(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  lVar1 = param_2;
  FUN_103f66528(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f66920; end: 103f66a87;  */

undefined * FUN_103f66920(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar5 = param_1;
  FUN_103f66614();
  uVar12 = *(ulong *)(uVar5 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 == 0) {
LAB_103f66a58:
    _swift_bridgeObjectRelease(uVar5);
    return puVar8;
  }
  uVar10 = 0;
LAB_103f66974:
  plVar11 = (long *)(uVar5 + 0x48 + uVar10 * 0x40);
  uVar13 = uVar10;
  do {
    if (*(ulong *)(uVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f66a88);
      (*pcVar4)();
    }
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar1 = plVar11[-5];
      lVar3 = plVar11[-4];
      uVar10 = plVar11[-1];
      if ((uVar10 == param_1 && lVar9 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar10,lVar9,param_1,param_2,0), (uVar10 & 1) != 0)) break;
    }
    uVar13 = uVar13 + 1;
    plVar11 = plVar11 + 8;
    if (uVar12 == uVar13) goto LAB_103f66a58;
  } while( true );
  _swift_bridgeObjectRetain(lVar3);
  puVar6 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar8;
  if (((ulong)puVar6 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
  }
  uVar2 = *(ulong *)(puVar7 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    func_0x0001000d182c(puVar8,uVar2 + 1,1,puVar7);
  }
  uVar10 = uVar13 + 1;
  *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
  *(long *)(puVar8 + uVar2 * 0x10 + 0x20) = lVar1;
  *(long *)(puVar8 + uVar2 * 0x10 + 0x28) = lVar3;
  if (uVar12 - 1 == uVar13) goto LAB_103f66a58;
  goto LAB_103f66974;
}



/* Entry: 103f66a88; end: 103f66b0b; -[SCBundledLensProviderImpl lensIdsForTag:] */

void FUN_103f66a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_103f66920(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  uVar1 = param_3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f66b0c; end: 103f66b8f; -[SCBundledLensProviderImpl clearInMemoryCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f66b0c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)(param_1 + _DAT_113035ca8);
  _swift_beginAccess(plVar1,auStack_38,0,0);
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar2 = *(undefined8 *)(*plVar1 + 0x10);
  _objc_retain();
  func_0x000107c4fe7c(uVar2);
  func_0x00010bf3ab80(*(undefined8 *)(param_1 + _DAT_113035cb8));
  _objc_release(param_1);
  return;
}



/* Entry: 103f66b90; end: 103f6733b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f66b90(undefined8 param_1,undefined *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long unaff_x20;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  undefined *puStack_140;
  undefined1 auStack_130 [64];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar20 = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_113035ca8);
  lVar24 = *(long *)(unaff_x20 + _DAT_113035ca0);
  puStack_140 = PTR___swiftEmptyArrayStorage_11034f1c8;
  bVar5 = false;
  do {
    bVar4 = bVar5;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(lVar24 + 0x10) != 0) {
      lVar21 = *(long *)(lVar20 * 8 + 0x113035c90);
      lVar20 = lVar21;
      func_0x0001007ff45c();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((ulong)param_2 & 1) != 0) {
        lVar20 = *(long *)(*(long *)(lVar24 + 0x38) + lVar20 * 0x18 + 0x10);
        uVar27 = *(ulong *)(lVar20 + 0x10);
        _swift_bridgeObjectRetain(lVar20);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar27 != 0) {
          uVar26 = 0;
          do {
            while( true ) {
              if (*(ulong *)(lVar20 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103f67324);
                (*pcVar6)();
              }
              puVar17 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 0x40);
              uStack_88 = puVar17[5];
              uStack_90 = puVar17[4];
              uStack_78 = puVar17[7];
              uStack_80 = puVar17[6];
              uStack_a8 = puVar17[1];
              uStack_b0 = *puVar17;
              puVar11 = (undefined *)puVar17[3];
              puVar23 = (undefined *)puVar17[2];
              uVar26 = uVar26 + 1;
              puStack_a0 = puVar23;
              puStack_98 = puVar11;
              if ((*(long *)(lVar24 + 0x10) != 0) &&
                 (lVar28 = lVar21, func_0x0001007ff45c(), ((ulong)param_2 & 1) != 0)) break;
LAB_103f66c90:
              if (uVar26 == uVar27) goto LAB_103f670a4;
            }
            puVar17 = (undefined8 *)(*(long *)(lVar24 + 0x38) + lVar28 * 0x18);
            uVar13 = *puVar17;
            uVar16 = puVar17[1];
            lVar28 = puVar17[2];
            _swift_beginAccess(plVar1,auStack_130,0x20,0);
            plVar7 = plVar1;
            func_0x0001000a8868(plVar1,plVar1[3]);
            puVar17 = *(undefined8 **)(*plVar7 + 0x10);
            _swift_bridgeObjectRetain(uVar16);
            _swift_bridgeObjectRetain(lVar28);
            func_0x000103f679ac(&uStack_b0,&uStack_f0);
            puVar12 = puVar23;
            param_2 = puVar11;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar23);
            func_0x000107c4d9c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            _swift_endAccess(auStack_130);
            if (puVar17 == (undefined8 *)0x0) {
LAB_103f66e58:
              lVar22 = *(long *)(lVar28 + 0x10);
              if (lVar22 != 0) {
                lVar25 = 0x20;
                do {
                  puVar17 = (undefined8 *)(lVar28 + lVar25);
                  uStack_c8 = puVar17[5];
                  uStack_d0 = puVar17[4];
                  uStack_b8 = puVar17[7];
                  pcStack_c0 = (code *)puVar17[6];
                  uStack_e8 = puVar17[1];
                  uStack_f0 = *puVar17;
                  param_2 = (undefined *)puVar17[3];
                  puVar12 = (undefined *)puVar17[2];
                  puStack_e0 = puVar12;
                  puStack_d8 = param_2;
                  if ((puVar12 == puVar23 && param_2 == puVar11) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (puVar12,param_2,puVar23,puVar11,0), ((ulong)puVar12 & 1) != 0)) {
                    pcVar6 = pcStack_c0;
                    puVar8 = &uStack_f0;
                    func_0x000103f679ac(puVar8,auStack_130);
                    (*pcVar6)();
                    func_0x000103f679e8(&uStack_f0);
                    func_0x000100801a00(puVar8);
                    func_0x000100802698(puVar8,uVar13,uVar16);
                    _swift_bridgeObjectRelease(lVar28);
                    _swift_bridgeObjectRelease(uVar16);
                    _swift_beginAccess(plVar1,auStack_130,0x21,0);
                    lVar28 = plVar1[3];
                    lVar22 = plVar1[4];
                    func_0x0001000c6518(plVar1,lVar28);
                    pcVar6 = *(code **)(lVar22 + 0x10);
                    puVar17 = puVar8;
                    _objc_retain();
                    _objc_retain();
                    _swift_bridgeObjectRetain(puVar11);
                    (*pcVar6)(puVar8,puVar23,puVar11,lVar28,lVar22);
                    _swift_endAccess(auStack_130);
                    _objc_release(puVar17);
                    param_2 = puVar23;
                    goto LAB_103f66f6c;
                  }
                  lVar25 = lVar25 + 0x40;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              _swift_bridgeObjectRelease(lVar28);
              _swift_bridgeObjectRelease(uVar16);
              func_0x000103f679e8(&uStack_b0);
              goto LAB_103f66c90;
            }
            puVar8 = puVar17;
            func_0x000107c5062c();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = param_2;
            if (puVar8 == (undefined8 *)0x0) {
LAB_103f66dc4:
              puVar8 = puVar17;
              func_0x00010bf3ec40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 == (undefined8 *)0x0) {
                _swift_bridgeObjectRelease(lVar28);
                _swift_bridgeObjectRelease(uVar16);
                param_2 = puVar12;
              }
              else {
                puVar9 = puVar8;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                param_2 = puVar12;
                _objc_release(puVar8);
                _swift_bridgeObjectRelease(puVar12);
                uVar3 = (ulong)puVar9 & 0xffffffffffff;
                if (((ulong)puVar12 & 0x2000000000000000) != 0) {
                  uVar3 = (ulong)puVar12 >> 0x38 & 0xf;
                }
                if (uVar3 == 0) {
                  _swift_bridgeObjectRelease(lVar28);
                  _swift_bridgeObjectRelease(uVar16);
                }
                else {
                  puVar8 = puVar17;
                  func_0x000107c49c88();
                  if ((((int)puVar8 == 0) &&
                      (puVar8 = puVar17, func_0x000107c4a654(), (int)puVar8 == 0)) &&
                     (puVar8 = puVar17, func_0x000107c49bb0(), (int)puVar8 == 0)) {
                    _objc_release(puVar17);
                    goto LAB_103f66e58;
                  }
                  _swift_bridgeObjectRelease(lVar28);
                  _swift_bridgeObjectRelease(uVar16);
                }
              }
            }
            else {
              puVar9 = puVar8;
              func_0x00010bf5fe00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              puVar12 = param_2;
              if (puVar9 == (undefined8 *)0x0) goto LAB_103f66dc4;
              puVar8 = puVar9;
              func_0x00010bdc3360();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              puVar12 = param_2;
              if (puVar8 == (undefined8 *)0x0) goto LAB_103f66dc4;
              _swift_bridgeObjectRelease(lVar28);
              _swift_bridgeObjectRelease(uVar16);
              _objc_release(puVar8);
            }
LAB_103f66f6c:
            func_0x000103f679e8(&uStack_b0);
            puVar23 = puVar10;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)puVar23 == 0) || ((long)puVar10 < 0)) ||
               (puVar23 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar10 >> 0x3e == 0) {
                param_2 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
              }
              else {
                param_2 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar10) {
                  param_2 = puVar10;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg();
              }
              param_2 = param_2 + 1;
              puVar23 = (undefined *)0x0;
              func_0x000100fe2a60(0,param_2,1,puVar10);
            }
            uVar18 = (ulong)puVar23 & 0xffffffffffffff8;
            uVar3 = *(ulong *)(uVar18 + 0x10);
            puVar11 = (undefined *)(uVar3 + 1);
            puVar10 = puVar23;
            if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar3) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
              param_2 = puVar11;
              func_0x000100fe2a60(puVar10,puVar11,1,puVar23);
              uVar18 = (ulong)puVar10 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar18 + 0x10) = puVar11;
            *(undefined8 **)(uVar18 + uVar3 * 8 + 0x20) = puVar17;
          } while (uVar26 != uVar27);
        }
LAB_103f670a4:
        _swift_bridgeObjectRelease(lVar20);
      }
    }
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar23 = *(undefined **)((undefined *)((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar23 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        puVar23 = puVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    uVar27 = (ulong)puStack_140 >> 0x3e;
    if (uVar27 == 0) {
      puVar11 = *(undefined **)((undefined *)((ulong)puStack_140 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)puStack_140 & 0xffffffffffffff8);
      if (((ulong)puStack_140 & 0x8000000000000000) != 0) {
        puVar11 = puStack_140;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8((long)puVar11,(long)puVar23)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103f67328);
      (*pcVar6)();
    }
    uVar19 = (uint)puStack_140;
    puVar11 = puVar11 + (long)puVar23;
    _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
    uVar2 = 0;
    if (uVar27 == 0) {
      uVar2 = uVar19;
    }
    puVar12 = (undefined *)(ulong)uVar2;
    if ((uVar2 != 1) ||
       (uVar26 = (ulong)puStack_140 & 0xffffffffffffff8,
       (long)(*(ulong *)(uVar26 + 0x18) >> 1) < (long)puVar11)) {
      if (uVar27 == 0) {
        param_2 = *(undefined **)((undefined *)((ulong)puStack_140 & 0xffffffffffffff8) + 0x10);
      }
      else {
        param_2 = (undefined *)((ulong)puStack_140 & 0xffffffffffffff8);
        if (((ulong)puStack_140 & 0x8000000000000000) != 0) {
          param_2 = puStack_140;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if ((long)param_2 <= (long)puVar11) {
        param_2 = puVar11;
      }
      func_0x000100fe2a60(puVar12,param_2,1,puStack_140);
      uVar26 = (ulong)puVar12 & 0xffffffffffffff8;
      puStack_140 = puVar12;
    }
    lVar20 = *(long *)(uVar26 + 0x10);
    puVar11 = (undefined *)((*(ulong *)(uVar26 + 0x18) >> 1) - lVar20);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar12 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      if (puVar12 != (undefined *)0x0) {
        if (puVar11 < puVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103f67338);
          (*pcVar6)();
        }
        uVar13 = 0;
        func_0x000100c70ba8(0);
        param_2 = (undefined *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x20);
        _swift_arrayInitWithCopy(uVar26 + lVar20 * 8 + 0x20,param_2,puVar12,uVar13);
        goto LAB_103f67224;
      }
LAB_103f66bec:
      _swift_bridgeObjectRelease(puVar10);
      if (0 < (long)puVar23) goto LAB_103f67328;
    }
    else {
      puVar12 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        puVar12 = puVar10;
      }
      puVar14 = puVar12;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (puVar14 == (undefined *)0x0) goto LAB_103f66bec;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if ((long)puVar11 < (long)puVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103f67334);
        (*pcVar6)();
      }
      if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103f6733c);
        (*pcVar6)();
      }
      lVar20 = uVar26 + lVar20 * 8;
      puVar17 = (undefined8 *)(lVar20 + 0x20);
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        uVar13 = *(undefined8 *)(puVar10 + 0x20);
        *puVar17 = uVar13;
        puVar14 = puVar14 + -1;
        if (puVar14 != (undefined *)0x0) {
          uVar16 = uVar13;
          puVar17 = (undefined8 *)(puVar10 + 0x28);
          puVar8 = (undefined8 *)(lVar20 + 0x28);
          do {
            uVar13 = *puVar17;
            *puVar8 = uVar13;
            _objc_retain(uVar16);
            puVar14 = puVar14 + -1;
            uVar16 = uVar13;
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
          } while (puVar14 != (undefined *)0x0);
        }
        _objc_retain(uVar13);
      }
      else {
        puVar11 = (undefined *)0x0;
        do {
          puVar15 = puVar11;
          param_2 = puVar10;
          func_0x000100ff3f88();
          puVar17[(long)puVar11] = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar14 != puVar11);
      }
LAB_103f67224:
      _swift_bridgeObjectRelease(puVar10);
      if ((long)puVar12 < (long)puVar23) {
LAB_103f67328:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103f6732c);
        (*pcVar6)();
      }
      if (0 < (long)puVar12) {
        if (SCARRY8(*(long *)(uVar26 + 0x10),(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103f67330);
          (*pcVar6)();
        }
        *(undefined **)(uVar26 + 0x10) = puVar12 + *(long *)(uVar26 + 0x10);
      }
    }
    lVar20 = 1;
    bVar5 = true;
    if (bVar4) {
      puVar10 = PTR_PTR_1126ae558;
      _objc_opt_self(PTR_PTR_1126ae558);
      uVar13 = 0;
      func_0x000100c70ba8(0);
      puVar23 = puStack_140;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_140,uVar13);
      _swift_bridgeObjectRelease(puStack_140);
      func_0x000107c451b0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      return puVar10;
    }
  } while( true );
}



/* Entry: 103f6733c; end: 103f6736f; -[SCBundledLensProviderImpl lensMetadatas] */

void FUN_103f6733c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f66b90();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f67370; end: 103f673a3;  */

void FUN_103f67370(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f673a4; end: 103f6740b; -[SCBundledLensProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f673a4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113035cb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113035ca0));
  func_0x0001000834e4(param_1 + _DAT_113035ca8);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113035cb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113035cc0));
  return;
}



/* Entry: 103f6740c; end: 103f67443; +[SCBundledLensProviderImpl performanceAutomationWithBundle:] */

void FUN_103f6740c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103f67c88();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f67444; end: 103f675bf;  */

void FUN_103f67444(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x113035cf0,&UNK_10dcb0038);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_103f67520;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x18);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        uVar12 = puVar3[2];
        *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x18);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        if (uVar8 != 0) break;
LAB_103f67520:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103f675c0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_103f67598;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_103f67598:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 103f675c0; end: 103f6786f;  */

void FUN_103f675c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x113035cf0;
  func_0x0001000285a8(0x113035cf0,&UNK_10dcb0038);
  lVar6 = lVar16;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar16,lVar1,param_2,uVar5);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_103f6783c:
    _swift_release(lVar16);
    *unaff_x20 = lVar6;
    return;
  }
  puVar15 = (ulong *)(lVar16 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar6 + 0x40;
  lVar8 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar19 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f6786c);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_103f6783c;
        }
        uVar14 = puVar15[lVar19];
        lVar8 = lVar8 + 1;
      } while (uVar14 == 0);
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar19 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar19 << 6;
    uVar18 = *(ulong *)(*(long *)(lVar16 + 0x30) + uVar7 * 8);
    puVar9 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar7 * 0x18);
    uVar5 = *puVar9;
    uVar2 = puVar9[1];
    uVar17 = puVar9[2];
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar17);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    uVar12 = uVar18;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar7 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f67870);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar12 != uVar7) {
          uVar10 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar7 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar10 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = uVar18;
    puVar9 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar7 * 0x18);
    *puVar9 = uVar5;
    puVar9[1] = uVar2;
    puVar9[2] = uVar17;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar19;
  } while( true );
}



/* Entry: 103f67870; end: 103f67977;  */

undefined * FUN_103f67870(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f67978);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113035c40;
    func_0x0001000285a8(0x113035c40,&UNK_10dcaffb8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&UNK_110726510);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 103f67978; end: 103f67a1b;  */

void FUN_103f67978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 103f67a1c; end: 103f67c87;  */

void FUN_103f67a1c(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  pcVar5 = param_2;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar15 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      uStack_80 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 8);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 0x18);
      uStack_78 = *puVar10;
      uVar3 = puVar10[1];
      uVar18 = puVar10[2];
      uStack_70 = uVar3;
      uStack_68 = uVar18;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
      (*param_2)(&uStack_a0,&uStack_80);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = uStack_88;
      uVar18 = uStack_90;
      uVar3 = uStack_98;
      uVar9 = uStack_a0;
      lVar16 = *param_5;
      uVar7 = uStack_a0;
      func_0x0001007ff45c();
      lVar11 = *(long *)(lVar16 + 0x10);
      uVar14 = (ulong)~(uint)pcVar5 & 1;
      lVar12 = lVar11 + uVar14;
      if (SCARRY8(lVar11,uVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103f67c74);
        (*pcVar5)();
      }
      if (*(long *)(lVar16 + 0x18) < lVar12) {
        pcVar8 = (code *)(ulong)(param_4 & 1);
        FUN_103f675c0(lVar12);
        uVar7 = uVar9;
        func_0x0001007ff45c();
        if (((uint)pcVar5 & 1) != ((uint)pcVar8 & 1)) {
          func_0x0001007fe718(0);
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103f67c88);
          (*pcVar5)();
        }
      }
      else {
        pcVar8 = pcVar5;
        if ((param_4 & 1) == 0) {
          FUN_103f67444();
        }
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar12 = *param_5;
      if (((ulong)pcVar5 & 1) == 0) {
        lVar11 = lVar12 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar7 & 0x3f);
        *(ulong *)(*(long *)(lVar12 + 0x30) + uVar7 * 8) = uVar9;
        puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar7 * 0x18);
        *puVar10 = uVar3;
        puVar10[1] = uVar18;
        puVar10[2] = uVar4;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103f67c78);
          (*pcVar5)();
        }
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      else {
        puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar7 * 0x18);
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        *puVar10 = uVar3;
        puVar10[1] = uVar18;
        puVar10[2] = uVar4;
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(uVar1);
      }
      param_4 = 1;
      pcVar5 = pcVar8;
    }
    bVar6 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103f67c70);
      (*pcVar5)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar15) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Entry: 103f67c88; end: 103f67dfb;  */

/* WARNING: Removing unreachable block (ram,0x000103f67df0) */

undefined8 FUN_103f67c88(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 auStack_88 [9];
  
  uVar1 = param_1;
  func_0x0001007fe600();
  lVar4 = 0x113035c58;
  func_0x0001000285a8(0x113035c58,&UNK_10dcaffc8);
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = 3;
  lVar2 = lVar4;
  FUN_103f658c0();
  *(undefined8 *)(lVar4 + 0x28) = 0xd000000000000022;
  *(undefined8 *)(lVar4 + 0x30) = 0x800000010f1d2770;
  *(long *)(lVar4 + 0x38) = lVar2;
  lVar2 = lVar4;
  func_0x0001007ff2d0(lVar4);
  _swift_setDeallocating(lVar4);
  FUN_103f67dfc((undefined8 *)(lVar4 + 0x20));
  uVar3 = uVar1;
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  auStack_88[0] = uVar1;
  FUN_103f67a1c(lVar2,FUN_103f67978,0,uVar3,auStack_88);
  _swift_bridgeObjectRelease(lVar2);
  lVar4 = 0;
  func_0x0001007ff540();
  _swift_allocObject();
  puVar5 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x10) = puVar5;
  puVar5 = PTR_PTR_1126bbb48;
  _objc_allocWithZone(PTR_PTR_1126bbb48);
  _swift_retain(lVar4);
  func_0x000107c453e4(puVar5);
  _objc_retain(param_1);
  func_0x0001007ff5c8();
  _swift_release(lVar4);
  return param_1;
}



/* Entry: 103f67dfc; end: 103f67e43;  */

undefined8 FUN_103f67dfc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x113035c60;
  func_0x0001000285a8(0x113035c60,&UNK_10dcb0030);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f67e44; end: 103f67e5b;  */

bool FUN_103f67e44(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f67e5c; end: 103f67e9b;  */

void FUN_103f67e5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0040;
  _swift_getWitnessTable(&UNK_10dcb0040,&UNK_110726668);
  puRam0000000113035cf8 = puVar1;
  return;
}



/* Entry: 103f67e9c; end: 103f67f47;  */

void FUN_103f67e9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f67f48; end: 103f67f6f;  */

void FUN_103f67f48(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f67f70; end: 103f67fff;  */

undefined1  [16] FUN_103f67f70(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x64656c65636e6163;
  }
  else if (lStack_18 == 1) {
    uVar3 = 0xe900000000000064;
    uVar2 = 0x6564656563637573;
  }
  else {
    if (lStack_18 != 2) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f68000);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar2 = 0x64656c696166;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103f68000; end: 103f6800f;  */

undefined1  [16] FUN_103f68000(void)

{
  return ZEXT816(0x110726668);
}



/* Entry: 103f68010; end: 103f6805b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68010(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035d00) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6805c; end: 103f680b3; -[_TtC39SCLensCarouselPerformanceLoggerServices53SCCameraUIScopedLensCarouselPerformanceLoggerServices initWithLensCarouselPerformanceLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6805c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035d00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f680b4; end: 103f68113; -[_TtC39SCLensCarouselPerformanceLoggerServices53SCCameraUIScopedLensCarouselPerformanceLoggerServices init] */

void FUN_103f680b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselPerformanceLoggerServices.SCCameraUIScopedLensCarouselPerformanceLoggerServices"
             ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f680e0);
  (*pcVar1)();
}



/* Entry: 103f68114; end: 103f68123; -[_TtC39SCLensCarouselPerformanceLoggerServices53SCCameraUIScopedLensCarouselPerformanceLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035d00));
  return;
}



/* Entry: 103f68124; end: 103f6816f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68124(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035d30) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f68170; end: 103f681c7; -[_TtC39SCLensCarouselPerformanceLoggerServices39SCLensCarouselPerformanceLoggerServices initWithLensCarouselPerformanceLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035d30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f681c8; end: 103f68227; -[_TtC39SCLensCarouselPerformanceLoggerServices39SCLensCarouselPerformanceLoggerServices init] */

void FUN_103f681c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselPerformanceLoggerServices.SCLensCarouselPerformanceLoggerServices",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f681f4);
  (*pcVar1)();
}



/* Entry: 103f68228; end: 103f68237; -[_TtC39SCLensCarouselPerformanceLoggerServices39SCLensCarouselPerformanceLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035d30));
  return;
}



/* Entry: 103f68238; end: 103f68247; -[_TtC39SCLensCarouselPerformanceLoggerServices61SCLensTalkCarouselScopedLensCarouselPerformanceLoggerServices lensCarouselPerformanceLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035d60));
  return;
}



/* Entry: 103f68248; end: 103f682df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68248(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035d60) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f682e0; end: 103f68337; -[_TtC39SCLensCarouselPerformanceLoggerServices61SCLensTalkCarouselScopedLensCarouselPerformanceLoggerServices initWithLensCarouselPerformanceLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f682e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035d60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f68338; end: 103f68397; -[_TtC39SCLensCarouselPerformanceLoggerServices61SCLensTalkCarouselScopedLensCarouselPerformanceLoggerServices init] */

void FUN_103f68338(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselPerformanceLoggerServices.SCLensTalkCarouselScopedLensCarouselPerformanceLoggerServices"
             ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f68364);
  (*pcVar1)();
}



/* Entry: 103f68398; end: 103f683a7; -[_TtC39SCLensCarouselPerformanceLoggerServices61SCLensTalkCarouselScopedLensCarouselPerformanceLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035d60));
  return;
}



/* Entry: 103f683a8; end: 103f683c7;  */

void FUN_103f683a8(void)

{
  _objc_opt_self(&PTR_PTR_11296bd20);
  return;
}



/* Entry: 103f683c8; end: 103f683d7; -[_TtC39SCLensCarouselPerformanceLoggerServices52SCPreviewScopedLensCarouselPerformanceLoggerServices lensCarouselPerformanceLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f683c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035d90));
  return;
}



/* Entry: 103f683d8; end: 103f6846f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f683d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035d90) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f68470; end: 103f684c7; -[_TtC39SCLensCarouselPerformanceLoggerServices52SCPreviewScopedLensCarouselPerformanceLoggerServices initWithLensCarouselPerformanceLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035d90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f684c8; end: 103f68527; -[_TtC39SCLensCarouselPerformanceLoggerServices52SCPreviewScopedLensCarouselPerformanceLoggerServices init] */

void FUN_103f684c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselPerformanceLoggerServices.SCPreviewScopedLensCarouselPerformanceLoggerServices"
             ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f684f4);
  (*pcVar1)();
}



/* Entry: 103f68528; end: 103f68537; -[_TtC39SCLensCarouselPerformanceLoggerServices52SCPreviewScopedLensCarouselPerformanceLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035d90));
  return;
}



/* Entry: 103f68538; end: 103f68557;  */

void FUN_103f68538(void)

{
  _objc_opt_self(&PTR_PTR_11296bde0);
  return;
}



/* Entry: 103f68558; end: 103f68567; -[_TtC39SCLensCarouselPerformanceLoggerServices55SCSnapEditorScopedLensCarouselPerformanceLoggerServices lensCarouselPerformanceLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035dc0));
  return;
}



/* Entry: 103f68568; end: 103f685ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68568(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035dc0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f68600; end: 103f68657; -[_TtC39SCLensCarouselPerformanceLoggerServices55SCSnapEditorScopedLensCarouselPerformanceLoggerServices initWithLensCarouselPerformanceLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f68600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035dc0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f68658; end: 103f686b7; -[_TtC39SCLensCarouselPerformanceLoggerServices55SCSnapEditorScopedLensCarouselPerformanceLoggerServices init] */

void FUN_103f68658(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselPerformanceLoggerServices.SCSnapEditorScopedLensCarouselPerformanceLoggerServices"
             ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f68684);
  (*pcVar1)();
}



/* Entry: 103f686b8; end: 103f686c7; -[_TtC39SCLensCarouselPerformanceLoggerServices55SCSnapEditorScopedLensCarouselPerformanceLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f686b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035dc0));
  return;
}



/* Entry: 103f686c8; end: 103f686e7;  */

void FUN_103f686c8(void)

{
  _objc_opt_self(&PTR_PTR_11296bea0);
  return;
}



/* Entry: 103f686e8; end: 103f68777;  */

uint FUN_103f686e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = *(undefined2 *)(param_1 + 0x12);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = *(undefined2 *)(param_2 + 0x12);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_103f68778(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103f68778; end: 103f68ccf;  */

uint FUN_103f68778(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_6e0 [128];
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined8 uStack_56f;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined7 uStack_46f;
  undefined1 uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined2 uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined2 uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_f0 = (undefined2)param_1[0x12];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  iVar2 = (int)&uStack_180;
  func_0x000103f6960c();
  if (iVar2 == 0) {
    puVar4 = &uStack_180;
    func_0x000103f6961c();
    uStack_2b8 = puVar4[1];
    uStack_2c0 = *puVar4;
    uStack_2a8 = puVar4[3];
    uStack_2b0 = puVar4[2];
    uStack_298 = puVar4[5];
    uStack_2a0 = puVar4[4];
    uStack_288 = puVar4[7];
    uStack_290 = puVar4[6];
    uStack_278 = puVar4[9];
    uStack_280 = puVar4[8];
    uStack_268 = puVar4[0xb];
    uStack_270 = puVar4[10];
    uStack_258 = puVar4[0xd];
    uStack_260 = puVar4[0xc];
    uStack_248 = puVar4[0xf];
    uStack_250 = puVar4[0xe];
    uStack_230 = (undefined1)puVar4[0x12];
    uStack_238 = (undefined1)puVar4[0x11];
    uStack_237 = (undefined7)(puVar4[0x11] >> 8);
    uStack_240 = (undefined1)puVar4[0x10];
    uStack_23f = (undefined7)(puVar4[0x10] >> 8);
    uStack_218 = param_2[1];
    uStack_220 = *param_2;
    uStack_208 = param_2[3];
    uStack_210 = param_2[2];
    uStack_1f8 = param_2[5];
    uStack_200 = param_2[4];
    uStack_1e8 = param_2[7];
    uStack_1f0 = param_2[6];
    uStack_1d8 = param_2[9];
    uStack_1e0 = param_2[8];
    uStack_1c8 = param_2[0xb];
    uStack_1d0 = param_2[10];
    uStack_1b8 = param_2[0xd];
    uStack_1c0 = param_2[0xc];
    uStack_1a8 = param_2[0xf];
    uStack_1b0 = param_2[0xe];
    uStack_198 = param_2[0x11];
    uStack_1a0 = param_2[0x10];
    uStack_190 = (undefined2)param_2[0x12];
    iVar2 = (int)&uStack_220;
    func_0x000103f6960c();
    if (iVar2 == 0) {
      puVar4 = &uStack_220;
      func_0x000103f6961c();
      uStack_358 = puVar4[1];
      uStack_360 = *puVar4;
      uStack_348 = puVar4[3];
      uStack_350 = puVar4[2];
      uStack_318 = puVar4[9];
      uStack_320 = puVar4[8];
      uStack_308 = puVar4[0xb];
      uStack_310 = puVar4[10];
      uStack_338 = puVar4[5];
      uStack_340 = puVar4[4];
      uStack_328 = puVar4[7];
      uStack_330 = puVar4[6];
      uStack_2e8 = puVar4[0xf];
      uStack_2f0 = puVar4[0xe];
      uStack_2d0 = (undefined1)puVar4[0x12];
      uStack_2f8 = puVar4[0xd];
      uStack_300 = puVar4[0xc];
      uStack_2d8 = (undefined1)puVar4[0x11];
      uStack_2d7 = (undefined7)(puVar4[0x11] >> 8);
      uStack_2e0 = (undefined1)puVar4[0x10];
      uStack_2df = (undefined7)(puVar4[0x10] >> 8);
      if (((uStack_2c0 == uStack_360) && (uStack_2b8 == uStack_358)) ||
         (uVar5 = uStack_2c0,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar5 & 1) != 0)) {
        if ((char)uStack_2b0 == (char)uStack_350) {
          uStack_418 = uStack_260;
          uStack_420 = uStack_268;
          uStack_408 = uStack_250;
          uStack_410 = uStack_258;
          uStack_3f8 = uStack_240;
          uStack_400 = uStack_248;
          uStack_3ef = uStack_237;
          uStack_3e8 = uStack_230;
          uStack_3f7 = uStack_23f;
          uStack_3f0 = uStack_238;
          uStack_458 = uStack_2a0;
          uStack_460 = uStack_2a8;
          uStack_448 = uStack_290;
          uStack_450 = uStack_298;
          uStack_438 = uStack_280;
          uStack_440 = uStack_288;
          uStack_428 = uStack_270;
          uStack_430 = uStack_278;
          uStack_3c8 = uStack_330;
          uStack_3d0 = uStack_338;
          uStack_3b8 = uStack_320;
          uStack_3c0 = uStack_328;
          uStack_3d8 = uStack_340;
          uStack_3e0 = uStack_348;
          uStack_36f = uStack_2d7;
          uStack_368 = uStack_2d0;
          uStack_370 = uStack_2d8;
          uStack_388 = uStack_2f0;
          uStack_390 = uStack_2f8;
          uStack_378 = uStack_2e0;
          uStack_377 = uStack_2df;
          uStack_380 = uStack_2e8;
          uStack_3a8 = uStack_310;
          uStack_3b0 = uStack_318;
          uStack_398 = uStack_300;
          uStack_3a0 = uStack_308;
          iVar2 = (int)&uStack_460;
          func_0x000103f69620();
          if (iVar2 == 1) {
            iVar2 = (int)&uStack_3e0;
            func_0x000103f69620();
            if (iVar2 == 1) {
              uStack_518 = uStack_418;
              uStack_520 = uStack_420;
              uStack_508 = uStack_408;
              uStack_510 = uStack_410;
              uStack_4f8 = uStack_3f8;
              uStack_500 = uStack_400;
              uStack_4ef = uStack_3ef;
              uStack_4e8 = uStack_3e8;
              uStack_4f7 = uStack_3f7;
              uStack_4f0 = uStack_3f0;
              uStack_558 = uStack_458;
              uStack_560 = uStack_460;
              uStack_548 = uStack_448;
              uStack_550 = uStack_450;
              uStack_538 = uStack_438;
              uStack_540 = uStack_440;
              uStack_528 = uStack_428;
              uStack_530 = uStack_430;
              FUN_103f69644(&uStack_2a8,&uStack_e0);
              FUN_103f69644(&uStack_348,&uStack_e0);
              func_0x000103f69694(&uStack_560,0x113035df0,&UNK_10dcb0310);
LAB_103f68858:
              uVar3 = 1;
              goto LAB_103f68be8;
            }
          }
          else {
            uStack_598 = uStack_418;
            uStack_5a0 = uStack_420;
            uStack_588 = uStack_408;
            uStack_590 = uStack_410;
            uStack_578 = uStack_3f8;
            uStack_580 = uStack_400;
            uStack_56f = CONCAT17(uStack_3e8,uStack_3ef);
            uStack_577 = uStack_3f7;
            uStack_570 = uStack_3f0;
            uStack_5d8 = uStack_458;
            uStack_5e0 = uStack_460;
            uStack_5c8 = uStack_448;
            uStack_5d0 = uStack_450;
            uStack_5b8 = uStack_438;
            uStack_5c0 = uStack_440;
            uStack_5a8 = uStack_428;
            uStack_5b0 = uStack_430;
            iVar2 = (int)&uStack_3e0;
            func_0x000103f69620();
            if (iVar2 != 1) {
              uStack_618 = uStack_398;
              uStack_620 = uStack_3a0;
              uStack_608 = uStack_388;
              uStack_610 = uStack_390;
              uStack_5f8 = uStack_378;
              uStack_600 = uStack_380;
              uStack_5ef = uStack_36f;
              uStack_5e8 = uStack_368;
              uStack_5f7 = uStack_377;
              uStack_5f0 = uStack_370;
              uStack_658 = uStack_3d8;
              uStack_660 = uStack_3e0;
              uStack_648 = uStack_3c8;
              uStack_650 = uStack_3d0;
              uStack_638 = uStack_3b8;
              uStack_640 = uStack_3c0;
              uStack_628 = uStack_3a8;
              uStack_630 = uStack_3b0;
              uStack_4ef = uStack_36f;
              uStack_4e8 = uStack_368;
              uStack_4f0 = uStack_370;
              uStack_508 = uStack_388;
              uStack_510 = uStack_390;
              uStack_4f8 = uStack_378;
              uStack_4f7 = uStack_377;
              uStack_500 = uStack_380;
              uStack_528 = uStack_3a8;
              uStack_530 = uStack_3b0;
              uStack_518 = uStack_398;
              uStack_520 = uStack_3a0;
              uStack_548 = uStack_3c8;
              uStack_550 = uStack_3d0;
              uStack_538 = uStack_3b8;
              uStack_540 = uStack_3c0;
              uStack_558 = uStack_3d8;
              uStack_560 = uStack_3e0;
              uStack_98 = uStack_598;
              uStack_a0 = uStack_5a0;
              uStack_88 = uStack_588;
              uStack_90 = uStack_590;
              uStack_78 = uStack_578;
              uStack_80 = uStack_580;
              uStack_6f = uStack_56f;
              uStack_77 = uStack_577;
              uStack_70 = uStack_570;
              uStack_d8 = uStack_5d8;
              uStack_e0 = uStack_5e0;
              uStack_c8 = uStack_5c8;
              uStack_d0 = uStack_5d0;
              uStack_b8 = uStack_5b8;
              uStack_c0 = uStack_5c0;
              uStack_a8 = uStack_5a8;
              uStack_b0 = uStack_5b0;
              FUN_103f69644(&uStack_2a8,auStack_6e0);
              FUN_103f69644(&uStack_348,auStack_6e0);
              puVar4 = &uStack_e0;
              func_0x0001044fb330(puVar4,&uStack_560);
              func_0x000103f69694(&uStack_660,0x113035df0,&UNK_10dcb0310);
              func_0x000103f69694(&uStack_460,0x113035df0,&UNK_10dcb0310);
              if (((ulong)puVar4 & 1) != 0) goto LAB_103f68858;
              goto LAB_103f68be4;
            }
          }
          uStack_498 = uStack_398;
          uStack_4a0 = uStack_3a0;
          uStack_488 = uStack_388;
          uStack_490 = uStack_390;
          uStack_478 = uStack_378;
          uStack_480 = uStack_380;
          uStack_46f = uStack_36f;
          uStack_468 = uStack_368;
          uStack_477 = uStack_377;
          uStack_470 = uStack_370;
          uStack_4d8 = uStack_3d8;
          uStack_4e0 = uStack_3e0;
          uStack_4c8 = uStack_3c8;
          uStack_4d0 = uStack_3d0;
          uStack_4b8 = uStack_3b8;
          uStack_4c0 = uStack_3c0;
          uStack_4a8 = uStack_3a8;
          uStack_4b0 = uStack_3b0;
          uStack_518 = uStack_418;
          uStack_520 = uStack_420;
          uStack_508 = uStack_408;
          uStack_510 = uStack_410;
          uStack_4f8 = uStack_3f8;
          uStack_4f7 = uStack_3f7;
          uStack_500 = uStack_400;
          uStack_4e8 = uStack_3e8;
          uStack_4f0 = uStack_3f0;
          uStack_4ef = uStack_3ef;
          uStack_558 = uStack_458;
          uStack_560 = uStack_460;
          uStack_548 = uStack_448;
          uStack_550 = uStack_450;
          uStack_538 = uStack_438;
          uStack_540 = uStack_440;
          uStack_528 = uStack_428;
          uStack_530 = uStack_430;
          FUN_103f69644(&uStack_2a8,&uStack_e0);
          FUN_103f69644(&uStack_348,&uStack_e0);
          func_0x000103f69694(&uStack_560,0x113035df8,&UNK_10dcb0300);
        }
      }
    }
  }
  else if (iVar2 == 1) {
    puVar4 = &uStack_180;
    func_0x000103f69618();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    uStack_400 = param_2[0xc];
    uStack_3f8 = (undefined1)param_2[0xd];
    uStack_3f7 = (undefined7)(param_2[0xd] >> 8);
    uStack_3e8 = (undefined1)param_2[0xf];
    uStack_3e7 = (undefined7)(param_2[0xf] >> 8);
    uStack_3f0 = (undefined1)param_2[0xe];
    uStack_3ef = (undefined7)(param_2[0xe] >> 8);
    uStack_3d8 = param_2[0x11];
    uStack_3e0 = param_2[0x10];
    uStack_3d0 = CONCAT62(uStack_3d0._2_6_,(short)param_2[0x12]);
    uStack_438 = param_2[5];
    uStack_440 = param_2[4];
    uStack_428 = param_2[7];
    uStack_430 = param_2[6];
    uStack_418 = param_2[9];
    uStack_420 = param_2[8];
    uStack_408 = param_2[0xb];
    uStack_410 = param_2[10];
    uStack_458 = param_2[1];
    uStack_460 = *param_2;
    uStack_448 = param_2[3];
    uStack_450 = param_2[2];
    iVar2 = (int)&uStack_460;
    func_0x000103f6960c();
    if (iVar2 == 1) {
      puVar4 = &uStack_460;
      func_0x000103f69618();
      if ((uVar5 != *puVar4) || (uVar1 != puVar4[1])) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,uVar1,*puVar4,puVar4[1],0);
        uVar3 = (uint)uVar5;
        goto LAB_103f68be8;
      }
      goto LAB_103f68858;
    }
  }
  else {
    puVar4 = &uStack_180;
    func_0x000103f69614();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    dVar8 = (double)puVar4[2];
    uVar7 = puVar4[3];
    uStack_400 = param_2[0xc];
    uStack_3f8 = (undefined1)param_2[0xd];
    uStack_3f7 = (undefined7)(param_2[0xd] >> 8);
    uStack_3e8 = (undefined1)param_2[0xf];
    uStack_3e7 = (undefined7)(param_2[0xf] >> 8);
    uStack_3f0 = (undefined1)param_2[0xe];
    uStack_3ef = (undefined7)(param_2[0xe] >> 8);
    uStack_3d8 = param_2[0x11];
    uStack_3e0 = param_2[0x10];
    uStack_3d0 = CONCAT62(uStack_3d0._2_6_,(short)param_2[0x12]);
    uStack_438 = param_2[5];
    uStack_440 = param_2[4];
    uStack_428 = param_2[7];
    uStack_430 = param_2[6];
    uStack_418 = param_2[9];
    uStack_420 = param_2[8];
    uStack_408 = param_2[0xb];
    uStack_410 = param_2[10];
    uStack_458 = param_2[1];
    uStack_460 = *param_2;
    uStack_448 = param_2[3];
    uStack_450 = param_2[2];
    iVar2 = (int)&uStack_460;
    func_0x000103f6960c();
    if (iVar2 == 2) {
      puVar4 = &uStack_460;
      func_0x000103f69614();
      dVar9 = (double)puVar4[2];
      uVar6 = puVar4[3];
      if ((uVar5 == *puVar4) && (uVar1 == puVar4[1])) {
        if (dVar8 != dVar9) goto LAB_103f68be4;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,uVar1,*puVar4,puVar4[1],0);
        uVar3 = 0;
        if (((uVar5 & 1) == 0) || (dVar8 != dVar9)) goto LAB_103f68be8;
      }
      uVar3 = (uint)((int)uVar7 == (int)uVar6);
      goto LAB_103f68be8;
    }
  }
LAB_103f68be4:
  uVar3 = 0;
LAB_103f68be8:
  return uVar3 & 1;
}



/* Entry: 103f68cd0; end: 103f68cfb;  */

long FUN_103f68cd0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f68cfc; end: 103f68e2f;  */

undefined8
FUN_103f68cfc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,long param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,ulong param_19,undefined8 param_20,
             undefined4 param_21)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((param_21._1_1_ != '\x02') && (param_21._1_1_ != '\x01')) {
    if (param_21._1_1_ != '\0') {
      return param_1;
    }
    _swift_bridgeObjectRetain(param_2);
    if (param_14 == 1) {
      return param_4;
    }
    FUN_103f68ebc(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,unaff_x26,
                  unaff_x25,unaff_x24,unaff_x23,unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,
                  unaff_x30);
    FUN_103f68f20(param_11);
    _objc_retain(param_14);
    if ((param_19 >> 1 == 0xffffffff) && ((byte)param_21 < 2)) {
      return param_17;
    }
    param_2 = param_18;
    param_3 = param_19;
    param_4 = param_20;
    if ((char)(byte)param_21 < '\0') {
      return param_17;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2,param_2,param_3,param_4);
  return param_2;
}



/* Entry: 103f68e30; end: 103f68ebb;  */

undefined8 FUN_103f68e30(undefined8 param_1)

{
  undefined8 in_x7;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  byte in_stack_00000038;
  
  if (in_stack_00000008 == 1) {
    return param_1;
  }
  FUN_103f68ebc();
  FUN_103f68f20(in_x7);
  _objc_retain(in_stack_00000008);
  if ((in_stack_00000028 >> 1 == 0xffffffff) && (in_stack_00000038 < 2)) {
    return in_stack_00000018;
  }
  if (-1 < (char)in_stack_00000038) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)
              (in_stack_00000020,in_stack_00000020,in_stack_00000028,in_stack_00000030);
    return in_stack_00000020;
  }
  return in_stack_00000018;
}



/* Entry: 103f68ebc; end: 103f68ecf;  */

void FUN_103f68ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == -1) {
    return;
  }
  if (param_7 != '\x03') {
    if (param_7 != '\x02') {
      return;
    }
    _swift_bridgeObjectRetain(param_6);
    _objc_retain(param_1);
    param_2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 103f68ed0; end: 103f68f1f;  */

void FUN_103f68ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 != '\x03') {
    if (param_7 != '\x02') {
      return;
    }
    _swift_bridgeObjectRetain(param_6);
    _objc_retain(param_1);
    param_2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 103f68f20; end: 103f68f5f;  */

void FUN_103f68f20(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f68f60; end: 103f68faf;  */

void FUN_103f68f60(undefined8 *param_1)

{
  FUN_103f68fb0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],
                *(undefined2 *)(param_1 + 0x12));
  return;
}



/* Entry: 103f68fb0; end: 103f690e3;  */

undefined8
FUN_103f68fb0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,long param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,ulong param_19,undefined8 param_20,
             undefined4 param_21)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((param_21._1_1_ != '\x02') && (param_21._1_1_ != '\x01')) {
    if (param_21._1_1_ != '\0') {
      return param_1;
    }
    _swift_bridgeObjectRelease(param_2);
    if (param_14 == 1) {
      return param_4;
    }
    FUN_103f69170(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,unaff_x26,
                  unaff_x25,unaff_x24,unaff_x23,unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,
                  unaff_x30);
    FUN_103f691d0(param_11);
    _objc_release(param_14);
    if ((param_19 >> 1 == 0xffffffff) && ((byte)param_21 < 2)) {
      return param_17;
    }
    param_2 = param_18;
    param_3 = param_19;
    param_4 = param_20;
    if ((char)(byte)param_21 < '\0') {
      return param_17;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2,param_2,param_3,param_4);
  return param_2;
}



/* Entry: 103f690e4; end: 103f6916f;  */

undefined8 FUN_103f690e4(undefined8 param_1)

{
  undefined8 in_x7;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  byte in_stack_00000038;
  
  if (in_stack_00000008 == 1) {
    return param_1;
  }
  FUN_103f69170();
  FUN_103f691d0(in_x7);
  _objc_release(in_stack_00000008);
  if ((in_stack_00000028 >> 1 == 0xffffffff) && (in_stack_00000038 < 2)) {
    return in_stack_00000018;
  }
  if (-1 < (char)in_stack_00000038) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
              (in_stack_00000020,in_stack_00000020,in_stack_00000028,in_stack_00000030);
    return in_stack_00000020;
  }
  return in_stack_00000018;
}



/* Entry: 103f69170; end: 103f69183;  */

void FUN_103f69170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == -1) {
    return;
  }
  if (param_7 != '\x03') {
    if (param_7 != '\x02') {
      return;
    }
    _objc_release();
    _swift_bridgeObjectRelease(param_4);
    param_2 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f69184; end: 103f691cf;  */

void FUN_103f69184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 != '\x03') {
    if (param_7 != '\x02') {
      return;
    }
    _objc_release();
    _swift_bridgeObjectRelease(param_4);
    param_2 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f691d0; end: 103f6920f;  */

void FUN_103f691d0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103f69210; end: 103f6946b;  */

undefined8 * FUN_103f69210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  
  uVar1 = *param_2;
  uVar10 = param_2[1];
  uVar2 = param_2[2];
  uVar11 = param_2[3];
  uVar3 = param_2[4];
  uVar12 = param_2[5];
  uVar4 = param_2[6];
  uVar13 = param_2[7];
  uVar5 = param_2[8];
  uVar14 = param_2[9];
  uVar6 = param_2[10];
  uVar15 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar16 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar17 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar18 = param_2[0x11];
  uVar19 = *(undefined1 *)(param_2 + 0x12);
  uVar20 = *(undefined1 *)((long)param_2 + 0x91);
  FUN_103f68cfc(uVar1,uVar10,uVar2,uVar11,uVar3,uVar12,uVar4,uVar13,uVar5,uVar14,uVar6,uVar15,uVar7,
                uVar16,uVar8,uVar17,uVar9,uVar18,uVar19);
  *param_1 = uVar1;
  param_1[1] = uVar10;
  param_1[2] = uVar2;
  param_1[3] = uVar11;
  param_1[4] = uVar3;
  param_1[5] = uVar12;
  param_1[6] = uVar4;
  param_1[7] = uVar13;
  param_1[8] = uVar5;
  param_1[9] = uVar14;
  param_1[10] = uVar6;
  param_1[0xb] = uVar15;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar16;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar17;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar18;
  *(undefined1 *)(param_1 + 0x12) = uVar19;
  *(undefined1 *)((long)param_1 + 0x91) = uVar20;
  return param_1;
}



/* Entry: 103f6946c; end: 103f6949f;  */

void FUN_103f6946c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Entry: 103f694a0; end: 103f69533;  */

undefined8 * FUN_103f694a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar9 = *(undefined2 *)(param_2 + 0x12);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar20 = param_1[0xf];
  uVar19 = param_1[0xe];
  uVar4 = param_1[0x10];
  uVar8 = param_1[0x11];
  uVar10 = *(undefined2 *)(param_1 + 0x12);
  uVar21 = *param_2;
  uVar23 = param_2[3];
  uVar22 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar21;
  param_1[3] = uVar23;
  param_1[2] = uVar22;
  uVar21 = param_2[4];
  uVar23 = param_2[7];
  uVar22 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar21;
  param_1[7] = uVar23;
  param_1[6] = uVar22;
  uVar21 = param_2[8];
  uVar23 = param_2[0xb];
  uVar22 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar21;
  param_1[0xb] = uVar23;
  param_1[10] = uVar22;
  uVar21 = param_2[0xc];
  uVar23 = param_2[0xf];
  uVar22 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar21;
  param_1[0xf] = uVar23;
  param_1[0xe] = uVar22;
  uVar21 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar21;
  *(undefined2 *)(param_1 + 0x12) = uVar9;
  FUN_103f68fb0(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17
                ,uVar18,uVar19,uVar20,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 103f69534; end: 103f69643;  */

int FUN_103f69534(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x92) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)((long)param_1 + 0x91) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x91) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103f69644; end: 103f6977f;  */

undefined8 FUN_103f69644(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113035df0;
  func_0x0001000285a8(0x113035df0,&UNK_10dcb0310);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103f69780; end: 103f697b7;  */

void FUN_103f69780(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103f697b8; end: 103f697eb;  */

undefined8 FUN_103f697b8(undefined8 param_1)

{
  FUN_103f68f60();
  return param_1;
}



/* Entry: 103f697ec; end: 103f69837; -[SCLensCarouselPerformanceOperationEvent description] */

void FUN_103f697ec(undefined8 param_1)

{
  undefined1 auStack_b8 [152];
  
  _objc_retain();
  FUN_103f6a1a8(auStack_b8);
  _objc_release(param_1);
  FUN_103f697b8(auStack_b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f69838; end: 103f6987f; -[SCLensCarouselPerformanceOperationEvent init] */

void FUN_103f69838(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselPerformanceLoggerServices/LensCarouselPerformanceOperationEventWrapper.swift"
             ,0x5a,2,0x50,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f69880);
  (*pcVar1)();
}



/* Entry: 103f69880; end: 103f698b3; -[SCLensCarouselPerformanceOperationEvent hash] */

undefined8 FUN_103f69880(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f698b4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f698b4; end: 103f69e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f698b4(void)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113035e00));
  if (((undefined8 *)(unaff_x20 + _DAT_113035e08))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113035e08);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  bVar1 = *(byte *)(unaff_x20 + _DAT_113035e10);
  if (bVar1 == 2) {
    uVar3 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = (ulong)(bVar1 & 1);
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_113035e18) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104503b04();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113035e20))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113035e20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113035e28))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113035e28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if ((char)((ulong *)(unaff_x20 + _DAT_113035e30))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_113035e30);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar3);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113035e38) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113035e38);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f69e14; end: 103f69e93; -[SCLensCarouselPerformanceOperationEvent isEqual:] */

uint FUN_103f69e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000103f69ad0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103f69e94; end: 103f69e97; -[SCLensCarouselPerformanceOperationEvent copyWithZone:] */

void FUN_103f69e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f69e98; end: 103f69f0f; +[SCLensCarouselPerformanceOperationEvent activationRequestedWithUuid:willPresentCarousel:activationConfiguration:] */

void FUN_103f69e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_5;
  _objc_retain(param_5);
  FUN_103f6a460(param_3,param_2,param_4,param_5);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


