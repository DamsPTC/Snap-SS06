/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000f745c; end: 000f74bb;  */

void FUN_000f745c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(uVar2);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 000f74bc; end: 000f7527;  */

undefined8 FUN_000f74bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00023358(0,0xc000000000000000);
  func_0x00023304(param_1,param_2);
  func_0x00023304(0,0xc000000000000000);
  FUN_00023358(param_1,param_2);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000f7528; end: 000f754b;  */

void FUN_000f7528(void)

{
  undefined8 *unaff_x20;
  
  FUN_000f7858(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],FUN_00100a38);
  return;
}



/* Entry: 000f754c; end: 000f75b3;  */

void FUN_000f754c(ulong param_1,ulong param_2)

{
  ulong *unaff_x20;
  long unaff_x21;
  
  func_0x00106c88();
  if ((param_1 & 1) == 0) {
    FUN_0010821c();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    param_1 = 0;
    param_2 = 0xc000000000000000;
  }
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 000f75b4; end: 000f766b;  */

undefined ** FUN_000f75b4(void)

{
  return &PTR_DAT_00aee620;
}



/* Entry: 000f766c; end: 000f76ab;  */

void FUN_000f766c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeee80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9750;
  _swift_getWitnessTable(&UNK_007d9750,&UNK_009b5618);
  puRam0000000000aeee80 = puVar1;
  return;
}



/* Entry: 000f76ac; end: 000f76bb;  */

undefined * FUN_000f76ac(void)

{
  return PTR___sSSs34_ExpressibleByBuiltinStringLiteralsWP_0099b070;
}



/* Entry: 000f76bc; end: 000f76fb;  */

void FUN_000f76bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeee88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9790;
  _swift_getWitnessTable(&UNK_007d9790,&UNK_009b5618);
  puRam0000000000aeee88 = puVar1;
  return;
}



/* Entry: 000f76fc; end: 000f7717;  */

undefined * FUN_000f76fc(void)

{
  return PTR___sSSs51_ExpressibleByBuiltinExtendedGraphemeClusterLiteralsWP_0099b080;
}



/* Entry: 000f7718; end: 000f77b7;  */

void FUN_000f7718(uint param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if ((param_1 & 0x7fffffff) < 0x7f800000) {
    __sSf11descriptionSSvg();
  }
  else {
    func_0x000fe8b4();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    _swift_bridgeObjectRetain(puVar1);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar1 + 0x20,uVar2);
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  return;
}



/* Entry: 000f77b8; end: 000f7857;  */

void FUN_000f77b8(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    __sSd11descriptionSSvg();
  }
  else {
    FUN_000fe844();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    _swift_bridgeObjectRetain(puVar1);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar1 + 0x20,uVar2);
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  return;
}



/* Entry: 000f7858; end: 000f78db;  */

undefined1  [16] FUN_000f7858(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *in_x4;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  (*in_x4)();
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  _swift_bridgeObjectRetain(puVar1);
  puVar2 = puVar1 + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar2,uVar3);
  _swift_bridgeObjectRelease_n(puVar1,2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 000f78dc; end: 000f791b;  */

void FUN_000f78dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeefc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___ss5Int64VSzsMc_0099b768;
  _swift_getWitnessTable(PTR___ss5Int64VSzsMc_0099b768,PTR___ss5Int64VN_0099b758);
  puRam0000000000aeefc0 = puVar1;
  return;
}



/* Entry: 000f791c; end: 000f7967;  */

void FUN_000f791c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 000f7968; end: 000f7993;  */

long FUN_000f7968(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000f7994; end: 000f79ff;  */

int FUN_000f7994(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 000f7a00; end: 000f7a93;  */

void FUN_000f7a00(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __sSH4hash4intoys6HasherVz_tFTj();
  return;
}



/* Entry: 000f7a94; end: 000f7b1b;  */

void FUN_000f7a94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar3 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      func_0x00023304(uVar1,uVar2);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF();
      FUN_00023358(uVar1,uVar2);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 000f7b1c; end: 000f7b6b;  */

void FUN_000f7b1c(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __sSasSHRzlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f7b6c; end: 000f7c9f;  */

void FUN_000f7b6c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar5 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  __ss6HasherV8_combineyySuF(param_2);
  lVar6 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar6 != 0) {
    lVar6 = 0;
    pcVar4 = *(code **)(param_4 + 0x50);
    do {
      __sSayxSicig((long)puVar5 - extraout_x12,lVar6,param_1,param_3);
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xf7ca0);
        (*pcVar4)();
      }
      (**(code **)(lVar3 + 0x20))(puVar5,(long)puVar5 - extraout_x12,param_3);
      (*pcVar4)(unaff_x20,param_3,param_4);
      (**(code **)(lVar3 + 8))(puVar5,param_3);
      lVar2 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar2);
  }
  return;
}



/* Entry: 000f7ca0; end: 000f7d9f;  */

void FUN_000f7ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar4 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,param_3,&UNK_008441f0,&UNK_00844200);
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar4,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  _swift_getAssociatedConformanceWitness(uVar3,param_4,uVar2,&UNK_008441f0,&UNK_008441f8);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f7da0; end: 000f7e57;  */

void FUN_000f7da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f7e58; end: 000f7f0f;  */

void FUN_000f7e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f7f10; end: 000f7f53;  */

void FUN_000f7f10(double param_1)

{
  double dVar1;
  
  __ss6HasherV8_combineyySuF();
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 000f7f54; end: 000f7f87;  */

void FUN_000f7f54(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __ss6HasherV8_combineyys6UInt64VF(param_1);
  return;
}



/* Entry: 000f7f88; end: 000f7fbb;  */

void FUN_000f7f88(uint param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __ss6HasherV8_combineyys5UInt8VF(param_1 & 1);
  return;
}



/* Entry: 000f7fbc; end: 000f8003;  */

void FUN_000f7fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __ss6HasherV8_combineyySuF(param_3);
  __sSS4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f8004; end: 000f804b;  */

void FUN_000f8004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __ss6HasherV8_combineyySuF(param_3);
  __s10Foundation4DataV4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f804c; end: 000f806f;  */

void FUN_000f804c(void)

{
  FUN_000f7a00();
  return;
}



/* Entry: 000f8070; end: 000f8093;  */

void FUN_000f8070(void)

{
  func_0x000f7a48();
  return;
}



/* Entry: 000f8094; end: 000f80cb;  */

void FUN_000f8094(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  func_0x0013fca4();
  return;
}



/* Entry: 000f80cc; end: 000f8103;  */

void FUN_000f80cc(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  FUN_0013fc40();
  return;
}



/* Entry: 000f8104; end: 000f812b;  */

void FUN_000f8104(void)

{
  FUN_000f812c();
  return;
}



/* Entry: 000f812c; end: 000f8183;  */

void FUN_000f812c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 000f8184; end: 000f81db;  */

void FUN_000f8184(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt64VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 000f81dc; end: 000f8233;  */

void FUN_000f81dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)(param_1 + 0x20);
    do {
      __ss6HasherV8_combineyys5UInt8VF(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 000f8234; end: 000f82ab;  */

void FUN_000f8234(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = *puVar3;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF();
      _swift_bridgeObjectRelease(uVar1);
      puVar3 = puVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 000f82ac; end: 000f8323;  */

void FUN_000f82ac(void)

{
  FUN_000f7a94();
  return;
}



/* Entry: 000f8324; end: 000f8353;  */

void FUN_000f8324(void)

{
  __s10Foundation4DataV4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 000f8354; end: 000f846b;  */

void FUN_000f8354(void)

{
  FUN_000f8104();
  return;
}



/* Entry: 000f846c; end: 000f8487;  */

undefined8 FUN_000f846c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_000ea51c(param_1,auStack_68);
      func_0x000f88c0(auStack_68,auStack_90);
      lVar1 = lStack_70;
      uVar2 = uStack_78;
      FUN_0001393c(auStack_90,uStack_78);
      (**(code **)(lVar1 + 0x20))(uVar2,lVar1);
      if ((uVar2 & 1) == 0) {
        FUN_00011670(auStack_90);
        return 0;
      }
      FUN_00011670(auStack_90);
      param_1 = param_1 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}



/* Entry: 000f8488; end: 000f880b;  */

bool FUN_000f8488(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_150 [8];
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [24];
  ulong uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  
  uVar8 = 0xaeda20;
  FUN_00016c74(0xaeda20,&UNK_007d8100);
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_2,uVar8,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_118 = *(long *)(lVar6 + -8);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_118 + 0x40));
  puStack_f8 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  _swift_retain(param_1);
  __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
  __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_b8);
  uStack_138 = uVar8;
  uStack_130 = param_3;
  lStack_f0 = param_2;
  __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
            (&lStack_90,auStack_b8,param_2,uVar8,param_3);
  lStack_128 = lStack_90;
  lStack_148 = lStack_80;
  uStack_120 = lStack_80 + 0x40U >> 6;
  lStack_140 = lStack_88;
  lVar6 = lStack_78;
  lVar10 = lStack_88;
  do {
    lVar3 = lStack_f0;
    lVar11 = lStack_128;
    uVar2 = uStack_130;
    uVar8 = uStack_138;
    lVar7 = lVar6;
    uStack_108 = uStack_70;
    lStack_100 = lVar6;
    if (uStack_70 == 0) {
      uVar9 = uStack_120;
      if ((long)uStack_120 <= lVar6 + 1) {
        uVar9 = lVar6 + 1;
      }
      do {
        lVar7 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf880c);
          (*pcVar4)();
        }
        if ((long)uStack_120 <= lVar7) {
          uStack_e8 = 0;
          uVar8 = 1;
          puVar12 = puStack_f8;
          lVar7 = uVar9 - 1;
          goto LAB_000f86c0;
        }
        uStack_70 = *(ulong *)(lVar10 + lVar7 * 8);
        lVar6 = lVar6 + 1;
      } while (uStack_70 == 0);
    }
    uVar9 = (uStack_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_70 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uStack_e8 = uStack_70 - 1 & uStack_70;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar7 << 6;
    lVar6 = lStack_128;
    __ss17_NativeDictionaryV5_keysSpyxGvg(lStack_128,lStack_f0,uStack_138,uStack_130);
    puVar12 = puStack_f8;
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              (puStack_f8,lVar6 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * uVar9,lVar3);
    iVar1 = *(int *)(lVar5 + 0x30);
    __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar11,lVar3,uVar8,uVar2);
    lVar10 = lStack_140;
    FUN_000ea51c(lVar11 + uVar9 * 0x28,puVar12 + iVar1);
    uVar8 = 0;
LAB_000f86c0:
    lVar6 = lVar7;
    lVar11 = *(long *)(lVar5 + -8);
    (**(code **)(lVar11 + 0x38))(puVar12,uVar8,1,lVar5);
    (**(code **)(lStack_118 + 0x20))(lVar13,puVar12,lStack_110);
    lVar7 = lVar13;
    (**(code **)(lVar11 + 0x30))(lVar13,1,lVar5);
    if ((int)lVar7 == 1) {
      func_0x000f88b8(lStack_128,lVar10,lStack_148,lStack_100,uStack_108);
      goto LAB_000f87e0;
    }
    func_0x000f88c0(lVar13 + *(int *)(lVar5 + 0x30),auStack_e0);
    lVar11 = lStack_c0;
    uVar9 = uStack_c8;
    FUN_0001393c(auStack_e0,uStack_c8);
    (**(code **)(lVar11 + 0x20))(uVar9,lVar11);
    if ((uVar9 & 1) == 0) {
      func_0x000f88b8(lStack_128,lVar10,lStack_148,lStack_100,uStack_108);
      (**(code **)(*(long *)(lStack_f0 + -8) + 8))(lVar13);
      FUN_00011670(auStack_e0);
LAB_000f87e0:
      return (int)lVar7 == 1;
    }
    (**(code **)(*(long *)(lStack_f0 + -8) + 8))(lVar13);
    FUN_00011670(auStack_e0);
    uStack_70 = uStack_e8;
  } while( true );
}



/* Entry: 000f880c; end: 000f8813;  */

void FUN_000f880c(void)

{
  return;
}



/* Entry: 000f8814; end: 000f88b7;  */

undefined8 FUN_000f8814(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_000ea51c(param_1,auStack_68);
      func_0x000f88c0(auStack_68,auStack_90);
      lVar1 = lStack_70;
      uVar2 = uStack_78;
      FUN_0001393c(auStack_90,uStack_78);
      (**(code **)(lVar1 + 0x20))(uVar2,lVar1);
      if ((uVar2 & 1) == 0) {
        FUN_00011670(auStack_90);
        return 0;
      }
      FUN_00011670(auStack_90);
      param_1 = param_1 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}



/* Entry: 000f88b8; end: 000f88e7;  */

void FUN_000f88b8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 000f88e8; end: 000f8a33;  */

void FUN_000f88e8(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_00109a58();
  uVar1 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (uVar1 == 0) goto LAB_000f8970;
  }
  else if (uVar1 == unaff_x20[1] - lVar4) goto LAB_000f8970;
  if (*(char *)(lVar4 + uVar1) == '}') {
    if ((lVar4 == 0) || ((ulong)(unaff_x20[1] - lVar4) <= uVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf89dc);
      (*pcVar2)();
    }
    unaff_x20[2] = uVar1 + 1;
    lVar4 = unaff_x20[0xb] + 1;
    if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf89e0);
      (*pcVar2)();
    }
    unaff_x20[0xb] = lVar4;
    if (lVar4 <= unaff_x20[4]) {
      return;
    }
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
               "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xf8a34);
    (*pcVar2)();
  }
LAB_000f8970:
  lVar4 = unaff_x20[0xe];
  if ((lVar4 < 1) || (FUN_0010a6f0(0x2c), unaff_x21 == 0)) {
    if (unaff_x20[0x10] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf89e8);
      (*pcVar2)();
    }
    lVar3 = unaff_x20[0xc];
    FUN_0010b360(unaff_x20[0x13],lVar3,unaff_x20[0xd]);
    if ((unaff_x21 == 0) && (((uint)lVar3 & 0xff) != 1)) {
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf89e4);
        (*pcVar2)();
      }
      unaff_x20[0xe] = lVar4 + 1;
    }
  }
  return;
}



/* Entry: 000f8a34; end: 000f8acb;  */

void FUN_000f8a34(undefined4 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_00109a58();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f8a70;
  }
  else if (lVar2 != unaff_x20[1] - lVar3) {
LAB_000f8a70:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_000f8abc;
    }
  }
  FUN_00107544();
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f8abc:
  *param_2 = param_1;
  return;
}



/* Entry: 000f8acc; end: 000f8c67;  */

void FUN_000f8acc(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  FUN_00109a58();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_000f8b48;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_000f8b48;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar4 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_000f8b48:
  uVar4 = 0x5b;
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), (uVar4 & 1) != 0)) {
    return;
  }
  uVar4 = lVar1 - lVar8;
  do {
    FUN_00107544();
    uVar7 = *param_2;
    uVar6 = uVar7;
    uVar9 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      FUN_000d610c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000d610c(uVar7,uVar6 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    *(int *)(uVar7 + uVar6 * 4 + 0x20) = (int)param_1;
    *param_2 = uVar7;
    FUN_00109a58();
    uVar6 = unaff_x20[2];
    if (lVar8 == 0) {
      if (uVar6 != 0) goto LAB_000f8b98;
    }
    else if (uVar6 != uVar4) {
LAB_000f8b98:
      if (*(char *)(lVar8 + uVar6) == ']') {
        if ((lVar8 != 0) && (uVar6 < uVar4)) {
          unaff_x20[2] = uVar6 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf8c68);
        (*pcVar3)();
      }
    }
    FUN_0010a6f0(0x2c);
    param_1 = uVar9;
  } while( true );
}



/* Entry: 000f8c68; end: 000f8cff;  */

void FUN_000f8c68(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_00109a58();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f8ca4;
  }
  else if (lVar2 != unaff_x20[1] - lVar3) {
LAB_000f8ca4:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_000f8cf0;
    }
  }
  FUN_00106e38();
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f8cf0:
  *param_2 = param_1;
  return;
}



/* Entry: 000f8d00; end: 000f8e9b;  */

void FUN_000f8d00(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  FUN_00109a58();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_000f8d7c;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_000f8d7c;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar4 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_000f8d7c:
  uVar4 = 0x5b;
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), (uVar4 & 1) != 0)) {
    return;
  }
  uVar4 = lVar1 - lVar8;
  do {
    FUN_00106e38();
    uVar7 = *param_2;
    uVar6 = uVar7;
    uVar9 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      func_0x000d620c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x000d620c(uVar7,uVar6 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    *(undefined8 *)(uVar7 + uVar6 * 8 + 0x20) = param_1;
    *param_2 = uVar7;
    FUN_00109a58();
    uVar6 = unaff_x20[2];
    if (lVar8 == 0) {
      if (uVar6 != 0) goto LAB_000f8dcc;
    }
    else if (uVar6 != uVar4) {
LAB_000f8dcc:
      if (*(char *)(lVar8 + uVar6) == ']') {
        if ((lVar8 != 0) && (uVar6 < uVar4)) {
          unaff_x20[2] = uVar6 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf8e9c);
        (*pcVar3)();
      }
    }
    FUN_0010a6f0(0x2c);
    param_1 = uVar9;
  } while( true );
}



/* Entry: 000f8e9c; end: 000f8f77;  */

void FUN_000f8e9c(int *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  piVar1 = param_1;
  FUN_00109a58();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 == 0) goto LAB_000f8f18;
  }
  else if (lVar2 == unaff_x20[1] - lVar3) goto LAB_000f8f18;
  if (*(char *)(lVar3 + lVar2) == 'n') {
    piVar1 = (int *)0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if (((ulong)piVar1 & 1) != 0) {
      *param_1 = 0;
      return;
    }
  }
LAB_000f8f18:
  FUN_00107b5c();
  if (unaff_x21 == 0) {
    if (piVar1 == (int *)(long)(int)piVar1) {
      *param_1 = (int)piVar1;
    }
    else {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,piVar1,0,0);
      piVar1[2] = 2;
      piVar1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 000f8f78; end: 000f900b;  */

void FUN_000f8f78(int *param_1)

{
  int *piVar1;
  long unaff_x21;
  
  piVar1 = param_1;
  func_0x00106c88();
  if (((ulong)piVar1 & 1) == 0) {
    FUN_00107b5c();
    if (unaff_x21 == 0) {
      if (piVar1 == (int *)(long)(int)piVar1) {
        *param_1 = (int)piVar1;
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        FUN_000c7004();
        _swift_allocError(&UNK_009ad5a0,piVar1,0,0);
        piVar1[2] = 2;
        piVar1[3] = 0;
        piVar1[0] = 0;
        piVar1[1] = 0;
        _swift_willThrow();
      }
    }
  }
  else {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 000f900c; end: 000f91e3;  */

void FUN_000f900c(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_00109a58();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_000f9084;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_000f9084;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar9 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
LAB_000f9084:
  pcVar4 = (char *)((long)&segment_command_00000020.maxprot + 3);
  FUN_0010a6f0();
  if ((unaff_x21 == 0) && (func_0x00106cf8(), ((ulong)pcVar4 & 1) == 0)) {
    uVar9 = lVar1 - lVar8;
    while( true ) {
      FUN_00107b5c();
      if (pcVar4 != (char *)(long)(int)pcVar4) break;
      uVar7 = *param_1;
      uVar6 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        FUN_000d60f8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar6 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_000d60f8(uVar7,uVar6 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
      *(int *)(uVar7 + uVar6 * 4 + 0x20) = (int)pcVar4;
      *param_1 = uVar7;
      FUN_00109a58();
      uVar6 = unaff_x20[2];
      if (lVar8 == 0) {
        if (uVar6 != 0) goto LAB_000f90d0;
      }
      else if (uVar6 != uVar9) {
LAB_000f90d0:
        if (*(char *)(lVar8 + uVar6) == ']') {
          if ((lVar8 != 0) && (uVar6 < uVar9)) {
            unaff_x20[2] = uVar6 + 1;
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xf91e4);
          (*pcVar3)();
        }
      }
      pcVar4 = segment_command_00000020.segname + 4;
      FUN_0010a6f0();
    }
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,pcVar4,0,0);
    *(undefined8 *)(pcVar4 + 8) = 2;
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    _swift_willThrow();
  }
  return;
}



/* Entry: 000f91e4; end: 000f92bf;  */

void FUN_000f91e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  puVar1 = param_1;
  FUN_00109a58();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 == 0) goto LAB_000f9260;
  }
  else if (lVar2 == unaff_x20[1] - lVar3) goto LAB_000f9260;
  if (*(char *)(lVar3 + lVar2) == 'n') {
    puVar1 = (undefined8 *)0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if (((ulong)puVar1 & 1) != 0) {
      *(undefined4 *)param_1 = 0;
      return;
    }
  }
LAB_000f9260:
  func_0x00107bac();
  if (unaff_x21 == 0) {
    if ((ulong)puVar1 >> 0x20 == 0) {
      *(int *)param_1 = (int)puVar1;
    }
    else {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar1,0,0);
      puVar1[1] = 2;
      *puVar1 = 0;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 000f92c0; end: 000f9497;  */

void FUN_000f92c0(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_00109a58();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_000f9338;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_000f9338;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar9 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
LAB_000f9338:
  pcVar4 = (char *)((long)&segment_command_00000020.maxprot + 3);
  FUN_0010a6f0();
  if ((unaff_x21 == 0) && (func_0x00106cf8(), ((ulong)pcVar4 & 1) == 0)) {
    uVar9 = lVar1 - lVar8;
    while (func_0x00107bac(), (ulong)pcVar4 >> 0x20 == 0) {
      uVar7 = *param_1;
      uVar6 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        FUN_000d630c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar6 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_000d630c(uVar7,uVar6 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
      *(int *)(uVar7 + uVar6 * 4 + 0x20) = (int)pcVar4;
      *param_1 = uVar7;
      FUN_00109a58();
      uVar6 = unaff_x20[2];
      if (lVar8 == 0) {
        if (uVar6 != 0) goto LAB_000f9384;
      }
      else if (uVar6 != uVar9) {
LAB_000f9384:
        if (*(char *)(lVar8 + uVar6) == ']') {
          if ((lVar8 != 0) && (uVar6 < uVar9)) {
            unaff_x20[2] = uVar6 + 1;
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xf9498);
          (*pcVar3)();
        }
      }
      pcVar4 = segment_command_00000020.segname + 4;
      FUN_0010a6f0();
    }
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,pcVar4,0,0);
    *(undefined8 *)(pcVar4 + 8) = 2;
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    _swift_willThrow();
  }
  return;
}



/* Entry: 000f9498; end: 000f953b;  */

void FUN_000f9498(ulong *param_1,undefined8 param_2,code *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  puVar1 = param_1;
  FUN_00109a58();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f94e0;
  }
  else if (lVar2 != unaff_x20[1] - lVar3) {
LAB_000f94e0:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      puVar1 = (ulong *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = (ulong *)0x0;
        goto LAB_000f9528;
      }
    }
  }
  (*param_3)();
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f9528:
  *param_1 = (ulong)puVar1;
  return;
}



/* Entry: 000f953c; end: 000f96f3;  */

void FUN_000f953c(ulong *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  
  FUN_00109a58();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    if (lVar2 == 0) goto LAB_000f95c0;
  }
  else if (lVar2 == lVar1 - lVar9) goto LAB_000f95c0;
  if (*(char *)(lVar9 + lVar2) == 'n') {
    uVar4 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_000f95c0:
  uVar4 = 0x5b;
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), (uVar4 & 1) != 0)) {
    return;
  }
  uVar7 = lVar1 - lVar9;
  do {
    (*param_3)();
    uVar8 = *param_1;
    uVar5 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar8;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      (*param_4)(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar8 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      (*param_4)(uVar8,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
    *(ulong *)(uVar8 + uVar5 * 8 + 0x20) = uVar4;
    *param_1 = uVar8;
    FUN_00109a58();
    uVar4 = unaff_x20[2];
    if (lVar9 == 0) {
      if (uVar4 != 0) goto LAB_000f9614;
    }
    else if (uVar4 != uVar7) {
LAB_000f9614:
      if (*(char *)(lVar9 + uVar4) == ']') {
        if ((lVar9 != 0) && (uVar4 < uVar7)) {
          unaff_x20[2] = uVar4 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf96f4);
        (*pcVar3)();
      }
    }
    uVar4 = 0x2c;
    FUN_0010a6f0();
  } while( true );
}



/* Entry: 000f96f4; end: 000f97ab;  */

void FUN_000f96f4(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  
  pbVar2 = param_1;
  FUN_00109a58();
  bVar1 = (byte)pbVar2;
  lVar4 = unaff_x20[2];
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    if (lVar4 == 0) goto LAB_000f9778;
  }
  else if (lVar4 == unaff_x20[1] - lVar5) goto LAB_000f9778;
  if (*(char *)(lVar5 + lVar4) == 'n') {
    uVar3 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    bVar1 = (byte)uVar3;
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
      return;
    }
  }
LAB_000f9778:
  if ((char)unaff_x20[0xf] == '\x01') {
    FUN_001080cc();
  }
  else {
    FUN_00107450();
  }
  if (unaff_x21 == 0) {
    *param_1 = bVar1 & 1;
  }
  return;
}



/* Entry: 000f97ac; end: 000f9943;  */

void FUN_000f97ac(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_00109a58();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_000f9824;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_000f9824;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar5 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_000f9824:
  uVar5 = 0x5b;
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), (uVar5 & 1) != 0)) {
    return;
  }
  uVar9 = lVar1 - lVar8;
  do {
    bVar4 = (byte)uVar5;
    FUN_00107450();
    uVar7 = *param_1;
    uVar5 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_000d642c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_000d642c(uVar7,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
    *(byte *)(uVar7 + uVar5 + 0x20) = bVar4 & 1;
    *param_1 = uVar7;
    FUN_00109a58();
    uVar5 = unaff_x20[2];
    if (lVar8 == 0) {
      if (uVar5 != 0) goto LAB_000f9870;
    }
    else if (uVar5 != uVar9) {
LAB_000f9870:
      if (*(char *)(lVar8 + uVar5) == ']') {
        if ((lVar8 != 0) && (uVar5 < uVar9)) {
          unaff_x20[2] = uVar5 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf9944);
        (*pcVar3)();
      }
    }
    uVar5 = 0;
    FUN_0010a6f0();
  } while( true );
}



/* Entry: 000f9944; end: 000f9b4b;  */

void FUN_000f9944(ulong *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  
  FUN_00109a58();
  lVar5 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  lVar10 = *unaff_x20;
  if (lVar10 == 0) {
    if (lVar1 == 0) goto LAB_000f99c0;
  }
  else if (lVar1 == lVar5 - lVar10) goto LAB_000f99c0;
  if (*(char *)(lVar10 + lVar1) == 'n') {
    uVar6 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    param_2 = 0xaef1b0;
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
LAB_000f99c0:
  pcVar3 = (char *)((long)&segment_command_00000020.maxprot + 3);
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), ((ulong)pcVar3 & 1) != 0)) {
    return;
  }
  uVar6 = lVar5 - lVar10;
  do {
    FUN_00109a58();
    uVar7 = unaff_x20[2];
    if (lVar10 == 0) {
      if (uVar7 == 0) goto LAB_000f9adc;
    }
    else if (uVar7 == uVar6) {
LAB_000f9adc:
      uVar8 = 0xd;
      goto LAB_000f9ae0;
    }
    if ((*(char *)(lVar10 + uVar7) != '\"') || (FUN_0010a190(), param_2 == 0)) {
      uVar8 = 5;
LAB_000f9ae0:
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar3,0,0);
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      *(undefined8 *)(pcVar3 + 8) = uVar8;
      _swift_willThrow();
      return;
    }
    uVar9 = *param_1;
    uVar7 = uVar9;
    lVar5 = param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar9;
    if ((uVar7 & 1) == 0) {
      lVar5 = *(long *)(uVar9 + 0x10) + 1;
      uVar4 = 0;
      FUN_0002a0e4(0,lVar5,1,uVar9);
    }
    uVar7 = *(ulong *)(uVar4 + 0x10);
    lVar1 = uVar7 + 1;
    uVar9 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar7) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      lVar5 = lVar1;
      FUN_0002a0e4(uVar9,lVar1,1,uVar4);
    }
    *(long *)(uVar9 + 0x10) = lVar1;
    lVar1 = uVar9 + uVar7 * 0x10;
    *(char **)(lVar1 + 0x20) = pcVar3;
    *(long *)(lVar1 + 0x28) = param_2;
    *param_1 = uVar9;
    FUN_00109a58();
    uVar7 = unaff_x20[2];
    if (lVar10 == 0) {
      if (uVar7 != 0) goto LAB_000f99ec;
    }
    else if (uVar7 != uVar6) {
LAB_000f99ec:
      if (*(char *)(lVar10 + uVar7) == ']') {
        if ((lVar10 != 0) && (uVar7 < uVar6)) {
          unaff_x20[2] = uVar7 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf9b4c);
        (*pcVar2)();
      }
    }
    pcVar3 = segment_command_00000020.segname + 4;
    FUN_0010a6f0();
    param_2 = lVar5;
  } while( true );
}



/* Entry: 000f9b4c; end: 000f9da3;  */

void FUN_000f9b4c(ulong *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  
  FUN_00109a58();
  plVar10 = unaff_x20 + 2;
  lVar8 = *plVar10;
  puVar2 = (undefined8 *)*unaff_x20;
  lVar3 = unaff_x20[1];
  if (puVar2 == (undefined8 *)0x0) {
    if (lVar8 == 0) goto LAB_000f9bcc;
  }
  else if (lVar8 == lVar3 - (long)puVar2) goto LAB_000f9bcc;
  if (*(char *)((long)puVar2 + lVar8) == 'n') {
    uVar5 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_000f9bcc:
  puVar6 = (undefined8 *)((long)&segment_command_00000020.maxprot + 3);
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), ((ulong)puVar6 & 1) != 0)) {
    return;
  }
  pcVar9 = (char *)(lVar3 - (long)puVar2);
  do {
    FUN_00109a58();
    if (puVar2 == (undefined8 *)0x0) {
      if ((char *)unaff_x20[2] == (char *)0x0) goto LAB_000f9d1c;
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = pcVar9;
      if ((char *)unaff_x20[2] == pcVar9) {
LAB_000f9d1c:
        FUN_000c7004();
        _swift_allocError(&UNK_009ad5a0,puVar6,0,0);
        puVar6[1] = 0xd;
        *puVar6 = 0;
        _swift_willThrow();
        return;
      }
    }
    puVar6 = puVar2;
    lVar8 = lVar3;
    FUN_001086bc(puVar2,lVar3,plVar10,pcVar11);
    uVar12 = *param_1;
    func_0x00023304();
    uVar5 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar12;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      func_0x000d651c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar5 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000d651c(uVar12,uVar5 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar5 + 1;
    lVar1 = uVar12 + uVar5 * 0x10;
    *(undefined8 **)(lVar1 + 0x20) = puVar6;
    *(long *)(lVar1 + 0x28) = lVar8;
    *param_1 = uVar12;
    FUN_00109a58();
    pcVar11 = (char *)unaff_x20[2];
    if (puVar2 == (undefined8 *)0x0) {
      if ((pcVar11 != (char *)0x0) && (*pcVar11 == ']')) {
        FUN_00023358(puVar6,lVar8);
        goto LAB_000f9da0;
      }
    }
    else if ((pcVar11 != pcVar9) && (*(char *)((long)puVar2 + (long)pcVar11) == ']')) {
      FUN_00023358(puVar6,lVar8);
      if (pcVar11 < pcVar9) {
        *plVar10 = (long)(pcVar11 + 1);
        return;
      }
LAB_000f9da0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xf9da4);
      (*pcVar4)();
    }
    FUN_0010a6f0(0x2c);
    FUN_00023358(puVar6,lVar8);
  } while( true );
}



/* Entry: 000f9da4; end: 000fa057;  */

void FUN_000f9da4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  code *extraout_x12;
  long unaff_x21;
  long lVar10;
  code *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar1 = 0;
  uStack_98 = param_1;
  __sSqMa();
  lVar10 = *(long *)(uVar1 - 8);
  lVar14 = *(long *)(lVar10 + 0x40);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_a0 + -extraout_x8;
  lVar9 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x00106c88();
  if ((uVar2 & 1) == 0) {
    FUN_001082ac(puVar12,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
    puVar4 = puVar12;
    (**(code **)(lVar9 + 0x30))(puVar12,1,param_2);
    uVar7 = uStack_98;
    if ((int)puVar4 == 1) {
      (**(code **)(lVar10 + 8))(puVar12,uVar1);
      return;
    }
    (**(code **)(lVar10 + 8))(uStack_98,uVar1);
    pcVar11 = *(code **)(lVar9 + 0x20);
    (*pcVar11)(lVar13,puVar12,param_2);
    (*pcVar11)(uVar7,lVar13,param_2);
    pcVar11 = *(code **)(lVar9 + 0x38);
    uVar8 = 0;
  }
  else {
    lVar3 = param_2;
    _swift_conformsToProtocol(param_2,&DAT_00843adc);
    uVar7 = uStack_98;
    if (lVar3 == 0) {
      (**(code **)(lVar10 + 8))(uStack_98,uVar1);
      (**(code **)(lVar9 + 0x38))(uVar7,1,1,param_2);
      return;
    }
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar13 = lVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0);
    (*extraout_x12)(lVar13,param_2,lVar3);
    uVar7 = uStack_98;
    if (unaff_x21 != 0) {
      return;
    }
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(uStack_98,uVar1);
    lVar10 = lVar13;
    (**(code **)(lVar9 + 0x30))(lVar13,1,param_2);
    if ((int)lVar10 == 1) {
      (*pcVar11)(lVar13,uVar1);
      lStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lStack_78 = param_2;
      lStack_70 = lVar3;
      func_0x00016cc8(&uStack_90);
      (**(code **)(lVar9 + 0x20))();
    }
    uVar5 = 0xaeda30;
    func_0x000115a8(0xaeda30,&UNK_007d78d8);
    uVar6 = uVar7;
    _swift_dynamicCast(uVar7,&uStack_90,uVar5,param_2,6);
    pcVar11 = *(code **)(lVar9 + 0x38);
    uVar8 = (uint)uVar6 ^ 1;
  }
  (*pcVar11)(uVar7,uVar8,1,param_2);
  return;
}



/* Entry: 000fa058; end: 000fa30f;  */

void FUN_000fa058(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *extraout_x12_00;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar1 = 0;
  __sSqMa();
  lStack_a0 = *(long *)(uVar1 - 8);
  lVar8 = *(long *)(lStack_a0 + 0x40);
  uStack_98 = uVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_a0 - extraout_x8;
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = lVar7 - extraout_x12;
  func_0x00106c88();
  if ((uVar1 & 1) == 0) {
    FUN_001082ac(lVar2,param_2,param_3);
    if (unaff_x21 == 0) {
      lVar4 = lVar2;
      (**(code **)(lVar6 + 0x30))(lVar2,1,param_2);
      if ((int)lVar4 == 1) {
        (**(code **)(lStack_a0 + 8))(lVar2,uStack_98);
      }
      else {
        (**(code **)(lVar6 + 8))(param_1,param_2);
        pcVar5 = *(code **)(lVar6 + 0x20);
        (*pcVar5)(lVar7,lVar2,param_2);
        (*pcVar5)(param_1,lVar7,param_2);
      }
    }
  }
  else {
    lVar2 = param_2;
    _swift_conformsToProtocol(param_2,&DAT_00843adc);
    if (lVar2 == 0) {
      (**(code **)(lVar6 + 8))(param_1,param_2);
      (**(code **)(param_3 + 0x18))(lVar4,param_2,param_3);
      (**(code **)(lVar6 + 0x20))(param_1,lVar4,param_2);
    }
    else {
      (*(code *)PTR____chkstk_darwin_00999f48)();
      lVar4 = lVar4 - (lVar8 + 0xfU & 0xfffffffffffffff0);
      (*extraout_x12_00)(lVar4,param_2,lVar2);
      if (unaff_x21 == 0) {
        (**(code **)(lVar6 + 8))(param_1,param_2);
        lVar7 = lVar4;
        (**(code **)(lVar6 + 0x30))(lVar4,1,param_2);
        if ((int)lVar7 == 1) {
          (**(code **)(lStack_a0 + 8))(lVar4,uStack_98);
          lStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          lStack_78 = param_2;
          lStack_70 = lVar2;
          func_0x00016cc8(&uStack_90);
          (**(code **)(lVar6 + 0x20))();
        }
        uVar3 = 0xaeda30;
        func_0x000115a8(0xaeda30,&UNK_007d78d8);
        _swift_dynamicCast(param_1,&uStack_90,uVar3,param_2,7);
      }
    }
  }
  return;
}



/* Entry: 000fa310; end: 000fa79b;  */

/* WARNING: Removing unreachable block (ram,0x000fa78c) */

void FUN_000fa310(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  code *extraout_x12_01;
  long extraout_x13;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  puVar1 = (undefined8 *)0x0;
  __sSqMa();
  lStack_a8 = puVar1[-1];
  lStack_b8 = *(long *)(lStack_a8 + 0x40);
  puStack_a0 = puVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(lStack_b8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_e0 + -extraout_x8;
  lVar10 = param_2[-1];
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  puStack_b0 = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar6 = (undefined1 *)(lVar9 - extraout_x12_00);
  puStack_c0 = puVar6;
  FUN_00109a58();
  lVar9 = unaff_x20[1];
  lVar12 = unaff_x20[2];
  lVar11 = *unaff_x20;
  if (lVar11 == 0) {
    if (lVar12 == 0) goto LAB_000fa448;
  }
  else if (lVar12 == lVar9 - lVar11) goto LAB_000fa448;
  if (*(char *)(lVar11 + lVar12) == 'n') {
    uVar2 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
LAB_000fa448:
  uVar2 = 0x5b;
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), (uVar2 & 1) != 0)) {
    return;
  }
  uVar2 = lVar9 - lVar11;
  uStack_d8 = param_3;
  uStack_c8 = uVar2;
  do {
    FUN_00109a58();
    uVar7 = unaff_x20[2];
    if (lVar11 == 0) {
      if (uVar7 != 0) goto LAB_000fa4e8;
LAB_000fa5d0:
      FUN_001082ac(puVar13,param_2,param_3);
      puVar3 = puVar13;
      (**(code **)(lVar10 + 0x30))(puVar13,1,param_2);
      puVar5 = puStack_b0;
      if ((int)puVar3 == 1) {
        pcVar8 = *(code **)(lStack_a8 + 8);
        puVar5 = puVar13;
        puVar1 = puStack_a0;
      }
      else {
        (**(code **)(lVar10 + 0x20))(puStack_b0,puVar13,param_2);
        lVar9 = lStack_98;
        (**(code **)(lVar10 + 0x10))(lStack_98,puVar5,param_2);
        uVar4 = 0;
        __sSaMa(0,param_2);
        __sSa6appendyyxnF(lVar9,uVar4);
        pcVar8 = *(code **)(lVar10 + 8);
        puVar1 = param_2;
        uVar2 = uStack_c8;
      }
      (*pcVar8)(puVar5,puVar1);
    }
    else {
      if (uVar7 == uVar2) goto LAB_000fa5d0;
LAB_000fa4e8:
      if (*(char *)(lVar11 + uVar7) != 'n') goto LAB_000fa5d0;
      uVar7 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if ((uVar7 & 1) == 0) goto LAB_000fa5d0;
      puVar1 = param_2;
      _swift_conformsToProtocol(param_2,&DAT_00843adc);
      if (puVar1 == (undefined8 *)0x0) {
        FUN_000c7004();
        _swift_allocError(&UNK_009ad5a0,puVar1,0,0);
        puVar1[1] = 10;
        *puVar1 = 0;
        _swift_willThrow();
        return;
      }
      puStack_d0 = puVar6;
      (*(code *)PTR____chkstk_darwin_00999f48)();
      lVar12 = (long)puVar6 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
      (*extraout_x12_01)(lVar12,param_2,puVar1);
      lVar9 = lVar12;
      (**(code **)(lVar10 + 0x30))(lVar12,1,param_2);
      if ((int)lVar9 == 1) {
        (**(code **)(lStack_a8 + 8))(lVar12,puStack_a0);
        puStack_70 = (undefined8 *)0x0;
        uStack_88 = 0;
        uStack_90 = 0;
        puStack_78 = (undefined8 *)0x0;
        uStack_80 = 0;
      }
      else {
        puStack_78 = param_2;
        puStack_70 = puVar1;
        func_0x00016cc8(&uStack_90);
        (**(code **)(lVar10 + 0x20))();
      }
      puVar6 = puStack_d0;
      uVar4 = 0xaeda30;
      func_0x000115a8(0xaeda30,&UNK_007d78d8);
      puVar5 = puStack_c0;
      _swift_dynamicCast(puStack_c0,&uStack_90,uVar4,param_2,7);
      lVar9 = lStack_98;
      (**(code **)(lVar10 + 0x10))(lStack_98,puVar5,param_2);
      uVar4 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar9,uVar4);
      (**(code **)(lVar10 + 8))(puVar5,param_2);
      uVar2 = uStack_c8;
      param_3 = uStack_d8;
    }
    FUN_00109a58();
    uVar7 = unaff_x20[2];
    if (lVar11 == 0) {
      if (uVar7 != 0) goto LAB_000fa4a4;
    }
    else if (uVar7 != uVar2) {
LAB_000fa4a4:
      if (*(char *)(lVar11 + uVar7) == ']') {
        if ((lVar11 != 0) && (uVar7 < uVar2)) {
          unaff_x20[2] = uVar7 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0xfa79c);
        (*pcVar8)();
      }
    }
    FUN_0010a6f0(0x2c);
  } while( true );
}



/* Entry: 000fa79c; end: 000faa47;  */

void FUN_000fa79c(undefined8 param_1,char *param_2,long param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [40];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  pcVar2 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_00844958);
  if ((param_2 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,pcVar2,0,0);
    uVar5 = 7;
  }
  else {
    (**(code **)(pcVar2 + 8))(&uStack_a0,param_2);
    FUN_000fd388(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                 *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                 *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_88;
    *(undefined8 *)(unaff_x20 + 0x90) = uStack_90;
    *(undefined8 *)(unaff_x20 + 0xa8) = uStack_78;
    *(undefined8 *)(unaff_x20 + 0xa0) = uStack_80;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_98;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_a0;
    (**(code **)(lVar4 + 0x10))
              (auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
    uVar5 = 0xaeda28;
    func_0x000115a8(0xaeda28,&UNK_007d78d0);
    puVar3 = &uStack_f0;
    _swift_dynamicCast(puVar3,auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,uVar5
                       ,6);
    if ((int)puVar3 != 0) {
      FUN_000fd3f4(&uStack_f0,auStack_c8);
      FUN_000fd40c(auStack_c8,&uStack_f0);
      FUN_000115f8(&uStack_f0,uStack_d8);
      (**(code **)(lStack_d0 + 0x10))();
      FUN_00011670(auStack_c8);
      if (unaff_x21 == 0) {
        (**(code **)(lVar4 + 8))(param_1,param_2);
        FUN_000fd40c(&uStack_f0,auStack_118);
        _swift_dynamicCast(param_1,auStack_118,uVar5,param_2,7);
      }
      FUN_00011670(&uStack_f0);
      return;
    }
    lStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_000fd9f0(&uStack_f0,0xaeda30,&UNK_007d78d8);
    pcVar2 = section_00000068.segname + 3;
    FUN_0010a6f0();
    if (unaff_x21 != 0) {
      return;
    }
    lVar4 = *(long *)(unaff_x20 + 0x58) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xfaa48);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar4;
    if (-1 < lVar4) {
      FUN_00106a98();
      if (((ulong)pcVar2 & 1) != 0) {
        return;
      }
      (**(code **)(param_3 + 0x40))();
      return;
    }
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,pcVar2,0,0);
    uVar5 = 0x13;
  }
  *(undefined8 *)(pcVar2 + 8) = uVar5;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  _swift_willThrow();
  return;
}



/* Entry: 000faa48; end: 000fadaf;  */

void FUN_000faa48(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  code *extraout_x12_01;
  long lVar6;
  undefined8 unaff_x20;
  long lVar7;
  long unaff_x21;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = 0;
  __sSqMa();
  lVar11 = *(long *)(uVar1 - 8);
  lVar8 = *(long *)(lVar11 + 0x40);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar10 = &stack0xfffffffffffffed0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar6 - extraout_x12_00;
  func_0x00106c88();
  if ((uVar2 & 1) == 0) {
    (**(code **)(lVar11 + 0x10))(lVar6,param_1,uVar1);
    lVar8 = *(long *)(param_2 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    lVar5 = lVar6;
    (*pcVar9)(lVar6,1,param_2);
    (**(code **)(lVar11 + 8))(lVar6,uVar1);
    if ((int)lVar5 == 1) {
      (**(code **)(param_3 + 0x10))(puVar10,param_2);
      (**(code **)(lVar8 + 0x38))(puVar10,0,1,param_2);
      (**(code **)(lVar11 + 0x28))(param_1,puVar10,uVar1);
    }
    FUN_000fd2e4(unaff_x20,&uStack_120);
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_b0 = 0;
    uVar3 = param_1;
    lStack_c0 = param_2;
    lStack_b8 = param_3;
    (*pcVar9)(param_1,1,param_2);
    if ((int)uVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0xfadb0);
      (*pcVar9)();
    }
    FUN_000fa79c(param_1,param_2,param_3);
    if (unaff_x21 == 0) {
      func_0x000fd34c(&uStack_120,unaff_x20);
    }
    func_0x000fd320(&uStack_120);
  }
  else {
    lVar6 = param_2;
    _swift_conformsToProtocol(param_2,&DAT_00843adc);
    if (lVar6 == 0 || param_2 == 0) {
      (**(code **)(lVar11 + 8))(param_1,uVar1);
      (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
    }
    else {
      (*(code *)PTR____chkstk_darwin_00999f48)();
      lVar8 = lVar5 - (lVar8 + 0xfU & 0xfffffffffffffff0);
      (*extraout_x12_01)(lVar8,param_2,lVar6);
      if (unaff_x21 == 0) {
        lVar7 = *(long *)(param_2 + -8);
        lVar4 = lVar8;
        (**(code **)(lVar7 + 0x30))(lVar8,1,param_2);
        if ((int)lVar4 == 1) {
          (**(code **)(lVar11 + 8))(lVar8,uVar1);
          lStack_100 = 0;
          lStack_108 = 0;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
        }
        else {
          lStack_108 = param_2;
          lStack_100 = lVar6;
          func_0x00016cc8(&uStack_120);
          (**(code **)(lVar7 + 0x20))();
        }
        uVar3 = 0xaeda30;
        func_0x000115a8(0xaeda30,&UNK_007d78d8);
        lVar6 = lVar5;
        _swift_dynamicCast(lVar5,&uStack_120,uVar3,param_2,6);
        (**(code **)(lVar7 + 0x38))(lVar5,(uint)lVar6 ^ 1,1,param_2);
        (**(code **)(lVar11 + 0x28))(param_1,lVar5,uVar1);
      }
    }
  }
  return;
}



/* Entry: 000fadb0; end: 000fb313;  */

/* WARNING: Removing unreachable block (ram,0x000fb278) */
/* WARNING: Removing unreachable block (ram,0x000fb240) */

void FUN_000fadb0(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  code *extraout_x12_01;
  long extraout_x13;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *apuStack_160 [2];
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  __sSqMa();
  lStack_150 = *(long *)(lVar3 + -8);
  lStack_130 = *(long *)(lStack_150 + 0x40);
  lStack_148 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(lStack_130 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_2 + -8);
  puStack_138 = (undefined8 *)((long)apuStack_160 - extraout_x8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = ((long)apuStack_160 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_128 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar8 = (undefined1 *)((lVar10 - extraout_x12) - extraout_x12_00);
  puStack_140 = puVar8;
  FUN_00109a58();
  lVar3 = unaff_x20[1];
  lVar9 = unaff_x20[2];
  lVar11 = *unaff_x20;
  if (lVar11 == 0) {
    if (lVar9 == 0) goto LAB_000faf04;
  }
  else if (lVar9 == lVar3 - lVar11) goto LAB_000faf04;
  if (*(char *)(lVar11 + lVar9) == 'n') {
    uVar4 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_000faf04:
  uVar4 = 0x5b;
  FUN_0010a6f0();
  if ((unaff_x21 != 0) || (func_0x00106cf8(), (uVar4 & 1) != 0)) {
    return;
  }
  do {
    FUN_00109a58();
    lVar9 = unaff_x20[2];
    if (lVar11 == 0) {
      if (lVar9 != 0) goto LAB_000faf78;
LAB_000fb080:
      (**(code **)(param_3 + 0x10))(lVar10,param_2,param_3);
      FUN_000fd2e4();
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_c0 = param_2;
      lStack_b8 = param_3;
      FUN_000fa79c(lVar10,param_2,param_3);
      lVar3 = lStack_128;
      (**(code **)(lVar12 + 0x10))(lStack_128,lVar10,param_2);
      uVar5 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar3,uVar5);
      (**(code **)(lVar12 + 8))(lVar10,param_2);
      func_0x000fd34c(&uStack_120);
      func_0x000fd320(&uStack_120);
    }
    else {
      if (lVar9 == lVar3 - lVar11) goto LAB_000fb080;
LAB_000faf78:
      if (*(char *)(lVar11 + lVar9) != 'n') goto LAB_000fb080;
      uVar4 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if ((uVar4 & 1) == 0) goto LAB_000fb080;
      lVar3 = param_2;
      _swift_conformsToProtocol(param_2,&DAT_00843adc);
      puVar7 = (undefined8 *)0x0;
      if (lVar3 == 0) {
LAB_000fb2b8:
        FUN_000c7004();
        _swift_allocError(&UNK_009ad5a0,puVar7,0,0);
        puVar7[1] = 10;
        *puVar7 = 0;
        _swift_willThrow();
        return;
      }
      apuStack_160[1] = puVar8;
      (*(code *)PTR____chkstk_darwin_00999f48)();
      lVar11 = (long)puVar8 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
      (*extraout_x12_01)(lVar11,param_2,lVar3);
      lVar9 = lVar11;
      (**(code **)(lVar12 + 0x30))(lVar11,1,param_2);
      if ((int)lVar9 == 1) {
        (**(code **)(lStack_150 + 8))(lVar11,lStack_148);
        lStack_100 = 0;
        lStack_108 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
      }
      else {
        lStack_108 = param_2;
        lStack_100 = lVar3;
        func_0x00016cc8(&uStack_120);
        (**(code **)(lVar12 + 0x20))();
      }
      puVar7 = puStack_138;
      puVar8 = apuStack_160[1];
      uVar5 = 0xaeda30;
      func_0x000115a8(0xaeda30,&UNK_007d78d8);
      puVar6 = puVar7;
      _swift_dynamicCast(puVar7,&uStack_120,uVar5,param_2,6);
      if (((ulong)puVar6 & 1) == 0) {
        (**(code **)(lVar12 + 0x38))(puVar7,1,1,param_2);
        (**(code **)(lStack_150 + 8))(puVar7,lStack_148);
        goto LAB_000fb2b8;
      }
      (**(code **)(lVar12 + 0x38))(puVar7,0,1,param_2);
      puVar1 = puStack_140;
      (**(code **)(lVar12 + 0x20))(puStack_140,puVar7,param_2);
      lVar3 = lStack_128;
      (**(code **)(lVar12 + 0x10))(lStack_128,puVar1,param_2);
      uVar5 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar3,uVar5);
      (**(code **)(lVar12 + 8))(puVar1,param_2);
    }
    FUN_00109a58();
    lVar3 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    lVar11 = *unaff_x20;
    if (lVar11 == 0) {
      if (uVar4 != 0) goto LAB_000faf30;
    }
    else if (uVar4 != lVar3 - lVar11) {
LAB_000faf30:
      if (*(char *)(lVar11 + uVar4) == ']') {
        if ((lVar11 != 0) && (uVar4 < (ulong)(lVar3 - lVar11))) {
          unaff_x20[2] = uVar4 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xfb314);
        (*pcVar2)();
      }
    }
    FUN_0010a6f0(0x2c);
  } while( true );
}



/* Entry: 000fb314; end: 000fb33b;  */

void FUN_000fb314(void)

{
  FUN_000faa48();
  return;
}



/* Entry: 000fb33c; end: 000fbafb;  */

/* WARNING: Removing unreachable block (ram,0x000fb954) */
/* WARNING: Removing unreachable block (ram,0x000fb924) */
/* WARNING: Removing unreachable block (ram,0x000fb93c) */
/* WARNING: Removing unreachable block (ram,0x000fb928) */

void FUN_000fb33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 )

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  char acStack_110 [8];
  char acStack_108 [8];
  char acStack_100 [8];
  undefined8 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  char *pcStack_80;
  long lStack_78;
  char *pcStack_70;
  long lStack_68;
  
  lStack_b8 = *(long *)(param_5 + 8);
  lVar2 = 0;
  uStack_d0 = param_1;
  uStack_b0 = param_3;
  _swift_getAssociatedTypeWitness();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_98 = *(long *)(param_4 + 8);
  pcVar3 = (char *)0x0;
  lStack_d8 = (long)acStack_100 - extraout_x8;
  uStack_90 = param_2;
  _swift_getAssociatedTypeWitness(0,lStack_98,param_2,&UNK_008441f0,&UNK_00844200);
  lStack_68 = *(long *)(pcVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_68 + 0x40));
  lVar16 = ((long)acStack_100 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar16 - extraout_x12;
  lVar4 = 0;
  lStack_c8 = lVar12;
  __sSqMa(0,lVar2);
  lStack_a8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar17 = (undefined8 *)(lVar12 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = (long)puVar17 - extraout_x12_01;
  pcVar5 = (char *)0x0;
  pcVar8 = pcVar3;
  lStack_78 = lVar12;
  __sSqMa();
  lStack_88 = *(long *)(pcVar5 + -8);
  pcStack_80 = pcVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_88 + 0x40));
  puVar13 = (undefined8 *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_c0 = puVar13;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar5 = (char *)((long)puVar13 - extraout_x12_02);
  pcStack_70 = pcVar5;
  FUN_00109a58();
  lVar12 = unaff_x20[2];
  lVar14 = *unaff_x20;
  if (lVar14 == 0) {
    if (lVar12 == 0) goto LAB_000fb580;
  }
  else if (lVar12 == unaff_x20[1] - lVar14) goto LAB_000fb580;
  if (*(char *)(lVar14 + lVar12) == 'n') {
    uVar6 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    pcVar8 = (char *)0xaef0f0;
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
LAB_000fb580:
  pcVar7 = section_00000068.segname + 3;
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar12 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0xfbaa0);
      (*pcVar15)();
    }
    unaff_x20[0xb] = lVar12;
    if (lVar12 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar7,0,0);
      uVar11 = 0x13;
LAB_000fb5e8:
      *(undefined8 *)(pcVar7 + 8) = uVar11;
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      pcVar7[5] = '\0';
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      _swift_willThrow();
    }
    else {
      FUN_00106a98();
      if (((ulong)pcVar7 & 1) == 0) {
        FUN_00106d64();
        puStack_f8 = puVar17;
        lStack_f0 = lVar16;
        lStack_e8 = lVar4;
        do {
          lVar4 = lStack_f0;
          puVar13 = puStack_f8;
          if ((pcVar7 == (char *)((long)&segment_command_00000020.cmd + 2)) &&
             (pcVar8 == (char *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)pcVar7 & 1) == 0) {
              FUN_000c7004();
              _swift_allocError(&UNK_009ad5a0,pcVar8,0,0);
              uVar11 = 0xb;
              pcVar7 = pcVar8;
              goto LAB_000fb5e8;
            }
          }
          pcVar8 = pcStack_70;
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lStack_68 + 0x38))(pcStack_70,1,1,pcVar3);
          (**(code **)(lStack_98 + 0x20))(pcVar8);
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_0010a6f0(0x3a);
          lVar12 = lStack_78;
          pcVar15 = *(code **)(lStack_a0 + 0x38);
          (*pcVar15)(lStack_78,1,1,lVar2);
          (**(code **)(lStack_b8 + 0x20))(lVar12);
          puVar17 = puStack_c0;
          (**(code **)(lStack_88 + 0x10))(puStack_c0,pcStack_70,pcStack_80);
          puVar9 = puVar17;
          (**(code **)(lStack_68 + 0x30))(puVar17,1,pcVar3);
          pcVar8 = pcStack_80;
          lVar14 = lStack_88;
          lVar12 = lStack_c8;
          if ((int)puVar9 == 1) {
            (**(code **)(lStack_88 + 8))(puVar17,pcStack_80);
            lVar2 = lStack_e8;
            lVar4 = lStack_a8;
LAB_000fb9b8:
            FUN_000c7004();
            _swift_allocError(&UNK_009ad5a0,puVar17,0,0);
            puVar17[1] = 3;
            *puVar17 = 0;
            _swift_willThrow();
            (**(code **)(lVar4 + 8))(lStack_78,lVar2);
            (**(code **)(lVar14 + 8))(pcStack_70,pcVar8);
            return;
          }
          (**(code **)(lStack_68 + 0x20))(lStack_c8,puVar17,pcVar3);
          (**(code **)(lStack_a8 + 0x10))(puVar13,lStack_78,lStack_e8);
          lVar16 = lStack_a0;
          puVar17 = puVar13;
          (**(code **)(lStack_a0 + 0x30))(puVar13,1,lVar2);
          lVar14 = lStack_d8;
          if ((int)puVar17 == 1) {
            (**(code **)(lStack_68 + 8))(lVar12,pcVar3);
            lVar4 = lStack_a8;
            lVar2 = lStack_e8;
            (**(code **)(lStack_a8 + 8))(puVar13,lStack_e8);
            puVar17 = puVar13;
            pcVar8 = pcStack_80;
            lVar14 = lStack_88;
            goto LAB_000fb9b8;
          }
          (**(code **)(lVar16 + 0x20))(lStack_d8,puVar13,lVar2);
          (**(code **)(lStack_68 + 0x10))(lVar4,lVar12,pcVar3);
          lVar1 = lStack_e0;
          (**(code **)(lVar16 + 0x10))(lStack_e0,lVar14,lVar2);
          (*pcVar15)(lVar1,0,1,lVar2);
          lVar10 = lStack_98;
          _swift_getAssociatedConformanceWitness
                    (lStack_98,uStack_90,pcVar3,&UNK_008441f0,&UNK_008441f8);
          uVar11 = 0;
          __sSDMa(0,pcVar3,lVar2,lVar10);
          __sSDyq_Sgxcis(lVar1,lVar4,uVar11);
          (**(code **)(lVar16 + 8))(lVar14,lVar2);
          (**(code **)(lStack_68 + 8))(lVar12,pcVar3);
          FUN_00109a58();
          lVar4 = lStack_e8;
          uVar6 = unaff_x20[2];
          lVar12 = *unaff_x20;
          if (lVar12 == 0) {
            if (uVar6 != 0) goto LAB_000fb8cc;
          }
          else if (uVar6 != unaff_x20[1] - lVar12) {
LAB_000fb8cc:
            if (*(char *)(lVar12 + uVar6) == '}') {
              if ((lVar12 == 0) || ((ulong)(unaff_x20[1] - lVar12) <= uVar6)) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0xfbaa4);
                (*pcVar15)();
              }
              unaff_x20[2] = uVar6 + 1;
              lVar2 = unaff_x20[0xb] + 1;
              if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0xfbaa8);
                (*pcVar15)();
              }
              unaff_x20[0xb] = lVar2;
              if (lVar2 <= unaff_x20[4]) {
                (**(code **)(lStack_a8 + 8))(lStack_78,lStack_e8);
                (**(code **)(lStack_88 + 8))(pcStack_70,pcStack_80);
                return;
              }
              pcVar5[-8] = '\0';
              pcVar5[-7] = '\0';
              pcVar5[-6] = '\0';
              pcVar5[-5] = '\0';
              pcVar5[-0x10] = -0x55;
              pcVar5[-0xf] = '\x01';
              pcVar5[-0xe] = '\0';
              pcVar5[-0xd] = '\0';
              pcVar5[-0xc] = '\0';
              pcVar5[-0xb] = '\0';
              pcVar5[-10] = '\0';
              pcVar5[-9] = '\0';
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0xfbafc);
              (*pcVar15)();
            }
          }
          FUN_0010a6f0(0x2c);
          (**(code **)(lStack_a8 + 8))(lStack_78,lVar4);
          pcVar7 = pcStack_70;
          pcVar8 = pcStack_80;
          (**(code **)(lStack_88 + 8))();
          FUN_00106d64();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 000fbafc; end: 000fc28b;  */

/* WARNING: Removing unreachable block (ram,0x000fc13c) */
/* WARNING: Removing unreachable block (ram,0x000fc15c) */
/* WARNING: Removing unreachable block (ram,0x000fc098) */
/* WARNING: Removing unreachable block (ram,0x000fc0d4) */
/* WARNING: Removing unreachable block (ram,0x000fc18c) */

void FUN_000fbafc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  code *pcVar16;
  long lVar17;
  char acStack_100 [8];
  char acStack_f8 [8];
  char acStack_f0 [8];
  long lStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  char *pcStack_70;
  long lStack_68;
  
  lStack_a8 = *(long *)(param_3 + -8);
  lVar11 = param_3;
  uStack_b8 = param_1;
  uStack_a0 = param_5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar17 = (long)acStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSqMa(0,lVar11);
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_80 + 0x40));
  lVar11 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar11 - extraout_x12;
  lStack_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar11 - extraout_x12_00;
  lStack_90 = *(long *)(param_4 + 8);
  pcVar3 = (char *)0x0;
  uStack_88 = param_2;
  _swift_getAssociatedTypeWitness(0,lStack_90,param_2,&UNK_008441f0,&UNK_00844200);
  lVar2 = *(long *)(pcVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12_01;
  pcVar4 = (char *)0x0;
  pcVar7 = pcVar3;
  lStack_68 = lVar12;
  __sSqMa();
  lVar15 = *(long *)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  puVar13 = (undefined8 *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_98 = puVar13;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar10 = (char *)((long)puVar13 - extraout_x12_02);
  pcStack_70 = pcVar10;
  FUN_00109a58();
  lVar12 = unaff_x20[2];
  lVar14 = *unaff_x20;
  if (lVar14 == 0) {
    if (lVar12 == 0) goto LAB_000fbd20;
  }
  else if (lVar12 == unaff_x20[1] - lVar14) goto LAB_000fbd20;
  if (*(char *)(lVar14 + lVar12) == 'n') {
    uVar5 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    pcVar7 = (char *)0xaef0c0;
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_000fbd20:
  pcVar6 = section_00000068.segname + 3;
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar12 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0xfc230);
      (*pcVar16)();
    }
    unaff_x20[0xb] = lVar12;
    if (lVar12 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar6,0,0);
      uVar9 = 0x13;
LAB_000fc0c4:
      *(undefined8 *)(pcVar6 + 8) = uVar9;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      _swift_willThrow();
    }
    else {
      FUN_00106a98();
      if (((ulong)pcVar6 & 1) == 0) {
        FUN_00106d64();
        lStack_e8 = lVar11;
        pcStack_e0 = pcVar3;
        pcStack_d8 = pcVar4;
        lStack_d0 = lVar15;
        do {
          if ((pcVar6 == (char *)((long)&segment_command_00000020.cmd + 2)) &&
             (pcVar7 == (char *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)pcVar6 & 1) == 0) {
              FUN_000c7004();
              _swift_allocError(&UNK_009ad5a0,pcVar7,0,0);
              uVar9 = 0xb;
              pcVar6 = pcVar7;
              goto LAB_000fc0c4;
            }
          }
          pcVar4 = pcStack_70;
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar2 + 0x38))(pcStack_70,1,1,pcVar3);
          (**(code **)(lStack_90 + 0x20))(pcVar4);
          puVar13 = puStack_98;
          pcVar7 = pcStack_d8;
          (**(code **)(lStack_d0 + 0x10))(puStack_98,pcVar4,pcStack_d8);
          puVar8 = puVar13;
          (**(code **)(lVar2 + 0x30))(puVar13,1,pcVar3);
          if ((int)puVar8 == 1) {
            pcVar16 = *(code **)(lStack_d0 + 8);
            (*pcVar16)(puVar13,pcVar7);
            FUN_000c7004();
            _swift_allocError(&UNK_009ad5a0,puVar13,0,0);
            puVar13[1] = 3;
            *puVar13 = 0;
            _swift_willThrow();
            (*pcVar16)(pcStack_70,pcVar7);
            return;
          }
          (**(code **)(lVar2 + 0x20))(lStack_68,puVar13,pcVar3);
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_0010a6f0(0x3a);
          lVar14 = lStack_a8;
          pcVar16 = *(code **)(lStack_a8 + 0x38);
          (*pcVar16)(lVar11,1,1,param_3);
          FUN_000f9da4(lVar11,param_3,uStack_a0);
          lVar1 = lStack_78;
          lVar15 = lStack_80;
          lVar12 = lStack_b0;
          (**(code **)(lStack_80 + 0x10))(lStack_b0,lVar11,lStack_78);
          lVar11 = lVar12;
          (**(code **)(lVar14 + 0x30))(lVar12,1,param_3);
          if ((int)lVar11 == 1) {
            (**(code **)(lVar15 + 8))(lVar12,lVar1);
            pcVar3 = pcStack_e0;
          }
          else {
            (**(code **)(lVar14 + 0x20))(lVar17,lVar12,param_3);
            lVar11 = lStack_c8;
            pcVar3 = pcStack_e0;
            (**(code **)(lVar2 + 0x10))(lStack_c8,lStack_68,pcStack_e0);
            lVar12 = lStack_c0;
            (**(code **)(lVar14 + 0x10))(lStack_c0,lVar17,param_3);
            (*pcVar16)(lVar12,0,1,param_3);
            lVar15 = lStack_90;
            _swift_getAssociatedConformanceWitness
                      (lStack_90,uStack_88,pcVar3,&UNK_008441f0,&UNK_008441f8);
            uVar9 = 0;
            __sSDMa(0,pcVar3,param_3,lVar15);
            __sSDyq_Sgxcis(lVar12,lVar11,uVar9);
            (**(code **)(lVar14 + 8))(lVar17,param_3);
          }
          FUN_00109a58();
          lVar12 = lStack_d0;
          pcVar7 = pcStack_d8;
          lVar11 = lStack_e8;
          uVar5 = unaff_x20[2];
          lVar14 = *unaff_x20;
          if (lVar14 == 0) {
            if (uVar5 != 0) goto LAB_000fc02c;
          }
          else if (uVar5 != unaff_x20[1] - lVar14) {
LAB_000fc02c:
            if (*(char *)(lVar14 + uVar5) == '}') {
              if ((lVar14 == 0) || ((ulong)(unaff_x20[1] - lVar14) <= uVar5)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0xfc234);
                (*pcVar16)();
              }
              unaff_x20[2] = uVar5 + 1;
              lVar11 = unaff_x20[0xb] + 1;
              if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0xfc238);
                (*pcVar16)();
              }
              unaff_x20[0xb] = lVar11;
              if (lVar11 <= unaff_x20[4]) {
                (**(code **)(lStack_80 + 8))(lStack_e8,lStack_78);
                (**(code **)(lVar2 + 8))(lStack_68,pcVar3);
                (**(code **)(lVar12 + 8))(pcStack_70,pcVar7);
                return;
              }
              pcVar10[-8] = '\0';
              pcVar10[-7] = '\0';
              pcVar10[-6] = '\0';
              pcVar10[-5] = '\0';
              pcVar10[-0x10] = -0x55;
              pcVar10[-0xf] = '\x01';
              pcVar10[-0xe] = '\0';
              pcVar10[-0xd] = '\0';
              pcVar10[-0xc] = '\0';
              pcVar10[-0xb] = '\0';
              pcVar10[-10] = '\0';
              pcVar10[-9] = '\0';
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0xfc28c);
              (*pcVar16)();
            }
          }
          FUN_0010a6f0(0x2c);
          (**(code **)(lStack_80 + 8))(lVar11,lStack_78);
          (**(code **)(lVar2 + 8))(lStack_68,pcVar3);
          pcVar6 = pcStack_70;
          (**(code **)(lVar12 + 8))();
          FUN_00106d64();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 000fc28c; end: 000fca1b;  */

/* WARNING: Removing unreachable block (ram,0x000fc84c) */
/* WARNING: Removing unreachable block (ram,0x000fc864) */
/* WARNING: Removing unreachable block (ram,0x000fc878) */

void FUN_000fc28c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar14;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  long lVar16;
  char acStack_100 [8];
  char acStack_f8 [8];
  long alStack_f0 [3];
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  char *pcStack_70;
  long lStack_68;
  
  lStack_88 = *(long *)(param_3 + -8);
  uStack_b0 = param_1;
  uStack_98 = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_88 + 0x40));
  lVar10 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_4 + 8);
  pcVar2 = (char *)0x0;
  lStack_b8 = lVar10;
  uStack_80 = param_2;
  _swift_getAssociatedTypeWitness(0,lVar15);
  lVar16 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - extraout_x12;
  lVar3 = 0;
  __sSqMa(0,param_3);
  lStack_90 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_90 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12_00);
  puStack_a8 = puVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = (long)puVar12 - extraout_x12_01;
  pcVar4 = (char *)0x0;
  pcVar7 = pcVar2;
  lStack_68 = lVar11;
  __sSqMa();
  lStack_78 = *(long *)(pcVar4 + -8);
  pcStack_70 = pcVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_78 + 0x40));
  puVar12 = (undefined8 *)(lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_a0 = puVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar4 = (char *)((long)puVar12 - extraout_x12_02);
  FUN_00109a58();
  lVar11 = unaff_x20[2];
  lVar13 = *unaff_x20;
  if (lVar13 == 0) {
    if (lVar11 == 0) goto LAB_000fc4b0;
  }
  else if (lVar11 == unaff_x20[1] - lVar13) goto LAB_000fc4b0;
  if (*(char *)(lVar13 + lVar11) == 'n') {
    uVar5 = 0;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    pcVar7 = (char *)0xaef090;
    _swift_initStaticObject();
    FUN_0010a49c();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_000fc4b0:
  pcVar6 = section_00000068.segname + 3;
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar11 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xfc9c0);
      (*pcVar1)();
    }
    unaff_x20[0xb] = lVar11;
    if (lVar11 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar6,0,0);
      uVar9 = 0x13;
LAB_000fc518:
      *(undefined8 *)(pcVar6 + 8) = uVar9;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      _swift_willThrow();
    }
    else {
      FUN_00106a98();
      if (((ulong)pcVar6 & 1) == 0) {
        FUN_00106d64();
        pcVar1 = (code *)0x0;
        alStack_f0[0] = lVar15;
        alStack_f0[1] = lVar10;
        alStack_f0[2] = lVar16;
        lStack_d0 = lVar3;
        do {
          lVar3 = alStack_f0[0];
          pcStack_d8 = pcVar1;
          if ((pcVar6 == (char *)((long)&segment_command_00000020.cmd + 2)) &&
             (pcVar7 == (char *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)pcVar6 & 1) == 0) {
              FUN_000c7004();
              _swift_allocError(&UNK_009ad5a0,pcVar7,0,0);
              uVar9 = 0xb;
              pcVar6 = pcVar7;
              goto LAB_000fc518;
            }
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar16 + 0x38))(pcVar4,1,1,pcVar2);
          pcVar1 = pcStack_d8;
          (**(code **)(lVar3 + 0x20))(pcVar4);
          if (pcVar1 != (code *)0x0) {
            pcVar1 = *(code **)(lStack_78 + 8);
            pcVar7 = pcStack_70;
            goto LAB_000fc930;
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_0010a6f0(0x3a);
          lVar11 = lStack_68;
          pcVar14 = *(code **)(lStack_88 + 0x38);
          (*pcVar14)(lStack_68,1,1,param_3);
          FUN_000faa48(lVar11,param_3,uStack_98);
          lVar11 = lStack_78;
          puVar12 = puStack_a0;
          pcStack_d8 = pcVar14;
          (**(code **)(lStack_78 + 0x10))(puStack_a0,pcVar4,pcStack_70);
          puVar8 = puVar12;
          (**(code **)(lVar16 + 0x30))(puVar12,1,pcVar2);
          pcVar7 = pcStack_70;
          if ((int)puVar8 == 1) {
            (**(code **)(lVar11 + 8))(puVar12,pcStack_70);
            lVar10 = lStack_d0;
            lVar16 = lStack_90;
LAB_000fc8e0:
            FUN_000c7004();
            _swift_allocError(&UNK_009ad5a0,puVar12,0,0);
            puVar12[1] = 3;
            *puVar12 = 0;
            _swift_willThrow();
            (**(code **)(lVar16 + 8))(lStack_68,lVar10);
            pcVar1 = *(code **)(lVar11 + 8);
LAB_000fc930:
            (*pcVar1)(pcVar4,pcVar7);
            return;
          }
          (**(code **)(lVar16 + 0x20))(lVar10,puVar12,pcVar2);
          puVar12 = puStack_a8;
          (**(code **)(lStack_90 + 0x10))(puStack_a8,lStack_68,lStack_d0);
          lVar13 = lStack_88;
          puVar8 = puVar12;
          (**(code **)(lStack_88 + 0x30))(puVar12,1,param_3);
          lVar11 = lStack_b8;
          if ((int)puVar8 == 1) {
            (**(code **)(lVar16 + 8))(lVar10,pcVar2);
            lVar16 = lStack_90;
            lVar10 = lStack_d0;
            (**(code **)(lStack_90 + 8))(puVar12,lStack_d0);
            pcVar7 = pcStack_70;
            lVar11 = lStack_78;
            goto LAB_000fc8e0;
          }
          (**(code **)(lVar13 + 0x20))(lStack_b8,puVar12,param_3);
          lVar15 = lStack_c0;
          (**(code **)(alStack_f0[2] + 0x10))(lStack_c0,alStack_f0[1],pcVar2);
          lVar16 = lStack_c8;
          (**(code **)(lVar13 + 0x10))(lStack_c8,lVar11,param_3);
          (*pcStack_d8)(lVar16,0,1,param_3);
          _swift_getAssociatedConformanceWitness(lVar3,uStack_80,pcVar2,&UNK_008441f0,&UNK_008441f8)
          ;
          uVar9 = 0;
          __sSDMa(0,pcVar2,param_3,lVar3);
          lVar10 = alStack_f0[1];
          __sSDyq_Sgxcis(lVar16,lVar15,uVar9);
          lVar16 = alStack_f0[2];
          (**(code **)(lVar13 + 8))(lVar11,param_3);
          (**(code **)(lVar16 + 8))(lVar10,pcVar2);
          FUN_00109a58();
          lVar11 = lStack_78;
          lVar3 = lStack_d0;
          uVar5 = unaff_x20[2];
          lVar13 = *unaff_x20;
          if (lVar13 == 0) {
            if (uVar5 != 0) {
LAB_000fc7f4:
              if (*(char *)(lVar13 + uVar5) == '}') {
                if ((lVar13 == 0) || ((ulong)(unaff_x20[1] - lVar13) <= uVar5)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0xfc9c4);
                  (*pcVar1)();
                }
                unaff_x20[2] = uVar5 + 1;
                lVar10 = unaff_x20[0xb] + 1;
                if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0xfc9c8);
                  (*pcVar1)();
                }
                unaff_x20[0xb] = lVar10;
                if (lVar10 <= unaff_x20[4]) {
                  (**(code **)(lStack_90 + 8))(lStack_68,lStack_d0);
                  (**(code **)(lVar11 + 8))(pcVar4,pcStack_70);
                  return;
                }
                pcVar4[-8] = '\0';
                pcVar4[-7] = '\0';
                pcVar4[-6] = '\0';
                pcVar4[-5] = '\0';
                pcVar4[-0x10] = -0x55;
                pcVar4[-0xf] = '\x01';
                pcVar4[-0xe] = '\0';
                pcVar4[-0xd] = '\0';
                pcVar4[-0xc] = '\0';
                pcVar4[-0xb] = '\0';
                pcVar4[-10] = '\0';
                pcVar4[-9] = '\0';
                __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                          ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                           "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0xfca1c);
                (*pcVar1)();
              }
            }
          }
          else if (uVar5 != unaff_x20[1] - lVar13) goto LAB_000fc7f4;
          FUN_0010a6f0(0x2c);
          (**(code **)(lStack_90 + 8))(lStack_68,lVar3);
          pcVar6 = pcVar4;
          pcVar7 = pcStack_70;
          (**(code **)(lStack_78 + 8))();
          FUN_00106d64();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 000fca1c; end: 000fcaff;  */

void FUN_000fca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [40];
  
  pcVar3 = (code *)auStack_a0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  FUN_0001393c(unaff_x20 + 0x30,uVar1);
  (**(code **)(lVar2 + 8))(auStack_a0,param_2,param_3,param_4,uVar1,lVar2);
  if (lStack_88 != 0) {
    FUN_000fd3f4(auStack_a0,auStack_78);
    FUN_000d48b4(auStack_a0,param_4);
    FUN_000fcb00(param_4);
    (*pcVar3)(auStack_a0,0);
    FUN_00011670(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xfcb00);
  (*pcVar3)();
}



/* Entry: 000fcb00; end: 000fcc13;  */

void FUN_000fcb00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  FUN_000e08a4(param_1,auStack_68);
  FUN_000fd9f0(auStack_68,0xaedb70,&UNK_007d8040);
  if (lStack_50 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar3 = *(long *)(param_3 + 0x20);
    FUN_0001393c(param_3,uVar1);
    (**(code **)(lVar3 + 0x20))(auStack_68,param_2,&UNK_009ad310,&PTR_DAT_009ad338,uVar1,lVar3);
    if (unaff_x21 == 0) {
      func_0x000d4c28(auStack_68,param_1);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xfcc14);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_1 + 0x20);
    FUN_000115f8(param_1,lVar3);
    (**(code **)(lVar4 + 0x28))(param_2,&UNK_009ad310,&PTR_DAT_009ad338,lVar3,lVar4);
  }
  return;
}



/* Entry: 000fcc14; end: 000fcc63;  */

void FUN_000fcc14(undefined8 *param_1)

{
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  param_1[1] = 0x12;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 000fcc64; end: 000fcc8b;  */

void FUN_000fcc64(void)

{
  FUN_000f88e8();
  return;
}



/* Entry: 000fcc8c; end: 000fccdb;  */

void FUN_000fcc8c(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  uVar1 = (uint)param_2;
  func_0x00106c88();
  if ((uVar1 & 1) == 0) {
    FUN_00107544();
    if (unaff_x21 != 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    param_1 = 0;
  }
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return;
}



/* Entry: 000fccdc; end: 000fcd03;  */

void FUN_000fccdc(void)

{
  FUN_000f8acc();
  return;
}



/* Entry: 000fcd04; end: 000fcd53;  */

void FUN_000fcd04(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  uVar1 = (uint)param_2;
  func_0x00106c88();
  if ((uVar1 & 1) == 0) {
    FUN_00106e38();
    if (unaff_x21 != 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    param_1 = 0;
  }
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return;
}



/* Entry: 000fcd54; end: 000fcecb;  */

void FUN_000fcd54(void)

{
  FUN_000f8d00();
  return;
}



/* Entry: 000fcecc; end: 000fcf5f;  */

void FUN_000fcecc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00106c88();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00107bac();
    if (unaff_x21 == 0) {
      if ((ulong)puVar1 >> 0x20 == 0) {
        *(int *)param_1 = (int)puVar1;
        *(undefined1 *)((long)param_1 + 4) = 0;
      }
      else {
        FUN_000c7004();
        _swift_allocError(&UNK_009ad5a0,puVar1,0,0);
        puVar1[1] = 2;
        *puVar1 = 0;
        _swift_willThrow();
      }
    }
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 4) = 1;
  }
  return;
}



/* Entry: 000fcf60; end: 000fcfbb;  */

void FUN_000fcf60(ulong *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00106c88();
  if (((ulong)puVar1 & 1) == 0) {
    (*param_4)();
    if (unaff_x21 != 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    puVar1 = (ulong *)0x0;
    uVar2 = 1;
  }
  *param_1 = (ulong)puVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 000fcfbc; end: 000fcfcf;  */

void FUN_000fcfbc(void)

{
  FUN_000f96f4();
  return;
}



/* Entry: 000fcfd0; end: 000fd033;  */

void FUN_000fcfd0(byte *param_1)

{
  byte bVar1;
  long unaff_x20;
  long unaff_x21;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  func_0x00106c88();
  bVar1 = (byte)uVar2;
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0x78) & 1) == 0) {
      FUN_00107450();
    }
    else {
      FUN_001080cc();
    }
    if (unaff_x21 == 0) {
      *param_1 = bVar1 & 1;
    }
  }
  else {
    *param_1 = 2;
  }
  return;
}



/* Entry: 000fd034; end: 000fd047;  */

void FUN_000fd034(void)

{
  FUN_000f97ac();
  return;
}



/* Entry: 000fd048; end: 000fd0ab;  */

void FUN_000fd048(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00106c88();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_00106a08();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    puVar1 = (ulong *)0x0;
    param_2 = 0xe000000000000000;
  }
  _swift_bridgeObjectRelease(param_1[1]);
  *param_1 = (ulong)puVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 000fd0ac; end: 000fd117;  */

void FUN_000fd0ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00106c88();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_00106a08();
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(param_1[1]);
      *param_1 = puVar1;
      param_1[1] = param_2;
    }
  }
  else {
    _swift_bridgeObjectRelease(param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 000fd118; end: 000fd12b;  */

void FUN_000fd118(void)

{
  FUN_000f9944();
  return;
}



/* Entry: 000fd12c; end: 000fd18f;  */

void FUN_000fd12c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00106c88();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_0010821c();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    param_2 = 0xc000000000000000;
  }
  FUN_00023358(*param_1,param_1[1]);
  *param_1 = puVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 000fd190; end: 000fd1f3;  */

void FUN_000fd190(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00106c88();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_0010821c();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    param_2 = 0xf000000000000000;
  }
  FUN_00023344(*param_1,param_1[1]);
  *param_1 = puVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 000fd1f4; end: 000fd2e3;  */

void FUN_000fd1f4(void)

{
  FUN_000f9b4c();
  return;
}



/* Entry: 000fd2e4; end: 000fd387;  */

undefined8 FUN_000fd2e4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010b150(param_2,param_1);
  return param_2;
}



/* Entry: 000fd388; end: 000fd3f3;  */

void FUN_000fd388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_6);
    return;
  }
  return;
}



/* Entry: 000fd3f4; end: 000fd40b;  */

undefined8 * FUN_000fd3f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000fd40c; end: 000fd4e3;  */

long FUN_000fd40c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000fd4e4; end: 000fd7b3;  */

undefined8 * FUN_000fd4e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  lVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar3;
  pcVar5 = (code *)**(undefined8 **)(lVar3 + -8);
  _swift_retain();
  (*pcVar5)(param_1 + 6,param_2 + 6,lVar3);
  lVar3 = param_2[0x10];
  param_1[0xb] = param_2[0xb];
  uVar6 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar6;
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  if (lVar3 == 0) {
    lVar3 = param_2[0x10];
    uVar7 = param_2[0x13];
    uVar6 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = lVar3;
    param_1[0x13] = uVar7;
    param_1[0x12] = uVar6;
    uVar6 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar6;
  }
  else {
    uVar6 = param_2[0x11];
    uVar1 = param_2[0x12];
    param_1[0x10] = lVar3;
    param_1[0x11] = uVar6;
    uVar7 = param_2[0x13];
    uVar2 = param_2[0x14];
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar7;
    uVar4 = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar4;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
  }
  return param_1;
}



/* Entry: 000fd7b4; end: 000fd7e7;  */

undefined8 FUN_000fd7b4(undefined8 param_1)

{
  FUN_0011b194();
  return param_1;
}



/* Entry: 000fd7e8; end: 000fd81b;  */

void FUN_000fd7e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar5 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x15] = uVar7;
  param_1[0x14] = uVar6;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  return;
}



/* Entry: 000fd81c; end: 000fd92b;  */

undefined8 * FUN_000fd81c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_00011670(param_1 + 6);
  uVar2 = param_2[6];
  uVar5 = param_2[9];
  uVar1 = param_2[8];
  plVar3 = param_1 + 0x10;
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar5;
  param_1[8] = uVar1;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  if (*plVar3 != 0) {
    if (param_2[0x10] != 0) {
      param_1[0x10] = param_2[0x10];
      _swift_release();
      uVar2 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_1[0x13];
      param_1[0x13] = param_2[0x13];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_1[0x14];
      param_1[0x14] = param_2[0x14];
      _swift_bridgeObjectRelease(uVar2);
      uVar2 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRelease(uVar2);
      return param_1;
    }
    FUN_000fd7b4(plVar3);
  }
  lVar4 = param_2[0x10];
  uVar1 = param_2[0x13];
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  *plVar3 = lVar4;
  param_1[0x13] = uVar1;
  param_1[0x12] = uVar2;
  uVar2 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  return param_1;
}



/* Entry: 000fd92c; end: 000fd9ef;  */

int FUN_000fd92c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000fd9f0; end: 000fda2f;  */

undefined8 FUN_000fd9f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


