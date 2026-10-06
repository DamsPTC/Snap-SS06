/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100aea4a4; end: 100aea4ab; -[SCSojuMessageField disableToJSON] */

undefined1 FUN_100aea4a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100aea4ac; end: 100aea51f;  */

void FUN_100aea4ac(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c611ec(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + param_2 * 8);
    if (lVar1 != 0) {
      func_0x000107c607f4(lVar1);
    }
  }
  func_0x000107c611f0(param_1 + 0x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100aea520; end: 100aea533; -[SCSojuMessageField fieldName] */

undefined8 FUN_100aea520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100aea534; end: 100aea5e3; -[SCSojuMessage toJson] */

void FUN_100aea534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c5caf8();
  func_0x000107c61180();
  func_0x000107c41300(puVar1,param_2,param_1,0,0);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c46368();
  puVar3 = puVar2;
  func_0x000107c5c184();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100aea5e4; end: 100aea6e3; -[SCSojuMessage toDictionary] */

void FUN_100aea5e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c433e8(uVar1);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c40808();
  func_0x000107c41998(puVar2,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4a860();
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100aeaad0;
  puStack_48 = &UNK_110d5c348;
  uStack_40 = uVar3;
  puStack_38 = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c3ce00(param_1,param_2,&puStack_60,1);
  puVar4 = puVar2;
  func_0x000107c40794(puVar2);
  func_0x000107c61170(puStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100aea6e4; end: 100aea92f; -[SCSojuMessageFieldsRegistry jsonFieldNames] */

long FUN_100aea6e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c40808(uVar1);
    func_0x000107c3e170(puVar2,param_2,uVar1);
    func_0x000107c61180();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 8);
    func_0x000107c61174(lVar6);
    lVar5 = lVar6;
    func_0x000107c4080c(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar5 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            func_0x000107c61128(lVar6);
          }
          lVar8 = *(long *)(lStack_128 + lVar10 * 8);
          lVar3 = lVar8;
          func_0x000107c4a890();
          if (lVar3 == 0) {
            func_0x000107c433c4(lVar8);
            func_0x000107c61180();
            func_0x000107c3d798(puVar2,param_2,lVar8);
LAB_100aea850:
            func_0x000107c61170(lVar8);
          }
          else {
            if (lVar3 == 1) {
              func_0x000107c433c4(lVar8);
              func_0x000107c61180();
              lVar3 = lVar8;
              FUN_100aea938();
              func_0x000107c61180();
              func_0x000107c3d798(puVar2,param_2,lVar3);
              func_0x000107c61170(lVar3);
              goto LAB_100aea850;
            }
            if (lVar3 == 2) {
              func_0x000107c4a85c(lVar8);
              func_0x000107c61180();
              func_0x000107c3d798(puVar2,param_2,lVar8);
              goto LAB_100aea850;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = lVar6;
        func_0x000107c4080c(lVar6,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar5 != 0);
    }
    func_0x000107c61170(lVar6);
    puVar4 = puVar2;
    func_0x000107c40794();
    plVar7 = (long *)(param_1 + 0x10);
    lVar5 = *plVar7;
    *plVar7 = (long)puVar4;
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar2);
    lVar5 = *plVar7;
  }
  func_0x000107c61174(lVar5);
  func_0x000107c611a8(param_1);
  lVar6 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return lVar5;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(param_1);
  func_0x000107c60bd8();
  return *(long *)(lVar6 + 0x40);
}



/* Entry: 100aea930; end: 100aea937; -[SCSojuMessageField jsonNamingStrategy] */

undefined8 FUN_100aea930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100aea938; end: 100aeaaa3;  */

void FUN_100aea938(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 uStack_52;
  undefined1 uStack_51;
  ulong uVar4;
  
  func_0x000107c61174();
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  func_0x000107c60770(uVar3,0);
  uStack_51 = 0x5f;
  pbVar7 = param_1;
  func_0x000107c61178();
  func_0x000107c3ac4c();
  puVar5 = PTR___DefaultRuneLocale_11034bcf8;
  uVar6 = (uint)*pbVar7;
  if (*pbVar7 != 0) {
    pbVar8 = (byte *)0x0;
    bVar10 = false;
    do {
      while( true ) {
        uVar9 = (ulong)(uint)(int)(char)uVar6;
        if (uVar6 >> 7 == 0) {
          uVar2 = *(uint *)(puVar5 + uVar9 * 4 + 0x3c) & 0x8000;
        }
        else {
          uVar4 = uVar9;
          func_0x000107c60e64(uVar9,0x8000);
          uVar2 = (uint)uVar4;
        }
        if (uVar2 == 0) break;
        if (pbVar8 == (byte *)0x0) {
          if (bVar10) goto LAB_100aeaa08;
        }
        else {
          func_0x000107c60768(uVar3,pbVar8,(long)pbVar7 - (long)pbVar8);
LAB_100aeaa08:
          func_0x000107c60768(uVar3,&uStack_51,1);
        }
        func_0x000107c60e80();
        uStack_52 = (undefined1)uVar9;
        func_0x000107c60768(uVar3,&uStack_52,1);
        pbVar7 = pbVar7 + 1;
        uVar6 = (uint)*pbVar7;
        pbVar8 = (byte *)0x0;
        bVar10 = uVar2 != 0;
        if (*pbVar7 == 0) goto LAB_100aeaa58;
      }
      pbVar1 = pbVar7;
      if (pbVar8 != (byte *)0x0) {
        pbVar1 = pbVar8;
      }
      pbVar7 = pbVar7 + 1;
      uVar6 = (uint)*pbVar7;
      pbVar8 = pbVar1;
      bVar10 = uVar2 != 0;
    } while (*pbVar7 != 0);
    func_0x000107c60768(uVar3,pbVar1,(long)pbVar7 - (long)pbVar1);
  }
LAB_100aeaa58:
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c46368();
  func_0x000107c607f0(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100aeaaa4; end: 100aeaaaf; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCBillboardFHPUIConfigScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeaaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f800;
  func_0x000107c61428(param_1 + _DAT_112e6f800,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeaab0; end: 100aeaabb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCBillboardSignalProviderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeaab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f808;
  func_0x000107c61428(param_1 + _DAT_112e6f808,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeaabc; end: 100aeaac3; -[SCSojuMessageField jsonFieldNameOverride] */

undefined8 FUN_100aeaabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100aeaac4; end: 100aeaacf; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCDiscoverFeedActionHandlingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeaac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f810;
  func_0x000107c61428(param_1 + _DAT_112e6f810,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeaad0; end: 100aeab63;  */

/* WARNING: Possible PIC construction at 0x000100aeab2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aeab48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aeab30) */
/* WARNING: Removing unreachable block (ram,0x000100aeab34) */
/* WARNING: Removing unreachable block (ram,0x000100aeab44) */
/* WARNING: Removing unreachable block (ram,0x000100aeab4c) */

void FUN_100aeaad0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(param_3);
    func_0x000107c4d9a4(uVar1,param_2,param_4);
    func_0x000107c61180();
    FUN_100aeab64(param_3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100aeab64; end: 100aeae7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeab64(undefined *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_238 [24];
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  puVar3 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  if (param_1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1;
    func_0x000107c61164(param_1,PTR_s_toDictionary_11267a140);
    puVar4 = param_1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c61158(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar7 = param_1;
      func_0x000107c6115c(param_1,puVar1);
      if (((ulong)puVar7 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        unaff_x21 = param_1;
        func_0x000107c6115c(param_1,puVar1);
        func_0x000107c61174(param_1);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        if (((ulong)unaff_x21 & 1) == 0) goto LAB_100aeae34;
        func_0x000107c40808(param_1);
        func_0x000107c41998();
        func_0x000107c61180();
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x000107c61174(param_1);
        func_0x000107c4080c();
        if (puVar4 != (undefined *)0x0) {
          lVar6 = *plStack_1e0;
          do {
            puVar7 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar6) {
                func_0x000107c61128(param_1);
              }
              unaff_x22 = param_1;
              func_0x000107c4d9e8();
              func_0x000107c61180();
              puVar2 = unaff_x22;
              FUN_100aeab64();
              func_0x000107c61180();
              if (puVar2 != (undefined *)0x0) {
                func_0x000107c56bd8(puVar1);
              }
              func_0x000107c61170(puVar2);
              func_0x000107c61170(unaff_x22);
              puVar7 = puVar7 + 1;
            } while (puVar4 != puVar7);
            puVar4 = param_1;
            puVar3 = &uStack_1f0;
            func_0x000107c4080c();
            unaff_x21 = (undefined *)0x0;
          } while (puVar4 != (undefined *)0x0);
        }
      }
      else {
        func_0x000107c61174(param_1);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c40808(param_1);
        func_0x000107c3e170();
        func_0x000107c61180();
        lStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        func_0x000107c61174(param_1);
        puVar3 = &uStack_1b0;
        func_0x000107c4080c();
        if (puVar4 != (undefined *)0x0) {
          lVar6 = *plStack_1a0;
          do {
            puVar7 = (undefined *)0x0;
            do {
              if (*plStack_1a0 != lVar6) {
                func_0x000107c61128(param_1);
              }
              unaff_x22 = *(undefined **)(lStack_1a8 + (long)puVar7 * 8);
              FUN_100aeab64();
              func_0x000107c61180();
              if (unaff_x22 == (undefined *)0x0) {
                puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
                func_0x000107c61180();
              }
              else {
                func_0x000107c61174(unaff_x22);
                puVar2 = unaff_x22;
              }
              func_0x000107c61170(unaff_x22);
              func_0x000107c3d798(puVar1);
              func_0x000107c61170(puVar2);
              puVar7 = puVar7 + 1;
            } while (puVar4 != puVar7);
            puVar3 = &uStack_1b0;
            puVar4 = param_1;
            func_0x000107c4080c();
          } while (puVar4 != (undefined *)0x0);
          unaff_x21 = (undefined *)0x0;
        }
      }
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_1);
      param_3 = puVar3;
      puVar4 = puVar1;
    }
    else {
      func_0x000107c5caf8();
      func_0x000107c61180();
    }
  }
LAB_100aeae34:
  puVar1 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  func_0x000107c60e78();
  lVar6 = _DAT_112e6f818;
  pcStack_1f8 = FUN_100aeae7c;
  puStack_220 = unaff_x22;
  puStack_218 = unaff_x21;
  puStack_210 = puVar4;
  puStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x000107c61428(puVar1 + _DAT_112e6f818,auStack_238,1,0);
  uVar5 = *(undefined8 *)(puVar1 + lVar6);
  *(undefined8 **)(puVar1 + lVar6) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 100aeae7c; end: 100aeae87; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCMessageReportingPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeae7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f818;
  func_0x000107c61428(param_1 + _DAT_112e6f818,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeae88; end: 100aeae93; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCNavigationItemBadgeProviderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeae88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f820;
  func_0x000107c61428(param_1 + _DAT_112e6f820,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeae94; end: 100aeae9f; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCPageLauncherPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeae94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f828;
  func_0x000107c61428(param_1 + _DAT_112e6f828,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeaea0; end: 100aeaeab; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint setSCShortcutsDataPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aeaea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e6f830;
  func_0x000107c61428(param_1 + _DAT_112e6f830,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aeaeac; end: 100aeaed3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100aeaeac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100aeaed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b3af64; end: 100b3afab; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3af64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efb0;
  func_0x000107c61428(param_1 + _DAT_112e6efb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b3afac; end: 100b3aff3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint aIRemixScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3afac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efb8;
  func_0x000107c61428(param_1 + _DAT_112e6efb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3aff4; end: 100b3b03b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint adApplePromptScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3aff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efc0;
  func_0x000107c61428(param_1 + _DAT_112e6efc0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b03c; end: 100b3b083; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b03c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efc8;
  func_0x000107c61428(param_1 + _DAT_112e6efc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b084; end: 100b3b0cb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint adAttachmentPresenterPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efd0;
  func_0x000107c61428(param_1 + _DAT_112e6efd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b0cc; end: 100b3b113; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint adPromotedTileAttachmentScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b0cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efd8;
  func_0x000107c61428(param_1 + _DAT_112e6efd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b114; end: 100b3b15b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint callFeedbackScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efe0;
  func_0x000107c61428(param_1 + _DAT_112e6efe0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b15c; end: 100b3b1a3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint callUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b15c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6efe8;
  func_0x000107c61428(param_1 + _DAT_112e6efe8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b1a4; end: 100b3b1eb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint chatAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b1a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6eff0;
  func_0x000107c61428(param_1 + _DAT_112e6eff0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b1ec; end: 100b3b233; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint chatCustomizationHubScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b1ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6eff8;
  func_0x000107c61428(param_1 + _DAT_112e6eff8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b234; end: 100b3b27b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint chatMediaPreviewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f000;
  func_0x000107c61428(param_1 + _DAT_112e6f000,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b27c; end: 100b3b2c3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint creatorsSpotlightSubmissionV2ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b27c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f008;
  func_0x000107c61428(param_1 + _DAT_112e6f008,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b2c4; end: 100b3b30b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint declaredAgeVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b2c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f010;
  func_0x000107c61428(param_1 + _DAT_112e6f010,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b30c; end: 100b3b353; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint familyCenterRouterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b30c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f018;
  func_0x000107c61428(param_1 + _DAT_112e6f018,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b354; end: 100b3b39b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint followCreatorsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b354(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f020;
  func_0x000107c61428(param_1 + _DAT_112e6f020,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b39c; end: 100b3b3e3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint gamesExplorerDeeplinkScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b39c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f028;
  func_0x000107c61428(param_1 + _DAT_112e6f028,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b3e4; end: 100b3b42b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint gamesExplorerMainCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b3e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f030;
  func_0x000107c61428(param_1 + _DAT_112e6f030,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b42c; end: 100b3b473; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint gamesExplorerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b42c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f038;
  func_0x000107c61428(param_1 + _DAT_112e6f038,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b474; end: 100b3b4bb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint memoriesClientGenStoryLoadingScreenScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b474(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f040;
  func_0x000107c61428(param_1 + _DAT_112e6f040,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b4bc; end: 100b3b503; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint memoriesQuickCutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b4bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f048;
  func_0x000107c61428(param_1 + _DAT_112e6f048,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b504; end: 100b3b54b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint modularStickerCutoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f050;
  func_0x000107c61428(param_1 + _DAT_112e6f050,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b54c; end: 100b3b593; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint mutualFriendsPageScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b54c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f058;
  func_0x000107c61428(param_1 + _DAT_112e6f058,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b594; end: 100b3b5db; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint myEnforcementsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f060;
  func_0x000107c61428(param_1 + _DAT_112e6f060,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b5dc; end: 100b3b623; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint myReportsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b5dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f068;
  func_0x000107c61428(param_1 + _DAT_112e6f068,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b624; end: 100b3b66b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint playGamesScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b624(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f070;
  func_0x000107c61428(param_1 + _DAT_112e6f070,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b66c; end: 100b3b6b3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint plusDefaultTabTrayScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b66c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f078;
  func_0x000107c61428(param_1 + _DAT_112e6f078,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b6b4; end: 100b3b6fb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint plusGiftingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b6b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f080;
  func_0x000107c61428(param_1 + _DAT_112e6f080,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b6fc; end: 100b3b743; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint plusManagementScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b6fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f088;
  func_0x000107c61428(param_1 + _DAT_112e6f088,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b744; end: 100b3b78b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint plusSendFriendBuddyPassScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f090;
  func_0x000107c61428(param_1 + _DAT_112e6f090,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b78c; end: 100b3b7d3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b78c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f098;
  func_0x000107c61428(param_1 + _DAT_112e6f098,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b7d4; end: 100b3b81b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint promotedStoryShareScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b7d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0a0;
  func_0x000107c61428(param_1 + _DAT_112e6f0a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b81c; end: 100b3b863; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint publicGroupsChatScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b81c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0a8;
  func_0x000107c61428(param_1 + _DAT_112e6f0a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b864; end: 100b3b8ab; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCActivityFeedScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b864(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0b0;
  func_0x000107c61428(param_1 + _DAT_112e6f0b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b8ac; end: 100b3b8f3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAdOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b8ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0b8;
  func_0x000107c61428(param_1 + _DAT_112e6f0b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b8f4; end: 100b3b93b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAdReportAdInfoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b8f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0c0;
  func_0x000107c61428(param_1 + _DAT_112e6f0c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b93c; end: 100b3b983; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAdReportHideAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b93c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0c8;
  func_0x000107c61428(param_1 + _DAT_112e6f0c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b984; end: 100b3b9cb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAdReportReportAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b984(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0d0;
  func_0x000107c61428(param_1 + _DAT_112e6f0d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3b9cc; end: 100b3ba13; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAdReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3b9cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0d8;
  func_0x000107c61428(param_1 + _DAT_112e6f0d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3ba14; end: 100b3ba5b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAddFriendSheetScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3ba14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0e0;
  func_0x000107c61428(param_1 + _DAT_112e6f0e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3ba5c; end: 100b3baa3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAddFriendsHeaderButtonScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3ba5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0e8;
  func_0x000107c61428(param_1 + _DAT_112e6f0e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3baa4; end: 100b3baeb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAddFriendsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3baa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0f0;
  func_0x000107c61428(param_1 + _DAT_112e6f0f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3baec; end: 100b3bb33; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAddSoundPillScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3baec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f0f8;
  func_0x000107c61428(param_1 + _DAT_112e6f0f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bb34; end: 100b3bb7b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAddToGroupScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bb34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f100;
  func_0x000107c61428(param_1 + _DAT_112e6f100,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bb7c; end: 100b3bbc3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAddToStoryCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bb7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f108;
  func_0x000107c61428(param_1 + _DAT_112e6f108,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bbc4; end: 100b3bc0b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAllContactsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bbc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f110;
  func_0x000107c61428(param_1 + _DAT_112e6f110,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bc0c; end: 100b3bc53; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAuraFriendProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bc0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f118;
  func_0x000107c61428(param_1 + _DAT_112e6f118,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bc54; end: 100b3bc9b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAuraMyProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bc54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f120;
  func_0x000107c61428(param_1 + _DAT_112e6f120,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bc9c; end: 100b3bce3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCAuraSettingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bc9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f128;
  func_0x000107c61428(param_1 + _DAT_112e6f128,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bce4; end: 100b3bd2b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBirthdaySettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f130;
  func_0x000107c61428(param_1 + _DAT_112e6f130,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bd2c; end: 100b3bd73; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bd2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f138;
  func_0x000107c61428(param_1 + _DAT_112e6f138,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bd74; end: 100b3bdbb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiCreateFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bd74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f140;
  func_0x000107c61428(param_1 + _DAT_112e6f140,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bdbc; end: 100b3be03; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiFriendProfileSharingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bdbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f148;
  func_0x000107c61428(param_1 + _DAT_112e6f148,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3be04; end: 100b3be4b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiFriendmojiHintScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3be04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f150;
  func_0x000107c61428(param_1 + _DAT_112e6f150,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3be4c; end: 100b3be93; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiFriendmojiPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3be4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f158;
  func_0x000107c61428(param_1 + _DAT_112e6f158,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3be94; end: 100b3bedb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiGroupProfileSharingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3be94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f160;
  func_0x000107c61428(param_1 + _DAT_112e6f160,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bedc; end: 100b3bf23; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiOutfitSharingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bedc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f168;
  func_0x000107c61428(param_1 + _DAT_112e6f168,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bf24; end: 100b3bf6b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiSelfiePickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bf24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f170;
  func_0x000107c61428(param_1 + _DAT_112e6f170,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bf6c; end: 100b3bfb3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBitmojiSettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bf6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f178;
  func_0x000107c61428(param_1 + _DAT_112e6f178,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bfb4; end: 100b3bffb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBloopsReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bfb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f180;
  func_0x000107c61428(param_1 + _DAT_112e6f180,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3bffc; end: 100b3c043; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBugsAndSuggestionsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3bffc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f188;
  func_0x000107c61428(param_1 + _DAT_112e6f188,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c044; end: 100b3c0cb;  */

void FUN_100b3c044(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8270;
  func_0x000107c61168();
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5d8f4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 100b3c0cc; end: 100b3c113; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCBusinessProfilesPresenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c0cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f190;
  func_0x000107c61428(param_1 + _DAT_112e6f190,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c114; end: 100b3c15b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCaaSCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f198;
  func_0x000107c61428(param_1 + _DAT_112e6f198,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c15c; end: 100b3c1a3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCameraBIPAScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c15c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1a0;
  func_0x000107c61428(param_1 + _DAT_112e6f1a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c1a4; end: 100b3c1eb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCChangeUsernameScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c1a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1a8;
  func_0x000107c61428(param_1 + _DAT_112e6f1a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c1ec; end: 100b3c233; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCChatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c1ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1b0;
  func_0x000107c61428(param_1 + _DAT_112e6f1b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c234; end: 100b3c27b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCChatCommandMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1b8;
  func_0x000107c61428(param_1 + _DAT_112e6f1b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c27c; end: 100b3c2c3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCChatEraseMessageScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c27c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1c0;
  func_0x000107c61428(param_1 + _DAT_112e6f1c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c2c4; end: 100b3c30b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCChatInputPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c2c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1c8;
  func_0x000107c61428(param_1 + _DAT_112e6f1c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c30c; end: 100b3c353; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCChatScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c30c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1d0;
  func_0x000107c61428(param_1 + _DAT_112e6f1d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c354; end: 100b3c39b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCClearConversationsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c354(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1d8;
  func_0x000107c61428(param_1 + _DAT_112e6f1d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c39c; end: 100b3c3e3; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceCheckoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c39c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1e0;
  func_0x000107c61428(param_1 + _DAT_112e6f1e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c3e4; end: 100b3c42b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceComposerScreenshopScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c3e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1e8;
  func_0x000107c61428(param_1 + _DAT_112e6f1e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c42c; end: 100b3c473; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceProductCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c42c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1f0;
  func_0x000107c61428(param_1 + _DAT_112e6f1f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c474; end: 100b3c4bb; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceReportProductScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c474(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f1f8;
  func_0x000107c61428(param_1 + _DAT_112e6f1f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c4bc; end: 100b3c503; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceReviewOrderHalfScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c4bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f200;
  func_0x000107c61428(param_1 + _DAT_112e6f200,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c504; end: 100b3c54b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceShoppingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f208;
  func_0x000107c61428(param_1 + _DAT_112e6f208,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c54c; end: 100b3c593; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommerceTopicPageScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c54c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f210;
  func_0x000107c61428(param_1 + _DAT_112e6f210,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c594; end: 100b3c5db; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommunitiesProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f218;
  func_0x000107c61428(param_1 + _DAT_112e6f218,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c5dc; end: 100b3c623; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommunitiesPromptNotificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c5dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f220;
  func_0x000107c61428(param_1 + _DAT_112e6f220,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b3c624; end: 100b3c66b; -[SCUserNavigationScopeGraphBridgeSaberEntryPoint sCCommunityPillTapScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b3c624(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e6f228;
  func_0x000107c61428(param_1 + _DAT_112e6f228,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


