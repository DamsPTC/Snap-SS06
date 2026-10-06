/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c96f8c; end: 102c970af;  */

long FUN_102c96f8c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c970ac);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102c970b0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f07820;
        func_0x0001000285a8(0x112f07820,&UNK_10db3ac20);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f07820;
      func_0x0001000285a8(0x112f07820,&UNK_10db3ac20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c970a8);
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



/* Entry: 102c970b0; end: 102c97337;  */

undefined1  [16] FUN_102c970b0(void)

{
  return ZEXT816(0x1105bbb40);
}



/* Entry: 102c97338; end: 102c974cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c97338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_102c97aec();
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
    *(long *)(unaff_x20 + _DAT_112f08b38) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f08b40) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c974d0);
  (*pcVar2)();
}



/* Entry: 102c974d0; end: 102c9752f; -[_TtC30AdPagePlaybackScopeGraphBridge45AdPagePlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_102c974d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPagePlaybackScopeGraphBridge.AdPagePlaybackScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c974fc);
  (*pcVar1)();
}



/* Entry: 102c97530; end: 102c97567; -[_TtC30AdPagePlaybackScopeGraphBridge45AdPagePlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c9754c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c97550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c97530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f08b38));
  return;
}



/* Entry: 102c97568; end: 102c9758f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c97568(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f08b40),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f08b38));
  return;
}



/* Entry: 102c97590; end: 102c975af;  */

void FUN_102c97590(void)

{
  func_0x000107c61168(&PTR_PTR_11289bbf8);
  return;
}



/* Entry: 102c975b0; end: 102c9764b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c975b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f08cc8);
  *(undefined8 *)(unaff_x20 + _DAT_112f08b70) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f08b78) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102c9764c; end: 102c976ab; -[_TtC30AdPagePlaybackScopeGraphBridge44AdPageFeatureRegistryServicesSaberEntryPoint init] */

void FUN_102c9764c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPagePlaybackScopeGraphBridge.AdPageFeatureRegistryServicesSaberEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c97678);
  (*pcVar1)();
}



/* Entry: 102c976ac; end: 102c9773f; -[_TtC30AdPagePlaybackScopeGraphBridge44AdPageFeatureRegistryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c976ac(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f08b70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f08b78));
  return;
}



/* Entry: 102c97740; end: 102c97747;  */

undefined8 FUN_102c97740(void)

{
  return 0;
}



/* Entry: 102c97748; end: 102c97767;  */

void FUN_102c97748(void)

{
  func_0x000107c61168(&PTR_PTR_11289bcc0);
  return;
}



/* Entry: 102c97768; end: 102c977cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c97768(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f08cd0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c977cc; end: 102c977d3;  */

void FUN_102c977cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c977d4; end: 102c97873;  */

void FUN_102c977d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c97874; end: 102c97893;  */

void FUN_102c97874(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c97894; end: 102c9791b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c97894(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f08c78) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f08c80);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c9791c);
  (*pcVar2)();
}



/* Entry: 102c9791c; end: 102c97a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c9791c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f08c78);
  *(undefined **)(unaff_x20 + _DAT_112f08c78) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f08c80);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f08c80))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105bbec0;
  func_0x000107c613fc(&UNK_1105bbec0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102c97a08,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102c97a04; end: 102c97a0f;  */

void FUN_102c97a04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c97a10; end: 102c97a6f; -[_TtC30AdPagePlaybackScopeGraphBridge45SCAdPagePlaybackScopedServicesSaberEntryPoint init] */

void FUN_102c97a10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPagePlaybackScopeGraphBridge.SCAdPagePlaybackScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c97a3c);
  (*pcVar1)();
}



/* Entry: 102c97a70; end: 102c97aa7; -[_TtC30AdPagePlaybackScopeGraphBridge45SCAdPagePlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c97a70(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08c80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f08c78));
  return;
}



/* Entry: 102c97aa8; end: 102c97aab;  */

void FUN_102c97aa8(void)

{
  return;
}



/* Entry: 102c97aac; end: 102c97acb;  */

void FUN_102c97aac(void)

{
  FUN_102c9791c();
  return;
}



/* Entry: 102c97acc; end: 102c97aeb;  */

void FUN_102c97acc(void)

{
  func_0x000107c61168(&PTR_PTR_11289bd88);
  return;
}



/* Entry: 102c97aec; end: 102c97bbb;  */

undefined8 FUN_102c97aec(void)

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
  
  func_0x000107c61428(0x112f08cb0,&uStack_40,0x20,0);
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
    FUN_102c97bbc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102c97bbc; end: 102c97bdb;  */

void FUN_102c97bbc(void)

{
  func_0x000107c61168(&PTR_PTR_11289be50);
  return;
}



/* Entry: 102c97bdc; end: 102c97d97;  */

void FUN_102c97bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f08cb8,&UNK_10db3bae8);
  puVar1 = &UNK_1105bbf08;
  func_0x000107c613fc(&UNK_1105bbf08,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102c97d98,puVar1);
  return;
}



/* Entry: 102c97d98; end: 102c97da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c97d98(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_102c97bbc();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112f08cc0) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112f08cc8) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f08cd0) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112f08cd8) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f08ce0) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f08ce8) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102c97da8; end: 102c97e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c97da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f08cc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f08cc8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f08cd0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f08cd8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f08ce0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f08ce8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c97e5c; end: 102c97ebb; -[_TtC30AdPagePlaybackScopeGraphBridge38AdPagePlaybackScopeGraphBridgeServices init] */

void FUN_102c97e5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPagePlaybackScopeGraphBridge.AdPagePlaybackScopeGraphBridgeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c97e88);
  (*pcVar1)();
}



/* Entry: 102c97ebc; end: 102c97f73; -[_TtC30AdPagePlaybackScopeGraphBridge38AdPagePlaybackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c97ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c97ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c97f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c97efc) */
/* WARNING: Removing unreachable block (ram,0x000102c97edc) */
/* WARNING: Removing unreachable block (ram,0x000102c97f1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c97ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f08cc8));
  return;
}



/* Entry: 102c97f74; end: 102c97f7f;  */

void FUN_102c97f74(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c983f8,param_1);
  return;
}



/* Entry: 102c97f80; end: 102c97fbf;  */

void FUN_102c97f80(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c98408,0);
  return;
}



/* Entry: 102c97fc0; end: 102c97fcb;  */

void FUN_102c97fc0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c97fcc,param_1);
  return;
}



/* Entry: 102c97fcc; end: 102c9803f;  */

void FUN_102c97fcc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102c98040; end: 102c9804b;  */

void FUN_102c98040(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c983fc,param_1);
  return;
}



/* Entry: 102c9804c; end: 102c980d7;  */

void FUN_102c9804c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c98410,0);
  return;
}



/* Entry: 102c980d8; end: 102c980e3;  */

void FUN_102c980d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c98400,param_1);
  return;
}



/* Entry: 102c980e4; end: 102c9813b;  */

void FUN_102c980e4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102c9813c; end: 102c98143;  */

undefined8 FUN_102c9813c(void)

{
  return 0x1b;
}



/* Entry: 102c98144; end: 102c982bb;  */

void FUN_102c98144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105bbf30;
  func_0x000107c613fc(&UNK_1105bbf30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102c982bc,puVar1);
  return;
}



/* Entry: 102c982bc; end: 102c982c3;  */

void FUN_102c982bc(undefined8 *param_1)

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
  func_0x000107c61428(0x112f08cb0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f08cb0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105bc0c8;
  func_0x000107c613fc(&UNK_1105bc0c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102c983f0;
  func_0x00010058fa64(0x102c983f0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c982c4; end: 102c9831f;  */

void FUN_102c982c4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f08cb0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f08cb0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102c98320; end: 102c98413;  */

undefined ** FUN_102c98320(void)

{
  return &PTR_DAT_113066748;
}



/* Entry: 102c98414; end: 102c9845b; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c98414(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08d40;
  func_0x000107c61428(param_1 + _DAT_112f08d40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c9845c; end: 102c984b3; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9845c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08d40;
  func_0x000107c61428(param_1 + _DAT_112f08d40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c984b4; end: 102c984fb; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c984b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08d48;
  func_0x000107c61428(param_1 + _DAT_112f08d48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c984fc; end: 102c98507; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c984fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08d48;
  func_0x000107c61428(param_1 + _DAT_112f08d48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c98508; end: 102c9854f; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint sCAdReportAdInfoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c98508(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08d50;
  func_0x000107c61428(param_1 + _DAT_112f08d50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c98550; end: 102c9855b; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setSCAdReportAdInfoScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c98550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08d50;
  func_0x000107c61428(param_1 + _DAT_112f08d50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c9855c; end: 102c985a3; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint sCAdReportHideAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9855c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08d58;
  func_0x000107c61428(param_1 + _DAT_112f08d58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c985a4; end: 102c985af; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setSCAdReportHideAdScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c985a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08d58;
  func_0x000107c61428(param_1 + _DAT_112f08d58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c985b0; end: 102c985f7; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint sCAdReportReportAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c985b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08d60;
  func_0x000107c61428(param_1 + _DAT_112f08d60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c985f8; end: 102c98603; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setSCAdReportReportAdScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c985f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08d60;
  func_0x000107c61428(param_1 + _DAT_112f08d60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c98604; end: 102c9864b; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint adPagePlaybackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c98604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08d68;
  func_0x000107c61428(param_1 + _DAT_112f08d68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c9864c; end: 102c98657; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setAdPagePlaybackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9864c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08d68;
  func_0x000107c61428(param_1 + _DAT_112f08d68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c98658; end: 102c986b7;  */

void FUN_102c98658(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102c986b8; end: 102c98a17;  */

/* WARNING: Possible PIC construction at 0x000102c988e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c988f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c98904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c98920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c98930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c98940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c989dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c989ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c989bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9899c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9898c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c989a0) */
/* WARNING: Removing unreachable block (ram,0x000102c989c0) */
/* WARNING: Removing unreachable block (ram,0x000102c989f0) */
/* WARNING: Removing unreachable block (ram,0x000102c989e0) */
/* WARNING: Removing unreachable block (ram,0x000102c98944) */
/* WARNING: Removing unreachable block (ram,0x000102c98934) */
/* WARNING: Removing unreachable block (ram,0x000102c98924) */
/* WARNING: Removing unreachable block (ram,0x000102c98908) */
/* WARNING: Removing unreachable block (ram,0x000102c988f8) */
/* WARNING: Removing unreachable block (ram,0x000102c988e8) */
/* WARNING: Removing unreachable block (ram,0x000102c98990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c986b8(void)

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
    func_0x000107c509fc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50a00();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c50a04();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c3d398();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_102c97590();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            FUN_102c97aec();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102c98a18);
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
            *(long *)(lVar4 + _DAT_112f08b38) = lVar5;
            *(long *)(lVar4 + _DAT_112f08b40) = unaff_x20;
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



/* Entry: 102c98a18; end: 102c98a3f; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102c98a18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c986b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c98a40; end: 102c98a83; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint end] */

void FUN_102c98a40(undefined8 param_1)

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



/* Entry: 102c98a84; end: 102c98dcb;  */

void FUN_102c98a84(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0fa3950)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f05c6b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0fad760)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001c,0x800000010f0528a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0fad740)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001c,0x800000010f0528c0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0fad720)) ||
                   (func_0x000107c605b8(0xd00000000000001e,0x800000010f0528e0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c57fac();
                }
                else {
                  uVar2 = 0xd00000000000002d;
                  if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0efa6c0)) &&
                     (func_0x000107c605b8(0xd00000000000002d,0x800000010f105940,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "AdPagePlaybackScopeGraphBridge/SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint.swift"
                                        ,0x54,2,0x42,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c98dcc);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5234c();
                }
                goto LAB_102c98b10;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57fa8();
            goto LAB_102c98b10;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57fa4();
        goto LAB_102c98b10;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52264();
  }
LAB_102c98b10:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c98dcc; end: 102c98e77; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102c98dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c98a84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c98e78; end: 102c98f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c98e78(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f08d40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f08d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f08d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f08d58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f08d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f08d68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f08d70) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c98f14; end: 102c98f33; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_102c98f14(void)

{
  FUN_102c98e78();
  return;
}



/* Entry: 102c98f34; end: 102c98f67;  */

void FUN_102c98f34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c98f68; end: 102c98fef; -[SCAdPagePlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c98f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c98fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c98fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c98fb8) */
/* WARNING: Removing unreachable block (ram,0x000102c98f98) */
/* WARNING: Removing unreachable block (ram,0x000102c98fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c98f68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f08d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f08d48));
  return;
}



/* Entry: 102c98ff0; end: 102c9900f;  */

void FUN_102c98ff0(void)

{
  func_0x000107c61168(&PTR_PTR_11289bf38);
  return;
}



/* Entry: 102c99010; end: 102c9901b; -[SCAdPageFeatureRegistryServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08da0;
  func_0x000107c61428(param_1 + _DAT_112f08da0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c9901c; end: 102c99027; -[SCAdPageFeatureRegistryServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9901c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08da0;
  func_0x000107c61428(param_1 + _DAT_112f08da0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c99028; end: 102c99033; -[SCAdPageFeatureRegistryServicesSaberEntryPoint adPagePlaybackScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99028(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08da8;
  func_0x000107c61428(param_1 + _DAT_112f08da8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c99034; end: 102c99077;  */

void FUN_102c99034(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c99078; end: 102c99083; -[SCAdPageFeatureRegistryServicesSaberEntryPoint setAdPagePlaybackScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08da8;
  func_0x000107c61428(param_1 + _DAT_112f08da8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c99084; end: 102c990d7;  */

void FUN_102c99084(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c990d8; end: 102c9911f; -[SCAdPageFeatureRegistryServicesSaberEntryPoint adPageFeatureRegistryServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c990d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08db0;
  func_0x000107c61428(param_1 + _DAT_112f08db0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c99120; end: 102c99183; -[SCAdPageFeatureRegistryServicesSaberEntryPoint setAdPageFeatureRegistryServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08db0;
  func_0x000107c61428(param_1 + _DAT_112f08db0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c99184; end: 102c99307;  */

/* WARNING: Possible PIC construction at 0x000102c99284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c99294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c992b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c99288) */
/* WARNING: Removing unreachable block (ram,0x000102c99298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99184(void)

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
    func_0x000107c3d394();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3d390();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102c97748();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f08cc8);
        *(undefined8 *)(lVar2 + _DAT_112f08b70) = uVar6;
        *(long *)(lVar2 + _DAT_112f08b78) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f08b78);
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



/* Entry: 102c99308; end: 102c9932f; -[SCAdPageFeatureRegistryServicesSaberEntryPoint begin] */

void FUN_102c99308(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c99184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c99330; end: 102c99373; -[SCAdPageFeatureRegistryServicesSaberEntryPoint end] */

void FUN_102c99330(undefined8 param_1)

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



/* Entry: 102c99374; end: 102c99577;  */

void FUN_102c99374(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0efa630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000026,0x800000010f1059d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0efa600)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000024,0x800000010f105a00,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "AdPagePlaybackScopeGraphBridge/SCAdPageFeatureRegistryServicesSaberEntryPoint.swift"
                                ,0x53,2,0x36,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c99578);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52344();
        goto LAB_102c99400;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52348();
  }
LAB_102c99400:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c99578; end: 102c99623; -[SCAdPageFeatureRegistryServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102c99578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c99374(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c99624; end: 102c996a3; -[SCAdPageFeatureRegistryServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99624(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f08da0,0);
  func_0x000107c61614(param_1 + _DAT_112f08da8,0);
  *(undefined8 *)(param_1 + _DAT_112f08db0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f08db8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c996a4; end: 102c996d7;  */

void FUN_102c996a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c996d8; end: 102c9972f; -[SCAdPageFeatureRegistryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c99714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c99718) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c996d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f08da0);
  func_0x000107c61610(param_1 + _DAT_112f08da8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f08db0));
  return;
}



/* Entry: 102c99730; end: 102c9974f;  */

void FUN_102c99730(void)

{
  func_0x000107c61168(&PTR_PTR_11289c020);
  return;
}



/* Entry: 102c99750; end: 102c9975b; -[SCAdPlaybackPageEventServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99750(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08de8;
  func_0x000107c61428(param_1 + _DAT_112f08de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c9975c; end: 102c99767; -[SCAdPlaybackPageEventServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9975c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08de8;
  func_0x000107c61428(param_1 + _DAT_112f08de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c99768; end: 102c99773; -[SCAdPlaybackPageEventServiceSaberServiceProvider adPagePlaybackScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99768(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08df0;
  func_0x000107c61428(param_1 + _DAT_112f08df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c99774; end: 102c997b7;  */

void FUN_102c99774(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c997b8; end: 102c997c3; -[SCAdPlaybackPageEventServiceSaberServiceProvider setAdPagePlaybackScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c997b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08df0;
  func_0x000107c61428(param_1 + _DAT_112f08df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c997c4; end: 102c99817;  */

void FUN_102c997c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c99818; end: 102c99a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c99818(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d394();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c977f8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f08cd0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f08df8);
      *(long *)(unaff_x20 + _DAT_112f08df8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AdPagePlaybackScopeGraphBridge/SCAdPlaybackPageEventServiceSaberServiceProvider.swift"
                      ,0x55,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c99944);
  (*pcVar1)();
}



/* Entry: 102c99a2c; end: 102c99a5f; -[SCAdPlaybackPageEventServiceSaberServiceProvider provide] */

void FUN_102c99a2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c99818();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c99a60; end: 102c99a93; -[SCAdPlaybackPageEventServiceSaberServiceProvider __safeProvide] */

void FUN_102c99a60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c99944();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c99a94; end: 102c99ad7; -[SCAdPlaybackPageEventServiceSaberServiceProvider end] */

void FUN_102c99a94(undefined8 param_1)

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



/* Entry: 102c99ad8; end: 102c99c6f;  */

void FUN_102c99ad8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0efa630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000026,0x800000010f1059d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdPagePlaybackScopeGraphBridge/SCAdPlaybackPageEventServiceSaberServiceProvider.swift"
                            ,0x55,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c99c70);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52348();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c99c70; end: 102c99d1b; -[SCAdPlaybackPageEventServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_102c99c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c99ad8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c99d1c; end: 102c99d8f; -[SCAdPlaybackPageEventServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99d1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f08de8,0);
  func_0x000107c61614(param_1 + _DAT_112f08df0,0);
  *(undefined8 *)(param_1 + _DAT_112f08df8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c99d90; end: 102c99dc3;  */

void FUN_102c99d90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c99dc4; end: 102c99e0b; -[SCAdPlaybackPageEventServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99dc4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f08de8);
  func_0x000107c61610(param_1 + _DAT_112f08df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f08df8));
  return;
}



/* Entry: 102c99e0c; end: 102c99e2b;  */

void FUN_102c99e0c(void)

{
  func_0x000107c61168(&PTR_PTR_112f08e40);
  return;
}


