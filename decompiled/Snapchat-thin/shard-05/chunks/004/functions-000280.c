/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103db54d0; end: 103db557b; -[SCSCPostRegistrationScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103db54d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103db53b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103db557c; end: 103db55db; -[SCSCPostRegistrationScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db557c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11300a628,0);
  *(undefined8 *)(param_1 + _DAT_11300a630) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db55dc; end: 103db560f;  */

void FUN_103db55dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103db5610; end: 103db5647; -[SCSCPostRegistrationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db5610(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_11300a628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300a630));
  return;
}



/* Entry: 103db5648; end: 103db5667;  */

void FUN_103db5648(void)

{
  func_0x000107c61168(&PTR_PTR_11294ae30);
  return;
}



/* Entry: 103db5668; end: 103db5693; +[SCBillboardLocaleConverter mappingCOFName] */

void FUN_103db5668(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1b88f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db5694; end: 103db56bf; +[SCBillboardLocaleConverter fallbackToEnCOFName] */

void FUN_103db5694(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f1b8920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db56c0; end: 103db5743;  */

undefined1  [16] FUN_103db56c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_1;
  __s10Foundation6LocaleV18preferredLanguagesSaySSGvgZ();
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
    uVar2 = 0xe000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c61434(uVar2);
  }
  func_0x000107c6142c();
  FUN_103db5744(param_1,uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 103db5744; end: 103db5beb;  */

undefined1  [16] FUN_103db5744(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  long extraout_x8;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  ulong auStack_98 [3];
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar10 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = -extraout_x8;
  puVar15 = auStack_a0 + lVar10;
  if (lRam00000001135debb8 != -1) {
    func_0x000107c61568(0x1135debb8,FUN_103db5ca4);
  }
  uVar2 = uRam00000001135debc0;
  uStack_70 = param_1;
  func_0x000107c6157c(uRam00000001135debc0);
  uVar11 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  func_0x000100075034(auStack_98,0x103db6530,&uStack_80,uVar11);
  func_0x000107c61574(uVar2);
  uVar1 = auStack_98[0];
  if (*(long *)(auStack_98[0] + 0x10) != 0) {
    func_0x000107c61434(auStack_98[0]);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100029284();
    uVar6 = auStack_98[0];
    if ((uVar4 & 1) != 0) {
      puVar9 = (ulong *)(*(long *)(auStack_98[0] + 0x38) + uVar3 * 0x10);
      uVar4 = *puVar9;
      uVar6 = puVar9[1];
      func_0x000107c61434(uVar6);
      func_0x000107c6142c(auStack_98[0]);
      uVar3 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar3 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        func_0x000107c6142c(auStack_98[0]);
        goto LAB_103db5b94;
      }
    }
    func_0x000107c6142c(uVar6);
  }
  if (lRam00000001135debc8 != -1) {
    func_0x000107c61568(0x1135debc8,FUN_103db6548);
  }
  uVar3 = uRam00000001135debd0;
  if (*(long *)(uRam00000001135debd0 + 0x10) != 0) {
    func_0x000107c61434(uRam00000001135debd0);
    uVar4 = param_2;
    uVar12 = param_3;
    func_0x000100029284();
    uVar6 = uVar3;
    if ((uVar12 & 1) != 0) {
      puVar9 = (ulong *)(*(long *)(uVar3 + 0x38) + uVar4 * 0x10);
      uVar4 = *puVar9;
      uVar6 = puVar9[1];
      func_0x000107c61434(uVar6);
      func_0x000107c6142c(uVar3);
      uVar12 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar12 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar12 != 0) {
        func_0x000107c6142c(auStack_98[0]);
        goto LAB_103db5b94;
      }
    }
    func_0x000107c6142c(uVar6);
  }
  puVar5 = PTR_PTR_1126ada58;
  func_0x000107c610f8(PTR_PTR_1126ada58);
  func_0x000107c453e4();
  uVar6 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000108b9a398(puVar5,uVar6,1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  auStack_98[0] = 0x2d;
  auStack_98[1] = 0xe100000000000000;
  lVar7 = 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  __s10Foundation6LocaleVMa();
  puVar8 = puVar15;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar15,1,1,lVar7);
  func_0x000100e8b654();
  *(undefined1 **)((long)auStack_b0 + lVar10) = puVar8;
  *(undefined1 **)((long)auStack_b0 + lVar10 + 8) = puVar8;
  puVar9 = auStack_98;
  uVar14 = 0;
  func_0x000107c60218(puVar9,4,0,0,1,puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  func_0x000100eca640(puVar15);
  if ((uVar14 & 0xff) == 1) {
    func_0x000107c6142c(uVar1);
  }
  else {
    lVar10 = 0xf;
    uVar6 = param_3;
    func_0x000107c5fbd8(0xf,puVar9,param_2,param_3);
    func_0x000107c5fb2c();
    func_0x000107c6142c(uVar6);
    uVar6 = uVar1;
    if (*(long *)(uVar1 + 0x10) != 0) {
      func_0x000107c61434(uVar1);
      lVar7 = lVar10;
      puVar13 = puVar9;
      func_0x000100029284();
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(uVar1);
      }
      else {
        puVar13 = (ulong *)(*(long *)(uVar1 + 0x38) + lVar7 * 0x10);
        uVar4 = *puVar13;
        uVar6 = puVar13[1];
        func_0x000107c61434(uVar6);
        func_0x000107c61430(uVar1,2);
        uVar1 = uVar4 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar1 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          func_0x000107c6142c(puVar9);
          goto LAB_103db5b94;
        }
      }
    }
    func_0x000107c6142c(uVar6);
    if (*(long *)(uVar3 + 0x10) != 0) {
      func_0x000107c61434(uVar3);
      lVar7 = lVar10;
      puVar13 = puVar9;
      func_0x000100029284();
      uVar6 = uVar3;
      if (((ulong)puVar13 & 1) != 0) {
        puVar13 = (ulong *)(*(long *)(uVar3 + 0x38) + lVar7 * 0x10);
        uVar4 = *puVar13;
        uVar6 = puVar13[1];
        func_0x000107c61434(uVar6);
        func_0x000107c6142c(uVar3);
        uVar1 = uVar4 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar1 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          func_0x000107c6142c(puVar9);
          goto LAB_103db5b94;
        }
      }
      func_0x000107c6142c(uVar6);
    }
    puVar5 = PTR_PTR_1126ada58;
    func_0x000107c610f8(PTR_PTR_1126ada58);
    func_0x000107c453e4();
    func_0x000107c5fadc(lVar10,puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000108b9a50c(puVar5,lVar10,1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar10);
  }
  uVar11 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f1b8920);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar11);
  if ((param_1 & 1) == 0) {
    func_0x000107c61434(param_3);
    uVar4 = param_2;
    uVar6 = param_3;
  }
  else {
    uVar4 = 0x6e65;
    uVar6 = 0xe200000000000000;
  }
LAB_103db5b94:
  auVar16._8_8_ = uVar6;
  auVar16._0_8_ = uVar4;
  return auVar16;
}



/* Entry: 103db5bec; end: 103db5ca3; +[SCBillboardLocaleConverter localeWithCircumstanceEngine:] */

void FUN_103db5bec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_3;
  func_0x000107c615f0();
  __s10Foundation6LocaleV18preferredLanguagesSaySSGvgZ();
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
    uVar2 = 0xe000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c61434(uVar2);
  }
  func_0x000107c6142c();
  func_0x000107c614ec(param_1);
  lVar1 = param_3;
  FUN_103db5744(param_3,uVar3,uVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fadc(lVar1,uVar3);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103db5ca4; end: 103db5cfb;  */

void FUN_103db5ca4(void)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001000285a8(0x112da94f8,&UNK_10d950a90);
  func_0x000107c613fc();
  puVar1 = &uStack_28;
  func_0x00010006c248();
  puRam00000001135debc0 = puVar1;
  return;
}



/* Entry: 103db5cfc; end: 103db649b;  */

void FUN_103db5cfc(ulong *param_1,ulong *param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  long extraout_x8;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  long unaff_x21;
  long lVar23;
  undefined1 auStack_130 [12];
  uint uStack_124;
  ulong *puStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined *apuStack_88 [3];
  long lStack_70;
  long lStack_58;
  
  puVar5 = (undefined *)0x0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lVar23 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  puVar6 = (undefined *)*param_2;
  if (puVar6 != (undefined *)0x0) {
    *param_1 = (ulong)puVar6;
    goto LAB_103db642c;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  uVar13 = 0x800000010f1b88f0;
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  if (param_3 != (undefined *)0x0) {
    puVar22 = param_3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (puVar22 == (undefined *)0x0) {
LAB_103db5edc:
      func_0x000107c61170(param_3);
    }
    else {
      puVar8 = puVar22;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      func_0x000107c61170(puVar22);
      uVar3 = (uint)(uVar13 >> 0x20);
      uVar18 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar18 != 0) {
          lVar19 = (long)(int)puVar8;
          lVar21 = (long)puVar8 >> 0x20;
          goto LAB_103db5ecc;
        }
        if ((uVar13 & 0xff000000000000) == 0) goto LAB_103db5ed8;
      }
      else {
        if (uVar18 != 2) {
          func_0x00010006c090(puVar8);
          func_0x000107c61170(param_3);
          goto LAB_103db6420;
        }
        lVar19 = *(long *)(puVar8 + 0x10);
        lVar21 = *(long *)(puVar8 + 0x18);
LAB_103db5ecc:
        if (lVar19 == lVar21) {
LAB_103db5ed8:
          func_0x00010006c090();
          goto LAB_103db5edc;
        }
      }
      func_0x000107c610f8(PTR_PTR_1126ae8d8);
      func_0x00010006c00c(puVar8,uVar13);
      puVar22 = puVar8;
      FUN_103db6b24(puVar8,uVar13);
      if (unaff_x21 == 0) {
        puStack_108 = puVar22;
        func_0x00010006c090(puVar8,uVar13);
        if (puStack_108 == (undefined *)0x0) {
          func_0x00010006c090(puVar8,uVar13);
          func_0x000107c61170(param_3);
        }
        else {
          puVar22 = puStack_108;
          uStack_118 = uVar13;
          func_0x000107c4fac8();
          func_0x000107c61180();
          if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103db648c);
            (*pcVar4)();
          }
          puStack_110 = puVar22;
          func_0x000107c600f4(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000100e15a08();
          func_0x000107c601c0(apuStack_88,puVar5);
          puStack_120 = param_1;
          puStack_100 = param_3;
          if (lStack_70 == 0) {
            puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            do {
              func_0x000100102924(apuStack_88,auStack_a8);
              func_0x000100102924(auStack_a8,auStack_c8);
              uVar7 = 0;
              FUN_103db6be4(0);
              plVar11 = &lStack_58;
              func_0x000107c6147c(plVar11,auStack_c8,PTR___sypN_11034f1a8 + 8,uVar7,6);
              lVar19 = lStack_58;
              if ((((ulong)plVar11 & 1) != 0) && (lStack_58 != 0)) {
                puVar10 = puStack_d8;
                func_0x000107c61550();
                if (((int)puVar10 == 0) ||
                   (((long)puStack_d8 < 0 ||
                    (puVar10 = puStack_d8, ((ulong)puStack_d8 >> 0x3e & 1) != 0)))) {
                  if ((ulong)puStack_d8 >> 0x3e == 0) {
                    puVar9 = *(undefined **)(((ulong)puStack_d8 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar9 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puStack_d8) {
                      puVar9 = puStack_d8;
                    }
                    func_0x000107c60480(puVar9);
                  }
                  puVar10 = (undefined *)0x0;
                  FUN_103db66d0(0,puVar9 + 1,1,puStack_d8);
                }
                uVar20 = (ulong)puVar10 & 0xffffffffffffff8;
                uVar13 = *(ulong *)(uVar20 + 0x10);
                puStack_d8 = puVar10;
                if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar13) {
                  puStack_d8 = (undefined *)(ulong)(1 < *(ulong *)(uVar20 + 0x18));
                  FUN_103db66d0(puStack_d8,uVar13 + 1,1,puVar10);
                  uVar20 = (ulong)puStack_d8 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar20 + 0x10) = uVar13 + 1;
                *(long *)(uVar20 + uVar13 * 8 + 0x20) = lVar19;
                param_3 = puStack_100;
              }
              func_0x000107c601c0(apuStack_88,puVar5,puVar22);
            } while (lStack_70 != 0);
          }
          func_0x000107c61170(puStack_110);
          (**(code **)(lVar23 + 8))(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          if ((ulong)puStack_d8 >> 0x3e == 0) {
            puVar22 = *(undefined **)(((ulong)puStack_d8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar22 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_d8) {
              puVar22 = puStack_d8;
            }
            func_0x000107c60480();
          }
          if (puVar22 != (undefined *)0x0) {
            uStack_e0 = (ulong)puStack_d8 & 0xffffffffffffff8;
            puVar10 = (undefined *)0x0;
            do {
              while( true ) {
                if (((ulong)puStack_d8 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(uStack_e0 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103db645c);
                    (*pcVar4)();
                  }
                  puVar9 = *(undefined **)(puStack_d8 + (long)puVar10 * 8 + 0x20);
                  func_0x000107c61174();
                  puVar15 = puVar5;
                }
                else {
                  puVar9 = puVar10;
                  puVar15 = puStack_d8;
                  FUN_103db6970();
                }
                puVar1 = puVar10 + 1;
                if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103db6458);
                  (*pcVar4)();
                }
                puVar5 = puVar9;
                func_0x000107c4a8c4();
                func_0x000107c61180();
                if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103db6488);
                  (*pcVar4)();
                }
                puVar12 = puVar5;
                func_0x000107c5faec();
                puVar14 = puVar15;
                func_0x000107c61170(puVar5);
                puVar5 = puVar9;
                func_0x000107c5dc0c();
                func_0x000107c61180();
                if (puVar5 == (undefined *)0x0) break;
                puVar10 = puVar5;
                func_0x000107c5faec();
                puStack_110 = puVar10;
                func_0x000107c61170(puVar5);
                puVar5 = puVar6;
                func_0x000107c61558();
                uStack_124 = (uint)puVar5;
                puVar10 = puVar12;
                puVar16 = puVar15;
                apuStack_88[0] = puVar6;
                func_0x000100029284();
                uVar13 = (ulong)~(uint)puVar16 & 1;
                lVar23 = *(long *)(puVar6 + 0x10) + uVar13;
                if (SCARRY8(*(long *)(puVar6 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103db6480);
                  (*pcVar4)();
                }
                if (*(long *)(puVar6 + 0x18) < lVar23) {
                  func_0x0001001833c8(lVar23,uStack_124);
                  puVar10 = puVar12;
                  puVar17 = puVar15;
                  func_0x000100029284();
                  puVar5 = (undefined *)((ulong)puVar16 & 0xffffffff);
                  puVar6 = apuStack_88[0];
                  if (((uint)puVar16 & 1) != ((uint)puVar17 & 1)) {
                    func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103db649c);
                    (*pcVar4)();
                  }
                }
                else {
                  puVar5 = puVar16;
                  puVar6 = apuStack_88[0];
                  if ((uStack_124 & 1) == 0) {
                    func_0x000100184498();
                    puVar5 = (undefined *)((ulong)puVar16 & 0xffffffff);
                    puVar6 = apuStack_88[0];
                  }
                }
                apuStack_88[0] = puVar6;
                if (((ulong)puVar16 & 1) == 0) {
                  *(ulong *)(puVar6 + ((ulong)puVar10 >> 6) * 8 + 0x40) =
                       *(ulong *)(puVar6 + ((ulong)puVar10 >> 6) * 8 + 0x40) |
                       1L << ((ulong)puVar10 & 0x3f);
                  puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + (long)puVar10 * 0x10);
                  *puVar2 = (ulong)puVar12;
                  puVar2[1] = (ulong)puVar15;
                  puVar2 = (ulong *)(*(long *)(puVar6 + 0x38) + (long)puVar10 * 0x10);
                  *puVar2 = (ulong)puStack_110;
                  puVar2[1] = (ulong)puVar14;
                  func_0x000107c61170(puVar9);
                  if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103db6484);
                    (*pcVar4)();
                  }
                  *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
                }
                else {
                  puVar2 = (ulong *)(*(long *)(puVar6 + 0x38) + (long)puVar10 * 0x10);
                  uVar13 = puVar2[1];
                  *puVar2 = (ulong)puStack_110;
                  puVar2[1] = (ulong)puVar14;
                  func_0x000107c6142c(puVar15);
                  func_0x000107c61170(puVar9);
                  func_0x000107c6142c(uVar13);
                }
LAB_103db63c8:
                param_3 = puStack_100;
                puVar10 = puVar1;
                if (puVar1 == puVar22) goto LAB_103db63e8;
              }
              func_0x000107c61434(puVar6);
              puVar14 = puVar15;
              func_0x000100029284();
              puVar5 = puVar14;
              func_0x000107c6142c(puVar6);
              if (((ulong)puVar14 & 1) != 0) {
                puVar5 = puVar6;
                func_0x000107c61558();
                apuStack_88[0] = puVar6;
                if ((int)puVar5 == 0) {
                  func_0x000100184498();
                }
                puVar6 = apuStack_88[0];
                func_0x000107c6142c(*(undefined8 *)
                                     (*(long *)(apuStack_88[0] + 0x30) + (long)puVar12 * 0x10 + 8));
                func_0x000107c6142c(*(undefined8 *)
                                     (*(long *)(puVar6 + 0x38) + (long)puVar12 * 0x10 + 8));
                puVar5 = puVar6;
                func_0x00010105bd08(puVar12);
                func_0x000107c6142c(puVar15);
                func_0x000107c61170(puVar9);
                goto LAB_103db63c8;
              }
              func_0x000107c6142c(puVar15);
              func_0x000107c61170(puVar9);
              param_3 = puStack_100;
              puVar10 = puVar10 + 1;
            } while (puVar1 != puVar22);
          }
LAB_103db63e8:
          func_0x000107c61170(puStack_108);
          func_0x000107c6142c(0);
          func_0x00010006c090(puVar8,uStack_118);
          func_0x000107c6142c(puStack_d8);
          func_0x000107c61170(param_3);
          param_1 = puStack_120;
        }
      }
      else {
        func_0x00010006c090(puVar8,uVar13);
        func_0x000107c614ac(unaff_x21);
        func_0x00010006c090(puVar8,uVar13);
        func_0x000107c61170(param_3);
      }
    }
  }
LAB_103db6420:
  *param_2 = (ulong)puVar6;
  *param_1 = (ulong)puVar6;
LAB_103db642c:
  func_0x000107c61434(puVar6);
  return;
}



/* Entry: 103db649c; end: 103db64d7; -[SCBillboardLocaleConverter init] */

void FUN_103db649c(undefined8 param_1)

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



/* Entry: 103db64d8; end: 103db650b;  */

void FUN_103db64d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103db650c; end: 103db650f; -[SCBillboardLocaleConverter .cxx_destruct] */

void FUN_103db650c(void)

{
  return;
}



/* Entry: 103db6510; end: 103db6547;  */

void FUN_103db6510(void)

{
  func_0x000107c61168(&PTR_PTR_11294aef0);
  return;
}



/* Entry: 103db6548; end: 103db6673;  */

void FUN_103db6548(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  lVar11 = 0x2c;
  lVar7 = 0x2c;
  func_0x000107c60498();
  func_0x000107c6157c();
  puVar12 = (undefined8 *)0x11300a6c8;
  while( true ) {
    uVar3 = puVar12[-3];
    uVar4 = puVar12[-2];
    uVar9 = puVar12[-1];
    uVar5 = *puVar12;
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    uVar8 = uVar3;
    uVar10 = uVar4;
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103db6670);
      (*pcVar6)();
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar7 + 0x40 + uVar10) = *(ulong *)(lVar7 + 0x40 + uVar10) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x10);
    *puVar2 = uVar9;
    puVar2[1] = uVar5;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) break;
    puVar12 = puVar12 + 4;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      func_0x000107c61574(lVar7);
      uVar9 = 0x112d38308;
      func_0x0001000285a8(0x112d38308,&UNK_10d902040);
      func_0x000107c61408(0x11300a6b0,0x2c,uVar9);
      lRam00000001135debd0 = lVar7;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x103db6674);
  (*pcVar6)();
}



/* Entry: 103db6674; end: 103db66cf;  */

void FUN_103db6674(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103db6be4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11300ac38;
  plVar5 = (long *)&UNK_10dc931b0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103db66d0; end: 103db67f7;  */

ulong FUN_103db66d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103db67f8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103db67f8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103db67f4);
      (*pcVar1)();
    }
    FUN_103db6878(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103db67f8; end: 103db6877;  */

undefined * FUN_103db67f8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103db6674();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103db6878; end: 103db696f;  */

long FUN_103db6878(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103db696c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103db6970);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103db6be4(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103db6be4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103db6968);
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



/* Entry: 103db6970; end: 103db6b23;  */

ulong FUN_103db6970(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103db6a54);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103db6a58);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ada60;
    func_0x000107c61168(PTR_PTR_1126ada60);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ada60;
    func_0x000107c61168(PTR_PTR_1126ada60);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103db6be4(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103db6b24);
  (*pcVar2)();
}



/* Entry: 103db6b24; end: 103db6be3;  */

undefined1  [16] FUN_103db6b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
  func_0x000107c60e78();
  if (puRam000000011300ac30 != (undefined *)0x0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = puRam000000011300ac30;
    return auVar5;
  }
  puVar2 = PTR_PTR_1126ada60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam000000011300ac30 = puVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 103db6be4; end: 103db6c27;  */

void FUN_103db6be4(void)

{
  undefined *puVar1;
  
  if (puRam000000011300ac30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ada60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam000000011300ac30 = puVar1;
  return;
}



/* Entry: 103db6c28; end: 103db6e0b;  */

void FUN_103db6c28(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined *puStack_70;
  
  lVar8 = *(long *)(param_2 + 8);
  lVar10 = *(long *)(lVar8 + 0x10);
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    FUN_103db7420(0,lVar10,0);
    puVar9 = (undefined8 *)(lVar8 + 0x20);
    do {
      puVar4 = puStack_70;
      uVar1 = *(undefined4 *)((long)puVar9 + 0x2f);
      uVar14 = puVar9[3];
      uVar13 = puVar9[2];
      uVar12 = puVar9[4];
      uVar16 = puVar9[1];
      uVar15 = *puVar9;
      uStack_88 = (undefined7)puVar9[5];
      uStack_81 = (undefined1)uVar1;
      bStack_80 = (byte)((uint)uVar1 >> 8);
      uStack_7f = (undefined1)((uint)uVar1 >> 0x10);
      uVar2 = uStack_7f;
      uStack_7e = (undefined1)((uint)uVar1 >> 0x18);
      uVar5 = CONCAT17(uStack_81,uStack_88);
      uVar11 = (ulong)bStack_80;
      puVar6 = &uStack_e8;
      uStack_b0 = uVar15;
      uStack_a8 = uVar16;
      uStack_a0 = uVar13;
      uStack_98 = uVar14;
      uStack_90 = uVar12;
      FUN_103db7730(&uStack_b0);
      FUN_103db9d30();
      uStack_e8 = uVar5;
      puStack_e0 = puVar6;
      func_0x000107c61434(puVar6);
      uVar7 = 0xa400000000000000;
      func_0x000107c5fb78(0x20b7c220,0xa400000000000000);
      func_0x000107c6142c(puVar6);
      puVar6 = puStack_e0;
      uVar5 = uStack_e8;
      FUN_103dba07c(uVar11);
      uStack_e8 = uVar5;
      puStack_e0 = puVar6;
      func_0x000107c61434(puVar6);
      func_0x000107c5fb78(uVar11,uVar7);
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(uVar7);
      puVar6 = puStack_e0;
      uVar5 = uStack_e8;
      func_0x000107c61434(uVar16);
      func_0x000107c61434(uVar14);
      func_0x000107c61174();
      func_0x000103db776c(&uStack_b0);
      uVar3 = uStack_7e;
      uVar11 = *(ulong *)(puVar4 + 0x10);
      puStack_70 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
        FUN_103db7420(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar11 + 1;
      *(undefined8 *)(puStack_70 + uVar11 * 0x40 + 0x20) = uVar15;
      *(undefined8 *)(puStack_70 + uVar11 * 0x40 + 0x28) = uVar16;
      *(undefined8 *)(puStack_70 + uVar11 * 0x40 + 0x30) = uVar13;
      *(undefined8 *)(puStack_70 + uVar11 * 0x40 + 0x38) = uVar14;
      *(undefined8 *)(puStack_70 + uVar11 * 0x40 + 0x40) = uVar12;
      *(undefined8 *)(puStack_70 + uVar11 * 0x40 + 0x48) = uVar5;
      *(undefined8 **)(puStack_70 + uVar11 * 0x40 + 0x50) = puVar6;
      puStack_70[uVar11 * 0x40 + 0x58] = uVar3;
      puVar9 = puVar9 + 7;
      puStack_70[uVar11 * 0x40 + 0x59] = uVar2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *param_1 = puStack_70;
  return;
}



/* Entry: 103db6e0c; end: 103db6e1f;  */

void FUN_103db6e0c(undefined8 param_1,char *param_2)

{
  *(bool *)param_1 = *param_2 == '\x01';
  return;
}



/* Entry: 103db6e20; end: 103db6efb;  */

void FUN_103db6e20(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar7 = 0;
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10) + 1;
  pbVar6 = (byte *)(*(long *)(param_2 + 8) + 0x52);
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      if (lVar7 == 1) {
        FUN_103dbdef8();
        lVar7 = param_3;
      }
      else {
        func_0x000103dbdfcc();
        lVar5 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        puVar1 = PTR___sSiN_11034deb0;
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        puVar2 = PTR___sSis7CVarArgsWP_11034df08;
        *(undefined **)(lVar5 + 0x38) = puVar1;
        *(undefined **)(lVar5 + 0x40) = puVar2;
        *(long *)(lVar5 + 0x20) = lVar7;
        lVar7 = param_3;
        func_0x000107c5fb00(param_2,param_3,lVar5);
        func_0x000107c6142c(param_3);
      }
      *param_1 = param_2;
      param_1[1] = lVar7;
      return;
    }
    bVar4 = SCARRY8(lVar7,(ulong)*pbVar6);
    lVar7 = lVar7 + (ulong)*pbVar6;
    pbVar6 = pbVar6 + 0x38;
  } while (!bVar4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103db6e60);
  (*pcVar3)();
}



/* Entry: 103db6efc; end: 103db6f2f;  */

void FUN_103db6efc(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10) + 1;
  pcVar3 = (char *)(*(long *)(param_2 + 8) + 0x52);
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) break;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 0x38;
  } while (cVar1 != '\x01');
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 103db6f30; end: 103db6fa3;  */

undefined8 FUN_103db6f30(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x11300ac40;
  func_0x0001000285a8(0x11300ac40,&UNK_10dc93268);
  pcVar2 = FUN_103db6c28;
  func_0x0001000bfde0(FUN_103db6c28,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_103db7680();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 103db6fa4; end: 103db6ff7;  */

undefined * FUN_103db6fa4(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_103db6e0c;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_103db6e0c,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 103db6ff8; end: 103db7067;  */

undefined8
FUN_103db6ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 103db7068; end: 103db717f;  */

byte FUN_103db7068(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar10 = *param_1;
  uVar11 = param_1[2];
  uVar13 = param_1[3];
  uVar12 = param_1[5];
  uVar3 = param_1[6];
  uVar7 = param_1[7];
  bVar9 = *(byte *)((long)param_1 + 0x39);
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  uVar2 = param_2[5];
  uVar5 = param_2[6];
  uVar8 = param_2[7];
  bVar6 = *(byte *)((long)param_2 + 0x39);
  if ((((uVar10 == *param_2) && (param_1[1] == param_2[1])) ||
      (func_0x000107c605b8(), (uVar10 & 1) != 0)) &&
     (((uVar11 == uVar1 && (uVar13 == uVar4)) ||
      (func_0x000107c605b8(uVar11,uVar13,uVar1,uVar4,0), (uVar11 & 1) != 0)))) {
    if ((uVar12 == uVar2) && (uVar3 == uVar5)) {
      if ((byte)uVar7 != (byte)uVar8) goto LAB_103db7120;
    }
    else {
      func_0x000107c605b8(uVar12,uVar3,uVar2,uVar5,0);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      if ((((byte)uVar7 ^ (byte)uVar8) & 1) != 0) {
        return 0;
      }
    }
    bVar9 = bVar9 ^ bVar6 ^ 1;
  }
  else {
LAB_103db7120:
    bVar9 = 0;
  }
  return bVar9;
}



/* Entry: 103db7180; end: 103db71e3;  */

long FUN_103db7180(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103db71e4; end: 103db7303;  */

undefined8 * FUN_103db71e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103db7304; end: 103db7377;  */

undefined8 * FUN_103db7304(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 103db7378; end: 103db741f;  */

int FUN_103db7378(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103db7420; end: 103db7457;  */

void FUN_103db7420(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103db7458();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103db7458; end: 103db767f;  */

undefined * FUN_103db7458(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103db7560);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x11300ac58;
    func_0x0001000285a8(0x11300ac58,&UNK_10dc93270);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_110710770);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x40 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103db7680; end: 103db76ef;  */

void FUN_103db7680(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam000000011300ac48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11300ac40;
  func_0x00010002969c(0x11300ac40,&UNK_10dc93268);
  uVar2 = uVar1;
  FUN_103db76f0();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam000000011300ac48 = puVar3;
  return;
}



/* Entry: 103db76f0; end: 103db772f;  */

void FUN_103db76f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011300ac50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc93224;
  func_0x000107c61520(&UNK_10dc93224,&UNK_110710770);
  puRam000000011300ac50 = puVar1;
  return;
}



/* Entry: 103db7730; end: 103db780f;  */

undefined8 FUN_103db7730(undefined8 param_1,undefined8 param_2)

{
  FUN_103db9028(param_2,param_1);
  return param_2;
}



/* Entry: 103db7810; end: 103db783b;  */

uint FUN_103db7810(long *param_1,long *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_f8 [56];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *param_1;
  lVar4 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\0') {
    if (cVar1 == '\0') {
      if (lVar6 == lVar4) {
code_r0x000101f18f58:
        uVar10 = 1;
      }
      else {
        if (*(long *)(lVar6 + 0x10) == *(long *)(lVar4 + 0x10)) {
          uVar8 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
          uVar15 = 0xffffffffffffffff;
          if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
            uVar15 = ~(-1L << (uVar8 & 0x3f));
          }
          uVar15 = uVar15 & *(ulong *)(lVar6 + 0x38);
          lVar7 = 0;
          while( true ) {
            if (uVar15 == 0) {
              do {
                lVar14 = lVar7 + 1;
                if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f18f7c);
                  (*pcVar2)();
                }
                if ((long)(uVar8 + 0x3f >> 6) <= lVar14) goto code_r0x000101f18f58;
                uVar15 = ((ulong *)(lVar6 + 0x38))[lVar14];
                lVar7 = lVar7 + 1;
              } while (uVar15 == 0);
              uVar5 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
              uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
              uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
              uVar15 = uVar15 - 1 & uVar15;
            }
            else {
              uVar5 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
              uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
              uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
              uVar15 = uVar15 - 1 & uVar15;
              lVar14 = lVar7;
            }
            lVar11 = *(long *)(*(long *)(lVar6 + 0x30) + (LZCOUNT(uVar5) | lVar14 << 6) * 8);
            uVar5 = *(ulong *)(lVar4 + 0x28);
            func_0x000107c60688(uVar5,lVar11);
            uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
            uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar4 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0) break;
            while (lVar7 = lVar14, *(long *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) != lVar11) {
              uVar5 = uVar5 + 1 & ~uVar9;
              if ((*(ulong *)(lVar4 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0)
              goto code_r0x000101f18f50;
            }
          }
        }
code_r0x000101f18f50:
        uVar10 = 0;
      }
      return uVar10;
    }
  }
  else if ((char)param_1[1] == '\x01') {
    if ((cVar1 == '\x01') && (lVar7 = *(long *)(lVar6 + 0x10), lVar7 == *(long *)(lVar4 + 0x10))) {
      if ((lVar7 != 0) && (lVar6 != lVar4)) {
        puVar12 = (undefined8 *)(lVar6 + 0x20);
        puVar13 = (undefined8 *)(lVar4 + 0x20);
        do {
          lVar7 = lVar7 + -1;
          uStack_b8 = puVar12[1];
          uStack_c0 = *puVar12;
          uStack_a8 = puVar12[3];
          uStack_b0 = puVar12[2];
          uStack_98 = puVar12[5];
          uStack_a0 = puVar12[4];
          uStack_90 = *(undefined2 *)(puVar12 + 6);
          uStack_78 = puVar13[1];
          uStack_80 = *puVar13;
          uStack_68 = puVar13[3];
          uStack_70 = puVar13[2];
          FUN_103db8e24(&uStack_c0,auStack_f8);
          FUN_103db8e24(&uStack_80,auStack_f8);
          puVar3 = &uStack_c0;
          func_0x000103dcc53c(puVar3,&uStack_80);
          uVar10 = (uint)puVar3;
          func_0x000103db8e60(&uStack_80);
          func_0x000103db8e60(&uStack_c0);
          if (((ulong)puVar3 & 1) == 0) break;
          puVar13 = puVar13 + 7;
          puVar12 = puVar12 + 7;
        } while (lVar7 != 0);
        goto LAB_103db8e08;
      }
      goto LAB_103db8e04;
    }
  }
  else if (lVar6 < 2) {
    if (lVar6 == 0) {
      if ((cVar1 == '\x02') && (lVar4 == 0)) {
LAB_103db8e04:
        uVar10 = 1;
        goto LAB_103db8e08;
      }
    }
    else if ((cVar1 == '\x02') && (lVar4 == 1)) goto LAB_103db8e04;
  }
  else if (lVar6 == 2) {
    if ((cVar1 == '\x02') && (lVar4 == 2)) goto LAB_103db8e04;
  }
  else if (lVar6 == 3) {
    if ((cVar1 == '\x02') && (lVar4 == 3)) goto LAB_103db8e04;
  }
  else if ((cVar1 == '\x02') && (lVar4 == 4)) goto LAB_103db8e04;
  uVar10 = 0;
LAB_103db8e08:
  return uVar10 & 1;
}



/* Entry: 103db783c; end: 103db78e7;  */

void FUN_103db783c(void)

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



/* Entry: 103db78e8; end: 103db790b;  */

undefined8 FUN_103db78e8(char *param_1,char *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined2 uStack_110;
  char cStack_10e;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined2 uStack_d0;
  char cStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar4 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar2 + 0x10);
  if (lVar5 == *(long *)(lVar4 + 0x10)) {
    if ((lVar5 != 0) && (lVar2 != lVar4)) {
      puVar6 = (undefined8 *)(lVar2 + 0x20);
      puVar7 = (undefined8 *)(lVar4 + 0x20);
      while( true ) {
        lVar5 = lVar5 + -1;
        uStack_98 = puVar6[5];
        uStack_120 = puVar6[4];
        uStack_118 = (undefined7)uStack_98;
        uStack_f8 = puVar7[1];
        uStack_100 = *puVar7;
        uStack_e8 = puVar7[3];
        uStack_f0 = puVar7[2];
        uStack_78 = puVar7[1];
        uStack_80 = *puVar7;
        uStack_68 = puVar7[3];
        uStack_70 = puVar7[2];
        uStack_e0 = puVar7[4];
        uStack_d8 = (undefined7)puVar7[5];
        uStack_138 = puVar6[1];
        uStack_140 = *puVar6;
        uStack_128 = puVar6[3];
        uStack_130 = puVar6[2];
        uVar1 = *(undefined4 *)((long)puVar6 + 0x2f);
        uStack_111 = (undefined1)uVar1;
        uStack_110 = (undefined2)((uint)uVar1 >> 8);
        cStack_10e = (char)((uint)uVar1 >> 0x18);
        uVar1 = *(undefined4 *)((long)puVar7 + 0x2f);
        uStack_d1 = (undefined1)uVar1;
        uStack_d0 = (undefined2)((uint)uVar1 >> 8);
        cStack_ce = (char)((uint)uVar1 >> 0x18);
        uStack_90 = *(undefined2 *)(puVar6 + 6);
        uStack_58 = puVar7[5];
        uStack_60 = puVar7[4];
        uStack_50 = *(undefined2 *)(puVar7 + 6);
        uStack_c0 = uStack_140;
        uStack_b8 = uStack_138;
        uStack_b0 = uStack_130;
        uStack_a8 = uStack_128;
        uStack_a0 = uStack_120;
        FUN_103db7730(&uStack_140,auStack_178);
        FUN_103db7730(&uStack_100,auStack_178);
        puVar3 = &uStack_c0;
        func_0x000103dcc53c(puVar3,&uStack_80);
        func_0x000103db776c(&uStack_100);
        func_0x000103db776c(&uStack_140);
        if ((((ulong)puVar3 & 1) == 0) || (cStack_10e != cStack_ce)) break;
        if (lVar5 == 0) {
          return 1;
        }
        puVar7 = puVar7 + 7;
        puVar6 = puVar6 + 7;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}



/* Entry: 103db790c; end: 103db7d03;  */

void FUN_103db790c(long param_1,char param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  byte *pbVar4;
  long unaff_x20;
  long lVar5;
  ulong uStack_38;
  
  if (param_2 == '\x01') {
    lVar5 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c4ee58();
    lVar3 = *(long *)(unaff_x20 + 0x40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      if (lVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103db7ab0);
        (*pcVar1)();
      }
      uStack_38 = *(ulong *)(unaff_x20 + 0x50);
      if (1 < uStack_38) goto LAB_103db7ab4;
      func_0x000107c4bb78();
      goto LAB_103db79c0;
    }
  }
  else if (param_2 == '\x02') {
    if (param_1 < 3) {
      if (param_1 == 0) {
        lVar3 = *(long *)(unaff_x20 + 0x40);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c4bd50();
LAB_103db79c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
          return;
        }
      }
      else if (param_1 == 2) {
        lVar3 = *(long *)(unaff_x20 + 0x40);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          uStack_38 = *(ulong *)(unaff_x20 + 0x50);
          if (1 < uStack_38) goto LAB_103db7ab4;
          func_0x000107c4bb7c();
          goto LAB_103db79c0;
        }
      }
    }
    else if (param_1 == 3) {
      lVar3 = *(long *)(unaff_x20 + 0x40);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        uStack_38 = *(ulong *)(unaff_x20 + 0x50);
        if (1 < uStack_38) {
LAB_103db7ab4:
          func_0x000107c60614(&UNK_11074e0a0,&uStack_38,&UNK_11074e0a0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103db7ad8);
          (*pcVar1)();
        }
        func_0x000107c4bb7c();
        goto LAB_103db79c0;
      }
    }
    else if (param_1 == 4) {
      lVar5 = 0;
      lVar3 = *(long *)(param_4 + 0x10) + 1;
      pbVar4 = (byte *)(param_4 + 0x52);
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        bVar2 = SCARRY8(lVar5,(ulong)*pbVar4);
        lVar5 = lVar5 + (ulong)*pbVar4;
        pbVar4 = pbVar4 + 0x38;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103db7a10);
          (*pcVar1)();
        }
      }
      lVar3 = *(long *)(unaff_x20 + 0x40);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        if (lVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103db7ab4);
          (*pcVar1)();
        }
        uStack_38 = *(ulong *)(unaff_x20 + 0x50);
        if (1 < uStack_38) goto LAB_103db7ab4;
        func_0x000107c4bb80();
        goto LAB_103db79c0;
      }
    }
  }
  return;
}



/* Entry: 103db7d04; end: 103db81f7;  */

void FUN_103db7d04(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_e8 [56];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  undefined *puStack_70;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar14 = *(ulong *)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar15 = 0;
    do {
      lVar11 = 0;
      if (uVar15 <= uVar14) {
        lVar11 = uVar14 - uVar15;
      }
      puVar12 = (undefined8 *)(param_1 + 0x20 + uVar15 * 0x38);
      uVar15 = uVar15 + 1;
      while( true ) {
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103db81e0);
          (*pcVar4)();
        }
        uStack_a8 = puVar12[1];
        puStack_b0 = (undefined *)*puVar12;
        uStack_98 = puVar12[3];
        uStack_a0 = puVar12[2];
        uStack_90 = puVar12[4];
        uStack_88 = (undefined7)puVar12[5];
        uStack_81._1_3_ = (undefined3)(*(uint *)((long)puVar12 + 0x2f) >> 8);
        uStack_81._0_1_ = (undefined1)((ulong)puVar12[5] >> 0x38);
        if ((*(uint *)((long)puVar12 + 0x2f) >> 0x18 & 1) != 0) break;
        lVar11 = lVar11 + -1;
        puVar12 = puVar12 + 7;
        uVar15 = uVar15 + 1;
        if (uVar15 - uVar14 == 1) goto LAB_103db7e38;
      }
      FUN_103db7730(&puStack_b0,auStack_e8);
      puVar8 = puVar13;
      func_0x000107c61558();
      puStack_70 = puVar13;
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000103db743c(0,*(long *)(puVar13 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(puStack_70 + 0x10);
      if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
        func_0x000103db743c(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
      *(undefined4 *)(puStack_70 + uVar2 * 0x38 + 0x4f) = uStack_81;
      *(undefined8 *)(puStack_70 + uVar2 * 0x38 + 0x38) = uStack_98;
      *(undefined8 *)(puStack_70 + uVar2 * 0x38 + 0x30) = uStack_a0;
      *(ulong *)(puStack_70 + uVar2 * 0x38 + 0x48) = CONCAT17((undefined1)uStack_81,uStack_88);
      *(undefined8 *)(puStack_70 + uVar2 * 0x38 + 0x40) = uStack_90;
      *(undefined8 *)(puStack_70 + uVar2 * 0x38 + 0x28) = uStack_a8;
      *(undefined **)(puStack_70 + uVar2 * 0x38 + 0x20) = puStack_b0;
      puVar13 = puStack_70;
    } while (uVar15 != uVar14);
  }
LAB_103db7e38:
  lVar11 = *(long *)(puVar13 + 0x10);
  if (lVar11 == 0) {
    func_0x000107c61574(puVar13);
    lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = puVar9;
    func_0x000100403514(0,lVar11,0);
    puVar12 = (undefined8 *)(puVar13 + 0x28);
    puVar8 = puStack_b0;
    do {
      uVar10 = puVar12[-1];
      uVar3 = *puVar12;
      uVar14 = *(ulong *)(puVar8 + 0x10);
      uVar15 = *(ulong *)(puVar8 + 0x18);
      puStack_b0 = puVar8;
      func_0x000107c61434(uVar3);
      if (uVar15 >> 1 <= uVar14) {
        func_0x000100403514(1 < uVar15,uVar14 + 1,1);
        puVar8 = puStack_b0;
      }
      puVar12 = puVar12 + 7;
      *(ulong *)(puVar8 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar8 + uVar14 * 0x10 + 0x20) = uVar10;
      *(undefined8 *)(puVar8 + uVar14 * 0x10 + 0x28) = uVar3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    func_0x000107c61574(puVar13);
    lVar11 = *(long *)(puVar8 + 0x10);
  }
  if (lVar11 == 0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    puStack_b0 = puVar9;
    func_0x0001010673e4(0,lVar11,0);
    puVar12 = (undefined8 *)(puVar8 + 0x28);
    do {
      puVar9 = puStack_b0;
      uVar10 = puVar12[-1];
      uVar3 = *puVar12;
      puVar13 = PTR_PTR_1126b15c8;
      func_0x000107c610f8();
      func_0x000107c61434(uVar3);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar3);
      func_0x000107c49278();
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(uVar10);
      uVar14 = *(ulong *)(puVar9 + 0x10);
      puStack_b0 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
        func_0x0001010673e4(1 < *(ulong *)(puVar9 + 0x18),uVar14 + 1,1);
      }
      puVar9 = puStack_b0;
      puVar12 = puVar12 + 2;
      *(ulong *)(puStack_b0 + 0x10) = uVar14 + 1;
      *(undefined **)(puStack_b0 + uVar14 * 8 + 0x20) = puVar13;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    func_0x000107c6142c(puVar8);
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar13 = puVar9;
      func_0x000107c60480();
    }
    else {
      puVar13 = *(undefined **)(puVar9 + 0x10);
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar7 = (undefined *)0x0;
    while (puVar13 != puVar7) {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar9 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103db81e8);
          (*pcVar4)();
        }
        puVar5 = *(undefined **)(puVar9 + (long)puVar7 * 8 + 0x20);
        func_0x000107c61174(puVar5);
      }
      else {
        puVar5 = puVar7;
        func_0x00010103193c(puVar7,puVar9);
      }
      puVar1 = puVar7 + 1;
      if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103db81e4);
        (*pcVar4)();
      }
      puVar6 = PTR_PTR_1126b1940;
      func_0x000107c610f8();
      func_0x000107c48810();
      func_0x000107c61170(puVar5);
      puVar7 = puVar7 + 1;
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar5 = puVar8;
            }
            func_0x000107c60480(puVar5);
          }
          puVar7 = (undefined *)0x0;
          FUN_103db8a3c(0,puVar5 + 1,1,puVar8);
        }
        uVar15 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar15 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar14) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          FUN_103db8a3c(puVar8,uVar14 + 1,1,puVar7);
          uVar15 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar14 + 1;
        *(undefined **)(uVar15 + uVar14 * 8 + 0x20) = puVar6;
        puVar7 = puVar1;
      }
    }
    func_0x000107c61574(puVar9);
    puVar9 = PTR_PTR_1126ae5c0;
    func_0x000107c61168(PTR_PTR_1126ae5c0);
    uVar10 = 0;
    FUN_103db8eb8(0,0x112e1f5e8,&PTR_PTR_1126b1940);
    puVar13 = puVar8;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar8,uVar10);
    func_0x000107c6142c(puVar8);
    func_0x000107c4d164(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    lVar11 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 != 0) {
      func_0x000107c4465c();
      func_0x000107c615e8(lVar11);
    }
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 103db81f8; end: 103db827f;  */

void FUN_103db81f8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_1 != 0) {
    lStack_30 = 0;
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (param_1,&lStack_30,&UNK_1107124a0);
    lVar1 = lStack_30;
    if (lStack_30 != 0) {
      if (*(long *)(lStack_30 + 0x10) != 0) {
        uStack_28 = 1;
        func_0x000100087c34(&lStack_30);
        func_0x000107c6142c(lVar1);
        return;
      }
      func_0x000107c6142c(lStack_30);
    }
  }
  lStack_30 = 2;
  uStack_28 = 2;
  func_0x000100087c34(&lStack_30);
  return;
}



/* Entry: 103db8280; end: 103db82ab;  */

void FUN_103db8280(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 103db82ac; end: 103db830b;  */

void FUN_103db82ac(long param_1)

{
  undefined8 uVar1;
  
  FUN_103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x58,7);
  return;
}



/* Entry: 103db830c; end: 103db83d7;  */

void FUN_103db830c(undefined8 param_1)

{
  if (lRam000000011300ac90 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c2a38);
  return;
}



/* Entry: 103db83d8; end: 103db8413;  */

void FUN_103db83d8(undefined1 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = (ulong)*(byte *)(param_2 + 1);
  FUN_103db8ef8(uVar2,uVar1,*param_3,*(undefined8 *)(param_3 + 8));
  *param_1 = (char)uVar2;
  *(ulong *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 103db8414; end: 103db85d7;  */

void FUN_103db8414(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar3 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar3 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c4ee58();
    if (0 < lVar3) {
      lVar1 = lVar3;
      func_0x000107c5fe14();
      lVar2 = 0;
      lStack_48 = lVar1;
      do {
        lVar2 = lVar2 + 1;
        func_0x000100f73104(auStack_38);
      } while (lVar3 != lVar2);
      func_0x0001000285a8(0x11300adc8,&UNK_10dc933f0);
      lVar3 = lStack_48;
      uStack_40 = 0;
      func_0x000100854cb0(&lStack_48);
      func_0x000107c6142c(lVar3);
    }
  }
  else if ((char)param_1[1] == '\x02') {
    if (lVar3 == 4) {
      FUN_103db7d04(*(undefined8 *)(param_2 + 8));
    }
    else if (lVar3 == 1) {
      func_0x000103db7bfc();
    }
    else if (lVar3 == 0) {
      func_0x0001000285a8(0x11300adc8,&UNK_10dc933f0);
      lStack_48 = 1;
      uStack_40 = 2;
      func_0x000100854cb0(&lStack_48);
    }
  }
  return;
}



/* Entry: 103db85d8; end: 103db8627;  */

undefined8 * FUN_103db85d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000103db85a0(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103db85c4(uVar3,uVar2);
  return param_1;
}



/* Entry: 103db8628; end: 103db8663;  */

undefined8 * FUN_103db8628(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103db85c4(uVar3,uVar2);
  return param_1;
}



/* Entry: 103db8664; end: 103db873b;  */

int FUN_103db8664(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103db873c; end: 103db87b3;  */

undefined1 * FUN_103db873c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103db87b4; end: 103db884b;  */

int FUN_103db87b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103db884c; end: 103db888b;  */

void FUN_103db884c(void)

{
  undefined *puVar1;
  
  if (puRam000000011300adc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc933c4;
  func_0x000107c61520(&UNK_10dc933c4,&UNK_110710850);
  puRam000000011300adc0 = puVar1;
  return;
}



/* Entry: 103db888c; end: 103db89bb;  */

undefined8 FUN_103db888c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined2 uStack_110;
  char cStack_10e;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined2 uStack_d0;
  char cStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar3 != 0) && (param_1 != param_2)) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    puVar5 = (undefined8 *)(param_2 + 0x20);
    while( true ) {
      lVar3 = lVar3 + -1;
      uStack_98 = puVar4[5];
      uStack_120 = puVar4[4];
      uStack_118 = (undefined7)uStack_98;
      uStack_f8 = puVar5[1];
      uStack_100 = *puVar5;
      uStack_e8 = puVar5[3];
      uStack_f0 = puVar5[2];
      uStack_78 = puVar5[1];
      uStack_80 = *puVar5;
      uStack_68 = puVar5[3];
      uStack_70 = puVar5[2];
      uStack_e0 = puVar5[4];
      uStack_d8 = (undefined7)puVar5[5];
      uStack_138 = puVar4[1];
      uStack_140 = *puVar4;
      uStack_128 = puVar4[3];
      uStack_130 = puVar4[2];
      uVar1 = *(undefined4 *)((long)puVar4 + 0x2f);
      uStack_111 = (undefined1)uVar1;
      uStack_110 = (undefined2)((uint)uVar1 >> 8);
      cStack_10e = (char)((uint)uVar1 >> 0x18);
      uVar1 = *(undefined4 *)((long)puVar5 + 0x2f);
      uStack_d1 = (undefined1)uVar1;
      uStack_d0 = (undefined2)((uint)uVar1 >> 8);
      cStack_ce = (char)((uint)uVar1 >> 0x18);
      uStack_90 = *(undefined2 *)(puVar4 + 6);
      uStack_58 = puVar5[5];
      uStack_60 = puVar5[4];
      uStack_50 = *(undefined2 *)(puVar5 + 6);
      uStack_c0 = uStack_140;
      uStack_b8 = uStack_138;
      uStack_b0 = uStack_130;
      uStack_a8 = uStack_128;
      uStack_a0 = uStack_120;
      FUN_103db7730(&uStack_140,auStack_178);
      FUN_103db7730(&uStack_100,auStack_178);
      puVar2 = &uStack_c0;
      func_0x000103dcc53c(puVar2,&uStack_80);
      func_0x000103db776c(&uStack_100);
      func_0x000103db776c(&uStack_140);
      if ((((ulong)puVar2 & 1) == 0) || (cStack_10e != cStack_ce)) break;
      if (lVar3 == 0) {
        return 1;
      }
      puVar5 = puVar5 + 7;
      puVar4 = puVar4 + 7;
    }
    return 0;
  }
  return 1;
}



/* Entry: 103db89bc; end: 103db8a3b;  */

undefined * FUN_103db89bc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103dbcb3c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103db8a3c; end: 103db8e23;  */

ulong FUN_103db8a3c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103db8b64);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103db89bc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103db8b60);
      (*pcVar1)();
    }
    func_0x000103db8b64(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103db8e24; end: 103db8e93;  */

undefined8 FUN_103db8e24(undefined8 param_1,undefined8 param_2)

{
  FUN_103dcc6b8(param_2,param_1);
  return param_2;
}



/* Entry: 103db8e94; end: 103db8eb7;  */

void FUN_103db8e94(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_1 != 0) {
    lStack_30 = 0;
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (param_1,&lStack_30,&UNK_1107124a0);
    lVar1 = lStack_30;
    if (lStack_30 != 0) {
      if (*(long *)(lStack_30 + 0x10) != 0) {
        uStack_28 = 1;
        func_0x000100087c34(&lStack_30);
        func_0x000107c6142c(lVar1);
        return;
      }
      func_0x000107c6142c(lStack_30);
    }
  }
  lStack_30 = 2;
  uStack_28 = 2;
  func_0x000100087c34(&lStack_30);
  return;
}



/* Entry: 103db8eb8; end: 103db8ef7;  */

void FUN_103db8eb8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103db8ef8; end: 103db8fcb;  */

undefined1  [16] FUN_103db8ef8(long param_1,char param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  
  if (param_2 == '\0') {
    func_0x000107c61434(param_4);
    FUN_103dba208(param_1,param_4);
    func_0x000107c6142c(param_4);
    param_3 = 0;
  }
  else if (param_2 == '\x01') {
    FUN_103dba3e8();
    param_3 = 0;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      func_0x000107c61434(param_4);
      param_1 = param_4;
    }
    else {
      func_0x000107c61434(param_4);
      param_3 = 1;
      param_1 = param_4;
    }
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    func_0x000107c61434(param_4);
    param_3 = 2;
    param_1 = param_4;
  }
  else {
    func_0x000107c61434(param_4);
    param_3 = 3;
    param_1 = param_4;
  }
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 103db8fcc; end: 103db9027;  */

long FUN_103db8fcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103db9028; end: 103db912f;  */

undefined8 * FUN_103db9028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined2 *)((long)param_1 + 0x31) = *(undefined2 *)((long)param_2 + 0x31);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 103db9130; end: 103db91a3;  */

undefined8 * FUN_103db9130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  return param_1;
}



/* Entry: 103db91a4; end: 103db925f;  */

int FUN_103db91a4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x33) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103db9260; end: 103db974f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db9260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_11300add8;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11300ade0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11300ade8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_11300adf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11300adf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11300ae00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11300ae08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11300ae10) = param_5;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db9750; end: 103db9763;  */

bool FUN_103db9750(byte *param_1)

{
  return (*param_1 & 0xfe) == 2;
}



/* Entry: 103db9764; end: 103db9837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db9764(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_11300ade8) = uVar1;
    lStack_50 = *(long *)(*(long *)(param_2 + _DAT_11300adf0) + _DAT_1130671d8);
    if (lStack_50 == 1) {
      if (*(long *)(param_2 + _DAT_11300ade0) != 0) {
        func_0x000107c42018();
      }
    }
    else {
      if (lStack_50 != 0) {
        func_0x000107c60614(&UNK_11074e0a0,&lStack_50,&UNK_11074e0a0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103db9838);
        (*pcVar2)();
      }
      FUN_103db9838();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103db9838; end: 103db98db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db9838(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130671d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_11300adf0);
  if (*(char *)(unaff_x20 + _DAT_11300ade8) == '\x03') {
    func_0x000107c61428(lVar2 + _DAT_1130671d0,auStack_38,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c43754();
  }
  else {
    func_0x000107c61428(lVar2 + _DAT_1130671d0,auStack_38,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c43758();
  }
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 103db98dc; end: 103db9a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db98dc(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_38;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_11300adf0);
  lStack_38 = *(long *)(lVar5 + _DAT_1130671d8);
  if (lStack_38 != 1) {
    if (lStack_38 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar5 + _DAT_1130671c8),PTR_s_attachUI__1125a0c08,param_1);
      return;
    }
    func_0x000107c60614(&UNK_11074e0a0,&lStack_38,&UNK_11074e0a0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103db9a20);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e84();
  lVar1 = _DAT_11300ade0;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300ade0);
  *(undefined **)(unaff_x20 + _DAT_11300ade0) = puVar3;
  func_0x000107c61170(uVar4);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c52aa4();
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c5a070();
      if (*(long *)(unaff_x20 + lVar1) != 0) {
        func_0x000107c52684();
        if (*(long *)(unaff_x20 + lVar1) != 0) {
          func_0x000107c5a074();
          if (*(long *)(unaff_x20 + lVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_msgSend_11034d288)
                      (0x3fe8000000000000,*(long *)(unaff_x20 + lVar1),
                       PTR_s_presentInUIContainer_withPullBar_112620be8,
                       *(undefined8 *)(lVar5 + _DAT_1130671c8),1,8);
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 103db9a20; end: 103db9a7f; -[_TtC21FollowCreatorsFeature31FollowCreatorsFeatureEntryPoint init] */

void FUN_103db9a20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsFeature.FollowCreatorsFeatureEntryPoint",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db9a4c);
  (*pcVar1)();
}



/* Entry: 103db9a80; end: 103db9b27; -[_TtC21FollowCreatorsFeature31FollowCreatorsFeatureEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103db9a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db9abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db9adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db9ac0) */
/* WARNING: Removing unreachable block (ram,0x000103db9aa0) */
/* WARNING: Removing unreachable block (ram,0x000103db9ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db9a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300adf0));
  return;
}



/* Entry: 103db9b28; end: 103db9b2f;  */

undefined8 FUN_103db9b28(void)

{
  return 0;
}



/* Entry: 103db9b30; end: 103db9b33; -[_TtC21FollowCreatorsFeature31FollowCreatorsFeatureEntryPoint tray:positionDidChange:] */

void FUN_103db9b30(void)

{
  return;
}



/* Entry: 103db9b34; end: 103db9b5b; -[_TtC21FollowCreatorsFeature31FollowCreatorsFeatureEntryPoint trayDidDismiss:] */

void FUN_103db9b34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103db9838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103db9b5c; end: 103db9cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103db9b5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_103db830c();
  lVar1 = _DAT_11300af00;
  ppuStack_48 = &PTR_DAT_110710798;
  uVar4 = 0x11300ae40;
  auStack_68[0] = param_1;
  uStack_50 = uVar3;
  func_0x0001000285a8(0x11300ae40,&UNK_10dc93480);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + lVar1) = uVar4;
  lVar1 = _DAT_11300af08;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_3 + lVar1) = uVar4;
  *(undefined **)(param_3 + _DAT_11300af10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_3 + _DAT_11300af18) = 0;
  *(undefined8 *)(param_3 + _DAT_11300af20) = 0;
  *(undefined8 *)(param_3 + _DAT_11300af28) = 0;
  *(undefined8 *)(param_3 + _DAT_11300af30) = 0;
  *(undefined8 *)(param_3 + _DAT_11300af38) = 0;
  *(undefined8 *)(param_3 + _DAT_11300af40) = 0;
  FUN_103db9cec(auStack_68,param_3 + _DAT_11300aef0);
  *(undefined8 *)(param_3 + _DAT_11300aef8) = param_2;
  plVar5 = &lStack_78;
  lStack_78 = param_3;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_68);
  return plVar5;
}



/* Entry: 103db9cc4; end: 103db9ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db9cc4(undefined1 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + _DAT_11300ade8) = uVar1;
    lStack_50 = *(long *)(*(long *)(lVar3 + _DAT_11300adf0) + _DAT_1130671d8);
    if (lStack_50 == 1) {
      if (*(long *)(lVar3 + _DAT_11300ade0) != 0) {
        func_0x000107c42018();
      }
    }
    else {
      if (lStack_50 != 0) {
        func_0x000107c60614(&UNK_11074e0a0,&lStack_50,&UNK_11074e0a0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103db9838);
        (*pcVar2)();
      }
      FUN_103db9838();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103db9ccc; end: 103db9ceb;  */

void FUN_103db9ccc(void)

{
  func_0x000107c61168(&PTR_PTR_11294afa0);
  return;
}



/* Entry: 103db9cec; end: 103db9d2f;  */

long FUN_103db9cec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103db9d30; end: 103dba07b;  */

undefined1  [16] FUN_103db9d30(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a454();
  puVar2 = puVar1;
  func_0x000107c56390(puVar1);
  if (param_1 < 1000) {
LAB_103db9d80:
    FUN_103dbd104();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar3 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    puVar8 = puVar3;
    func_0x00010075bbf0();
    *(undefined **)(lVar4 + 0x40) = puVar8;
    *(undefined **)(lVar4 + 0x20) = puVar3;
    *(undefined **)(lVar4 + 0x28) = puVar6;
    uVar9 = param_2;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(puVar2,param_2,lVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c6142c(param_2);
  }
  else {
    if (param_1 - 1000 < 0xf3e58) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0((double)param_1 / 1000.0);
      puVar3 = puVar1;
      func_0x000107c5c1c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        uVar9 = 0xe000000000000000;
        uVar7 = param_2;
      }
      else {
        puVar8 = puVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar7 = param_2;
        func_0x000107c61170(puVar3);
        puVar2 = puVar3;
        uVar9 = param_2;
      }
      FUN_103dbd120();
    }
    else if (param_1 - 1000000 < 999000000) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0((double)param_1 / 1000000.0);
      puVar3 = puVar1;
      func_0x000107c5c1c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        func_0x000103dbd1ec();
        uVar7 = param_2;
        uVar9 = 0xe000000000000000;
      }
      else {
        puVar8 = puVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar7 = param_2;
        func_0x000107c61170(puVar3);
        func_0x000103dbd1ec();
        puVar2 = puVar3;
        uVar9 = param_2;
      }
    }
    else {
      if ((long)param_1 < 1000000000) goto LAB_103db9d80;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0((double)param_1 / 1000000000.0);
      puVar3 = puVar1;
      func_0x000107c5c1c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        uVar9 = 0xe000000000000000;
        func_0x000103dbd2b8();
        uVar7 = param_2;
      }
      else {
        puVar8 = puVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar7 = param_2;
        func_0x000107c61170(puVar3);
        func_0x000103dbd2b8();
        puVar2 = puVar3;
        uVar9 = param_2;
      }
    }
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    lVar5 = lVar4;
    func_0x00010075bbf0();
    *(long *)(lVar4 + 0x40) = lVar5;
    *(undefined **)(lVar4 + 0x20) = puVar8;
    *(undefined8 *)(lVar4 + 0x28) = uVar9;
    uVar9 = uVar7;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(puVar2,uVar7,lVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c6142c(uVar7);
  }
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = puVar2;
  return auVar10;
}



/* Entry: 103dba07c; end: 103dba207;  */

undefined **
FUN_103dba07c(undefined *param_1,undefined *param_2,undefined *param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  ulong uVar8;
  long unaff_x19;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined *unaff_x23;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 uVar9;
  uint unaff_w28;
  undefined **unaff_x29;
  undefined8 *puVar10;
  undefined *in_register_00005008;
  undefined *in_register_00005028;
  undefined *in_register_00005048;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 in_stack_00000020;
  undefined *in_stack_00000030;
  undefined *in_stack_00000038;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined *in_stack_00000050;
  undefined *in_stack_00000058;
  undefined2 in_stack_00000060;
  undefined *in_stack_00000070;
  undefined *in_stack_00000078;
  undefined2 uStack00000000000000a0;
  byte bStack00000000000000a2;
  undefined **ppuStack_78;
  
  uVar9 = (undefined1)unaff_w28;
  uVar5 = 0xe000000000000000;
  ppuVar6 = (undefined **)(param_4 & 0xff);
  puVar10 = (undefined8 *)&stack0xfffffffffffffff0;
  ppuVar3 = (undefined **)0x0;
  uVar7 = 0xdc93488;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
  switch(ppuVar6) {
  default:
    FUN_103dbd384();
    return ppuVar3;
  case (undefined **)0x1:
    func_0x000103dbd3a8();
    return ppuVar3;
  case (undefined **)0x2:
    FUN_103dbd3b8();
    return ppuVar3;
  case (undefined **)0x3:
    func_0x000103dbd488();
    return ppuVar3;
  case (undefined **)0x4:
    func_0x000103dbd49c();
    return ppuVar3;
  case (undefined **)0x5:
    func_0x000103dbd4b0();
    return ppuVar3;
  case (undefined **)0x6:
    FUN_103dbd4d4();
    return ppuVar3;
  case (undefined **)0x7:
    func_0x000103dbd5a0();
    return ppuVar3;
  case (undefined **)0x8:
  case (undefined **)0x6e:
    func_0x000103dbd5b4();
    return ppuVar3;
  case (undefined **)0x9:
    func_0x000103dbd5d8();
    return ppuVar3;
  case (undefined **)0xa:
    FUN_103dbd5fc();
    return ppuVar3;
  case (undefined **)0xb:
    func_0x000103dbd6cc();
    return ppuVar3;
  case (undefined **)0xc:
    func_0x000103dbd6f0();
    return ppuVar3;
  case (undefined **)0xd:
    func_0x000103dbd704();
    return ppuVar3;
  case (undefined **)0xe:
    func_0x000103dbd7d0();
    return ppuVar3;
  case (undefined **)0xf:
    func_0x000103dbd89c();
    return ppuVar3;
  case (undefined **)0x10:
  case (undefined **)0xb4:
    func_0x000103dbd968();
    return ppuVar3;
  case (undefined **)0x11:
    func_0x000103dbda34();
    return ppuVar3;
  case (undefined **)0x12:
    func_0x000103dbdb00();
    return ppuVar3;
  case (undefined **)0x13:
    FUN_103dbdbcc();
    return ppuVar3;
  case (undefined **)0x14:
    FUN_103dbdbf0();
    return ppuVar3;
  case (undefined **)0x15:
  case (undefined **)0xd0:
    FUN_103dbdcbc();
    return ppuVar3;
  case (undefined **)0x16:
    func_0x000103dbdce0();
    return ppuVar3;
  case (undefined **)0x17:
    func_0x000103dbdcf8();
    return ppuVar3;
  case (undefined **)0x18:
    FUN_103dbdd1c();
    return ppuVar3;
  case (undefined **)0x19:
  case (undefined **)0x40:
    func_0x000103dbdde8();
    return ppuVar3;
  case (undefined **)0x1a:
  case (undefined **)0xe6:
    func_0x000103dbddfc();
    return ppuVar3;
  case (undefined **)0x1b:
    func_0x000103dbde18();
    return ppuVar3;
  case (undefined **)0x1c:
    FUN_103dbde2c();
  case (undefined **)0x1d:
  case (undefined **)0x5a:
    return ppuVar3;
  case (undefined **)0x28:
    return (undefined **)0x0;
  case (undefined **)0x2a:
  case (undefined **)0x32:
    while( true ) {
      uVar9 = (undefined1)unaff_w28;
      unaff_x21 = unaff_x21 + 1;
      unaff_x20[2] = (undefined *)unaff_x22;
      ppuVar6 = (undefined **)((long)unaff_x20 + (long)unaff_x25 * unaff_x27);
      param_1 = in_stack_00000030;
      in_register_00005008 = in_stack_00000038;
      param_2 = in_stack_00000040;
      in_register_00005028 = in_stack_00000048;
      param_3 = in_stack_00000050;
      in_register_00005048 = in_stack_00000058;
code_r0x000103dba35c:
      *(undefined2 *)(ppuVar6 + 10) = in_stack_00000060;
      ppuVar6[7] = in_register_00005028;
      ppuVar6[6] = param_2;
      ppuVar6[9] = in_register_00005048;
      ppuVar6[8] = param_3;
      ppuVar6[5] = in_register_00005008;
      ppuVar6[4] = param_1;
      *(undefined1 *)((long)ppuVar6 + 0x52) = uVar9;
      in_ZR = unaff_x21 == unaff_x23;
code_r0x000103dba374:
      if ((bool)in_ZR) break;
LAB_103dba274:
      ppuVar6 = unaff_x29;
      unaff_x29 = ppuVar6;
code_r0x000103dba278:
      ppuVar6 = (undefined **)((long)ppuVar6 + (long)unaff_x21 * unaff_x27);
code_r0x000103dba27c:
      in_stack_00000078 = ppuVar6[1];
      in_stack_00000070 = *ppuVar6;
      in_register_00005028 = ppuVar6[3];
      param_2 = ppuVar6[2];
      in_register_00005008 = ppuVar6[5];
      param_1 = ppuVar6[4];
code_r0x000103dba288:
      unaff_x24[3] = in_register_00005028;
      unaff_x24[2] = param_2;
      unaff_x24[5] = in_register_00005008;
      unaff_x24[4] = param_1;
      uVar7 = *(undefined4 *)((long)ppuVar6 + 0x2f);
code_r0x000103dba290:
      *(undefined4 *)((long)unaff_x24 + 0x2f) = uVar7;
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        in_stack_00000038 = ppuVar6[1];
        in_stack_00000030 = *ppuVar6;
        in_stack_00000048 = ppuVar6[3];
        in_stack_00000040 = ppuVar6[2];
        in_stack_00000058 = ppuVar6[5];
        in_stack_00000050 = ppuVar6[4];
        in_stack_00000060 = *(undefined2 *)(ppuVar6 + 6);
      }
      else {
        uVar4 = *(ulong *)(unaff_x19 + 0x28);
        __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar4,unaff_x21);
        uVar8 = -1L << ((ulong)*(byte *)(unaff_x19 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
        if ((*(ulong *)(unaff_x26 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
LAB_103dba2d0:
          if (*(undefined **)(*(long *)(unaff_x19 + 0x30) + uVar4 * 8) != unaff_x21)
          goto code_r0x000103dba2dc;
          ppuVar6 = (undefined **)((ulong)_uStack00000000000000a0 >> 0x10 & 0xff);
code_r0x000103dba380:
          in_stack_00000038 = in_stack_00000078;
          in_stack_00000030 = in_stack_00000070;
          in_stack_00000048 = (undefined *)unaff_x24[3];
          in_stack_00000040 = (undefined *)unaff_x24[2];
          in_stack_00000058 = (undefined *)unaff_x24[5];
          in_stack_00000050 = (undefined *)unaff_x24[4];
          in_stack_00000060 = uStack00000000000000a0;
          unaff_w28 = ((uint)ppuVar6 ^ 0xffffffff) & 1;
          goto LAB_103dba328;
        }
LAB_103dba2f4:
        in_stack_00000048 = (undefined *)unaff_x24[3];
        in_stack_00000040 = (undefined *)unaff_x24[2];
        in_stack_00000058 = (undefined *)unaff_x24[5];
        in_stack_00000050 = (undefined *)unaff_x24[4];
        in_stack_00000038 = in_stack_00000078;
        in_stack_00000030 = in_stack_00000070;
        in_stack_00000060 = uStack00000000000000a0;
      }
      unaff_w28 = (uint)bStack00000000000000a2;
LAB_103dba328:
      FUN_103db7730(&stack0x00000070,&stack0xfffffffffffffff8);
      unaff_x25 = unaff_x20[2];
      unaff_x22 = (undefined8 *)(unaff_x25 + 1);
      if ((undefined *)((ulong)unaff_x20[3] >> 1) <= unaff_x25) {
        func_0x000103db743c((undefined *)0x1 < unaff_x20[3],unaff_x22,1);
      }
    }
    break;
  case (undefined **)0x2b:
  case (undefined **)0x33:
    return (undefined **)0x0;
  case (undefined **)0x2c:
    goto code_r0x000103dba35c;
  case (undefined **)0x2d:
    goto code_r0x000103dba484;
  case (undefined **)0x2e:
    goto code_r0x000103dba374;
  case (undefined **)0x30:
    return (undefined **)0x0;
  case (undefined **)0x38:
    return (undefined **)0x0;
  case (undefined **)0x48:
  case (undefined **)0x88:
  case (undefined **)0xb8:
  case (undefined **)0xd8:
  case (undefined **)0xf8:
    return (undefined **)0x0;
  case (undefined **)0x4a:
  case (undefined **)0x4b:
  case (undefined **)0x8a:
  case (undefined **)0x8b:
  case (undefined **)0xa0:
  case (undefined **)0xa1:
  case (undefined **)0xba:
  case (undefined **)0xbb:
  case (undefined **)0xda:
  case (undefined **)0xdb:
  case (undefined **)0xe9:
  case (undefined **)0xf1:
  case (undefined **)0xf2:
  case (undefined **)0xfa:
  case (undefined **)0xfb:
    goto code_r0x000103dba25c;
  case (undefined **)0x4d:
  case (undefined **)0x8d:
  case (undefined **)0x99:
  case (undefined **)0xbd:
  case (undefined **)0xce:
  case (undefined **)0xdd:
  case (undefined **)0xee:
  case (undefined **)0xfd:
    goto code_r0x000103dba288;
  case (undefined **)0x4e:
  case (undefined **)0x8e:
  case (undefined **)0x9a:
  case (undefined **)0xbe:
  case (undefined **)0xc6:
  case (undefined **)0xde:
  case (undefined **)0xef:
  case (undefined **)0xfe:
    return (undefined **)0x0;
  case (undefined **)0x4f:
  case (undefined **)0x54:
  case (undefined **)0x60:
  case (undefined **)0x67:
  case (undefined **)0x71:
  case (undefined **)0x8f:
  case (undefined **)0x94:
  case (undefined **)0x9e:
  case (undefined **)0xa3:
  case (undefined **)0xbf:
  case (undefined **)0xc4:
  case (undefined **)0xdf:
  case (undefined **)0xe4:
  case (undefined **)0xff:
    goto LAB_103dba274;
  case (undefined **)0x51:
  case (undefined **)0x61:
  case (undefined **)0x91:
  case (undefined **)0xc1:
  case (undefined **)0xe1:
  case (undefined **)0xe7:
    ppuVar6 = &PTR___ss6ResultOMn_11034f000;
  case (undefined **)0xe8:
    ppuVar6 = (undefined **)ppuVar6[0x39];
  case (undefined **)0x6c:
  case (undefined **)0xc9:
    ppuStack_78 = ppuVar6;
  case (undefined **)0x50:
  case (undefined **)0x5b:
  case (undefined **)0x68:
  case (undefined **)0x6a:
  case (undefined **)0x90:
  case (undefined **)0x98:
  case (undefined **)0xa2:
  case (undefined **)0xc0:
  case (undefined **)0xc8:
  case (undefined **)0xcd:
  case (undefined **)0xe0:
  case (undefined **)0xea:
  case (undefined **)0xed:
  case (undefined **)0xf0:
  case (undefined **)0x69:
    uVar5 = 0;
  case (undefined **)0x5c:
    param_6 = 0;
  case (undefined **)0x6d:
  case (undefined **)0xc7:
    func_0x000103db743c(0,uVar5,param_6);
  case (undefined **)0x5d:
  case (undefined **)0x63:
  case (undefined **)0x75:
  case (undefined **)0x97:
  case (undefined **)0xcc:
  case (undefined **)0xec:
    unaff_x23 = (undefined *)unaff_x22[2];
    unaff_x20 = ppuStack_78;
  case (undefined **)0xca:
    if (unaff_x23 != (undefined *)0x0) {
code_r0x000103dba25c:
      unaff_x21 = (undefined *)0x0;
      unaff_x24 = &stack0x00000070;
      goto code_r0x000103dba264;
    }
    break;
  case (undefined **)0x52:
  case (undefined **)0x59:
  case (undefined **)0x5f:
  case (undefined **)0x62:
  case (undefined **)0x6b:
  case (undefined **)0x70:
  case (undefined **)0x77:
  case (undefined **)0x92:
  case (undefined **)0x9d:
  case (undefined **)0xc2:
  case (undefined **)0xe2:
    goto code_r0x000103dba27c;
  case (undefined **)0x55:
  case (undefined **)0x58:
  case (undefined **)0x5e:
  case (undefined **)0x95:
  case (undefined **)0xc5:
  case (undefined **)0xe5:
    goto code_r0x000103dba278;
  case (undefined **)0x56:
  case (undefined **)0x66:
  case (undefined **)0x73:
    return (undefined **)0x0;
  case (undefined **)0x65:
  case (undefined **)0x6f:
  case (undefined **)0x76:
  case (undefined **)0x9c:
code_r0x000103dba264:
    ppuVar6 = (undefined **)(unaff_x22 + 4);
  case (undefined **)0x49:
  case (undefined **)0x4c:
  case (undefined **)0x53:
  case (undefined **)0x57:
  case (undefined **)0x64:
  case (undefined **)0x74:
  case (undefined **)0x89:
  case (undefined **)0x8c:
  case (undefined **)0x93:
  case (undefined **)0x9b:
  case (undefined **)0x9f:
  case (undefined **)0xb9:
  case (undefined **)0xbc:
  case (undefined **)0xc3:
  case (undefined **)0xd9:
  case (undefined **)0xdc:
  case (undefined **)0xe3:
  case (undefined **)0xf9:
  case (undefined **)0xfc:
    unaff_x26 = unaff_x19 + 0x38;
    unaff_x27 = 0x38;
    unaff_x29 = ppuVar6;
    goto LAB_103dba274;
  case (undefined **)0x72:
    goto code_r0x000103dba290;
  case (undefined **)0x96:
  case (undefined **)0xcb:
  case (undefined **)0xeb:
    return (undefined **)0x0;
  case (undefined **)0xb0:
    return (undefined **)0x0;
  case (undefined **)0xb1:
  case (undefined **)0xd1:
    goto code_r0x000103dba380;
  case (undefined **)0xb2:
  case (undefined **)0xd2:
    puVar10 = (undefined8 *)&stack0x000000a0;
    unaff_x19 = lRam0000000000000010;
    _uStack00000000000000a0 = &stack0xfffffffffffffff0;
  case (undefined **)0x29:
  case (undefined **)0x31:
    unaff_x20 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (unaff_x19 != 0) {
      puVar10[-7] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103db743c(0,unaff_x19,0);
      unaff_x20 = (undefined **)puVar10[-7];
      unaff_x22 = (undefined8 *)0x20;
      unaff_x23 = (undefined *)0x38;
      do {
        in_stack_00000038 = (undefined *)unaff_x22[1];
        in_stack_00000030 = (undefined *)*unaff_x22;
        in_stack_00000048 = (undefined *)unaff_x22[3];
        in_stack_00000040 = (undefined *)unaff_x22[2];
        in_stack_00000058 = (undefined *)unaff_x22[5];
        in_stack_00000050 = (undefined *)unaff_x22[4];
        in_stack_00000060 = *(undefined2 *)(unaff_x22 + 6);
        FUN_103db8e24(&stack0x00000030,&stack0xfffffffffffffff0);
        puVar10[-7] = unaff_x20;
        unaff_x24 = (undefined8 *)unaff_x20[2];
        unaff_x21 = (undefined *)((long)unaff_x24 + 1);
        if ((undefined8 *)((ulong)unaff_x20[3] >> 1) <= unaff_x24) {
          func_0x000103db743c((undefined *)0x1 < unaff_x20[3],unaff_x21,1);
          unaff_x20 = (undefined **)puVar10[-7];
        }
        in_stack_00000008 = in_stack_00000048;
        in_stack_00000000 = in_stack_00000040;
        in_stack_00000018 = in_stack_00000058;
        in_stack_00000010 = in_stack_00000050;
        in_stack_00000020 = in_stack_00000060;
        puVar2 = puVar10;
        param_2 = in_stack_00000030;
        in_register_00005028 = in_stack_00000038;
code_r0x000103dba484:
        puVar10 = puVar2;
        unaff_x20[2] = unaff_x21;
        lVar1 = (long)unaff_x24 * (long)unaff_x23;
        *(undefined2 *)((long)unaff_x20 + lVar1 + 0x50) = in_stack_00000020;
        *(undefined8 *)((long)unaff_x20 + lVar1 + 0x38) = in_stack_00000008;
        *(undefined8 *)((long)unaff_x20 + lVar1 + 0x30) = in_stack_00000000;
        *(undefined8 *)((long)unaff_x20 + lVar1 + 0x48) = in_stack_00000018;
        *(undefined8 *)((long)unaff_x20 + lVar1 + 0x40) = in_stack_00000010;
        *(undefined **)((long)unaff_x20 + lVar1 + 0x28) = in_register_00005028;
        *(undefined **)((long)unaff_x20 + lVar1 + 0x20) = param_2;
        *(undefined1 *)((long)unaff_x20 + lVar1 + 0x52) = 0;
        unaff_x22 = unaff_x22 + 7;
        unaff_x19 = unaff_x19 + -1;
      } while (unaff_x19 != 0);
    }
    return unaff_x20;
  case (undefined **)0xd4:
    return (undefined **)0x0;
  }
  return unaff_x20;
code_r0x000103dba2dc:
  uVar4 = uVar4 + 1 & ~uVar8;
  if ((*(ulong *)(unaff_x26 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0) goto LAB_103dba2f4;
  goto LAB_103dba2d0;
}



/* Entry: 103dba208; end: 103dba3e7;  */

undefined * FUN_103dba208(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined2 uStack_80;
  byte bStack_7e;
  undefined *puStack_78;
  
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103db743c(0,0,0);
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      puVar2 = puStack_78;
      puVar4 = (undefined8 *)(param_2 + 0x20 + lVar6 * 0x38);
      uStack_a8 = puVar4[1];
      uStack_b0 = *puVar4;
      uStack_98 = puVar4[3];
      uStack_a0 = puVar4[2];
      uStack_90 = puVar4[4];
      uStack_88 = (undefined7)puVar4[5];
      uVar1 = *(undefined4 *)((long)puVar4 + 0x2f);
      uStack_81 = (undefined1)uVar1;
      uStack_80 = (undefined2)((uint)uVar1 >> 8);
      bStack_7e = (byte)((uint)uVar1 >> 0x18);
      if (*(long *)(param_1 + 0x10) == 0) {
        uStack_e8 = puVar4[1];
        uStack_f0 = *puVar4;
        uStack_d8 = puVar4[3];
        uStack_e0 = puVar4[2];
        uStack_c8 = puVar4[5];
        uStack_d0 = puVar4[4];
        uStack_c0 = *(undefined2 *)(puVar4 + 6);
        bVar8 = bStack_7e;
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x28);
        __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar3,lVar6);
        uVar5 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar3 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
          do {
            if (*(long *)(*(long *)(param_1 + 0x30) + uVar3 * 8) == lVar6) {
              uStack_e8 = uStack_a8;
              uStack_f0 = uStack_b0;
              uStack_d8 = uStack_98;
              uStack_e0 = uStack_a0;
              uStack_c8 = CONCAT17(uStack_81,uStack_88);
              uStack_d0 = uStack_90;
              uStack_c0 = uStack_80;
              bVar8 = (bStack_7e ^ 0xff) & 1;
              goto LAB_103dba328;
            }
            uVar3 = uVar3 + 1 & ~uVar5;
          } while ((*(ulong *)(param_1 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
        }
        uStack_c8 = CONCAT17(uStack_81,uStack_88);
        uStack_e8 = uStack_a8;
        uStack_f0 = uStack_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uStack_d0 = uStack_90;
        bVar8 = bStack_7e;
        uStack_c0 = uStack_80;
      }
LAB_103dba328:
      FUN_103db7730(&uStack_b0,auStack_128);
      uVar3 = *(ulong *)(puVar2 + 0x10);
      puStack_78 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar3) {
        func_0x000103db743c(1 < *(ulong *)(puVar2 + 0x18),uVar3 + 1,1);
      }
      lVar6 = lVar6 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar3 + 1;
      *(undefined2 *)(puStack_78 + uVar3 * 0x38 + 0x50) = uStack_c0;
      *(undefined8 *)(puStack_78 + uVar3 * 0x38 + 0x38) = uStack_d8;
      *(undefined8 *)(puStack_78 + uVar3 * 0x38 + 0x30) = uStack_e0;
      *(undefined8 *)(puStack_78 + uVar3 * 0x38 + 0x48) = uStack_c8;
      *(undefined8 *)(puStack_78 + uVar3 * 0x38 + 0x40) = uStack_d0;
      *(undefined8 *)(puStack_78 + uVar3 * 0x38 + 0x28) = uStack_e8;
      *(undefined8 *)(puStack_78 + uVar3 * 0x38 + 0x20) = uStack_f0;
      puStack_78[uVar3 * 0x38 + 0x52] = bVar8;
    } while (lVar6 != lVar7);
  }
  return puStack_78;
}



/* Entry: 103dba3e8; end: 103dba4f3;  */

undefined * FUN_103dba3e8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined *puStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    func_0x000103db743c(0,lVar3,0);
    puVar4 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar2 = puStack_48;
      uStack_78 = puVar4[1];
      uStack_80 = *puVar4;
      uStack_68 = puVar4[3];
      uStack_70 = puVar4[2];
      uStack_58 = puVar4[5];
      uStack_60 = puVar4[4];
      uStack_50 = *(undefined2 *)(puVar4 + 6);
      FUN_103db8e24(&uStack_80,&uStack_c0);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_48 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000103db743c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      uStack_90 = uStack_50;
      uStack_b8 = uStack_78;
      uStack_c0 = uStack_80;
      *(ulong *)(puStack_48 + 0x10) = uVar1 + 1;
      *(undefined2 *)(puStack_48 + uVar1 * 0x38 + 0x50) = uStack_50;
      *(undefined8 *)(puStack_48 + uVar1 * 0x38 + 0x38) = uStack_68;
      *(undefined8 *)(puStack_48 + uVar1 * 0x38 + 0x30) = uStack_70;
      *(undefined8 *)(puStack_48 + uVar1 * 0x38 + 0x48) = uStack_58;
      *(undefined8 *)(puStack_48 + uVar1 * 0x38 + 0x40) = uStack_60;
      *(undefined8 *)(puStack_48 + uVar1 * 0x38 + 0x28) = uStack_78;
      *(undefined8 *)(puStack_48 + uVar1 * 0x38 + 0x20) = uStack_80;
      puStack_48[uVar1 * 0x38 + 0x52] = 0;
      puVar4 = puVar4 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return puStack_48;
}



/* Entry: 103dba4f4; end: 103dba567;  */

void FUN_103dba4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 103dba568; end: 103dba61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dba568(void)

{
  code *pcVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  puVar3 = *(ulong **)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (puVar3 != (ulong *)0x0) {
    uVar4 = 0;
    FUN_103dbef3c(0);
    func_0x000107c610f8();
    FUN_103dbe718(puVar3,uVar4);
    iVar2 = 0;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x80))();
    if (iVar2 != 0) {
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_11300ce40);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c4ed00();
        func_0x000107c615e8(lVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dba61c);
  (*pcVar1)();
}



/* Entry: 103dba61c; end: 103dba647;  */

void FUN_103dba61c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dba648; end: 103dba667;  */

void FUN_103dba648(void)

{
  FUN_103dba568();
  return;
}



/* Entry: 103dba668; end: 103dba66f;  */

undefined8 FUN_103dba668(void)

{
  return 0;
}



/* Entry: 103dba670; end: 103dba68f;  */

void FUN_103dba670(void)

{
  func_0x000107c61168(&PTR_PTR_11300ae88);
  return;
}



/* Entry: 103dba690; end: 103dbadb3;  */

undefined * FUN_103dba690(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x000107c453e4();
  func_0x000107c53fcc();
  func_0x000107c53e08(puVar2);
  func_0x000107c58f5c(puVar2);
  func_0x000107c526ac(puVar2);
  func_0x000107c61174(puVar2);
  func_0x000107c5a050();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c3d89c();
    func_0x000107c61170(param_1);
    uVar4 = 0;
    FUN_103dbd0e4();
    func_0x000107c614e8();
    uVar5 = 0x11300af70;
    uStack_38 = uVar4;
    func_0x0001000285a8(0x11300af70,&UNK_10dc93538);
    puVar6 = &uStack_38;
    __sSS10describingSSx_tclufC(puVar6,uVar5);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    func_0x000107c6142c(uVar5);
    func_0x000107c4fbd4(puVar2);
    func_0x000107c61170(puVar6);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dba7e0);
  (*pcVar1)();
}



/* Entry: 103dbadb4; end: 103dbaddb; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController initWithCoder:] */

void FUN_103dbadb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103dbc6a0();
  return;
}



/* Entry: 103dbaddc; end: 103dbb923;  */

/* WARNING: Possible PIC construction at 0x000103dbae54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbae84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbaea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbaec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbaf18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbaf34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbaf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbafa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbafc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbafe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dbb604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dbb5bc) */
/* WARNING: Removing unreachable block (ram,0x000103dbb648) */
/* WARNING: Removing unreachable block (ram,0x000103dbb5d0) */
/* WARNING: Removing unreachable block (ram,0x000103dbb57c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb520) */
/* WARNING: Removing unreachable block (ram,0x000103dbb4ec) */
/* WARNING: Removing unreachable block (ram,0x000103dbb4c0) */
/* WARNING: Removing unreachable block (ram,0x000103dbb46c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb414) */
/* WARNING: Removing unreachable block (ram,0x000103dbb3b8) */
/* WARNING: Removing unreachable block (ram,0x000103dbb380) */
/* WARNING: Removing unreachable block (ram,0x000103dbb340) */
/* WARNING: Removing unreachable block (ram,0x000103dbb320) */
/* WARNING: Removing unreachable block (ram,0x000103dbb2bc) */
/* WARNING: Removing unreachable block (ram,0x000103dbb644) */
/* WARNING: Removing unreachable block (ram,0x000103dbb2f0) */
/* WARNING: Removing unreachable block (ram,0x000103dbb29c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb24c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb640) */
/* WARNING: Removing unreachable block (ram,0x000103dbb280) */
/* WARNING: Removing unreachable block (ram,0x000103dbb22c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb1d4) */
/* WARNING: Removing unreachable block (ram,0x000103dbb63c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb210) */
/* WARNING: Removing unreachable block (ram,0x000103dbb1b4) */
/* WARNING: Removing unreachable block (ram,0x000103dbb174) */
/* WARNING: Removing unreachable block (ram,0x000103dbb154) */
/* WARNING: Removing unreachable block (ram,0x000103dbb138) */
/* WARNING: Removing unreachable block (ram,0x000103dbb0e8) */
/* WARNING: Removing unreachable block (ram,0x000103dbb638) */
/* WARNING: Removing unreachable block (ram,0x000103dbb11c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb0c8) */
/* WARNING: Removing unreachable block (ram,0x000103dbb0ac) */
/* WARNING: Removing unreachable block (ram,0x000103dbb058) */
/* WARNING: Removing unreachable block (ram,0x000103dbb634) */
/* WARNING: Removing unreachable block (ram,0x000103dbb090) */
/* WARNING: Removing unreachable block (ram,0x000103dbb024) */
/* WARNING: Removing unreachable block (ram,0x000103dbafe4) */
/* WARNING: Removing unreachable block (ram,0x000103dbafc4) */
/* WARNING: Removing unreachable block (ram,0x000103dbafa8) */
/* WARNING: Removing unreachable block (ram,0x000103dbaf58) */
/* WARNING: Removing unreachable block (ram,0x000103dbb630) */
/* WARNING: Removing unreachable block (ram,0x000103dbaf8c) */
/* WARNING: Removing unreachable block (ram,0x000103dbaf38) */
/* WARNING: Removing unreachable block (ram,0x000103dbaf1c) */
/* WARNING: Removing unreachable block (ram,0x000103dbaec4) */
/* WARNING: Removing unreachable block (ram,0x000103dbb62c) */
/* WARNING: Removing unreachable block (ram,0x000103dbaf00) */
/* WARNING: Removing unreachable block (ram,0x000103dbaea4) */
/* WARNING: Removing unreachable block (ram,0x000103dbae88) */
/* WARNING: Removing unreachable block (ram,0x000103dbae58) */
/* WARNING: Removing unreachable block (ram,0x000103dbb628) */
/* WARNING: Removing unreachable block (ram,0x000103dbae6c) */
/* WARNING: Removing unreachable block (ram,0x000103dbb608) */

void FUN_103dbaddc(long param_1)

{
  undefined *puVar1;
  
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 0x21;
  *(undefined8 *)(param_1 + 0x10) = 0x10;
  puVar1 = &DAT_11300af20;
  func_0x000103dbab38(&DAT_11300af20,0x103dba7e0);
  func_0x000107c5cbe4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103dbb924; end: 103dbba4f; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbb924(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_103dbaddc();
  func_0x000103dbb64c();
  uStack_40 = 0;
  uStack_38 = 2;
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103dbba50; end: 103dbbc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbba50(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_11300af10);
    *(undefined8 *)(param_2 + _DAT_11300af10) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(uVar3);
    puVar1 = &DAT_11300af18;
    func_0x000103dbab38(&DAT_11300af18,0x103dba690);
    func_0x000107c4fd7c();
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 103dbbc1c; end: 103dbbc23; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbbc1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 3;
  uStack_28 = 2;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103dbbc24; end: 103dbbc2b; -[_TtC21FollowCreatorsFeature28FollowCreatorsViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dbbc24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 4;
  uStack_28 = 2;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}


