/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fd15b0; end: 101fd15eb;  */

void FUN_101fd15b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_101fd15ec();
  func_0x0001000a7f38("SCStoriesEverywhereScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101fd15ec; end: 101fd17d7;  */

void FUN_101fd15ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104ebda8;
  ppuVar4 = &PTR_DAT_112e77678;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e4cb30;
  func_0x0001000285a8(0x112e4cb30,&UNK_10da46770);
  func_0x0001000a6ee8(&UNK_1104b5070,
                      "SCStoriesEverywhereScopeEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_101fd184c,param_1,uVar2,&UNK_1104b5070,&PTR_DAT_112e4c898);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104b50c0;
  func_0x000107c613fc(&UNK_1104b50c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b4e90,"SCStoriesEverywhereScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_101fd18fc,puVar3,uVar2,&UNK_1104b4e90,&PTR_DAT_112e4c800);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104b50e8;
  func_0x000107c613fc(&UNK_1104b50e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b53c8,"StoriesEverywhereScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_101fd1904,puVar3,uVar2,&UNK_1104b53c8,&PTR_DAT_112e4cbe0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e4cb38;
  func_0x0001000285a8(0x112e4cb38,&UNK_10da46778);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101fd17d8; end: 101fd184b;  */

void FUN_101fd17d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101fd1978;
  func_0x0001000823a8(0x101fd1978,param_3);
  func_0x000100082720("SCStoriesEverywhereScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fd184c; end: 101fd1853;  */

void FUN_101fd184c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101fd1978;
  func_0x0001000823a8();
  func_0x000100082720("SCStoriesEverywhereScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fd1854; end: 101fd18fb;  */

void FUN_101fd1854(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b5110;
  func_0x000107c613fc(&UNK_1104b5110,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fd1970;
  func_0x0001000823a8(FUN_101fd1970,puVar1);
  func_0x000100082720("SCStoriesEverywhereScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fd18fc; end: 101fd1903;  */

void FUN_101fd18fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b5110;
  func_0x000107c613fc(&UNK_1104b5110,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fd1970;
  func_0x0001000823a8(FUN_101fd1970,puVar3);
  func_0x000100082720("SCStoriesEverywhereScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fd1904; end: 101fd1943;  */

void FUN_101fd1904(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fd2400(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StoriesEverywhereScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fd1944; end: 101fd196f;  */

void FUN_101fd1944(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fd1970; end: 101fd197f;  */

void FUN_101fd1970(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b4f18;
  func_0x000107c613fc(&UNK_1104b4f18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fcbd90;
  func_0x00010058fa64(FUN_101fcbd90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fd1980; end: 101fd1b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101fd1980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101fd1e50();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e4cb40) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e4cb48) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fd1b18);
  (*pcVar2)();
}



/* Entry: 101fd1b18; end: 101fd1b77; -[_TtC33StoriesEverywhereScopeGraphBridge48StoriesEverywhereScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fd1b18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesEverywhereScopeGraphBridge.StoriesEverywhereScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fd1b44);
  (*pcVar1)();
}



/* Entry: 101fd1b78; end: 101fd1baf; -[_TtC33StoriesEverywhereScopeGraphBridge48StoriesEverywhereScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fd1b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fd1b98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd1b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4cb40));
  return;
}



/* Entry: 101fd1bb0; end: 101fd1bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd1bb0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4cb48),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4cb40));
  return;
}



/* Entry: 101fd1bd8; end: 101fd1bf7;  */

void FUN_101fd1bd8(void)

{
  func_0x000107c61168(&PTR_PTR_112813170);
  return;
}



/* Entry: 101fd1bf8; end: 101fd1c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fd1bf8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4cb78) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4cb80);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fd1c80);
  (*pcVar2)();
}



/* Entry: 101fd1c80; end: 101fd1d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fd1c80(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4cb78);
  *(undefined **)(unaff_x20 + _DAT_112e4cb78) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4cb80);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4cb80))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b5200;
  func_0x000107c613fc(&UNK_1104b5200,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fd1d6c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fd1d68; end: 101fd1d73;  */

void FUN_101fd1d68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fd1d74; end: 101fd1dd3; -[_TtC33StoriesEverywhereScopeGraphBridge48SCStoriesEverywhereScopedServicesSaberEntryPoint init] */

void FUN_101fd1d74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesEverywhereScopeGraphBridge.SCStoriesEverywhereScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fd1da0);
  (*pcVar1)();
}



/* Entry: 101fd1dd4; end: 101fd1e0b; -[_TtC33StoriesEverywhereScopeGraphBridge48SCStoriesEverywhereScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd1dd4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4cb80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4cb78));
  return;
}



/* Entry: 101fd1e0c; end: 101fd1e0f;  */

void FUN_101fd1e0c(void)

{
  return;
}



/* Entry: 101fd1e10; end: 101fd1e2f;  */

void FUN_101fd1e10(void)

{
  FUN_101fd1c80();
  return;
}



/* Entry: 101fd1e30; end: 101fd1e4f;  */

void FUN_101fd1e30(void)

{
  func_0x000107c61168(&PTR_PTR_112813238);
  return;
}



/* Entry: 101fd1e50; end: 101fd1f1f;  */

undefined8 FUN_101fd1e50(void)

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
  
  func_0x000107c61428(0x112e4cbb0,&uStack_40,0x20,0);
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
    FUN_101fd1f20();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fd1f20; end: 101fd1f3f;  */

void FUN_101fd1f20(void)

{
  func_0x000107c61168(&PTR_PTR_112813300);
  return;
}



/* Entry: 101fd1f40; end: 101fd209f;  */

void FUN_101fd1f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4cbb8,&UNK_10da46848);
  puVar1 = &UNK_1104b5248;
  func_0x000107c613fc(&UNK_1104b5248,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101fd20a0,puVar1);
  return;
}



/* Entry: 101fd20a0; end: 101fd20ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd20a0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_101fd1f20();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112e4cbc0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112e4cbc8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e4cbd0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e4cbd8) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 101fd20ac; end: 101fd2137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd20ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4cbc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cbc8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cbd0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cbd8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fd2138; end: 101fd2197; -[_TtC33StoriesEverywhereScopeGraphBridge41StoriesEverywhereScopeGraphBridgeServices init] */

void FUN_101fd2138(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesEverywhereScopeGraphBridge.StoriesEverywhereScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fd2164);
  (*pcVar1)();
}



/* Entry: 101fd2198; end: 101fd222f; -[_TtC33StoriesEverywhereScopeGraphBridge41StoriesEverywhereScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fd21b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd21d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fd21b8) */
/* WARNING: Removing unreachable block (ram,0x000101fd21d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4cbc0));
  return;
}



/* Entry: 101fd2230; end: 101fd223b;  */

void FUN_101fd2230(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fd26b4,param_1);
  return;
}



/* Entry: 101fd223c; end: 101fd227b;  */

void FUN_101fd223c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fd26c4,0);
  return;
}



/* Entry: 101fd227c; end: 101fd2287;  */

void FUN_101fd227c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fd26bc,param_1);
  return;
}



/* Entry: 101fd2288; end: 101fd22c7;  */

void FUN_101fd2288(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fd26c8,0);
  return;
}



/* Entry: 101fd22c8; end: 101fd22d3;  */

void FUN_101fd22c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fd26b8,param_1);
  return;
}



/* Entry: 101fd22d4; end: 101fd235f;  */

void FUN_101fd22d4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fd26cc,0);
  return;
}



/* Entry: 101fd2360; end: 101fd236b;  */

void FUN_101fd2360(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fd23c4,param_1);
  return;
}



/* Entry: 101fd236c; end: 101fd23c3;  */

void FUN_101fd236c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101fd23c4; end: 101fd23f7;  */

void FUN_101fd23c4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101fd23f8; end: 101fd23ff;  */

undefined8 FUN_101fd23f8(void)

{
  return 0x1b;
}



/* Entry: 101fd2400; end: 101fd2577;  */

void FUN_101fd2400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b5270;
  func_0x000107c613fc(&UNK_1104b5270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fd2578,puVar1);
  return;
}



/* Entry: 101fd2578; end: 101fd257f;  */

void FUN_101fd2578(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4cbb0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4cbb0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b5408;
  func_0x000107c613fc(&UNK_1104b5408,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fd26ac;
  func_0x00010058fa64(0x101fd26ac,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fd2580; end: 101fd25db;  */

void FUN_101fd2580(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4cbb0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4cbb0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fd25dc; end: 101fd26cf;  */

undefined ** FUN_101fd25dc(void)

{
  return &PTR_DAT_112e77678;
}



/* Entry: 101fd26d0; end: 101fd2717; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd26d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc30;
  func_0x000107c61428(param_1 + _DAT_112e4cc30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fd2718; end: 101fd276f; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc30;
  func_0x000107c61428(param_1 + _DAT_112e4cc30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fd2770; end: 101fd27b7; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint sCContentProductPlaybackScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2770(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc38;
  func_0x000107c61428(param_1 + _DAT_112e4cc38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fd27b8; end: 101fd27c3; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setSCContentProductPlaybackScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd27b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc38;
  func_0x000107c61428(param_1 + _DAT_112e4cc38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fd27c4; end: 101fd280b; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint sCContextPostStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd27c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc40;
  func_0x000107c61428(param_1 + _DAT_112e4cc40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fd280c; end: 101fd2817; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setSCContextPostStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd280c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc40;
  func_0x000107c61428(param_1 + _DAT_112e4cc40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fd2818; end: 101fd285f; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint sCDiscoverFeedUpNextV2PlaybackSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2818(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc48;
  func_0x000107c61428(param_1 + _DAT_112e4cc48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fd2860; end: 101fd286b; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setSCDiscoverFeedUpNextV2PlaybackSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc48;
  func_0x000107c61428(param_1 + _DAT_112e4cc48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fd286c; end: 101fd28b3; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint sCOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd286c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc50;
  func_0x000107c61428(param_1 + _DAT_112e4cc50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fd28b4; end: 101fd28bf; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setSCOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd28b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc50;
  func_0x000107c61428(param_1 + _DAT_112e4cc50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fd28c0; end: 101fd2907; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint storiesEverywhereScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd28c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc58;
  func_0x000107c61428(param_1 + _DAT_112e4cc58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fd2908; end: 101fd2913; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setStoriesEverywhereScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc58;
  func_0x000107c61428(param_1 + _DAT_112e4cc58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fd2914; end: 101fd2973;  */

void FUN_101fd2914(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101fd2974; end: 101fd2cd3;  */

/* WARNING: Possible PIC construction at 0x000101fd2ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd2c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fd2c5c) */
/* WARNING: Removing unreachable block (ram,0x000101fd2c7c) */
/* WARNING: Removing unreachable block (ram,0x000101fd2cac) */
/* WARNING: Removing unreachable block (ram,0x000101fd2c9c) */
/* WARNING: Removing unreachable block (ram,0x000101fd2c00) */
/* WARNING: Removing unreachable block (ram,0x000101fd2bf0) */
/* WARNING: Removing unreachable block (ram,0x000101fd2be0) */
/* WARNING: Removing unreachable block (ram,0x000101fd2bc4) */
/* WARNING: Removing unreachable block (ram,0x000101fd2bb4) */
/* WARNING: Removing unreachable block (ram,0x000101fd2ba4) */
/* WARNING: Removing unreachable block (ram,0x000101fd2c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd2974(void)

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
  func_0x000107c50c58();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50c88();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50d4c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5113c();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c5bf48();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_101fd1bd8();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            FUN_101fd1e50();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101fd2cd4);
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
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uStack_68);
            *(long *)(lVar4 + _DAT_112e4cb40) = lVar5;
            *(long *)(lVar4 + _DAT_112e4cb48) = unaff_x20;
            lStack_80 = lVar4;
            lStack_78 = lVar6;
            func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
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



/* Entry: 101fd2cd4; end: 101fd2cfb; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101fd2cd4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fd2974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fd2cfc; end: 101fd2d3f; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint end] */

void FUN_101fd2cfc(undefined8 param_1)

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



/* Entry: 101fd2d40; end: 101fd3087;  */

void FUN_101fd2d40(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0fae540)) ||
       (func_0x000107c605b8(0xd000000000000024,0x800000010f051ac0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58200();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0fae510)) ||
         (func_0x000107c605b8(0xd00000000000001e,0x800000010f051af0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58230();
      }
      else {
        uVar2 = 0xd000000000000031;
        if (((param_2 == -0x2fffffffffffffcf) && (param_3 == -0x7ffffffef0fae4f0)) ||
           (func_0x000107c605b8(0xd000000000000031,0x800000010f051b10,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c582f4();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fae4b0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd00000000000001a,0x800000010f051b50,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0fae490)) &&
                 (func_0x000107c605b8(0xd000000000000030,0x800000010f051b70,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "StoriesEverywhereScopeGraphBridge/SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x5a,2,0x42,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101fd3088);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59904();
              goto LAB_101fd2dcc;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c586e4();
        }
      }
    }
  }
LAB_101fd2dcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fd3088; end: 101fd3133; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101fd3088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fd2d40(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fd3134; end: 101fd31cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd3134(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e4cc30,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e4cc38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cc40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cc48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cc50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cc58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e4cc60) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fd31d0; end: 101fd31ef; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fd31d0(void)

{
  FUN_101fd3134();
  return;
}



/* Entry: 101fd31f0; end: 101fd3223;  */

void FUN_101fd31f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fd3224; end: 101fd32ab; -[SCStoriesEverywhereScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fd3250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd3270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd3290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fd3274) */
/* WARNING: Removing unreachable block (ram,0x000101fd3254) */
/* WARNING: Removing unreachable block (ram,0x000101fd3294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd3224(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4cc30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4cc38));
  return;
}



/* Entry: 101fd32ac; end: 101fd32cb;  */

void FUN_101fd32ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128133d8);
  return;
}



/* Entry: 101fd32cc; end: 101fd3313; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd32cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4cc90;
  func_0x000107c61428(param_1 + _DAT_112e4cc90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fd3314; end: 101fd336b; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd3314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4cc90;
  func_0x000107c61428(param_1 + _DAT_112e4cc90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fd336c; end: 101fd3443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd336c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101fd1e30();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4cb78) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fd3444);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4cb80);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4cc98);
    *(long **)(unaff_x20 + _DAT_112e4cc98) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101fd3444; end: 101fd346b; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint begin] */

void FUN_101fd3444(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fd336c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fd346c; end: 101fd35e3;  */

/* WARNING: Possible PIC construction at 0x000101fd34d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fd356c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fd34d8) */
/* WARNING: Removing unreachable block (ram,0x000101fd3570) */
/* WARNING: Removing unreachable block (ram,0x000101fd3588) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd346c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4cc98);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101fd35e4; end: 101fd35eb;  */

void FUN_101fd35e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fd35ec; end: 101fd361f; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint end] */

void FUN_101fd35ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fd346c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fd3620; end: 101fd373f;  */

void FUN_101fd3620(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "StoriesEverywhereScopeGraphBridge/SCSCStoriesEverywhereScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fd3740);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fd3740; end: 101fd37eb; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fd3740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fd3620(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fd37ec; end: 101fd384b; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd37ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4cc90,0);
  *(undefined8 *)(param_1 + _DAT_112e4cc98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fd384c; end: 101fd387f;  */

void FUN_101fd384c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fd3880; end: 101fd38b7; -[SCSCStoriesEverywhereScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fd3880(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4cc90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4cc98));
  return;
}



/* Entry: 101fd38b8; end: 101fd38d7;  */

void FUN_101fd38b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128134c0);
  return;
}



/* Entry: 101fd38d8; end: 101fd3de3;  */

void FUN_101fd38d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b54f0;
  func_0x000107c613fc(&UNK_1104b54f0,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x101fd39ec,puVar1);
  return;
}



/* Entry: 101fd3de4; end: 101fd3df3;  */

undefined1  [16] FUN_101fd3de4(void)

{
  return ZEXT816(0x1104b5518);
}



/* Entry: 101fd3df4; end: 101fd3e3f;  */

void FUN_101fd3df4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fd3e40,param_1);
  return;
}



/* Entry: 101fd3e40; end: 101fd3ee7;  */

void FUN_101fd3e40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4ccc8;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x0001003b3b80(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8(PTR_PTR_1126a8c98);
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126cf710;
  func_0x000107c610f8();
  func_0x000107c46a34();
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 101fd3ee8; end: 101fd3ef7;  */

undefined1  [16] FUN_101fd3ee8(void)

{
  return ZEXT816(0x1104b55e0);
}



/* Entry: 101fd3ef8; end: 101fd4237;  */

void FUN_101fd3ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  puVar1 = &UNK_1104b56a8;
  func_0x000107c613fc(&UNK_1104b56a8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x101fd3fd8,puVar1);
  return;
}



/* Entry: 101fd4238; end: 101fd4247;  */

undefined1  [16] FUN_101fd4238(void)

{
  return ZEXT816(0x1104b56d0);
}



/* Entry: 101fd4248; end: 101fd4287;  */

void FUN_101fd4248(void)

{
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  func_0x0001000823a8(FUN_101fd4288,0);
  return;
}



/* Entry: 101fd4288; end: 101fd429f;  */

void FUN_101fd4288(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 101fd42a0; end: 101fd43db;  */

void FUN_101fd42a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  puVar1 = &UNK_1104b5838;
  func_0x000107c613fc(&UNK_1104b5838,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x101fd4320,puVar1);
  return;
}



/* Entry: 101fd43dc; end: 101fd43eb;  */

undefined1  [16] FUN_101fd43dc(void)

{
  return ZEXT816(0x1104b5860);
}



/* Entry: 101fd43ec; end: 101fd46cb;  */

void FUN_101fd43ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  puVar1 = &UNK_1104b5928;
  func_0x000107c613fc(&UNK_1104b5928,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fd44a8,puVar1);
  return;
}



/* Entry: 101fd46cc; end: 101fd46db;  */

undefined1  [16] FUN_101fd46cc(void)

{
  return ZEXT816(0x1104b5950);
}



/* Entry: 101fd46dc; end: 101fd4727;  */

void FUN_101fd46dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fd4728,param_1);
  return;
}



/* Entry: 101fd4728; end: 101fd47d3;  */

void FUN_101fd4728(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4ccc8;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x0001003b3b80(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8(PTR_PTR_1126a8c98);
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126c2d88;
  func_0x000107c610f8();
  func_0x000107c46a38();
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 101fd47d4; end: 101fd47e3;  */

undefined1  [16] FUN_101fd47d4(void)

{
  return ZEXT816(0x1104b59f0);
}



/* Entry: 101fd47e4; end: 101fd487b;  */

void FUN_101fd47e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  puVar1 = &UNK_1104b5ab8;
  func_0x000107c613fc(&UNK_1104b5ab8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101fd487c,puVar1);
  return;
}



/* Entry: 101fd487c; end: 101fd4a7b;  */

void FUN_101fd487c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_58;
  
  func_0x000100083b20(&puStack_58);
  puVar5 = puStack_58;
  puVar1 = puStack_58;
  func_0x000107c4ac3c(puStack_58);
  func_0x000107c61180();
  func_0x000100083b20(&puStack_58);
  puVar2 = puStack_58;
  puVar6 = puStack_58;
  func_0x000107c4ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar5);
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(puVar2);
    puVar3 = puVar5;
    func_0x000107c4ac40(puVar5);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126c2278;
    func_0x000107c610f8();
    func_0x000107c488ec();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(puVar2);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(puVar2);
    }
    else {
      func_0x000100083b20(&puStack_58);
      puVar3 = puStack_58;
      func_0x000107c4ac44();
      func_0x000107c61180();
      func_0x000107c61170(puStack_58);
      puVar4 = puVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar1);
      }
      else {
        puVar3 = puVar6;
        func_0x000107c61174(puVar6);
        func_0x000107c615f0(puVar4);
        func_0x000107c3d740(puVar3);
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar5);
        func_0x000107c615ec(puVar4,2);
        puVar5 = puVar3;
      }
      func_0x000107c61170(puVar5);
    }
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 101fd4a7c; end: 101fd4a8b;  */

undefined1  [16] FUN_101fd4a7c(void)

{
  return ZEXT816(0x1104b5ae0);
}



/* Entry: 101fd4a8c; end: 101fd4b23;  */

void FUN_101fd4a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  puVar1 = &UNK_1104b5ba8;
  func_0x000107c613fc(&UNK_1104b5ba8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101fd4b24,puVar1);
  return;
}



/* Entry: 101fd4b24; end: 101fd4d17;  */

void FUN_101fd4b24(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_58;
  
  func_0x000100083b20(&puStack_58);
  puVar1 = puStack_58;
  puVar6 = puStack_58;
  func_0x000107c4ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_58);
    puVar5 = puStack_58;
    puVar2 = puStack_58;
    func_0x000107c4ac3c(puStack_58);
    func_0x000107c61180();
    func_0x000107c61174();
    func_0x000107c615f0(puVar1);
    puVar3 = puVar5;
    func_0x000107c4ac40(puVar5);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126c2280;
    func_0x000107c610f8();
    func_0x000107c488ec();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(puVar1);
    func_0x000100083b20(&puStack_58);
    puVar3 = puStack_58;
    func_0x000107c4ac44();
    func_0x000107c61180();
    func_0x000107c61170(puStack_58);
    puVar4 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(puVar2);
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c615e8(puVar1);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(puVar4);
        goto LAB_101fd4cf8;
      }
      puVar3 = puVar6;
      func_0x000107c61174(puVar6);
      func_0x000107c615f0(puVar4);
      func_0x000107c3d740(puVar3);
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c615ec(puVar4,2);
      puVar5 = puVar3;
    }
    func_0x000107c61170(puVar5);
  }
LAB_101fd4cf8:
  *param_1 = puVar6;
  return;
}


