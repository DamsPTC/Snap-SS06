/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027e1a80; end: 1027e1a83;  */

void FUN_1027e1a80(void)

{
  return;
}



/* Entry: 1027e1a84; end: 1027e1aa3;  */

void FUN_1027e1a84(void)

{
  FUN_1027e18f4();
  return;
}



/* Entry: 1027e1aa4; end: 1027e1ac3;  */

void FUN_1027e1aa4(void)

{
  func_0x000107c61168(&PTR_PTR_1128637f0);
  return;
}



/* Entry: 1027e1ac4; end: 1027e1b93;  */

undefined8 FUN_1027e1ac4(void)

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
  
  func_0x000107c61428(0x112ec1910,&uStack_40,0x20,0);
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
    FUN_1027e1b94();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1027e1b94; end: 1027e1bb3;  */

void FUN_1027e1b94(void)

{
  func_0x000107c61168(&PTR_PTR_1128638b8);
  return;
}



/* Entry: 1027e1bb4; end: 1027e23bb;  */

void FUN_1027e1bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec1918,&UNK_10dadf508);
  puVar1 = &UNK_11054faa8;
  func_0x000107c613fc(&UNK_11054faa8,0x158,7);
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
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
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
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x0001000823a8(FUN_1027e23bc,puVar1);
  return;
}



/* Entry: 1027e23bc; end: 1027e2437;  */

void FUN_1027e23bc(void)

{
  long unaff_x20;
  
  func_0x0001027e1ef0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150));
  return;
}



/* Entry: 1027e2438; end: 1027e27bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e2438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec1920) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1928) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1930) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1938) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1940) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1948) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1950) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1958) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1960) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1968) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1970) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1978) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1980) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1988) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1990) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1998) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19a0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19a8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19b0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19b8) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19c0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19c8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19d0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19d8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19e0) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19e8) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19f0) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112ec19f8) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a00) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a08) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a10) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a18) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a20) = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a28) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a30) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a38) = param_36;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a40) = param_37;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a48) = param_38;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a50) = param_39;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a58) = param_40;
  *(undefined8 *)(unaff_x20 + _DAT_112ec1a60) = param_41;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027e27bc; end: 1027e281b; -[_TtC20ChatScopeGraphBridge28ChatScopeGraphBridgeServices init] */

void FUN_1027e27bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatScopeGraphBridge.ChatScopeGraphBridgeServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027e27e8);
  (*pcVar1)();
}



/* Entry: 1027e281c; end: 1027e2b03; -[_TtC20ChatScopeGraphBridge28ChatScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027e2838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e28b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e28d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e28f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e29b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e29d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e29f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027e2a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027e2a7c) */
/* WARNING: Removing unreachable block (ram,0x0001027e2a5c) */
/* WARNING: Removing unreachable block (ram,0x0001027e2a3c) */
/* WARNING: Removing unreachable block (ram,0x0001027e2a1c) */
/* WARNING: Removing unreachable block (ram,0x0001027e29fc) */
/* WARNING: Removing unreachable block (ram,0x0001027e29dc) */
/* WARNING: Removing unreachable block (ram,0x0001027e29bc) */
/* WARNING: Removing unreachable block (ram,0x0001027e299c) */
/* WARNING: Removing unreachable block (ram,0x0001027e297c) */
/* WARNING: Removing unreachable block (ram,0x0001027e295c) */
/* WARNING: Removing unreachable block (ram,0x0001027e293c) */
/* WARNING: Removing unreachable block (ram,0x0001027e291c) */
/* WARNING: Removing unreachable block (ram,0x0001027e28fc) */
/* WARNING: Removing unreachable block (ram,0x0001027e28dc) */
/* WARNING: Removing unreachable block (ram,0x0001027e28bc) */
/* WARNING: Removing unreachable block (ram,0x0001027e289c) */
/* WARNING: Removing unreachable block (ram,0x0001027e287c) */
/* WARNING: Removing unreachable block (ram,0x0001027e285c) */
/* WARNING: Removing unreachable block (ram,0x0001027e283c) */
/* WARNING: Removing unreachable block (ram,0x0001027e2a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e281c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec1a00));
  return;
}



/* Entry: 1027e2b04; end: 1027e2b0f;  */

void FUN_1027e2b04(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a88,param_1);
  return;
}



/* Entry: 1027e2b10; end: 1027e2b4f;  */

void FUN_1027e2b10(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3af4,0);
  return;
}



/* Entry: 1027e2b50; end: 1027e2b5b;  */

void FUN_1027e2b50(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a80,param_1);
  return;
}



/* Entry: 1027e2b5c; end: 1027e2b9b;  */

void FUN_1027e2b5c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3afc,0);
  return;
}



/* Entry: 1027e2b9c; end: 1027e2ba7;  */

void FUN_1027e2b9c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a84,param_1);
  return;
}



/* Entry: 1027e2ba8; end: 1027e2be7;  */

void FUN_1027e2ba8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b00,0);
  return;
}



/* Entry: 1027e2be8; end: 1027e2bf3;  */

void FUN_1027e2be8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027e2bf4,param_1);
  return;
}



/* Entry: 1027e2bf4; end: 1027e2c67;  */

void FUN_1027e2bf4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1027e2c68; end: 1027e2c73;  */

void FUN_1027e2c68(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a8c,param_1);
  return;
}



/* Entry: 1027e2c74; end: 1027e2cb3;  */

void FUN_1027e2c74(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b08,0);
  return;
}



/* Entry: 1027e2cb4; end: 1027e2cbf;  */

void FUN_1027e2cb4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a90,param_1);
  return;
}



/* Entry: 1027e2cc0; end: 1027e2cff;  */

void FUN_1027e2cc0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b0c,0);
  return;
}



/* Entry: 1027e2d00; end: 1027e2d0b;  */

void FUN_1027e2d00(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a94,param_1);
  return;
}



/* Entry: 1027e2d0c; end: 1027e2d4b;  */

void FUN_1027e2d0c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b10,0);
  return;
}



/* Entry: 1027e2d4c; end: 1027e2d57;  */

void FUN_1027e2d4c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a98,param_1);
  return;
}



/* Entry: 1027e2d58; end: 1027e2d97;  */

void FUN_1027e2d58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b14,0);
  return;
}



/* Entry: 1027e2d98; end: 1027e2da3;  */

void FUN_1027e2d98(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3a9c,param_1);
  return;
}



/* Entry: 1027e2da4; end: 1027e2de3;  */

void FUN_1027e2da4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b18,0);
  return;
}



/* Entry: 1027e2de4; end: 1027e2def;  */

void FUN_1027e2de4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3aa0,param_1);
  return;
}



/* Entry: 1027e2df0; end: 1027e2e2f;  */

void FUN_1027e2df0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b1c,0);
  return;
}



/* Entry: 1027e2e30; end: 1027e2e3b;  */

void FUN_1027e2e30(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3aa4,param_1);
  return;
}



/* Entry: 1027e2e3c; end: 1027e2e7b;  */

void FUN_1027e2e3c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b20,0);
  return;
}



/* Entry: 1027e2e7c; end: 1027e2e87;  */

void FUN_1027e2e7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3aa8,param_1);
  return;
}



/* Entry: 1027e2e88; end: 1027e2ec7;  */

void FUN_1027e2e88(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b24,0);
  return;
}



/* Entry: 1027e2ec8; end: 1027e2ed3;  */

void FUN_1027e2ec8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3aac,param_1);
  return;
}



/* Entry: 1027e2ed4; end: 1027e2f13;  */

void FUN_1027e2ed4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b28,0);
  return;
}



/* Entry: 1027e2f14; end: 1027e2f1f;  */

void FUN_1027e2f14(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ab0,param_1);
  return;
}



/* Entry: 1027e2f20; end: 1027e2f5f;  */

void FUN_1027e2f20(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b2c,0);
  return;
}



/* Entry: 1027e2f60; end: 1027e2f6b;  */

void FUN_1027e2f60(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ab4,param_1);
  return;
}



/* Entry: 1027e2f6c; end: 1027e2fab;  */

void FUN_1027e2f6c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b30,0);
  return;
}



/* Entry: 1027e2fac; end: 1027e2fb7;  */

void FUN_1027e2fac(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ab8,param_1);
  return;
}



/* Entry: 1027e2fb8; end: 1027e2ff7;  */

void FUN_1027e2fb8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b34,0);
  return;
}



/* Entry: 1027e2ff8; end: 1027e3003;  */

void FUN_1027e2ff8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3abc,param_1);
  return;
}



/* Entry: 1027e3004; end: 1027e3043;  */

void FUN_1027e3004(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b38,0);
  return;
}



/* Entry: 1027e3044; end: 1027e304f;  */

void FUN_1027e3044(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ac0,param_1);
  return;
}



/* Entry: 1027e3050; end: 1027e308f;  */

void FUN_1027e3050(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b3c,0);
  return;
}



/* Entry: 1027e3090; end: 1027e309b;  */

void FUN_1027e3090(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ac4,param_1);
  return;
}



/* Entry: 1027e309c; end: 1027e30db;  */

void FUN_1027e309c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b40,0);
  return;
}



/* Entry: 1027e30dc; end: 1027e30e7;  */

void FUN_1027e30dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ac8,param_1);
  return;
}



/* Entry: 1027e30e8; end: 1027e3127;  */

void FUN_1027e30e8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b44,0);
  return;
}



/* Entry: 1027e3128; end: 1027e3133;  */

void FUN_1027e3128(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3acc,param_1);
  return;
}



/* Entry: 1027e3134; end: 1027e3173;  */

void FUN_1027e3134(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b48,0);
  return;
}



/* Entry: 1027e3174; end: 1027e317f;  */

void FUN_1027e3174(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ad0,param_1);
  return;
}



/* Entry: 1027e3180; end: 1027e31bf;  */

void FUN_1027e3180(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b4c,0);
  return;
}



/* Entry: 1027e31c0; end: 1027e31cb;  */

void FUN_1027e31c0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ad4,param_1);
  return;
}



/* Entry: 1027e31cc; end: 1027e320b;  */

void FUN_1027e31cc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b50,0);
  return;
}



/* Entry: 1027e320c; end: 1027e3217;  */

void FUN_1027e320c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ad8,param_1);
  return;
}



/* Entry: 1027e3218; end: 1027e3257;  */

void FUN_1027e3218(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b54,0);
  return;
}



/* Entry: 1027e3258; end: 1027e3263;  */

void FUN_1027e3258(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3adc,param_1);
  return;
}



/* Entry: 1027e3264; end: 1027e32a3;  */

void FUN_1027e3264(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b58,0);
  return;
}



/* Entry: 1027e32a4; end: 1027e32af;  */

void FUN_1027e32a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ae0,param_1);
  return;
}



/* Entry: 1027e32b0; end: 1027e32ef;  */

void FUN_1027e32b0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b5c,0);
  return;
}



/* Entry: 1027e32f0; end: 1027e32fb;  */

void FUN_1027e32f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ae4,param_1);
  return;
}



/* Entry: 1027e32fc; end: 1027e333b;  */

void FUN_1027e32fc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b60,0);
  return;
}



/* Entry: 1027e333c; end: 1027e3347;  */

void FUN_1027e333c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3ae8,param_1);
  return;
}



/* Entry: 1027e3348; end: 1027e3387;  */

void FUN_1027e3348(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b64,0);
  return;
}



/* Entry: 1027e3388; end: 1027e3393;  */

void FUN_1027e3388(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3aec,param_1);
  return;
}



/* Entry: 1027e3394; end: 1027e341f;  */

void FUN_1027e3394(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027e3b68,0);
  return;
}



/* Entry: 1027e3420; end: 1027e342b;  */

void FUN_1027e3420(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1027e3af0,param_1);
  return;
}



/* Entry: 1027e342c; end: 1027e3483;  */

void FUN_1027e342c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1027e3484; end: 1027e348b;  */

undefined8 FUN_1027e3484(void)

{
  return 0x1b;
}



/* Entry: 1027e348c; end: 1027e3603;  */

void FUN_1027e348c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054fad0;
  func_0x000107c613fc(&UNK_11054fad0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027e3604,puVar1);
  return;
}



/* Entry: 1027e3604; end: 1027e360b;  */

void FUN_1027e3604(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec1910,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec1910,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105502e8;
  func_0x000107c613fc(&UNK_1105502e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1027e3a78;
  func_0x00010058fa64(0x1027e3a78,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027e360c; end: 1027e3667;  */

void FUN_1027e360c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec1910,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec1910,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1027e3668; end: 1027e3b6b;  */

undefined ** FUN_1027e3668(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027e3b6c; end: 1027e3bb3; -[SCChatScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3b6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ab8;
  func_0x000107c61428(param_1 + _DAT_112ec1ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027e3bb4; end: 1027e3c0b; -[SCChatScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ab8;
  func_0x000107c61428(param_1 + _DAT_112ec1ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027e3c0c; end: 1027e3c53; -[SCChatScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3c0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ac0;
  func_0x000107c61428(param_1 + _DAT_112ec1ac0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3c54; end: 1027e3c5f; -[SCChatScopeGraphBridgeSaberEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ac0;
  func_0x000107c61428(param_1 + _DAT_112ec1ac0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3c60; end: 1027e3ca7; -[SCChatScopeGraphBridgeSaberEntryPoint chatActionMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3c60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ac8;
  func_0x000107c61428(param_1 + _DAT_112ec1ac8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3ca8; end: 1027e3cb3; -[SCChatScopeGraphBridgeSaberEntryPoint setChatActionMenuScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ac8;
  func_0x000107c61428(param_1 + _DAT_112ec1ac8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3cb4; end: 1027e3cfb; -[SCChatScopeGraphBridgeSaberEntryPoint chatAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ad0;
  func_0x000107c61428(param_1 + _DAT_112ec1ad0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3cfc; end: 1027e3d07; -[SCChatScopeGraphBridgeSaberEntryPoint setChatAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ad0;
  func_0x000107c61428(param_1 + _DAT_112ec1ad0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3d08; end: 1027e3d4f; -[SCChatScopeGraphBridgeSaberEntryPoint keepSnapsInChatUpsellScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3d08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ad8;
  func_0x000107c61428(param_1 + _DAT_112ec1ad8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3d50; end: 1027e3d5b; -[SCChatScopeGraphBridgeSaberEntryPoint setKeepSnapsInChatUpsellScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ad8;
  func_0x000107c61428(param_1 + _DAT_112ec1ad8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3d5c; end: 1027e3da3; -[SCChatScopeGraphBridgeSaberEntryPoint messageForwardScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ae0;
  func_0x000107c61428(param_1 + _DAT_112ec1ae0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3da4; end: 1027e3daf; -[SCChatScopeGraphBridgeSaberEntryPoint setMessageForwardScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ae0;
  func_0x000107c61428(param_1 + _DAT_112ec1ae0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3db0; end: 1027e3df7; -[SCChatScopeGraphBridgeSaberEntryPoint plusManagementScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3db0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1ae8;
  func_0x000107c61428(param_1 + _DAT_112ec1ae8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3df8; end: 1027e3e03; -[SCChatScopeGraphBridgeSaberEntryPoint setPlusManagementScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1ae8;
  func_0x000107c61428(param_1 + _DAT_112ec1ae8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3e04; end: 1027e3e4b; -[SCChatScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3e04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1af0;
  func_0x000107c61428(param_1 + _DAT_112ec1af0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3e4c; end: 1027e3e57; -[SCChatScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1af0;
  func_0x000107c61428(param_1 + _DAT_112ec1af0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3e58; end: 1027e3e9f; -[SCChatScopeGraphBridgeSaberEntryPoint sCBitmojiCreateFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3e58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1af8;
  func_0x000107c61428(param_1 + _DAT_112ec1af8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3ea0; end: 1027e3eab; -[SCChatScopeGraphBridgeSaberEntryPoint setSCBitmojiCreateFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1af8;
  func_0x000107c61428(param_1 + _DAT_112ec1af8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3eac; end: 1027e3ef3; -[SCChatScopeGraphBridgeSaberEntryPoint sCBitmojiFriendProfileSharingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3eac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1b00;
  func_0x000107c61428(param_1 + _DAT_112ec1b00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3ef4; end: 1027e3eff; -[SCChatScopeGraphBridgeSaberEntryPoint setSCBitmojiFriendProfileSharingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1b00;
  func_0x000107c61428(param_1 + _DAT_112ec1b00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3f00; end: 1027e3f47; -[SCChatScopeGraphBridgeSaberEntryPoint sCBlockedExceptionAlertScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3f00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1b08;
  func_0x000107c61428(param_1 + _DAT_112ec1b08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3f48; end: 1027e3f53; -[SCChatScopeGraphBridgeSaberEntryPoint setSCBlockedExceptionAlertScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1b08;
  func_0x000107c61428(param_1 + _DAT_112ec1b08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3f54; end: 1027e3f9b; -[SCChatScopeGraphBridgeSaberEntryPoint sCCancelMenuActionSheetScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3f54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1b10;
  func_0x000107c61428(param_1 + _DAT_112ec1b10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027e3f9c; end: 1027e3fa7; -[SCChatScopeGraphBridgeSaberEntryPoint setSCCancelMenuActionSheetScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec1b10;
  func_0x000107c61428(param_1 + _DAT_112ec1b10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027e3fa8; end: 1027e3fef; -[SCChatScopeGraphBridgeSaberEntryPoint sCChatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027e3fa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec1b18;
  func_0x000107c61428(param_1 + _DAT_112ec1b18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


