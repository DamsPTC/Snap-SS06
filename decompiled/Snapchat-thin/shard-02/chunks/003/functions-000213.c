/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b83f98; end: 101b84043; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101b83f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b83e00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b84044; end: 101b840af; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b84044(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e066a0,0);
  *(undefined8 *)(param_1 + _DAT_112e066a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e066b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b840b0; end: 101b840e3;  */

void FUN_101b840b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b840e4; end: 101b8412b; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b84110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b84114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b840e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e066a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e066a8));
  return;
}



/* Entry: 101b8412c; end: 101b8414b;  */

void FUN_101b8412c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb698);
  return;
}



/* Entry: 101b8414c; end: 101b84193; -[SCSCPhotoPickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8414c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e066e0;
  func_0x000107c61428(param_1 + _DAT_112e066e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b84194; end: 101b841eb; -[SCSCPhotoPickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b84194(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e066e0;
  func_0x000107c61428(param_1 + _DAT_112e066e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b841ec; end: 101b842c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b841ec(undefined8 param_1,long param_2)

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
    FUN_101b836ec();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e06608) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b842c4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e06610);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e066e8);
    *(long **)(unaff_x20 + _DAT_112e066e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101b842c4; end: 101b842eb; -[SCSCPhotoPickerScopedServicesSaberEntryPoint begin] */

void FUN_101b842c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b841ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b842ec; end: 101b84463;  */

/* WARNING: Possible PIC construction at 0x000101b84354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b843ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b84358) */
/* WARNING: Removing unreachable block (ram,0x000101b843f0) */
/* WARNING: Removing unreachable block (ram,0x000101b84408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b842ec(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e066e8);
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



/* Entry: 101b84464; end: 101b8446b;  */

void FUN_101b84464(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b8446c; end: 101b8449f; -[SCSCPhotoPickerScopedServicesSaberEntryPoint end] */

void FUN_101b8446c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b842ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b844a0; end: 101b845bf;  */

void FUN_101b844a0(long param_1,long param_2,long param_3)

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
                        "PhotoPickerScopeGraphBridge/SCSCPhotoPickerScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b845c0);
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



/* Entry: 101b845c0; end: 101b8466b; -[SCSCPhotoPickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b845c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b844a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b8466c; end: 101b846cb; -[SCSCPhotoPickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8466c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e066e0,0);
  *(undefined8 *)(param_1 + _DAT_112e066e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b846cc; end: 101b846ff;  */

void FUN_101b846cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b84700; end: 101b84737; -[SCSCPhotoPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b84700(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e066e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e066e8));
  return;
}



/* Entry: 101b84738; end: 101b84757;  */

void FUN_101b84738(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb760);
  return;
}



/* Entry: 101b84758; end: 101b847bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b84758(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b8520c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e06720) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b847c0; end: 101b8480b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b847c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e06720) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b8480c; end: 101b84957;  */

undefined8
FUN_101b8480c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d55a28,&UNK_10dbfa640);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_11044edb8;
  func_0x000107c613fc(&UNK_11044edb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11044ede0;
  func_0x000107c613fc(&UNK_11044ede0,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_1;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_4);
  uVar4 = 0x81;
  func_0x0001001ca524(0x81,0,0x48,4,0,0,&UNK_10d9da1b8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 101b84958; end: 101b849db;  */

void FUN_101b84958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x68) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b849dc,0,0);
  return;
}



/* Entry: 101b849dc; end: 101b85077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b849dc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  long unaff_x22;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  double dVar23;
  ulong uStack_80;
  
  lVar15 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x10,0,0);
  lVar15 = lVar15 + 0x10;
  func_0x000107c61618();
  if (lVar15 != 0) {
    lVar2 = *(long *)(lVar15 + _DAT_112e06720);
    func_0x000107c4cb6c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      dVar23 = *(double *)(unaff_x22 + 0x48);
      if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85060);
        (*pcVar1)();
      }
      if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85064);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85068);
        (*pcVar1)();
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar19 = (long)dVar23 & ((long)dVar23 >> 0x3f ^ 0xffffffffffffffffU);
      dVar23 = *(double *)(unaff_x22 + 0x60) / 1000.0;
      func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x58));
      func_0x000107c5ee88(uVar16,dVar23);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar4 = puVar11;
      func_0x000107c40808();
      if ((long)puVar4 < (long)uVar19) {
        lVar2 = *(long *)(unaff_x22 + 0x70);
        uStack_80 = *(ulong *)(unaff_x22 + 0x50);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
        do {
          puVar4 = PTR_PTR_1126af4d0;
          func_0x000107c61168();
          uVar21 = uStack_80;
          func_0x000107c5fadc(uStack_80,uVar16);
          uVar18 = uVar21;
          func_0x000107c5ee70();
          func_0x000107c43260();
          func_0x000107c61180();
          func_0x000107c61170(uVar18);
          func_0x000107c61170(uVar21);
          puVar6 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            uVar14 = 0x112d508c0;
            func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
            puVar5 = (undefined *)0x0;
            func_0x000107c5fc54(0,uVar14);
            puVar6 = puVar5;
            func_0x000107c5fc48();
            func_0x000107c6142c(puVar5);
          }
          uVar14 = 0x112d508c0;
          func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
          func_0x000107c5fc54(puVar4,uVar14);
          if ((ulong)puVar4 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
            puVar17 = PTR_PTR_1126af4c0;
          }
          else {
            puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar4) {
              puVar5 = puVar4;
            }
            func_0x000107c60480();
            puVar17 = PTR_PTR_1126af4c0;
          }
          PTR_PTR_1126af4c0 = puVar17;
          if (puVar5 == (undefined *)0x0) {
            func_0x000107c61170(puVar6);
            func_0x000107c6142c(puVar4);
            break;
          }
          func_0x000107c61168();
          func_0x000107c42f98();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          uVar14 = 0x112d511e8;
          func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
          puVar6 = puVar17;
          func_0x000107c5f9e8(puVar17,PTR___sSSN_11034da80,uVar14,PTR___sSSSHsWP_11034da90);
          func_0x000107c61170(puVar17);
          uVar21 = 0;
          uVar14 = uVar16;
          do {
            if (((ulong)puVar4 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8505c);
                (*pcVar1)();
              }
              uVar18 = *(ulong *)(puVar4 + uVar21 * 8 + 0x20);
              func_0x000107c615f0(uVar18);
            }
            else {
              uVar18 = uVar21;
              func_0x000100fb0ba0(uVar21,puVar4);
            }
            if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85058);
              (*pcVar1)();
            }
            puVar17 = (undefined *)(uVar21 + 1);
            uVar7 = uVar18;
            func_0x000107c3f60c();
            func_0x000107c61180();
            if (uVar7 == 0) {
              func_0x000107c615e8(uVar18);
              uVar16 = uVar14;
            }
            else {
              uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
              uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
              uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
              func_0x000107c5ee94(uVar16);
              func_0x000107c61170(uVar7);
              (**(code **)(lVar2 + 0x20))(uVar13,uVar16,uVar22);
              uVar7 = uVar18;
              func_0x000107c5b2d0();
              func_0x000107c61180();
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8506c);
                (*pcVar1)();
              }
              uVar12 = *(ulong *)(unaff_x22 + 0x80);
              uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
              uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
              uStack_80 = uVar7;
              func_0x000107c5faec();
              func_0x000107c6142c(uVar14);
              func_0x000107c61170(uVar7);
              pcVar1 = *(code **)(lVar2 + 8);
              (*pcVar1)(uVar13,uVar22);
              (**(code **)(lVar2 + 0x10))(uVar13,uVar12,uVar22);
              uVar7 = uVar18;
              func_0x000107c427b4();
              func_0x000107c61180();
              if (uVar7 != 0) {
                uVar8 = uVar7;
                func_0x000107c49ce8();
                func_0x000107c61170(uVar7);
                if ((int)uVar8 != 0) {
                  (*pcVar1)(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x68));
                  func_0x000107c615e8(uVar18);
                  goto LAB_101b84c9c;
                }
              }
              uVar7 = uVar18;
              func_0x000107c5b2d0();
              func_0x000107c61180();
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85070);
                (*pcVar1)();
              }
              uVar8 = uVar7;
              func_0x000107c5faec();
              func_0x000107c61170(uVar7);
              if (*(long *)(puVar6 + 0x10) == 0) {
LAB_101b84f2c:
                func_0x000107c615e8(uVar18);
                func_0x000107c6142c(uVar12);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
                uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
              }
              else {
                func_0x000107c61434(puVar6);
                uVar7 = uVar12;
                func_0x000100029284();
                if ((uVar7 & 1) == 0) {
                  func_0x000107c6142c(puVar6);
                  goto LAB_101b84f2c;
                }
                lVar20 = *(long *)(*(long *)(puVar6 + 0x38) + uVar8 * 8);
                func_0x000107c615f0(lVar20);
                func_0x000107c6142c(uVar12);
                func_0x000107c6142c(puVar6);
                puVar9 = PTR_PTR_1126a8b88;
                func_0x000107c610f8(PTR_PTR_1126a8b88);
                func_0x000107c453e4();
                uVar7 = uVar18;
                func_0x000107c5b2d0();
                func_0x000107c61180();
                if (uVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85078);
                  (*pcVar1)();
                }
                func_0x000107c593e4(puVar9);
                func_0x000107c61170(uVar7);
                lVar10 = lVar20;
                func_0x000107c42950();
                func_0x000107c61180();
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b85074);
                  (*pcVar1)();
                }
                uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
                uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
                func_0x000107c545ec(puVar9);
                func_0x000107c61170(lVar10);
                func_0x000107c5ee8c();
                dVar23 = dVar23 * 1000.0;
                func_0x000107c53204(dVar23,puVar9);
                func_0x000107c3d798(puVar11);
                func_0x000107c615e8(lVar20);
                func_0x000107c615e8(uVar18);
                func_0x000107c61170(puVar9);
              }
              (*pcVar1)(uVar14,uVar13);
            }
LAB_101b84c9c:
            uVar21 = uVar21 + 1;
            uVar14 = uVar16;
          } while (puVar17 != puVar5);
          func_0x000107c6142c(puVar4);
          func_0x000107c6142c(puVar6);
          puVar4 = puVar11;
          func_0x000107c40808();
        } while ((long)puVar4 < (long)uVar19);
      }
      else {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar2 = *(long *)(unaff_x22 + 0x70);
      *(undefined **)(unaff_x22 + 0x30) = puVar11;
      func_0x000100b60084(unaff_x22 + 0x30);
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(uVar16);
      func_0x000107c61170(lVar15);
      (**(code **)(lVar2 + 8))(uVar13,uVar14);
      goto LAB_101b85008;
    }
    func_0x000107c61170(lVar15);
  }
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x28) = puVar11;
  func_0x000100b60084(unaff_x22 + 0x28);
LAB_101b85008:
  func_0x000107c61170(puVar11);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000101b85050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b85078; end: 101b850fb;  */

void FUN_101b85078(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101b850fc;
  plVar7[0xc] = lVar9;
  plVar7[10] = lVar1;
  plVar7[0xb] = lVar3;
  plVar7[9] = lVar8;
  plVar7[7] = lVar4;
  plVar7[8] = lVar2;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar7[0xd] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0xe] = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0xf] = uVar5;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x10] = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b849dc,0,0);
  return;
}



/* Entry: 101b850fc; end: 101b85137;  */

void FUN_101b850fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b85134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b85138; end: 101b851b7; -[_TtC43ContentUnderstandBackfillCursorServicesImpl34ContentUnderstandBackfillProxyImpl getNextPageCursorsWithCursorCaptureTime:cursorSnapId:pageSize:] */

void FUN_101b85138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_3);
  FUN_101b8480c(param_1,param_2,param_5,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 101b851b8; end: 101b851eb;  */

void FUN_101b851b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b851ec; end: 101b851fb;  */

undefined1  [16] FUN_101b851ec(void)

{
  return ZEXT816(0x11044ee08);
}



/* Entry: 101b851fc; end: 101b8520b; -[_TtC43ContentUnderstandBackfillCursorServicesImpl34ContentUnderstandBackfillProxyImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b851fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e06720));
  return;
}



/* Entry: 101b8520c; end: 101b8522b;  */

void FUN_101b8520c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb820);
  return;
}



/* Entry: 101b8522c; end: 101b8531b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8522c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101b85ac8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e06758) = uStack_38;
  *(undefined8 *)(lVar1 + _DAT_112e06760) = uStack_40;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar2;
  return;
}



/* Entry: 101b8531c; end: 101b85443;  */

undefined8 FUN_101b8531c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_11044eed0;
  func_0x000107c613fc(&UNK_11044eed0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11044eef8;
  func_0x000107c613fc(&UNK_11044eef8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  func_0x000107c6157c(lVar1);
  uVar4 = 0x81;
  func_0x0001001ca524(0x81,0,0x48,4,0,0,&UNK_10d9da278,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 101b85444; end: 101b854a7;  */

void FUN_101b85444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b854a8,0,0);
  return;
}



/* Entry: 101b854a8; end: 101b8563b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b854a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar2 = *(long *)(lVar6 + _DAT_112e06758);
    func_0x000107c4cb6c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = *(long *)(unaff_x22 + 0x58);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c5ee88(uVar1,*(double *)(unaff_x22 + 0x48) / 1000.0);
      puVar5 = PTR_PTR_1126af4d0;
      func_0x000107c61168(PTR_PTR_1126af4d0);
      puVar4 = puVar5;
      func_0x000107c5ee70();
      func_0x000107c4081c(puVar5);
      func_0x000107c61170(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c490d4();
      *(undefined **)(unaff_x22 + 0x30) = puVar5;
      func_0x000100b60084(unaff_x22 + 0x30);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar5);
      (**(code **)(lVar2 + 8))(uVar1,uVar7);
      goto LAB_101b85614;
    }
    func_0x000107c61170(lVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *(undefined **)(unaff_x22 + 0x28) = puVar5;
  func_0x000100b60084(unaff_x22 + 0x28);
  func_0x000107c61170(puVar5);
LAB_101b85614:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101b85638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b8563c; end: 101b85673;  */

void FUN_101b8563c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b85674; end: 101b856d3;  */

void FUN_101b85674(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b856d4;
  plVar4[9] = lVar5;
  plVar4[7] = lVar2;
  plVar4[8] = lVar1;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar4[10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b854a8,0,0);
  return;
}



/* Entry: 101b856d4; end: 101b8570f;  */

void FUN_101b856d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b8570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b85710; end: 101b85753; -[_TtC46ContentUnderstandBackfillSnapCountServicesImpl46ContentUnderstandBackfillSnapCountProviderImpl getBackfillExaminedSnapCountWithCursorCaptureTime:] */

void FUN_101b85710(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_2;
  FUN_101b8531c(param_1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b85754; end: 101b8590f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b85754(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001002ed07c(0);
  uVar2 = 1;
  func_0x000107c6010c(1);
  func_0x000107c4d664(param_1);
  func_0x000107c61170(uVar2);
  func_0x0001000d224c(&puStack_60);
  puVar3 = &UNK_11044ef90;
  func_0x000107c613fc(&UNK_11044ef90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  uVar2 = 0;
  func_0x00010488a220(0,1,FUN_101b85ae8,puVar3);
  func_0x000107c61574(puStack_60);
  func_0x000107c61574(puVar3);
  func_0x000104888fc0(0,1,0x101b85918,0);
  func_0x000107c61574(uVar2);
  puVar4 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar3 = &UNK_11044efb8;
  func_0x000107c613fc(&UNK_11044efb8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  pcStack_40 = FUN_101b85bfc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11044efd0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c408f0(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 101b85910; end: 101b85937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b85910(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001002ed07c(0);
  uVar2 = 1;
  func_0x000107c6010c(1);
  func_0x000107c4d664(param_1);
  func_0x000107c61170(uVar2);
  func_0x0001000d224c(&puStack_60);
  puVar3 = &UNK_11044ef90;
  func_0x000107c613fc(&UNK_11044ef90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  uVar2 = 0;
  func_0x00010488a220(0,1,FUN_101b85ae8,puVar3);
  func_0x000107c61574(puStack_60);
  func_0x000107c61574(puVar3);
  func_0x000104888fc0(0,1,0x101b85918,0);
  func_0x000107c61574(uVar2);
  puVar4 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar3 = &UNK_11044efb8;
  func_0x000107c613fc(&UNK_11044efb8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  pcStack_40 = FUN_101b85bfc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11044efd0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c408f0(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 101b85938; end: 101b85a4b; -[_TtC46ContentUnderstandBackfillSnapCountServicesImpl46ContentUnderstandBackfillSnapCountProviderImpl observeBackfillOperationExists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b85938(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112e06760);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_11044ef40;
  func_0x000107c613fc(&UNK_11044ef40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uStack_50 = 0x101b85c28;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_11044ef58;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101b85a4c; end: 101b85a7f;  */

void FUN_101b85a4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b85a80; end: 101b85a8f;  */

undefined1  [16] FUN_101b85a80(void)

{
  return ZEXT816(0x11044ef20);
}



/* Entry: 101b85a90; end: 101b85ac7; -[_TtC46ContentUnderstandBackfillSnapCountServicesImpl46ContentUnderstandBackfillSnapCountProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b85aac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b85ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b85a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e06758));
  return;
}



/* Entry: 101b85ac8; end: 101b85ae7;  */

void FUN_101b85ac8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb8e0);
  return;
}



/* Entry: 101b85ae8; end: 101b85bfb;  */

void FUN_101b85ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *param_1;
  func_0x000107c4da5c(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5cb2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_11044f008;
  func_0x000107c613fc(&UNK_11044f008,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  uStack_50 = 0x101b85c04;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100b5fdac;
  puStack_58 = &UNK_11044f020;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c615f0(uVar6);
  func_0x000107c61574(puVar4);
  uVar6 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3d65c(uVar1);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101b85bfc; end: 101b85c3b;  */

void FUN_101b85bfc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 101b85c3c; end: 101b85d13;  */

void FUN_101b85c3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112e067a0,&UNK_10d9da380);
  puVar2 = &UNK_11044f158;
  func_0x000107c613fc(&UNK_11044f158,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd00000000000006e,0x800000010f0017a0,&UNK_10d9da390,puVar2);
  func_0x000107c61574(puVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101b85d14; end: 101b85d2f;  */

void FUN_101b85d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b85d30,0,0);
  return;
}



/* Entry: 101b85d30; end: 101b85db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b85d30(void)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  plVar3 = *(long **)(lVar4 + _DAT_1130806b8);
  *(long **)(unaff_x22 + 0x78) = plVar3;
  func_0x000107c6157c(plVar3);
  func_0x000107c61170(lVar4);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b85db8;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar3;
  lVar5 = *(long *)(*plVar3 + 0x50);
  plVar1[7] = lVar5;
  lVar4 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[9] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar2;
  lVar4 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101b85db8; end: 101b85e5f;  */

void FUN_101b85db8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar7 + 0x78);
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x80));
  func_0x000107c61574(uVar3);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  lVar2 = *(long *)(lVar7 + 0x18);
  *(undefined8 *)(lVar7 + 0x88) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x38);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(lVar7 + 0x90) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_101b85e60;
                    /* WARNING: Could not recover jumptable at 0x000101b85e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(FUN_101b86400,0,uVar3,lVar2);
  return;
}



/* Entry: 101b85e60; end: 101b85ed3;  */

void FUN_101b85e60(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = param_1;
    pcVar1 = FUN_101b85ed4;
  }
  else {
    pcVar1 = FUN_101b863ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b85ed4; end: 101b85faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b85ed4(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  if (0 < *(long *)(unaff_x22 + 0xa0)) {
    func_0x000100083b20(unaff_x22 + 0x38);
    lVar4 = *(long *)(unaff_x22 + 0x38);
    plVar3 = *(long **)(lVar4 + _DAT_112e28030);
    *(long **)(unaff_x22 + 0xa8) = plVar3;
    func_0x000107c6157c(plVar3);
    func_0x000107c61170(lVar4);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101b85fb0;
    plVar1[5] = unaff_x22 + 0x20;
    plVar1[6] = (long)plVar3;
    lVar5 = *(long *)(*plVar3 + 0x50);
    plVar1[7] = lVar5;
    lVar4 = 0;
    __sSqMa(0,lVar5);
    plVar1[8] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar1[9] = lVar4;
    uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar2;
    lVar4 = *(long *)(lVar5 + -8);
    plVar1[0xb] = lVar4;
    uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  func_0x000101b866cc();
  func_0x000107c613f8(&UNK_1106c2820,param_1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101b85fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b85fb0; end: 101b85fff;  */

void FUN_101b85fb0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b86000,0,0);
  return;
}



/* Entry: 101b86000; end: 101b86113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b86000(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x20);
  *(char *)(unaff_x22 + 0x29) = *(char *)(unaff_x22 + 0x28);
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x20);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x40,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101b86094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x48);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(lVar5 + _DAT_112ff82c0);
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  func_0x000107c615f0(lVar4);
  func_0x000107c61170(lVar5);
  lVar5 = lVar4;
  func_0x000107c614f0();
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b86114;
  plVar3[8] = lVar5;
  plVar3[9] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar3[10] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0xb] = lVar4;
  plVar3[0xc] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b86490,lVar4,lVar5);
  return;
}



/* Entry: 101b86114; end: 101b8617b;  */

void FUN_101b86114(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  *(undefined8 *)(lVar3 + 0xd0) = param_1;
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101b8617c;
  }
  else {
    pcVar2 = FUN_101b863b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101b8617c; end: 101b86247;  */

void FUN_101b8617c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126bf740;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40944();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xe0) = puVar2;
  func_0x000107c61170(puVar1);
  func_0x0001000285a8(0x112e067a0,&UNK_10d9da380);
  func_0x000103edf20c();
  *(undefined **)(unaff_x22 + 0xe8) = puVar2;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b86248;
                    /* WARNING: Could not recover jumptable at 0x000101b86244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101b86730)();
  return;
}



/* Entry: 101b86248; end: 101b8629b;  */

void FUN_101b86248(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf8) = param_1;
  *(undefined1 *)(lVar1 + 0x2a) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8629c,0,0);
  return;
}



/* Entry: 101b8629c; end: 101b863ab;  */

void FUN_101b8629c(void)

{
  undefined1 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  if (*(char *)(unaff_x22 + 0x2a) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x50,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x29);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar4);
    FUN_101b8670c(uVar5,uVar1);
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x58);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x29);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
    *puVar7 = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
    FUN_101b8670c(uVar6,uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b863a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b863ac; end: 101b863b7;  */

void FUN_101b863ac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b863b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b863b8; end: 101b863ff;  */

void FUN_101b863b8(void)

{
  long unaff_x22;
  
  FUN_101b8670c(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined1 *)(unaff_x22 + 0x29));
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101b863fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b86400; end: 101b86423;  */

void FUN_101b86400(void)

{
  func_0x000107c5c6a0();
  return;
}



/* Entry: 101b86424; end: 101b8648f;  */

void FUN_101b86424(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b86490,uVar1,uVar2);
  return;
}



/* Entry: 101b86490; end: 101b86547;  */

void FUN_101b86490(void)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = 0x112d3c270;
  func_0x0001000285a8(0x112d3c270,&UNK_10d9052f0);
  pcVar3 = FUN_101b868c0;
  func_0x00010488bc98(FUN_101b868c0,unaff_x22 + 0x10,uVar2);
  *(code **)(unaff_x22 + 0x68) = pcVar3;
  *(code **)(unaff_x22 + 0x30) = pcVar3;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  lVar5 = 0x112e067b0;
  func_0x0001000285a8(0x112e067b0,&UNK_10d9db5a0);
  lVar6 = lVar5;
  FUN_101b86980();
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b86548;
  plVar4[3] = unaff_x22 + 0x38;
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar6,lVar5,&UNK_10e821f58,&UNK_10e821f60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar4[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[5] = uVar9;
  piVar11 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  plVar4[6] = (long)plVar10;
  *plVar10 = (long)plVar4;
  plVar10[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(plVar10,uVar9,lVar5,lVar6);
  return;
}



/* Entry: 101b86548; end: 101b8659f;  */

void FUN_101b86548(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b865a0;
  }
  else {
    pcVar1 = (code *)0x101b865e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
  return;
}



/* Entry: 101b865a0; end: 101b86623;  */

void FUN_101b865a0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101b865e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101b86624; end: 101b8668f;  */

void FUN_101b86624(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b86690;
  plVar3[0xd] = lVar2;
  plVar3[0xe] = lVar4;
  plVar3[0xb] = param_1;
  plVar3[0xc] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b85d30,0,0);
  return;
}



/* Entry: 101b86690; end: 101b8670b;  */

void FUN_101b86690(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b866c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b8670c; end: 101b86747;  */

void FUN_101b8670c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101b86748; end: 101b8680f;  */

void FUN_101b86748(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101b86790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101b86810;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11044f180;
  func_0x000107c613fc(&UNK_11044f180,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101b86860,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101b86810; end: 101b8684f;  */

void FUN_101b86810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b86850,0,0);
  return;
}



/* Entry: 101b86850; end: 101b8685f;  */

void FUN_101b86850(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b8685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101b86860; end: 101b868ab;  */

void FUN_101b86860(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101b868ac(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101b868ac; end: 101b868bf;  */

void FUN_101b868ac(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101b868c0; end: 101b8697f;  */

void FUN_101b868c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  pcStack_40 = FUN_101b869d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1011eaae0;
  puStack_48 = &UNK_11044f198;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  pcVar3 = "scopedJSRuntime()";
  func_0x0001000c10c0("scopedJSRuntime()");
  func_0x000107c61180();
  func_0x000107c44284(uVar4,param_2,ppuVar2,pcVar3);
  func_0x000107c615e8(pcVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101b86980; end: 101b869cf;  */

void FUN_101b86980(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e067b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e067b0;
  func_0x00010002969c(0x112e067b0,&UNK_10d9db5a0);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112e067b8 = puVar2;
  return;
}



/* Entry: 101b869d0; end: 101b86a53;  */

void FUN_101b869d0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  if (param_1 == (undefined *)0x0) {
    FUN_101b86a70();
    puVar1 = &UNK_11044f1d0;
    func_0x000107c613f8(&UNK_11044f1d0,param_1,0,0);
    uStack_28 = 1;
    puStack_30 = puVar1;
    func_0x00010488e5d4(&puStack_30);
    func_0x000107c614ac(puVar1);
  }
  else {
    uStack_28 = 0;
    puStack_30 = param_1;
    func_0x000107c615f0();
    func_0x00010488e5d4(&puStack_30);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101b86a54; end: 101b86a6f;  */

void FUN_101b86a54(long param_1,long param_2)

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



/* Entry: 101b86a70; end: 101b86aaf;  */

void FUN_101b86a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e067c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9da3d0;
  func_0x000107c61520(&UNK_10d9da3d0,&UNK_11044f1d0);
  puRam0000000112e067c0 = puVar1;
  return;
}



/* Entry: 101b86ab0; end: 101b86abf;  */

undefined1  [16] FUN_101b86ab0(void)

{
  return ZEXT816(0x11044f1d0);
}



/* Entry: 101b86ac0; end: 101b86b8b;  */

void FUN_101b86ac0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101b87354();
  lVar3 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  func_0x0001000285a8(0x112e067d0,&UNK_10d9da418);
  puVar4 = &UNK_11044f368;
  func_0x000107c613fc(&UNK_11044f368,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  pcVar5 = FUN_101b873b0;
  func_0x0001000823a8(FUN_101b873b0,puVar4);
  *(code **)(lVar3 + 0x18) = pcVar5;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11044f328;
  *param_1 = lVar3;
  return;
}



/* Entry: 101b86b8c; end: 101b86c1f;  */

long FUN_101b86b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001000285a8(0x112e067d0,&UNK_10d9da418);
  puVar1 = &UNK_11044f2c0;
  func_0x000107c613fc(&UNK_11044f2c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcVar2 = FUN_101b86dac;
  func_0x0001000823a8(FUN_101b86dac,puVar1);
  *(code **)(unaff_x20 + 0x18) = pcVar2;
  return unaff_x20;
}



/* Entry: 101b86c20; end: 101b86dab;  */

void FUN_101b86c20(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uStack_c8 = 0xd000000000000018;
  uStack_c0 = 0x800000010ef11a10;
  uStack_b8 = 10000;
  uStack_b0 = 0x200;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 10000;
  uStack_70 = 0;
  uStack_68 = 1;
  func_0x000100083b20(auStack_118);
  func_0x0001000a8868(auStack_118,uStack_100);
  func_0x000100083b20(&uStack_120);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f001850);
  uVar2 = uStack_120;
  func_0x000107c4e60c(uStack_120);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_120);
  func_0x000107c61170(uVar1);
  (**(code **)(lStack_f8 + 8))
            (auStack_f0,0xd00000000000001d,0x800000010f001830,&uStack_c8,uVar2,uStack_100,lStack_f8)
  ;
  func_0x000100e1b054(&uStack_c8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_118);
  func_0x000101b88a88(0);
  func_0x000107c613fc();
  puVar3 = auStack_f0;
  FUN_101b887d8();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 101b86dac; end: 101b86dcb;  */

void FUN_101b86dac(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uStack_c8 = 0xd000000000000018;
  uStack_c0 = 0x800000010ef11a10;
  uStack_b8 = 10000;
  uStack_b0 = 0x200;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 10000;
  uStack_70 = 0;
  uStack_68 = 1;
  func_0x000100083b20(auStack_118,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000a8868(auStack_118,uStack_100);
  func_0x000100083b20(&uStack_120);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f001850);
  uVar2 = uStack_120;
  func_0x000107c4e60c(uStack_120);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_120);
  func_0x000107c61170(uVar1);
  (**(code **)(lStack_f8 + 8))
            (auStack_f0,0xd00000000000001d,0x800000010f001830,&uStack_c8,uVar2,uStack_100,lStack_f8)
  ;
  func_0x000100e1b054(&uStack_c8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_118);
  func_0x000101b88a88(0);
  func_0x000107c613fc();
  puVar3 = auStack_f0;
  FUN_101b887d8();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 101b86dcc; end: 101b86efb;  */

void FUN_101b86dcc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000103bcba98();
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
  func_0x000107c61170(uVar3);
  uVar3 = param_1;
  func_0x000107c49d4c();
  if ((int)uVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x130;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101b86efc;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_11044f2e8;
    func_0x000107c613fc(&UNK_11044f2e8,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0xb0);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0xd0) = FUN_101b87158;
    *(undefined **)(unaff_x22 + 0xd8) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xc0) = &UNK_1000f3aa0;
    *(undefined **)(unaff_x22 + 200) = &UNK_11044f300;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c49cb0(param_1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101b86ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 101b86efc; end: 101b86ff3;  */

void FUN_101b86efc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b86f3c,0,0);
  return;
}



/* Entry: 101b86ff4; end: 101b8707b;  */

void FUN_101b86ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x100);
  *(long *)(lVar3 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x108));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x118) = param_3;
    *(undefined8 *)(lVar3 + 0x120) = param_2;
    *(undefined8 *)(lVar3 + 0x128) = param_1;
    pcVar2 = FUN_101b8707c;
  }
  else {
    pcVar2 = FUN_101b870f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101b8707c; end: 101b870f3;  */

void FUN_101b8707c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = uVar2;
  FUN_101b87224(uVar2,uVar1,uVar4);
  func_0x000107c6142c(uVar2);
  func_0x00010006c090(uVar1,uVar4);
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101b870f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101b870f4; end: 101b87157;  */

void FUN_101b870f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c614ac(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101b87154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 101b87158; end: 101b87197;  */

void FUN_101b87158(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101b87198; end: 101b87223;  */

void FUN_101b87198(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b871e0;
  plVar1[0x1e] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b86dcc,0,0);
  return;
}



/* Entry: 101b87224; end: 101b87343;  */

undefined * FUN_101b87224(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    func_0x000100403514(0,lVar9,0);
    puVar10 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar6 = puVar10[-4];
      uVar7 = puVar10[-3];
      cVar4 = *(char *)(puVar10 + -2);
      uVar1 = puVar10[-1];
      uVar3 = *puVar10;
      func_0x00010006c00c(uVar1,uVar3);
      func_0x000103ee3894();
      uVar8 = uVar7;
      if (cVar4 == '\x01') {
        func_0x000107c5fb24();
      }
      else {
        func_0x000107c5fb1c();
      }
      func_0x00010006c090(uVar1,uVar3);
      func_0x000107c6142c(uVar7);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puVar10 + 5;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar6;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return puVar5;
}



/* Entry: 101b87344; end: 101b87353;  */

undefined1  [16] FUN_101b87344(void)

{
  return ZEXT816(0x11044f348);
}



/* Entry: 101b87354; end: 101b873af;  */

void FUN_101b87354(void)

{
  func_0x000107c61168(&PTR_PTR_112e06818);
  return;
}



/* Entry: 101b873b0; end: 101b873b3;  */

void FUN_101b873b0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uStack_c8 = 0xd000000000000018;
  uStack_c0 = 0x800000010ef11a10;
  uStack_b8 = 10000;
  uStack_b0 = 0x200;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 10000;
  uStack_70 = 0;
  uStack_68 = 1;
  func_0x000100083b20(auStack_118,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000a8868(auStack_118,uStack_100);
  func_0x000100083b20(&uStack_120);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f001850);
  uVar2 = uStack_120;
  func_0x000107c4e60c(uStack_120);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_120);
  func_0x000107c61170(uVar1);
  (**(code **)(lStack_f8 + 8))
            (auStack_f0,0xd00000000000001d,0x800000010f001830,&uStack_c8,uVar2,uStack_100,lStack_f8)
  ;
  func_0x000100e1b054(&uStack_c8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_118);
  func_0x000101b88a88(0);
  func_0x000107c613fc();
  puVar3 = auStack_f0;
  FUN_101b887d8();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 101b873b4; end: 101b873eb;  */

void FUN_101b873b4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113803b10 = uStack_38;
  uRam0000000113803b08 = uStack_40;
  uRam0000000113803b20 = uStack_28;
  uRam0000000113803b18 = uStack_30;
  uRam0000000113803b30 = uStack_18;
  uRam0000000113803b28 = uStack_20;
  return;
}



/* Entry: 101b873ec; end: 101b87437;  */

void FUN_101b873ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 101b87438; end: 101b8744b;  */

void FUN_101b87438(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 101b8744c; end: 101b8747f;  */

void FUN_101b8744c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 101b87480; end: 101b874af;  */

undefined1  [16] FUN_101b87480(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}


