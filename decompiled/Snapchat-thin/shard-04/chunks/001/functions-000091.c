/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031069bc; end: 103106a5b;  */

void FUN_1031069bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106a5c; end: 103106a7b;  */

void FUN_103106a5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103106a7c; end: 103106adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103106a7c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40270);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103106ae0; end: 103106ae7;  */

void FUN_103106ae0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103106ae8; end: 103106b87;  */

void FUN_103106ae8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106b88; end: 103106ba7;  */

void FUN_103106b88(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103106ba8; end: 103106c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103106ba8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f40170) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f40178);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103106c30);
  (*pcVar2)();
}



/* Entry: 103106c30; end: 103106d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103106c30(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f40170);
  *(undefined **)(unaff_x20 + _DAT_112f40170) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f40178);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f40178))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11060f780;
  func_0x000107c613fc(&UNK_11060f780,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103106d1c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103106d18; end: 103106d23;  */

void FUN_103106d18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103106d24; end: 103106d83; -[_TtC32LensTalkCarouselScopeGraphBridge47SCLensTalkCarouselScopedServicesSaberEntryPoint init] */

void FUN_103106d24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.SCLensTalkCarouselScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103106d50);
  (*pcVar1)();
}



/* Entry: 103106d84; end: 103106dbb; -[_TtC32LensTalkCarouselScopeGraphBridge47SCLensTalkCarouselScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103106d84(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f40178));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f40170));
  return;
}



/* Entry: 103106dbc; end: 103106dbf;  */

void FUN_103106dbc(void)

{
  return;
}



/* Entry: 103106dc0; end: 103106ddf;  */

void FUN_103106dc0(void)

{
  FUN_103106c30();
  return;
}



/* Entry: 103106de0; end: 103106dff;  */

void FUN_103106de0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b80c8);
  return;
}



/* Entry: 103106e00; end: 103106ecf;  */

undefined8 FUN_103106e00(void)

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
  
  func_0x000107c61428(0x112f401a8,&uStack_40,0x20,0);
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
    FUN_103106ed0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103106ed0; end: 103106eef;  */

void FUN_103106ed0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b8190);
  return;
}



/* Entry: 103106ef0; end: 103107413;  */

void FUN_103106ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f401b0,&UNK_10db8dd78);
  puVar1 = &UNK_11060f7c8;
  func_0x000107c613fc(&UNK_11060f7c8,0xd8,7);
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
  func_0x000107c6157c(param_1);
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
  func_0x0001000823a8(FUN_103107414,puVar1);
  return;
}



/* Entry: 103107414; end: 103107467;  */

void FUN_103107414(void)

{
  long unaff_x20;
  
  func_0x000103107104(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 103107468; end: 1031076af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f401b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f401c0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f401c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f401d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f401d8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f401e0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f401e8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f401f0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f401f8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f40200) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f40208) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f40210) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f40218) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f40220) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112f40228) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112f40230) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112f40238) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112f40240) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112f40248) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112f40250) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112f40258) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112f40260) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112f40268) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112f40270) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112f40278) = param_25;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031076b0; end: 10310770f; -[_TtC32LensTalkCarouselScopeGraphBridge40LensTalkCarouselScopeGraphBridgeServices init] */

void FUN_1031076b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.LensTalkCarouselScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031076dc);
  (*pcVar1)();
}



/* Entry: 103107710; end: 1031078f7; -[_TtC32LensTalkCarouselScopeGraphBridge40LensTalkCarouselScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010310772c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310776c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310778c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031077ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031077cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031077ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310780c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310782c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310784c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310786c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010310788c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103107870) */
/* WARNING: Removing unreachable block (ram,0x000103107850) */
/* WARNING: Removing unreachable block (ram,0x000103107830) */
/* WARNING: Removing unreachable block (ram,0x000103107810) */
/* WARNING: Removing unreachable block (ram,0x0001031077f0) */
/* WARNING: Removing unreachable block (ram,0x0001031077d0) */
/* WARNING: Removing unreachable block (ram,0x0001031077b0) */
/* WARNING: Removing unreachable block (ram,0x000103107790) */
/* WARNING: Removing unreachable block (ram,0x000103107770) */
/* WARNING: Removing unreachable block (ram,0x000103107750) */
/* WARNING: Removing unreachable block (ram,0x000103107730) */
/* WARNING: Removing unreachable block (ram,0x000103107890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f401e0));
  return;
}



/* Entry: 1031078f8; end: 103107913;  */

void FUN_1031078f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103107d40,param_1);
  return;
}



/* Entry: 103107914; end: 103107953;  */

void FUN_103107914(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103107d44,0);
  return;
}



/* Entry: 103107954; end: 10310796f;  */

void FUN_103107954(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103107d3c,param_1);
  return;
}



/* Entry: 103107970; end: 1031079af;  */

void FUN_103107970(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_1031079b0,0);
  return;
}



/* Entry: 1031079b0; end: 1031079c3;  */

void FUN_1031079b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1031079c4; end: 1031079ff;  */

void FUN_1031079c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 103107a00; end: 103107a1b;  */

void FUN_103107a00(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103107a6c,param_1);
  return;
}



/* Entry: 103107a1c; end: 103107a6b;  */

void FUN_103107a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103107a6c; end: 103107a9f;  */

void FUN_103107a6c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103107aa0; end: 103107aa7;  */

undefined8 FUN_103107aa0(void)

{
  return 0x1b;
}



/* Entry: 103107aa8; end: 103107c1f;  */

void FUN_103107aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060f7f0;
  func_0x000107c613fc(&UNK_11060f7f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103107c20,puVar1);
  return;
}



/* Entry: 103107c20; end: 103107c27;  */

void FUN_103107c20(undefined8 *param_1)

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
  func_0x000107c61428(0x112f401a8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f401a8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11060f948;
  func_0x000107c613fc(&UNK_11060f948,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103107d34;
  func_0x00010058fa64(0x103107d34,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103107c28; end: 103107c83;  */

void FUN_103107c28(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f401a8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f401a8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103107c84; end: 103107d4b;  */

undefined ** FUN_103107c84(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 103107d4c; end: 103107d93; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107d4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f402d0;
  func_0x000107c61428(param_1 + _DAT_112f402d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103107d94; end: 103107deb; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f402d0;
  func_0x000107c61428(param_1 + _DAT_112f402d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103107dec; end: 103107e33; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107dec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f402d8;
  func_0x000107c61428(param_1 + _DAT_112f402d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103107e34; end: 103107e3f; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f402d8;
  func_0x000107c61428(param_1 + _DAT_112f402d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103107e40; end: 103107e87; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint sCLensCarouselScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107e40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f402e0;
  func_0x000107c61428(param_1 + _DAT_112f402e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103107e88; end: 103107e93; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint setSCLensCarouselScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f402e0;
  func_0x000107c61428(param_1 + _DAT_112f402e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103107e94; end: 103107edb; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint sCARBarPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107e94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f402e8;
  func_0x000107c61428(param_1 + _DAT_112f402e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103107edc; end: 103107ee7; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint setSCARBarPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f402e8;
  func_0x000107c61428(param_1 + _DAT_112f402e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103107ee8; end: 103107f2f; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint lensTalkCarouselScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107ee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f402f0;
  func_0x000107c61428(param_1 + _DAT_112f402f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103107f30; end: 103107f3b; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint setLensTalkCarouselScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f402f0;
  func_0x000107c61428(param_1 + _DAT_112f402f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103107f3c; end: 103107f9b;  */

void FUN_103107f3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103107f9c; end: 10310825f;  */

/* WARNING: Possible PIC construction at 0x000103108164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031081a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031081b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103108238) */
/* WARNING: Removing unreachable block (ram,0x000103108228) */
/* WARNING: Removing unreachable block (ram,0x0001031081bc) */
/* WARNING: Removing unreachable block (ram,0x0001031081ac) */
/* WARNING: Removing unreachable block (ram,0x00010310819c) */
/* WARNING: Removing unreachable block (ram,0x000103108178) */
/* WARNING: Removing unreachable block (ram,0x000103108168) */
/* WARNING: Removing unreachable block (ram,0x000103108218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103107f9c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3d228();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ea0();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c509d8();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c4b494();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_103104f04();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_103106e00();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103108260);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112f3f250) = lVar5;
          *(long *)(lVar4 + _DAT_112f3f258) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103108260; end: 103108287; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103108260(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103107f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103108288; end: 1031082cb; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint end] */

void FUN_103108288(undefined8 param_1)

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



/* Entry: 1031082cc; end: 1031085a7;  */

void FUN_1031082cc(long param_1,long param_2,long param_3)

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
    goto LAB_103108358;
  }
  if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0fa3950)) {
    uVar2 = 0xd00000000000001f;
    func_0x000107c605b8(0xd00000000000001f,0x800000010f05c6b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0f6dbf0)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010f092410,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58448();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0faf8d0)) {
          uVar2 = 0xd000000000000019;
          func_0x000107c605b8(0xd000000000000019,0x800000010f050730,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000002f;
            if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0edaaa0)) &&
               (func_0x000107c605b8(0xd00000000000002f,0x800000010f125560,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensTalkCarouselScopeGraphBridge/SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x58,2,0x4f,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1031085a8);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55eac();
            goto LAB_103108358;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57f80();
      }
      goto LAB_103108358;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52264();
LAB_103108358:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031085a8; end: 103108653; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031085a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031082cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103108654; end: 1031086e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108654(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f402d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f402d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f402e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f402e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f402f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f402f8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031086e4; end: 103108703; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031086e4(void)

{
  FUN_103108654();
  return;
}



/* Entry: 103108704; end: 103108737;  */

void FUN_103108704(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103108738; end: 1031087af; -[SCLensTalkCarouselScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103108764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103108768) */
/* WARNING: Removing unreachable block (ram,0x000103108788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108738(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f402d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f402d8));
  return;
}



/* Entry: 1031087b0; end: 1031087cf;  */

void FUN_1031087b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b8310);
  return;
}



/* Entry: 1031087d0; end: 1031087db; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031087d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f40328;
  func_0x000107c61428(param_1 + _DAT_112f40328,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031087dc; end: 1031087e7; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031087dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f40328;
  func_0x000107c61428(param_1 + _DAT_112f40328,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031087e8; end: 1031087f3; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint lensTalkCarouselScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031087e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f40330;
  func_0x000107c61428(param_1 + _DAT_112f40330,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031087f4; end: 103108837;  */

void FUN_1031087f4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103108838; end: 103108843; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint setLensTalkCarouselScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f40330;
  func_0x000107c61428(param_1 + _DAT_112f40330,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103108844; end: 103108897;  */

void FUN_103108844(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103108898; end: 1031088df; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint sCLensTalkCarouselScopedARBarIntegrationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108898(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f40338;
  func_0x000107c61428(param_1 + _DAT_112f40338,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031088e0; end: 103108943; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint setSCLensTalkCarouselScopedARBarIntegrationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031088e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f40338;
  func_0x000107c61428(param_1 + _DAT_112f40338,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103108944; end: 103108ac7;  */

/* WARNING: Possible PIC construction at 0x000103108a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103108a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103108a48) */
/* WARNING: Removing unreachable block (ram,0x000103108a58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108944(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b490();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f48();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1031050bc();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f401e0);
        *(undefined8 *)(lVar2 + _DAT_112f3f288) = uVar6;
        *(long *)(lVar2 + _DAT_112f3f290) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f3f290);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103108ac8; end: 103108aef; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint begin] */

void FUN_103108ac8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103108944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103108af0; end: 103108b33; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint end] */

void FUN_103108af0(undefined8 param_1)

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



/* Entry: 103108b34; end: 103108d37;  */

void FUN_103108b34(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0edaa10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1255f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000037;
        if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0eda9e0)) &&
           (func_0x000107c605b8(0xd000000000000037,0x800000010f125620,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensTalkCarouselScopeGraphBridge/SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint.swift"
                              ,0x68,2,0x47,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103108d38);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c584f0();
        goto LAB_103108bc0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ea8();
  }
LAB_103108bc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103108d38; end: 103108de3; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103108d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103108b34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103108de4; end: 103108e63; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108de4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f40328,0);
  func_0x000107c61614(param_1 + _DAT_112f40330,0);
  *(undefined8 *)(param_1 + _DAT_112f40338) = 0;
  *(undefined8 *)(param_1 + _DAT_112f40340) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103108e64; end: 103108e97;  */

void FUN_103108e64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103108e98; end: 103108eef; -[SCSCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103108ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103108ed8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108e98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f40328);
  func_0x000107c61610(param_1 + _DAT_112f40330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f40338));
  return;
}



/* Entry: 103108ef0; end: 103108f0f;  */

void FUN_103108ef0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b83f0);
  return;
}



/* Entry: 103108f10; end: 103108f1b; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108f10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f40370;
  func_0x000107c61428(param_1 + _DAT_112f40370,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103108f1c; end: 103108f27; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f40370;
  func_0x000107c61428(param_1 + _DAT_112f40370,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103108f28; end: 103108f33; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint lensTalkCarouselScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108f28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f40378;
  func_0x000107c61428(param_1 + _DAT_112f40378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103108f34; end: 103108f77;  */

void FUN_103108f34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103108f78; end: 103108f83; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint setLensTalkCarouselScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f40378;
  func_0x000107c61428(param_1 + _DAT_112f40378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103108f84; end: 103108fd7;  */

void FUN_103108f84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103108fd8; end: 10310901f; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint sCLensTalkCarouselScopedARBarServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103108fd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f40380;
  func_0x000107c61428(param_1 + _DAT_112f40380,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103109020; end: 103109083; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint setSCLensTalkCarouselScopedARBarServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109020(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f40380;
  func_0x000107c61428(param_1 + _DAT_112f40380,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103109084; end: 103109207;  */

/* WARNING: Possible PIC construction at 0x000103109184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103109194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031091b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103109188) */
/* WARNING: Removing unreachable block (ram,0x000103109198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109084(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b490();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f4c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_103105274();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f401e8);
        *(undefined8 *)(lVar2 + _DAT_112f3f2c0) = uVar6;
        *(long *)(lVar2 + _DAT_112f3f2c8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f3f2c8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103109208; end: 10310922f; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint begin] */

void FUN_103109208(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103109084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103109230; end: 103109273; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint end] */

void FUN_103109230(undefined8 param_1)

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



/* Entry: 103109274; end: 103109477;  */

void FUN_103109274(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0edaa10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1255f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0eda930)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010f1256d0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensTalkCarouselScopeGraphBridge/SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint.swift"
                              ,0x5d,2,0x47,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103109478);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c584f4();
        goto LAB_103109300;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ea8();
  }
LAB_103109300:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103109478; end: 103109523; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103109478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103109274(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103109524; end: 1031095a3; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109524(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f40370,0);
  func_0x000107c61614(param_1 + _DAT_112f40378,0);
  *(undefined8 *)(param_1 + _DAT_112f40380) = 0;
  *(undefined8 *)(param_1 + _DAT_112f40388) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031095a4; end: 1031095d7;  */

void FUN_1031095a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031095d8; end: 10310962f; -[SCSCLensTalkCarouselScopedARBarServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103109614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103109618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031095d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f40370);
  func_0x000107c61610(param_1 + _DAT_112f40378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f40380));
  return;
}



/* Entry: 103109630; end: 10310964f;  */

void FUN_103109630(void)

{
  func_0x000107c61168(&PTR_PTR_1128b84c0);
  return;
}



/* Entry: 103109650; end: 10310965b; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f403b8;
  func_0x000107c61428(param_1 + _DAT_112f403b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10310965c; end: 103109667; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10310965c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f403b8;
  func_0x000107c61428(param_1 + _DAT_112f403b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103109668; end: 103109673; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint lensTalkCarouselScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109668(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f403c0;
  func_0x000107c61428(param_1 + _DAT_112f403c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103109674; end: 1031096b7;  */

void FUN_103109674(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1031096b8; end: 1031096c3; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint setLensTalkCarouselScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031096b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f403c0;
  func_0x000107c61428(param_1 + _DAT_112f403c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031096c4; end: 103109717;  */

void FUN_1031096c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103109718; end: 10310975f; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint sCLensTalkCarouselScopedLensCTAHandlingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109718(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f403c8;
  func_0x000107c61428(param_1 + _DAT_112f403c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103109760; end: 1031097c3; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint setSCLensTalkCarouselScopedLensCTAHandlingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103109760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f403c8;
  func_0x000107c61428(param_1 + _DAT_112f403c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031097c4; end: 103109947;  */

/* WARNING: Possible PIC construction at 0x0001031098c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031098d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031098f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031098c8) */
/* WARNING: Removing unreachable block (ram,0x0001031098d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031097c4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b490();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f50();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_10310542c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f401f8);
        *(undefined8 *)(lVar2 + _DAT_112f3f2f8) = uVar6;
        *(long *)(lVar2 + _DAT_112f3f300) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f3f300);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103109948; end: 10310996f; -[SCSCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint begin] */

void FUN_103109948(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031097c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


