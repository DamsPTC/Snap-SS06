/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009d9674; end: 1009d987b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1009d9674(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  func_0x000107c614f0();
  uVar1 = 0;
  FUN_1009d987c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar2 = PTR__OBJC_CLASS___PKPushRegistry_1126a8908;
  func_0x000107c610f8();
  func_0x000107c48204();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + _DAT_112df94e8) = puVar2;
  *(long *)(unaff_x20 + _DAT_112df94f0) = param_1;
  lVar7 = *(long *)(param_1 + _DAT_113091ba0);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar3 = lVar7;
  func_0x000107c6148c(lVar7,puVar2);
  if (lVar3 != 0) {
    func_0x000107c61174(lVar7);
  }
  *(long *)(unaff_x20 + _DAT_112df94f8) = lVar3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar4,puVar2);
  lVar3 = _DAT_112df94e8;
  uVar1 = *(undefined8 *)(puVar4 + _DAT_112df94e8);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c53fcc(uVar1);
  uVar8 = *(undefined8 *)(puVar4 + lVar3);
  lVar3 = 0x112df9528;
  FUN_1000285a8(0x112df9528,&UNK_10d9ca410);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar1 = *(undefined8 *)PTR__PKPushTypeVoIP_11034b160;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar1);
  lVar7 = lVar3;
  FUN_1009d990c(lVar3);
  func_0x000107c61588(lVar3);
  FUN_1009e0764((undefined8 *)(lVar3 + 0x20));
  uVar6 = 0;
  FUN_1009d98bc(0);
  uVar1 = 0x112df9530;
  FUN_1009d9ed8(0x112df9530,&UNK_10d9ca534);
  lVar3 = lVar7;
  func_0x000107c5fe08(lVar7,uVar6,uVar1);
  func_0x000107c6142c(lVar7);
  func_0x000107c54034(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar3);
  return puVar5;
}



/* Entry: 1009d987c; end: 1009d98bb;  */

void FUN_1009d987c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1009d98bc; end: 1009d990b;  */

void FUN_1009d98bc(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112df9540 != 0) {
    return;
  }
  puVar1 = &UNK_11043f068;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112df9540 = param_1;
  return;
}



/* Entry: 1009d990c; end: 1009d9aff;  */

undefined * FUN_1009d990c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar14 != (undefined *)0x0) {
    puVar7 = &UNK_10d9ca418;
    FUN_1000285a8(0x112df9538,&UNK_10d9ca418);
    puVar2 = puVar14;
    func_0x000107c602e8();
    puVar16 = (undefined *)0x0;
    do {
      puVar15 = *(undefined **)(param_1 + 0x20 + (long)puVar16 * 8);
      uVar13 = *(undefined8 *)(puVar2 + 0x28);
      puVar3 = puVar15;
      func_0x000107c5faec();
      func_0x000107c6068c(auStack_a8,uVar13);
      puVar4 = puVar15;
      func_0x000107c61174();
      puVar5 = auStack_a8;
      func_0x000107c5fb58(puVar5,puVar3,puVar7);
      func_0x000107c606a8();
      func_0x000107c6142c(puVar7);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar17 = (ulong)puVar5 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar17 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar17 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar7 = puVar3;
        do {
          puVar6 = *(undefined **)(*(long *)(puVar2 + 0x30) + uVar17 * 8);
          func_0x000107c5faec();
          puVar3 = puVar15;
          puVar8 = puVar7;
          func_0x000107c5faec();
          if (puVar6 == puVar3 && puVar7 == puVar8) {
            puVar3 = puVar8;
            func_0x000107c61170(puVar4);
            func_0x000107c6142c(puVar7);
            func_0x000107c6142c(puVar8);
            goto LAB_1009d9994;
          }
          puVar3 = puVar7;
          func_0x000107c605b8();
          func_0x000107c6142c(puVar7);
          func_0x000107c6142c(puVar8);
          if (((ulong)puVar6 & 1) != 0) {
            func_0x000107c61170(puVar4);
            goto LAB_1009d9994;
          }
          uVar17 = uVar17 + 1 & ~uVar12;
          uVar9 = uVar17 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar17 & 0x3f);
          puVar7 = puVar3;
        } while ((uVar11 & uVar10) != 0);
      }
      *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
      *(undefined **)(*(long *)(puVar2 + 0x30) + uVar17 * 8) = puVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d9b00);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1009d9994:
      puVar16 = puVar16 + 1;
      puVar7 = puVar3;
    } while (puVar16 != puVar14);
  }
  return puVar2;
}



/* Entry: 1009d9b00; end: 1009d9cf7; +[TraceSDKInit descriptor] */

undefined * FUN_1009d9b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7db0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b309b0,
                        &PTR____CFConstantStringClassReference_110e82838,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184800,8,0x48,0x1c);
    func_0x000107c5a8b4();
    puRam00000001136c7db0 = puVar1;
  }
  return puRam00000001136c7db0;
}



/* Entry: 1009d9cf8; end: 1009d9d17;  */

void FUN_1009d9cf8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001009d9b8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1009d9d18; end: 1009d9d6f;  */

void FUN_1009d9d18(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126d20d8;
  func_0x000107c41800();
  func_0x000107c4dddc();
  func_0x000107c4d9a0();
  lVar4 = *(long *)(puVar3 + 0x10);
  func_0x000107c4d9a4();
  uVar2 = *(uint *)(*(long *)(lVar4 + 8) + 0x14);
  if (*(int *)(*(long *)(param_1 + 0x40) + (long)(int)uVar2 * -4) != 0) {
    func_0x000107c433e4();
    if ((puVar3 != (undefined *)0x0) &&
       ((lVar4 = *(long *)(puVar3 + 8), (*(ushort *)(lVar4 + 0x1c) & 0xf02) != 0 ||
        (*(byte *)(lVar4 + 0x1e) - 0xd < 4)))) {
      lVar5 = *(long *)(param_1 + 0x40);
      uVar1 = *(uint *)(lVar4 + 0x18);
      func_0x000107c61170(*(undefined8 *)(lVar5 + (ulong)uVar1));
      *(undefined8 *)(lVar5 + (ulong)uVar1) = 0;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if ((int)uVar2 < 0) {
      *(undefined4 *)(lVar4 + (ulong)-uVar2 * 4) = 0;
    }
    else {
      *(uint *)(lVar4 + (ulong)(uVar2 >> 5) * 4) =
           *(uint *)(lVar4 + (ulong)(uVar2 >> 5) * 4) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}



/* Entry: 1009d9d70; end: 1009d9d77; -[GPBDescriptor oneofs] */

undefined8 FUN_1009d9d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1009d9d78; end: 1009d9eb3;  */

undefined8 FUN_1009d9d78(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar2 = param_1;
  FUN_1009ce2b4();
  if (param_2 != 0) {
    lVar3 = param_1;
    lVar7 = param_2;
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      lVar3 = lVar4;
      func_0x000107c5ee20(lVar4,lVar7);
      puVar6 = puVar5;
      func_0x000107c40a0c();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      uVar1 = lRam0000000112f93380;
      if ((int)puVar6 != 0) {
        lRam0000000112f93380 = param_1;
        func_0x000107c61170(uVar1);
        uRam0000000112f93388 = 1;
        func_0x000107c61174(param_1);
        func_0x00010006c090(lVar4,lVar7);
        return 1;
      }
      func_0x00010006c090(lVar4,lVar7);
    }
  }
  return 0;
}



/* Entry: 1009d9eb4; end: 1009d9ed7;  */

void FUN_1009d9eb4(void)

{
  FUN_1009d9ed8(0x112df9558,&UNK_10d9ca4c4);
  return;
}



/* Entry: 1009d9ed8; end: 1009d9f17;  */

void FUN_1009d9ed8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1009d98bc(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1009d9f18; end: 1009da00f; -[GPBCodedOutputStream writeBytesArray:values:] */

void FUN_1009d9f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = auStack_d8;
  uVar5 = 0x10;
  lVar2 = param_4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_4);
      }
      func_0x000107c5e8f4(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    puVar4 = auStack_d8;
    uVar5 = 0x10;
    lVar2 = param_4;
    func_0x000107c4080c();
  }
  lVar2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  if ((int)uVar5 == 0) {
    func_0x000107c429d8(puVar4);
  }
  else {
    puVar3 = puVar4;
    func_0x000107c40808();
    if (puVar3 != (undefined1 *)0x0) {
      puStack_178 = &uStack_180;
      uStack_180 = 0;
      uStack_170 = 0x2020000000;
      uStack_168 = 0;
      func_0x000107c429d8(puVar4);
      func_0x000100298744(lVar2 + 8,uVar5);
      func_0x000100298744(lVar2 + 8,*(undefined4 *)(puStack_178 + 3));
      func_0x000107c429d8(puVar4);
      func_0x000107c60bcc(&uStack_180,8);
    }
  }
  return;
}



/* Entry: 1009da010; end: 1009da15f; -[GPBCodedOutputStream writeInt64Array:values:tag:] */

void FUN_1009da010(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_10bd5f554;
    puStack_c8 = &UNK_110d9f498;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x000107c429d8(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x000107c40808();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      puStack_78 = &UNK_10bd5f510;
      puStack_70 = &UNK_11090dec0;
      puStack_58 = puStack_68;
      func_0x000107c429d8(param_4);
      func_0x000100298744(param_1 + 8,param_5);
      func_0x000100298744(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      puStack_a0 = &UNK_10bd5f548;
      puStack_98 = &UNK_110d9f468;
      lStack_90 = param_1;
      func_0x000107c429d8(param_4);
      func_0x000107c60bcc(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 1009da160; end: 1009da257; -[GPBCodedOutputStream writeStringArray:values:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009da160(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_4;
  func_0x000107c4080c(param_4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar2 = *plStack_110;
    do {
      lVar3 = 0;
      do {
        if (*plStack_110 != lVar2) {
          func_0x000107c61128(param_4);
        }
        func_0x000107c5e9a0(param_1);
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_4;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010befa1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(lVar1 + 0x20) + (long)_DAT_11278ea04),
             PTR_s_addObservedKeys_observationToken_11259c210,*(undefined8 *)(lVar1 + 0x28),
             *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38),
             *(undefined8 *)(lVar1 + 0x40));
  return;
}



/* Entry: 1009da258; end: 1009da277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009da258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278ea04),
             PTR_s_addObservedKeys_observationToken_11259c210,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1009da278; end: 1009da443; -[SCPreferencesObservationGraph addObservedKeys:observationToken:callbackQueue:changeHandler:] */

undefined1 *
FUN_1009da278(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined **param_5,undefined1 *param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 *puStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR_PTR_1126e02f8;
  func_0x000107c610f4(PTR_PTR_1126e02f8);
  puStack_140 = param_6;
  ppuStack_138 = param_5;
  func_0x000107c47b98();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  puVar2 = param_3;
  func_0x000107c4080c();
  if (puVar2 != (undefined1 *)0x0) {
    lVar11 = *plStack_120;
    param_5 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      param_6 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          func_0x000107c61128(param_3);
        }
        puVar3 = *(undefined **)(param_1 + 8);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          func_0x000107c56bd8(*(undefined8 *)(param_1 + 8));
        }
        func_0x000107c56bd8(puVar3);
        func_0x000107c61170(puVar3);
        param_6 = param_6 + 1;
      } while (puVar2 != param_6);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      puVar2 = param_3;
      func_0x000107c4080c();
    } while (puVar2 != (undefined1 *)0x0);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puStack_140);
  func_0x000107c61170(ppuStack_138);
  func_0x000107c61170(param_4);
  puVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_180;
  pcStack_148 = FUN_1009da444;
  puStack_170 = param_6;
  ppuStack_168 = param_5;
  uStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(uVar8);
  puStack_178 = PTR_PTR_112706568;
  puStack_180 = puVar2;
  func_0x000107c61154(&puStack_180,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    puVar5 = puVar6;
    func_0x000107c40794();
    uVar9 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined8 **)((long)ppuVar4 + 8) = puVar5;
    func_0x000107c61170(uVar9);
    func_0x000107c61174(puVar7);
    uVar9 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar7;
    func_0x000107c61170(uVar9);
    uVar9 = uVar8;
    func_0x000107c61184();
    uVar10 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = uVar9;
    func_0x000107c61170(uVar10);
  }
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  return (undefined1 *)ppuVar4;
}



/* Entry: 1009da444; end: 1009da517; -[SCPreferencesObserver initWithObservedKeys:callbackQueue:changeHandler:] */

undefined1 *
FUN_1009da444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706568;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009da518; end: 1009da557;  */

/* WARNING: Possible PIC construction at 0x0001009da52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009da53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009da530) */
/* WARNING: Removing unreachable block (ram,0x0001009da540) */

void FUN_1009da518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1009da558; end: 1009db07b;  */

void FUN_1009da558(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001009da570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1009db07c; end: 1009db1bf;  */

byte * FUN_1009db07c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = uVar2;
  func_0x000107c613d0();
  if (0x7ffffffffffffff7 < uVar6) {
    func_0x000107c35c54();
    pbVar11 = pbRam000000011336f8b0;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pbVar9 = pbRam000000011336f8b0;
    if (pbRam000000011336f8b0 < (byte *)0x2) {
      do {
        if (pbRam000000011336f8b0 != (byte *)0x0) {
          ClearExclusiveLocal();
          pbVar9 = pbRam000000011336f8b0;
          if (pbRam000000011336f8b0 == (byte *)0x1) {
            (*(code *)PTR_FUN_11336f918)();
            pbVar10 = pbVar11;
            do {
              (*(code *)PTR_FUN_11336f918)();
              if ((long)pbVar10 - (long)pbVar11 < 1000) {
                func_0x000107c612dc();
              }
              else {
                uStack_f0 = 0xaaaaaaaaaaaaaaaa;
                uStack_e8 = 0xaaaaaaaaaaaaaaaa;
                uStack_d8 = 1000000;
                uStack_e0 = 0;
                pbVar10 = (byte *)&uStack_e0;
                func_0x000107c610f0(pbVar10,&uStack_f0);
                iVar5 = (int)pbVar10;
                while ((iVar5 == -1 && (func_0x000107c60e5c(), *(int *)pbVar10 == 4))) {
                  uStack_d8 = uStack_e8;
                  uStack_e0 = uStack_f0;
                  pbVar10 = (byte *)&uStack_e0;
                  func_0x000107c610f0(pbVar10,&uStack_f0);
                  iVar5 = (int)pbVar10;
                }
              }
              pbVar9 = pbRam000000011336f8b0;
            } while (pbRam000000011336f8b0 == (byte *)0x1);
          }
          goto LAB_1009db310;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x11336f8b0,0x10);
        if (bVar4) {
          pbRam000000011336f8b0 = (byte *)0x1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pbVar9 = (byte *)0x58;
      func_0x000107c60e20();
      uStack_e0 = 0xaaaaaaaaaaaaaaaa;
      uStack_d8 = 0xaaaaaaaaaaaaaaaa;
      func_0x000107c61270(&uStack_e0);
      func_0x000107c61274(&uStack_e0,1);
      func_0x000107c6125c(pbVar9,&uStack_e0);
      func_0x000107c6126c(&uStack_e0);
      pbVar9[0x50] = 0;
      pbVar9[0x51] = 0;
      pbVar9[0x52] = 0;
      pbVar9[0x53] = 0;
      pbVar9[0x54] = 0;
      pbVar9[0x55] = 0;
      pbVar9[0x56] = 0;
      pbVar9[0x57] = 0;
      pbVar11 = pbVar9 + 0x48;
      pbVar11[0] = 0;
      pbVar11[1] = 0;
      pbVar11[2] = 0;
      pbVar11[3] = 0;
      pbVar11[4] = 0;
      pbVar11[5] = 0;
      pbVar11[6] = 0;
      pbVar11[7] = 0;
      *(byte **)(pbVar9 + 0x40) = pbVar11;
    }
LAB_1009db310:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      pbRam000000011336f8b0 = pbVar9;
      func_0x000107c60e78();
      pbVar11 = pbVar9;
      if ((*pbVar9 & 1) == 0) {
        func_0x0001009daef0();
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x11383d028,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            iRam000000011383d028 = iRam000000011383d028 + -1;
          }
        } while (cVar3 != '\0');
        *pbVar9 = 1;
      }
      return pbVar11;
    }
    pbRam000000011336f8b0 = pbVar9;
    return pbVar9;
  }
  if (uVar6 < 0x17) {
    uStack_78 = CONCAT17((char)uVar6,(undefined7)uStack_78);
    pppppuVar7 = &ppppuStack_88;
    if (uVar6 == 0) goto LAB_1009db104;
  }
  else {
    pppppuVar8 = (undefined8 *****)0x19;
    if ((uVar6 | 7) != 0x17) {
      pppppuVar8 = (undefined8 *****)((uVar6 | 7) + 1);
    }
    pppppuVar7 = pppppuVar8;
    func_0x000107c60e20();
    uStack_78 = (ulong)pppppuVar8 | 0x8000000000000000;
    ppppuStack_88 = pppppuVar7;
    uStack_80 = uVar6;
  }
  func_0x000107c610b8(pppppuVar7,uVar2,uVar6);
LAB_1009db104:
  *(undefined1 *)((long)pppppuVar7 + uVar6) = 0;
  uVar12 = *(uint *)(param_1 + 2);
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  lRam00000001137f5098 = lVar1;
  if (*(int *)(lVar1 + 8) == 1) {
    FUN_1009db1c0();
  }
  ppppuStack_70 = (undefined8 *****)0x0;
  lStack_68 = 0;
  uStack_60 = 0;
  func_0x000100157e8c(&puStack_58,uStack_50);
  pppppuVar8 = (undefined8 *****)ppppuStack_70;
  if (-1 < (long)uStack_60._7_1_) {
    pppppuVar8 = &ppppuStack_70;
  }
  lVar1 = lStack_68;
  if (-1 < uStack_60) {
    lVar1 = (long)uStack_60._7_1_;
  }
  FUN_100136a94(pppppuVar8,lVar1);
  if (uStack_60 < 0) {
    func_0x000107c60e14(ppppuStack_70);
  }
  if ((long)uStack_78 < 0) {
    func_0x000107c60e14(ppppuStack_88);
  }
  if (((ulong)pppppuVar8 & 0x100000000) != 0) {
    uVar12 = (uint)pppppuVar8;
  }
  return (byte *)(ulong)uVar12;
}



/* Entry: 1009db1c0; end: 1009dfe23;  */

void FUN_1009db1c0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  pbVar4 = pbRam000000011336f8b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pbRam000000011336f8b0 < (byte *)0x2) {
    do {
      if (pbRam000000011336f8b0 != (byte *)0x0) {
        ClearExclusiveLocal();
        if (pbRam000000011336f8b0 == (byte *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          pbVar5 = pbVar4;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)pbVar5 - (long)pbVar4 < 1000) {
              func_0x000107c612dc();
            }
            else {
              uStack_60 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = 0xaaaaaaaaaaaaaaaa;
              uStack_48 = 1000000;
              uStack_50 = 0;
              pbVar5 = (byte *)&uStack_50;
              func_0x000107c610f0(pbVar5,&uStack_60);
              iVar3 = (int)pbVar5;
              while ((iVar3 == -1 && (func_0x000107c60e5c(), *(int *)pbVar5 == 4))) {
                uStack_48 = uStack_58;
                uStack_50 = uStack_60;
                pbVar5 = (byte *)&uStack_50;
                func_0x000107c610f0(pbVar5,&uStack_60);
                iVar3 = (int)pbVar5;
              }
            }
          } while (pbRam000000011336f8b0 == (byte *)0x1);
        }
        goto LAB_1009db310;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11336f8b0,0x10);
      if (bVar2) {
        pbRam000000011336f8b0 = (byte *)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pbVar4 = (byte *)0x58;
    func_0x000107c60e20();
    uStack_50 = 0xaaaaaaaaaaaaaaaa;
    uStack_48 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&uStack_50);
    func_0x000107c61274(&uStack_50,1);
    func_0x000107c6125c(pbVar4,&uStack_50);
    func_0x000107c6126c(&uStack_50);
    pbVar4[0x50] = 0;
    pbVar4[0x51] = 0;
    pbVar4[0x52] = 0;
    pbVar4[0x53] = 0;
    pbVar4[0x54] = 0;
    pbVar4[0x55] = 0;
    pbVar4[0x56] = 0;
    pbVar4[0x57] = 0;
    pbVar5 = pbVar4 + 0x48;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    *(byte **)(pbVar4 + 0x40) = pbVar5;
    pbRam000000011336f8b0 = pbVar4;
  }
LAB_1009db310:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  pbVar4 = pbRam000000011336f8b0;
  func_0x000107c60e78();
  if ((*pbVar4 & 1) == 0) {
    func_0x0001009daef0();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11383d028,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        iRam000000011383d028 = iRam000000011383d028 + -1;
      }
    } while (cVar1 != '\0');
    *pbVar4 = 1;
  }
  return;
}



/* Entry: 1009dfe24; end: 1009dfe2b;  */

void FUN_1009dfe24(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar1 != 0) {
    lVar3 = *param_1;
    lVar4 = *(long *)(lVar3 + 8);
    lVar2 = lVar3;
    FUN_1001ec148(lVar3,&uStack_48,1);
    if ((int)lVar2 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
      func_0x000107c60ee4(uStack_48,1);
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      *param_2 = *param_1;
      param_1[1] = (long)param_2;
      param_2[2] = lVar4;
      *(undefined1 *)(param_2 + 3) = 1;
      *(undefined2 *)((long)param_2 + 0x19) = 0x100;
    }
  }
  return;
}



/* Entry: 1009dfe2c; end: 1009dfe5b;  */

void FUN_1009dfe2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x3a8);
  return;
}



/* Entry: 1009dfe5c; end: 1009dfe8f;  */

undefined8 * FUN_1009dfe5c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x113310a88;
  func_0x000107c6127c(0x113310a88,FUN_1009dfef8);
  if ((int)puVar1 == 0) {
    return (undefined8 *)0x113836c80;
  }
  func_0x000107c60ebc();
  *puVar1 = &PTR_DAT_110ce1f80;
  puVar2 = puVar1;
  FUN_1009dfe5c();
  puVar1[1] = puVar2;
  puVar1[3] = 0x10;
  puVar1[2] = 0x10;
  puVar1[4] = 0xc;
  *(undefined1 *)(puVar1 + 5) = 1;
  func_0x000107c60ee4(puVar1 + 0xb,600);
  *puVar1 = &PTR_DAT_110ce21f0;
  return puVar1;
}



/* Entry: 1009dfe90; end: 1009dfef7;  */

undefined8 * FUN_1009dfe90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110ce1f80;
  puVar1 = param_1;
  FUN_1009dfe5c();
  param_1[1] = puVar1;
  param_1[3] = 0x10;
  param_1[2] = 0x10;
  param_1[4] = 0xc;
  *(undefined1 *)(param_1 + 5) = 1;
  func_0x000107c60ee4(param_1 + 0xb,600);
  *param_1 = &PTR_DAT_110ce21f0;
  return param_1;
}



/* Entry: 1009dfef8; end: 1009dff53;  */

void FUN_1009dfef8(void)

{
  uRam0000000113836c90 = 0;
  uRam0000000113836ca0 = 0;
  uRam0000000113836cb8 = 0;
  uRam0000000113836cc0 = 0;
  uRam0000000113836c80 = 0x10100c10;
  uRam0000000113836c84 = 1;
  uRam0000000113836c88 = 0x1009e044c;
  pcRam0000000113836c98 = FUN_1002298c0;
  pcRam0000000113836ca8 = FUN_1009f6c5c;
  pcRam0000000113836cb0 = FUN_1001ff5ac;
  return;
}



/* Entry: 1009dff54; end: 1009e03ef;  */

void FUN_1009dff54(void)

{
  long *in_x3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001009e0060();
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  func_0x0001009e0320();
  func_0x0001009e0548(&uStack_48);
  func_0x0001009e0354(*(undefined8 *)(*in_x3 + 0x30));
  func_0x000100173f28(&uStack_48);
  return;
}



/* Entry: 1009e03f0; end: 1009e0497;  */

undefined8 *
FUN_1009e03f0(undefined8 *param_1,byte *param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    FUN_1004d2c58(0x1e,0,0x7c,&UNK_10f6c6d00,0x41);
    *param_1 = 0;
    return (undefined8 *)0x0;
  }
  if (param_4 == *param_2) {
    *param_1 = param_2;
    puVar2 = param_1;
    if (*(code **)(param_2 + 8) == (code *)0x0) {
      (**(code **)(param_2 + 0x10))(param_1,param_3,param_4,param_5,0);
      iVar1 = (int)puVar2;
    }
    else {
      (**(code **)(param_2 + 8))(param_1,param_3,param_4,param_5);
      iVar1 = (int)puVar2;
    }
    if (iVar1 != 0) {
      return puVar2;
    }
  }
  else {
    FUN_1004d2c58(0x1e,0,0x78,&UNK_10f6c6d00,0x4e);
  }
  *param_1 = 0;
  return (undefined8 *)0x0;
}



/* Entry: 1009e0498; end: 1009e06b3;  */

void FUN_1009e0498(void)

{
  return;
}



/* Entry: 1009e06b4; end: 1009e06d7;  */

undefined8 FUN_1009e06b4(byte *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  undefined1 auVar40 [16];
  byte bVar56;
  undefined1 auVar41 [16];
  undefined8 in_register_00005088;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar59;
  byte bVar60;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  byte bVar66;
  byte bVar68;
  byte bVar70;
  undefined1 auVar64 [16];
  
  if (((param_2 != 0x80) && (param_2 != 0x100)) && (param_2 != 0xc0)) {
    return 0xfffffffe;
  }
  uVar18 = 0xffffffffffffffff;
  if (((param_1 != (byte *)0x0) && (param_3 != (undefined4 *)0x0)) &&
     ((uVar18 = 0xfffffffffffffffe, 0x7f < (int)param_2 &&
      (((int)param_2 < 0x101 && ((param_2 & 0x3f) == 0)))))) {
    bVar24 = *param_1;
    bVar25 = param_1[1];
    bVar26 = param_1[2];
    bVar27 = param_1[3];
    pbVar15 = param_1 + 4;
    bVar28 = *pbVar15;
    bVar29 = param_1[5];
    bVar30 = param_1[6];
    bVar31 = param_1[7];
    uVar11 = *(undefined4 *)pbVar15;
    uVar19 = *(undefined4 *)pbVar15;
    pbVar15 = param_1 + 8;
    bVar32 = *pbVar15;
    bVar33 = param_1[9];
    bVar34 = param_1[10];
    bVar35 = param_1[0xb];
    uVar12 = *(undefined4 *)pbVar15;
    uVar9 = *(undefined4 *)pbVar15;
    pbVar15 = param_1 + 0xc;
    bVar36 = *pbVar15;
    bVar37 = param_1[0xd];
    bVar38 = param_1[0xe];
    bVar39 = param_1[0xf];
    uVar13 = *(undefined4 *)pbVar15;
    uVar10 = *(undefined4 *)pbVar15;
    iVar16 = 8;
    bVar20 = 1;
    bVar21 = 1;
    bVar22 = 1;
    bVar23 = 1;
    if ((int)param_2 < 0xc0) {
      do {
        puVar17 = param_3;
        auVar57[8] = 0xd;
        auVar57._0_8_ = 0xc0f0e0d0c0f0e0d;
        auVar57[9] = 0xe;
        auVar57[10] = 0xf;
        auVar57[0xb] = 0xc;
        auVar57[0xc] = 0xd;
        auVar57[0xd] = 0xe;
        auVar57[0xe] = 0xf;
        auVar57[0xf] = 0xc;
        auVar62[1] = bVar25;
        auVar62[0] = bVar24;
        auVar62[2] = bVar26;
        auVar62[3] = bVar27;
        auVar62[4] = bVar28;
        auVar62[5] = bVar29;
        auVar62[6] = bVar30;
        auVar62[7] = bVar31;
        auVar62[8] = bVar32;
        auVar62[9] = bVar33;
        auVar62[10] = bVar34;
        auVar62[0xb] = bVar35;
        auVar62[0xc] = bVar36;
        auVar62[0xd] = bVar37;
        auVar62[0xe] = bVar38;
        auVar62[0xf] = bVar39;
        auVar62 = a64_TBL(ZEXT816(0),auVar62,auVar57);
        auVar58[1] = bVar25;
        auVar58[0] = bVar24;
        auVar58[2] = bVar26;
        auVar58[3] = bVar27;
        auVar58[4] = bVar28;
        auVar58[5] = bVar29;
        auVar58[6] = bVar30;
        auVar58[7] = bVar31;
        auVar58[8] = bVar32;
        auVar58[9] = bVar33;
        auVar58[10] = bVar34;
        auVar58[0xb] = bVar35;
        auVar58[0xc] = bVar36;
        auVar58[0xd] = bVar37;
        auVar58[0xe] = bVar38;
        auVar58[0xf] = bVar39;
        auVar57 = NEON_ext(ZEXT216(0),auVar58,0xc,1);
        *puVar17 = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
        puVar17[1] = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
        puVar17[2] = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
        puVar17[3] = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        auVar63 = NEON_aese(auVar62,ZEXT216(0));
        iVar16 = iVar16 + -1;
        auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        bVar60 = auVar63[0] ^ bVar20;
        bVar66 = auVar63[4] ^ bVar21;
        bVar68 = auVar63[8] ^ bVar22;
        bVar70 = auVar63[0xc] ^ bVar23;
        bVar20 = bVar20 << 1;
        bVar21 = bVar21 << 1;
        bVar22 = bVar22 << 1;
        bVar23 = bVar23 << 1;
        bVar24 = bVar24 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ bVar60;
        bVar25 = bVar25 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
        bVar26 = bVar26 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
        bVar27 = bVar27 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
        bVar28 = bVar28 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ bVar66;
        bVar29 = bVar29 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
        bVar30 = bVar30 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
        bVar31 = bVar31 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
        bVar32 = bVar32 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ bVar68;
        bVar33 = bVar33 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
        bVar34 = bVar34 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
        bVar35 = bVar35 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
        bVar36 = bVar36 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ bVar70;
        bVar37 = bVar37 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        bVar38 = bVar38 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        bVar39 = bVar39 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
        param_3 = puVar17 + 4;
      } while (iVar16 != 0);
      auVar63[8] = 0xd;
      auVar63._0_8_ = 0xc0f0e0d0c0f0e0d;
      auVar63[9] = 0xe;
      auVar63[10] = 0xf;
      auVar63[0xb] = 0xc;
      auVar63[0xc] = 0xd;
      auVar63[0xd] = 0xe;
      auVar63[0xe] = 0xf;
      auVar63[0xf] = 0xc;
      auVar5[1] = bVar25;
      auVar5[0] = bVar24;
      auVar5[2] = bVar26;
      auVar5[3] = bVar27;
      auVar5[4] = bVar28;
      auVar5[5] = bVar29;
      auVar5[6] = bVar30;
      auVar5[7] = bVar31;
      auVar5[8] = bVar32;
      auVar5[9] = bVar33;
      auVar5[10] = bVar34;
      auVar5[0xb] = bVar35;
      auVar5[0xc] = bVar36;
      auVar5[0xd] = bVar37;
      auVar5[0xe] = bVar38;
      auVar5[0xf] = bVar39;
      auVar62 = a64_TBL(ZEXT816(0),auVar5,auVar63);
      auVar6[1] = bVar25;
      auVar6[0] = bVar24;
      auVar6[2] = bVar26;
      auVar6[3] = bVar27;
      auVar6[4] = bVar28;
      auVar6[5] = bVar29;
      auVar6[6] = bVar30;
      auVar6[7] = bVar31;
      auVar6[8] = bVar32;
      auVar6[9] = bVar33;
      auVar6[10] = bVar34;
      auVar6[0xb] = bVar35;
      auVar6[0xc] = bVar36;
      auVar6[0xd] = bVar37;
      auVar6[0xe] = bVar38;
      auVar6[0xf] = bVar39;
      auVar57 = NEON_ext(ZEXT216(0),auVar6,0xc,1);
      puVar17[4] = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
      puVar17[5] = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
      puVar17[6] = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
      puVar17[7] = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
      auVar63 = NEON_aese(auVar62,ZEXT216(0));
      auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
      auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
      bVar20 = bVar24 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ auVar63[0] ^ 0x1b;
      bVar21 = bVar25 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
      bVar22 = bVar26 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
      bVar23 = bVar27 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
      bVar24 = bVar28 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ auVar63[4] ^ 0x1b;
      bVar25 = bVar29 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
      bVar26 = bVar30 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
      bVar27 = bVar31 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
      bVar28 = bVar32 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ auVar63[8] ^ 0x1b;
      bVar29 = bVar33 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
      bVar30 = bVar34 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
      bVar31 = bVar35 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
      bVar32 = bVar36 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ auVar63[0xc] ^ 0x1b;
      bVar33 = bVar37 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
      bVar34 = bVar38 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
      bVar35 = bVar39 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
      auVar61[8] = 0xd;
      auVar61._0_8_ = 0xc0f0e0d0c0f0e0d;
      auVar61[9] = 0xe;
      auVar61[10] = 0xf;
      auVar61[0xb] = 0xc;
      auVar61[0xc] = 0xd;
      auVar61[0xd] = 0xe;
      auVar61[0xe] = 0xf;
      auVar61[0xf] = 0xc;
      auVar7[1] = bVar21;
      auVar7[0] = bVar20;
      auVar7[2] = bVar22;
      auVar7[3] = bVar23;
      auVar7[4] = bVar24;
      auVar7[5] = bVar25;
      auVar7[6] = bVar26;
      auVar7[7] = bVar27;
      auVar7[8] = bVar28;
      auVar7[9] = bVar29;
      auVar7[10] = bVar30;
      auVar7[0xb] = bVar31;
      auVar7[0xc] = bVar32;
      auVar7[0xd] = bVar33;
      auVar7[0xe] = bVar34;
      auVar7[0xf] = bVar35;
      auVar62 = a64_TBL(ZEXT816(0),auVar7,auVar61);
      auVar8[1] = bVar21;
      auVar8[0] = bVar20;
      auVar8[2] = bVar22;
      auVar8[3] = bVar23;
      auVar8[4] = bVar24;
      auVar8[5] = bVar25;
      auVar8[6] = bVar26;
      auVar8[7] = bVar27;
      auVar8[8] = bVar28;
      auVar8[9] = bVar29;
      auVar8[10] = bVar30;
      auVar8[0xb] = bVar31;
      auVar8[0xc] = bVar32;
      auVar8[0xd] = bVar33;
      auVar8[0xe] = bVar34;
      auVar8[0xf] = bVar35;
      auVar57 = NEON_ext(ZEXT216(0),auVar8,0xc,1);
      puVar17[8] = CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)));
      puVar17[9] = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
      puVar17[10] = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
      puVar17[0xb] = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
      auVar63 = NEON_aese(auVar62,ZEXT216(0));
      auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
      auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
      puVar17[0xc] = CONCAT13(bVar23 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3],
                              CONCAT12(bVar22 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2],
                                       CONCAT11(bVar21 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^
                                                auVar63[1],
                                                bVar20 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^
                                                auVar63[0] ^ 0x36)));
      puVar17[0xd] = CONCAT13(bVar27 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7],
                              CONCAT12(bVar26 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6],
                                       CONCAT11(bVar25 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^
                                                auVar63[5],
                                                bVar24 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^
                                                auVar63[4] ^ 0x36)));
      puVar17[0xe] = CONCAT13(bVar31 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb],
                              CONCAT12(bVar30 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^
                                       auVar63[10],
                                       CONCAT11(bVar29 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^
                                                auVar63[9],
                                                bVar28 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^
                                                auVar63[8] ^ 0x36)));
      puVar17[0xf] = CONCAT13(bVar35 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf],
                              CONCAT12(bVar34 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^
                                       auVar63[0xe],
                                       CONCAT11(bVar33 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd]
                                                ^ auVar63[0xd],
                                                bVar32 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc]
                                                ^ auVar63[0xc] ^ 0x36)));
      pbVar15 = (byte *)(puVar17 + 0x20);
      uVar19 = 10;
    }
    else if (param_2 == 0xc0) {
      auVar40._8_8_ = in_register_00005088;
      auVar40._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x10);
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = uVar19;
      param_3[2] = uVar9;
      param_3[3] = uVar10;
      pbVar14 = (byte *)(param_3 + 4);
      do {
        pbVar15 = pbVar14;
        auVar2[8] = 5;
        auVar2._0_8_ = 0x407060504070605;
        auVar2[9] = 6;
        auVar2[10] = 7;
        auVar2[0xb] = 4;
        auVar2[0xc] = 5;
        auVar2[0xd] = 6;
        auVar2[0xe] = 7;
        auVar2[0xf] = 4;
        auVar57 = a64_TBL(ZEXT816(0),auVar40,auVar2);
        auVar4[1] = bVar25;
        auVar4[0] = bVar24;
        auVar4[2] = bVar26;
        auVar4[3] = bVar27;
        auVar4[4] = bVar28;
        auVar4[5] = bVar29;
        auVar4[6] = bVar30;
        auVar4[7] = bVar31;
        auVar4[8] = bVar32;
        auVar4[9] = bVar33;
        auVar4[10] = bVar34;
        auVar4[0xb] = bVar35;
        auVar4[0xc] = bVar36;
        auVar4[0xd] = bVar37;
        auVar4[0xe] = bVar38;
        auVar4[0xf] = bVar39;
        auVar62 = NEON_ext(ZEXT216(0),auVar4,0xc,1);
        *pbVar15 = auVar40[0];
        bVar42 = auVar40[1];
        pbVar15[1] = bVar42;
        bVar43 = auVar40[2];
        pbVar15[2] = bVar43;
        bVar44 = auVar40[3];
        pbVar15[3] = bVar44;
        bVar45 = auVar40[4];
        pbVar15[4] = bVar45;
        bVar46 = auVar40[5];
        pbVar15[5] = bVar46;
        bVar47 = auVar40[6];
        pbVar15[6] = bVar47;
        bVar48 = auVar40[7];
        pbVar15[7] = bVar48;
        auVar61 = NEON_aese(auVar57,ZEXT216(0));
        iVar16 = iVar16 + -1;
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        auVar63 = NEON_ext(ZEXT216(0),auVar58,0xc,1);
        bVar60 = bVar36 ^ auVar62[0xc] ^ auVar58[0xc] ^ auVar63[0xc];
        bVar66 = bVar37 ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        bVar68 = bVar38 ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        bVar70 = bVar39 ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
        bVar49 = auVar40[8];
        bVar50 = auVar40[9];
        bVar51 = auVar40[10];
        bVar52 = auVar40[0xb];
        bVar53 = auVar40[0xc];
        bVar54 = auVar40[0xd];
        bVar55 = auVar40[0xe];
        bVar56 = auVar40[0xf];
        bVar59 = auVar61[0] ^ bVar20;
        bVar65 = auVar61[4] ^ bVar21;
        bVar67 = auVar61[8] ^ bVar22;
        bVar69 = auVar61[0xc] ^ bVar23;
        auVar57 = NEON_ext(ZEXT216(0),auVar40,0xc,1);
        bVar20 = bVar20 << 1;
        bVar21 = bVar21 << 1;
        bVar22 = bVar22 << 1;
        bVar23 = bVar23 << 1;
        bVar24 = bVar24 ^ auVar62[0] ^ auVar58[0] ^ auVar63[0] ^ bVar59;
        bVar25 = bVar25 ^ auVar62[1] ^ auVar58[1] ^ auVar63[1] ^ auVar61[1];
        bVar26 = bVar26 ^ auVar62[2] ^ auVar58[2] ^ auVar63[2] ^ auVar61[2];
        bVar27 = bVar27 ^ auVar62[3] ^ auVar58[3] ^ auVar63[3] ^ auVar61[3];
        bVar28 = bVar28 ^ auVar62[4] ^ auVar58[4] ^ auVar63[4] ^ bVar65;
        bVar29 = bVar29 ^ auVar62[5] ^ auVar58[5] ^ auVar63[5] ^ auVar61[5];
        bVar30 = bVar30 ^ auVar62[6] ^ auVar58[6] ^ auVar63[6] ^ auVar61[6];
        bVar31 = bVar31 ^ auVar62[7] ^ auVar58[7] ^ auVar63[7] ^ auVar61[7];
        bVar32 = bVar32 ^ auVar62[8] ^ auVar58[8] ^ auVar63[8] ^ bVar67;
        bVar33 = bVar33 ^ auVar62[9] ^ auVar58[9] ^ auVar63[9] ^ auVar61[9];
        bVar34 = bVar34 ^ auVar62[10] ^ auVar58[10] ^ auVar63[10] ^ auVar61[10];
        bVar35 = bVar35 ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb] ^ auVar61[0xb];
        bVar36 = bVar60 ^ bVar69;
        bVar37 = bVar66 ^ auVar61[0xd];
        bVar38 = bVar68 ^ auVar61[0xe];
        bVar39 = bVar70 ^ auVar61[0xf];
        auVar40[0] = auVar57[0] ^ bVar60 ^ auVar40[0] ^ bVar59;
        auVar40[1] = auVar57[1] ^ bVar66 ^ bVar42 ^ auVar61[1];
        auVar40[2] = auVar57[2] ^ bVar68 ^ bVar43 ^ auVar61[2];
        auVar40[3] = auVar57[3] ^ bVar70 ^ bVar44 ^ auVar61[3];
        auVar40[4] = auVar57[4] ^ bVar60 ^ bVar45 ^ bVar65;
        auVar40[5] = auVar57[5] ^ bVar66 ^ bVar46 ^ auVar61[5];
        auVar40[6] = auVar57[6] ^ bVar68 ^ bVar47 ^ auVar61[6];
        auVar40[7] = auVar57[7] ^ bVar70 ^ bVar48 ^ auVar61[7];
        auVar40[8] = auVar57[8] ^ bVar60 ^ bVar49 ^ bVar67;
        auVar40[9] = auVar57[9] ^ bVar66 ^ bVar50 ^ auVar61[9];
        auVar40[10] = auVar57[10] ^ bVar68 ^ bVar51 ^ auVar61[10];
        auVar40[0xb] = auVar57[0xb] ^ bVar70 ^ bVar52 ^ auVar61[0xb];
        auVar40[0xc] = auVar57[0xc] ^ bVar60 ^ bVar53 ^ bVar69;
        auVar40[0xd] = auVar57[0xd] ^ bVar66 ^ bVar54 ^ auVar61[0xd];
        auVar40[0xe] = auVar57[0xe] ^ bVar68 ^ bVar55 ^ auVar61[0xe];
        auVar40[0xf] = auVar57[0xf] ^ bVar70 ^ bVar56 ^ auVar61[0xf];
        *(uint *)(pbVar15 + 8) = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
        *(uint *)(pbVar15 + 0xc) = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
        *(uint *)(pbVar15 + 0x10) = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
        *(uint *)(pbVar15 + 0x14) = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        pbVar14 = pbVar15 + 0x18;
      } while (iVar16 != 0);
      uVar19 = 0xc;
      pbVar15 = pbVar15 + 0x38;
    }
    else {
      auVar41 = *(undefined1 (*) [16])(param_1 + 0x10);
      iVar16 = 7;
      uVar19 = 0xe;
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = uVar11;
      param_3[2] = uVar12;
      param_3[3] = uVar13;
      pbVar15 = (byte *)(param_3 + 4);
      while( true ) {
        auVar1[8] = 0xd;
        auVar1._0_8_ = 0xc0f0e0d0c0f0e0d;
        auVar1[9] = 0xe;
        auVar1[10] = 0xf;
        auVar1[0xb] = 0xc;
        auVar1[0xc] = 0xd;
        auVar1[0xd] = 0xe;
        auVar1[0xe] = 0xf;
        auVar1[0xf] = 0xc;
        auVar62 = a64_TBL(ZEXT816(0),auVar41,auVar1);
        auVar3[1] = bVar25;
        auVar3[0] = bVar24;
        auVar3[2] = bVar26;
        auVar3[3] = bVar27;
        auVar3[4] = bVar28;
        auVar3[5] = bVar29;
        auVar3[6] = bVar30;
        auVar3[7] = bVar31;
        auVar3[8] = bVar32;
        auVar3[9] = bVar33;
        auVar3[10] = bVar34;
        auVar3[0xb] = bVar35;
        auVar3[0xc] = bVar36;
        auVar3[0xd] = bVar37;
        auVar3[0xe] = bVar38;
        auVar3[0xf] = bVar39;
        auVar57 = NEON_ext(ZEXT216(0),auVar3,0xc,1);
        *(int *)pbVar15 = auVar41._0_4_;
        *(int *)(pbVar15 + 4) = auVar41._4_4_;
        *(int *)(pbVar15 + 8) = auVar41._8_4_;
        *(int *)(pbVar15 + 0xc) = auVar41._12_4_;
        auVar63 = NEON_aese(auVar62,ZEXT216(0));
        iVar16 = iVar16 + -1;
        auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        bVar60 = auVar63[0] ^ bVar20;
        bVar66 = auVar63[4] ^ bVar21;
        bVar68 = auVar63[8] ^ bVar22;
        bVar70 = auVar63[0xc] ^ bVar23;
        bVar20 = bVar20 << 1;
        bVar21 = bVar21 << 1;
        bVar22 = bVar22 << 1;
        bVar23 = bVar23 << 1;
        bVar24 = bVar24 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ bVar60;
        bVar25 = bVar25 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
        bVar26 = bVar26 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
        bVar27 = bVar27 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
        bVar28 = bVar28 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ bVar66;
        bVar29 = bVar29 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
        bVar30 = bVar30 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
        bVar31 = bVar31 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
        bVar32 = bVar32 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ bVar68;
        bVar33 = bVar33 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
        bVar34 = bVar34 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
        bVar35 = bVar35 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
        bVar36 = bVar36 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ bVar70;
        bVar37 = bVar37 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        bVar38 = bVar38 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        bVar39 = bVar39 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
        *(uint *)(pbVar15 + 0x10) = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
        *(uint *)(pbVar15 + 0x14) = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
        *(uint *)(pbVar15 + 0x18) = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
        *(uint *)(pbVar15 + 0x1c) = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        pbVar15 = pbVar15 + 0x20;
        if (iVar16 == 0) break;
        uVar9 = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        auVar64._4_4_ = uVar9;
        auVar64._0_4_ = uVar9;
        auVar64._8_4_ = uVar9;
        auVar64._12_4_ = uVar9;
        auVar57 = NEON_ext(ZEXT216(0),auVar41,0xc,1);
        auVar63 = NEON_aese(auVar64,ZEXT216(0));
        bVar60 = auVar41[1];
        bVar66 = auVar41[2];
        bVar68 = auVar41[3];
        bVar70 = auVar41[4];
        bVar42 = auVar41[5];
        bVar43 = auVar41[6];
        bVar44 = auVar41[7];
        bVar45 = auVar41[8];
        bVar46 = auVar41[9];
        bVar47 = auVar41[10];
        bVar48 = auVar41[0xb];
        bVar49 = auVar41[0xc];
        bVar50 = auVar41[0xd];
        bVar51 = auVar41[0xe];
        bVar52 = auVar41[0xf];
        auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        auVar41[0] = auVar41[0] ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ auVar63[0];
        auVar41[1] = bVar60 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
        auVar41[2] = bVar66 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
        auVar41[3] = bVar68 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
        auVar41[4] = bVar70 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ auVar63[4];
        auVar41[5] = bVar42 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
        auVar41[6] = bVar43 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
        auVar41[7] = bVar44 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
        auVar41[8] = bVar45 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ auVar63[8];
        auVar41[9] = bVar46 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
        auVar41[10] = bVar47 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
        auVar41[0xb] = bVar48 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
        auVar41[0xc] = bVar49 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ auVar63[0xc];
        auVar41[0xd] = bVar50 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        auVar41[0xe] = bVar51 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        auVar41[0xf] = bVar52 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
      }
    }
    *(undefined4 *)pbVar15 = uVar19;
    uVar18 = 0;
  }
  return uVar18;
}



/* Entry: 1009e06d8; end: 1009e0763;  */

void FUN_1009e06d8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_1009dfe2c();
  func_0x0001009e06fc();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1009e0764; end: 1009e079f;  */

undefined8 FUN_1009e0764(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009d98bc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1009e07a0; end: 1009e80e3;  */

undefined8 FUN_1009e07a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1009e80e4; end: 1009e80f7;  */

void FUN_1009e80e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001009e80e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1009e80f8; end: 1009e8107; -[SCNotificationToMessageReadyLogger _recordNotificationToMessageReadyAppStartupType:] */

void FUN_1009e80f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1009e8108; end: 1009e820b;  */

void FUN_1009e8108(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_48,param_1 + 0x28);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1009e820c; end: 1009e824b;  */

void FUN_1009e820c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c3b53c(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1009e824c; end: 1009e8573; -[SCSnapchattersFetchRequestCoordinator _dispatchFriendFetchRequest:completionQueue:completionHandler:] */

void FUN_1009e824c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar7 = &puStack_90;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x000107c3ebd4(uVar2,param_2,&PTR____CFConstantStringClassReference_110eec318,0,0);
  if ((uVar2 & 1) == 0) {
    func_0x000107c3b6b4(param_1,param_2,param_3,0,param_4,param_5);
    goto LAB_1009e853c;
  }
  uVar2 = param_3;
  func_0x000107c3e1c8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5d028();
  if (uVar3 - 1 < 6) {
    ppuVar12 = (undefined **)(&PTR_PTR_110ab6310)[uVar3 - 1];
  }
  else {
    ppuVar12 = &PTR____CFConstantStringClassReference_110eec2d8;
  }
  uVar3 = uVar2;
  func_0x000100aacbc4();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4177c();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c4adac();
    bVar1 = lVar6 == 0;
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
  }
  else {
    bVar1 = true;
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_108bce570;
  puStack_78 = &UNK_1109033b0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x000107c61184(&puStack_90);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  if (*(long *)(param_1 + 0x88) == 0) {
    func_0x000107c3be2c(param_1,param_2,&PTR____CFConstantStringClassReference_110dfae38,ppuVar12);
    puVar10 = PTR_PTR_1126db018;
    func_0x000107c610f4();
    func_0x000107c468d4();
    puVar8 = puVar10;
    func_0x000107c5e09c();
    func_0x000107c61180();
    puVar9 = (undefined1 *)ppuVar7;
    func_0x000107c61184(ppuVar7);
    func_0x000107c3d798(puVar8,param_2,puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar10;
    func_0x000107c61174(puVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c3c8ac(param_1,param_2,puVar10);
  }
  else {
    if (bVar1) {
      func_0x000107c3be2c(param_1,param_2,&PTR____CFConstantStringClassReference_110eec378,ppuVar12)
      ;
      if (*(long *)(param_1 + 0x90) == 0) {
        puVar10 = PTR_PTR_1126db018;
        func_0x000107c610f4();
LAB_1009e84dc:
        func_0x000107c468d4();
        uVar11 = *(undefined8 *)(param_1 + 0x90);
        *(undefined **)(param_1 + 0x90) = puVar10;
        func_0x000107c61170(uVar11);
      }
      else {
        func_0x000107c54b18(*(long *)(param_1 + 0x90),param_2,1);
      }
    }
    else {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x000107c3be2c(param_1,param_2,&PTR____CFConstantStringClassReference_110eec3b8,
                            ppuVar12);
        puVar10 = PTR_PTR_1126db018;
        func_0x000107c610f4();
        goto LAB_1009e84dc;
      }
      func_0x000107c3be2c(param_1,param_2,&PTR____CFConstantStringClassReference_110eec398,ppuVar12)
      ;
    }
    puVar10 = *(undefined **)(param_1 + 0x90);
    func_0x000107c5e09c(puVar10);
    func_0x000107c61180();
    puVar9 = (undefined1 *)ppuVar7;
    func_0x000107c61184(ppuVar7);
    func_0x000107c3d798(puVar10,param_2,puVar9);
    func_0x000107c61170(puVar9);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(uVar2);
LAB_1009e853c:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1009e8574; end: 1009e86a3;  */

long * FUN_1009e8574(void)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam000000011383d4b0 & 1) == 0) {
    iVar2 = 0x1383d4b0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      plVar3 = (long *)0x58;
      func_0x000107c60e20();
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
      plVar3[4] = 0;
      plVar3[5] = (long)&UNK_10e5754d0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = (long)&UNK_10e5754d0;
      plVar4 = plVar3;
      func_0x0001009e8634();
      lVar5 = *plVar4;
      func_0x0001009e8634();
      func_0x0001006560a8(plVar3,lVar5,plVar4[1] - *plVar4 >> 5);
      if (*plVar3 == plVar3[1]) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x1009e862c);
        (*pcVar1)();
      }
      plRam000000011383d4a8 = plVar3;
      func_0x000107c60e4c(0x11383d4b0);
    }
  }
  return plRam000000011383d4a8;
}



/* Entry: 1009e86a4; end: 1009e89e3; -[SCSnapchattersFetchRequestCoordinator _fetchFriendsWithFetchRequest:forceFullSync:completionQueue:completionHandler:] */

void FUN_1009e86a4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined **ppuStack_138;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  ppuVar1 = *(undefined ***)(param_2 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c3e1c8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000100aacbc4();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (((param_5 & 1) == 0) && ((uVar3 & 1) == 0)) {
    ppuVar4 = ppuVar1;
    func_0x000107c4177c(ppuVar1);
    func_0x000107c61180();
  }
  if ((uVar3 & 1) == 0) {
    ppuStack_138 = ppuVar1;
    func_0x000107c41780();
    func_0x000107c61180();
  }
  else {
    ppuStack_138 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  func_0x000107c6071c();
  func_0x000107c61144(auStack_80,param_2);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x78) == '\x01') {
    func_0x000107c4f7c0();
    func_0x000107c61180();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    puStack_c8 = &UNK_108bcddec;
    puStack_c0 = &UNK_110ab6230;
    puVar7 = auStack_90;
    func_0x000107c6111c(puVar7,auStack_80);
    func_0x000107c61174(ppuVar1);
    ppuStack_b8 = ppuVar1;
    func_0x000107c61174(param_6);
    uStack_b0 = param_6;
    func_0x000107c61174(param_7);
    uStack_98 = param_7;
    func_0x000107c61174(uVar2);
    uStack_a8 = uVar2;
    uStack_88 = param_1;
    func_0x000107c61174(param_4);
    uStack_a0 = param_4;
    func_0x000107c42fd4(uVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uStack_b0);
    ppuVar6 = ppuStack_b8;
  }
  else {
    func_0x000107c4f7c0(uVar5);
    func_0x000107c61180();
    puVar7 = auStack_e8;
    func_0x000107c6111c(puVar7,auStack_80);
    func_0x000107c61174(ppuVar1);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(uVar2);
    uStack_e0 = param_1;
    func_0x000107c61174(param_4);
    func_0x000107c430b4(uVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_6);
    ppuVar6 = ppuVar1;
  }
  func_0x000107c61170(ppuVar6);
  func_0x000107c61120(puVar7);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(ppuStack_138);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1009e89e4; end: 1009e8a7b;  */

void FUN_1009e89e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126bb558;
  func_0x000107c610f4(PTR_PTR_1126bb558);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  func_0x000107c466b4(puVar3,param_2,uVar4,uVar1,uVar2,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1009e8a7c; end: 1009e8aab;  */

void FUN_1009e8a7c(void)

{
  func_0x000107c610f4(PTR_PTR_1126bb550);
  func_0x000107c45fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009e8aac; end: 1009e8caf; -[SCViewedIncomingFriendsDefaultTracker initWithConfigsProvider:featureSettingsService:] */

undefined8 *
FUN_1009e8aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_1126fdd18;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3bfa4(puVar1);
    func_0x000107c61144(auStack_68,puVar1);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar5 = puVar1[1];
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c5a790(puVar3);
    func_0x000107c61180();
    uVar2 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c4da68();
    func_0x000107c61180();
    uVar6 = puVar1[4];
    puVar1[4] = uVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1009e8cb0; end: 1009e8d0b; -[SCViewedIncomingFriendsDefaultTracker _nextFriendsLastViewedTimestamp] */

/* WARNING: Possible PIC construction at 0x0001009e8cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009e8cf8) */

void FUN_1009e8cb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c3d968();
  func_0x000107c61180();
  func_0x000107c4d664(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1009e8d0c; end: 1009e8d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009e8d0c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar1 = lStack_68;
  FUN_100083b20(&lStack_68);
  lVar2 = lStack_68;
  FUN_100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_113092298);
  func_0x000107c615f0(uVar9);
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efb01d0);
  func_0x000107c3ebd4(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar9);
  lVar5 = lVar1;
  func_0x000107c3fa04(lVar1);
  func_0x000107c61180();
  lVar6 = lVar2;
  func_0x000107c42eac(lVar2);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126a7698;
  func_0x000107c610f8();
  func_0x000107c45df4();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c615e8(lVar5);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lStack_68);
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009e8e8c);
  (*pcVar3)();
}



/* Entry: 1009e8d14; end: 1009e8e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009e8d14(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar1 = lStack_68;
  FUN_100083b20(&lStack_68);
  lVar2 = lStack_68;
  FUN_100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_113092298);
  func_0x000107c615f0(uVar9);
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efb01d0);
  func_0x000107c3ebd4(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar9);
  lVar5 = lVar1;
  func_0x000107c3fa04(lVar1);
  func_0x000107c61180();
  lVar6 = lVar2;
  func_0x000107c42eac(lVar2);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126a7698;
  func_0x000107c610f8();
  func_0x000107c45df4();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c615e8(lVar5);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lStack_68);
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009e8e8c);
  (*pcVar3)();
}



/* Entry: 1009e8e8c; end: 1009e8f67; -[SCFriendingConfigsAdaptor initWithCircumstanceEngine:featureSettingsService:timeProvider:shouldRemoveUserLevelPermission:] */

undefined1 *
FUN_1009e8e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e7bf0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009e8f68; end: 1009e8f6b;  */

void FUN_1009e8f68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009e8f6c; end: 1009e8f9f;  */

void FUN_1009e8f6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009e8fa0; end: 1009e8ffb; -[SCFriendingConfigsAdaptor addedFriendsTimestamp] */

void FUN_1009e8fa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3d968();
  func_0x000107c4d968(puVar3,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1009e8ffc; end: 1009e900b; -[SCFeatureSettingsService addedFriendsTimestamp] */

void FUN_1009e8ffc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeecb8,0);
  return;
}



/* Entry: 1009e900c; end: 1009eb5af;  */

void FUN_1009e900c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce45b0;
  param_1[1] = &PTR_DAT_110ce4610;
  return;
}



/* Entry: 1009eb5b0; end: 1009eb5ff;  */

void FUN_1009eb5b0(long param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 0x200;
    }
    *(ushort *)(lVar2 + 0xe9) = *(ushort *)(lVar2 + 0xe9) & 0xfdff | uVar1;
  }
  return;
}



/* Entry: 1009eb600; end: 1009eba27;  */

void FUN_1009eb600(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 1009eba28; end: 1009eba33;  */

undefined8 FUN_1009eba28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1009eba34; end: 1009eba73;  */

undefined4 * FUN_1009eba34(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  FUN_1009eba28();
  if (param_1 < *(undefined4 **)(unaff_x19 + 4)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1009eba80();
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1009eba74; end: 1009eba7f;  */

void FUN_1009eba74(void)

{
  return;
}



/* Entry: 1009eba80; end: 1009ebaf3;  */

undefined8 FUN_1009eba80(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  FUN_1009eba74();
  FUN_1009ebaf4();
  FUN_10014b1ac();
  func_0x0001009ebb00();
  FUN_10014b1fc(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x0001009ebb10();
  FUN_10014b2a4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10014b328(auStack_48);
  return uVar1;
}



/* Entry: 1009ebaf4; end: 1009ebb27;  */

void FUN_1009ebaf4(void)

{
  return;
}



/* Entry: 1009ebb28; end: 1009ee2a7;  */

void FUN_1009ebb28(void)

{
  return;
}



/* Entry: 1009ee2a8; end: 1009ee45f;  */

undefined1  [16] FUN_1009ee2a8(ulong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 < (undefined4 *)param_1[2]) {
    puVar2 = (ulong *)param_2;
    puVar4 = param_2;
    if (param_2 == puVar8) {
      *puVar8 = *param_3;
      param_1[1] = (ulong)(puVar8 + 1);
    }
    else {
      puVar11 = puVar8;
      if (puVar8 + -1 < puVar8) {
        *puVar8 = puVar8[-1];
        puVar11 = puVar8 + 1;
      }
      param_1[1] = (ulong)puVar11;
      if (puVar8 != param_2 + 1) {
        func_0x000107c610b8(param_2 + 1,param_2);
      }
      *param_2 = *param_3;
    }
  }
  else {
    uVar9 = *param_1;
    uVar13 = ((long)((long)puVar8 - uVar9) >> 2) + 1;
    if (uVar13 >> 0x3e != 0) {
      func_0x000107c2ab88();
      if (puStack_48 != puStack_50) {
        puStack_48 = (ulong *)((long)puStack_48 +
                              (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
      }
      if (puStack_58 != (ulong *)0x0) {
        func_0x000107c60e14();
      }
      func_0x000107c60bd8();
      if ((ulong)param_2 >> 0x3e != 0) {
        func_0x000104c4f740();
        puVar8 = (undefined4 *)param_1[2];
        puVar2 = param_1;
        puVar4 = param_2;
        if (puVar8 == (undefined4 *)param_1[3]) {
          puVar11 = (undefined4 *)*param_1;
          puVar4 = (undefined4 *)param_1[1];
          if (puVar4 < puVar11 || (long)puVar4 - (long)puVar11 == 0) {
            puVar5 = (undefined4 *)((long)puVar8 - (long)puVar11 >> 1);
            if ((long)puVar8 - (long)puVar11 == 0) {
              puVar5 = (undefined4 *)0x1;
            }
            puVar2 = (ulong *)param_1[4];
            puVar4 = puVar5;
            FUN_1009ee460();
            puVar11 = (undefined4 *)((long)puVar2 + ((ulong)puVar5 & 0xfffffffffffffffc));
            lVar3 = param_1[2] - (long)param_1[1];
            puVar8 = puVar11;
            if (lVar3 != 0) {
              puVar8 = (undefined4 *)((long)puVar11 + lVar3);
              puVar5 = (undefined4 *)param_1[1];
              puVar12 = puVar11;
              do {
                *puVar12 = *puVar5;
                lVar3 = lVar3 + -4;
                puVar5 = puVar5 + 1;
                puVar12 = puVar12 + 1;
              } while (lVar3 != 0);
            }
            puVar6 = (ulong *)*param_1;
            *param_1 = (ulong)puVar2;
            param_1[1] = (ulong)puVar11;
            param_1[2] = (ulong)puVar8;
            param_1[3] = (long)puVar2 + (long)puVar4 * 4;
            if (puVar6 != (ulong *)0x0) {
              func_0x000107c60e14(puVar6);
              puVar8 = (undefined4 *)param_1[2];
              puVar2 = puVar6;
            }
          }
          else {
            lVar3 = (((long)puVar4 - (long)puVar11 >> 2) + 1) / 2;
            puVar6 = (ulong *)(puVar4 + -lVar3);
            lVar1 = (long)puVar8 - (long)puVar4;
            if (lVar1 != 0) {
              puVar2 = puVar6;
              func_0x000107c610b8(puVar6,puVar4,lVar1);
              puVar4 = (undefined4 *)param_1[1];
            }
            puVar8 = (undefined4 *)((long)puVar6 + lVar1);
            param_1[1] = (ulong)(puVar4 + -lVar3);
          }
        }
        *puVar8 = *param_2;
        param_1[2] = (ulong)(puVar8 + 1);
        auVar16._8_8_ = puVar4;
        auVar16._0_8_ = puVar2;
        return auVar16;
      }
      lVar3 = (long)param_2 << 2;
      func_0x000107c60e20(lVar3);
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = lVar3;
      return auVar15;
    }
    uVar7 = (long)param_1[2] - uVar9;
    uVar10 = (long)uVar7 >> 1;
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar10 = 0x3fffffffffffffff;
    }
    puStack_38 = param_1;
    if (uVar10 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_1009ee460();
    }
    puStack_50 = (ulong *)((long)puVar2 + ((long)param_2 - uVar9));
    uStack_40 = (long)puVar2 + uVar10 * 4;
    puStack_58 = puVar2;
    puStack_48 = puStack_50;
    FUN_1009ee494(&puStack_58,param_3);
    puVar2 = puStack_50;
    func_0x000107c610b4(puStack_48,param_2,param_1[1] - (long)param_2);
    puVar4 = (undefined4 *)*param_1;
    puStack_48 = (ulong *)((long)puStack_48 + (param_1[1] - (long)param_2));
    param_1[1] = (ulong)param_2;
    uVar13 = (long)puStack_50 - ((long)param_2 - (long)puVar4);
    func_0x000107c610b4(uVar13);
    puStack_58 = (ulong *)*param_1;
    *param_1 = uVar13;
    uVar13 = param_1[2];
    param_1[2] = uStack_40;
    param_1[1] = (ulong)puStack_48;
    if (puStack_58 != (ulong *)0x0) {
      puStack_50 = puStack_58;
      puStack_48 = puStack_58;
      uStack_40 = uVar13;
      func_0x000107c60e14();
    }
  }
  auVar14._8_8_ = puVar4;
  auVar14._0_8_ = puVar2;
  return auVar14;
}



/* Entry: 1009ee460; end: 1009ee493;  */

void FUN_1009ee460(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    func_0x000107c60e20((long)param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  puVar7 = (undefined4 *)param_1[2];
  if (puVar7 == (undefined4 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 1;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_1009ee460();
      puVar1 = (undefined4 *)(uVar3 + (uVar4 & 0xfffffffffffffffc));
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined4 *)((long)puVar1 + lVar8);
        puVar6 = (undefined4 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -4;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 4;
      if (uVar4 != 0) {
        func_0x000107c60e14(uVar4);
        puVar7 = (undefined4 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 2) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -4;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        func_0x000107c610b8(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined4 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -4;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = (ulong)(puVar7 + 1);
  return;
}



/* Entry: 1009ee494; end: 1009ee58f;  */

void FUN_1009ee494(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  
  puVar7 = (undefined4 *)param_1[2];
  if (puVar7 == (undefined4 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 1;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_1009ee460();
      puVar1 = (undefined4 *)(uVar3 + (uVar4 & 0xfffffffffffffffc));
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined4 *)((long)puVar1 + lVar8);
        puVar6 = (undefined4 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -4;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 4;
      if (uVar4 != 0) {
        func_0x000107c60e14(uVar4);
        puVar7 = (undefined4 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 2) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -4;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        func_0x000107c610b8(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined4 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -4;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = (ulong)(puVar7 + 1);
  return;
}



/* Entry: 1009ee590; end: 1009ee7bb;  */

undefined1  [16] FUN_1009ee590(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long extraout_x8;
  long lVar4;
  ulong extraout_x9;
  ulong uVar5;
  byte bVar6;
  ulong extraout_x10;
  ulong uVar7;
  ulong extraout_x11;
  ulong uVar8;
  ulong uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x0001009ed94c(0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = extraout_x9;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = extraout_x10;
  uVar5 = param_1[2];
  Hint_Prefetch(uVar5,0,2,0);
  uVar7 = SUB168(auVar1 * auVar2,8) ^ extraout_x11;
  uVar8 = uVar5 >> 0xc ^ uVar7 >> 7;
  bVar6 = (byte)uVar7 & 0x7f;
  lVar4 = extraout_x8;
  while( true ) {
    uVar8 = uVar8 & *param_1;
    uVar10 = *(undefined8 *)(uVar5 + uVar8);
    bVar11 = (byte)((ulong)uVar10 >> 8);
    bVar12 = (byte)((ulong)uVar10 >> 0x10);
    bVar13 = (byte)((ulong)uVar10 >> 0x18);
    bVar14 = (byte)((ulong)uVar10 >> 0x20);
    bVar15 = (byte)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar17 == bVar6),
                          CONCAT16(-(bVar16 == bVar6),
                                   CONCAT15(-(bVar15 == bVar6),
                                            CONCAT14(-(bVar14 == bVar6),
                                                     CONCAT13(-(bVar13 == bVar6),
                                                              CONCAT12(-(bVar12 == bVar6),
                                                                       CONCAT11(-(bVar11 == bVar6),
                                                                                -((byte)uVar10 ==
                                                                                 bVar6))))))));
        uVar7 != 0; uVar7 = (uVar7 & 0x8080808080808080) - 1 & uVar7 & 0x8080808080808080) {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & *param_1;
      if (*(ulong *)(param_1[3] + uVar9 * 0x20) == param_2) {
        auVar18._8_8_ = param_1[3] + uVar9 * 0x20;
        auVar18._0_8_ = uVar5 + uVar9;
        return auVar18;
      }
    }
    if (CONCAT17(-(bVar17 == 0x80),
                 CONCAT16(-(bVar16 == 0x80),
                          CONCAT15(-(bVar15 == 0x80),
                                   CONCAT14(-(bVar14 == 0x80),
                                            CONCAT13(-(bVar13 == 0x80),
                                                     CONCAT12(-(bVar12 == 0x80),
                                                              CONCAT11(-(bVar11 == 0x80),
                                                                       -((byte)uVar10 == 0x80)))))))
                ) != 0) break;
    lVar4 = lVar4 + 8;
    uVar8 = lVar4 + uVar8;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 1009ee7bc; end: 1009ee81f;  */

long FUN_1009ee7bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2 + 0xa0;
    FUN_1001e6684(lVar1,param_3);
    if ((param_3 != 0) && ((int)lVar1 != 0)) {
      func_0x000107c610b4(*(undefined8 *)(lVar2 + 0xa0),param_2,param_3);
    }
  }
  return lVar1;
}



/* Entry: 1009ee820; end: 1009ef077;  */

long FUN_1009ee820(long param_1)

{
  func_0x0001009ea698(param_1 + 0x388);
  func_0x0001009ee884(param_1 + 0x368);
  func_0x0001009ea744(param_1 + 0x2f0);
  func_0x0001009ea744(param_1 + 0x2d8);
  func_0x0001009ee8cc(param_1 + 0x2a0);
  func_0x000100173f28(param_1 + 0xa0);
  func_0x0001009ea744(param_1 + 0x58);
  func_0x0001009ee8fc(param_1 + 0x30);
  func_0x0001009ee928(param_1 + 8);
  return param_1;
}



/* Entry: 1009ef078; end: 1009ef09b;  */

undefined ** FUN_1009ef078(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009ef09c; end: 1009ef11b;  */

void FUN_1009ef09c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110740240;
  func_0x000107c613fc(&UNK_110740240,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ef11c,puVar1);
  return;
}



/* Entry: 1009ef11c; end: 1009ef123;  */

void FUN_1009ef11c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305a800,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305a800,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107402d8;
  func_0x000107c613fc(&UNK_1107402d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104095fa0;
  FUN_10058fa64(&UNK_104095fa0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef124; end: 1009ef21b;  */

void FUN_1009ef124(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305a800,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305a800,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107402d8;
  func_0x000107c613fc(&UNK_1107402d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104095fa0;
  FUN_10058fa64(&UNK_104095fa0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef21c; end: 1009ef23f;  */

void FUN_1009ef21c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ef240; end: 1009ef247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ef240(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1000a13c0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_11305a810) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009ef248; end: 1009ef2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ef248(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1000a13c0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305a810) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009ef2b4; end: 1009ef2df;  */

void FUN_1009ef2b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ef2e0; end: 1009ef303;  */

undefined ** FUN_1009ef2e0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009ef304; end: 1009ef383;  */

void FUN_1009ef304(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107403c8;
  func_0x000107c613fc(&UNK_1107403c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ef384,puVar1);
  return;
}



/* Entry: 1009ef384; end: 1009ef38b;  */

void FUN_1009ef384(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305aa70,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305aa70,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740460;
  func_0x000107c613fc(&UNK_110740460,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104096b20;
  FUN_10058fa64(&UNK_104096b20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef38c; end: 1009ef483;  */

void FUN_1009ef38c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305aa70,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305aa70,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740460;
  func_0x000107c613fc(&UNK_110740460,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104096b20;
  FUN_10058fa64(&UNK_104096b20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef484; end: 1009ef4a7;  */

void FUN_1009ef484(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ef4a8; end: 1009ef4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ef4a8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100099780();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_11305aa80) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009ef4b0; end: 1009ef51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ef4b0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100099780();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305aa80) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009ef51c; end: 1009ef547;  */

void FUN_1009ef51c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ef548; end: 1009ef56f;  */

undefined ** FUN_1009ef548(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009ef570; end: 1009ef5af;  */

void FUN_1009ef570(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ef554();
  FUN_100082720("PlayerServicesEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ef5b0; end: 1009ef5b7;  */

void FUN_1009ef5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b3c54);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ef5b8; end: 1009ef63b;  */

void FUN_1009ef5b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b3c54,param_2,&UNK_1014b3c58,param_2,&UNK_1014b3c80,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ef63c; end: 1009ef65f;  */

undefined ** FUN_1009ef63c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009ef660; end: 1009ef6df;  */

void FUN_1009ef660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107405a8;
  func_0x000107c613fc(&UNK_1107405a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ef6e0,puVar1);
  return;
}



/* Entry: 1009ef6e0; end: 1009ef6e7;  */

void FUN_1009ef6e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305ae80,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305ae80,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740640;
  func_0x000107c613fc(&UNK_110740640,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104097958;
  FUN_10058fa64(&UNK_104097958,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef6e8; end: 1009ef7df;  */

void FUN_1009ef6e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305ae80,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305ae80,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740640;
  func_0x000107c613fc(&UNK_110740640,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104097958;
  FUN_10058fa64(&UNK_104097958,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef7e0; end: 1009ef803;  */

void FUN_1009ef7e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ef804; end: 1009ef80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ef804(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_10009d164();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_11305ae90) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_11305ae98) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_11305aea0) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009ef810; end: 1009ef8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ef810(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10009d164();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305ae90) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11305ae98) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11305aea0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009ef8b4; end: 1009ef913;  */

void FUN_1009ef8b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ef914; end: 1009ef937;  */

undefined ** FUN_1009ef914(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009ef938; end: 1009ef9b7;  */

void FUN_1009ef938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110740988;
  func_0x000107c613fc(&UNK_110740988,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ef9b8,puVar1);
  return;
}



/* Entry: 1009ef9b8; end: 1009ef9bf;  */

void FUN_1009ef9b8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305b5b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305b5b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740a20;
  func_0x000107c613fc(&UNK_110740a20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10409beec;
  FUN_10058fa64(&UNK_10409beec,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ef9c0; end: 1009efab7;  */

void FUN_1009ef9c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305b5b0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305b5b0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740a20;
  func_0x000107c613fc(&UNK_110740a20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10409beec;
  FUN_10058fa64(&UNK_10409beec,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009efab8; end: 1009efadb;  */

void FUN_1009efab8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009efadc; end: 1009efaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009efadc(undefined8 *param_1)

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
  FUN_1000a2e50();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_11305b5c0) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_11305b5c8) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_11305b5d0) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_11305b5d8) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_11305b5e0) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_11305b5e8) = uVar6;
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


