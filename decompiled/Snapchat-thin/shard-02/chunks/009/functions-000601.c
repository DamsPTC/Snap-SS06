/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022c393c; end: 1022c39c7;  */

void FUN_1022c393c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1022c3d5c,0);
  return;
}



/* Entry: 1022c39c8; end: 1022c39d3;  */

void FUN_1022c39c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1022c3a2c,param_1);
  return;
}



/* Entry: 1022c39d4; end: 1022c3a2b;  */

void FUN_1022c39d4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1022c3a2c; end: 1022c3a5f;  */

void FUN_1022c3a2c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1022c3a60; end: 1022c3a67;  */

undefined8 FUN_1022c3a60(void)

{
  return 0x1b;
}



/* Entry: 1022c3a68; end: 1022c3bdf;  */

void FUN_1022c3a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104f14a0;
  func_0x000107c613fc(&UNK_1104f14a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1022c3be0,puVar1);
  return;
}



/* Entry: 1022c3be0; end: 1022c3be7;  */

void FUN_1022c3be0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e7b7d8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e7b7d8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104f1678;
  func_0x000107c613fc(&UNK_1104f1678,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1022c3d34;
  func_0x00010058fa64(0x1022c3d34,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022c3be8; end: 1022c3c43;  */

void FUN_1022c3be8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7b7d8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e7b7d8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1022c3c44; end: 1022c3d5f;  */

undefined ** FUN_1022c3c44(void)

{
  return &PTR_DAT_113066b80;
}



/* Entry: 1022c3d60; end: 1022c3da7; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b870;
  func_0x000107c61428(param_1 + _DAT_112e7b870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c3da8; end: 1022c3dff; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b870;
  func_0x000107c61428(param_1 + _DAT_112e7b870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c3e00; end: 1022c3e47; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b878;
  func_0x000107c61428(param_1 + _DAT_112e7b878,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c3e48; end: 1022c3e53; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b878;
  func_0x000107c61428(param_1 + _DAT_112e7b878,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022c3e54; end: 1022c3e9b; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint sCGenAIDreamsOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3e54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b880;
  func_0x000107c61428(param_1 + _DAT_112e7b880,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c3e9c; end: 1022c3ea7; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setSCGenAIDreamsOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b880;
  func_0x000107c61428(param_1 + _DAT_112e7b880,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022c3ea8; end: 1022c3eef; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint sCGenerativeAIOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3ea8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b888;
  func_0x000107c61428(param_1 + _DAT_112e7b888,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c3ef0; end: 1022c3efb; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setSCGenerativeAIOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b888;
  func_0x000107c61428(param_1 + _DAT_112e7b888,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022c3efc; end: 1022c3f43; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint sCSelfieOnboardingSettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3efc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b890;
  func_0x000107c61428(param_1 + _DAT_112e7b890,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c3f44; end: 1022c3f4f; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setSCSelfieOnboardingSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b890;
  func_0x000107c61428(param_1 + _DAT_112e7b890,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022c3f50; end: 1022c3f97; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3f50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b898;
  func_0x000107c61428(param_1 + _DAT_112e7b898,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c3f98; end: 1022c3fa3; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b898;
  func_0x000107c61428(param_1 + _DAT_112e7b898,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022c3fa4; end: 1022c3feb; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint genAIDreamsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3fa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b8a0;
  func_0x000107c61428(param_1 + _DAT_112e7b8a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c3fec; end: 1022c3ff7; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setGenAIDreamsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c3fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b8a0;
  func_0x000107c61428(param_1 + _DAT_112e7b8a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1022c3ff8; end: 1022c4057;  */

void FUN_1022c3ff8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1022c4058; end: 1022c4447;  */

/* WARNING: Possible PIC construction at 0x0001022c42d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c42e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c42f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c4318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c4328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c4338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c4348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c43fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c440c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c441c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c43dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c43ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c43bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c439c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c438c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c43a0) */
/* WARNING: Removing unreachable block (ram,0x0001022c43c0) */
/* WARNING: Removing unreachable block (ram,0x0001022c43f0) */
/* WARNING: Removing unreachable block (ram,0x0001022c43e0) */
/* WARNING: Removing unreachable block (ram,0x0001022c4420) */
/* WARNING: Removing unreachable block (ram,0x0001022c4410) */
/* WARNING: Removing unreachable block (ram,0x0001022c4400) */
/* WARNING: Removing unreachable block (ram,0x0001022c434c) */
/* WARNING: Removing unreachable block (ram,0x0001022c433c) */
/* WARNING: Removing unreachable block (ram,0x0001022c432c) */
/* WARNING: Removing unreachable block (ram,0x0001022c431c) */
/* WARNING: Removing unreachable block (ram,0x0001022c42f4) */
/* WARNING: Removing unreachable block (ram,0x0001022c42e4) */
/* WARNING: Removing unreachable block (ram,0x0001022c42d4) */
/* WARNING: Removing unreachable block (ram,0x0001022c4390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4058(void)

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
  func_0x000107c4eaa8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50dc0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50dc8();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c51280();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5e1d0();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            func_0x000107c43d44();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1022c2e98();
              lVar4 = lVar6;
              func_0x000107c610f8();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              lVar5 = lVar3;
              FUN_1022c3368();
              if (lVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022c4448);
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
              uVar1 = uStack_68;
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uVar1);
              func_0x000100083b20(&uStack_68);
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uStack_68);
              *(long *)(lVar4 + _DAT_112e7b5c8) = lVar5;
              *(long *)(lVar4 + _DAT_112e7b5d0) = unaff_x20;
              lStack_80 = lVar4;
              lStack_78 = lVar6;
              func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
            }
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



/* Entry: 1022c4448; end: 1022c446f; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1022c4448(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022c4058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c4470; end: 1022c44b3; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1022c4470(undefined8 param_1)

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



/* Entry: 1022c44b4; end: 1022c4867;  */

void FUN_1022c44b4(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10dfbf0)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57598();
    }
    else {
      uVar2 = 0xd000000000000023;
      if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0f7ef70)) ||
         (func_0x000107c605b8(0xd000000000000023,0x800000010f081090,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58368();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0f89950)) ||
           (func_0x000107c605b8(0xd000000000000024,0x800000010f0766b0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58370();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f890b0)) ||
             (func_0x000107c605b8(0xd000000000000026,0x800000010f076f50,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58828();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
              uVar2 = 0xd000000000000017;
              func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f7ef40)) &&
                   (func_0x000107c605b8(0xd00000000000002a,0x800000010f0810c0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "GenAIDreamsScopeGraphBridge/SCGenAIDreamsScopeGraphBridgeSaberEntryPoint.swift"
                                      ,0x4e,2,0x4a,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c4868);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c54ddc();
                goto LAB_1022c4540;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a68c();
          }
        }
      }
    }
  }
LAB_1022c4540:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1022c4868; end: 1022c4913; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1022c4868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022c44b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022c4914; end: 1022c49bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4914(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e7b870,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e7b878) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b880) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b888) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b890) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b898) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b8a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b8a8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022c49bc; end: 1022c49db; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1022c49bc(void)

{
  FUN_1022c4914();
  return;
}



/* Entry: 1022c49dc; end: 1022c4a0f;  */

void FUN_1022c49dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022c4a10; end: 1022c4aa7; -[SCGenAIDreamsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022c4a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c4a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c4a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c4a60) */
/* WARNING: Removing unreachable block (ram,0x0001022c4a40) */
/* WARNING: Removing unreachable block (ram,0x0001022c4a80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4a10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7b870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7b878));
  return;
}



/* Entry: 1022c4aa8; end: 1022c4ac7;  */

void FUN_1022c4aa8(void)

{
  func_0x000107c61168(&PTR_PTR_112833530);
  return;
}



/* Entry: 1022c4ac8; end: 1022c4ad3; -[SCSCDreamsSendServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4ac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b8d8;
  func_0x000107c61428(param_1 + _DAT_112e7b8d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c4ad4; end: 1022c4adf; -[SCSCDreamsSendServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b8d8;
  func_0x000107c61428(param_1 + _DAT_112e7b8d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c4ae0; end: 1022c4aeb; -[SCSCDreamsSendServicesSaberServiceProvider genAIDreamsScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4ae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b8e0;
  func_0x000107c61428(param_1 + _DAT_112e7b8e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c4aec; end: 1022c4b2f;  */

void FUN_1022c4aec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1022c4b30; end: 1022c4b3b; -[SCSCDreamsSendServicesSaberServiceProvider setGenAIDreamsScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c4b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b8e0;
  func_0x000107c61428(param_1 + _DAT_112e7b8e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c4b3c; end: 1022c4b8f;  */

void FUN_1022c4b3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c4b90; end: 1022c4da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022c4b90(void)

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
    func_0x000107c43d40();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001022c2f48();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e7b7f0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7b8e8);
      *(long *)(unaff_x20 + _DAT_112e7b8e8) = lVar4;
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
                      "GenAIDreamsScopeGraphBridge/SCSCDreamsSendServicesSaberServiceProvider.swift"
                      ,0x4c,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c4cbc);
  (*pcVar1)();
}



/* Entry: 1022c4da4; end: 1022c4dd7; -[SCSCDreamsSendServicesSaberServiceProvider provide] */

void FUN_1022c4da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1022c4b90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022c4dd8; end: 1022c4e0b; -[SCSCDreamsSendServicesSaberServiceProvider __safeProvide] */

void FUN_1022c4dd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001022c4cbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022c4e0c; end: 1022c4e4f; -[SCSCDreamsSendServicesSaberServiceProvider end] */

void FUN_1022c4e0c(undefined8 param_1)

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



/* Entry: 1022c4e50; end: 1022c4fe7;  */

void FUN_1022c4e50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f7ee70)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f081190,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GenAIDreamsScopeGraphBridge/SCSCDreamsSendServicesSaberServiceProvider.swift"
                            ,0x4c,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c4fe8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54dd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1022c4fe8; end: 1022c5093; -[SCSCDreamsSendServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1022c4fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022c4e50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022c5094; end: 1022c5107; -[SCSCDreamsSendServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5094(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7b8d8,0);
  func_0x000107c61614(param_1 + _DAT_112e7b8e0,0);
  *(undefined8 *)(param_1 + _DAT_112e7b8e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022c5108; end: 1022c513b;  */

void FUN_1022c5108(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022c513c; end: 1022c5183; -[SCSCDreamsSendServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c513c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7b8d8);
  func_0x000107c61610(param_1 + _DAT_112e7b8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7b8e8));
  return;
}



/* Entry: 1022c5184; end: 1022c51a3;  */

void FUN_1022c5184(void)

{
  func_0x000107c61168(&PTR_PTR_112e7b930);
  return;
}



/* Entry: 1022c51a4; end: 1022c51af; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c51a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b998;
  func_0x000107c61428(param_1 + _DAT_112e7b998,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c51b0; end: 1022c51bb; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c51b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b998;
  func_0x000107c61428(param_1 + _DAT_112e7b998,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c51bc; end: 1022c51c7; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider genAIDreamsScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c51bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b9a0;
  func_0x000107c61428(param_1 + _DAT_112e7b9a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c51c8; end: 1022c520b;  */

void FUN_1022c51c8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1022c520c; end: 1022c5217; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider setGenAIDreamsScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c520c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b9a0;
  func_0x000107c61428(param_1 + _DAT_112e7b9a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c5218; end: 1022c526b;  */

void FUN_1022c5218(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c526c; end: 1022c547f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022c526c(void)

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
    func_0x000107c43d40();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001022c3074();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e7b7f8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7b9a8);
      *(long *)(unaff_x20 + _DAT_112e7b9a8) = lVar4;
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
                      "GenAIDreamsScopeGraphBridge/SCSCGenAIDreamsAnimationsServicesSaberServiceProvider.swift"
                      ,0x57,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c5398);
  (*pcVar1)();
}



/* Entry: 1022c5480; end: 1022c54b3; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider provide] */

void FUN_1022c5480(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1022c526c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022c54b4; end: 1022c54e7; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider __safeProvide] */

void FUN_1022c54b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001022c5398();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022c54e8; end: 1022c552b; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider end] */

void FUN_1022c54e8(undefined8 param_1)

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



/* Entry: 1022c552c; end: 1022c56c3;  */

void FUN_1022c552c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f7ee70)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f081190,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GenAIDreamsScopeGraphBridge/SCSCGenAIDreamsAnimationsServicesSaberServiceProvider.swift"
                            ,0x57,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c56c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54dd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1022c56c4; end: 1022c576f; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1022c56c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022c552c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022c5770; end: 1022c57e3; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5770(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7b998,0);
  func_0x000107c61614(param_1 + _DAT_112e7b9a0,0);
  *(undefined8 *)(param_1 + _DAT_112e7b9a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022c57e4; end: 1022c5817;  */

void FUN_1022c57e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022c5818; end: 1022c585f; -[SCSCGenAIDreamsAnimationsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5818(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7b998);
  func_0x000107c61610(param_1 + _DAT_112e7b9a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7b9a8));
  return;
}



/* Entry: 1022c5860; end: 1022c587f;  */

void FUN_1022c5860(void)

{
  func_0x000107c61168(&PTR_PTR_112e7b9f0);
  return;
}



/* Entry: 1022c5880; end: 1022c58c7; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7ba58;
  func_0x000107c61428(param_1 + _DAT_112e7ba58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c58c8; end: 1022c591f; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c58c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7ba58;
  func_0x000107c61428(param_1 + _DAT_112e7ba58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022c5920; end: 1022c59f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5920(undefined8 param_1,long param_2)

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
    FUN_1022c3348();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e7b7a0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022c59f8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e7b7a8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e7ba60);
    *(long **)(unaff_x20 + _DAT_112e7ba60) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1022c59f8; end: 1022c5a1f; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint begin] */

void FUN_1022c59f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022c5920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c5a20; end: 1022c5b97;  */

/* WARNING: Possible PIC construction at 0x0001022c5a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c5b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c5a8c) */
/* WARNING: Removing unreachable block (ram,0x0001022c5b24) */
/* WARNING: Removing unreachable block (ram,0x0001022c5b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5a20(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7ba60);
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



/* Entry: 1022c5b98; end: 1022c5b9f;  */

void FUN_1022c5b98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022c5ba0; end: 1022c5bd3; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint end] */

void FUN_1022c5ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1022c5a20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022c5bd4; end: 1022c5cf3;  */

void FUN_1022c5bd4(long param_1,long param_2,long param_3)

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
                        "GenAIDreamsScopeGraphBridge/SCSCGenAIDreamsScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x32,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c5cf4);
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



/* Entry: 1022c5cf4; end: 1022c5d9f; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1022c5cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022c5bd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022c5da0; end: 1022c5dff; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5da0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7ba58,0);
  *(undefined8 *)(param_1 + _DAT_112e7ba60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022c5e00; end: 1022c5e33;  */

void FUN_1022c5e00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022c5e34; end: 1022c5e6b; -[SCSCGenAIDreamsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5e34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7ba58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7ba60));
  return;
}



/* Entry: 1022c5e6c; end: 1022c5edb;  */

void FUN_1022c5e6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128336b0);
  return;
}



/* Entry: 1022c5edc; end: 1022c5f1b;  */

bool FUN_1022c5edc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1022c5f1c; end: 1022c60a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c5f1c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112e7baa8;
  ppuVar5 = &puStack_80;
  if (*(char *)(unaff_x20 + _DAT_112e7bab0) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112e7baa8) == 2) {
      FUN_1022c60a8();
      puVar2 = &UNK_1104f17f8;
      func_0x000107c613fc(&UNK_1104f17f8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      func_0x000107c6157c(puVar2);
      uVar3 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010f081270);
      puVar4 = &UNK_1104f1820;
      func_0x000107c613fc(&UNK_1104f1820,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_1022c7bc4;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      uStack_60 = 0x1022c7bcc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101420ff8;
      puStack_68 = &UNK_1104f1838;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c42a80(param_1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61578(puVar2,2);
      func_0x000107c61170(uVar3);
      if (*(long *)(unaff_x20 + lVar1) != 3) {
        *(undefined8 *)(unaff_x20 + lVar1) = 3;
        puStack_80 = (undefined *)0x3;
        func_0x000100087c34(&puStack_80);
      }
    }
  }
  return;
}



/* Entry: 1022c60a8; end: 1022c610b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022c60a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e7bac8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7bac8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1022c610c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1022c610c; end: 1022c61eb;  */

undefined * FUN_1022c610c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  func_0x000107c469b0(uVar4,uVar5,uVar6,uVar7);
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar3 = puVar2;
  func_0x000107c51a60(puVar2);
  func_0x000107c61180();
  func_0x000107c53828();
  func_0x000107c61170(puVar3);
  func_0x000107c5a378(puVar2,param_2,1);
  func_0x000107c61170(puVar2);
  func_0x000107c569dc(puVar2,param_2,param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1022c61ec; end: 1022c6347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022c61ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112e7ba98) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112e7baa0;
  func_0x0001000285a8(0x112e7bb30,&UNK_10da86758);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7baa8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7bab0) = 1;
  lVar1 = _DAT_112e7bab8;
  lVar3 = 0;
  func_0x000107c5eb08();
  pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar5)(unaff_x20 + lVar1,1,1,lVar3);
  (*pcVar5)(unaff_x20 + _DAT_112e7bac0,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112e7bac8) = 0;
  lVar1 = unaff_x20 + _DAT_1138046f0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1022c728c();
  FUN_1022c74a4();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1022c6348; end: 1022c6367; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl init] */

void FUN_1022c6348(void)

{
  FUN_1022c61ec();
  return;
}



/* Entry: 1022c6368; end: 1022c64e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022c6368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112e7ba98) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112e7baa0;
  func_0x0001000285a8(0x112e7bb30,&UNK_10da86758);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7baa8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7bab0) = 1;
  lVar1 = _DAT_112e7bab8;
  lVar3 = 0;
  func_0x000107c5eb08();
  pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar5)(unaff_x20 + lVar1,1,1,lVar3);
  (*pcVar5)(unaff_x20 + _DAT_112e7bac0,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112e7bac8) = 0;
  lVar1 = unaff_x20 + _DAT_1138046f0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1022c728c();
  FUN_1022c74a4();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1022c64e4; end: 1022c6503; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl initWithFrame:] */

void FUN_1022c64e4(void)

{
  FUN_1022c6368();
  return;
}



/* Entry: 1022c6504; end: 1022c6667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022c6504(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  code *pcVar6;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112e7ba98) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112e7baa0;
  func_0x0001000285a8(0x112e7bb30,&UNK_10da86758);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7baa8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7bab0) = 1;
  lVar1 = _DAT_112e7bab8;
  lVar3 = 0;
  func_0x000107c5eb08();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar6)(unaff_x20 + lVar1,1,1,lVar3);
  (*pcVar6)(unaff_x20 + _DAT_112e7bac0,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112e7bac8) = 0;
  lVar1 = unaff_x20 + _DAT_1138046f0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    FUN_1022c728c();
    FUN_1022c74a4();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 1022c6668; end: 1022c668f; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl initWithCoder:] */

void FUN_1022c6668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1022c6504();
  return;
}



/* Entry: 1022c6690; end: 1022c676f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c6690(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112e7ba98;
  func_0x000107c61428(unaff_x20 + _DAT_112e7ba98,auStack_68,1,0);
  lVar5 = *(long *)(unaff_x20 + lVar2);
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 != 0) {
    func_0x000107c61434(lVar5);
    puVar7 = (undefined8 *)(lVar5 + 0x28);
    do {
      uVar4 = puVar7[-1];
      uVar1 = *puVar7;
      uVar3 = uVar1;
      func_0x000107c61434(uVar1);
      FUN_1022c60a8();
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c4ff6c(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar5);
    lVar5 = *(long *)(unaff_x20 + lVar2);
  }
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 1022c6770; end: 1022c694f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c6770(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 auStack_58 [3];
  
  lVar1 = 0x112e7bb18;
  func_0x0001000285a8(0x112e7bb18,&UNK_10da86748);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  lVar1 = unaff_x20;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5eb08();
    lVar6 = *(long *)(lVar1 + -8);
    (**(code **)(lVar6 + 0x10))(puVar5,param_1,lVar1);
    (**(code **)(lVar6 + 0x38))(puVar5,0,1,lVar1);
    lVar1 = _DAT_112e7bac0;
    func_0x000107c61428(unaff_x20 + _DAT_112e7bac0,auStack_58,0x21,0);
    FUN_1022c7c30(puVar5,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_58);
  }
  else {
    func_0x000107c61170();
    lVar1 = 0;
    func_0x000107c5eb08();
    lVar6 = *(long *)(lVar1 + -8);
    (**(code **)(lVar6 + 0x10))(puVar5,param_1,lVar1);
    (**(code **)(lVar6 + 0x38))(puVar5,0,1,lVar1);
    lVar1 = _DAT_112e7bab8;
    func_0x000107c61428(unaff_x20 + _DAT_112e7bab8,auStack_58,0x21,0);
    FUN_1022c7c30(puVar5,unaff_x20 + lVar1);
    puVar2 = auStack_58;
    func_0x000107c614a8(puVar2);
    FUN_1022c60a8();
    puVar3 = puVar2;
    func_0x000107c5eae0();
    puVar4 = puVar2;
    func_0x000107c4b768(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    if (*(long *)(unaff_x20 + _DAT_112e7baa8) != 1) {
      *(undefined8 *)(unaff_x20 + _DAT_112e7baa8) = 1;
      auStack_58[0] = 1;
      func_0x000100087c34(auStack_58);
    }
  }
  return;
}



/* Entry: 1022c6950; end: 1022c6b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c6950(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [3];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e7bb18;
  func_0x0001000285a8(0x112e7bb18,&UNK_10da86748);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x38))(lVar7 - extraout_x8_01,1,1,lVar2);
  lVar3 = _DAT_112e7bab8;
  func_0x000107c61428(unaff_x20 + _DAT_112e7bab8,auStack_68,0x21,0);
  FUN_1022c7c30(lVar7 - extraout_x8_01,unaff_x20 + lVar3);
  func_0x000107c614a8(auStack_68);
  func_0x000107c5edd0(puVar5,0x6c623a74756f6261,0xeb000000006b6e61);
  lVar3 = 0;
  func_0x000107c5ede0();
  puVar4 = puVar5;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 != 1) {
    func_0x000107c5eaec(lVar7,0x404e000000000000,puVar5,0);
    FUN_1022c60a8();
    puVar4 = puVar5;
    func_0x000107c5eae0();
    puVar6 = puVar5;
    func_0x000107c4b768(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    if (*(long *)(unaff_x20 + _DAT_112e7baa8) != 0) {
      *(undefined8 *)(unaff_x20 + _DAT_112e7baa8) = 0;
      auStack_68[0] = 0;
      func_0x000100087c34(auStack_68);
    }
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c6b70);
  (*pcVar1)();
}



/* Entry: 1022c6b70; end: 1022c6c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c6b70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = unaff_x20 + _DAT_1138046f0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112e7be30;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c5ed2c(param_1);
      func_0x000107c42338(lVar2,param_2,param_1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_1);
    }
    func_0x000107c615e8(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_112e7baa8) != 5) {
    *(undefined8 *)(unaff_x20 + _DAT_112e7baa8) = 5;
    uStack_38 = 5;
    func_0x000100087c34(&uStack_38);
  }
  return;
}



/* Entry: 1022c6c34; end: 1022c6c3b; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl webView:didFailHandling:error:] */

void FUN_1022c6c34(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  
  puVar1 = param_1;
  FUN_1022c7bf0();
  puVar2 = &UNK_1104f18e0;
  func_0x000107c613f8(&UNK_1104f18e0,puVar1,0,0);
  *puVar1 = in_x4;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x000107c61174(in_x4);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1022c6b70(puVar2);
  func_0x000107c61170(in_x4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1022c6c3c; end: 1022c6cc7;  */

void FUN_1022c6c3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined1 in_w5;
  
  puVar1 = param_1;
  FUN_1022c7bf0();
  puVar2 = &UNK_1104f18e0;
  func_0x000107c613f8(&UNK_1104f18e0,puVar1,0,0);
  *puVar1 = in_x4;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = in_w5;
  func_0x000107c61174(in_x4);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1022c6b70(puVar2);
  func_0x000107c61170(in_x4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1022c6cc8; end: 1022c6eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c6cc8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar1 = 0x112e7bb18;
  func_0x0001000285a8(0x112e7bb18,&UNK_10da86748);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_didMoveToWindow_112527020);
  lVar1 = unaff_x20;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112e7baa8) == 1) {
      func_0x000107c4e5c0(0x3fd3333333333333);
    }
  }
  else {
    func_0x000107c61170();
    lVar1 = _DAT_112e7bac0;
    func_0x000107c61428(unaff_x20 + _DAT_112e7bac0,auStack_78,0,0);
    func_0x0001022c7c80(unaff_x20 + lVar1,lVar5);
    lVar3 = lVar5;
    (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x0001022c7cd0(lVar5,0x112e7bb18,&UNK_10da86748);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,lVar5,lVar2);
      FUN_1022c6770(lVar6);
      (**(code **)(lVar7 + 8))(lVar6,lVar2);
      (**(code **)(lVar7 + 0x38))(puVar4,1,1,lVar2);
      func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
      func_0x0001022c7c30(puVar4,unaff_x20 + lVar1);
      func_0x000107c614a8(auStack_90);
    }
    func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c3f4cc();
  }
  return;
}



/* Entry: 1022c6ef0; end: 1022c6f17; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl didMoveToWindow] */

void FUN_1022c6ef0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022c6cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c6f18; end: 1022c7263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c6f18(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = auStack_a8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0x112e7bb20;
  func_0x0001000285a8(0x112e7bb20,&UNK_10da86750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar7 - extraout_x8_00;
  lVar5 = 0x112e7bb18;
  func_0x0001000285a8(0x112e7bb18,&UNK_10da86748);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b0 = _DAT_112e7bac0;
  lVar9 = uVar8 - extraout_x12_00;
  if (*(long *)(unaff_x20 + _DAT_112e7baa8) != 1) {
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e7bac0,auStack_78,0,0);
  (**(code **)(lVar11 + 0x38))(lVar9,1,1,lVar1);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x0001022c7c80(unaff_x20 + lStack_b0,lVar6);
  func_0x0001022c7c80(lVar9,lVar6 + lVar10);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar2 = lVar6;
  (*pcVar12)(lVar6,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x0001022c7cd0(lVar9,0x112e7bb18,&UNK_10da86748);
    lVar10 = lVar6 + lVar10;
    (*pcVar12)(lVar10,1,lVar1);
    if ((int)lVar10 != 1) {
LAB_1022c7144:
      func_0x0001022c7cd0(lVar6,0x112e7bb20,&UNK_10da86750);
      goto LAB_1022c7240;
    }
    func_0x0001022c7cd0(lVar6,0x112e7bb18,&UNK_10da86748);
  }
  else {
    func_0x0001022c7c80(lVar6,uVar8);
    lVar2 = lVar6 + lVar10;
    (*pcVar12)(lVar2,1,lVar1);
    if ((int)lVar2 == 1) {
      func_0x0001022c7cd0(lVar9,0x112e7bb18,&UNK_10da86748);
      (**(code **)(lVar11 + 8))(uVar8,lVar1);
      goto LAB_1022c7144;
    }
    puVar3 = puVar7;
    (**(code **)(lVar11 + 0x20))(puVar7,lVar6 + lVar10,lVar1);
    FUN_1022c7d10();
    uVar4 = uVar8;
    func_0x000107c5fab8(uVar8,puVar7,lVar1,puVar3);
    pcVar12 = *(code **)(lVar11 + 8);
    (*pcVar12)(puVar7,lVar1);
    func_0x0001022c7cd0(lVar9,0x112e7bb18,&UNK_10da86748);
    (*pcVar12)(uVar8,lVar1);
    func_0x0001022c7cd0(lVar6,0x112e7bb18,&UNK_10da86748);
    if ((uVar4 & 1) == 0) goto LAB_1022c7240;
  }
  lVar10 = _DAT_112e7bab8;
  func_0x000107c61428(unaff_x20 + _DAT_112e7bab8,auStack_90,0,0);
  func_0x0001022c7c80(unaff_x20 + lVar10,lVar5);
  lVar10 = lStack_b0;
  func_0x000107c61428(unaff_x20 + lStack_b0,auStack_a8,0x21,0);
  func_0x0001022c7c30(lVar5,unaff_x20 + lVar10);
  func_0x000107c614a8(auStack_a8);
LAB_1022c7240:
  FUN_1022c6950();
  return;
}



/* Entry: 1022c7264; end: 1022c728b; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl internalResetByTimeout] */

void FUN_1022c7264(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022c6f18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c728c; end: 1022c74a3;  */

/* WARNING: Possible PIC construction at 0x0001022c72c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c7350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c73a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c73f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c744c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c73fc) */
/* WARNING: Removing unreachable block (ram,0x0001022c73a8) */
/* WARNING: Removing unreachable block (ram,0x0001022c7354) */
/* WARNING: Removing unreachable block (ram,0x0001022c72c4) */
/* WARNING: Removing unreachable block (ram,0x0001022c7450) */

void FUN_1022c728c(undefined8 param_1)

{
  FUN_1022c60a8();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


