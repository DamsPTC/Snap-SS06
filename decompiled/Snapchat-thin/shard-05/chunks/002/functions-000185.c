/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c5c93c; end: 103c5c9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c93c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002aae04();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ffbe90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103c5c9a4; end: 103c5c9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c9a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ffbe90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c5c9f0; end: 103c5cb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103c5c9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x0001002a82d0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined **)(lVar5 + _DAT_11380d190) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar5 + _DAT_11380d198) = 0;
  lVar3 = _DAT_11380d1a0;
  func_0x000107c61614(lVar5 + _DAT_11380d1a0,0);
  lVar2 = _DAT_11380d180;
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(lVar5 + lVar2,param_1,lVar6);
  *(undefined8 *)(lVar5 + _DAT_11380d188) = param_2;
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_2);
  plVar7 = &lStack_88;
  func_0x000107c61154(plVar7,puVar1);
  func_0x000107c54164();
  aplStack_a0[0] = plVar7;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar7;
}



/* Entry: 103c5cb44; end: 103c5cc2f; -[_TtC21SimpleWebBrowserScope29SimpleWebBrowserScopeServices buildWithUrl:uiContainer:delegate:disableFullscreen:] */

void FUN_103c5cb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_103c5c9f0(puVar3,param_4,param_5,param_6);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103c5cc30; end: 103c5cc33;  */

void FUN_103c5cc30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c5cc34; end: 103c5cc67;  */

void FUN_103c5cc34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c5cc68; end: 103c5cca3; -[_TtC21SimpleWebBrowserScope29SimpleWebBrowserScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5cc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ffbe90));
  return;
}



/* Entry: 103c5cca4; end: 103c5ccb3; -[WebBrowsingScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5cca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffbf00));
  return;
}



/* Entry: 103c5ccb4; end: 103c5ccd3; -[WebBrowsingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5ccb4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ffbf08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5ccd4; end: 103c5cce3; -[WebBrowsingScope browserPromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5ccd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ffbf10));
  return;
}



/* Entry: 103c5cce4; end: 103c5cd2b; -[WebBrowsingScope browserDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5cce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffbf18;
  func_0x000107c61428(param_1 + _DAT_112ffbf18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5cd2c; end: 103c5cd83; -[WebBrowsingScope setBrowserDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5cd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffbf18;
  func_0x000107c61428(param_1 + _DAT_112ffbf18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c5cd84; end: 103c5cdeb; -[WebBrowsingScope additionalScriptControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5cd84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112ffbf20);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    uVar1 = 0x112ffbf98;
    func_0x0001000285a8(0x112ffbf98,&UNK_10dc69f98);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103c5cdec; end: 103c5ce0b; -[WebBrowsingScope urlInterceptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5cdec(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ffbf28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5ce0c; end: 103c5ce2b; -[WebBrowsingScope safeBrowsingOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5ce0c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ffbf30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5ce2c; end: 103c5ce6f; -[WebBrowsingScope disableReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c5ce2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffbf38;
  func_0x000107c61428(param_1 + _DAT_112ffbf38,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103c5ce70; end: 103c5cebf; -[WebBrowsingScope setDisableReuse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5ce70(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffbf38;
  func_0x000107c61428(param_1 + _DAT_112ffbf38,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103c5cec0; end: 103c5d013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c5cec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ffbf18;
  func_0x000107c61614(unaff_x20 + _DAT_112ffbf18,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ffbf38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf10) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf28) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf30) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_2);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 103c5d014; end: 103c5d077;  */

undefined8
FUN_103c5d014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103c5d400();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 103c5d078; end: 103c5d173; -[WebBrowsingScope initWithConfig:browserPromise:uiContainer:browserDelegate:additionalScriptControllers:urlInterceptor:safeBrowsingOverride:] */

undefined8
FUN_103c5d078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  if (param_7 != 0) {
    uVar1 = 0x112ffbf98;
    func_0x0001000285a8(0x112ffbf98,&UNK_10dc69f98);
    func_0x000107c5fc54(param_7,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  uVar1 = param_3;
  FUN_103c5d400(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  return uVar1;
}



/* Entry: 103c5d174; end: 103c5d19f; -[WebBrowsingScope init] */

void FUN_103c5d174(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingScope.WebBrowsingScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c5d1a0);
  (*pcVar1)();
}



/* Entry: 103c5d1a0; end: 103c5d253; -[WebBrowsingScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c5d1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5d20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5d1d0) */
/* WARNING: Removing unreachable block (ram,0x000103c5d210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5d1a0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffbf00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ffbf08));
  return;
}



/* Entry: 103c5d254; end: 103c5d257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103c5d254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001006edf64();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ffbf18;
  func_0x000107c61614(lVar4 + _DAT_112ffbf18,0);
  *(undefined1 *)(lVar4 + _DAT_112ffbf38) = 0;
  *(long *)(lVar4 + _DAT_112ffbf00) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ffbf08) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112ffbf10) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_78,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_4);
  *(undefined8 *)(lVar4 + _DAT_112ffbf20) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112ffbf28) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112ffbf30) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  plVar5 = &lStack_88;
  func_0x000107c61154(plVar5,puVar1);
  lVar2 = _DAT_112ffbf38;
  func_0x000107c61428((long)plVar5 + _DAT_112ffbf38,auStack_a0,1,0);
  *(undefined1 *)((long)plVar5 + lVar2) = param_8;
  return plVar5;
}



/* Entry: 103c5d258; end: 103c5d38b; -[_TtC16WebBrowsingScope24WebBrowsingScopeServices buildWithConfig:browserPromise:uiContainer:browserDelegate:additionalScriptControllers:urlInterceptor:safeBrowsingOverride:disableReuse:] */

void FUN_103c5d258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  if (param_7 != 0) {
    uVar1 = 0x112ffbf98;
    func_0x0001000285a8(0x112ffbf98,&UNK_10dc69f98);
    func_0x000107c5fc54(param_7,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103c5d548(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c5d38c; end: 103c5d3c7; -[_TtC16WebBrowsingScope24WebBrowsingScopeServices init] */

void FUN_103c5d38c(undefined8 param_1)

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



/* Entry: 103c5d3c8; end: 103c5d3cb;  */

void FUN_103c5d3c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c5d3cc; end: 103c5d3ff;  */

void FUN_103c5d3cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c5d400; end: 103c5d523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5d400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ffbf18;
  func_0x000107c61614(unaff_x20 + _DAT_112ffbf18,0);
  *(undefined1 *)(unaff_x20 + _DAT_112ffbf38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf10) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf28) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ffbf30) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 103c5d524; end: 103c5d547;  */

undefined8 FUN_103c5d524(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103c5d548; end: 103c5d6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103c5d548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001006edf64();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ffbf18;
  func_0x000107c61614(lVar4 + _DAT_112ffbf18,0);
  *(undefined1 *)(lVar4 + _DAT_112ffbf38) = 0;
  *(long *)(lVar4 + _DAT_112ffbf00) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ffbf08) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112ffbf10) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_78,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_4);
  *(undefined8 *)(lVar4 + _DAT_112ffbf20) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112ffbf28) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112ffbf30) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  plVar5 = &lStack_88;
  func_0x000107c61154(plVar5,puVar1);
  lVar2 = _DAT_112ffbf38;
  func_0x000107c61428((long)plVar5 + _DAT_112ffbf38,auStack_a0,1,0);
  *(undefined1 *)((long)plVar5 + lVar2) = param_8;
  return plVar5;
}



/* Entry: 103c5d6b4; end: 103c5d6c7;  */

undefined1  [16] FUN_103c5d6b4(void)

{
  return ZEXT816(0x1106ef5d0);
}



/* Entry: 103c5d6c8; end: 103c5d7c3;  */

void FUN_103c5d6c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5ed90();
  uVar1 = 0;
  func_0x000100dfa6ec(0);
  uVar2 = uVar1;
  func_0x000100f33384();
  func_0x000107c5f9dc(param_2,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  puVar4 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_1106ef5e0;
    lStack_50 = param_3;
    uStack_48 = param_4;
    func_0x000107c60bc4(&puStack_70);
    uVar2 = uStack_48;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar2);
    puVar4 = (undefined1 *)ppuVar3;
  }
  func_0x000107c4de70();
  func_0x000107c60bd0(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103c5d7c4; end: 103c5d7df;  */

void FUN_103c5d7c4(long param_1,long param_2)

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



/* Entry: 103c5d7e0; end: 103c5d91f;  */

void FUN_103c5d7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  func_0x000107c5edb4(puVar4,param_3);
  uVar2 = 0;
  func_0x000100dfa6ec(0);
  uVar3 = uVar2;
  func_0x000100f33384();
  func_0x000107c5f9e8(param_4,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  if (param_5 == 0) {
    puVar6 = (undefined *)0x0;
    pcVar5 = (code *)0x0;
  }
  else {
    puVar6 = &UNK_1106ef618;
    func_0x000107c613fc(&UNK_1106ef618,0x18,7);
    *(long *)(puVar6 + 0x10) = param_5;
    pcVar5 = FUN_103c5d920;
  }
  func_0x000107c61174(param_1);
  FUN_103c5d6c8(puVar4,param_4,pcVar5,puVar6);
  func_0x000101237350(pcVar5,puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  (**(code **)(lVar7 + 8))(puVar4,lVar1);
  return;
}



/* Entry: 103c5d920; end: 103c5d933;  */

void FUN_103c5d920(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c5d930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103c5d934; end: 103c5d9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c5d934(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x00010092450c(param_1,unaff_x20 + _DAT_112ffbfa0);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103c5d9a4; end: 103c5da03; -[ValdiWebLauncherServices init] */

void FUN_103c5d9a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiWebLauncherServices.ValdiWebLauncherServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c5d9d0);
  (*pcVar1)();
}



/* Entry: 103c5da04; end: 103c5da13; -[ValdiWebLauncherServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5da04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112ffbfa0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ffbfa0));
  return;
}



/* Entry: 103c5da14; end: 103c5dab7;  */

long FUN_103c5da14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = param_3;
  func_0x0001008f19b4(param_4,unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x68) = param_5;
  *(undefined8 *)(unaff_x20 + 0x70) = param_6;
  *(undefined8 *)(unaff_x20 + 0x78) = param_7;
  *(undefined8 *)(unaff_x20 + 0x80) = param_9;
  *(undefined8 *)(unaff_x20 + 0x10) = param_8;
  *(undefined8 *)(unaff_x20 + 0x18) = param_10;
  *(undefined8 *)(unaff_x20 + 0x20) = param_11;
  return unaff_x20;
}



/* Entry: 103c5dab8; end: 103c5db3b;  */

void FUN_103c5dab8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 103c5db3c; end: 103c5db4b;  */

undefined1  [16] FUN_103c5db3c(void)

{
  return ZEXT816(0x1106ef768);
}



/* Entry: 103c5db4c; end: 103c5dc37;  */

uint FUN_103c5db4c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103c5dc38; end: 103c5dc63;  */

void FUN_103c5dc38(void)

{
  func_0x0001000285a8(0x112ffc0e8,&UNK_10dc6a110);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103c5dc64; end: 103c5dc6b;  */

undefined8 FUN_103c5dc64(void)

{
  return 1;
}



/* Entry: 103c5dc6c; end: 103c5dcab;  */

void FUN_103c5dc6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ffc0e8;
  func_0x0001000285a8(0x112ffc0e8,&UNK_10dc6a110);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c5dcac; end: 103c5dcb3;  */

undefined8 FUN_103c5dcac(void)

{
  return 1;
}



/* Entry: 103c5dcb4; end: 103c5dd2f;  */

void FUN_103c5dcb4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c5dd30; end: 103c5dd33;  */

void FUN_103c5dd30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a120;
  func_0x000107c61520(&UNK_10dc6a120,&UNK_1106ef918);
  puRam0000000112ffc0f8 = puVar1;
  return;
}



/* Entry: 103c5dd34; end: 103c5dd9f;  */

void FUN_103c5dd34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a120;
  func_0x000107c61520(&UNK_10dc6a120,&UNK_1106ef918);
  puRam0000000112ffc0f8 = puVar1;
  return;
}



/* Entry: 103c5dda0; end: 103c5dda3;  */

void FUN_103c5dda0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a1c8;
  func_0x000107c61520(&UNK_10dc6a1c8,&UNK_1106ef878);
  puRam0000000112ffc110 = puVar1;
  return;
}



/* Entry: 103c5dda4; end: 103c5de0f;  */

void FUN_103c5dda4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a1c8;
  func_0x000107c61520(&UNK_10dc6a1c8,&UNK_1106ef878);
  puRam0000000112ffc110 = puVar1;
  return;
}



/* Entry: 103c5de10; end: 103c5de93;  */

void FUN_103c5de10(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103c5de94; end: 103c5de97;  */

void FUN_103c5de94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a238;
  func_0x000107c61520(&UNK_10dc6a238,&UNK_1106ef878);
  puRam0000000112ffc128 = puVar1;
  return;
}



/* Entry: 103c5de98; end: 103c5ded7;  */

void FUN_103c5de98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a238;
  func_0x000107c61520(&UNK_10dc6a238,&UNK_1106ef878);
  puRam0000000112ffc128 = puVar1;
  return;
}



/* Entry: 103c5ded8; end: 103c5dedb;  */

void FUN_103c5ded8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a1f0;
  func_0x000107c61520(&UNK_10dc6a1f0,&UNK_1106ef878);
  puRam0000000112ffc130 = puVar1;
  return;
}



/* Entry: 103c5dedc; end: 103c5df1b;  */

void FUN_103c5dedc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a1f0;
  func_0x000107c61520(&UNK_10dc6a1f0,&UNK_1106ef878);
  puRam0000000112ffc130 = puVar1;
  return;
}



/* Entry: 103c5df1c; end: 103c5e01f;  */

uint FUN_103c5df1c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103c5e020; end: 103c5e07f;  */

long FUN_103c5e020(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c5e080; end: 103c5e093;  */

/* WARNING: Possible PIC construction at 0x000103c5e0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5e0b0) */
/* WARNING: Removing unreachable block (ram,0x000103c5e0c4) */
/* WARNING: Removing unreachable block (ram,0x000103c5e0b8) */

void FUN_103c5e080(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Entry: 103c5e094; end: 103c5e0d3;  */

/* WARNING: Possible PIC construction at 0x000103c5e0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5e0b0) */
/* WARNING: Removing unreachable block (ram,0x000103c5e0c4) */
/* WARNING: Removing unreachable block (ram,0x000103c5e0b8) */

void FUN_103c5e094(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c5e0d4; end: 103c5e1a3;  */

undefined8 * FUN_103c5e0d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000103c5e04c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 103c5e1a4; end: 103c5e1eb;  */

undefined8 * FUN_103c5e1a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_103c5e094(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 103c5e1ec; end: 103c5e29f;  */

int FUN_103c5e1ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c5e2a0; end: 103c5e39b;  */

void FUN_103c5e2a0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long in_x7;
  long unaff_x22;
  long in_stack_00000000;
  
  *(long *)(unaff_x22 + 0x30) = in_x7;
  *(long *)(unaff_x22 + 0x38) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  uVar1 = *(long *)(*(long *)(in_stack_00000000 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  lVar2 = 0;
  func_0x000107c5fd18(0,in_stack_00000000);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  lVar2 = *(long *)(in_x7 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0;
  func_0x000107c60188(0,in_x7);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar2 = 0;
  func_0x000107c5fd40(0,in_x7);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c5e39c,0,0);
  return;
}



/* Entry: 103c5e39c; end: 103c5e40b;  */

void FUN_103c5e39c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c5fd44(0,*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c5e40c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 103c5e40c; end: 103c5e453;  */

void FUN_103c5e40c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c5e454,0,0);
  return;
}



/* Entry: 103c5e454; end: 103c5e5ef;  */

void FUN_103c5e454(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar10 = *(long *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = uVar6;
  (**(code **)(lVar10 + 0x30))(uVar6,1,uVar7);
  if ((int)uVar4 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5fd30(0,uVar4);
    func_0x000107c5fd2c();
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103c5e51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  (**(code **)(lVar10 + 0x20))(uVar9,uVar6,uVar7);
  (*pcVar2)(uVar4,uVar9);
  uVar6 = 0;
  func_0x000107c5fd30(0,uVar11);
  func_0x000107c5fd28(uVar3,uVar4,uVar6);
  (**(code **)(lVar1 + 8))(uVar3,uVar8);
  (**(code **)(lVar10 + 8))(uVar9,uVar7);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c5e40c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 103c5e5f0; end: 103c5e893;  */

void FUN_103c5e5f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 auStack_b8 [4];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  iVar2 = 2;
  auStack_b8[0] = param_6;
  auStack_b8[1] = param_7;
  func_0x000100029b9c(2,0x1a,4,0);
  if (iVar2 == 0) {
    lVar8 = 0;
    func_0x000107c5f2fc();
    lVar3 = lVar8;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    lVar7 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    puVar6 = (undefined8 *)(&stack0xffffffffffffff40 + lVar7);
    iVar2 = *(int *)(lVar3 + 0x14);
    lVar3 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((undefined1 *)((long)puVar6 + (long)iVar2),param_4,lVar3);
    *puVar6 = param_8;
    *(undefined8 *)((long)auStack_b8 + lVar7) = param_9;
    func_0x000107c5f6a8(param_1,puVar6,param_10,lVar8,param_11);
    FUN_103c5e894(puVar6);
  }
  else {
    uStack_88 = param_10;
    uStack_80 = param_11;
    lVar3 = 0;
    auStack_b8[2] = param_9;
    auStack_b8[3] = param_4;
    uStack_98 = param_8;
    uStack_90 = param_1;
    func_0x000107c5f330();
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    puVar9 = &stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar7 = param_3;
    if (param_3 == 0) {
      uStack_70 = 0;
      lStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x11);
      func_0x000107c6142c(lStack_68);
      uStack_70 = 0x7361742e77656956;
      lStack_68 = -0x13ffffffdfbfdf95;
      func_0x000107c5fb78(param_5,auStack_b8[0]);
      func_0x000107c5fb78(0x3a,0xe100000000000000);
      uStack_78 = auStack_b8[1];
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      param_2 = uStack_70;
      lVar7 = lStack_68;
    }
    uVar1 = auStack_b8[2];
    lVar4 = 0;
    func_0x000107c5fd0c();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    lVar4 = (long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(extraout_x12 + 0x10))(lVar4,auStack_b8[3]);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(uVar1);
    func_0x000107c5f32c(puVar9,param_2,lVar7,0,0,lVar4,uStack_98,uVar1);
    func_0x000107c5f6a8(uStack_90,puVar9,uStack_88,lVar3,uStack_80);
    func_0x000107c61574(uVar1);
    (**(code **)(lVar8 + 8))(puVar9,lVar3);
  }
  return;
}



/* Entry: 103c5e894; end: 103c5e8cf;  */

undefined8 FUN_103c5e894(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5f2fc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c5e8d0; end: 103c5ea57;  */

void FUN_103c5e8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [40];
  
  lVar2 = 0;
  uStack_b0 = param_6;
  uStack_a8 = param_9;
  uStack_a0 = param_8;
  uStack_98 = param_1;
  func_0x000107c5fd0c();
  lVar7 = *(long *)(lVar2 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar5 + 0xfU & 0xfffffffffffffff0);
  pcStack_b8 = "bLauncherServices";
  func_0x000101b6dd08(param_2,auStack_88);
  (**(code **)(lVar7 + 0x10))(auStack_c0 + lVar1,param_5,lVar2);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 0x58 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = lVar5 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1106efd10;
  func_0x000107c613fc(&UNK_1106efd10,uVar6 + 0x10,uVar4 | 7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  func_0x000101b6dd4c(auStack_88,puVar3 + 0x20);
  *(undefined8 *)(puVar3 + 0x48) = param_3;
  *(undefined8 *)(puVar3 + 0x50) = param_4;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar8,auStack_c0 + lVar1,lVar2);
  *(undefined8 *)(puVar3 + uVar6) = uStack_b0;
  *(undefined8 *)((long)(puVar3 + uVar6) + 8) = param_7;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(param_7);
  *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = uStack_a8;
  *(undefined8 *)((long)auStack_d0 + lVar1) = uStack_a0;
  FUN_103c5e5f0(uStack_98,0,0,param_5,0xd000000000000023,(ulong)pcStack_b8 | 0x8000000000000000,0x1e
                ,&UNK_10dc6a3d8,puVar3);
  return;
}



/* Entry: 103c5ea58; end: 103c5ea77;  */

void FUN_103c5ea58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c5ea78,0,0);
  return;
}



/* Entry: 103c5ea78; end: 103c5ec87;  */

void FUN_103c5ea78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar7 + 0x18);
  lVar4 = *(long *)(lVar7 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000a8868(lVar7,uVar2);
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  lVar7 = 0;
  func_0x000107c5fd0c();
  lVar11 = *(long *)(lVar7 + -8);
  (**(code **)(lVar11 + 0x10))(uVar6,uVar3,lVar7);
  (**(code **)(lVar11 + 0x38))(uVar6,0,1,lVar7);
  puVar8 = &UNK_1106efd38;
  func_0x000107c613fc(&UNK_1106efd38,0x30,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x28) = uVar15;
  *(undefined8 *)(puVar8 + 0x20) = uVar14;
  pcVar13 = *(code **)(lVar4 + 8);
  func_0x000107c6157c(uVar12);
  (*pcVar13)(uVar9,uVar1,uVar6,&UNK_10dc6a3f8,puVar8,PTR___sytN_11034f1b0 + 8,uVar2,lVar4);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  func_0x0001000abe54(uVar6);
  func_0x000107c615c0(uVar6);
  iVar5 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar5 != 0) {
    plVar10 = (long *)(ulong)*(uint *)(
                                      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_103c5ec88;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )();
    return;
  }
  pcVar13 = FUN_103c5f0cc;
  func_0x000107c615b4(FUN_103c5f0cc,uVar9);
  *(code **)(unaff_x22 + 0x50) = pcVar13;
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x103c5ece8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 103c5ec88; end: 103c5ed9b;  */

void FUN_103c5ec88(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103c5ed6c,0,0);
  return;
}



/* Entry: 103c5ed9c; end: 103c5ee4f;  */

void FUN_103c5ed9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5fd0c();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar6 + 0x58 & (uVar6 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  plVar5 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8));
  lVar4 = *plVar5;
  lVar3 = plVar5[1];
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c5ee50;
  plVar5[6] = lVar4;
  plVar5[7] = lVar3;
  plVar5[4] = lVar2;
  plVar5[5] = unaff_x20 + uVar6;
  plVar5[2] = unaff_x20 + 0x20;
  plVar5[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c5ea78,0,0);
  return;
}



/* Entry: 103c5ee50; end: 103c5ef1b;  */

void FUN_103c5ee50(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c5ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c5ef1c; end: 103c5ef83;  */

void FUN_103c5ef1c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c5ef84;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (plVar1,param_1,param_2,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 103c5ef84; end: 103c5efc3;  */

void FUN_103c5ef84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c5efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c5efc4; end: 103c5f03b;  */

void FUN_103c5efc4(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x103c5f0f0;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x103c5eee0;
                    /* WARNING: Could not recover jumptable at 0x000103c5eedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 103c5f03c; end: 103c5f08f;  */

void FUN_103c5f03c(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c5f090;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_103c5ef84;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar1,param_1);
  return;
}



/* Entry: 103c5f090; end: 103c5f0cb;  */

void FUN_103c5f090(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c5f0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c5f0cc; end: 103c5f0f3;  */

void FUN_103c5f0cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 103c5f0f4; end: 103c5f2fb;  */

long FUN_103c5f0f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c5f2fc; end: 103c5f3a7;  */

void FUN_103c5f2fc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c5f3a8; end: 103c5f3ab;  */

void FUN_103c5f3a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a4c0;
  func_0x000107c61520(&UNK_10dc6a4c0,&UNK_1106efed0);
  puRam0000000112ffc1d8 = puVar1;
  return;
}



/* Entry: 103c5f3ac; end: 103c5f3eb;  */

void FUN_103c5f3ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a4c0;
  func_0x000107c61520(&UNK_10dc6a4c0,&UNK_1106efed0);
  puRam0000000112ffc1d8 = puVar1;
  return;
}



/* Entry: 103c5f3ec; end: 103c5f5ef;  */

bool FUN_103c5f3ec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c5f5f0; end: 103c5f5ff;  */

undefined1  [16] FUN_103c5f5f0(void)

{
  return ZEXT816(0x1106effc0);
}



/* Entry: 103c5f600; end: 103c5f60f;  */

undefined1  [16] FUN_103c5f600(void)

{
  return ZEXT816(0x1106effe0);
}



/* Entry: 103c5f610; end: 103c5fa9f;  */

long * FUN_103c5f610(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar3 = (int)plVar4 != 1;
    if (bVar3) {
      lVar5 = *param_2;
      lVar1 = param_2[1];
      func_0x00010006c00c(lVar5,lVar1);
      *param_1 = lVar5;
      param_1[1] = lVar1;
    }
    else {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    }
    func_0x000107c6159c(param_1,param_3,!bVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c5faa0; end: 103c5fab3;  */

bool FUN_103c5faa0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c5fab4; end: 103c5fb5f;  */

void FUN_103c5fab4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c5fb60; end: 103c5fb63;  */

void FUN_103c5fb60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a600;
  func_0x000107c61520(&UNK_10dc6a600,&UNK_1106f00e8);
  puRam0000000112ffc288 = puVar1;
  return;
}



/* Entry: 103c5fb64; end: 103c5fba3;  */

void FUN_103c5fb64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a600;
  func_0x000107c61520(&UNK_10dc6a600,&UNK_1106f00e8);
  puRam0000000112ffc288 = puVar1;
  return;
}



/* Entry: 103c5fba4; end: 103c5fd07;  */

int FUN_103c5fba4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c5fc20;
        goto LAB_103c5fc04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c5fc04:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103c5fc20:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c5fd08; end: 103c5fe07;  */

void FUN_103c5fd08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar1,uVar3);
  func_0x000107c5fb58(auStack_78,uVar2,uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c5fe08; end: 103c5fe0b;  */

void FUN_103c5fe08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a6d0;
  func_0x000107c61520(&UNK_10dc6a6d0,&UNK_1106f0198);
  puRam0000000112ffc290 = puVar1;
  return;
}



/* Entry: 103c5fe0c; end: 103c5fe4b;  */

void FUN_103c5fe0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffc290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a6d0;
  func_0x000107c61520(&UNK_10dc6a6d0,&UNK_1106f0198);
  puRam0000000112ffc290 = puVar1;
  return;
}



/* Entry: 103c5fe4c; end: 103c5fedb;  */

/* WARNING: Possible PIC construction at 0x000103c5fe88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5fe8c) */

long FUN_103c5fe4c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 103c5fedc; end: 103c5ff6b;  */

long FUN_103c5fedc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c5ff6c; end: 103c5ffd7;  */

undefined8 * FUN_103c5ff6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}


