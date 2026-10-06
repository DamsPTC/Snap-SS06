/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103161d08; end: 103161d27;  */

void FUN_103161d08(void)

{
  FUN_103161b78();
  return;
}



/* Entry: 103161d28; end: 103161d47;  */

void FUN_103161d28(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb850);
  return;
}



/* Entry: 103161d48; end: 103161e17;  */

undefined8 FUN_103161d48(void)

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
  
  func_0x000107c61428(0x112f45d78,&uStack_40,0x20,0);
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
    FUN_103161e18();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103161e18; end: 103161e37;  */

void FUN_103161e18(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb918);
  return;
}



/* Entry: 103161e38; end: 103161e5b;  */

void FUN_103161e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106152c8;
  func_0x0001000285a8(0x112f45d80,&UNK_10db925f8);
  func_0x000107c613fc(&UNK_1106152c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103161ee0,puVar1);
  return;
}



/* Entry: 103161e5c; end: 103161edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161e5c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_103161e18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f45d88) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f45d90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103161ee0; end: 103161ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161ee0(undefined8 *param_1)

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
  FUN_103161e18();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f45d88) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f45d90) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 103161ee8; end: 103161f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161ee8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45d88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f45d90) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103161f4c; end: 103161fab; -[_TtC27ModularCallScopeGraphBridge35ModularCallScopeGraphBridgeServices init] */

void FUN_103161f4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularCallScopeGraphBridge.ModularCallScopeGraphBridgeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103161f78);
  (*pcVar1)();
}



/* Entry: 103161fac; end: 103162023; -[_TtC27ModularCallScopeGraphBridge35ModularCallScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103161fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103161fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103161fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45d88));
  return;
}



/* Entry: 103162024; end: 10316202f;  */

void FUN_103162024(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103162030,param_1);
  return;
}



/* Entry: 103162030; end: 1031620ef;  */

void FUN_103162030(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1031620f0; end: 1031620fb;  */

void FUN_1031620f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103162420,param_1);
  return;
}



/* Entry: 1031620fc; end: 103162153;  */

void FUN_1031620fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 103162154; end: 10316217f;  */

undefined8 FUN_103162154(void)

{
  return 0x1b;
}



/* Entry: 103162180; end: 1031621ff;  */

void FUN_103162180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 103162200; end: 1031622f7;  */

void FUN_103162200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f45d78,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f45d78,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110615408;
  func_0x000107c613fc(&UNK_110615408,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103162418;
  func_0x00010058fa64(0x103162418,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031622f8; end: 103162323;  */

void FUN_1031622f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103162324; end: 10316232b;  */

void FUN_103162324(undefined8 *param_1)

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
  func_0x000107c61428(0x112f45d78,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f45d78,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110615408;
  func_0x000107c613fc(&UNK_110615408,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103162418;
  func_0x00010058fa64(0x103162418,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10316232c; end: 103162387;  */

void FUN_10316232c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f45d78,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f45d78,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103162388; end: 10316242b;  */

undefined ** FUN_103162388(void)

{
  return &PTR_DAT_1130666a0;
}



/* Entry: 10316242c; end: 103162473; -[SCModularCallScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316242c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45de8;
  func_0x000107c61428(param_1 + _DAT_112f45de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103162474; end: 1031624cb; -[SCModularCallScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45de8;
  func_0x000107c61428(param_1 + _DAT_112f45de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031624cc; end: 103162513; -[SCModularCallScopeGraphBridgeSaberEntryPoint sCDWebExplainerTrayScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031624cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45df0;
  func_0x000107c61428(param_1 + _DAT_112f45df0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103162514; end: 10316251f; -[SCModularCallScopeGraphBridgeSaberEntryPoint setSCDWebExplainerTrayScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45df0;
  func_0x000107c61428(param_1 + _DAT_112f45df0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103162520; end: 103162567; -[SCModularCallScopeGraphBridgeSaberEntryPoint sCGroupExternalShareScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162520(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45df8;
  func_0x000107c61428(param_1 + _DAT_112f45df8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103162568; end: 103162573; -[SCModularCallScopeGraphBridgeSaberEntryPoint setSCGroupExternalShareScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162568(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45df8;
  func_0x000107c61428(param_1 + _DAT_112f45df8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103162574; end: 1031625bb; -[SCModularCallScopeGraphBridgeSaberEntryPoint modularCallScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162574(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45e00;
  func_0x000107c61428(param_1 + _DAT_112f45e00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031625bc; end: 1031625c7; -[SCModularCallScopeGraphBridgeSaberEntryPoint setModularCallScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031625bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45e00;
  func_0x000107c61428(param_1 + _DAT_112f45e00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031625c8; end: 103162627;  */

void FUN_1031625c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103162628; end: 10316285f;  */

/* WARNING: Possible PIC construction at 0x000103162794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031627a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031627c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031627d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031627ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103162834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031627d4) */
/* WARNING: Removing unreachable block (ram,0x0001031627c4) */
/* WARNING: Removing unreachable block (ram,0x0001031627a8) */
/* WARNING: Removing unreachable block (ram,0x000103162798) */
/* WARNING: Removing unreachable block (ram,0x000103162838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162628(void)

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
  func_0x000107c50cf4();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50dec();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4d0d4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_103161ad0();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_103161d48();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103162860);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112f45d08) = lVar5;
        *(long *)(lVar4 + _DAT_112f45d10) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103162860; end: 103162887; -[SCModularCallScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103162860(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103162628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103162888; end: 1031628cb; -[SCModularCallScopeGraphBridgeSaberEntryPoint end] */

void FUN_103162888(undefined8 param_1)

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



/* Entry: 1031628cc; end: 103162b3b;  */

void FUN_1031628cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f89b80)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f076480,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0ed5f70)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010f12a090,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58394();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0ed5f40)) &&
             (func_0x000107c605b8(0xd00000000000002a,0x800000010f12a0c0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ModularCallScopeGraphBridge/SCModularCallScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x4e,2,0x39,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103162b3c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c567ac();
        }
        goto LAB_103162958;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5829c();
  }
LAB_103162958:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103162b3c; end: 103162be7; -[SCModularCallScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103162b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031628cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103162be8; end: 103162c6b; -[SCModularCallScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162be8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f45de8,0);
  *(undefined8 *)(param_1 + _DAT_112f45df0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f45df8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f45e00) = 0;
  *(undefined8 *)(param_1 + _DAT_112f45e08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103162c6c; end: 103162c9f;  */

void FUN_103162c6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103162ca0; end: 103162d07; -[SCModularCallScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103162ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103162cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103162cd0) */
/* WARNING: Removing unreachable block (ram,0x000103162cf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162ca0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f45de8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45df0));
  return;
}



/* Entry: 103162d08; end: 103162d27;  */

void FUN_103162d08(void)

{
  func_0x000107c61168(&PTR_PTR_1128bb9e0);
  return;
}



/* Entry: 103162d28; end: 103162d6f; -[SCModularCallScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162d28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45e38;
  func_0x000107c61428(param_1 + _DAT_112f45e38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103162d70; end: 103162dc7; -[SCModularCallScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45e38;
  func_0x000107c61428(param_1 + _DAT_112f45e38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103162dc8; end: 103162e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162dc8(undefined8 param_1,long param_2)

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
    FUN_103161d28();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f45d40) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103162ea0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f45d48);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f45e40);
    *(long **)(unaff_x20 + _DAT_112f45e40) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103162ea0; end: 103162ec7; -[SCModularCallScopedServicesSaberEntryPoint begin] */

void FUN_103162ea0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103162dc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103162ec8; end: 10316303f;  */

/* WARNING: Possible PIC construction at 0x000103162f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103162fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103162f34) */
/* WARNING: Removing unreachable block (ram,0x000103162fcc) */
/* WARNING: Removing unreachable block (ram,0x000103162fe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103162ec8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f45e40);
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



/* Entry: 103163040; end: 103163047;  */

void FUN_103163040(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103163048; end: 10316307b; -[SCModularCallScopedServicesSaberEntryPoint end] */

void FUN_103163048(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103162ec8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10316307c; end: 10316319b;  */

void FUN_10316307c(long param_1,long param_2,long param_3)

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
                        "ModularCallScopeGraphBridge/SCModularCallScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10316319c);
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



/* Entry: 10316319c; end: 103163247; -[SCModularCallScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10316319c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10316307c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103163248; end: 1031632a7; -[SCModularCallScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163248(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f45e38,0);
  *(undefined8 *)(param_1 + _DAT_112f45e40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031632a8; end: 1031632db;  */

void FUN_1031632a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031632dc; end: 103163313; -[SCModularCallScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031632dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f45e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45e40));
  return;
}



/* Entry: 103163314; end: 103163333;  */

void FUN_103163314(void)

{
  func_0x000107c61168(&PTR_PTR_1128bbab8);
  return;
}



/* Entry: 103163334; end: 10316337f;  */

void FUN_103163334(undefined8 param_1)

{
  func_0x0001000285a8(0x112f45e70,&UNK_10db92880);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10316347c,param_1);
  return;
}



/* Entry: 103163380; end: 10316347b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163380(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar6 = &lStack_90;
  lVar2 = param_2;
  FUN_103163720();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_60 = 0x103163748;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10316364c;
  puStack_68 = &UNK_110615540;
  ppuVar5 = &puStack_80;
  lStack_58 = param_2;
  func_0x000107c60bc4(ppuVar5);
  lVar1 = lStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  *(undefined **)(lVar3 + _DAT_112f45e78) = puVar4;
  lStack_90 = lVar3;
  lStack_88 = lVar2;
  func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 10316347c; end: 103163483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316347c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  puVar4 = auStack_90;
  lVar1 = unaff_x20;
  FUN_103163720();
  func_0x000107c610f8();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_60 = 0x103163748;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10316364c;
  puStack_68 = &UNK_110615540;
  ppuVar3 = &puStack_80;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(lVar1 + _DAT_112f45e78) = puVar2;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  *param_1 = puVar4;
  return;
}



/* Entry: 103163484; end: 10316357b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103163484(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_103163628;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10316364c;
  puStack_58 = &UNK_1106154f8;
  ppuVar3 = &puStack_70;
  uStack_48 = param_1;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112f45e78) = puVar2;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 10316357c; end: 1031635c3; -[SCLensCallLoggingServices loggingInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316357c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45e78;
  func_0x000107c61428(param_1 + _DAT_112f45e78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031635c4; end: 103163627; -[SCLensCallLoggingServices setLoggingInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031635c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45e78;
  func_0x000107c61428(param_1 + _DAT_112f45e78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103163628; end: 10316364b;  */

undefined8 FUN_103163628(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 10316364c; end: 103163683;  */

void FUN_10316364c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103163684; end: 10316369f;  */

void FUN_103163684(long param_1,long param_2)

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



/* Entry: 1031636a0; end: 1031636ff; -[SCLensCallLoggingServices init] */

void FUN_1031636a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCallLoggingAPI.SCLensCallLoggingServices",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031636cc);
  (*pcVar1)();
}



/* Entry: 103163700; end: 10316371f; -[SCLensCallLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45e78));
  return;
}



/* Entry: 103163720; end: 10316373f;  */

void FUN_103163720(void)

{
  func_0x000107c61168(&PTR_PTR_1128bbb78);
  return;
}



/* Entry: 103163740; end: 10316375f;  */

void FUN_103163740(long param_1,long param_2)

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



/* Entry: 103163760; end: 103163837;  */

void FUN_103163760(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103163838; end: 103163857;  */

void FUN_103163838(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103163858; end: 103163897;  */

void FUN_103163858(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f45ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db92900;
  func_0x000107c61520(&UNK_10db92900,&UNK_1106155f8);
  puRam0000000112f45ea8 = puVar1;
  return;
}



/* Entry: 103163898; end: 1031638a7;  */

undefined1  [16] FUN_103163898(void)

{
  return ZEXT816(0x1106155f8);
}



/* Entry: 1031638a8; end: 1031638d3; -[SCDWebExplainerTrayScope init] */

void FUN_1031638a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDWebExplainerTrayScope.SCDWebExplainerTrayScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031638d4);
  (*pcVar1)();
}



/* Entry: 1031638d4; end: 10316391f; -[SCDWebExplainerTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031638d4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45eb0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f45eb8 + 8));
  param_1 = param_1 + _DAT_112f45ec8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103163920; end: 10316398b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163920(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100363b98();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f45ed8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10316398c; end: 103163993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316398c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100363b98();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45ed8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103163994; end: 1031639df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163994(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45ed8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031639e0; end: 103163b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1031639e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100362f08();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112f45ec8;
  func_0x000107c61614(lVar5 + _DAT_112f45ec8,0);
  *(long *)(lVar5 + _DAT_112f45eb0) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f45eb8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar5 + _DAT_112f45ec0) = param_4;
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_3);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 103163b08; end: 103163bbf; -[_TtC24SCDWebExplainerTrayScope32SCDWebExplainerTrayScopeServices buildWithContainer:mischiefID:source:delegate:] */

void FUN_103163b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1031639e0(param_3,param_4,param_2,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103163bc0; end: 103163beb; -[_TtC24SCDWebExplainerTrayScope32SCDWebExplainerTrayScopeServices init] */

void FUN_103163bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDWebExplainerTrayScope.SCDWebExplainerTrayScopeServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103163bec);
  (*pcVar1)();
}



/* Entry: 103163bec; end: 103163bef;  */

void FUN_103163bec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103163bf0; end: 103163c23;  */

void FUN_103163bf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103163c24; end: 103163c57; -[_TtC24SCDWebExplainerTrayScope32SCDWebExplainerTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45ed8));
  return;
}



/* Entry: 103163c58; end: 103163c9f; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163c58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45f48;
  func_0x000107c61428(param_1 + _DAT_112f45f48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103163ca0; end: 103163cf7; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45f48;
  func_0x000107c61428(param_1 + _DAT_112f45f48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103163cf8; end: 103163d17; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope container] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163cf8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f45f50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103163d18; end: 103163d63; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163d18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f45f58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f45f58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103163d64; end: 103163d73; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope isCalling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103163d64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f45f60);
}



/* Entry: 103163d74; end: 103163d83; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope shareSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103163d74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f45f68);
}



/* Entry: 103163d84; end: 103163e7b; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope initWithDelegate:container:groupId:isCalling:shareSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar3 = _DAT_112f45f48;
  func_0x000107c61614(param_1 + _DAT_112f45f48,0);
  func_0x000107c61428(param_1 + lVar3,auStack_78,1,0);
  func_0x000107c61604(param_1 + lVar3,param_3);
  *(undefined8 *)(param_1 + _DAT_112f45f50) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f45f58);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112f45f60) = param_6;
  *(undefined8 *)(param_1 + _DAT_112f45f68) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = param_1;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_88,puVar2);
  return;
}



/* Entry: 103163e7c; end: 103163e7f;  */

void FUN_103163e7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103163e80; end: 103163ecb; -[_TtC23GroupExternalShareScope25SCGroupExternalShareScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163e80(long param_1)

{
  FUN_1031641d4(param_1 + _DAT_112f45f48);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45f50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f45f58 + 8))
  ;
  return;
}



/* Entry: 103163ecc; end: 103163f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163ecc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100340714();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f45f78) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103163f34; end: 103163f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103163f34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45f78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103163f80; end: 1031640b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103163f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100335820();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112f45f48;
  func_0x000107c61614(lVar5 + _DAT_112f45f48,0);
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_1);
  *(undefined8 *)(lVar5 + _DAT_112f45f50) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f45f58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(lVar5 + _DAT_112f45f60) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112f45f68) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_2);
  func_0x000107c61434(param_4);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 1031640b8; end: 10316416f; -[_TtC23GroupExternalShareScope33SCGroupExternalShareScopeServices buildWithDelegate:container:groupId:isCalling:shareSource:] */

void FUN_1031640b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103163f80(param_3,param_4,param_5,param_2,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103164170; end: 1031641a3;  */

void FUN_103164170(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031641a4; end: 1031641d3; -[_TtC23GroupExternalShareScope33SCGroupExternalShareScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031641a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45f78));
  return;
}



/* Entry: 1031641d4; end: 1031641f7;  */

undefined8 FUN_1031641d4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031641f8; end: 1031641fb;  */

void FUN_1031641f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031641fc; end: 103164267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031641fc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031645f0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f45ff0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103164268; end: 1031642d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103164268(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45ff0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031642d4; end: 103164333; -[_TtC43OutOfAppPipCallScopedFactoryServiceProvider29OutOfAppPipCallScopedServices init] */

void FUN_1031642d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OutOfAppPipCallScopedFactoryServiceProvider.OutOfAppPipCallScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103164300);
  (*pcVar1)();
}


