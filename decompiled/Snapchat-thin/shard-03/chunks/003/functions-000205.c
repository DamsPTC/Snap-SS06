/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102705630; end: 10270568f; -[_TtC23FullMapScopeGraphBridge38SCFullMapScopedServicesSaberEntryPoint init] */

void FUN_102705630(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FullMapScopeGraphBridge.SCFullMapScopedServicesSaberEntryPoint",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10270565c);
  (*pcVar1)();
}



/* Entry: 102705690; end: 1027056c7; -[_TtC23FullMapScopeGraphBridge38SCFullMapScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705690(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb9ea8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb9ea0));
  return;
}



/* Entry: 1027056c8; end: 1027056cb;  */

void FUN_1027056c8(void)

{
  return;
}



/* Entry: 1027056cc; end: 1027056eb;  */

void FUN_1027056cc(void)

{
  FUN_10270553c();
  return;
}



/* Entry: 1027056ec; end: 10270570b;  */

void FUN_1027056ec(void)

{
  func_0x000107c61168(&PTR_PTR_11285c6a0);
  return;
}



/* Entry: 10270570c; end: 1027057db;  */

undefined8 FUN_10270570c(void)

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
  
  func_0x000107c61428(0x112eb9ed8,&uStack_40,0x20,0);
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
    FUN_1027057dc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1027057dc; end: 1027057fb;  */

void FUN_1027057dc(void)

{
  func_0x000107c61168(&PTR_PTR_11285c768);
  return;
}



/* Entry: 1027057fc; end: 10270581f;  */

void FUN_1027057fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11053e760;
  func_0x0001000285a8(0x112eb9ee0,&UNK_10dad1808);
  func_0x000107c613fc(&UNK_11053e760,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027058a4,puVar1);
  return;
}



/* Entry: 102705820; end: 1027058a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705820(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1027057dc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112eb9ee8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112eb9ef0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027058a4; end: 1027058ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027058a4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1027057dc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112eb9ee8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112eb9ef0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1027058ac; end: 10270590f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027058ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9ee8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9ef0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102705910; end: 10270596f; -[_TtC23FullMapScopeGraphBridge31FullMapScopeGraphBridgeServices init] */

void FUN_102705910(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FullMapScopeGraphBridge.FullMapScopeGraphBridgeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10270593c);
  (*pcVar1)();
}



/* Entry: 102705970; end: 102705ab3; -[_TtC23FullMapScopeGraphBridge31FullMapScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010270598c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102705990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb9ef0));
  return;
}



/* Entry: 102705ab4; end: 102705adf;  */

undefined8 FUN_102705ab4(void)

{
  return 0x1b;
}



/* Entry: 102705ae0; end: 102705b5f;  */

void FUN_102705ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102705b60; end: 102705c57;  */

void FUN_102705b60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112eb9ed8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eb9ed8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11053e860;
  func_0x000107c613fc(&UNK_11053e860,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102705d58;
  func_0x00010058fa64(0x102705d58,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102705c58; end: 102705c83;  */

void FUN_102705c58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102705c84; end: 102705c8b;  */

void FUN_102705c84(undefined8 *param_1)

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
  func_0x000107c61428(0x112eb9ed8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eb9ed8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11053e860;
  func_0x000107c613fc(&UNK_11053e860,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102705d58;
  func_0x00010058fa64(0x102705d58,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102705c8c; end: 102705ce7;  */

void FUN_102705c8c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eb9ed8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112eb9ed8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102705ce8; end: 102705d5f;  */

undefined ** FUN_102705ce8(void)

{
  return &PTR_DAT_113066b38;
}



/* Entry: 102705d60; end: 102705da7; -[SCFullMapScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb9f48;
  func_0x000107c61428(param_1 + _DAT_112eb9f48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102705da8; end: 102705dff; -[SCFullMapScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb9f48;
  func_0x000107c61428(param_1 + _DAT_112eb9f48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102705e00; end: 102705e47; -[SCFullMapScopeGraphBridgeSaberEntryPoint sCMapViewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb9f50;
  func_0x000107c61428(param_1 + _DAT_112eb9f50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102705e48; end: 102705e53; -[SCFullMapScopeGraphBridgeSaberEntryPoint setSCMapViewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb9f50;
  func_0x000107c61428(param_1 + _DAT_112eb9f50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102705e54; end: 102705e9b; -[SCFullMapScopeGraphBridgeSaberEntryPoint fullMapScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705e54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb9f58;
  func_0x000107c61428(param_1 + _DAT_112eb9f58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102705e9c; end: 102705ea7; -[SCFullMapScopeGraphBridgeSaberEntryPoint setFullMapScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb9f58;
  func_0x000107c61428(param_1 + _DAT_112eb9f58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102705ea8; end: 102705f07;  */

void FUN_102705ea8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102705f08; end: 1027060c3;  */

/* WARNING: Possible PIC construction at 0x000102706020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102706044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102706054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102706098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102706058) */
/* WARNING: Removing unreachable block (ram,0x000102706048) */
/* WARNING: Removing unreachable block (ram,0x000102706024) */
/* WARNING: Removing unreachable block (ram,0x00010270609c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705f08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c51008();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c43b90();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102705368();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10270570c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027060c4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112eb9d98) = lVar5;
      *(long *)(lVar3 + _DAT_112eb9da0) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1027060c4; end: 1027060eb; -[SCFullMapScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1027060c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102705f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027060ec; end: 10270612f; -[SCFullMapScopeGraphBridgeSaberEntryPoint end] */

void FUN_1027060ec(undefined8 param_1)

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



/* Entry: 102706130; end: 102706333;  */

void FUN_102706130(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0f48850)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010f0b77b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f48830)) &&
           (func_0x000107c605b8(0xd000000000000026,0x800000010f0b77d0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "FullMapScopeGraphBridge/SCFullMapScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x46,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102706334);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54d08();
        goto LAB_1027061bc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c585b0();
  }
LAB_1027061bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102706334; end: 1027063df; -[SCFullMapScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102706334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102706130(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027063e0; end: 102706457; -[SCFullMapScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027063e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eb9f48,0);
  *(undefined8 *)(param_1 + _DAT_112eb9f50) = 0;
  *(undefined8 *)(param_1 + _DAT_112eb9f58) = 0;
  *(undefined8 *)(param_1 + _DAT_112eb9f60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102706458; end: 10270648b;  */

void FUN_102706458(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10270648c; end: 1027064e3; -[SCFullMapScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027064b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027064bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270648c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eb9f48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb9f50));
  return;
}



/* Entry: 1027064e4; end: 102706503;  */

void FUN_1027064e4(void)

{
  func_0x000107c61168(&PTR_PTR_11285c830);
  return;
}



/* Entry: 102706504; end: 10270650f; -[SCSCMapViewScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb9f90;
  func_0x000107c61428(param_1 + _DAT_112eb9f90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102706510; end: 10270651b; -[SCSCMapViewScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb9f90;
  func_0x000107c61428(param_1 + _DAT_112eb9f90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10270651c; end: 102706527; -[SCSCMapViewScopeServicesSaberServiceProvider fullMapScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270651c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb9f98;
  func_0x000107c61428(param_1 + _DAT_112eb9f98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102706528; end: 10270656b;  */

void FUN_102706528(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10270656c; end: 102706577; -[SCSCMapViewScopeServicesSaberServiceProvider setFullMapScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270656c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb9f98;
  func_0x000107c61428(param_1 + _DAT_112eb9f98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102706578; end: 1027065cb;  */

void FUN_102706578(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027065cc; end: 1027067df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027065cc(void)

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
    func_0x000107c43b8c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102705418();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112eb9ef0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eb9fa0);
      *(long *)(unaff_x20 + _DAT_112eb9fa0) = lVar4;
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
                      "FullMapScopeGraphBridge/SCSCMapViewScopeServicesSaberServiceProvider.swift",
                      0x4a,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027066f8);
  (*pcVar1)();
}



/* Entry: 1027067e0; end: 102706813; -[SCSCMapViewScopeServicesSaberServiceProvider provide] */

void FUN_1027067e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027065cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102706814; end: 102706847; -[SCSCMapViewScopeServicesSaberServiceProvider __safeProvide] */

void FUN_102706814(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001027066f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102706848; end: 10270688b; -[SCSCMapViewScopeServicesSaberServiceProvider end] */

void FUN_102706848(undefined8 param_1)

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



/* Entry: 10270688c; end: 102706a23;  */

void FUN_10270688c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f48760)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b78a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FullMapScopeGraphBridge/SCSCMapViewScopeServicesSaberServiceProvider.swift"
                            ,0x4a,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102706a24);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54d04();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102706a24; end: 102706acf; -[SCSCMapViewScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102706a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10270688c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102706ad0; end: 102706b43; -[SCSCMapViewScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706ad0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eb9f90,0);
  func_0x000107c61614(param_1 + _DAT_112eb9f98,0);
  *(undefined8 *)(param_1 + _DAT_112eb9fa0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102706b44; end: 102706b77;  */

void FUN_102706b44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102706b78; end: 102706bbf; -[SCSCMapViewScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706b78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eb9f90);
  func_0x000107c61610(param_1 + _DAT_112eb9f98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb9fa0));
  return;
}



/* Entry: 102706bc0; end: 102706bdf;  */

void FUN_102706bc0(void)

{
  func_0x000107c61168(&PTR_PTR_112eb9fe8);
  return;
}



/* Entry: 102706be0; end: 102706c27; -[SCSCFullMapScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba050;
  func_0x000107c61428(param_1 + _DAT_112eba050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102706c28; end: 102706c7f; -[SCSCFullMapScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba050;
  func_0x000107c61428(param_1 + _DAT_112eba050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102706c80; end: 102706d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706c80(undefined8 param_1,long param_2)

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
    FUN_1027056ec();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eb9ea0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102706d58);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eb9ea8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eba058);
    *(long **)(unaff_x20 + _DAT_112eba058) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102706d58; end: 102706d7f; -[SCSCFullMapScopedServicesSaberEntryPoint begin] */

void FUN_102706d58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102706c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102706d80; end: 102706ef7;  */

/* WARNING: Possible PIC construction at 0x000102706de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102706e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102706dec) */
/* WARNING: Removing unreachable block (ram,0x000102706e84) */
/* WARNING: Removing unreachable block (ram,0x000102706e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102706d80(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eba058);
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



/* Entry: 102706ef8; end: 102706eff;  */

void FUN_102706ef8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102706f00; end: 102706f33; -[SCSCFullMapScopedServicesSaberEntryPoint end] */

void FUN_102706f00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102706d80();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102706f34; end: 102707053;  */

void FUN_102706f34(long param_1,long param_2,long param_3)

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
                        "FullMapScopeGraphBridge/SCSCFullMapScopedServicesSaberEntryPoint.swift",
                        0x46,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102707054);
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



/* Entry: 102707054; end: 1027070ff; -[SCSCFullMapScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102707054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102706f34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102707100; end: 10270715f; -[SCSCFullMapScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102707100(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eba050,0);
  *(undefined8 *)(param_1 + _DAT_112eba058) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102707160; end: 102707193;  */

void FUN_102707160(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102707194; end: 1027071cb; -[SCSCFullMapScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102707194(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eba050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba058));
  return;
}



/* Entry: 1027071cc; end: 10270722f;  */

void FUN_1027071cc(void)

{
  func_0x000107c61168(&PTR_PTR_11285c948);
  return;
}



/* Entry: 102707230; end: 1027072a3; -[SCMapAppTriggerManager init] */

long FUN_102707230(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000102707210();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aadd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  FUN_102707660(lVar1);
  uVar3 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar3,0x38,7);
  return lVar1;
}



/* Entry: 1027072a4; end: 1027072d7;  */

void FUN_1027072a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027072d8; end: 10270730f; -[SCMapAppTriggerManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027072d8(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eba128));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112eba130))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eba130));
  return;
}



/* Entry: 102707310; end: 1027074a3;  */

/* WARNING: Possible PIC construction at 0x000102707380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102707384) */
/* WARNING: Removing unreachable block (ram,0x000102707394) */
/* WARNING: Removing unreachable block (ram,0x000102707410) */
/* WARNING: Removing unreachable block (ram,0x0001027073a4) */
/* WARNING: Removing unreachable block (ram,0x00010270746c) */
/* WARNING: Removing unreachable block (ram,0x00010270744c) */
/* WARNING: Removing unreachable block (ram,0x0001027073d8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102707310(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112eba130);
  func_0x0001000a8868(plVar1,plVar1[3]);
  uVar2 = *(undefined8 *)(*plVar1 + 0x10);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000105f4d85c(uVar2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027074a4; end: 102707517; -[SCMapAppTriggerManager handle:parameters:] */

void FUN_1027074a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102707310(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102707518; end: 102707527; -[SCMapAppTriggerManager triggerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102707518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eba128));
  return;
}



/* Entry: 102707528; end: 10270757b;  */

uint FUN_102707528(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar4 = param_2;
  func_0x000107c615f0(param_2);
  uVar3 = (uint)uVar4;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  return uVar3 & 1;
}



/* Entry: 10270757c; end: 10270765f; -[SCMapAppTriggerManager triggerObservableFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270757c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c614ec();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112eba128);
  puVar1 = &UNK_11053e968;
  func_0x000107c613fc(&UNK_11053e968,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uStack_40 = 0x102707818;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102707528;
  puStack_48 = &UNK_11053e980;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c43494(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102707660; end: 102707767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ** FUN_102707660(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long **pplVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined8 *puVar6;
  long *aplStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  long *aplStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar5 = *param_1;
  ppuStack_48 = &PTR_DAT_11053e938;
  aplStack_68[0] = param_1;
  lStack_50 = lVar5;
  FUN_1027077ac();
  plVar2 = param_1;
  func_0x000107c610f8();
  func_0x0001000c6518(aplStack_68,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)aplStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  lVar1 = _DAT_112eba128;
  aplStack_a0[2] = (long *)*puVar6;
  ppuStack_70 = &PTR_DAT_11053e938;
  puVar3 = PTR_PTR_1126ae568;
  lStack_78 = lVar5;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)((long)plVar2 + lVar1) = puVar3;
  FUN_1027077cc(aplStack_a0 + 2,(long)plVar2 + _DAT_112eba130);
  pplVar4 = aplStack_a0;
  aplStack_a0[0] = plVar2;
  aplStack_a0[1] = param_1;
  func_0x000107c61154(pplVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(aplStack_a0 + 2);
  func_0x0001000834e4(aplStack_68);
  return pplVar4;
}



/* Entry: 102707768; end: 10270778f;  */

bool FUN_102707768(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c614f0();
  return param_1 == lVar1;
}



/* Entry: 102707790; end: 1027077ab;  */

void FUN_102707790(long param_1,long param_2)

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



/* Entry: 1027077ac; end: 1027077cb;  */

void FUN_1027077ac(void)

{
  func_0x000107c61168(&PTR_PTR_11285ca08);
  return;
}



/* Entry: 1027077cc; end: 10270780f;  */

long FUN_1027077cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102707810; end: 10270781b;  */

void FUN_102707810(long param_1,long param_2)

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



/* Entry: 10270781c; end: 102707b6b;  */

void FUN_10270781c(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x112eba168;
  func_0x0001000285a8(0x112eba168,&UNK_10dad1aa0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x4a;
  *(undefined8 *)(lVar1 + 0x10) = 0x25;
  uVar2 = 0;
  func_0x000103b39f64();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined ***)(lVar1 + 0x28) = &PTR_DAT_11053e9a8;
  uVar2 = 0;
  func_0x000103b3a198();
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined ***)(lVar1 + 0x38) = &PTR_DAT_11053e9c8;
  uVar2 = 0;
  func_0x000103b3a354();
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined ***)(lVar1 + 0x48) = &PTR_DAT_11053e9e8;
  uVar2 = 0;
  func_0x000103b3a4a0();
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  *(undefined ***)(lVar1 + 0x58) = &PTR_DAT_11053ea08;
  uVar2 = 0;
  func_0x000103b3a5ec();
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11053ea28;
  uVar2 = 0;
  func_0x000103b3a884();
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  *(undefined ***)(lVar1 + 0x78) = &PTR_DAT_11053ea48;
  uVar2 = 0;
  func_0x000103b3aa24();
  *(undefined8 *)(lVar1 + 0x80) = uVar2;
  *(undefined ***)(lVar1 + 0x88) = &PTR_DAT_11053ea68;
  uVar2 = 0;
  func_0x000103b3b164();
  *(undefined8 *)(lVar1 + 0x90) = uVar2;
  *(undefined ***)(lVar1 + 0x98) = &PTR_DAT_11053ea88;
  uVar2 = 0;
  func_0x000103b3b1f4();
  *(undefined8 *)(lVar1 + 0xa0) = uVar2;
  *(undefined ***)(lVar1 + 0xa8) = &PTR_DAT_11053eaa8;
  uVar2 = 0;
  func_0x000103b3b284();
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11053eac8;
  uVar2 = 0;
  func_0x000103b3b314();
  *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  *(undefined ***)(lVar1 + 200) = &PTR_DAT_11053eae8;
  uVar2 = 0;
  func_0x000103b3b4b4();
  *(undefined8 *)(lVar1 + 0xd0) = uVar2;
  *(undefined ***)(lVar1 + 0xd8) = &PTR_DAT_11053eb08;
  uVar2 = 0;
  func_0x000103b3b80c();
  *(undefined8 *)(lVar1 + 0xe0) = uVar2;
  *(undefined ***)(lVar1 + 0xe8) = &PTR_DAT_11053eb28;
  uVar2 = 0;
  func_0x000103b3b99c();
  *(undefined8 *)(lVar1 + 0xf0) = uVar2;
  *(undefined ***)(lVar1 + 0xf8) = &PTR_DAT_11053eb48;
  uVar2 = 0;
  func_0x000103b3bb3c();
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11053eb68;
  uVar2 = 0;
  func_0x000103b3bcdc();
  *(undefined8 *)(lVar1 + 0x110) = uVar2;
  *(undefined ***)(lVar1 + 0x118) = &PTR_DAT_11053eb88;
  uVar2 = 0;
  func_0x000103b3be7c();
  *(undefined8 *)(lVar1 + 0x120) = uVar2;
  *(undefined ***)(lVar1 + 0x128) = &PTR_DAT_11053eba8;
  uVar2 = 0;
  func_0x000103b3c0e0();
  *(undefined8 *)(lVar1 + 0x130) = uVar2;
  *(undefined ***)(lVar1 + 0x138) = &PTR_DAT_11053ebc8;
  uVar2 = 0;
  func_0x000103b3c438();
  *(undefined8 *)(lVar1 + 0x140) = uVar2;
  *(undefined ***)(lVar1 + 0x148) = &PTR_DAT_11053ebe8;
  uVar2 = 0;
  func_0x000103b3c4c8();
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11053ec08;
  uVar2 = 0;
  func_0x000103b3c7ec();
  *(undefined8 *)(lVar1 + 0x160) = uVar2;
  *(undefined ***)(lVar1 + 0x168) = &PTR_DAT_11053ec28;
  uVar2 = 0;
  func_0x000103b3c91c();
  *(undefined8 *)(lVar1 + 0x170) = uVar2;
  *(undefined ***)(lVar1 + 0x178) = &PTR_DAT_11053ec48;
  uVar2 = 0;
  func_0x000103b3cb10();
  *(undefined8 *)(lVar1 + 0x180) = uVar2;
  *(undefined ***)(lVar1 + 0x188) = &PTR_DAT_11053ec68;
  uVar2 = 0;
  func_0x000103b3cd90();
  *(undefined8 *)(lVar1 + 400) = uVar2;
  *(undefined ***)(lVar1 + 0x198) = &PTR_DAT_11053ec88;
  uVar2 = 0;
  func_0x000103b3cecc();
  *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
  *(undefined ***)(lVar1 + 0x1a8) = &PTR_DAT_11053eca8;
  uVar2 = 0;
  func_0x000103b3d7b4();
  *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
  *(undefined ***)(lVar1 + 0x1b8) = &PTR_DAT_11053ece8;
  uVar2 = 0;
  func_0x000103b3d5c0();
  *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
  *(undefined ***)(lVar1 + 0x1c8) = &PTR_DAT_11053ecc8;
  uVar2 = 0;
  func_0x000103b3d844();
  *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
  *(undefined ***)(lVar1 + 0x1d8) = &PTR_DAT_11053ed08;
  uVar2 = 0;
  func_0x000103b3d9e4();
  *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
  *(undefined ***)(lVar1 + 0x1e8) = &PTR_DAT_11053ed28;
  uVar2 = 0;
  func_0x000103b3dbd8();
  *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
  *(undefined ***)(lVar1 + 0x1f8) = &PTR_DAT_11053ed48;
  uVar2 = 0;
  func_0x000103b3dd78();
  *(undefined8 *)(lVar1 + 0x200) = uVar2;
  *(undefined ***)(lVar1 + 0x208) = &PTR_DAT_11053ed68;
  uVar2 = 0;
  func_0x000103b3de08();
  *(undefined8 *)(lVar1 + 0x210) = uVar2;
  *(undefined ***)(lVar1 + 0x218) = &PTR_DAT_11053ed88;
  uVar2 = 0;
  func_0x000103b3dff8();
  *(undefined8 *)(lVar1 + 0x220) = uVar2;
  *(undefined ***)(lVar1 + 0x228) = &PTR_DAT_11053edc8;
  uVar2 = 0;
  func_0x000103b3e1a8();
  *(undefined8 *)(lVar1 + 0x230) = uVar2;
  *(undefined ***)(lVar1 + 0x238) = &PTR_DAT_11053ee28;
  uVar2 = 0;
  func_0x000103b3e088();
  *(undefined8 *)(lVar1 + 0x240) = uVar2;
  *(undefined ***)(lVar1 + 0x248) = &PTR_DAT_11053ede8;
  uVar2 = 0;
  func_0x000103b3e118();
  *(undefined8 *)(lVar1 + 0x250) = uVar2;
  *(undefined ***)(lVar1 + 600) = &PTR_DAT_11053ee08;
  uVar2 = 0;
  func_0x000103b3de98();
  *(undefined8 *)(lVar1 + 0x260) = uVar2;
  *(undefined ***)(lVar1 + 0x268) = &PTR_DAT_11053eda8;
  lRam0000000113804770 = lVar1;
  return;
}



/* Entry: 102707b6c; end: 1027086eb;  */

undefined * FUN_102707b6c(void)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (lRam0000000112eba160 != -1) {
    func_0x000107c61568(0x112eba160,FUN_10270781c);
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10270e9bc();
  lVar4 = lRam0000000113804770;
  uVar13 = *(ulong *)(lRam0000000113804770 + 0x10);
  if (uVar13 != 0) {
    uVar14 = 0;
    lVar1 = lRam0000000113804770 + 0x20;
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102707d2c);
        (*pcVar5)();
      }
      puVar3 = (ulong *)(lVar1 + uVar14 * 0x10);
      uVar16 = puVar3[1];
      uVar15 = *puVar3;
      uVar7 = uVar15;
      uVar10 = uVar16;
      (**(code **)(uVar16 + 8))();
      puVar8 = puVar6;
      func_0x000107c61558();
      uVar9 = uVar7;
      uVar11 = uVar10;
      func_0x000100029284();
      uVar12 = (ulong)~(uint)uVar11 & 1;
      lVar2 = *(long *)(puVar6 + 0x10) + uVar12;
      if (SCARRY8(*(long *)(puVar6 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102707d30);
        (*pcVar5)();
      }
      if (*(long *)(puVar6 + 0x18) < lVar2) {
        FUN_102708b68(lVar2,puVar8);
        uVar9 = uVar7;
        uVar12 = uVar10;
        func_0x000100029284();
        if (((uint)uVar11 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102707d5c);
          (*pcVar5)();
        }
LAB_102707c94:
        if ((uVar11 & 1) != 0) goto LAB_102707bc8;
LAB_102707c9c:
        *(ulong *)(puVar6 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar6 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar3 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar9 * 0x10);
        *puVar3 = uVar7;
        puVar3[1] = uVar10;
        puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar9 * 0x10);
        puVar3[1] = uVar16;
        *puVar3 = uVar15;
        if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102707d34);
          (*pcVar5)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar8 & 1) != 0) goto LAB_102707c94;
        FUN_102708a00();
        if ((uVar11 & 1) == 0) goto LAB_102707c9c;
LAB_102707bc8:
        puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar9 * 0x10);
        puVar3[1] = uVar16;
        *puVar3 = uVar15;
        func_0x000107c6142c(uVar10);
      }
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
  }
  return puVar6;
}



/* Entry: 1027086ec; end: 102708843;  */

void FUN_1027086ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x0001027084f8();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5dc3c();
    if ((int)lVar1 == 6) {
      func_0x000102707d5c(auStack_40);
      func_0x000107c61170(param_1);
      if (lStack_28 == 0) {
        func_0x00010006e7f4(auStack_40);
      }
      else {
        uVar2 = 0x112daafe8;
        func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
        func_0x000107c6147c(auStack_48,auStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
      }
    }
    else {
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102708844; end: 1027089ff;  */

ulong FUN_102708844(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102708928);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10270892c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102708e08(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102708a00);
  (*pcVar2)();
}



/* Entry: 102708a00; end: 102708b67;  */

void FUN_102708a00(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x0001000285a8(0x112eba188,&UNK_10dad1aa8);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
      func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
    if (uVar7 == 0) goto LAB_102708adc;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar3 = puVar2[1];
        puVar4 = (undefined8 *)(*(long *)(lVar11 + 0x38) + lVar10);
        uVar14 = puVar4[1];
        uVar13 = *puVar4;
        puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar10);
        *puVar4 = *puVar2;
        puVar4[1] = uVar3;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[1] = uVar14;
        *puVar2 = uVar13;
        func_0x000107c61434();
        if (uVar7 != 0) break;
LAB_102708adc:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102708b68);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_102708b40;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_102708b40:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 102708b68; end: 102708e07;  */

void FUN_102708b68(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112eba188;
  func_0x0001000285a8(0x112eba188,&UNK_10dad1aa8);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_102708dd4:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102708e04);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_102708dd4;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    lVar10 = (LZCOUNT(uVar9) | lVar18 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + lVar10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar10);
    uVar20 = puVar2[1];
    uVar19 = *puVar2;
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102708e08);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
    puVar2[1] = uVar20;
    *puVar2 = uVar19;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 102708e08; end: 102708e47;  */

void FUN_102708e08(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102708e48; end: 102709247;  */

undefined4 FUN_102708e48(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x79726f7473;
  if ((param_1 == 0x79726f7473 && param_2 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x79726f7473,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar1 = 1;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x5f64657375636f66) && (param_2 == -0x12ffff868d908b8d)) ||
       (uVar3 = uVar2, func_0x000107c605b8(0x5f64657375636f66,0xed000079726f7473,param_1,param_2,0),
       (uVar3 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 2;
    }
    else {
      if ((param_1 != 0x6e6f6369) || (param_2 != -0x1c00000000000000)) {
        uVar3 = 0x6e6f6369;
        func_0x000107c605b8(0x6e6f6369,0xe400000000000000,param_1,param_2,0);
        if ((uVar3 & 1) == 0) {
          if (((param_1 != 0x5f64657375636f66) || (param_2 != -0x13ffffff91909c97)) &&
             (func_0x000107c605b8(0x5f64657375636f66,0xec0000006e6f6369,param_1,param_2,0),
             (uVar2 & 1) == 0)) {
            uVar2 = 0x726f6365645f6433;
            if ((param_1 == 0x726f6365645f6433) && (param_2 == -0x12ffff9190968b9f)) {
              func_0x000107c6142c(0xed00006e6f697461);
              return 5;
            }
            func_0x000107c605b8(0x726f6365645f6433,0xed00006e6f697461,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 5;
            }
            return 0;
          }
          func_0x000107c6142c(param_2);
          return 4;
        }
      }
      func_0x000107c6142c(param_2);
      uVar1 = 3;
    }
  }
  return uVar1;
}



/* Entry: 102709248; end: 102709267;  */

undefined1  [16] FUN_102709248(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c620;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Entry: 102709268; end: 102709f6b;  */

long FUN_102709268(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  byte **ppbVar22;
  long lVar23;
  uint uVar24;
  byte *pbVar25;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  lVar2 = 0x64695f6563616c70;
  puVar12 = (undefined8 *)0xe800000000000000;
  func_0x0001027084f8(0x64695f6563616c70,0xe800000000000000);
  if (lVar2 == 0) goto LAB_1027095c4;
  lVar3 = lVar2;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) goto LAB_1027095c4;
  lVar2 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5fb5c(lVar2,puVar12);
  if (0 < lVar3) {
    lVar3 = 0x707365725f736461;
    puVar13 = (undefined8 *)0xec00000065736e6f;
    func_0x0001027084f8(0x707365725f736461,0xec00000065736e6f);
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c5c1d4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
        lVar5 = lVar3;
        func_0x000107c5fb5c(lVar3,puVar13);
        if (lVar5 < 1) {
          func_0x000107c6142c(puVar12);
          func_0x000107c61170(param_1);
          puVar12 = puVar13;
          goto LAB_1027095e4;
        }
        pbVar4 = (byte *)0x64695f656c6974;
        uVar14 = 0xe700000000000000;
        func_0x0001027084f8();
        if (pbVar4 != (byte *)0x0) {
          pbVar25 = pbVar4;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(pbVar4);
          if (pbVar25 != (byte *)0x0) {
            pbVar4 = pbVar25;
            func_0x000107c5faec();
            func_0x000107c61170(pbVar25);
            pbVar25 = pbVar4;
            func_0x000107c5fb5c(pbVar4,uVar14);
            if ((long)pbVar25 < 1) {
              func_0x000107c6142c(puVar13);
              func_0x000107c61170(param_1);
              func_0x000107c6142c(uVar14);
              goto LAB_1027095e4;
            }
            uVar15 = 0x800000010f01c5a0;
            lVar5 = -0x2fffffffffffffeb;
            func_0x0001027084f8(0xd000000000000015,0x800000010f01c5a0);
            if (lVar5 == 0) {
LAB_102709620:
              func_0x000107c6142c(uVar14);
              func_0x000107c61170(param_1);
            }
            else {
              lVar6 = lVar5;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              func_0x000107c61170(lVar5);
              if (lVar6 == 0) goto LAB_102709620;
              lVar5 = lVar6;
              func_0x000107c5faec();
              func_0x000107c61170(lVar6);
              lVar6 = lVar5;
              func_0x000107c5fb5c(lVar5,uVar15);
              if (0 < lVar6) {
                lVar6 = 0x6f6e5f64615f7369;
                func_0x0001027084f8(0x6f6e5f64615f7369,0xed00006c6c69665f);
                if (lVar6 == 0) {
LAB_102709680:
                  func_0x000107c61170(param_1);
                  func_0x000107c6142c(uVar15);
                }
                else {
                  lVar7 = lVar6;
                  func_0x000107c5dc3c();
                  if ((int)lVar7 != 1) {
                    func_0x000107c61170(lVar6);
                    goto LAB_102709680;
                  }
                  lVar7 = lVar6;
                  func_0x000107c3ebcc();
                  func_0x000107c61170(lVar6);
                  puVar8 = (undefined8 *)0x697461746f6e6e61;
                  FUN_1027086ec(0x697461746f6e6e61,0xeb00000000736e6f);
                  if (puVar8 == (undefined8 *)0x0) goto LAB_102709680;
                  puVar9 = puVar8;
                  func_0x000101158fcc();
                  func_0x000107c6142c(puVar8);
                  if (puVar9 == (undefined8 *)0x0) goto LAB_102709680;
                  uStack_80 = 0x2f;
                  uStack_78 = 0xe100000000000000;
                  pbStack_70 = pbVar4;
                  uStack_68 = uVar14;
                  func_0x000100e8b654();
                  puVar10 = &uStack_80;
                  func_0x000107c601dc(puVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar8,
                                      puVar8);
                  func_0x000107c6142c(uVar14);
                  if (puVar10[2] != 3) {
                    func_0x000107c6142c(puVar12);
                    func_0x000107c6142c(puVar13);
                    func_0x000107c6142c(uVar15);
                    func_0x000107c6142c(puVar9);
                    puVar12 = puVar10;
                    goto LAB_1027095c0;
                  }
                  pbVar4 = (byte *)puVar10[4];
                  pbVar18 = (byte *)puVar10[5];
                  pbVar16 = (byte *)((ulong)pbVar4 & 0xffffffffffff);
                  pbVar20 = (byte *)((ulong)pbVar18 >> 0x38 & 0xf);
                  pbVar25 = pbVar16;
                  if (((ulong)pbVar18 & 0x2000000000000000) != 0) {
                    pbVar25 = pbVar20;
                  }
                  if (pbVar25 == (byte *)0x0) goto LAB_102709b20;
                  if (((ulong)pbVar18 >> 0x3c & 1) == 0) {
                    if (((ulong)pbVar18 >> 0x3d & 1) != 0) {
                      pbStack_70 = pbVar4;
                      uStack_68 = (ulong)pbVar18 & 0xffffffffffffff;
                      uVar24 = (uint)pbVar4 & 0xff;
                      if (uVar24 == 0x2b) {
                        if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f00);
                          (*pcVar1)();
                        }
                        pbVar20 = pbVar20 + -1;
                        if (pbVar20 == (byte *)0x0) goto LAB_10270987c;
                        pbVar25 = (byte *)0x0;
                        pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
                        do {
                          if (((9 < *pbVar4 - 0x30) ||
                              (lVar6 = (long)pbVar25 * 10,
                              SUB168(SEXT816((long)pbVar25) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                             (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                             pbVar25 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)))
                          goto LAB_10270987c;
                          uVar24 = 0;
                          pbVar20 = pbVar20 + -1;
                          pbVar4 = pbVar4 + 1;
                        } while (pbVar20 != (byte *)0x0);
                      }
                      else if (uVar24 == 0x2d) {
                        if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x102709ef8);
                          (*pcVar1)();
                        }
                        pbVar20 = pbVar20 + -1;
                        if (pbVar20 == (byte *)0x0) {
LAB_10270987c:
                          uVar24 = 1;
                          pbVar25 = (byte *)0x0;
                        }
                        else {
                          pbVar25 = (byte *)0x0;
                          pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
                          do {
                            if (((9 < *pbVar4 - 0x30) ||
                                (lVar6 = (long)pbVar25 * 10,
                                SUB168(SEXT816((long)pbVar25) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                               (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                               pbVar25 = (byte *)(lVar6 - uVar14), SBORROW8(lVar6,uVar14)))
                            goto LAB_10270987c;
                            uVar24 = 0;
                            pbVar20 = pbVar20 + -1;
                            pbVar4 = pbVar4 + 1;
                          } while (pbVar20 != (byte *)0x0);
                        }
                      }
                      else {
                        if (pbVar20 == (byte *)0x0) goto LAB_10270987c;
                        pbVar25 = (byte *)0x0;
                        ppbVar22 = &pbStack_70;
                        do {
                          if (((9 < *(byte *)ppbVar22 - 0x30) ||
                              (lVar6 = (long)pbVar25 * 10,
                              SUB168(SEXT816((long)pbVar25) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                             (uVar14 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30),
                             pbVar25 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)))
                          goto LAB_10270987c;
                          uVar24 = 0;
                          pbVar20 = pbVar20 + -1;
                          ppbVar22 = (byte **)((long)ppbVar22 + 1);
                        } while (pbVar20 != (byte *)0x0);
                      }
                      goto LAB_102709884;
                    }
                    if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
                      func_0x000107c60358();
                    }
                    else {
                      pbVar4 = (byte *)(((ulong)pbVar18 & 0xfffffffffffffff) + 0x20);
                      pbVar18 = pbVar16;
                    }
                    if (*pbVar4 != 0x2b) {
                      if (*pbVar4 != 0x2d) {
                        if (pbVar18 != (byte *)0x0) {
                          pbVar25 = (byte *)0x0;
                          pbVar20 = pbVar4;
                          while (pbVar20 != (byte *)0x0) {
                            if (((9 < *pbVar4 - 0x30) ||
                                (lVar6 = (long)pbVar25 * 10,
                                SUB168(SEXT816((long)pbVar25) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                               (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                               pbVar25 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)))
                            goto LAB_102709b20;
                            pbVar18 = pbVar18 + -1;
                            pbVar4 = pbVar4 + 1;
                            pbVar20 = pbVar18;
                          }
                          goto LAB_102709890;
                        }
                        goto LAB_102709b20;
                      }
                      pbVar20 = pbVar18 + -1;
                      if ((long)pbVar18 < 1) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102709ef4);
                        (*pcVar1)();
                      }
                      if (pbVar20 == (byte *)0x0) goto LAB_102709b20;
                      pbVar25 = (byte *)0x0;
                      do {
                        pbVar4 = pbVar4 + 1;
                        if (((9 < *pbVar4 - 0x30) ||
                            (lVar6 = (long)pbVar25 * 10,
                            SUB168(SEXT816((long)pbVar25) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                           (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                           pbVar25 = (byte *)(lVar6 - uVar14), SBORROW8(lVar6,uVar14)))
                        goto LAB_102709b20;
                        pbVar20 = pbVar20 + -1;
                      } while (pbVar20 != (byte *)0x0);
                      goto LAB_102709890;
                    }
                    pbVar20 = pbVar18 + -1;
                    if ((long)pbVar18 < 1) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102709efc);
                      (*pcVar1)();
                    }
                    if (pbVar20 != (byte *)0x0) {
                      pbVar25 = (byte *)0x0;
                      do {
                        pbVar4 = pbVar4 + 1;
                        if (((9 < *pbVar4 - 0x30) ||
                            (lVar6 = (long)pbVar25 * 10,
                            SUB168(SEXT816((long)pbVar25) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                           (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                           pbVar25 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)))
                        goto LAB_102709b20;
                        pbVar20 = pbVar20 + -1;
                      } while (pbVar20 != (byte *)0x0);
                      goto LAB_102709890;
                    }
LAB_102709b20:
                    func_0x000107c61170(param_1);
                    func_0x000107c6142c(puVar9);
                  }
                  else {
                    func_0x000107c61434(pbVar18);
                    pbVar25 = pbVar18;
                    func_0x000100edba6c(pbVar4,pbVar18,10);
                    uVar24 = (uint)pbVar25;
                    func_0x000107c6142c(pbVar18);
                    pbVar25 = pbVar4;
LAB_102709884:
                    if ((uVar24 & 0xff) == 1) goto LAB_102709b20;
LAB_102709890:
                    if ((ulong)puVar10[2] < 2) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102709ec4);
                      (*pcVar1)();
                    }
                    pbVar4 = (byte *)puVar10[6];
                    uVar19 = puVar10[7];
                    uVar17 = (ulong)pbVar4 & 0xffffffffffff;
                    uVar21 = uVar19 >> 0x38 & 0xf;
                    uVar14 = uVar17;
                    if ((uVar19 & 0x2000000000000000) != 0) {
                      uVar14 = uVar21;
                    }
                    if (uVar14 == 0) goto LAB_102709b20;
                    if ((uVar19 >> 0x3c & 1) == 0) {
                      if ((uVar19 >> 0x3d & 1) != 0) {
                        pbStack_70 = pbVar4;
                        uStack_68 = uVar19 & 0xffffffffffffff;
                        uVar24 = (uint)pbVar4 & 0xff;
                        if (uVar24 == 0x2b) {
                          if (uVar21 == 0) {
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f4c);
                            (*pcVar1)();
                          }
                          lVar6 = uVar21 - 1;
                          if (lVar6 == 0) goto LAB_102709b0c;
                          pbStack_a0 = (byte *)0x0;
                          pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
                          do {
                            if (((9 < *pbVar4 - 0x30) ||
                                (lVar23 = (long)pbStack_a0 * 10,
                                SUB168(SEXT816((long)pbStack_a0) * SEXT816(10),8) != lVar23 >> 0x3f)
                                ) || (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                     pbStack_a0 = (byte *)(lVar23 + uVar14), SCARRY8(lVar23,uVar14))
                               ) goto LAB_102709b0c;
                            uVar24 = 0;
                            lVar6 = lVar6 + -1;
                            pbVar4 = pbVar4 + 1;
                          } while (lVar6 != 0);
                        }
                        else if (uVar24 == 0x2d) {
                          if (uVar21 == 0) {
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f44);
                            (*pcVar1)();
                          }
                          lVar6 = uVar21 - 1;
                          if (lVar6 == 0) {
LAB_102709b0c:
                            pbStack_a0 = (byte *)0x0;
                            uVar24 = 1;
                          }
                          else {
                            pbStack_a0 = (byte *)0x0;
                            pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
                            do {
                              if (((9 < *pbVar4 - 0x30) ||
                                  (lVar23 = (long)pbStack_a0 * 10,
                                  SUB168(SEXT816((long)pbStack_a0) * SEXT816(10),8) !=
                                  lVar23 >> 0x3f)) ||
                                 (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                 pbStack_a0 = (byte *)(lVar23 - uVar14), SBORROW8(lVar23,uVar14)))
                              goto LAB_102709b0c;
                              uVar24 = 0;
                              lVar6 = lVar6 + -1;
                              pbVar4 = pbVar4 + 1;
                            } while (lVar6 != 0);
                          }
                        }
                        else {
                          if (uVar21 == 0) goto LAB_102709b0c;
                          pbStack_a0 = (byte *)0x0;
                          ppbVar22 = &pbStack_70;
                          do {
                            if (((9 < *(byte *)ppbVar22 - 0x30) ||
                                (lVar6 = (long)pbStack_a0 * 10,
                                SUB168(SEXT816((long)pbStack_a0) * SEXT816(10),8) != lVar6 >> 0x3f))
                               || (uVar14 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30),
                                  pbStack_a0 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)))
                            goto LAB_102709b0c;
                            uVar24 = 0;
                            uVar21 = uVar21 - 1;
                            ppbVar22 = (byte **)((long)ppbVar22 + 1);
                          } while (uVar21 != 0);
                        }
                        goto LAB_102709b14;
                      }
                      if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
                        func_0x000107c60358();
                      }
                      else {
                        pbVar4 = (byte *)((uVar19 & 0xfffffffffffffff) + 0x20);
                        uVar19 = uVar17;
                      }
                      if (*pbVar4 == 0x2b) {
                        lVar6 = uVar19 - 1;
                        if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f48);
                          (*pcVar1)();
                        }
                        if (lVar6 != 0) {
                          pbStack_a0 = (byte *)0x0;
                          do {
                            pbVar4 = pbVar4 + 1;
                            if (((9 < *pbVar4 - 0x30) ||
                                (lVar23 = (long)pbStack_a0 * 10,
                                SUB168(SEXT816((long)pbStack_a0) * SEXT816(10),8) != lVar23 >> 0x3f)
                                ) || (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                     pbStack_a0 = (byte *)(lVar23 + uVar14), SCARRY8(lVar23,uVar14))
                               ) goto LAB_102709b20;
                            lVar6 = lVar6 + -1;
                          } while (lVar6 != 0);
                          goto LAB_102709b44;
                        }
                        goto LAB_102709b20;
                      }
                      if (*pbVar4 != 0x2d) {
                        if (uVar19 != 0) {
                          if (pbVar4 == (byte *)0x0) {
                            pbStack_a0 = (byte *)0x0;
                          }
                          else {
                            pbStack_a0 = (byte *)0x0;
                            do {
                              if (((9 < *pbVar4 - 0x30) ||
                                  (lVar6 = (long)pbStack_a0 * 10,
                                  SUB168(SEXT816((long)pbStack_a0) * SEXT816(10),8) != lVar6 >> 0x3f
                                  )) || (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                        pbStack_a0 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)
                                        )) goto LAB_102709b20;
                              uVar19 = uVar19 - 1;
                              pbVar4 = pbVar4 + 1;
                            } while (uVar19 != 0);
                          }
                          goto LAB_102709b44;
                        }
                        goto LAB_102709b20;
                      }
                      lVar6 = uVar19 - 1;
                      if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f40);
                        (*pcVar1)();
                      }
                      if (lVar6 == 0) goto LAB_102709b20;
                      pbStack_a0 = (byte *)0x0;
                      do {
                        pbVar4 = pbVar4 + 1;
                        if (((9 < *pbVar4 - 0x30) ||
                            (lVar23 = (long)pbStack_a0 * 10,
                            SUB168(SEXT816((long)pbStack_a0) * SEXT816(10),8) != lVar23 >> 0x3f)) ||
                           (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                           pbStack_a0 = (byte *)(lVar23 - uVar14), SBORROW8(lVar23,uVar14)))
                        goto LAB_102709b20;
                        lVar6 = lVar6 + -1;
                      } while (lVar6 != 0);
                    }
                    else {
                      func_0x000107c61434(uVar19);
                      uVar14 = uVar19;
                      func_0x000100edba6c(pbVar4,uVar19,10);
                      uVar24 = (uint)uVar14;
                      func_0x000107c6142c(uVar19);
                      pbStack_a0 = pbVar4;
LAB_102709b14:
                      if ((uVar24 & 0xff) == 1) goto LAB_102709b20;
                    }
LAB_102709b44:
                    if ((ulong)puVar10[2] < 3) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f14);
                      (*pcVar1)();
                    }
                    pbVar4 = (byte *)puVar10[8];
                    uVar19 = puVar10[9];
                    func_0x000107c61434(uVar19);
                    func_0x000107c6142c(puVar10);
                    uVar21 = (ulong)pbVar4 & 0xffffffffffff;
                    uVar17 = uVar19 >> 0x38 & 0xf;
                    uVar14 = uVar21;
                    if ((uVar19 & 0x2000000000000000) != 0) {
                      uVar14 = uVar17;
                    }
                    if (uVar14 == 0) {
                      func_0x000107c6142c(uVar19);
                    }
                    else {
                      if ((uVar19 >> 0x3c & 1) == 0) {
                        if ((uVar19 >> 0x3d & 1) == 0) {
                          if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
                            uVar21 = uVar19;
                            func_0x000107c60358();
                          }
                          else {
                            pbVar4 = (byte *)((uVar19 & 0xfffffffffffffff) + 0x20);
                          }
                          if (*pbVar4 == 0x2b) {
                            if ((long)uVar21 < 1) {
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f68);
                              (*pcVar1)();
                            }
                            lVar6 = uVar21 - 1;
                            if (lVar6 == 0) goto LAB_102709de4;
                            pbStack_a8 = (byte *)0x0;
                            do {
                              pbVar4 = pbVar4 + 1;
                              if (((9 < *pbVar4 - 0x30) ||
                                  (lVar23 = (long)pbStack_a8 * 10,
                                  SUB168(SEXT816((long)pbStack_a8) * SEXT816(10),8) !=
                                  lVar23 >> 0x3f)) ||
                                 (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                 pbStack_a8 = (byte *)(lVar23 + uVar14), SCARRY8(lVar23,uVar14)))
                              goto LAB_102709de4;
                              uVar24 = 0;
                              lVar6 = lVar6 + -1;
                            } while (lVar6 != 0);
                          }
                          else if (*pbVar4 == 0x2d) {
                            if ((long)uVar21 < 1) {
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f60);
                              (*pcVar1)();
                            }
                            lVar6 = uVar21 - 1;
                            if (lVar6 == 0) {
LAB_102709de4:
                              pbStack_a8 = (byte *)0x0;
                              uVar24 = 1;
                            }
                            else {
                              pbStack_a8 = (byte *)0x0;
                              do {
                                pbVar4 = pbVar4 + 1;
                                if (((9 < *pbVar4 - 0x30) ||
                                    (lVar23 = (long)pbStack_a8 * 10,
                                    SUB168(SEXT816((long)pbStack_a8) * SEXT816(10),8) !=
                                    lVar23 >> 0x3f)) ||
                                   (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                   pbStack_a8 = (byte *)(lVar23 - uVar14), SBORROW8(lVar23,uVar14)))
                                goto LAB_102709de4;
                                uVar24 = 0;
                                lVar6 = lVar6 + -1;
                              } while (lVar6 != 0);
                            }
                          }
                          else {
                            if (uVar21 == 0) goto LAB_102709de4;
                            if (pbVar4 == (byte *)0x0) {
                              pbStack_a8 = (byte *)0x0;
                              uVar24 = 0;
                            }
                            else {
                              pbStack_a8 = (byte *)0x0;
                              do {
                                if (((9 < *pbVar4 - 0x30) ||
                                    (lVar6 = (long)pbStack_a8 * 10,
                                    SUB168(SEXT816((long)pbStack_a8) * SEXT816(10),8) !=
                                    lVar6 >> 0x3f)) ||
                                   (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                   pbStack_a8 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)))
                                goto LAB_102709de4;
                                uVar24 = 0;
                                uVar21 = uVar21 - 1;
                                pbVar4 = pbVar4 + 1;
                              } while (uVar21 != 0);
                            }
                          }
                        }
                        else {
                          pbStack_70 = pbVar4;
                          uStack_68 = uVar19 & 0xffffffffffffff;
                          uVar24 = (uint)pbVar4 & 0xff;
                          if (uVar24 == 0x2b) {
                            if (uVar17 == 0) {
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f6c);
                              (*pcVar1)();
                            }
                            lVar6 = uVar17 - 1;
                            if (lVar6 == 0) goto LAB_102709de4;
                            pbStack_a8 = (byte *)0x0;
                            pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
                            do {
                              if (((9 < *pbVar4 - 0x30) ||
                                  (lVar23 = (long)pbStack_a8 * 10,
                                  SUB168(SEXT816((long)pbStack_a8) * SEXT816(10),8) !=
                                  lVar23 >> 0x3f)) ||
                                 (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                 pbStack_a8 = (byte *)(lVar23 + uVar14), SCARRY8(lVar23,uVar14)))
                              goto LAB_102709de4;
                              uVar24 = 0;
                              lVar6 = lVar6 + -1;
                              pbVar4 = pbVar4 + 1;
                            } while (lVar6 != 0);
                          }
                          else if (uVar24 == 0x2d) {
                            if (uVar17 == 0) {
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x102709f64);
                              (*pcVar1)();
                            }
                            lVar6 = uVar17 - 1;
                            if (lVar6 == 0) goto LAB_102709de4;
                            pbStack_a8 = (byte *)0x0;
                            pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
                            do {
                              if (((9 < *pbVar4 - 0x30) ||
                                  (lVar23 = (long)pbStack_a8 * 10,
                                  SUB168(SEXT816((long)pbStack_a8) * SEXT816(10),8) !=
                                  lVar23 >> 0x3f)) ||
                                 (uVar14 = (ulong)(byte)(*pbVar4 - 0x30),
                                 pbStack_a8 = (byte *)(lVar23 - uVar14), SBORROW8(lVar23,uVar14)))
                              goto LAB_102709de4;
                              uVar24 = 0;
                              lVar6 = lVar6 + -1;
                              pbVar4 = pbVar4 + 1;
                            } while (lVar6 != 0);
                          }
                          else {
                            if (uVar17 == 0) goto LAB_102709de4;
                            pbStack_a8 = (byte *)0x0;
                            ppbVar22 = &pbStack_70;
                            do {
                              if (((9 < *(byte *)ppbVar22 - 0x30) ||
                                  (lVar6 = (long)pbStack_a8 * 10,
                                  SUB168(SEXT816((long)pbStack_a8) * SEXT816(10),8) != lVar6 >> 0x3f
                                  )) || (uVar14 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30),
                                        pbStack_a8 = (byte *)(lVar6 + uVar14), SCARRY8(lVar6,uVar14)
                                        )) goto LAB_102709de4;
                              uVar24 = 0;
                              uVar17 = uVar17 - 1;
                              ppbVar22 = (byte **)((long)ppbVar22 + 1);
                            } while (uVar17 != 0);
                          }
                        }
                      }
                      else {
                        uVar14 = uVar19;
                        func_0x000100edba6c(pbVar4,uVar19,10);
                        uVar24 = (uint)uVar14;
                        pbStack_a8 = pbVar4;
                      }
                      func_0x000107c6142c(uVar19);
                      if ((uVar24 & 0xff) != 1) {
                        FUN_102708e48(lVar5,uVar15);
                        uVar11 = 0;
                        func_0x000103b39f64(0);
                        func_0x000107c610f8();
                        func_0x000103b39dd4(uVar11,lVar2,puVar12,lVar3,puVar13,pbStack_a0,pbStack_a8
                                            ,pbVar25,lVar5,(char)lVar7);
                        func_0x000107c61170(param_1);
                        return lVar2;
                      }
                    }
                    func_0x000107c61170(param_1);
                    puVar10 = puVar9;
                  }
                  func_0x000107c6142c(puVar10);
                  uVar14 = uVar15;
                }
                func_0x000107c6142c(uVar14);
                func_0x000107c6142c(puVar13);
                goto LAB_1027095e4;
              }
              func_0x000107c6142c(uVar14);
              func_0x000107c61170(param_1);
              func_0x000107c6142c(uVar15);
            }
            func_0x000107c6142c(puVar12);
            puVar12 = puVar13;
            goto LAB_1027095e4;
          }
        }
        func_0x000107c6142c(puVar13);
        goto LAB_1027095d8;
      }
    }
LAB_1027095c0:
    func_0x000107c6142c(puVar12);
LAB_1027095c4:
    func_0x000107c61170(param_1);
    return 0;
  }
LAB_1027095d8:
  func_0x000107c61170(param_1);
LAB_1027095e4:
  func_0x000107c6142c(puVar12);
  return 0;
}



/* Entry: 102709f6c; end: 102709f8b;  */

undefined1  [16] FUN_102709f6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c670;
  auVar1._0_8_ = 0xd00000000000001e;
  return auVar1;
}



/* Entry: 102709f8c; end: 10270a333;  */

long FUN_102709f8c(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar2 = 0x64695f6563616c70;
  uVar7 = 0xe800000000000000;
  func_0x0001027084f8(0x64695f6563616c70,0xe800000000000000);
  if (lVar2 == 0) goto LAB_10270a200;
  lVar3 = lVar2;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) goto LAB_10270a200;
  lVar2 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5fb5c(lVar2,uVar7);
  if (0 < lVar3) {
    lVar3 = 0x6d617473656d6974;
    func_0x0001027084f8(0x6d617473656d6974,0xe900000000000070);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5dc3c();
      if ((int)lVar4 == 5) {
        func_0x000107c4223c(lVar3);
        func_0x000107c61170(lVar3);
        lVar3 = 0x6e6f73616572;
        uVar8 = 0xe600000000000000;
        func_0x0001027084f8(0x6e6f73616572,0xe600000000000000);
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar4 != 0) {
            lVar3 = lVar4;
            func_0x000107c5faec();
            func_0x000107c61170(lVar4);
            lVar4 = lVar3;
            func_0x000107c5fb5c(lVar3,uVar8);
            if (lVar4 < 1) {
              func_0x000107c6142c(uVar7);
              func_0x000107c61170(param_2);
              uVar7 = uVar8;
              goto LAB_10270a1f0;
            }
            uVar9 = 0x800000010f01c5a0;
            lVar4 = -0x2fffffffffffffeb;
            func_0x0001027084f8(0xd000000000000015,0x800000010f01c5a0);
            if (lVar4 != 0) {
              lVar5 = lVar4;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              func_0x000107c61170(lVar4);
              if (lVar5 != 0) {
                lVar4 = lVar5;
                func_0x000107c5faec();
                func_0x000107c61170(lVar5);
                lVar5 = lVar4;
                func_0x000107c5fb5c(lVar4,uVar9);
                if (lVar5 < 1) {
                  func_0x000107c6142c(uVar8);
                  func_0x000107c61170(param_2);
                  func_0x000107c6142c(uVar9);
                }
                else {
                  lVar5 = 0x6f6e5f64615f7369;
                  func_0x0001027084f8(0x6f6e5f64615f7369,0xed00006c6c69665f);
                  if (lVar5 != 0) {
                    lVar6 = lVar5;
                    func_0x000107c5dc3c();
                    if ((int)lVar6 == 1) {
                      lVar6 = lVar5;
                      func_0x000107c3ebcc(lVar5);
                      func_0x000107c61170(lVar5);
                      func_0x000102709004(lVar3,uVar8);
                      lVar5 = -0x2fffffffffffffea;
                      FUN_1027086ec(0xd000000000000016,0x800000010f01c5c0);
                      if (lVar5 == 0) {
                        lVar10 = 0;
                      }
                      else {
                        lVar10 = lVar5;
                        func_0x000101158fcc();
                        func_0x000107c6142c(lVar5);
                      }
                      func_0x000102708e48(lVar4,uVar9);
                      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10270a32c);
                        (*pcVar1)();
                      }
                      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10270a330);
                        (*pcVar1)();
                      }
                      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10270a334);
                        (*pcVar1)();
                      }
                      uVar8 = 0;
                      func_0x000103b3a198(0);
                      func_0x000107c610f8();
                      func_0x000103b3a040(lVar2,uVar7,(long)param_1,lVar3,lVar10,lVar4,lVar6,uVar8);
                      func_0x000107c61170(param_2);
                      return lVar2;
                    }
                    func_0x000107c61170(lVar5);
                  }
                  func_0x000107c61170(param_2);
                  func_0x000107c6142c(uVar9);
                  func_0x000107c6142c(uVar8);
                }
                goto LAB_10270a1f0;
              }
            }
            func_0x000107c6142c(uVar8);
            goto LAB_10270a1e4;
          }
        }
        func_0x000107c6142c(uVar7);
LAB_10270a200:
        func_0x000107c61170(param_2);
        return 0;
      }
      func_0x000107c61170(lVar3);
    }
  }
LAB_10270a1e4:
  func_0x000107c61170(param_2);
LAB_10270a1f0:
  func_0x000107c6142c(uVar7);
  return 0;
}



/* Entry: 10270a334; end: 10270a353;  */

undefined1  [16] FUN_10270a334(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c6b0;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Entry: 10270a354; end: 10270a5ff;  */

long FUN_10270a354(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = 0x64695f6563616c70;
  uVar6 = 0xe800000000000000;
  func_0x0001027084f8(0x64695f6563616c70,0xe800000000000000);
  if (lVar2 == 0) {
LAB_10270a598:
    func_0x000107c61170(param_2);
    return 0;
  }
  lVar3 = lVar2;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) goto LAB_10270a598;
  lVar2 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5fb5c(lVar2,uVar6);
  if (0 < lVar3) {
    lVar3 = 0x6d617473656d6974;
    func_0x0001027084f8(0x6d617473656d6974,0xe900000000000070);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5dc3c();
      if ((int)lVar4 == 5) {
        func_0x000107c4223c(lVar3);
        func_0x000107c61170(lVar3);
        uVar7 = 0x800000010f01c5a0;
        lVar3 = -0x2fffffffffffffeb;
        func_0x0001027084f8(0xd000000000000015,0x800000010f01c5a0);
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar4 != 0) {
            lVar3 = lVar4;
            func_0x000107c5faec();
            func_0x000107c61170(lVar4);
            lVar4 = lVar3;
            func_0x000107c5fb5c(lVar3,uVar7);
            if (lVar4 < 1) {
              func_0x000107c6142c(uVar6);
              func_0x000107c61170(param_2);
              uVar6 = uVar7;
            }
            else {
              lVar4 = 0x6f6e5f64615f7369;
              func_0x0001027084f8(0x6f6e5f64615f7369,0xed00006c6c69665f);
              if (lVar4 != 0) {
                lVar5 = lVar4;
                func_0x000107c5dc3c();
                if ((int)lVar5 == 1) {
                  lVar5 = lVar4;
                  func_0x000107c3ebcc(lVar4);
                  func_0x000107c61170(lVar4);
                  FUN_102708e48(lVar3,uVar7);
                  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10270a5f8);
                    (*pcVar1)();
                  }
                  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10270a5fc);
                    (*pcVar1)();
                  }
                  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10270a600);
                    (*pcVar1)();
                  }
                  uVar7 = 0;
                  func_0x000103b3a354(0);
                  func_0x000107c610f8();
                  func_0x000103b3a24c(lVar2,uVar6,(long)param_1,lVar3,lVar5,uVar7);
                  func_0x000107c61170(param_2);
                  return lVar2;
                }
                func_0x000107c61170(lVar4);
              }
              func_0x000107c61170(param_2);
              func_0x000107c6142c(uVar7);
            }
            goto LAB_10270a588;
          }
        }
        func_0x000107c6142c(uVar6);
        goto LAB_10270a598;
      }
      func_0x000107c61170(lVar3);
    }
  }
  func_0x000107c61170(param_2);
LAB_10270a588:
  func_0x000107c6142c(uVar6);
  return 0;
}



/* Entry: 10270a600; end: 10270a61b;  */

undefined1  [16] FUN_10270a600(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c6d0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 10270a61c; end: 10270a707;  */

long FUN_10270a61c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  lVar1 = 0x64695f6563616c70;
  uVar3 = 0xe800000000000000;
  func_0x0001027084f8(0x64695f6563616c70,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (lVar2 < 1) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar3);
        return 0;
      }
      func_0x000107c610f8();
      func_0x000103b3a3d0(lVar1,uVar3,unaff_x20);
      func_0x000107c61170(param_1);
      return lVar1;
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 10270a708; end: 10270a723;  */

undefined1  [16] FUN_10270a708(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c710;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 10270a724; end: 10270a80f;  */

long FUN_10270a724(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  lVar1 = 0x64695f6563616c70;
  uVar3 = 0xe800000000000000;
  func_0x0001027084f8(0x64695f6563616c70,0xe800000000000000);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar3);
      if (lVar2 < 1) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar3);
        return 0;
      }
      func_0x000107c610f8();
      func_0x000103b3a51c(lVar1,uVar3,unaff_x20);
      func_0x000107c61170(param_1);
      return lVar1;
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 10270a810; end: 10270a83b; +[SCAddSongTrigger actionName] */

void FUN_10270a810(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01c740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270a83c; end: 10270aabf;  */

undefined8 FUN_10270a83c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  
  uVar5 = 0x800000010f01c760;
  lVar1 = -0x2fffffffffffffef;
  func_0x0001027084f8(0xd000000000000011,0x800000010f01c760);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5fb5c(lVar1,uVar5);
      if (lVar2 < 1) {
LAB_10270aa40:
        func_0x000107c61170(param_1);
LAB_10270aa4c:
        func_0x000107c6142c(uVar5);
        goto LAB_10270aa50;
      }
      lVar2 = 0x63727369;
      uVar6 = 0xe400000000000000;
      func_0x0001027084f8(0x63727369,0xe400000000000000);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5c1d4();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar3 != 0) {
          lVar2 = lVar3;
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c5fb5c(lVar2,uVar6);
          if (0 < lVar3) {
            lVar3 = -0x2fffffffffffffeb;
            uVar7 = 0x800000010f01c780;
            func_0x0001027084f8(0xd000000000000015,0x800000010f01c780);
            if (lVar3 != 0) {
              lVar4 = lVar3;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              func_0x000107c61170(lVar3);
              if (lVar4 != 0) {
                lVar3 = lVar4;
                func_0x000107c5faec();
                func_0x000107c61170(lVar4);
                lVar4 = lVar3;
                func_0x000107c5fb5c(lVar3,uVar7);
                if (0 < lVar4) {
                  func_0x000107c5fadc(lVar1,uVar5);
                  func_0x000107c6142c(uVar5);
                  func_0x000107c5fadc(lVar2,uVar6);
                  func_0x000107c6142c(uVar6);
                  func_0x000107c5fadc(lVar3,uVar7);
                  func_0x000107c6142c(uVar7);
                  func_0x000107c481b8();
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(param_1);
                  return unaff_x20;
                }
                func_0x000107c6142c(uVar6);
                func_0x000107c61170(param_1);
                func_0x000107c6142c(uVar7);
                goto LAB_10270aa4c;
              }
            }
            func_0x000107c6142c(uVar6);
            goto LAB_10270aa40;
          }
          func_0x000107c6142c(uVar5);
          func_0x000107c61170(param_1);
          uVar5 = uVar6;
          goto LAB_10270aa4c;
        }
      }
      func_0x000107c6142c(uVar5);
    }
  }
  func_0x000107c61170(param_1);
LAB_10270aa50:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10270aac0; end: 10270aae7; -[SCAddSongTrigger initWithParameters:] */

void FUN_10270aac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10270a83c();
  return;
}


