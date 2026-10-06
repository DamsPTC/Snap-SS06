/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102293484; end: 102293523;  */

void FUN_102293484(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102293524; end: 102293543;  */

void FUN_102293524(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102293544; end: 1022935a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102293544(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e79930);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1022935a8; end: 1022935af;  */

void FUN_1022935a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022935b0; end: 10229364f;  */

void FUN_1022935b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102293650; end: 10229366f;  */

void FUN_102293650(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102293670; end: 1022936f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102293670(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e79830) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e79838);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022936f8);
  (*pcVar2)();
}



/* Entry: 1022936f8; end: 1022937df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022936f8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e79830);
  *(undefined **)(unaff_x20 + _DAT_112e79830) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e79838);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e79838))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104edca8;
  func_0x000107c613fc(&UNK_1104edca8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1022937e4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1022937e0; end: 1022937eb;  */

void FUN_1022937e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022937ec; end: 10229384b; -[_TtC24MemoriesScopeGraphBridge39SCMemoriesScopedServicesSaberEntryPoint init] */

void FUN_1022937ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesScopeGraphBridge.SCMemoriesScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102293818);
  (*pcVar1)();
}



/* Entry: 10229384c; end: 102293883; -[_TtC24MemoriesScopeGraphBridge39SCMemoriesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229384c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e79838));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e79830));
  return;
}



/* Entry: 102293884; end: 102293887;  */

void FUN_102293884(void)

{
  return;
}



/* Entry: 102293888; end: 1022938a7;  */

void FUN_102293888(void)

{
  FUN_1022936f8();
  return;
}



/* Entry: 1022938a8; end: 1022938c7;  */

void FUN_1022938a8(void)

{
  func_0x000107c61168(&PTR_PTR_112830e88);
  return;
}



/* Entry: 1022938c8; end: 102293997;  */

undefined8 FUN_1022938c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e79868,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102293998();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102293998; end: 1022939b7;  */

void FUN_102293998(void)

{
  func_0x000107c61168(&PTR_PTR_112830f50);
  return;
}



/* Entry: 1022939b8; end: 10229415f;  */

void FUN_1022939b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e79870,&UNK_10da832e8);
  puVar1 = &UNK_1104edcf0;
  func_0x000107c613fc(&UNK_1104edcf0,0x148,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
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
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x0001000823a8(FUN_102294160,puVar1);
  return;
}



/* Entry: 102294160; end: 1022941db;  */

void FUN_102294160(void)

{
  long unaff_x20;
  
  func_0x000102293cd0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1022941dc; end: 102294533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022941dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e79878) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e79880) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e79888) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e79890) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e79898) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e798a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e798a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e798b0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e798b8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e798c0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e798c8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e798d0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e798d8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e798e0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e798e8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112e798f0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112e798f8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112e79900) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112e79908) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112e79910) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112e79918) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112e79920) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112e79928) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112e79930) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112e79938) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112e79940) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112e79948) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112e79950) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_112e79958) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_112e79960) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_112e79968) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_112e79970) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_112e79978) = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_112e79980) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_112e79988) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_112e79990) = param_36;
  *(undefined8 *)(unaff_x20 + _DAT_112e79998) = param_37;
  *(undefined8 *)(unaff_x20 + _DAT_112e799a0) = param_38;
  *(undefined8 *)(unaff_x20 + _DAT_112e799a8) = param_39;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102294534; end: 102294593; -[_TtC24MemoriesScopeGraphBridge32MemoriesScopeGraphBridgeServices init] */

void FUN_102294534(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesScopeGraphBridge.MemoriesScopeGraphBridgeServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102294560);
  (*pcVar1)();
}



/* Entry: 102294594; end: 10229485b; -[_TtC24MemoriesScopeGraphBridge32MemoriesScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022945b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022945d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022945f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022946b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022946d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022946f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102294790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022947b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022947d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022947f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022947d4) */
/* WARNING: Removing unreachable block (ram,0x0001022947b4) */
/* WARNING: Removing unreachable block (ram,0x000102294794) */
/* WARNING: Removing unreachable block (ram,0x000102294774) */
/* WARNING: Removing unreachable block (ram,0x000102294754) */
/* WARNING: Removing unreachable block (ram,0x000102294734) */
/* WARNING: Removing unreachable block (ram,0x000102294714) */
/* WARNING: Removing unreachable block (ram,0x0001022946f4) */
/* WARNING: Removing unreachable block (ram,0x0001022946d4) */
/* WARNING: Removing unreachable block (ram,0x0001022946b4) */
/* WARNING: Removing unreachable block (ram,0x000102294694) */
/* WARNING: Removing unreachable block (ram,0x000102294674) */
/* WARNING: Removing unreachable block (ram,0x000102294654) */
/* WARNING: Removing unreachable block (ram,0x000102294634) */
/* WARNING: Removing unreachable block (ram,0x000102294614) */
/* WARNING: Removing unreachable block (ram,0x0001022945f4) */
/* WARNING: Removing unreachable block (ram,0x0001022945d4) */
/* WARNING: Removing unreachable block (ram,0x0001022945b4) */
/* WARNING: Removing unreachable block (ram,0x0001022947f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102294594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e79890));
  return;
}



/* Entry: 10229485c; end: 102294877;  */

void FUN_10229485c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295738,param_1);
  return;
}



/* Entry: 102294878; end: 1022948b7;  */

void FUN_102294878(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102295794,0);
  return;
}



/* Entry: 1022948b8; end: 1022948d3;  */

void FUN_1022948b8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295734,param_1);
  return;
}



/* Entry: 1022948d4; end: 102294913;  */

void FUN_1022948d4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10229579c,0);
  return;
}



/* Entry: 102294914; end: 10229492f;  */

void FUN_102294914(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295774,param_1);
  return;
}



/* Entry: 102294930; end: 10229496f;  */

void FUN_102294930(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957a0,0);
  return;
}



/* Entry: 102294970; end: 10229498b;  */

void FUN_102294970(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229573c,param_1);
  return;
}



/* Entry: 10229498c; end: 1022949cb;  */

void FUN_10229498c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957a4,0);
  return;
}



/* Entry: 1022949cc; end: 1022949e7;  */

void FUN_1022949cc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295740,param_1);
  return;
}



/* Entry: 1022949e8; end: 102294a27;  */

void FUN_1022949e8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957a8,0);
  return;
}



/* Entry: 102294a28; end: 102294a43;  */

void FUN_102294a28(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295744,param_1);
  return;
}



/* Entry: 102294a44; end: 102294a83;  */

void FUN_102294a44(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957ac,0);
  return;
}



/* Entry: 102294a84; end: 102294a9f;  */

void FUN_102294a84(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295748,param_1);
  return;
}



/* Entry: 102294aa0; end: 102294adf;  */

void FUN_102294aa0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957b0,0);
  return;
}



/* Entry: 102294ae0; end: 102294afb;  */

void FUN_102294ae0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229574c,param_1);
  return;
}



/* Entry: 102294afc; end: 102294b3b;  */

void FUN_102294afc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957b4,0);
  return;
}



/* Entry: 102294b3c; end: 102294b57;  */

void FUN_102294b3c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295750,param_1);
  return;
}



/* Entry: 102294b58; end: 102294b97;  */

void FUN_102294b58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957b8,0);
  return;
}



/* Entry: 102294b98; end: 102294bb3;  */

void FUN_102294b98(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295754,param_1);
  return;
}



/* Entry: 102294bb4; end: 102294bf3;  */

void FUN_102294bb4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957bc,0);
  return;
}



/* Entry: 102294bf4; end: 102294c0f;  */

void FUN_102294bf4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295758,param_1);
  return;
}



/* Entry: 102294c10; end: 102294c4f;  */

void FUN_102294c10(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957c0,0);
  return;
}



/* Entry: 102294c50; end: 102294c6b;  */

void FUN_102294c50(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229575c,param_1);
  return;
}



/* Entry: 102294c6c; end: 102294cab;  */

void FUN_102294c6c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957c4,0);
  return;
}



/* Entry: 102294cac; end: 102294cc7;  */

void FUN_102294cac(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295760,param_1);
  return;
}



/* Entry: 102294cc8; end: 102294d07;  */

void FUN_102294cc8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957c8,0);
  return;
}



/* Entry: 102294d08; end: 102294d23;  */

void FUN_102294d08(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295764,param_1);
  return;
}



/* Entry: 102294d24; end: 102294d63;  */

void FUN_102294d24(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957cc,0);
  return;
}



/* Entry: 102294d64; end: 102294d7f;  */

void FUN_102294d64(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295768,param_1);
  return;
}



/* Entry: 102294d80; end: 102294dbf;  */

void FUN_102294d80(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957d0,0);
  return;
}



/* Entry: 102294dc0; end: 102294ddb;  */

void FUN_102294dc0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229576c,param_1);
  return;
}



/* Entry: 102294ddc; end: 102294e1b;  */

void FUN_102294ddc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957d4,0);
  return;
}



/* Entry: 102294e1c; end: 102294e37;  */

void FUN_102294e1c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295770,param_1);
  return;
}



/* Entry: 102294e38; end: 102294e77;  */

void FUN_102294e38(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957d8,0);
  return;
}



/* Entry: 102294e78; end: 102294e93;  */

void FUN_102294e78(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295784,param_1);
  return;
}



/* Entry: 102294e94; end: 102294ed3;  */

void FUN_102294e94(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957dc,0);
  return;
}



/* Entry: 102294ed4; end: 102294eef;  */

void FUN_102294ed4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295778,param_1);
  return;
}



/* Entry: 102294ef0; end: 102294f2f;  */

void FUN_102294ef0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957e0,0);
  return;
}



/* Entry: 102294f30; end: 102294f4b;  */

void FUN_102294f30(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229577c,param_1);
  return;
}



/* Entry: 102294f4c; end: 102294f8b;  */

void FUN_102294f4c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957e4,0);
  return;
}



/* Entry: 102294f8c; end: 102294fa7;  */

void FUN_102294f8c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295780,param_1);
  return;
}



/* Entry: 102294fa8; end: 102294fe7;  */

void FUN_102294fa8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022957e8,0);
  return;
}



/* Entry: 102294fe8; end: 102295003;  */

void FUN_102294fe8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102295004,param_1);
  return;
}



/* Entry: 102295004; end: 102295077;  */

void FUN_102295004(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102295078; end: 102295093;  */

void FUN_102295078(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295788,param_1);
  return;
}



/* Entry: 102295094; end: 1022950d3;  */

void FUN_102295094(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(0x1022957ec,0);
  return;
}



/* Entry: 1022950d4; end: 1022950ef;  */

void FUN_1022950d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229578c,param_1);
  return;
}



/* Entry: 1022950f0; end: 10229516b;  */

void FUN_1022950f0(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(0x1022957f4,0);
  return;
}



/* Entry: 10229516c; end: 102295187;  */

void FUN_10229516c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102295790,param_1);
  return;
}



/* Entry: 102295188; end: 1022951d7;  */

void FUN_102295188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1022951d8; end: 1022951df;  */

undefined8 FUN_1022951d8(void)

{
  return 0x1b;
}



/* Entry: 1022951e0; end: 102295357;  */

void FUN_1022951e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104edd18;
  func_0x000107c613fc(&UNK_1104edd18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102295358,puVar1);
  return;
}



/* Entry: 102295358; end: 10229535f;  */

void FUN_102295358(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e79868,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e79868,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ee3f0;
  func_0x000107c613fc(&UNK_1104ee3f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10229572c;
  func_0x00010058fa64(0x10229572c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102295360; end: 1022953bb;  */

void FUN_102295360(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e79868,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e79868,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1022953bc; end: 1022957f7;  */

undefined ** FUN_1022953bc(void)

{
  return &PTR_DAT_113074e20;
}



/* Entry: 1022957f8; end: 10229583f; -[SCMemoriesScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022957f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a00;
  func_0x000107c61428(param_1 + _DAT_112e79a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102295840; end: 102295897; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a00;
  func_0x000107c61428(param_1 + _DAT_112e79a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102295898; end: 1022958df; -[SCMemoriesScopeGraphBridgeSaberEntryPoint faceTaggingPermissionTrayScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295898(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a08;
  func_0x000107c61428(param_1 + _DAT_112e79a08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022958e0; end: 1022958eb; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setFaceTaggingPermissionTrayScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022958e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a08;
  func_0x000107c61428(param_1 + _DAT_112e79a08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022958ec; end: 102295933; -[SCMemoriesScopeGraphBridgeSaberEntryPoint memoriesQuickCutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022958ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a10;
  func_0x000107c61428(param_1 + _DAT_112e79a10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295934; end: 10229593f; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setMemoriesQuickCutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a10;
  func_0x000107c61428(param_1 + _DAT_112e79a10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295940; end: 102295987; -[SCMemoriesScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a18;
  func_0x000107c61428(param_1 + _DAT_112e79a18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295988; end: 102295993; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295988(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a18;
  func_0x000107c61428(param_1 + _DAT_112e79a18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295994; end: 1022959db; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCCommerceComposerScreenshopScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295994(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a20;
  func_0x000107c61428(param_1 + _DAT_112e79a20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022959dc; end: 1022959e7; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCCommerceComposerScreenshopScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022959dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a20;
  func_0x000107c61428(param_1 + _DAT_112e79a20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022959e8; end: 102295a2f; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCGenAIDreamsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022959e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a28;
  func_0x000107c61428(param_1 + _DAT_112e79a28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295a30; end: 102295a3b; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCGenAIDreamsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a28;
  func_0x000107c61428(param_1 + _DAT_112e79a28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295a3c; end: 102295a83; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCGenerativeAIOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295a3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a30;
  func_0x000107c61428(param_1 + _DAT_112e79a30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295a84; end: 102295a8f; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCGenerativeAIOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a30;
  func_0x000107c61428(param_1 + _DAT_112e79a30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295a90; end: 102295ad7; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCMemoriesActionMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295a90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a38;
  func_0x000107c61428(param_1 + _DAT_112e79a38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295ad8; end: 102295ae3; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCMemoriesActionMenuScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a38;
  func_0x000107c61428(param_1 + _DAT_112e79a38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295ae4; end: 102295b2b; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCMemoriesCameraRollAlbumPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295ae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a40;
  func_0x000107c61428(param_1 + _DAT_112e79a40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295b2c; end: 102295b37; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCMemoriesCameraRollAlbumPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a40;
  func_0x000107c61428(param_1 + _DAT_112e79a40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295b38; end: 102295b7f; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCMemoriesConsolidatedAutoSavedStoriesScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295b38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a48;
  func_0x000107c61428(param_1 + _DAT_112e79a48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295b80; end: 102295b8b; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCMemoriesConsolidatedAutoSavedStoriesScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a48;
  func_0x000107c61428(param_1 + _DAT_112e79a48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295b8c; end: 102295bd3; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCMemoriesExternalShareAdaptorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295b8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a50;
  func_0x000107c61428(param_1 + _DAT_112e79a50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295bd4; end: 102295bdf; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCMemoriesExternalShareAdaptorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a50;
  func_0x000107c61428(param_1 + _DAT_112e79a50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102295be0; end: 102295c27; -[SCMemoriesScopeGraphBridgeSaberEntryPoint sCMemoriesFavoriteSnapsStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79a58;
  func_0x000107c61428(param_1 + _DAT_112e79a58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102295c28; end: 102295c33; -[SCMemoriesScopeGraphBridgeSaberEntryPoint setSCMemoriesFavoriteSnapsStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102295c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79a58;
  func_0x000107c61428(param_1 + _DAT_112e79a58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


