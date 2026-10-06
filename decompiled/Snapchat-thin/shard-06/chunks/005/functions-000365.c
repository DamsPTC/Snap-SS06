/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a232a0; end: 104a234eb;  */

undefined1  [16] FUN_104a232a0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x24;
  undefined1 auVar9 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lRam000000011340b0c0 = lRam000000011340b0c0 + 1;
  puVar2 = (undefined8 *)0x20;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x20,PTR___ss5UInt8VN_11034eef8);
  puVar2[2] = 0x20;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  uVar3 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  uVar6 = 0x20;
  _SecRandomCopyBytes(uVar3,0x20);
  if ((int)uVar3 == 0) {
    FUN_104a222fc();
    lRam000000011340b0d0 = lRam000000011340b0d0 + 1;
    uVar3 = 0;
    puVar5 = puVar2;
    __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
              (0,puVar2,uVar6);
    uStack_80 = 0x2b;
    uStack_78 = 0xe100000000000000;
    uStack_90 = 0x2d;
    uStack_88 = 0xe100000000000000;
    puStack_70 = (undefined8 *)uVar3;
    puStack_68 = puVar5;
    FUN_104a219a8();
    puVar1 = PTR___sSSN_11034da80;
    puVar4 = &uStack_80;
    puVar7 = &uStack_90;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar4,puVar7,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
               uVar3,uVar3,uVar3);
    _swift_bridgeObjectRelease(puVar5);
    uStack_80 = 0x2f;
    uStack_78 = 0xe100000000000000;
    uStack_90 = 0x5f;
    uStack_88 = 0xe100000000000000;
    puVar5 = &uStack_80;
    puVar8 = &uStack_90;
    puStack_70 = puVar4;
    puStack_68 = puVar7;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar5,puVar8,0,0,0,1,puVar1,puVar1,puVar1,uVar3,uVar3,uVar3);
    _swift_bridgeObjectRelease(puVar7);
    uStack_80 = 0x3d;
    uStack_78 = 0xe100000000000000;
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    puVar4 = &uStack_80;
    unaff_x24 = &uStack_90;
    puStack_70 = puVar5;
    puStack_68 = puVar8;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar4,unaff_x24,0,0,0,1,puVar1,puVar1,puVar1,uVar3,uVar3,uVar3);
    FUN_104a2352c(puVar2,uVar6);
    _swift_bridgeObjectRelease(puVar8);
    FUN_104a22f2c(puVar4,unaff_x24);
  }
  else {
    puVar4 = puVar2;
    _swift_bridgeObjectRelease(puVar2);
    lRam000000011340b0c8 = lRam000000011340b0c8 + 1;
    FUN_104a234ec();
    _swift_allocError(&UNK_1107bec68,puVar4,0,0);
    _swift_willThrow();
    puVar4 = puVar2;
  }
  auVar9._8_8_ = unaff_x24;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 104a234ec; end: 104a2352b;  */

void FUN_104a234ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4cea4;
  _swift_getWitnessTable(&UNK_10dd4cea4,&UNK_1107bec68);
  puRam00000001130a4e58 = puVar1;
  return;
}



/* Entry: 104a2352c; end: 104a235e7;  */

void FUN_104a2352c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104a235e8; end: 104a2362b;  */

long * FUN_104a235e8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 104a2362c; end: 104a2366b;  */

undefined8 FUN_104a2362c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1130a4e78;
  FUN_104a204dc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104a2366c; end: 104a236c3;  */

void FUN_104a2366c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_50;
  uStack_30 = **(undefined8 **)(unaff_x20 + 0x10);
  uStack_28 = (*(undefined8 **)(unaff_x20 + 0x10))[1];
  puStack_40 = &uStack_30;
  pcVar1 = FUN_104a236f0;
  FUN_104a22840();
  *param_1 = pcVar1;
  param_1[1] = puVar2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return;
}



/* Entry: 104a236c4; end: 104a236ef;  */

void FUN_104a236c4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104a236f0; end: 104a2370b;  */

void FUN_104a236f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000104a22c34(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),param_3);
  return;
}



/* Entry: 104a2370c; end: 104a2374b;  */

void FUN_104a2370c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104a2374c; end: 104a2379b;  */

void FUN_104a2374c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam00000001130a4e90 != 0) {
    return;
  }
  puVar1 = PTR___ss5UInt8VN_11034eef8;
  __sSaMa();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam00000001130a4e90 = param_1;
  return;
}



/* Entry: 104a2379c; end: 104a23893;  */

void FUN_104a2379c(void)

{
  return;
}



/* Entry: 104a23894; end: 104a23c77;  */

void FUN_104a23894(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4ce7c;
  _swift_getWitnessTable(&UNK_10dd4ce7c,&UNK_1107bec68);
  puRam00000001130a4e98 = puVar1;
  return;
}



/* Entry: 104a23c78; end: 104a23c7b;  */

void FUN_104a23c78(void)

{
  return;
}



/* Entry: 104a23c7c; end: 104a23cb7;  */

void FUN_104a23c7c(void)

{
  FUN_104a204dc(0x1130a4ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 104a23cb8; end: 104a23ccb;  */

bool FUN_104a23cb8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104a23ccc; end: 104a23da7;  */

void FUN_104a23ccc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104a23da8; end: 104a23db3;  */

void FUN_104a23da8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104a23db4; end: 104a23deb;  */

void FUN_104a23db4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4ea0;
  FUN_104a204dc();
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104a23dec; end: 104a241d7;  */

undefined *
FUN_104a23dec(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_80;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a24170);
    (*pcVar3)();
  }
  uVar10 = param_6 >> 0x38 & 0xf;
  uVar2 = (uint)(param_6 >> 0x20);
  if (param_1 != 0) {
    uVar13 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar10;
    }
    if (uVar13 != 0) {
      uVar10 = 0xb;
      if ((uVar2 >> 0x1c & (uint)((param_5 & 0x800000000000000) == 0)) == 0) {
        uVar10 = 7;
      }
      uVar10 = uVar10 | uVar13 << 0x10;
      uVar13 = uVar13 * 4;
      puVar11 = (undefined *)0xf;
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_104a23e74:
      uVar12 = (ulong)puVar11 >> 0xe;
      puVar7 = puVar11;
      puVar6 = puVar11;
      if (uVar12 != uVar13) {
        do {
          puVar11 = puVar7;
          uVar8 = param_5;
          __sSSySJSS5IndexVcig(puVar11,param_5,param_6);
          uVar4 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(puStack_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(uVar8);
            return puVar11;
          }
          _swift_bridgeObjectRelease(uVar8);
          if ((uVar4 & 1) == 0) {
            __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
            puVar7 = puVar11;
            puVar11 = puVar6;
          }
          else {
            if (((ulong)puVar6 >> 0xe != uVar12) || ((param_2 & 1) == 0)) goto LAB_104a23f30;
            __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
            puVar7 = puVar11;
          }
          uVar12 = (ulong)puVar7 >> 0xe;
          puVar6 = puVar11;
          if (uVar12 == uVar13) break;
        } while( true );
      }
      goto LAB_104a240bc;
    }
  }
  uVar13 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar10;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar10 = 0xb;
  if ((uVar2 >> 0x1c & (uint)((param_5 & 0x800000000000000) == 0)) == 0) {
    uVar10 = 7;
  }
  uVar10 = uVar10 | uVar13 << 0x10;
  uVar5 = 0xf;
  uVar12 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar11 = (undefined *)0x0;
  FUN_104a26644(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar13 = *(ulong *)(puVar11 + 0x10);
  puStack_80 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
    puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_104a26644(puStack_80,uVar13 + 1,1,puVar11);
  }
  *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puStack_80 + uVar13 * 0x20 + 0x20) = uVar5;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x28) = uVar10;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x30) = param_5;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x38) = uVar12;
LAB_104a240d0:
  _swift_bridgeObjectRelease(param_6);
  return puStack_80;
LAB_104a23f30:
  if (uVar12 < (ulong)puVar6 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a241d8);
    (*pcVar3)();
  }
  puVar9 = puVar11;
  uVar12 = param_5;
  uVar4 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar7 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    plVar1 = (long *)(puStack_80 + 0x10);
    puStack_80 = (undefined *)0x0;
    FUN_104a26644(0,*plVar1 + 1,1);
  }
  uVar8 = *(ulong *)(puStack_80 + 0x10);
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar8) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    FUN_104a26644(puVar7,uVar8 + 1,1,puStack_80);
    puStack_80 = puVar7;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar8 + 1;
  *(undefined **)(puStack_80 + uVar8 * 0x20 + 0x20) = puVar6;
  *(undefined **)(puStack_80 + uVar8 * 0x20 + 0x28) = puVar9;
  *(ulong *)(puStack_80 + uVar8 * 0x20 + 0x30) = uVar12;
  *(ulong *)(puStack_80 + uVar8 * 0x20 + 0x38) = uVar4;
  __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
  if (*(long *)(puStack_80 + 0x10) == param_1) goto LAB_104a240bc;
  goto LAB_104a23e74;
LAB_104a240bc:
  if (((ulong)puVar11 >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)puVar11 >> 0xe <= uVar13) {
      uVar13 = param_6;
      __sSSySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_6);
      puVar7 = puStack_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puStack_80;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_104a26644(0,*(long *)(puStack_80 + 0x10) + 1,1,puStack_80);
      }
      uVar12 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_104a26644(puVar7,uVar12 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar7 + uVar12 * 0x20 + 0x20) = puVar11;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x28) = uVar10;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x38) = uVar13;
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a24194);
    (*pcVar3)();
  }
  goto LAB_104a240d0;
}



/* Entry: 104a241d8; end: 104a2422b;  */

void FUN_104a241d8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104a2422c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 104a2422c; end: 104a24423;  */

undefined * FUN_104a2422c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104a24324);
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
    puVar3 = (undefined *)0x1130a4ea0;
    FUN_104a204dc();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104a24424; end: 104a249af;  */

undefined * FUN_104a24424(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a24598);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x1130a4ed0;
    FUN_104a204dc();
    lVar5 = 0;
    __s10Foundation12URLQueryItemVMa();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a24590);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a24594);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  __s10Foundation12URLQueryItemVMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 104a249b0; end: 104a24e2f;  */

void FUN_104a249b0(long param_1)

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
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x1130a4ec0;
  FUN_104a204dc(0x1130a4ec0);
  lVar7 = lVar15;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar15,lVar1,0,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
    _swift_release(lVar15);
LAB_104a24bb0:
    *unaff_x20 = lVar7;
    return;
  }
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar15 + 0x38);
  lVar1 = lVar7 + 0x38;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104a24bd8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar16) {
          _swift_release(lVar15);
          goto LAB_104a24bb0;
        }
        uVar17 = ((ulong *)(lVar15 + 0x38))[lVar16];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar16 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    _swift_bridgeObjectRetain(uVar3);
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104a24bdc);
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
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar11 * 0x40;
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
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar16;
  } while( true );
}



/* Entry: 104a24e30; end: 104a24ec3;  */

void FUN_104a24e30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = lVar4;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    lStack_48 = lVar3;
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      func_0x000104a24598(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(uStack_50);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 104a24ec4; end: 104a255bf;  */

undefined * FUN_104a24ec4(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  ulong uStack_e8;
  undefined1 auStack_e0 [16];
  undefined **ppuStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_78;
  
  lRam000000011340b180 = lRam000000011340b180 + 1;
  puStack_c0 = (undefined *)0x20;
  uStack_b8 = 0xe100000000000000;
  ppuStack_d0 = &puStack_c0;
  _swift_bridgeObjectRetain(param_2);
  lVar6 = 0x7fffffffffffffff;
  FUN_104a23dec(0x7fffffffffffffff,1,FUN_104a256bc,auStack_e0,param_1,param_2);
  uVar17 = *(ulong *)(lVar6 + 0x10);
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease(lVar6);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104a241f4(0,uVar17,0);
    uVar20 = 0;
    puVar22 = (undefined8 *)(lVar6 + 0x38);
    do {
      puVar15 = puStack_c0;
      if (*(ulong *)(lVar6 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104a2559c);
        (*pcVar5)();
      }
      uVar7 = puVar22[-3];
      uVar12 = puVar22[-2];
      uVar2 = puVar22[-1];
      uVar3 = *puVar22;
      lRam000000011340b188 = lRam000000011340b188 + 1;
      _swift_bridgeObjectRetain(uVar3);
      __sSS14_fromSubstringySSSshFZ(uVar7,uVar12,uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      uVar18 = *(ulong *)(puVar15 + 0x10);
      puStack_c0 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
        func_0x000104a241f4(1 < *(ulong *)(puVar15 + 0x18),uVar18 + 1,1);
      }
      puVar15 = puStack_c0;
      uVar20 = uVar20 + 1;
      *(ulong *)(puStack_c0 + 0x10) = uVar18 + 1;
      *(undefined8 *)(puStack_c0 + uVar18 * 0x10 + 0x20) = uVar7;
      *(undefined8 *)(puStack_c0 + uVar18 * 0x10 + 0x28) = uVar12;
      puVar22 = puVar22 + 4;
    } while (uVar17 != uVar20);
    _swift_bridgeObjectRelease(lVar6);
  }
  puVar8 = puVar15;
  FUN_104a24e30();
  _swift_bridgeObjectRelease(puVar15);
  uVar17 = 0;
  uStack_e8 = 0x800000010f003ed0;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
code_r0x000104a2517c:
  uVar20 = uVar17;
  if (uVar17 < 0x15) {
    uVar20 = 0x14;
  }
  do {
    if (uVar17 == uVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104a25598);
      (*pcVar5)();
    }
    puVar21 = *(undefined **)(uVar17 * 8 + 0x1130a4c00);
    lRam000000011340b190 = lRam000000011340b190 + 1;
    lRam000000011340b0d8 = lRam000000011340b0d8 + 1;
    plVar13 = (long *)0x11340b0e0;
    uVar18 = 0xd000000000000015;
    uVar19 = uStack_e8;
    switch(puVar21) {
    case (undefined *)0x0:
      break;
    case (undefined *)0x1:
      uVar18 = 0xd00000000000001b;
      plVar13 = (long *)0x11340b0e8;
      uVar19 = 0x800000010f003eb0;
      break;
    case (undefined *)0x2:
      uVar18 = 0xd000000000000016;
      plVar13 = (long *)0x11340b0f0;
      uVar19 = 0x800000010f003e70;
      break;
    case (undefined *)0x3:
      uVar18 = 0xd000000000000017;
      plVar13 = (long *)0x11340b0f8;
      uVar19 = 0x800000010f003e90;
      break;
    case (undefined *)0x4:
      plVar13 = (long *)0x11340b100;
      uVar18 = 0xd000000000000010;
      uVar19 = 0x800000010f003e30;
      break;
    case (undefined *)0x5:
      uVar18 = 0xd000000000000012;
      plVar13 = (long *)0x11340b108;
      uVar19 = 0x800000010f003e50;
      break;
    case (undefined *)0x6:
      uVar18 = 0xd000000000000011;
      plVar13 = (long *)0x11340b110;
      uVar19 = 0x800000010f003db0;
      break;
    case (undefined *)0x7:
      uVar18 = 0xd000000000000013;
      plVar13 = (long *)0x11340b118;
      uVar19 = 0x800000010f003dd0;
      break;
    case (undefined *)0x8:
      uVar18 = 0xd000000000000013;
      plVar13 = (long *)0x11340b120;
      uVar19 = 0x800000010f22b7c0;
      break;
    case (undefined *)0x9:
      plVar13 = (long *)0x11340b128;
      uVar18 = 0x6165722d72657375;
      uVar19 = 0xef6c69616d652d64;
      break;
    case (undefined *)0xa:
      uVar18 = 0xd000000000000011;
      plVar13 = (long *)0x11340b130;
      uVar19 = 0x800000010f003d90;
      break;
    case (undefined *)0xb:
      plVar13 = (long *)0x11340b138;
      uVar18 = 0x706f742d72657375;
      uVar19 = 0xed0000646165722d;
      break;
    case (undefined *)0xc:
      plVar13 = (long *)0x11340b140;
      uVar18 = 0xd000000000000010;
      uVar19 = 0x800000010f003f50;
      break;
    case (undefined *)0xd:
      uVar19 = 0xe900000000000067;
      plVar13 = (long *)0x11340b148;
      uVar18 = 0x6e696d6165727473;
      break;
    case (undefined *)0xe:
      uVar18 = 0xd000000000000012;
      plVar13 = (long *)0x11340b150;
      uVar19 = 0x800000010f003ef0;
      break;
    case (undefined *)0xf:
      uVar18 = 0xd000000000000018;
      plVar13 = (long *)0x11340b158;
      uVar19 = 0x800000010f22b7a0;
      break;
    case (undefined *)0x10:
      uVar18 = 0xd00000000000001a;
      plVar13 = (long *)0x11340b160;
      uVar19 = 0x800000010f003f30;
      break;
    case (undefined *)0x11:
      uVar18 = 0xd00000000000001b;
      plVar13 = (long *)0x11340b168;
      uVar19 = 0x800000010f003f10;
      break;
    case (undefined *)0x12:
      uVar18 = 0xd000000000000019;
      plVar13 = (long *)0x11340b170;
      uVar19 = 0x800000010f003df0;
      break;
    case (undefined *)0x13:
      uVar19 = 0xe600000000000000;
      plVar13 = (long *)0x11340b178;
      uVar18 = 0x64696e65706f;
      break;
    default:
      puStack_c0 = puVar21;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_1107bece8,&puStack_c0,&UNK_1107bece8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104a255c0);
      (*pcVar5)();
    }
    uVar17 = uVar17 + 1;
    *plVar13 = *plVar13 + 1;
    if (*(long *)(puVar8 + 0x10) != 0) {
      __ss6HasherV5_seedABSi_tcfC(&puStack_c0,*(undefined8 *)(puVar8 + 0x28));
      ppuVar9 = &puStack_c0;
      __sSS4hash4intoys6HasherVz_tF(ppuVar9,uVar18,uVar19);
      __ss6HasherV9_finalizeSiyF();
      uVar14 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
      uVar16 = (ulong)ppuVar9 & (uVar14 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar8 + (uVar16 >> 3 & 0xfffffffffffff8) + 0x38) >> (uVar16 & 0x3f) & 1) != 0
         ) {
        do {
          puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar16 * 0x10);
          uVar10 = *puVar1;
          uVar4 = puVar1[1];
          if ((uVar10 == uVar18 && uVar4 == uVar19) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar10,uVar4,uVar18,uVar19,0), (uVar10 & 1) != 0)) {
            _swift_bridgeObjectRelease(uVar19);
            puVar11 = puVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            puStack_78 = puVar15;
            if (((ulong)puVar11 & 1) == 0) {
              func_0x000104a241d8(0,*(long *)(puVar15 + 0x10) + 1,1);
            }
            uVar20 = *(ulong *)(puStack_78 + 0x10);
            if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar20) {
              func_0x000104a241d8(1 < *(ulong *)(puStack_78 + 0x18),uVar20 + 1,1);
            }
            *(ulong *)(puStack_78 + 0x10) = uVar20 + 1;
            *(undefined **)(puStack_78 + uVar20 * 8 + 0x20) = puVar21;
            puVar15 = puStack_78;
            if (uVar17 != 0x14) goto code_r0x000104a2517c;
            goto code_r0x000104a25568;
          }
          uVar16 = uVar16 + 1 & ~uVar14;
        } while ((*(ulong *)(puVar8 + (uVar16 >> 3 & 0xfffffffffffff8) + 0x38) >> (uVar16 & 0x3f) &
                 1) != 0);
      }
    }
    _swift_bridgeObjectRelease(uVar19);
    if (uVar17 == 0x14) {
code_r0x000104a25568:
      _swift_bridgeObjectRelease(puVar8);
      return puVar15;
    }
  } while( true );
}



/* Entry: 104a255c0; end: 104a255d3;  */

undefined1  [16] FUN_104a255c0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x14) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x13 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104a255d4; end: 104a25613;  */

void FUN_104a255d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4cef8;
  _swift_getWitnessTable(&UNK_10dd4cef8,&UNK_1107bece8);
  puRam00000001130a4ea8 = puVar1;
  return;
}



/* Entry: 104a25614; end: 104a25617;  */

void FUN_104a25614(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a4eb0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104a2565c(0xff);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130a4eb0 = puVar2;
  return;
}



/* Entry: 104a25618; end: 104a256ab;  */

void FUN_104a25618(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a4eb0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104a2565c(0xff);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130a4eb0 = puVar2;
  return;
}



/* Entry: 104a256ac; end: 104a256bb;  */

undefined1  [16] FUN_104a256ac(void)

{
  return ZEXT816(0x1107bece8);
}



/* Entry: 104a256bc; end: 104a2570f;  */

uint FUN_104a256bc(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 104a25710; end: 104a2571b; -[SPTSession accessToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a25710(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4ed8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a4ed8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a2571c; end: 104a25753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a2571c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4ed8);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4ed8) + 8))
  ;
  return auVar1;
}



/* Entry: 104a25754; end: 104a2575f; -[SPTSession refreshToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a25754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4ee0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a4ee0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a25760; end: 104a257df;  */

void FUN_104a25760(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a257e0; end: 104a258bf; -[SPTSession expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a257e0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113815b80,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a258c0; end: 104a258cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a258c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_113815b88));
  return;
}



/* Entry: 104a258d0; end: 104a25a5b; -[SPTSession isExpired] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104a258d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b198 = lRam000000011340b198 + 1;
  _objc_retain(param_1);
  lVar3 = param_1;
  __s10Foundation4DateVACycfC(puVar5);
  lVar1 = _DAT_113815b80;
  FUN_104a25a5c();
  puVar4 = puVar5;
  __sSL1loiySbx_xtFZTj(puVar5,param_1 + lVar1,lVar2,lVar3);
  _objc_release(param_1);
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  return ((uint)puVar4 ^ 0xffffffff) & 1;
}



/* Entry: 104a25a5c; end: 104a25a9f;  */

void FUN_104a25a5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a4ee8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s10Foundation4DateVMa(0xff);
  puVar2 = PTR___s10Foundation4DateVSLAAMc_110350bd8;
  _swift_getWitnessTable(PTR___s10Foundation4DateVSLAAMc_110350bd8,uVar1);
  puRam00000001130a4ee8 = puVar2;
  return;
}



/* Entry: 104a25aa0; end: 104a25c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104a25aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  _objc_allocWithZone();
  lRam000000011340b1a0 = lRam000000011340b1a0 + 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4ed8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4ee0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lVar2 = _DAT_113815b80;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_5,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_113815b88) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_5,lVar3);
  return puVar4;
}



/* Entry: 104a25c80; end: 104a25ccb;  */

void FUN_104a25c80(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a25ccc; end: 104a25d2b; -[SPTSession init] */

void FUN_104a25ccc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SpotifyLogin.Session",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a25cf8);
  (*pcVar1)();
}



/* Entry: 104a25d2c; end: 104a25d9f; -[SPTSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a25d2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4ed8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4ee0 + 8));
  lVar1 = _DAT_113815b80;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113815b88));
  return;
}



/* Entry: 104a25da0; end: 104a25dcf; +[SPTSession supportsSecureCoding] */

undefined8 FUN_104a25da0(void)

{
  lRam000000011340b1a8 = lRam000000011340b1a8 + 1;
  return 1;
}



/* Entry: 104a25dd0; end: 104a2606f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a25dd0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  
  lRam000000011340b1b0 = lRam000000011340b1b0 + 1;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a4ed8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_1130a4ed8))[1]);
  uVar5 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f22b800);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a4ee0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_1130a4ee0))[1]);
  uVar5 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f22b820);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_DAT_113815b80);
  uVar3 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f22b840);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar5,uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  lVar7 = *(long *)(*(long *)(unaff_x20 + _DAT_113815b88) + 0x10);
  if (lVar7 != 0) {
    uVar8 = 0;
    uVar12 = 0;
    lVar9 = lRam000000011340b1d8;
    lVar10 = lRam000000011340b1e0;
LAB_104a25f44:
    lVar1 = lVar7 - uVar8;
    if (lVar1 == 0 || lVar7 < (long)uVar8) {
LAB_104a2606c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a26070);
      (*pcVar2)();
    }
    lVar11 = 0;
    do {
      uVar6 = *(ulong *)(*(long *)(unaff_x20 + _DAT_113815b88) + 0x20 + uVar8 * 8 + lVar11 * 8);
      lRam000000011340b1d8 = lVar9 + 1 + lVar11;
      lRam000000011340b1e0 = lVar10 + 1 + lVar11;
      if ((-0x41 < (long)uVar6) && ((long)uVar6 < 0x41)) {
        if ((long)uVar6 < 0) {
          if (uVar6 != 0xffffffffffffffc0) goto code_r0x000104a25fb4;
        }
        else if (uVar6 != 0x40) {
          uVar6 = 1L << (uVar6 & 0x3f);
          goto LAB_104a25fc0;
        }
      }
      if (lVar1 + -1 == lVar11) goto LAB_104a25fec;
      lVar11 = lVar11 + 1;
      if (lVar1 == lVar11) goto LAB_104a2606c;
    } while( true );
  }
LAB_104a25ff8:
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_msgSend();
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f22b860);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,puVar4,uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
code_r0x000104a25fb4:
  uVar6 = 0;
LAB_104a25fc0:
  uVar12 = uVar6 | uVar12;
  uVar6 = ~uVar8;
  uVar8 = uVar8 + lVar11 + 1;
  lVar9 = lVar9 + lVar11 + 1;
  lVar10 = lVar10 + lVar11 + 1;
  if (uVar6 + lVar7 == lVar11) goto LAB_104a25fec;
  goto LAB_104a25f44;
LAB_104a25fec:
  if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104a25ff4);
    (*pcVar2)();
  }
  goto LAB_104a25ff8;
}



/* Entry: 104a26070; end: 104a260bf; -[SPTSession encodeWithCoder:] */

void FUN_104a26070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a25dd0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a260c0; end: 104a26103;  */

undefined8 FUN_104a260c0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104a26104; end: 104a26553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a26104(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12;
  lRam000000011340b1b8 = lRam000000011340b1b8 + 1;
  lVar4 = 0;
  FUN_104a26dac(0,0x1130a4e00,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar7 = -0x2fffffffffffffe8;
  lVar5 = lVar4;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    lStack_80 = unaff_x20;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = lVar6;
    _objc_release(lVar5);
    lVar5 = -0x2fffffffffffffe7;
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
              (lVar4,0xd000000000000019,0x800000010f22b820,lVar4);
    if (lVar4 != 0) {
      lVar6 = lVar4;
      lStack_78 = lVar7;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar4);
      lVar7 = 0;
      FUN_104a26dac(0,0x1130a4ef0,&PTR__OBJC_CLASS___NSDate_1126ae770);
      __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
      if (lVar7 != 0) {
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar15);
        _objc_release(lVar7);
        uVar8 = 0;
        FUN_104a26dac(0,0x1130a4ef8,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF()
        ;
        if (uVar8 != 0) {
          uStack_c0 = uVar8;
          lStack_b8 = lVar6;
          lStack_b0 = lVar5;
          lStack_a8 = lVar16;
          lStack_a0 = lVar15;
          lStack_98 = lVar14;
          lStack_90 = lVar3;
          _objc_msgSend();
          uVar17 = 0;
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            lRam000000011340b1c8 = lRam000000011340b1c8 + 1;
            lRam000000011340b1e0 = lRam000000011340b1e0 + 1;
            if ((uVar8 >> (uVar17 & 0x3f) & 1) != 0) {
              lRam000000011340b1d0 = lRam000000011340b1d0 + 1;
              puVar9 = puVar10;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar11 = puVar10;
              if (((ulong)puVar9 & 1) == 0) {
                puVar11 = (undefined *)0x0;
                func_0x000104a26744(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
              }
              uVar2 = *(ulong *)(puVar11 + 0x10);
              puVar10 = puVar11;
              if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
                func_0x000104a26744(puVar10,uVar2 + 1,1,puVar11);
              }
              *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
              *(ulong *)(puVar10 + uVar2 * 8 + 0x20) = uVar17;
            }
            lVar4 = lStack_90;
            lVar3 = lStack_98;
            lVar5 = lStack_a0;
            lVar7 = lStack_a8;
            uVar17 = uVar17 + 1;
          } while (uVar17 != 0x14);
          pcVar13 = *(code **)(lStack_98 + 0x10);
          (*pcVar13)(lStack_a8,lStack_a0,lStack_90);
          lVar14 = lStack_80;
          _objc_allocWithZone();
          lRam000000011340b1a0 = lRam000000011340b1a0 + 1;
          plVar1 = (long *)(lVar14 + _DAT_1130a4ed8);
          *plVar1 = lStack_88;
          plVar1[1] = lStack_78;
          plVar1 = (long *)(lVar14 + _DAT_1130a4ee0);
          *plVar1 = lStack_b8;
          plVar1[1] = lStack_b0;
          (*pcVar13)(lVar14 + _DAT_113815b80,lVar7,lVar4);
          *(undefined **)(lVar14 + _DAT_113815b88) = puVar10;
          lStack_68 = lStack_80;
          puVar12 = auStack_70;
          _objc_msgSendSuper2(puVar12,PTR_s_init_1125d9248);
          _objc_release(param_1);
          _objc_release(uStack_c0);
          pcVar13 = *(code **)(lVar3 + 8);
          (*pcVar13)(lVar7,lVar4);
          (*pcVar13)(lVar5,lVar4);
          _swift_getObjectType();
          _swift_deallocPartialClassInstance();
          return puVar12;
        }
        (**(code **)(lVar14 + 8))(lVar15,lVar3);
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease(lStack_78);
      goto LAB_104a264f0;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  _objc_release(param_1);
LAB_104a264f0:
  lRam000000011340b1c0 = lRam000000011340b1c0 + 1;
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 104a26554; end: 104a26643; -[SPTSession initWithCoder:] */

void FUN_104a26554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104a26104();
  return;
}



/* Entry: 104a26644; end: 104a2683b;  */

undefined * FUN_104a26644(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104a26744);
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
    puVar3 = (undefined *)0x1130a4f38;
    FUN_104a204dc();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSsN_11034e1d8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 104a2683c; end: 104a26843;  */

void FUN_104a2683c(void)

{
  if (lRam00000001130a4f28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8277a0);
  return;
}



/* Entry: 104a26844; end: 104a2687b;  */

void FUN_104a26844(undefined8 param_1)

{
  if (lRam00000001130a4f28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8277a0);
  return;
}



/* Entry: 104a2687c; end: 104a268ff;  */

void FUN_104a2687c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dd4d018;
  puStack_38 = &UNK_10dd4d018;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 104a26900; end: 104a26913;  */

void FUN_104a26900(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_lookUpClassMethod_11034f490)(param_1,param_2,&DAT_10e8277a0);
  return;
}



/* Entry: 104a26914; end: 104a26a87;  */

undefined * FUN_104a26914(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a26a88);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x1130a4ed0;
    FUN_104a204dc();
    lVar5 = 0;
    __s10Foundation12URLQueryItemVMa();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a26a80);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a26a84);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  __s10Foundation12URLQueryItemVMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 104a26a88; end: 104a26abf;  */

ulong FUN_104a26a88(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a26c10);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_104a26c10(uVar2,uVar4,0x104a2657c);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a26c0c);
      (*pcVar1)();
    }
    FUN_104a26c90(0,uVar2,uVar3 + 0x20,param_4,0x1130a4f40,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104a26ac0; end: 104a26c0f;  */

ulong FUN_104a26ac0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a26c10);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_104a26c10(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a26c0c);
      (*pcVar1)();
    }
    FUN_104a26c90(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104a26c10; end: 104a26c8f;  */

undefined * FUN_104a26c10(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 104a26c90; end: 104a26dab;  */

long FUN_104a26c90(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a26da8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a26dac);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_104a26dac(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_104a26dac(0,param_5,param_6);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a26da4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if ((long)param_4 < 0) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 104a26dac; end: 104a26deb;  */

void FUN_104a26dac(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104a26dec; end: 104a26e77; -[SPTSessionManager session] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a26dec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130a4f68;
  lRam000000011340b1e8 = lRam000000011340b1e8 + 1;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1130a4f68);
  lVar2 = param_1;
  _objc_retain();
  _objc_msgSend(uVar4,PTR_s_lock_1126058b8);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_1130a4f70);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar4);
  _objc_msgSend(uVar3,PTR_s_unlock_11267dcf8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104a26e78; end: 104a26ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a26e78(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lRam000000011340b1e8 = lRam000000011340b1e8 + 1;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a4f68);
  _objc_msgSend(uVar1,PTR_s_lock_1126058b8);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a4f70);
  _objc_retain(uVar2);
  _objc_msgSend(uVar1,PTR_s_unlock_11267dcf8);
  return uVar2;
}



/* Entry: 104a26ee4; end: 104a26f97; -[SPTSessionManager setSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a26ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130a4f68;
  lRam000000011340b1f0 = lRam000000011340b1f0 + 1;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1130a4f68);
  uVar2 = param_3;
  _objc_retain(param_3);
  lVar3 = param_1;
  _objc_retain();
  _objc_msgSend(uVar4,PTR_s_lock_1126058b8);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_1130a4f70);
  *(undefined8 *)(lVar3 + _DAT_1130a4f70) = param_3;
  _objc_retain(uVar2);
  _objc_release(uVar4);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar1),PTR_s_unlock_11267dcf8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104a26f98; end: 104a271a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a26f98(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  lRam000000011340b1f0 = lRam000000011340b1f0 + 1;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a4f68);
  _objc_msgSend(uVar1,PTR_s_lock_1126058b8);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130a4f70);
  *(undefined8 *)(unaff_x20 + _DAT_1130a4f70) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar2);
  _objc_msgSend(uVar1,PTR_s_unlock_11267dcf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a271a4; end: 104a2727b;  */

void FUN_104a271a4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lRam000000011340b1f0 = lRam000000011340b1f0 + 1;
  uVar1 = param_1[2];
  lVar2 = param_1[3];
  uVar4 = *param_1;
  lVar3 = param_1[1];
  if ((param_2 & 1) == 0) {
    _objc_msgSend(uVar1,PTR_s_lock_1126058b8);
    uVar5 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined8 *)(lVar3 + lVar2) = uVar4;
    _objc_retain(uVar4);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,PTR_s_unlock_11267dcf8);
  }
  else {
    uVar5 = uVar4;
    _objc_retain(uVar4);
    _objc_msgSend(uVar1,PTR_s_lock_1126058b8);
    uVar6 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined8 *)(lVar3 + lVar2) = uVar4;
    _objc_retain(uVar5);
    _objc_release(uVar6);
    _objc_msgSend(uVar1,PTR_s_unlock_11267dcf8);
    _objc_release(uVar5);
    uVar4 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104a2727c; end: 104a27307; -[SPTSessionManager delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2727c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a4f78;
  _swift_beginAccess(param_1 + _DAT_1130a4f78,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a27308; end: 104a274ab; -[SPTSessionManager setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a27308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4f78;
  _swift_beginAccess(param_1 + _DAT_1130a4f78,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104a274ac; end: 104a274bb; -[SPTSessionManager urlSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a274ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a4f88));
  return;
}



/* Entry: 104a274bc; end: 104a2766f;  */

undefined8 FUN_104a274bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  lRam000000011340b1f8 = lRam000000011340b1f8 + 1;
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_msgSend(unaff_x20,PTR_s_initWithConfiguration_delegate_u_112525600,param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  return unaff_x20;
}



/* Entry: 104a27670; end: 104a2775f; -[SPTSessionManager initWithConfiguration:delegate:] */

undefined8
FUN_104a27670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  lRam000000011340b1f8 = lRam000000011340b1f8 + 1;
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_msgSend(puVar1,PTR_s_ephemeralSessionConfiguration_1125c3ac0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_msgSend(param_1,PTR_s_initWithConfiguration_delegate_u_112525600,param_3,param_4,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  return param_1;
}



/* Entry: 104a27760; end: 104a278a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a27760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_1130a4f78;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130a4f78,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4f98);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a4f80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130a4f70) = 0;
  lVar2 = _DAT_1130a4f68;
  lRam000000011340b200 = lRam000000011340b200 + 1;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  _objc_allocWithZone();
  _objc_msgSend();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lRam000000011340b4a8 = lRam000000011340b4a8 + 1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a4fa8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_1130a4f88) = param_3;
  puVar4 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  puVar5 = auStack_78;
  _objc_msgSendSuper2(puVar5,puVar4);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar5;
}



/* Entry: 104a278a8; end: 104a279af; -[SPTSessionManager initWithConfiguration:delegate:urlSession:] */

undefined8
FUN_104a278a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x000104a2d984(param_3,param_4,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  return uVar1;
}



/* Entry: 104a279b0; end: 104a279d3; -[SPTSessionManager dealloc] */

void FUN_104a279b0(void)

{
  _objc_retain();
  func_0x000104a27918();
  return;
}



/* Entry: 104a279d4; end: 104a27a63; -[SPTSessionManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a279d4(long param_1)

{
  undefined8 *puVar1;
  
  FUN_104a2f290(param_1 + _DAT_1130a4f78);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a4fa8));
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4f98);
  FUN_104a2dc74(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a4f80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a4f70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a4f68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130a4f88));
  return;
}



/* Entry: 104a27a64; end: 104a27aaf;  */

void FUN_104a27a64(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a27ab0; end: 104a27adb; -[SPTSessionManager init] */

void FUN_104a27ab0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SpotifyLogin.SessionManager",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a27adc);
  (*pcVar1)();
}



/* Entry: 104a27adc; end: 104a27af3; -[SPTSessionManager isSpotifyAppInstalled] */

uint FUN_104a27adc(uint param_1)

{
  FUN_104a2daac();
  return param_1 & 1;
}



/* Entry: 104a27af4; end: 104a27af7;  */

undefined * FUN_104a27af4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b430 = lRam000000011340b430 + 1;
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar7,0x3a796669746f7073,0xe800000000000000);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000104a2f430(puVar7,0x1130a4df0);
    puVar3 = (undefined *)0x0;
    lRam000000011340b438 = lRam000000011340b438 + 1;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    _objc_opt_self(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar3 = puVar4;
    _objc_msgSend(puVar4,PTR_s_canOpenURL__1125a8d68,puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return puVar3;
}



/* Entry: 104a27af8; end: 104a27cb7;  */

void FUN_104a27af8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puStack_68;
  
  lRam000000011340b210 = lRam000000011340b210 + 1;
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar7 = uVar6;
    if ((long)param_1 < 0) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = 0;
  while( true ) {
    if (uVar7 == uVar9) {
      FUN_104a27f84(puStack_68,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puStack_68);
      return;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104a27ca4);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
      _objc_retain();
      puVar5 = PTR_s_integerValue_1125f7a00;
    }
    else {
      uVar3 = uVar9;
      FUN_104a2d640(uVar9,param_1,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x1130a4ef8);
      puVar5 = PTR_s_integerValue_1125f7a00;
    }
    PTR_s_integerValue_1125f7a00 = puVar5;
    if (SCARRY8(uVar9,1)) break;
    uVar8 = uVar9 + 1;
    lRam000000011340b4b0 = lRam000000011340b4b0 + 1;
    uVar4 = uVar3;
    _objc_msgSend();
    _objc_release(uVar3);
    FUN_104a255c0();
    uVar9 = uVar9 + 1;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = puStack_68;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        plVar1 = (long *)(puStack_68 + 0x10);
        puStack_68 = (undefined *)0x0;
        func_0x000104a26744(0,*plVar1 + 1,1);
      }
      uVar9 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar9) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puStack_68 + 0x18));
        func_0x000104a26744(puVar5,uVar9 + 1,1,puStack_68);
        puStack_68 = puVar5;
      }
      *(ulong *)(puStack_68 + 0x10) = uVar9 + 1;
      *(ulong *)(puStack_68 + uVar9 * 8 + 0x20) = uVar4;
      uVar9 = uVar8;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a27ca0);
  (*pcVar2)();
}



/* Entry: 104a27cb8; end: 104a27f83;  */

undefined * FUN_104a27cb8(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar10 = 0xffffffffffffffff;
    if ((long)uVar13 < 0x40) {
      uVar10 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar10 = uVar10 & *puVar12;
    puVar5 = param_1;
    _swift_bridgeObjectRetain();
    lStack_70 = 0;
  }
  else {
    puVar5 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      puVar5 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar4 = 0;
    FUN_104a2f328(0,0x1130a5008,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar6 = uVar4;
    FUN_104a2f2c4();
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&puStack_88,puVar5,uVar4,uVar6);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar10 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar10;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (puVar5 == (undefined *)0x0) {
LAB_104a27f44:
        FUN_104a2f318(param_1,puVar12,uVar11,lVar14,uVar10);
        return puStack_98;
      }
      uVar6 = 0;
      puStack_90 = puVar5;
      FUN_104a2f328(0,0x1130a5008,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      _swift_dynamicCast(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar6,7);
      puVar8 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar5 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a27f84);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar10 = 0;
          goto LAB_104a27f44;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar5 = *(undefined **)
                (*(long *)(param_1 + 0x30) +
                (lVar2 << 9 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 3));
      _objc_retain();
      puVar8 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar8;
    if (puVar5 == (undefined *)0x0) goto LAB_104a27f44;
    lRam000000011340b218 = lRam000000011340b218 + 1;
    _objc_opt_self(puVar8);
    puVar7 = puVar5;
    _swift_dynamicCastObjCClass(puVar5,puVar8);
    uVar10 = uVar13;
    lVar14 = lVar2;
    if (puVar7 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar5 = puStack_98;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar5 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puStack_98 & 0xfffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((long)puStack_98 < 0) {
            puVar8 = puStack_98;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar8);
        }
        puVar5 = (undefined *)0x0;
        func_0x000104a26aa4(0,puVar8 + 1,1,puStack_98);
        puStack_98 = puVar5;
      }
      uVar9 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar9 + 0x10);
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar13) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
        func_0x000104a26aa4(puVar5,uVar13 + 1,1,puStack_98);
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        puStack_98 = puVar5;
      }
      *(ulong *)(uVar9 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar9 + uVar13 * 8 + 0x20) = puVar7;
    }
  } while( true );
}



/* Entry: 104a27f84; end: 104a28327;  */

/* WARNING: Removing unreachable block (ram,0x000104a28040) */
/* WARNING: Removing unreachable block (ram,0x000104a28200) */
/* WARNING: Removing unreachable block (ram,0x000104a28084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a27f84(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long alStack_80 [4];
  
  lVar6 = 0x1130a4df0;
  lVar14 = param_2;
  lVar15 = param_3;
  lVar16 = param_4;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar18 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar7 + -8);
  lVar8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  uVar17 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b220 = lRam000000011340b220 + 1;
  FUN_104a232a0();
  plVar1 = (long *)(unaff_x20 + _DAT_1130a4f98);
  lVar6 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  *plVar1 = lVar8;
  plVar1[1] = lVar14;
  plVar1[2] = lVar15;
  plVar1[3] = lVar16;
  FUN_104a2dc74(lVar6,lVar3,lVar2,lVar4);
  FUN_104a283d8(lVar18,param_1,param_3,param_4);
  lVar6 = lVar18;
  (**(code **)(lVar19 + 0x30))(lVar18,1,lVar7);
  if ((int)lVar6 == 1) {
    func_0x000104a2f430(lVar18,0x1130a4df0);
    lVar6 = _DAT_1130a4f78;
    lRam000000011340b238 = lRam000000011340b238 + 1;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,alStack_80,0,0);
    puVar9 = (undefined1 *)(unaff_x20 + lVar6);
    _swift_unknownObjectWeakLoadStrong();
    if (puVar9 == (undefined1 *)0x0) {
      return;
    }
    puVar10 = puVar9;
    FUN_104a2dc34();
    puVar11 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar10,0,0);
    *puVar10 = 1;
    puVar12 = puVar11;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar11);
    _objc_msgSend(puVar9,PTR_s_sessionManagerWithManager_didFai_112525608);
    _objc_release(puVar12);
    _swift_unknownObjectRelease(puVar9);
    return;
  }
  uVar13 = uVar17;
  (**(code **)(lVar19 + 0x20))(uVar17,lVar18,lVar7);
  if (param_2 < 2) {
    if (param_2 != 0) {
      if (param_2 != 1) {
LAB_104a28304:
        alStack_80[0] = param_2;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_1107beab8,alStack_80,&UNK_1107beab8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104a28328);
        (*pcVar5)();
      }
      lRam000000011340b250 = lRam000000011340b250 + 1;
      FUN_104a2991c(uVar17);
      goto LAB_104a282d4;
    }
    lRam000000011340b240 = lRam000000011340b240 + 1;
    FUN_104a2daac();
    if ((uVar13 & 1) == 0) {
      func_0x000104a28ed0(uVar17);
      goto LAB_104a282d4;
    }
    lRam000000011340b248 = lRam000000011340b248 + 1;
  }
  else {
    if (param_2 == 2) {
      lRam000000011340b258 = lRam000000011340b258 + 1;
      func_0x000104a28ca8(uVar17,0);
      goto LAB_104a282d4;
    }
    if (param_2 != 3) goto LAB_104a28304;
    lRam000000011340b260 = lRam000000011340b260 + 1;
  }
  func_0x000104a28ca8(uVar17,1);
LAB_104a282d4:
  (**(code **)(lVar19 + 8))(uVar17,lVar7);
  return;
}



/* Entry: 104a28328; end: 104a283d7; -[SPTSessionManager initiateSessionWithScope:authorizationFlow:campaign:] */

void FUN_104a28328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_104a2f328(0,0x1130a4ef8,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _objc_retain(param_1);
  FUN_104a27af8(param_3,param_4,param_5,uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 104a283d8; end: 104a2991b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a283d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  code *pcVar17;
  long unaff_x20;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar16 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)&uStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar23 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar12 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar22 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar18 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar23 = 0x1130a4fe0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar23 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b268 = lRam000000011340b268 + 1;
  __s10Foundation13URLComponentsV6stringACSgSSh_tcfC(lVar23,0xd00000000000001a,0x800000010f22bac0);
  _swift_getObjCClassFromMetadata(lVar16);
  puVar19 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_self();
  puVar4 = puVar19;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR__kCFBundleIdentifierKey_11034aba0 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x104a28ca4);
    (*pcVar17)();
  }
  puVar5 = puVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar7;
  if (puVar5 == (undefined *)0x0) {
    uStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_b0);
    _swift_unknownObjectRelease(puVar5);
  }
  puVar5 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  lStack_90 = lStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104a2f430(&lStack_90,0x1130a4ff0);
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&lStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar13 = uStack_b8;
    uVar14 = uStack_c0;
    if ((int)puVar6 == 0) {
      uVar14 = 0;
      uVar13 = 0;
    }
  }
  if (*(long *)PTR__kCFBundleVersionKey_11034abb0 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x104a28ca8);
    (*pcVar17)();
  }
  puVar15 = puVar4;
  _objc_msgSend(puVar4,PTR_s_objectForInfoDictionaryKey__1126159c8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar15 == (undefined *)0x0) {
    uStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_b0);
    _swift_unknownObjectRelease(puVar15);
  }
  uStack_88 = uStack_a8;
  lStack_90 = lStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104a2f430(&lStack_90,0x1130a4ff0);
    uStack_140 = 0;
    uStack_138 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&lStack_90,puVar5 + 8,PTR___sSSN_11034da80,6);
    uStack_140 = uStack_c0;
    uStack_138 = uStack_b8;
    if ((int)puVar6 == 0) {
      uStack_140 = 0;
      uStack_138 = 0;
    }
  }
  lVar16 = 0x1130a4ed0;
  FUN_104a204dc();
  lVar7 = 0;
  __s10Foundation12URLQueryItemVMa();
  lVar24 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
  uVar21 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar20 = uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff);
  lStack_158 = lVar16;
  _swift_allocObject(lVar16,uVar20 + lVar24 * 10,uVar21 | 7);
  *(undefined8 *)(lVar16 + 0x18) = 0x14;
  *(undefined8 *)(lVar16 + 0x10) = 10;
  lVar7 = lVar16 + uVar20;
  lVar25 = *(long *)(unaff_x20 + _DAT_1130a4fa8);
  uVar10 = *(undefined8 *)(lVar25 + _DAT_1130a4de8);
  uVar1 = ((undefined8 *)(lVar25 + _DAT_1130a4de8))[1];
  uStack_160 = uVar20;
  _swift_bridgeObjectRetain(uVar1);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7,0x695f746e65696c63,0xe900000000000064,uVar10,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  lVar9 = lVar25 + _DAT_113815b60;
  lVar8 = lVar18;
  (**(code **)(lVar22 + 0x10))(lVar18,lVar9,lVar3);
  __s10Foundation3URLV14absoluteStringSSvg();
  (**(code **)(lVar22 + 8))(lVar18,lVar3);
  uVar10 = 0xec0000006972755f;
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24,0x7463657269646572,0xec0000006972755f,lVar8,lVar9);
  _swift_bridgeObjectRelease(lVar9);
  FUN_104a2dca4(param_2);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 2,0x65706f6373,0xe500000000000000,param_2,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 3,0x65736e6f70736572,0xed0000657079745f,0x65646f63,0xe400000000000000)
  ;
  _objc_msgSend(puVar19,PTR_s_mainBundle_11260b3b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar19;
  puVar15 = PTR_s_bundleIdentifier_1125a6c40;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  if (puVar5 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar19 = puVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar5);
    _objc_release(puVar5);
  }
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 4,0x72756f735f6d7475,0xea00000000006563,puVar19,puVar15);
  _swift_bridgeObjectRelease(puVar15);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 5,0x6964656d5f6d7475,0xea00000000006d75,uVar14,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 6,0x746e6f635f6d7475,0xeb00000000746e65,uStack_140,uStack_138);
  _swift_bridgeObjectRelease(uStack_138);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 7,0x706d61635f6d7475,0xec0000006e676961,param_3,param_4);
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 8,0x70756e6769736f6e,0xe800000000000000,0x65757274,0xe400000000000000)
  ;
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (lVar7 + lVar24 * 9,0x736b6e696c6f6e,0xe700000000000000,0x65757274,0xe400000000000000);
  lVar18 = _DAT_113815b68;
  lStack_b0 = lVar16;
  _swift_beginAccess(lVar25 + _DAT_113815b68,&lStack_90,0,0);
  FUN_104a2f4c4(lVar25 + lVar18,lVar12,0x1130a4df0);
  lVar16 = lVar12;
  (**(code **)(lVar22 + 0x30))(lVar12,1,lVar3);
  func_0x000104a2f430(lVar12,0x1130a4df0);
  uVar20 = uStack_160;
  if ((int)lVar16 == 1) {
    puVar6 = (undefined8 *)(unaff_x20 + _DAT_1130a4f98);
    lVar16 = puVar6[1];
    if (lVar16 != 0) {
      uVar14 = puVar6[2];
      uVar13 = puVar6[3];
      uVar10 = *puVar6;
      lRam000000011340b270 = lRam000000011340b270 + 1;
      lVar12 = lStack_158;
      _swift_allocObject(lStack_158,uStack_160 + lVar24 * 2,uVar21 | 7);
      *(undefined8 *)(lVar12 + 0x18) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 2;
      func_0x000104a2f554(uVar10,lVar16,uVar14,uVar13);
      _swift_bridgeObjectRetain(uVar13);
      __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
                (lVar12 + uVar20,0x6168635f65646f63,0xee0065676e656c6c,uVar14,uVar13);
      _swift_bridgeObjectRelease_n(uVar13,2);
      _swift_bridgeObjectRelease(lVar16);
      __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
                (lVar12 + uVar20 + lVar24,0xd000000000000015,0x800000010f007dc0,0x36353253,
                 0xe400000000000000);
      func_0x000104a2ccdc(lVar12);
    }
  }
  pcVar17 = *(code **)(lVar11 + 0x30);
  lVar16 = lVar23;
  (*pcVar17)(lVar23,1,lVar2);
  if ((int)lVar16 == 0) {
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(lStack_b0);
  }
  else {
    _swift_bridgeObjectRelease();
  }
  lVar12 = lVar23;
  (*pcVar17)(lVar23,1,lVar2);
  lVar16 = lStack_150;
  if ((int)lVar12 == 0) {
    (**(code **)(lVar11 + 0x10))(lStack_150,lVar23,lVar2);
    __s10Foundation13URLComponentsV3urlAA3URLVSgvg(param_1);
    _objc_release(puVar4);
    (**(code **)(lVar11 + 8))(lVar16,lVar2);
  }
  else {
    _objc_release(puVar4);
    (**(code **)(lVar22 + 0x38))(param_1,1,1,lVar3);
  }
  func_0x000104a2f430(lVar23,0x1130a4fe0);
  return;
}



/* Entry: 104a2991c; end: 104a29c27;  */

void FUN_104a2991c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [80];
  
  ppuVar3 = &puStack_c0;
  ppuVar9 = &puStack_c0;
  lRam000000011340b2b8 = lRam000000011340b2b8 + 1;
  FUN_104a2daac();
  if ((param_1 & 1) == 0) {
    lRam000000011340b2c0 = lRam000000011340b2c0 + 1;
    puVar4 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
    _objc_allocWithZone();
    _objc_msgSend();
    puVar5 = (undefined *)0x1130a5050;
    FUN_104a204dc();
    puVar10 = auStack_90;
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(puVar5 + 0x20) = uVar6;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(puVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(puVar5 + 0x28) = puVar10;
    *(undefined8 *)(puVar5 + 0x30) = 0x3835343836343233;
    *(undefined8 *)(puVar5 + 0x38) = 0xe900000000000030;
    puVar7 = puVar5;
    FUN_104a2df20(puVar5);
    _swift_setDeallocating(puVar5);
    func_0x000104a2f430(puVar5 + 0x20,0x1130a5000);
    puVar8 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar7);
    puVar5 = &UNK_1107bef28;
    _swift_allocObject(&UNK_1107bef28,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_a0 = (code *)0x104a2f46c;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_104a2c3fc;
    puStack_a8 = &UNK_1107bef40;
    puStack_98 = puVar5;
    __Block_copy(&puStack_c0);
    puVar5 = puStack_98;
    _objc_retain();
    _objc_retain(puVar4);
    _swift_release(puVar5);
    _objc_msgSend(puVar4,PTR_s_loadProductWithParameters_comple_1126049f0,puVar8,ppuVar9);
    __Block_release(ppuVar9);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    _objc_opt_self(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104a2de18(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar2 = 0;
    FUN_104a1feac(0);
    uVar6 = 0x1130a4db0;
    FUN_104a2f39c(0x1130a4db0,FUN_104a1feac,&UNK_10dd4cb30);
    puVar8 = puVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,uVar2,PTR___sypN_11034f1a8 + 8,uVar6);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = &UNK_1107beda0;
    _swift_allocObject(&UNK_1107beda0,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    pcStack_a0 = FUN_104a2f4bc;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)0x104a2c590;
    puStack_a8 = &UNK_1107bef68;
    puStack_98 = puVar5;
    __Block_copy(&puStack_c0);
    _swift_release(puStack_98);
    _objc_msgSend(puVar1,PTR_s_openURL_options_completionHandle_1126180f8,puVar4,puVar8,ppuVar3);
    __Block_release(ppuVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  return;
}



/* Entry: 104a29c28; end: 104a29c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a29c28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  code *pcVar13;
  long extraout_x12;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined1 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lRam000000011340b2c8 = lRam000000011340b2c8 + 1;
  lVar1 = 0;
  __s10Foundation12URLQueryItemVMa();
  lVar19 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puVar11 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = 0x1130a4fe0;
  uStack_a8 = (long)puVar11 - extraout_x12;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar18 = ((long)puVar11 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation13URLComponentsVMa();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar12 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_a0 = lVar12;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar15 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b2d0 = lRam000000011340b2d0 + 1;
  if (*(long *)(unaff_x20 + _DAT_1130a4f80) != 0) {
    _objc_msgSend(*(long *)(unaff_x20 + _DAT_1130a4f80),PTR_s_cancel_1125a9090);
  }
  uVar17 = *(long *)(unaff_x20 + _DAT_1130a4fa8) + _DAT_113815b60;
  uVar3 = uVar15;
  lStack_88 = lVar14;
  lStack_80 = lVar2;
  (**(code **)(lVar14 + 0x10))(uVar15,uVar17,lVar2);
  __s10Foundation3URLV6schemeSSSgvg();
  uVar4 = uVar3;
  uVar5 = uVar17;
  __s10Foundation3URLV6schemeSSSgvg();
  if (uVar17 == 0) {
    uVar17 = uVar5;
    if (uVar5 == 0) goto LAB_104a29e40;
LAB_104a29e94:
    _swift_bridgeObjectRelease(uVar17);
LAB_104a29e9c:
    lRam000000011340b2d8 = lRam000000011340b2d8 + 1;
  }
  else {
    if (uVar5 == 0) goto LAB_104a29e94;
    if (uVar3 != uVar4 || uVar17 != uVar5) {
      uVar6 = uVar17;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease();
      uVar4 = uVar5;
      uVar5 = uVar6;
      if ((uVar3 & 1) != 0) goto LAB_104a29e40;
      goto LAB_104a29e9c;
    }
    uVar3 = uVar5;
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease();
    uVar4 = uVar5;
    uVar5 = uVar3;
LAB_104a29e40:
    __s10Foundation3URLV4hostSSSgvg();
    uVar3 = uVar4;
    uVar6 = uVar5;
    __s10Foundation3URLV4hostSSSgvg();
    if (uVar5 == 0) {
      uVar17 = uVar6;
      if (uVar6 != 0) goto LAB_104a29e94;
    }
    else {
      uVar17 = uVar5;
      if (uVar6 == 0) goto LAB_104a29e94;
      if ((uVar4 == uVar3) && (uVar5 == uVar6)) {
        uVar17 = uVar6;
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease();
        uVar3 = uVar6;
        uVar6 = uVar17;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar5,uVar3,uVar6,0);
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease();
        uVar3 = uVar6;
        uVar6 = uVar17;
        if ((uVar4 & 1) == 0) goto LAB_104a29e9c;
      }
    }
    __s10Foundation3URLV4pathSSvg();
    uVar4 = uVar6;
    uVar5 = uVar6;
    _swift_bridgeObjectRelease();
    uVar17 = uVar3 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar17 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar17 == 0) {
LAB_104a2a044:
      __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC
                (lVar18,param_1,0);
      lVar14 = lStack_90;
      lVar12 = lStack_98;
      lVar7 = lVar18;
      (**(code **)(lStack_98 + 0x30))(lVar18,1,lStack_90);
      lVar2 = lStack_a0;
      if ((int)lVar7 == 1) {
        func_0x000104a2f430(lVar18,0x1130a4fe0);
      }
      else {
        lVar7 = lStack_a0;
        (**(code **)(lVar12 + 0x20))(lStack_a0,lVar18,lVar14);
        __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg();
        if (lVar7 != 0) {
          uStack_b0 = *(ulong *)(lVar7 + 0x10);
          uStack_b8 = param_1;
          if (uStack_b0 != 0) {
            uVar17 = 0;
            do {
              if (*(ulong *)(lVar7 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x104a2a4fc);
                (*pcVar13)();
              }
              lVar18 = lVar7 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar19 + 0x48) * uVar17;
              puVar8 = puVar11;
              (**(code **)(lVar19 + 0x10))(puVar11,lVar18,lVar1);
              lRam000000011340b4c0 = lRam000000011340b4c0 + 1;
              __s10Foundation12URLQueryItemV4nameSSvg();
              if ((puVar8 == (undefined1 *)0x726f727265) && (lVar18 == -0x1b00000000000000)) {
                _swift_bridgeObjectRelease(lVar7);
                lVar7 = -0x1b00000000000000;
LAB_104a2a1d0:
                _swift_bridgeObjectRelease(lVar7);
                uVar17 = uStack_a8;
                uVar3 = uStack_a8;
                (**(code **)(lVar19 + 0x20))(uStack_a8,puVar11,lVar1);
                __s10Foundation12URLQueryItemV5valueSSSgvg();
                (**(code **)(lVar19 + 8))(uVar17);
                if (puVar11 == (undefined1 *)0x0) goto LAB_104a2a324;
                lRam000000011340b2f0 = lRam000000011340b2f0 + 1;
                if (((uVar3 == 0x6e61635f72657375) && (puVar11 == (undefined1 *)0xed000064656c6563))
                   || (uVar17 = uVar3,
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar3,puVar11,0x6e61635f72657375,0xed000064656c6563,0),
                      (uVar17 & 1) != 0)) {
                  _swift_bridgeObjectRelease(puVar11);
                  lVar18 = _DAT_1130a4f78;
                  lRam000000011340b2f8 = lRam000000011340b2f8 + 1;
                  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
                  puVar11 = (undefined1 *)(unaff_x20 + lVar18);
                  _swift_unknownObjectWeakLoadStrong();
                  lVar18 = lStack_a0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar16 = 2;
                    goto LAB_104a2a2b8;
                  }
                }
                else {
                  if ((uVar3 == 0x645f737365636361) && (puVar11 == (undefined1 *)0xed00006465696e65)
                     ) {
                    _swift_bridgeObjectRelease(0xed00006465696e65);
                  }
                  else {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar3,puVar11,0x645f737365636361,0xed00006465696e65,0);
                    _swift_bridgeObjectRelease(puVar11);
                    lVar18 = lStack_a0;
                    lVar1 = _DAT_1130a4f78;
                    if ((uVar3 & 1) == 0) {
                      _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
                      puVar11 = (undefined1 *)(unaff_x20 + lVar1);
                      _swift_unknownObjectWeakLoadStrong();
                      if (puVar11 != (undefined1 *)0x0) {
                        uVar16 = 1;
                        goto LAB_104a2a2b8;
                      }
                      goto LAB_104a2a314;
                    }
                  }
                  lVar18 = lStack_a0;
                  lVar1 = _DAT_1130a4f78;
                  lRam000000011340b300 = lRam000000011340b300 + 1;
                  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
                  puVar11 = (undefined1 *)(unaff_x20 + lVar1);
                  _swift_unknownObjectWeakLoadStrong();
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar16 = 3;
LAB_104a2a2b8:
                    puVar8 = puVar11;
                    FUN_104a2dc34();
                    puVar9 = &UNK_1107bf0b0;
                    _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
                    *puVar8 = uVar16;
                    puVar10 = puVar9;
                    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
                    _swift_errorRelease(puVar9);
                    _objc_msgSend(puVar11,PTR_s_sessionManagerWithManager_didFai_112525608);
                    _objc_release(puVar10);
                    _swift_unknownObjectRelease(puVar11);
                  }
                }
LAB_104a2a314:
                pcVar13 = *(code **)(lStack_98 + 8);
                goto LAB_104a2a348;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_bridgeObjectRelease(lVar18);
              if (((ulong)puVar8 & 1) != 0) goto LAB_104a2a1d0;
              uVar17 = uVar17 + 1;
              lVar18 = lVar1;
              (**(code **)(lVar19 + 8))(puVar11);
            } while (uStack_b0 != uVar17);
          }
          _swift_bridgeObjectRelease(lVar7);
          lVar1 = lVar18;
LAB_104a2a324:
          func_0x000104a2e038(uStack_b8);
          lVar18 = _DAT_1130a4f78;
          if (lVar1 != 0) {
            FUN_104a2b350();
            _swift_bridgeObjectRelease(lVar1);
            pcVar13 = *(code **)(lStack_98 + 8);
            lVar18 = lStack_a0;
LAB_104a2a348:
            (*pcVar13)(lVar18,lStack_90);
            (**(code **)(lStack_88 + 8))(uVar15,lStack_80);
            return 1;
          }
          lRam000000011340b308 = lRam000000011340b308 + 1;
          _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
          puVar11 = (undefined1 *)(unaff_x20 + lVar18);
          _swift_unknownObjectWeakLoadStrong();
          lVar18 = lStack_a0;
          if (puVar11 != (undefined1 *)0x0) {
            puVar8 = puVar11;
            FUN_104a2dc34();
            puVar9 = &UNK_1107bf0b0;
            _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
            *puVar8 = 1;
            puVar10 = puVar9;
            __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
            _swift_errorRelease(puVar9);
            _objc_msgSend(puVar11,PTR_s_sessionManagerWithManager_didFai_112525608);
            _objc_release(puVar10);
            _swift_unknownObjectRelease(puVar11);
          }
          (**(code **)(lStack_98 + 8))(lVar18,lStack_90);
          goto LAB_104a29f38;
        }
        (**(code **)(lVar12 + 8))(lVar2,lVar14);
      }
      lRam000000011340b2e8 = lRam000000011340b2e8 + 1;
    }
    else {
      lRam000000011340b4b8 = lRam000000011340b4b8 + 1;
      __s10Foundation3URLV4pathSSvg();
      uVar17 = uVar4;
      uVar3 = uVar5;
      __s10Foundation3URLV4pathSSvg();
      if ((uVar4 == uVar17) && (uVar5 == uVar3)) {
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(uVar3);
        goto LAB_104a2a044;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,uVar5,uVar17,uVar3,0);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_104a2a044;
      lRam000000011340b2e0 = lRam000000011340b2e0 + 1;
    }
  }
  lVar18 = _DAT_1130a4f78;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
  puVar11 = (undefined1 *)(unaff_x20 + lVar18);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar11 != (undefined1 *)0x0) {
    puVar8 = puVar11;
    FUN_104a2dc34();
    puVar9 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
    *puVar8 = 1;
    puVar10 = puVar9;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar9);
    _objc_msgSend(puVar11,PTR_s_sessionManagerWithManager_didFai_112525608);
    _objc_release(puVar10);
    _swift_unknownObjectRelease(puVar11);
  }
LAB_104a29f38:
  (**(code **)(lStack_88 + 8))(uVar15,lStack_80);
  return 0;
}



/* Entry: 104a29c3c; end: 104a2a4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a29c3c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  code *pcVar13;
  long extraout_x12;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined1 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s10Foundation12URLQueryItemVMa();
  lVar19 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puVar11 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = 0x1130a4fe0;
  uStack_a8 = (long)puVar11 - extraout_x12;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar18 = ((long)puVar11 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation13URLComponentsVMa();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar12 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_a0 = lVar12;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar15 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b2d0 = lRam000000011340b2d0 + 1;
  if (*(long *)(unaff_x20 + _DAT_1130a4f80) != 0) {
    _objc_msgSend(*(long *)(unaff_x20 + _DAT_1130a4f80),PTR_s_cancel_1125a9090);
  }
  uVar17 = *(long *)(unaff_x20 + _DAT_1130a4fa8) + _DAT_113815b60;
  uVar3 = uVar15;
  lStack_88 = lVar14;
  lStack_80 = lVar2;
  (**(code **)(lVar14 + 0x10))(uVar15,uVar17,lVar2);
  __s10Foundation3URLV6schemeSSSgvg();
  uVar4 = uVar3;
  uVar5 = uVar17;
  __s10Foundation3URLV6schemeSSSgvg();
  if (uVar17 == 0) {
    uVar17 = uVar5;
    if (uVar5 == 0) goto LAB_104a29e40;
LAB_104a29e94:
    _swift_bridgeObjectRelease(uVar17);
LAB_104a29e9c:
    lRam000000011340b2d8 = lRam000000011340b2d8 + 1;
  }
  else {
    if (uVar5 == 0) goto LAB_104a29e94;
    if (uVar3 != uVar4 || uVar17 != uVar5) {
      uVar6 = uVar17;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease();
      uVar4 = uVar5;
      uVar5 = uVar6;
      if ((uVar3 & 1) != 0) goto LAB_104a29e40;
      goto LAB_104a29e9c;
    }
    uVar3 = uVar5;
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease();
    uVar4 = uVar5;
    uVar5 = uVar3;
LAB_104a29e40:
    __s10Foundation3URLV4hostSSSgvg();
    uVar3 = uVar4;
    uVar6 = uVar5;
    __s10Foundation3URLV4hostSSSgvg();
    if (uVar5 == 0) {
      uVar17 = uVar6;
      if (uVar6 != 0) goto LAB_104a29e94;
    }
    else {
      uVar17 = uVar5;
      if (uVar6 == 0) goto LAB_104a29e94;
      if ((uVar4 == uVar3) && (uVar5 == uVar6)) {
        uVar17 = uVar6;
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease();
        uVar3 = uVar6;
        uVar6 = uVar17;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar5,uVar3,uVar6,0);
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease();
        uVar3 = uVar6;
        uVar6 = uVar17;
        if ((uVar4 & 1) == 0) goto LAB_104a29e9c;
      }
    }
    __s10Foundation3URLV4pathSSvg();
    uVar4 = uVar6;
    uVar5 = uVar6;
    _swift_bridgeObjectRelease();
    uVar17 = uVar3 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar17 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar17 == 0) {
LAB_104a2a044:
      __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC
                (lVar18,param_1,0);
      lVar14 = lStack_90;
      lVar12 = lStack_98;
      lVar7 = lVar18;
      (**(code **)(lStack_98 + 0x30))(lVar18,1,lStack_90);
      lVar2 = lStack_a0;
      if ((int)lVar7 == 1) {
        func_0x000104a2f430(lVar18,0x1130a4fe0);
      }
      else {
        lVar7 = lStack_a0;
        (**(code **)(lVar12 + 0x20))(lStack_a0,lVar18,lVar14);
        __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg();
        if (lVar7 != 0) {
          uStack_b0 = *(ulong *)(lVar7 + 0x10);
          uStack_b8 = param_1;
          if (uStack_b0 != 0) {
            uVar17 = 0;
            do {
              if (*(ulong *)(lVar7 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x104a2a4fc);
                (*pcVar13)();
              }
              lVar18 = lVar7 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar19 + 0x48) * uVar17;
              puVar8 = puVar11;
              (**(code **)(lVar19 + 0x10))(puVar11,lVar18,lVar1);
              lRam000000011340b4c0 = lRam000000011340b4c0 + 1;
              __s10Foundation12URLQueryItemV4nameSSvg();
              if ((puVar8 == (undefined1 *)0x726f727265) && (lVar18 == -0x1b00000000000000)) {
                _swift_bridgeObjectRelease(lVar7);
                lVar7 = -0x1b00000000000000;
LAB_104a2a1d0:
                _swift_bridgeObjectRelease(lVar7);
                uVar17 = uStack_a8;
                uVar3 = uStack_a8;
                (**(code **)(lVar19 + 0x20))(uStack_a8,puVar11,lVar1);
                __s10Foundation12URLQueryItemV5valueSSSgvg();
                (**(code **)(lVar19 + 8))(uVar17);
                if (puVar11 == (undefined1 *)0x0) goto LAB_104a2a324;
                lRam000000011340b2f0 = lRam000000011340b2f0 + 1;
                if (((uVar3 == 0x6e61635f72657375) && (puVar11 == (undefined1 *)0xed000064656c6563))
                   || (uVar17 = uVar3,
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar3,puVar11,0x6e61635f72657375,0xed000064656c6563,0),
                      (uVar17 & 1) != 0)) {
                  _swift_bridgeObjectRelease(puVar11);
                  lVar18 = _DAT_1130a4f78;
                  lRam000000011340b2f8 = lRam000000011340b2f8 + 1;
                  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
                  puVar11 = (undefined1 *)(unaff_x20 + lVar18);
                  _swift_unknownObjectWeakLoadStrong();
                  lVar18 = lStack_a0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar16 = 2;
                    goto LAB_104a2a2b8;
                  }
                }
                else {
                  if ((uVar3 == 0x645f737365636361) && (puVar11 == (undefined1 *)0xed00006465696e65)
                     ) {
                    _swift_bridgeObjectRelease(0xed00006465696e65);
                  }
                  else {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar3,puVar11,0x645f737365636361,0xed00006465696e65,0);
                    _swift_bridgeObjectRelease(puVar11);
                    lVar18 = lStack_a0;
                    lVar1 = _DAT_1130a4f78;
                    if ((uVar3 & 1) == 0) {
                      _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
                      puVar11 = (undefined1 *)(unaff_x20 + lVar1);
                      _swift_unknownObjectWeakLoadStrong();
                      if (puVar11 != (undefined1 *)0x0) {
                        uVar16 = 1;
                        goto LAB_104a2a2b8;
                      }
                      goto LAB_104a2a314;
                    }
                  }
                  lVar18 = lStack_a0;
                  lVar1 = _DAT_1130a4f78;
                  lRam000000011340b300 = lRam000000011340b300 + 1;
                  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
                  puVar11 = (undefined1 *)(unaff_x20 + lVar1);
                  _swift_unknownObjectWeakLoadStrong();
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar16 = 3;
LAB_104a2a2b8:
                    puVar8 = puVar11;
                    FUN_104a2dc34();
                    puVar9 = &UNK_1107bf0b0;
                    _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
                    *puVar8 = uVar16;
                    puVar10 = puVar9;
                    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
                    _swift_errorRelease(puVar9);
                    _objc_msgSend(puVar11,PTR_s_sessionManagerWithManager_didFai_112525608);
                    _objc_release(puVar10);
                    _swift_unknownObjectRelease(puVar11);
                  }
                }
LAB_104a2a314:
                pcVar13 = *(code **)(lStack_98 + 8);
                goto LAB_104a2a348;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_bridgeObjectRelease(lVar18);
              if (((ulong)puVar8 & 1) != 0) goto LAB_104a2a1d0;
              uVar17 = uVar17 + 1;
              lVar18 = lVar1;
              (**(code **)(lVar19 + 8))(puVar11);
            } while (uStack_b0 != uVar17);
          }
          _swift_bridgeObjectRelease(lVar7);
          lVar1 = lVar18;
LAB_104a2a324:
          func_0x000104a2e038(uStack_b8);
          lVar18 = _DAT_1130a4f78;
          if (lVar1 != 0) {
            FUN_104a2b350();
            _swift_bridgeObjectRelease(lVar1);
            pcVar13 = *(code **)(lStack_98 + 8);
            lVar18 = lStack_a0;
LAB_104a2a348:
            (*pcVar13)(lVar18,lStack_90);
            (**(code **)(lStack_88 + 8))(uVar15,lStack_80);
            return 1;
          }
          lRam000000011340b308 = lRam000000011340b308 + 1;
          _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
          puVar11 = (undefined1 *)(unaff_x20 + lVar18);
          _swift_unknownObjectWeakLoadStrong();
          lVar18 = lStack_a0;
          if (puVar11 != (undefined1 *)0x0) {
            puVar8 = puVar11;
            FUN_104a2dc34();
            puVar9 = &UNK_1107bf0b0;
            _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
            *puVar8 = 1;
            puVar10 = puVar9;
            __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
            _swift_errorRelease(puVar9);
            _objc_msgSend(puVar11,PTR_s_sessionManagerWithManager_didFai_112525608);
            _objc_release(puVar10);
            _swift_unknownObjectRelease(puVar11);
          }
          (**(code **)(lStack_98 + 8))(lVar18,lStack_90);
          goto LAB_104a29f38;
        }
        (**(code **)(lVar12 + 8))(lVar2,lVar14);
      }
      lRam000000011340b2e8 = lRam000000011340b2e8 + 1;
    }
    else {
      lRam000000011340b4b8 = lRam000000011340b4b8 + 1;
      __s10Foundation3URLV4pathSSvg();
      uVar17 = uVar4;
      uVar3 = uVar5;
      __s10Foundation3URLV4pathSSvg();
      if ((uVar4 == uVar17) && (uVar5 == uVar3)) {
        _swift_bridgeObjectRelease(uVar5);
        _swift_bridgeObjectRelease(uVar3);
        goto LAB_104a2a044;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,uVar5,uVar17,uVar3,0);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_104a2a044;
      lRam000000011340b2e0 = lRam000000011340b2e0 + 1;
    }
  }
  lVar18 = _DAT_1130a4f78;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
  puVar11 = (undefined1 *)(unaff_x20 + lVar18);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar11 != (undefined1 *)0x0) {
    puVar8 = puVar11;
    FUN_104a2dc34();
    puVar9 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
    *puVar8 = 1;
    puVar10 = puVar9;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar9);
    _objc_msgSend(puVar11,PTR_s_sessionManagerWithManager_didFai_112525608);
    _objc_release(puVar10);
    _swift_unknownObjectRelease(puVar11);
  }
LAB_104a29f38:
  (**(code **)(lStack_88 + 8))(uVar15,lStack_80);
  return 0;
}



/* Entry: 104a2a4fc; end: 104a2a5b7; -[SPTSessionManager openURL:] */

uint FUN_104a2a4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  lRam000000011340b2c8 = lRam000000011340b2c8 + 1;
  _objc_retain(param_1);
  puVar2 = puVar3;
  FUN_104a29c3c(puVar3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 104a2a5b8; end: 104a2a76b;  */

uint FUN_104a2a5b8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  uint uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  lRam000000011340b310 = lRam000000011340b310 + 1;
  uVar3 = param_1;
  puVar5 = PTR_s_activityType_11259a008;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar6 = puVar5;
  _objc_release(uVar3);
  uVar3 = *(ulong *)PTR__NSUserActivityTypeBrowsingWeb_110345670;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar2 == uVar3 && puVar5 == puVar6) {
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(puVar6);
LAB_104a2a6d0:
    _objc_msgSend(param_1,PTR_s_webpageURL_112686bc8);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar9);
      _objc_release(param_1);
      (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar1);
      lVar4 = lVar8;
      FUN_104a29c3c(lVar8);
      uVar7 = (uint)lVar4;
      (**(code **)(lVar10 + 8))(lVar8,lVar1);
      goto LAB_104a2a748;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,puVar5,uVar3,puVar6,0);
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(puVar6);
    if ((uVar2 & 1) != 0) goto LAB_104a2a6d0;
  }
  uVar7 = 0;
  lRam000000011340b318 = lRam000000011340b318 + 1;
LAB_104a2a748:
  return uVar7 & 1;
}



/* Entry: 104a2a76c; end: 104a2a7c7; -[SPTSessionManager continueUserActivity:] */

uint FUN_104a2a76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104a2a5b8(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 104a2a7c8; end: 104a2b1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2a7c8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar13;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar19 = (long)&lStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lStack_138 = *(long *)(lVar3 + -8);
  lStack_130 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar12 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1130a4df0;
  lStack_140 = lVar12;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_128 = lVar15 - extraout_x12;
  lRam000000011340b320 = lRam000000011340b320 + 1;
  lRam000000011340b1e8 = lRam000000011340b1e8 + 1;
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_1130a4f68);
  _objc_msgSend(uVar14,PTR_s_lock_1126058b8);
  puVar18 = *(undefined **)(unaff_x20 + _DAT_1130a4f70);
  puVar5 = puVar18;
  _objc_retain();
  puStack_120 = puVar5;
  _objc_msgSend(uVar14,PTR_s_unlock_11267dcf8);
  lVar3 = _DAT_1130a4f78;
  if (puVar18 == (undefined *)0x0) {
    lRam000000011340b328 = lRam000000011340b328 + 1;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,&puStack_118,0,0);
    puVar7 = (undefined1 *)(unaff_x20 + lVar3);
    _swift_unknownObjectWeakLoadStrong();
    if (puVar7 == (undefined1 *)0x0) {
      return;
    }
    puVar8 = puVar7;
    FUN_104a2dc34();
    puVar5 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
    *puVar8 = 4;
    puVar18 = puVar5;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar5);
    _objc_msgSend(puVar7,PTR_s_sessionManagerWithManager_didFai_112525608);
  }
  else {
    func_0x000104a2af54(lVar12);
    lVar6 = lVar12;
    (**(code **)(lVar17 + 0x30))(lVar12,1,lVar4);
    lVar3 = lStack_128;
    if ((int)lVar6 != 1) {
      (**(code **)(lVar17 + 0x20))(lStack_128,lVar12,lVar4);
      (**(code **)(lVar17 + 0x10))(lVar15,lVar3,lVar4);
      lVar6 = lStack_140;
      __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
                (lStack_140,0x404e000000000000,lVar15,0);
      lStack_150 = lVar17;
      lStack_148 = lVar4;
      __s10Foundation10URLRequestV10httpMethodSSSgvs(0x54534f50,0xe400000000000000);
      puVar5 = puStack_120;
      puStack_118 = *(undefined **)(puStack_120 + _DAT_1130a4ee0);
      uVar14 = *(undefined8 *)((long)(puStack_120 + _DAT_1130a4ee0) + 8);
      uVar11 = uVar14;
      uStack_110 = uVar14;
      _swift_bridgeObjectRetain(uVar14);
      __s10Foundation12CharacterSetV13alphanumericsACvgZ(lVar19);
      FUN_104a219a8();
      lVar15 = lVar19;
      puVar18 = PTR___sSSN_11034da80;
      __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                (lVar19,PTR___sSSN_11034da80,uVar11);
      (**(code **)(lVar16 + 8))(lVar19,lVar2);
      _swift_bridgeObjectRelease(uVar14);
      lVar12 = lStack_148;
      lVar4 = lStack_150;
      lVar2 = _DAT_1130a4f78;
      if (puVar18 == (undefined *)0x0) {
        lRam000000011340b338 = lRam000000011340b338 + 1;
        _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,&puStack_118,0,0);
        puVar7 = (undefined1 *)(unaff_x20 + lVar2);
        _swift_unknownObjectWeakLoadStrong();
        puVar5 = puStack_120;
        if (puVar7 != (undefined1 *)0x0) {
          puVar8 = puVar7;
          FUN_104a2dc34();
          puVar18 = &UNK_1107bf0b0;
          _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
          *puVar8 = 4;
          puVar5 = puVar18;
          __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
          _swift_errorRelease(puVar18);
          _objc_msgSend(puVar7,PTR_s_sessionManagerWithManager_didFai_112525608);
          _objc_release(puStack_120);
          _swift_unknownObjectRelease(puVar7);
        }
        lVar3 = lStack_128;
        _objc_release(puVar5);
        (**(code **)(lStack_138 + 8))(lVar6,lStack_130);
        pcVar13 = *(code **)(lVar4 + 8);
      }
      else {
        lVar2 = 0x1130a4fa0;
        FUN_104a204dc();
        _swift_initStackObject();
        *(undefined8 *)(lVar2 + 0x18) = 6;
        *(undefined8 *)(lVar2 + 0x10) = 3;
        *(undefined8 *)(lVar2 + 0x20) = 0x695f746e65696c63;
        *(undefined8 *)(lVar2 + 0x28) = 0xe900000000000064;
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_1130a4fa8) + _DAT_1130a4de8);
        uVar14 = puVar1[1];
        *(undefined8 *)(lVar2 + 0x30) = *puVar1;
        *(undefined8 *)(lVar2 + 0x38) = uVar14;
        *(undefined8 *)(lVar2 + 0x40) = 0x79745f746e617267;
        *(undefined8 *)(lVar2 + 0x48) = 0xea00000000006570;
        *(undefined8 *)(lVar2 + 0x50) = 0x5f68736572666572;
        *(undefined8 *)(lVar2 + 0x58) = 0xed00006e656b6f74;
        *(undefined8 *)(lVar2 + 0x60) = 0x5f68736572666572;
        *(undefined8 *)(lVar2 + 0x68) = 0xed00006e656b6f74;
        *(long *)(lVar2 + 0x70) = lVar15;
        *(undefined **)(lVar2 + 0x78) = puVar18;
        _swift_bridgeObjectRetain();
        lVar4 = lVar2;
        func_0x000104a2e32c(lVar2);
        _swift_setDeallocating(lVar2);
        uVar14 = 0x1130a4fb0;
        FUN_104a204dc(0x1130a4fb0);
        uVar11 = 3;
        _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),3,uVar14);
        lVar2 = lVar4;
        FUN_104a2fffc(lVar4);
        _swift_bridgeObjectRelease(lVar4);
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(lVar2,uVar11);
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_1130a4f88);
        __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
        puVar18 = &UNK_1107beda0;
        _swift_allocObject(&UNK_1107beda0,0x18,7);
        _swift_unknownObjectWeakInit(puVar18 + 0x10);
        puVar9 = &UNK_1107bedc8;
        _swift_allocObject(&UNK_1107bedc8,0x20,7);
        *(undefined **)(puVar9 + 0x10) = puVar18;
        *(undefined **)(puVar9 + 0x18) = puVar5;
        pcStack_f8 = FUN_104a2e434;
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_110 = 0x42000000;
        pcStack_108 = FUN_104a2b260;
        puStack_100 = &UNK_1107bede0;
        ppuVar10 = &puStack_118;
        puStack_f0 = puVar9;
        __Block_copy(ppuVar10);
        puVar18 = puStack_f0;
        _objc_retain(puVar5);
        _swift_release(puVar18);
        _objc_msgSend(uVar14,PTR_s_dataTaskWithRequest_completionHa_1125b6ba0,lVar2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        __Block_release(ppuVar10);
        _objc_release(lVar2);
        _objc_msgSend(uVar14,PTR_s_resume_11262ce90);
        _objc_release(puVar5);
        _objc_release(uVar14);
        (**(code **)(lStack_138 + 8))(lVar6,lStack_130);
        pcVar13 = *(code **)(lStack_150 + 8);
        lVar12 = lStack_148;
      }
      (*pcVar13)(lVar3,lVar12);
      return;
    }
    func_0x000104a2f430(lVar12,0x1130a4df0);
    lVar3 = _DAT_1130a4f78;
    lRam000000011340b330 = lRam000000011340b330 + 1;
    _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,&puStack_118,0,0);
    puVar7 = (undefined1 *)(unaff_x20 + lVar3);
    _swift_unknownObjectWeakLoadStrong();
    if (puVar7 == (undefined1 *)0x0) {
      _objc_release(puStack_120);
      return;
    }
    puVar8 = puVar7;
    FUN_104a2dc34();
    puVar5 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar8,0,0);
    *puVar8 = 4;
    puVar18 = puVar5;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar5);
    _objc_msgSend(puVar7,PTR_s_sessionManagerWithManager_didFai_112525608);
    _objc_release(puVar18);
    puVar18 = puStack_120;
  }
  _objc_release(puVar18);
  _swift_unknownObjectRelease(puVar7);
  return;
}



/* Entry: 104a2b1d4; end: 104a2b25f;  */

void FUN_104a2b1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_48 [24];
  
  lRam000000011340b350 = lRam000000011340b350 + 1;
  _swift_beginAccess(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_5 != 0) {
    FUN_104a2e454(param_1,param_2,param_4,1);
    _objc_release(param_5);
  }
  return;
}



/* Entry: 104a2b260; end: 104a2b327;  */

void FUN_104a2b260(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    _swift_retain(uVar2);
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar6 = param_2;
    _swift_retain(uVar2);
    lVar3 = param_2;
    _objc_retain(param_2);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    _objc_release(lVar3);
  }
  uVar4 = param_3;
  _objc_retain(param_3);
  uVar5 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,lVar6,param_3,param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x000104a2f200(param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104a2b328; end: 104a2b34f; -[SPTSessionManager renewSession] */

void FUN_104a2b328(undefined8 param_1)

{
  _objc_retain();
  FUN_104a2a7c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a2b350; end: 104a2bfeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2b350(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = _DAT_1130a4f78;
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b358 = lRam000000011340b358 + 1;
  _swift_beginAccess(unaff_x20 + _DAT_1130a4f78,auStack_78,0,0);
  uVar3 = unaff_x20 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    _objc_msgSend();
    if ((uVar4 & 1) == 0) {
      _swift_unknownObjectRelease(uVar3);
    }
    else {
      uVar5 = param_1;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar4 = uVar3;
      _objc_msgSend(uVar3,PTR_s_sessionManagerWithManager_should_112525620);
      _swift_unknownObjectRelease(uVar3);
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) {
        lRam000000011340b360 = lRam000000011340b360 + 1;
        return;
      }
    }
  }
  lVar1 = _DAT_113815b68;
  lVar9 = *(long *)(unaff_x20 + _DAT_1130a4fa8);
  _swift_beginAccess(lVar9 + _DAT_113815b68,auStack_90,0,0);
  FUN_104a2f4c4(lVar9 + lVar1,puVar7,0x1130a4df0);
  puVar6 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar6 == 1) {
    func_0x000104a2f430(puVar7,0x1130a4df0);
    func_0x000104a2b7f0(param_1,param_2);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,puVar7,lVar2);
    lRam000000011340b368 = lRam000000011340b368 + 1;
    func_0x000104a2b574(param_1,param_2,lVar8);
    (**(code **)(lVar10 + 8))(lVar8,lVar2);
  }
  return;
}



/* Entry: 104a2bfec; end: 104a2c0cf; -[SPTSessionManager requestAccessTokenWith:] */

void FUN_104a2bfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_104a2b350(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104a2c0d0; end: 104a2c1c3; -[SPTSessionManager handleAccessTokenResponseWithData:error:refreshToken:isRenewal:] */

void FUN_104a2c0d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_1);
    uVar1 = 0xf000000000000000;
    uVar3 = param_2;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_1);
    lVar2 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
    uVar3 = param_2;
    _objc_release(lVar2);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    _objc_release(param_5);
  }
  FUN_104a2e454(param_3,uVar1,param_4,param_6);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(uVar3);
  func_0x000104a2f200(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a2c1c4; end: 104a2c3fb;  */

void FUN_104a2c1c4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar10 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b3b0 = lRam000000011340b3b0 + 1;
  uVar4 = 0;
  FUN_104a2f328(0,0x1130a5020,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar5 = &UNK_1107befa0;
  _swift_allocObject(&UNK_1107befa0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_70 = FUN_104a2f508;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_104a2cbfc;
  puStack_78 = &UNK_1107befb8;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  puVar5 = puStack_68;
  _objc_retain();
  _objc_retain(param_1);
  _swift_release(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x1130a5028;
  FUN_104a2f39c(0x1130a5028,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x1130a5030;
  FUN_104a204dc(0x1130a5030);
  uVar9 = 0x1130a5038;
  FUN_104a2f39c(0x1130a5038,0x104a2f3dc,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&puStack_90,uVar8,uVar9,lVar2,uVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,lVar10,ppuVar6);
  __Block_release(ppuVar6);
  _objc_release(uVar4);
  (**(code **)(lStack_98 + 8))(lVar10,lVar2);
  (**(code **)(lVar11 + 8))(lVar3,lStack_a0);
  return;
}



/* Entry: 104a2c3fc; end: 104a2c45f;  */

void FUN_104a2c3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104a2c460; end: 104a2c5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2c460(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lRam000000011340b3b8 = lRam000000011340b3b8 + 1;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1130a4f78;
  if (param_2 == 0) {
    lRam000000011340b3c0 = lRam000000011340b3c0 + 1;
  }
  else {
    if ((param_1 & 1) == 0) {
      lRam000000011340b3c8 = lRam000000011340b3c8 + 1;
      _swift_beginAccess(param_2 + _DAT_1130a4f78,auStack_60,0,0);
      puVar2 = (undefined1 *)(param_2 + lVar1);
      _swift_unknownObjectWeakLoadStrong();
      if (puVar2 != (undefined1 *)0x0) {
        puVar3 = puVar2;
        FUN_104a2dc34();
        puVar4 = &UNK_1107bf0b0;
        _swift_allocError(&UNK_1107bf0b0,puVar3,0,0);
        *puVar3 = 1;
        puVar5 = puVar4;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
        _swift_errorRelease(puVar4);
        _objc_msgSend(puVar2,PTR_s_sessionManagerWithManager_didFai_112525608,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(param_2);
        _swift_unknownObjectRelease(puVar2);
        return;
      }
    }
    _objc_release();
  }
  return;
}



/* Entry: 104a2c5cc; end: 104a2c5d7; -[SPTSessionManager initiateClientOnlyRedirectAppStoreWith:] */

void FUN_104a2c5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,param_3);
  _objc_retain(param_1);
  FUN_104a2991c(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}


