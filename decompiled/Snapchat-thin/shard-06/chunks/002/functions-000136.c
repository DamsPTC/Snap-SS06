/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10456c244; end: 10456c2c7;  */

undefined1  [16] FUN_10456c244(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *in_x4;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
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



/* Entry: 10456c2c8; end: 10456c307;  */

void FUN_10456c2c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113086190 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___ss5Int64VSzsMc_11034ee60;
  _swift_getWitnessTable(PTR___ss5Int64VSzsMc_11034ee60,PTR___ss5Int64VN_11034ee50);
  puRam0000000113086190 = puVar1;
  return;
}



/* Entry: 10456c308; end: 10456c353;  */

void FUN_10456c308(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 10456c354; end: 10456c37f;  */

long FUN_10456c354(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10456c380; end: 10456c3eb;  */

int FUN_10456c380(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10456c3ec; end: 10456c47f;  */

void FUN_10456c3ec(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __sSH4hash4intoys6HasherVz_tFTj();
  return;
}



/* Entry: 10456c480; end: 10456c507;  */

void FUN_10456c480(long param_1,undefined8 param_2)

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
      func_0x00010006c00c(uVar1,uVar2);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF();
      func_0x00010006c090(uVar1,uVar2);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10456c508; end: 10456c557;  */

void FUN_10456c508(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __sSasSHRzlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456c558; end: 10456c68b;  */

void FUN_10456c558(long param_1,undefined8 param_2,long param_3,long param_4)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar5 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10456c68c);
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



/* Entry: 10456c68c; end: 10456c78b;  */

void FUN_10456c68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar4 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,param_3,&UNK_10e814078,&UNK_10e814088);
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar4,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  _swift_getAssociatedConformanceWitness(uVar3,param_4,uVar2,&UNK_10e814078,&UNK_10e814080);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456c78c; end: 10456c843;  */

void FUN_10456c78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456c844; end: 10456c8fb;  */

void FUN_10456c844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ss6HasherV8_combineyySuF(param_2);
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  __sSDsSHR_rlE4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456c8fc; end: 10456c93f;  */

void FUN_10456c8fc(double param_1)

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



/* Entry: 10456c940; end: 10456c973;  */

void FUN_10456c940(uint param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  __ss6HasherV8_combineyys5UInt8VF(param_1 & 1);
  return;
}



/* Entry: 10456c974; end: 10456c9bb;  */

void FUN_10456c974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __ss6HasherV8_combineyySuF(param_3);
  __sSS4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456c9bc; end: 10456ca03;  */

void FUN_10456c9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __ss6HasherV8_combineyySuF(param_3);
  __s10Foundation4DataV4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456ca04; end: 10456ca27;  */

void FUN_10456ca04(void)

{
  FUN_10456c3ec();
  return;
}



/* Entry: 10456ca28; end: 10456ca4b;  */

void FUN_10456ca28(void)

{
  func_0x00010456c434();
  return;
}



/* Entry: 10456ca4c; end: 10456ca83;  */

void FUN_10456ca4c(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  func_0x0001045b2114();
  return;
}



/* Entry: 10456ca84; end: 10456cabb;  */

void FUN_10456ca84(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  FUN_1045b20b0();
  return;
}



/* Entry: 10456cabc; end: 10456cb13;  */

void FUN_10456cabc(long param_1,undefined8 param_2)

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



/* Entry: 10456cb14; end: 10456cb6b;  */

void FUN_10456cb14(long param_1,undefined8 param_2)

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



/* Entry: 10456cb6c; end: 10456cbc3;  */

void FUN_10456cb6c(long param_1,undefined8 param_2)

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



/* Entry: 10456cbc4; end: 10456cc3b;  */

void FUN_10456cbc4(long param_1,undefined8 param_2)

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



/* Entry: 10456cc3c; end: 10456cc9f;  */

void FUN_10456cc3c(void)

{
  FUN_10456c480();
  return;
}



/* Entry: 10456cca0; end: 10456cccf;  */

void FUN_10456cca0(void)

{
  __s10Foundation4DataV4hash4intoys6HasherVz_tF();
  return;
}



/* Entry: 10456ccd0; end: 10456cde7;  */

void FUN_10456ccd0(void)

{
  func_0x000100dbad94();
  return;
}



/* Entry: 10456cde8; end: 10456ce03;  */

undefined8 FUN_10456cde8(long param_1)

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
      FUN_104560f98(param_1,auStack_68);
      func_0x00010456d23c(auStack_68,auStack_90);
      lVar1 = lStack_70;
      uVar2 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lVar1 + 0x20))(uVar2,lVar1);
      if ((uVar2 & 1) == 0) {
        func_0x0001000834e4(auStack_90);
        return 0;
      }
      func_0x0001000834e4(auStack_90);
      param_1 = param_1 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}



/* Entry: 10456ce04; end: 10456d187;  */

bool FUN_10456ce04(undefined8 param_1,long param_2,undefined8 param_3)

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
  
  uVar8 = 0x113084cb8;
  func_0x00010002969c(0x113084cb8,&UNK_10dd16f00);
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_2,uVar8,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lStack_118 = *(long *)(lVar6 + -8);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  puStack_f8 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10456d188);
          (*pcVar4)();
        }
        if ((long)uStack_120 <= lVar7) {
          uStack_e8 = 0;
          uVar8 = 1;
          puVar12 = puStack_f8;
          lVar7 = uVar9 - 1;
          goto LAB_10456d03c;
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
    FUN_104560f98(lVar11 + uVar9 * 0x28,puVar12 + iVar1);
    uVar8 = 0;
LAB_10456d03c:
    lVar6 = lVar7;
    lVar11 = *(long *)(lVar5 + -8);
    (**(code **)(lVar11 + 0x38))(puVar12,uVar8,1,lVar5);
    (**(code **)(lStack_118 + 0x20))(lVar13,puVar12,lStack_110);
    lVar7 = lVar13;
    (**(code **)(lVar11 + 0x30))(lVar13,1,lVar5);
    if ((int)lVar7 == 1) {
      func_0x00010456d234(lStack_128,lVar10,lStack_148,lStack_100,uStack_108);
      goto LAB_10456d15c;
    }
    func_0x00010456d23c(lVar13 + *(int *)(lVar5 + 0x30),auStack_e0);
    lVar11 = lStack_c0;
    uVar9 = uStack_c8;
    func_0x0001000a8868(auStack_e0,uStack_c8);
    (**(code **)(lVar11 + 0x20))(uVar9,lVar11);
    if ((uVar9 & 1) == 0) {
      func_0x00010456d234(lStack_128,lVar10,lStack_148,lStack_100,uStack_108);
      (**(code **)(*(long *)(lStack_f0 + -8) + 8))(lVar13);
      func_0x0001000834e4(auStack_e0);
LAB_10456d15c:
      return (int)lVar7 == 1;
    }
    (**(code **)(*(long *)(lStack_f0 + -8) + 8))(lVar13);
    func_0x0001000834e4(auStack_e0);
    uStack_70 = uStack_e8;
  } while( true );
}



/* Entry: 10456d188; end: 10456d18f;  */

void FUN_10456d188(void)

{
  return;
}



/* Entry: 10456d190; end: 10456d233;  */

undefined8 FUN_10456d190(long param_1)

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
      FUN_104560f98(param_1,auStack_68);
      func_0x00010456d23c(auStack_68,auStack_90);
      lVar1 = lStack_70;
      uVar2 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lVar1 + 0x20))(uVar2,lVar1);
      if ((uVar2 & 1) == 0) {
        func_0x0001000834e4(auStack_90);
        return 0;
      }
      func_0x0001000834e4(auStack_90);
      param_1 = param_1 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}



/* Entry: 10456d234; end: 10456d263;  */

void FUN_10456d234(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10456d264; end: 10456d3af;  */

void FUN_10456d264(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10457e0a0();
  uVar1 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (uVar1 == 0) goto LAB_10456d2ec;
  }
  else if (uVar1 == unaff_x20[1] - lVar4) goto LAB_10456d2ec;
  if (*(char *)(lVar4 + uVar1) == '}') {
    if ((lVar4 == 0) || ((ulong)(unaff_x20[1] - lVar4) <= uVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10456d358);
      (*pcVar2)();
    }
    unaff_x20[2] = uVar1 + 1;
    lVar4 = unaff_x20[0xb] + 1;
    if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10456d35c);
      (*pcVar2)();
    }
    unaff_x20[0xb] = lVar4;
    if (lVar4 <= unaff_x20[4]) {
      return;
    }
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
               "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10456d3b0);
    (*pcVar2)();
  }
LAB_10456d2ec:
  lVar4 = unaff_x20[0xe];
  if ((lVar4 < 1) || (FUN_10457ed38(0x2c), unaff_x21 == 0)) {
    if (unaff_x20[0x10] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10456d364);
      (*pcVar2)();
    }
    lVar3 = unaff_x20[0xc];
    FUN_10457f9a8(unaff_x20[0x13],lVar3,unaff_x20[0xd]);
    if ((unaff_x21 == 0) && (((uint)lVar3 & 0xff) != 1)) {
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10456d360);
        (*pcVar2)();
      }
      unaff_x20[0xe] = lVar4 + 1;
    }
  }
  return;
}



/* Entry: 10456d3b0; end: 10456d447;  */

void FUN_10456d3b0(undefined4 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10457e0a0();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456d3ec;
  }
  else if (lVar2 != unaff_x20[1] - lVar3) {
LAB_10456d3ec:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_10456d438;
    }
  }
  FUN_10457bb8c();
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456d438:
  *param_2 = param_1;
  return;
}



/* Entry: 10456d448; end: 10456d5e3;  */

void FUN_10456d448(undefined8 param_1,ulong *param_2)

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
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_10456d4c4;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_10456d4c4;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar4 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_10456d4c4:
  uVar4 = 0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), (uVar4 & 1) != 0)) {
    return;
  }
  uVar4 = lVar1 - lVar8;
  do {
    FUN_10457bb8c();
    uVar7 = *param_2;
    uVar6 = uVar7;
    uVar9 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      func_0x0001002ecb70(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001002ecb70(uVar7,uVar6 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    *(int *)(uVar7 + uVar6 * 4 + 0x20) = (int)param_1;
    *param_2 = uVar7;
    FUN_10457e0a0();
    uVar6 = unaff_x20[2];
    if (lVar8 == 0) {
      if (uVar6 != 0) goto LAB_10456d514;
    }
    else if (uVar6 != uVar4) {
LAB_10456d514:
      if (*(char *)(lVar8 + uVar6) == ']') {
        if ((lVar8 != 0) && (uVar6 < uVar4)) {
          unaff_x20[2] = uVar6 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10456d5e4);
        (*pcVar3)();
      }
    }
    FUN_10457ed38(0x2c);
    param_1 = uVar9;
  } while( true );
}



/* Entry: 10456d5e4; end: 10456d67b;  */

void FUN_10456d5e4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10457e0a0();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456d620;
  }
  else if (lVar2 != unaff_x20[1] - lVar3) {
LAB_10456d620:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_10456d66c;
    }
  }
  FUN_10457b480();
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456d66c:
  *param_2 = param_1;
  return;
}



/* Entry: 10456d67c; end: 10456d817;  */

void FUN_10456d67c(undefined8 param_1,ulong *param_2)

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
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_10456d6f8;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_10456d6f8;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar4 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_10456d6f8:
  uVar4 = 0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), (uVar4 & 1) != 0)) {
    return;
  }
  uVar4 = lVar1 - lVar8;
  do {
    FUN_10457b480();
    uVar7 = *param_2;
    uVar6 = uVar7;
    uVar9 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001014dd0d8(uVar7,uVar6 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    *(undefined8 *)(uVar7 + uVar6 * 8 + 0x20) = param_1;
    *param_2 = uVar7;
    FUN_10457e0a0();
    uVar6 = unaff_x20[2];
    if (lVar8 == 0) {
      if (uVar6 != 0) goto LAB_10456d748;
    }
    else if (uVar6 != uVar4) {
LAB_10456d748:
      if (*(char *)(lVar8 + uVar6) == ']') {
        if ((lVar8 != 0) && (uVar6 < uVar4)) {
          unaff_x20[2] = uVar6 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10456d818);
        (*pcVar3)();
      }
    }
    FUN_10457ed38(0x2c);
    param_1 = uVar9;
  } while( true );
}



/* Entry: 10456d818; end: 10456d8f3;  */

void FUN_10456d818(int *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  piVar1 = param_1;
  FUN_10457e0a0();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 == 0) goto LAB_10456d894;
  }
  else if (lVar2 == unaff_x20[1] - lVar3) goto LAB_10456d894;
  if (*(char *)(lVar3 + lVar2) == 'n') {
    piVar1 = (int *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if (((ulong)piVar1 & 1) != 0) {
      *param_1 = 0;
      return;
    }
  }
LAB_10456d894:
  FUN_10457c1a4();
  if (unaff_x21 == 0) {
    if (piVar1 == (int *)(long)(int)piVar1) {
      *param_1 = (int)piVar1;
    }
    else {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,piVar1,0,0);
      piVar1[2] = 2;
      piVar1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 10456d8f4; end: 10456d987;  */

void FUN_10456d8f4(int *param_1)

{
  int *piVar1;
  long unaff_x21;
  
  piVar1 = param_1;
  func_0x00010457b2d0();
  if (((ulong)piVar1 & 1) == 0) {
    FUN_10457c1a4();
    if (unaff_x21 == 0) {
      if (piVar1 == (int *)(long)(int)piVar1) {
        *param_1 = (int)piVar1;
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        FUN_104540590();
        _swift_allocError(&UNK_110788c08,piVar1,0,0);
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



/* Entry: 10456d988; end: 10456db5f;  */

void FUN_10456d988(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_10456da00;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_10456da00;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar9 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
LAB_10456da00:
  puVar4 = (undefined8 *)0x5b;
  FUN_10457ed38();
  if ((unaff_x21 == 0) && (func_0x00010457b340(), ((ulong)puVar4 & 1) == 0)) {
    uVar9 = lVar1 - lVar8;
    while( true ) {
      FUN_10457c1a4();
      if (puVar4 != (undefined8 *)(long)(int)puVar4) break;
      uVar7 = *param_1;
      uVar6 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        FUN_10454e6b8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar6 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_10454e6b8(uVar7,uVar6 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
      *(int *)(uVar7 + uVar6 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar7;
      FUN_10457e0a0();
      uVar6 = unaff_x20[2];
      if (lVar8 == 0) {
        if (uVar6 != 0) goto LAB_10456da4c;
      }
      else if (uVar6 != uVar9) {
LAB_10456da4c:
        if (*(char *)(lVar8 + uVar6) == ']') {
          if ((lVar8 != 0) && (uVar6 < uVar9)) {
            unaff_x20[2] = uVar6 + 1;
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10456db60);
          (*pcVar3)();
        }
      }
      puVar4 = (undefined8 *)0x2c;
      FUN_10457ed38();
    }
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar4,0,0);
    puVar4[1] = 2;
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
}



/* Entry: 10456db60; end: 10456dc3b;  */

void FUN_10456db60(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  puVar1 = param_1;
  FUN_10457e0a0();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 == 0) goto LAB_10456dbdc;
  }
  else if (lVar2 == unaff_x20[1] - lVar3) goto LAB_10456dbdc;
  if (*(char *)(lVar3 + lVar2) == 'n') {
    puVar1 = (undefined8 *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if (((ulong)puVar1 & 1) != 0) {
      *(undefined4 *)param_1 = 0;
      return;
    }
  }
LAB_10456dbdc:
  func_0x00010457c1f4();
  if (unaff_x21 == 0) {
    if ((ulong)puVar1 >> 0x20 == 0) {
      *(int *)param_1 = (int)puVar1;
    }
    else {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar1,0,0);
      puVar1[1] = 2;
      *puVar1 = 0;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 10456dc3c; end: 10456de13;  */

void FUN_10456dc3c(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_10456dcb4;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_10456dcb4;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar9 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
LAB_10456dcb4:
  puVar4 = (undefined8 *)0x5b;
  FUN_10457ed38();
  if ((unaff_x21 == 0) && (func_0x00010457b340(), ((ulong)puVar4 & 1) == 0)) {
    uVar9 = lVar1 - lVar8;
    while (func_0x00010457c1f4(), (ulong)puVar4 >> 0x20 == 0) {
      uVar7 = *param_1;
      uVar6 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        func_0x00010454e6cc(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar6 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x00010454e6cc(uVar7,uVar6 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
      *(int *)(uVar7 + uVar6 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar7;
      FUN_10457e0a0();
      uVar6 = unaff_x20[2];
      if (lVar8 == 0) {
        if (uVar6 != 0) goto LAB_10456dd00;
      }
      else if (uVar6 != uVar9) {
LAB_10456dd00:
        if (*(char *)(lVar8 + uVar6) == ']') {
          if ((lVar8 != 0) && (uVar6 < uVar9)) {
            unaff_x20[2] = uVar6 + 1;
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10456de14);
          (*pcVar3)();
        }
      }
      puVar4 = (undefined8 *)0x2c;
      FUN_10457ed38();
    }
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar4,0,0);
    puVar4[1] = 2;
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
}



/* Entry: 10456de14; end: 10456deb7;  */

void FUN_10456de14(ulong *param_1,undefined8 param_2,code *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  puVar1 = param_1;
  FUN_10457e0a0();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456de5c;
  }
  else if (lVar2 != unaff_x20[1] - lVar3) {
LAB_10456de5c:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      puVar1 = (ulong *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = (ulong *)0x0;
        goto LAB_10456dea4;
      }
    }
  }
  (*param_3)();
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456dea4:
  *param_1 = (ulong)puVar1;
  return;
}



/* Entry: 10456deb8; end: 10456e06f;  */

void FUN_10456deb8(ulong *param_1,undefined8 param_2,code *param_3,code *param_4)

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
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    if (lVar2 == 0) goto LAB_10456df3c;
  }
  else if (lVar2 == lVar1 - lVar9) goto LAB_10456df3c;
  if (*(char *)(lVar9 + lVar2) == 'n') {
    uVar4 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_10456df3c:
  uVar4 = 0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), (uVar4 & 1) != 0)) {
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
    FUN_10457e0a0();
    uVar4 = unaff_x20[2];
    if (lVar9 == 0) {
      if (uVar4 != 0) goto LAB_10456df90;
    }
    else if (uVar4 != uVar7) {
LAB_10456df90:
      if (*(char *)(lVar9 + uVar4) == ']') {
        if ((lVar9 != 0) && (uVar4 < uVar7)) {
          unaff_x20[2] = uVar4 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10456e070);
        (*pcVar3)();
      }
    }
    uVar4 = 0x2c;
    FUN_10457ed38();
  } while( true );
}



/* Entry: 10456e070; end: 10456e127;  */

void FUN_10456e070(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  
  pbVar2 = param_1;
  FUN_10457e0a0();
  bVar1 = (byte)pbVar2;
  lVar4 = unaff_x20[2];
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    if (lVar4 == 0) goto LAB_10456e0f4;
  }
  else if (lVar4 == unaff_x20[1] - lVar5) goto LAB_10456e0f4;
  if (*(char *)(lVar5 + lVar4) == 'n') {
    uVar3 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    bVar1 = (byte)uVar3;
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
      return;
    }
  }
LAB_10456e0f4:
  if ((char)unaff_x20[0xf] == '\x01') {
    FUN_10457c714();
  }
  else {
    FUN_10457ba98();
  }
  if (unaff_x21 == 0) {
    *param_1 = bVar1 & 1;
  }
  return;
}



/* Entry: 10456e128; end: 10456e2bf;  */

void FUN_10456e128(ulong *param_1)

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
  
  FUN_10457e0a0();
  lVar1 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar2 == 0) goto LAB_10456e1a0;
  }
  else if (lVar2 == lVar1 - lVar8) goto LAB_10456e1a0;
  if (*(char *)(lVar8 + lVar2) == 'n') {
    uVar5 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_10456e1a0:
  uVar5 = 0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), (uVar5 & 1) != 0)) {
    return;
  }
  uVar9 = lVar1 - lVar8;
  do {
    bVar4 = (byte)uVar5;
    FUN_10457ba98();
    uVar7 = *param_1;
    uVar5 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      func_0x00010454e7d8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x00010454e7d8(uVar7,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
    *(byte *)(uVar7 + uVar5 + 0x20) = bVar4 & 1;
    *param_1 = uVar7;
    FUN_10457e0a0();
    uVar5 = unaff_x20[2];
    if (lVar8 == 0) {
      if (uVar5 != 0) goto LAB_10456e1ec;
    }
    else if (uVar5 != uVar9) {
LAB_10456e1ec:
      if (*(char *)(lVar8 + uVar5) == ']') {
        if ((lVar8 != 0) && (uVar5 < uVar9)) {
          unaff_x20[2] = uVar5 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10456e2c0);
        (*pcVar3)();
      }
    }
    uVar5 = 0;
    FUN_10457ed38();
  } while( true );
}



/* Entry: 10456e2c0; end: 10456e4c7;  */

void FUN_10456e2c0(ulong *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  
  FUN_10457e0a0();
  lVar5 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  lVar10 = *unaff_x20;
  if (lVar10 == 0) {
    if (lVar1 == 0) goto LAB_10456e33c;
  }
  else if (lVar1 == lVar5 - lVar10) goto LAB_10456e33c;
  if (*(char *)(lVar10 + lVar1) == 'n') {
    uVar6 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    param_2 = 0x113086380;
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
LAB_10456e33c:
  puVar3 = (undefined8 *)0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), ((ulong)puVar3 & 1) != 0)) {
    return;
  }
  uVar6 = lVar5 - lVar10;
  do {
    FUN_10457e0a0();
    uVar7 = unaff_x20[2];
    if (lVar10 == 0) {
      if (uVar7 == 0) goto LAB_10456e458;
    }
    else if (uVar7 == uVar6) {
LAB_10456e458:
      uVar8 = 0xd;
      goto LAB_10456e45c;
    }
    if ((*(char *)(lVar10 + uVar7) != '\"') || (FUN_10457e7d8(), param_2 == 0)) {
      uVar8 = 5;
LAB_10456e45c:
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar3,0,0);
      *puVar3 = 0;
      puVar3[1] = uVar8;
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
      func_0x0001000d182c(0,lVar5,1,uVar9);
    }
    uVar7 = *(ulong *)(uVar4 + 0x10);
    lVar1 = uVar7 + 1;
    uVar9 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar7) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      lVar5 = lVar1;
      func_0x0001000d182c(uVar9,lVar1,1,uVar4);
    }
    *(long *)(uVar9 + 0x10) = lVar1;
    lVar1 = uVar9 + uVar7 * 0x10;
    *(undefined8 **)(lVar1 + 0x20) = puVar3;
    *(long *)(lVar1 + 0x28) = param_2;
    *param_1 = uVar9;
    FUN_10457e0a0();
    uVar7 = unaff_x20[2];
    if (lVar10 == 0) {
      if (uVar7 != 0) goto LAB_10456e368;
    }
    else if (uVar7 != uVar6) {
LAB_10456e368:
      if (*(char *)(lVar10 + uVar7) == ']') {
        if ((lVar10 != 0) && (uVar7 < uVar6)) {
          unaff_x20[2] = uVar7 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10456e4c8);
        (*pcVar2)();
      }
    }
    puVar3 = (undefined8 *)0x2c;
    FUN_10457ed38();
    param_2 = lVar5;
  } while( true );
}



/* Entry: 10456e4c8; end: 10456e71f;  */

void FUN_10456e4c8(ulong *param_1)

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
  
  FUN_10457e0a0();
  plVar10 = unaff_x20 + 2;
  lVar8 = *plVar10;
  puVar2 = (undefined8 *)*unaff_x20;
  lVar3 = unaff_x20[1];
  if (puVar2 == (undefined8 *)0x0) {
    if (lVar8 == 0) goto LAB_10456e548;
  }
  else if (lVar8 == lVar3 - (long)puVar2) goto LAB_10456e548;
  if (*(char *)((long)puVar2 + lVar8) == 'n') {
    uVar5 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_10456e548:
  puVar6 = (undefined8 *)0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), ((ulong)puVar6 & 1) != 0)) {
    return;
  }
  pcVar9 = (char *)(lVar3 - (long)puVar2);
  do {
    FUN_10457e0a0();
    if (puVar2 == (undefined8 *)0x0) {
      if ((char *)unaff_x20[2] == (char *)0x0) goto LAB_10456e698;
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = pcVar9;
      if ((char *)unaff_x20[2] == pcVar9) {
LAB_10456e698:
        FUN_104540590();
        _swift_allocError(&UNK_110788c08,puVar6,0,0);
        puVar6[1] = 0xd;
        *puVar6 = 0;
        _swift_willThrow();
        return;
      }
    }
    puVar6 = puVar2;
    lVar8 = lVar3;
    FUN_10457cd04(puVar2,lVar3,plVar10,pcVar11);
    uVar12 = *param_1;
    func_0x00010006c00c();
    uVar5 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar12;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      func_0x000100f23260(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar5 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000100f23260(uVar12,uVar5 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar5 + 1;
    lVar1 = uVar12 + uVar5 * 0x10;
    *(undefined8 **)(lVar1 + 0x20) = puVar6;
    *(long *)(lVar1 + 0x28) = lVar8;
    *param_1 = uVar12;
    FUN_10457e0a0();
    pcVar11 = (char *)unaff_x20[2];
    if (puVar2 == (undefined8 *)0x0) {
      if ((pcVar11 != (char *)0x0) && (*pcVar11 == ']')) {
        func_0x00010006c090(puVar6,lVar8);
        goto LAB_10456e71c;
      }
    }
    else if ((pcVar11 != pcVar9) && (*(char *)((long)puVar2 + (long)pcVar11) == ']')) {
      func_0x00010006c090(puVar6,lVar8);
      if (pcVar11 < pcVar9) {
        *plVar10 = (long)(pcVar11 + 1);
        return;
      }
LAB_10456e71c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10456e720);
      (*pcVar4)();
    }
    FUN_10457ed38(0x2c);
    func_0x00010006c090(puVar6,lVar8);
  } while( true );
}



/* Entry: 10456e720; end: 10456e9d3;  */

void FUN_10456e720(undefined8 param_1,long param_2,undefined8 param_3)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_a0 + -extraout_x8;
  lVar9 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x00010457b2d0();
  if ((uVar2 & 1) == 0) {
    FUN_10457c8f4(puVar12,param_2,param_3);
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
    _swift_conformsToProtocol(param_2,&DAT_10e813964);
    uVar7 = uStack_98;
    if (lVar3 == 0) {
      (**(code **)(lVar10 + 8))(uStack_98,uVar1);
      (**(code **)(lVar9 + 0x38))(uVar7,1,1,param_2);
      return;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
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
      func_0x0001000c5db4(&uStack_90);
      (**(code **)(lVar9 + 0x20))();
    }
    uVar5 = 0x113084cc8;
    func_0x0001000285a8(0x113084cc8,&UNK_10dd16728);
    uVar6 = uVar7;
    _swift_dynamicCast(uVar7,&uStack_90,uVar5,param_2,6);
    pcVar11 = *(code **)(lVar9 + 0x38);
    uVar8 = (uint)uVar6 ^ 1;
  }
  (*pcVar11)(uVar7,uVar8,1,param_2);
  return;
}



/* Entry: 10456e9d4; end: 10456ec8b;  */

void FUN_10456e9d4(undefined8 param_1,long param_2,long param_3)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_a0 - extraout_x8;
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar7 - extraout_x12;
  func_0x00010457b2d0();
  if ((uVar1 & 1) == 0) {
    FUN_10457c8f4(lVar2,param_2,param_3);
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
    _swift_conformsToProtocol(param_2,&DAT_10e813964);
    if (lVar2 == 0) {
      (**(code **)(lVar6 + 8))(param_1,param_2);
      (**(code **)(param_3 + 0x18))(lVar4,param_2,param_3);
      (**(code **)(lVar6 + 0x20))(param_1,lVar4,param_2);
    }
    else {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
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
          func_0x0001000c5db4(&uStack_90);
          (**(code **)(lVar6 + 0x20))();
        }
        uVar3 = 0x113084cc8;
        func_0x0001000285a8(0x113084cc8,&UNK_10dd16728);
        _swift_dynamicCast(param_1,&uStack_90,uVar3,param_2,7);
      }
    }
  }
  return;
}



/* Entry: 10456ec8c; end: 10456f117;  */

/* WARNING: Removing unreachable block (ram,0x00010456f108) */

void FUN_10456ec8c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_b8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_e0 + -extraout_x8;
  lVar10 = param_2[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puStack_b0 = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = (undefined1 *)(lVar9 - extraout_x12_00);
  puStack_c0 = puVar6;
  FUN_10457e0a0();
  lVar9 = unaff_x20[1];
  lVar12 = unaff_x20[2];
  lVar11 = *unaff_x20;
  if (lVar11 == 0) {
    if (lVar12 == 0) goto LAB_10456edc4;
  }
  else if (lVar12 == lVar9 - lVar11) goto LAB_10456edc4;
  if (*(char *)(lVar11 + lVar12) == 'n') {
    uVar2 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
LAB_10456edc4:
  uVar2 = 0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), (uVar2 & 1) != 0)) {
    return;
  }
  uVar2 = lVar9 - lVar11;
  uStack_d8 = param_3;
  uStack_c8 = uVar2;
  do {
    FUN_10457e0a0();
    uVar7 = unaff_x20[2];
    if (lVar11 == 0) {
      if (uVar7 != 0) goto LAB_10456ee64;
LAB_10456ef4c:
      FUN_10457c8f4(puVar13,param_2,param_3);
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
      if (uVar7 == uVar2) goto LAB_10456ef4c;
LAB_10456ee64:
      if (*(char *)(lVar11 + uVar7) != 'n') goto LAB_10456ef4c;
      uVar7 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if ((uVar7 & 1) == 0) goto LAB_10456ef4c;
      puVar1 = param_2;
      _swift_conformsToProtocol(param_2,&DAT_10e813964);
      if (puVar1 == (undefined8 *)0x0) {
        FUN_104540590();
        _swift_allocError(&UNK_110788c08,puVar1,0,0);
        puVar1[1] = 10;
        *puVar1 = 0;
        _swift_willThrow();
        return;
      }
      puStack_d0 = puVar6;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
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
        func_0x0001000c5db4(&uStack_90);
        (**(code **)(lVar10 + 0x20))();
      }
      puVar6 = puStack_d0;
      uVar4 = 0x113084cc8;
      func_0x0001000285a8(0x113084cc8,&UNK_10dd16728);
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
    FUN_10457e0a0();
    uVar7 = unaff_x20[2];
    if (lVar11 == 0) {
      if (uVar7 != 0) goto LAB_10456ee20;
    }
    else if (uVar7 != uVar2) {
LAB_10456ee20:
      if (*(char *)(lVar11 + uVar7) == ']') {
        if ((lVar11 != 0) && (uVar7 < uVar2)) {
          unaff_x20[2] = uVar7 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10456f118);
        (*pcVar8)();
      }
    }
    FUN_10457ed38(0x2c);
  } while( true );
}



/* Entry: 10456f118; end: 10456f3c3;  */

void FUN_10456f118(undefined8 param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
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
  
  lVar3 = param_2[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_10e8147e0);
  if ((param_2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0x0)) {
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar2,0,0);
    uVar4 = 7;
  }
  else {
    (*(code *)puVar2[1])(&uStack_a0,param_2);
    FUN_104571bb4(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                  *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                  *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_88;
    *(undefined8 *)(unaff_x20 + 0x90) = uStack_90;
    *(undefined8 *)(unaff_x20 + 0xa8) = uStack_78;
    *(undefined8 *)(unaff_x20 + 0xa0) = uStack_80;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_98;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_a0;
    (**(code **)(lVar3 + 0x10))
              (auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
    uVar4 = 0x113084cc0;
    func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
    puVar2 = &uStack_f0;
    _swift_dynamicCast(puVar2,auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,uVar4
                       ,6);
    if ((int)puVar2 != 0) {
      func_0x000100dbaf20(&uStack_f0,auStack_c8);
      FUN_104571c20(auStack_c8,&uStack_f0);
      func_0x0001000c6518(&uStack_f0,uStack_d8);
      (**(code **)(lStack_d0 + 0x10))();
      func_0x0001000834e4(auStack_c8);
      if (unaff_x21 == 0) {
        (**(code **)(lVar3 + 8))(param_1,param_2);
        FUN_104571c20(&uStack_f0,auStack_118);
        _swift_dynamicCast(param_1,auStack_118,uVar4,param_2,7);
      }
      func_0x0001000834e4(&uStack_f0);
      return;
    }
    lStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_1045721d0(&uStack_f0,0x113084cc8,&UNK_10dd16728);
    puVar2 = (undefined8 *)0x7b;
    FUN_10457ed38();
    if (unaff_x21 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x58) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10456f3c4);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar3;
    if (-1 < lVar3) {
      FUN_10457b120();
      if (((ulong)puVar2 & 1) != 0) {
        return;
      }
      (**(code **)(param_3 + 0x40))();
      return;
    }
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar2,0,0);
    uVar4 = 0x13;
  }
  puVar2[1] = uVar4;
  *puVar2 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 10456f3c4; end: 10456f72b;  */

void FUN_10456f3c4(undefined8 param_1,long param_2,long param_3)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = &stack0xfffffffffffffed0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12_00;
  func_0x00010457b2d0();
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
    FUN_104571b10(unaff_x20,&uStack_120);
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
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10456f72c);
      (*pcVar9)();
    }
    FUN_10456f118(param_1,param_2,param_3);
    if (unaff_x21 == 0) {
      func_0x000104571b78(&uStack_120,unaff_x20);
    }
    func_0x000104571b4c(&uStack_120);
  }
  else {
    lVar6 = param_2;
    _swift_conformsToProtocol(param_2,&DAT_10e813964);
    if (lVar6 == 0 || param_2 == 0) {
      (**(code **)(lVar11 + 8))(param_1,uVar1);
      (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
    }
    else {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
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
          func_0x0001000c5db4(&uStack_120);
          (**(code **)(lVar7 + 0x20))();
        }
        uVar3 = 0x113084cc8;
        func_0x0001000285a8(0x113084cc8,&UNK_10dd16728);
        lVar6 = lVar5;
        _swift_dynamicCast(lVar5,&uStack_120,uVar3,param_2,6);
        (**(code **)(lVar7 + 0x38))(lVar5,(uint)lVar6 ^ 1,1,param_2);
        (**(code **)(lVar11 + 0x28))(param_1,lVar5,uVar1);
      }
    }
  }
  return;
}



/* Entry: 10456f72c; end: 10456fc8f;  */

/* WARNING: Removing unreachable block (ram,0x00010456fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010456fbbc) */

void FUN_10456f72c(undefined8 param_1,long param_2,long param_3)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_130 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_2 + -8);
  puStack_138 = (undefined8 *)((long)apuStack_160 - extraout_x8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = ((long)apuStack_160 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_128 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined1 *)((lVar10 - extraout_x12) - extraout_x12_00);
  puStack_140 = puVar8;
  FUN_10457e0a0();
  lVar3 = unaff_x20[1];
  lVar9 = unaff_x20[2];
  lVar11 = *unaff_x20;
  if (lVar11 == 0) {
    if (lVar9 == 0) goto LAB_10456f880;
  }
  else if (lVar9 == lVar3 - lVar11) goto LAB_10456f880;
  if (*(char *)(lVar11 + lVar9) == 'n') {
    uVar4 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_10456f880:
  uVar4 = 0x5b;
  FUN_10457ed38();
  if ((unaff_x21 != 0) || (func_0x00010457b340(), (uVar4 & 1) != 0)) {
    return;
  }
  do {
    FUN_10457e0a0();
    lVar9 = unaff_x20[2];
    if (lVar11 == 0) {
      if (lVar9 != 0) goto LAB_10456f8f4;
LAB_10456f9fc:
      (**(code **)(param_3 + 0x10))(lVar10,param_2,param_3);
      FUN_104571b10();
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
      FUN_10456f118(lVar10,param_2,param_3);
      lVar3 = lStack_128;
      (**(code **)(lVar12 + 0x10))(lStack_128,lVar10,param_2);
      uVar5 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar3,uVar5);
      (**(code **)(lVar12 + 8))(lVar10,param_2);
      func_0x000104571b78(&uStack_120);
      func_0x000104571b4c(&uStack_120);
    }
    else {
      if (lVar9 == lVar3 - lVar11) goto LAB_10456f9fc;
LAB_10456f8f4:
      if (*(char *)(lVar11 + lVar9) != 'n') goto LAB_10456f9fc;
      uVar4 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if ((uVar4 & 1) == 0) goto LAB_10456f9fc;
      lVar3 = param_2;
      _swift_conformsToProtocol(param_2,&DAT_10e813964);
      puVar7 = (undefined8 *)0x0;
      if (lVar3 == 0) {
LAB_10456fc34:
        FUN_104540590();
        _swift_allocError(&UNK_110788c08,puVar7,0,0);
        puVar7[1] = 10;
        *puVar7 = 0;
        _swift_willThrow();
        return;
      }
      apuStack_160[1] = puVar8;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
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
        func_0x0001000c5db4(&uStack_120);
        (**(code **)(lVar12 + 0x20))();
      }
      puVar7 = puStack_138;
      puVar8 = apuStack_160[1];
      uVar5 = 0x113084cc8;
      func_0x0001000285a8(0x113084cc8,&UNK_10dd16728);
      puVar6 = puVar7;
      _swift_dynamicCast(puVar7,&uStack_120,uVar5,param_2,6);
      if (((ulong)puVar6 & 1) == 0) {
        (**(code **)(lVar12 + 0x38))(puVar7,1,1,param_2);
        (**(code **)(lStack_150 + 8))(puVar7,lStack_148);
        goto LAB_10456fc34;
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
    FUN_10457e0a0();
    lVar3 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    lVar11 = *unaff_x20;
    if (lVar11 == 0) {
      if (uVar4 != 0) goto LAB_10456f8ac;
    }
    else if (uVar4 != lVar3 - lVar11) {
LAB_10456f8ac:
      if (*(char *)(lVar11 + uVar4) == ']') {
        if ((lVar11 != 0) && (uVar4 < (ulong)(lVar3 - lVar11))) {
          unaff_x20[2] = uVar4 + 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10456fc90);
        (*pcVar2)();
      }
    }
    FUN_10457ed38(0x2c);
  } while( true );
}



/* Entry: 10456fc90; end: 10456fcb7;  */

void FUN_10456fc90(void)

{
  FUN_10456f3c4();
  return;
}



/* Entry: 10456fcb8; end: 104570477;  */

/* WARNING: Removing unreachable block (ram,0x0001045702d0) */
/* WARNING: Removing unreachable block (ram,0x0001045702a0) */
/* WARNING: Removing unreachable block (ram,0x0001045702b8) */
/* WARNING: Removing unreachable block (ram,0x0001045702a4) */

void FUN_10456fcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 auStack_110 [2];
  undefined8 *apuStack_100 [2];
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
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_b8 = *(long *)(param_5 + 8);
  lVar2 = 0;
  uStack_d0 = param_1;
  uStack_b0 = param_3;
  _swift_getAssociatedTypeWitness();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lStack_98 = *(long *)(param_4 + 8);
  puVar3 = (undefined8 *)0x0;
  lStack_d8 = (long)apuStack_100 - extraout_x8;
  uStack_90 = param_2;
  _swift_getAssociatedTypeWitness(0,lStack_98,param_2,&UNK_10e814078,&UNK_10e814088);
  lStack_68 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar15 = ((long)apuStack_100 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar15 - extraout_x12;
  lVar4 = 0;
  lStack_c8 = lVar12;
  __sSqMa(0,lVar2);
  lStack_a8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined8 *)(lVar12 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar16 - extraout_x12_01;
  puVar5 = (undefined8 *)0x0;
  puVar8 = puVar3;
  lStack_78 = lVar12;
  __sSqMa();
  lStack_88 = puVar5[-1];
  puStack_80 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  puVar5 = (undefined8 *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_c0 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)((long)puVar5 - extraout_x12_02);
  puStack_70 = puVar5;
  FUN_10457e0a0();
  lVar12 = unaff_x20[2];
  lVar13 = *unaff_x20;
  if (lVar13 == 0) {
    if (lVar12 == 0) goto LAB_10456fefc;
  }
  else if (lVar12 == unaff_x20[1] - lVar13) goto LAB_10456fefc;
  if (*(char *)(lVar13 + lVar12) == 'n') {
    uVar6 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    puVar8 = (undefined8 *)0x1130862c0;
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
LAB_10456fefc:
  puVar7 = (undefined8 *)0x7b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar12 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10457041c);
      (*pcVar14)();
    }
    unaff_x20[0xb] = lVar12;
    if (lVar12 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar7,0,0);
      uVar11 = 0x13;
LAB_10456ff64:
      puVar7[1] = uVar11;
      *puVar7 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10457b120();
      if (((ulong)puVar7 & 1) == 0) {
        FUN_10457b3ac();
        apuStack_100[1] = puVar16;
        lStack_f0 = lVar15;
        lStack_e8 = lVar4;
        do {
          lVar4 = lStack_f0;
          puVar16 = apuStack_100[1];
          if ((puVar7 == (undefined8 *)0x22) && (puVar8 == (undefined8 *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)puVar7 & 1) == 0) {
              FUN_104540590();
              _swift_allocError(&UNK_110788c08,puVar8,0,0);
              uVar11 = 0xb;
              puVar7 = puVar8;
              goto LAB_10456ff64;
            }
          }
          puVar8 = puStack_70;
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lStack_68 + 0x38))(puStack_70,1,1,puVar3);
          (**(code **)(lStack_98 + 0x20))(puVar8);
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_10457ed38(0x3a);
          lVar12 = lStack_78;
          pcVar14 = *(code **)(lStack_a0 + 0x38);
          (*pcVar14)(lStack_78,1,1,lVar2);
          (**(code **)(lStack_b8 + 0x20))(lVar12);
          puVar8 = puStack_c0;
          (**(code **)(lStack_88 + 0x10))(puStack_c0,puStack_70,puStack_80);
          puVar9 = puVar8;
          (**(code **)(lStack_68 + 0x30))(puVar8,1,puVar3);
          puVar7 = puStack_80;
          lVar13 = lStack_88;
          lVar12 = lStack_c8;
          if ((int)puVar9 == 1) {
            (**(code **)(lStack_88 + 8))(puVar8,puStack_80);
            lVar2 = lStack_e8;
            lVar4 = lStack_a8;
LAB_104570334:
            FUN_104540590();
            _swift_allocError(&UNK_110788c08,puVar8,0,0);
            puVar8[1] = 3;
            *puVar8 = 0;
            _swift_willThrow();
            (**(code **)(lVar4 + 8))(lStack_78,lVar2);
            (**(code **)(lVar13 + 8))(puStack_70,puVar7);
            return;
          }
          (**(code **)(lStack_68 + 0x20))(lStack_c8,puVar8,puVar3);
          (**(code **)(lStack_a8 + 0x10))(puVar16,lStack_78,lStack_e8);
          lVar15 = lStack_a0;
          puVar8 = puVar16;
          (**(code **)(lStack_a0 + 0x30))(puVar16,1,lVar2);
          lVar13 = lStack_d8;
          if ((int)puVar8 == 1) {
            (**(code **)(lStack_68 + 8))(lVar12,puVar3);
            lVar4 = lStack_a8;
            lVar2 = lStack_e8;
            (**(code **)(lStack_a8 + 8))(puVar16,lStack_e8);
            puVar8 = puVar16;
            puVar7 = puStack_80;
            lVar13 = lStack_88;
            goto LAB_104570334;
          }
          (**(code **)(lVar15 + 0x20))(lStack_d8,puVar16,lVar2);
          (**(code **)(lStack_68 + 0x10))(lVar4,lVar12,puVar3);
          lVar1 = lStack_e0;
          (**(code **)(lVar15 + 0x10))(lStack_e0,lVar13,lVar2);
          (*pcVar14)(lVar1,0,1,lVar2);
          lVar10 = lStack_98;
          _swift_getAssociatedConformanceWitness
                    (lStack_98,uStack_90,puVar3,&UNK_10e814078,&UNK_10e814080);
          uVar11 = 0;
          __sSDMa(0,puVar3,lVar2,lVar10);
          __sSDyq_Sgxcis(lVar1,lVar4,uVar11);
          (**(code **)(lVar15 + 8))(lVar13,lVar2);
          (**(code **)(lStack_68 + 8))(lVar12,puVar3);
          FUN_10457e0a0();
          lVar4 = lStack_e8;
          uVar6 = unaff_x20[2];
          lVar12 = *unaff_x20;
          if (lVar12 == 0) {
            if (uVar6 != 0) goto LAB_104570248;
          }
          else if (uVar6 != unaff_x20[1] - lVar12) {
LAB_104570248:
            if (*(char *)(lVar12 + uVar6) == '}') {
              if ((lVar12 == 0) || ((ulong)(unaff_x20[1] - lVar12) <= uVar6)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x104570420);
                (*pcVar14)();
              }
              unaff_x20[2] = uVar6 + 1;
              lVar2 = unaff_x20[0xb] + 1;
              if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x104570424);
                (*pcVar14)();
              }
              unaff_x20[0xb] = lVar2;
              if (lVar2 <= unaff_x20[4]) {
                (**(code **)(lStack_a8 + 8))(lStack_78,lStack_e8);
                (**(code **)(lStack_88 + 8))(puStack_70,puStack_80);
                return;
              }
              *(undefined4 *)(puVar5 + -1) = 0;
              puVar5[-2] = 0x1ab;
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x104570478);
              (*pcVar14)();
            }
          }
          FUN_10457ed38(0x2c);
          (**(code **)(lStack_a8 + 8))(lStack_78,lVar4);
          puVar7 = puStack_70;
          puVar8 = puStack_80;
          (**(code **)(lStack_88 + 8))();
          FUN_10457b3ac();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 104570478; end: 104570c07;  */

/* WARNING: Removing unreachable block (ram,0x000104570ab8) */
/* WARNING: Removing unreachable block (ram,0x000104570ad8) */
/* WARNING: Removing unreachable block (ram,0x000104570a14) */
/* WARNING: Removing unreachable block (ram,0x000104570a50) */
/* WARNING: Removing unreachable block (ram,0x000104570b08) */

void FUN_104570478(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long unaff_x21;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined8 auStack_100 [2];
  long alStack_f0 [2];
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
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
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_a8 = *(long *)(param_3 + -8);
  lVar9 = param_3;
  uStack_b8 = param_1;
  uStack_a0 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar15 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSqMa(0,lVar9);
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar9 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  lStack_90 = *(long *)(param_4 + 8);
  puVar3 = (undefined8 *)0x0;
  uStack_88 = param_2;
  _swift_getAssociatedTypeWitness(0,lStack_90,param_2,&UNK_10e814078,&UNK_10e814088);
  lVar2 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_01;
  puVar4 = (undefined8 *)0x0;
  puVar7 = puVar3;
  lStack_68 = lVar10;
  __sSqMa();
  lVar13 = puVar4[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_98 = puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (undefined8 *)((long)puVar11 - extraout_x12_02);
  puStack_70 = puVar11;
  FUN_10457e0a0();
  lVar10 = unaff_x20[2];
  lVar12 = *unaff_x20;
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_10457069c;
  }
  else if (lVar10 == unaff_x20[1] - lVar12) goto LAB_10457069c;
  if (*(char *)(lVar12 + lVar10) == 'n') {
    uVar5 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    puVar7 = (undefined8 *)0x113086290;
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_10457069c:
  puVar6 = (undefined8 *)0x7b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar10 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x104570bac);
      (*pcVar14)();
    }
    unaff_x20[0xb] = lVar10;
    if (lVar10 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar6,0,0);
      uVar8 = 0x13;
LAB_104570a40:
      puVar6[1] = uVar8;
      *puVar6 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10457b120();
      if (((ulong)puVar6 & 1) == 0) {
        FUN_10457b3ac();
        alStack_f0[1] = lVar9;
        puStack_e0 = puVar3;
        puStack_d8 = puVar4;
        lStack_d0 = lVar13;
        do {
          if ((puVar6 == (undefined8 *)0x22) && (puVar7 == (undefined8 *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)puVar6 & 1) == 0) {
              FUN_104540590();
              _swift_allocError(&UNK_110788c08,puVar7,0,0);
              uVar8 = 0xb;
              puVar6 = puVar7;
              goto LAB_104570a40;
            }
          }
          puVar6 = puStack_70;
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar2 + 0x38))(puStack_70,1,1,puVar3);
          (**(code **)(lStack_90 + 0x20))(puVar6);
          puVar4 = puStack_98;
          puVar7 = puStack_d8;
          (**(code **)(lStack_d0 + 0x10))(puStack_98,puVar6,puStack_d8);
          puVar6 = puVar4;
          (**(code **)(lVar2 + 0x30))(puVar4,1,puVar3);
          if ((int)puVar6 == 1) {
            pcVar14 = *(code **)(lStack_d0 + 8);
            (*pcVar14)(puVar4,puVar7);
            FUN_104540590();
            _swift_allocError(&UNK_110788c08,puVar4,0,0);
            puVar4[1] = 3;
            *puVar4 = 0;
            _swift_willThrow();
            (*pcVar14)(puStack_70,puVar7);
            return;
          }
          (**(code **)(lVar2 + 0x20))(lStack_68,puVar4,puVar3);
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_10457ed38(0x3a);
          lVar12 = lStack_a8;
          pcVar14 = *(code **)(lStack_a8 + 0x38);
          (*pcVar14)(lVar9,1,1,param_3);
          FUN_10456e720(lVar9,param_3,uStack_a0);
          lVar1 = lStack_78;
          lVar13 = lStack_80;
          lVar10 = lStack_b0;
          (**(code **)(lStack_80 + 0x10))(lStack_b0,lVar9,lStack_78);
          lVar9 = lVar10;
          (**(code **)(lVar12 + 0x30))(lVar10,1,param_3);
          if ((int)lVar9 == 1) {
            (**(code **)(lVar13 + 8))(lVar10,lVar1);
            puVar3 = puStack_e0;
          }
          else {
            (**(code **)(lVar12 + 0x20))(lVar15,lVar10,param_3);
            lVar9 = lStack_c8;
            puVar3 = puStack_e0;
            (**(code **)(lVar2 + 0x10))(lStack_c8,lStack_68,puStack_e0);
            lVar10 = lStack_c0;
            (**(code **)(lVar12 + 0x10))(lStack_c0,lVar15,param_3);
            (*pcVar14)(lVar10,0,1,param_3);
            lVar13 = lStack_90;
            _swift_getAssociatedConformanceWitness
                      (lStack_90,uStack_88,puVar3,&UNK_10e814078,&UNK_10e814080);
            uVar8 = 0;
            __sSDMa(0,puVar3,param_3,lVar13);
            __sSDyq_Sgxcis(lVar10,lVar9,uVar8);
            (**(code **)(lVar12 + 8))(lVar15,param_3);
          }
          FUN_10457e0a0();
          lVar10 = lStack_d0;
          puVar7 = puStack_d8;
          lVar9 = alStack_f0[1];
          uVar5 = unaff_x20[2];
          lVar12 = *unaff_x20;
          if (lVar12 == 0) {
            if (uVar5 != 0) goto LAB_1045709a8;
          }
          else if (uVar5 != unaff_x20[1] - lVar12) {
LAB_1045709a8:
            if (*(char *)(lVar12 + uVar5) == '}') {
              if ((lVar12 == 0) || ((ulong)(unaff_x20[1] - lVar12) <= uVar5)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x104570bb0);
                (*pcVar14)();
              }
              unaff_x20[2] = uVar5 + 1;
              lVar9 = unaff_x20[0xb] + 1;
              if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x104570bb4);
                (*pcVar14)();
              }
              unaff_x20[0xb] = lVar9;
              if (lVar9 <= unaff_x20[4]) {
                (**(code **)(lStack_80 + 8))(alStack_f0[1],lStack_78);
                (**(code **)(lVar2 + 8))(lStack_68,puVar3);
                (**(code **)(lVar10 + 8))(puStack_70,puVar7);
                return;
              }
              *(undefined4 *)(puVar11 + -1) = 0;
              puVar11[-2] = 0x1ab;
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x104570c08);
              (*pcVar14)();
            }
          }
          FUN_10457ed38(0x2c);
          (**(code **)(lStack_80 + 8))(lVar9,lStack_78);
          (**(code **)(lVar2 + 8))(lStack_68,puVar3);
          puVar6 = puStack_70;
          (**(code **)(lVar10 + 8))();
          FUN_10457b3ac();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 104570c08; end: 104571397;  */

/* WARNING: Removing unreachable block (ram,0x0001045711c8) */
/* WARNING: Removing unreachable block (ram,0x0001045711e0) */
/* WARNING: Removing unreachable block (ram,0x0001045711f4) */

void FUN_104570c08(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar13;
  long *unaff_x20;
  long unaff_x21;
  long lVar14;
  long lVar15;
  undefined8 auStack_100 [2];
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
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_88 = *(long *)(param_3 + -8);
  uStack_b0 = param_1;
  uStack_98 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar9 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(param_4 + 8);
  puVar2 = (undefined8 *)0x0;
  lStack_b8 = lVar9;
  uStack_80 = param_2;
  _swift_getAssociatedTypeWitness(0,lVar14);
  lVar15 = puVar2[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lVar3 = 0;
  __sSqMa(0,param_3);
  lStack_90 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12_00);
  puStack_a8 = puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar11 - extraout_x12_01;
  puVar4 = (undefined8 *)0x0;
  puVar11 = puVar2;
  lStack_68 = lVar10;
  __sSqMa();
  lStack_78 = puVar4[-1];
  puStack_70 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar4 = (undefined8 *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_a0 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)((long)puVar4 - extraout_x12_02);
  FUN_10457e0a0();
  lVar10 = unaff_x20[2];
  lVar12 = *unaff_x20;
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_104570e2c;
  }
  else if (lVar10 == unaff_x20[1] - lVar12) goto LAB_104570e2c;
  if (*(char *)(lVar12 + lVar10) == 'n') {
    uVar5 = 0;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    puVar11 = (undefined8 *)0x113086260;
    _swift_initStaticObject();
    FUN_10457eae4();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
LAB_104570e2c:
  puVar6 = (undefined8 *)0x7b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar10 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10457133c);
      (*pcVar1)();
    }
    unaff_x20[0xb] = lVar10;
    if (lVar10 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar6,0,0);
      uVar8 = 0x13;
LAB_104570e94:
      puVar6[1] = uVar8;
      *puVar6 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10457b120();
      if (((ulong)puVar6 & 1) == 0) {
        FUN_10457b3ac();
        pcVar1 = (code *)0x0;
        alStack_f0[0] = lVar14;
        alStack_f0[1] = lVar9;
        alStack_f0[2] = lVar15;
        lStack_d0 = lVar3;
        do {
          lVar3 = alStack_f0[0];
          pcStack_d8 = pcVar1;
          if ((puVar6 == (undefined8 *)0x22) && (puVar11 == (undefined8 *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)puVar6 & 1) == 0) {
              FUN_104540590();
              _swift_allocError(&UNK_110788c08,puVar11,0,0);
              uVar8 = 0xb;
              puVar6 = puVar11;
              goto LAB_104570e94;
            }
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar15 + 0x38))(puVar4,1,1,puVar2);
          pcVar1 = pcStack_d8;
          (**(code **)(lVar3 + 0x20))(puVar4);
          if (pcVar1 != (code *)0x0) {
            pcVar1 = *(code **)(lStack_78 + 8);
            puVar11 = puStack_70;
            goto LAB_1045712ac;
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_10457ed38(0x3a);
          lVar10 = lStack_68;
          pcVar13 = *(code **)(lStack_88 + 0x38);
          (*pcVar13)(lStack_68,1,1,param_3);
          FUN_10456f3c4(lVar10,param_3,uStack_98);
          lVar10 = lStack_78;
          puVar6 = puStack_a0;
          pcStack_d8 = pcVar13;
          (**(code **)(lStack_78 + 0x10))(puStack_a0,puVar4,puStack_70);
          puVar7 = puVar6;
          (**(code **)(lVar15 + 0x30))(puVar6,1,puVar2);
          puVar11 = puStack_70;
          if ((int)puVar7 == 1) {
            (**(code **)(lVar10 + 8))(puVar6,puStack_70);
            lVar9 = lStack_d0;
            lVar15 = lStack_90;
LAB_10457125c:
            FUN_104540590();
            _swift_allocError(&UNK_110788c08,puVar6,0,0);
            puVar6[1] = 3;
            *puVar6 = 0;
            _swift_willThrow();
            (**(code **)(lVar15 + 8))(lStack_68,lVar9);
            pcVar1 = *(code **)(lVar10 + 8);
LAB_1045712ac:
            (*pcVar1)(puVar4,puVar11);
            return;
          }
          (**(code **)(lVar15 + 0x20))(lVar9,puVar6,puVar2);
          puVar6 = puStack_a8;
          (**(code **)(lStack_90 + 0x10))(puStack_a8,lStack_68,lStack_d0);
          lVar12 = lStack_88;
          puVar11 = puVar6;
          (**(code **)(lStack_88 + 0x30))(puVar6,1,param_3);
          lVar10 = lStack_b8;
          if ((int)puVar11 == 1) {
            (**(code **)(lVar15 + 8))(lVar9,puVar2);
            lVar15 = lStack_90;
            lVar9 = lStack_d0;
            (**(code **)(lStack_90 + 8))(puVar6,lStack_d0);
            puVar11 = puStack_70;
            lVar10 = lStack_78;
            goto LAB_10457125c;
          }
          (**(code **)(lVar12 + 0x20))(lStack_b8,puVar6,param_3);
          lVar14 = lStack_c0;
          (**(code **)(alStack_f0[2] + 0x10))(lStack_c0,alStack_f0[1],puVar2);
          lVar15 = lStack_c8;
          (**(code **)(lVar12 + 0x10))(lStack_c8,lVar10,param_3);
          (*pcStack_d8)(lVar15,0,1,param_3);
          _swift_getAssociatedConformanceWitness
                    (lVar3,uStack_80,puVar2,&UNK_10e814078,&UNK_10e814080);
          uVar8 = 0;
          __sSDMa(0,puVar2,param_3,lVar3);
          lVar9 = alStack_f0[1];
          __sSDyq_Sgxcis(lVar15,lVar14,uVar8);
          lVar15 = alStack_f0[2];
          (**(code **)(lVar12 + 8))(lVar10,param_3);
          (**(code **)(lVar15 + 8))(lVar9,puVar2);
          FUN_10457e0a0();
          lVar10 = lStack_78;
          lVar3 = lStack_d0;
          uVar5 = unaff_x20[2];
          lVar12 = *unaff_x20;
          if (lVar12 == 0) {
            if (uVar5 != 0) {
LAB_104571170:
              if (*(char *)(lVar12 + uVar5) == '}') {
                if ((lVar12 == 0) || ((ulong)(unaff_x20[1] - lVar12) <= uVar5)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x104571340);
                  (*pcVar1)();
                }
                unaff_x20[2] = uVar5 + 1;
                lVar9 = unaff_x20[0xb] + 1;
                if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x104571344);
                  (*pcVar1)();
                }
                unaff_x20[0xb] = lVar9;
                if (lVar9 <= unaff_x20[4]) {
                  (**(code **)(lStack_90 + 8))(lStack_68,lStack_d0);
                  (**(code **)(lVar10 + 8))(puVar4,puStack_70);
                  return;
                }
                *(undefined4 *)(puVar4 + -1) = 0;
                puVar4[-2] = 0x1ab;
                __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                          ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                           "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104571398);
                (*pcVar1)();
              }
            }
          }
          else if (uVar5 != unaff_x20[1] - lVar12) goto LAB_104571170;
          FUN_10457ed38(0x2c);
          (**(code **)(lStack_90 + 8))(lStack_68,lVar3);
          puVar6 = puVar4;
          puVar11 = puStack_70;
          (**(code **)(lStack_78 + 8))();
          FUN_10457b3ac();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 104571398; end: 10457147b;  */

void FUN_104571398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x0001000a8868(unaff_x20 + 0x30,uVar1);
  (**(code **)(lVar2 + 8))(auStack_a0,param_2,param_3,param_4,uVar1,lVar2);
  if (lStack_88 != 0) {
    func_0x000100dbaf20(auStack_a0,auStack_78);
    FUN_10454d0d0(auStack_a0,param_4);
    FUN_10457147c(param_4);
    (*pcVar3)(auStack_a0,0);
    func_0x0001000834e4(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10457147c);
  (*pcVar3)();
}



/* Entry: 10457147c; end: 10457158f;  */

void FUN_10457147c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  FUN_1045580b0(param_1,auStack_68);
  FUN_1045721d0(auStack_68,0x112db4800,&UNK_10d95efc0);
  if (lStack_50 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar3 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    (**(code **)(lVar3 + 0x20))(auStack_68,param_2,&UNK_110788978,&PTR_DAT_1107889a0,uVar1,lVar3);
    if (unaff_x21 == 0) {
      func_0x00010454d444(auStack_68,param_1);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104571590);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x0001000c6518(param_1,lVar3);
    (**(code **)(lVar4 + 0x28))(param_2,&UNK_110788978,&PTR_DAT_1107889a0,lVar3,lVar4);
  }
  return;
}



/* Entry: 104571590; end: 1045715df;  */

void FUN_104571590(undefined8 *param_1)

{
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 0x12;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 1045715e0; end: 104571607;  */

void FUN_1045715e0(void)

{
  FUN_10456d264();
  return;
}



/* Entry: 104571608; end: 104571657;  */

void FUN_104571608(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  uVar1 = (uint)param_2;
  func_0x00010457b2d0();
  if ((uVar1 & 1) == 0) {
    FUN_10457bb8c();
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



/* Entry: 104571658; end: 10457167f;  */

void FUN_104571658(void)

{
  FUN_10456d448();
  return;
}



/* Entry: 104571680; end: 1045716cf;  */

void FUN_104571680(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  uVar1 = (uint)param_2;
  func_0x00010457b2d0();
  if ((uVar1 & 1) == 0) {
    FUN_10457b480();
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



/* Entry: 1045716d0; end: 1045716f7;  */

void FUN_1045716d0(void)

{
  FUN_10456d67c();
  return;
}



/* Entry: 1045716f8; end: 10457178b;  */

void FUN_1045716f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00010457b2d0();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010457c1f4();
    if (unaff_x21 == 0) {
      if ((ulong)puVar1 >> 0x20 == 0) {
        *(int *)param_1 = (int)puVar1;
        *(undefined1 *)((long)param_1 + 4) = 0;
      }
      else {
        FUN_104540590();
        _swift_allocError(&UNK_110788c08,puVar1,0,0);
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



/* Entry: 10457178c; end: 1045717e7;  */

void FUN_10457178c(ulong *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00010457b2d0();
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



/* Entry: 1045717e8; end: 1045717fb;  */

void FUN_1045717e8(void)

{
  FUN_10456e070();
  return;
}



/* Entry: 1045717fc; end: 10457185f;  */

void FUN_1045717fc(byte *param_1)

{
  byte bVar1;
  long unaff_x20;
  long unaff_x21;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  func_0x00010457b2d0();
  bVar1 = (byte)uVar2;
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0x78) & 1) == 0) {
      FUN_10457ba98();
    }
    else {
      FUN_10457c714();
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



/* Entry: 104571860; end: 104571873;  */

void FUN_104571860(void)

{
  FUN_10456e128();
  return;
}



/* Entry: 104571874; end: 1045718d7;  */

void FUN_104571874(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00010457b2d0();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10457b090();
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



/* Entry: 1045718d8; end: 104571943;  */

void FUN_1045718d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00010457b2d0();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10457b090();
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



/* Entry: 104571944; end: 104571957;  */

void FUN_104571944(void)

{
  FUN_10456e2c0();
  return;
}



/* Entry: 104571958; end: 1045719bb;  */

void FUN_104571958(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00010457b2d0();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10457c864();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    param_2 = 0xc000000000000000;
  }
  func_0x00010006c090(*param_1,param_1[1]);
  *param_1 = puVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 1045719bc; end: 104571a1f;  */

void FUN_1045719bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = param_1;
  func_0x00010457b2d0();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10457c864();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    param_2 = 0xf000000000000000;
  }
  func_0x0001000b44c0(*param_1,param_1[1]);
  *param_1 = puVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 104571a20; end: 104571b0f;  */

void FUN_104571a20(void)

{
  FUN_10456e4c8();
  return;
}



/* Entry: 104571b10; end: 104571bb3;  */

undefined8 FUN_104571b10(undefined8 param_1,undefined8 param_2)

{
  FUN_10457f798(param_2,param_1);
  return param_2;
}



/* Entry: 104571bb4; end: 104571c1f;  */

void FUN_104571bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
    return;
  }
  return;
}



/* Entry: 104571c20; end: 104571cf7;  */

long FUN_104571c20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104571cf8; end: 104571fc7;  */

undefined8 * FUN_104571cf8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104571fc8; end: 104571ffb;  */

undefined8 FUN_104571fc8(undefined8 param_1)

{
  FUN_10458f39c();
  return param_1;
}



/* Entry: 104571ffc; end: 10457210b;  */

undefined8 * FUN_104571ffc(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001000834e4(param_1 + 6);
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
    FUN_104571fc8(plVar3);
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



/* Entry: 10457210c; end: 1045721cf;  */

int FUN_10457210c(int *param_1,int param_2)

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



/* Entry: 1045721d0; end: 10457220f;  */

undefined8 FUN_1045721d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104572210; end: 104572453;  */

void FUN_104572210(void)

{
  func_0x000100dbadd0();
  return;
}



/* Entry: 104572454; end: 10457247b;  */

void FUN_104572454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10457247c; end: 1045725df;  */

undefined8 * FUN_10457247c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1045725e0; end: 1045726db;  */

int FUN_1045725e0(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffeb < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffec;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0x14 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0x13;
  }
  return iVar1;
}



/* Entry: 1045726dc; end: 1045727d3;  */

void FUN_1045726dc(void)

{
  return;
}



/* Entry: 1045727d4; end: 10457301f;  */

void FUN_1045727d4(undefined8 ******param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong *unaff_x20;
  ulong uVar13;
  undefined8 ******ppppppuVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *****pppppuStack_70;
  ulong uStack_68;
  
  uVar13 = *unaff_x20;
  uVar4 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar4 = *(ulong *)(uVar8 + 0x10);
  uVar13 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001014d97ac(uVar13,uVar4 + 1,1,uVar8);
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar13 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar13;
  uVar4 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    _swift_bridgeObjectRetain(param_2);
    lVar18 = 0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          ppppppuVar14 = (undefined8 ******)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppppuVar14 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppppuStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          ppppppuVar14 = &pppppuStack_70;
        }
        pbVar9 = (byte *)((long)ppppppuVar14 + lVar18);
        uVar16 = (uint)*pbVar9;
        if ((char)*pbVar9 < '\0') {
          uVar10 = (uint)LZCOUNT(uVar16 << 0x18 ^ 0xffffffff);
          if (uVar10 < 3) {
            if (uVar10 != 1) {
              uVar16 = pbVar9[1] & 0x3f | (uVar16 & 0x1f) << 6;
              ppppppuVar14 = (undefined8 ******)0x2;
              goto joined_r0x00010457297c;
            }
            goto LAB_104572918;
          }
          if (uVar10 == 3) {
            uVar16 = (uVar16 & 0xf) << 0xc | (pbVar9[1] & 0x3f) << 6 | pbVar9[2] & 0x3f;
            ppppppuVar14 = (undefined8 ******)0x3;
joined_r0x00010457297c:
            uVar8 = (ulong)uVar16;
            if (0xb < uVar16) goto LAB_1045728c4;
            goto LAB_104572924;
          }
          uVar16 = (uVar16 & 0xf) << 0x12 | (pbVar9[1] & 0x3f) << 0xc | (pbVar9[2] & 0x3f) << 6 |
                   pbVar9[3] & 0x3f;
          ppppppuVar14 = (undefined8 ******)0x4;
        }
        else {
LAB_104572918:
          ppppppuVar14 = (undefined8 ******)0x1;
        }
        uVar8 = (ulong)uVar16;
        if (uVar16 < 0xc) goto LAB_104572924;
LAB_1045728c4:
        iVar15 = (int)uVar8;
        if (0x21 < iVar15) {
          if (iVar15 == 0x22) {
            puVar5 = &DAT_10f47f5ef;
          }
          else {
            if (iVar15 != 0x5c) goto LAB_104572984;
            puVar5 = &DAT_10f47f5f4;
          }
          goto LAB_104572878;
        }
        if (iVar15 == 0xc) {
          puVar5 = &UNK_10f580d6a;
          goto LAB_104572878;
        }
        if (iVar15 == 0xd) {
          puVar5 = &DAT_10f47f594;
          goto LAB_104572878;
        }
LAB_104572984:
        uVar16 = (uint)uVar8;
        if ((uVar16 < 0x20) || (uVar16 - 0x7f < 0x21)) {
          FUN_104540d74("\\u00",4);
          if (lRam0000000113086648 != -1) {
            _swift_once(0x113086648,FUN_104573230);
          }
          lVar19 = lRam0000000113086650;
          uVar13 = (uVar8 & 0xffffffff) >> 4;
          if (*(ulong *)(lRam0000000113086650 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104572f98);
            (*pcVar3)();
          }
          lVar12 = lRam0000000113086650 + 0x20;
          uVar2 = *(undefined1 *)(lVar12 + uVar13);
          uVar17 = *unaff_x20;
          uVar13 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar6 = uVar17;
          if ((uVar13 & 1) == 0) {
            uVar6 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
          }
          uVar13 = *(ulong *)(uVar6 + 0x10);
          lVar1 = uVar13 + 1;
          uVar17 = uVar6;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar13) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x0001014d97ac(uVar17,lVar1,1,uVar6);
          }
          *(long *)(uVar17 + 0x10) = lVar1;
          *(undefined1 *)(uVar17 + uVar13 + 0x20) = uVar2;
          if (*(ulong *)(lVar19 + 0x10) <= (uVar8 & 0xf)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104572f9c);
            (*pcVar3)();
          }
          uVar2 = *(undefined1 *)(lVar12 + (uVar8 & 0xf));
          lVar19 = uVar13 + 2;
          uVar13 = uVar17;
          if ((long)(*(ulong *)(uVar17 + 0x18) >> 1) < lVar19) {
            uVar13 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
            func_0x0001014d97ac(uVar13,lVar19,1,uVar17);
          }
          *(long *)(uVar13 + 0x10) = lVar19;
          *(undefined1 *)(uVar13 + lVar1 + 0x20) = uVar2;
        }
        else {
          if (0x7e < uVar16) {
            if (uVar16 < 0x800) {
              uVar17 = *unaff_x20;
              uVar13 = uVar17;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar6 = uVar17;
              if ((uVar13 & 1) == 0) {
                uVar6 = 0;
                func_0x0001014d97ac(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
              }
              uVar13 = *(ulong *)(uVar6 + 0x10);
              uVar17 = *(ulong *)(uVar6 + 0x18);
              uVar11 = uVar17 >> 1;
              lVar12 = uVar13 + 1;
              uVar7 = uVar6;
              if (uVar11 <= uVar13) {
                uVar7 = (ulong)(1 < uVar17);
                func_0x0001014d97ac(uVar7,lVar12,1,uVar6);
                uVar17 = *(ulong *)(uVar7 + 0x18);
                uVar11 = uVar17 >> 1;
              }
              *(long *)(uVar7 + 0x10) = lVar12;
              *(byte *)(uVar7 + uVar13 + 0x20) = (byte)(uVar16 >> 6) | 0xc0;
              lVar19 = uVar13 + 2;
              uVar6 = uVar7;
              if ((long)uVar11 < lVar19) {
                uVar6 = (ulong)(1 < uVar17);
                func_0x0001014d97ac(uVar6,lVar19,1,uVar7);
              }
LAB_104572bcc:
              *(long *)(uVar6 + 0x10) = lVar19;
              lVar12 = uVar6 + lVar12;
            }
            else {
              if (uVar16 - 0x800 >> 0xb < 0x1f) {
                uVar17 = *unaff_x20;
                uVar13 = uVar17;
                _swift_isUniquelyReferenced_nonNull_native();
                uVar6 = uVar17;
                if ((uVar13 & 1) == 0) {
                  uVar6 = 0;
                  func_0x0001014d97ac(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
                }
                uVar13 = *(ulong *)(uVar6 + 0x10);
                uVar17 = *(ulong *)(uVar6 + 0x18);
                uVar11 = uVar17 >> 1;
                lVar19 = uVar13 + 1;
                uVar7 = uVar6;
                if (uVar11 <= uVar13) {
                  uVar7 = (ulong)(1 < uVar17);
                  func_0x0001014d97ac(uVar7,lVar19,1,uVar6);
                  uVar17 = *(ulong *)(uVar7 + 0x18);
                  uVar11 = uVar17 >> 1;
                }
                *(long *)(uVar7 + 0x10) = lVar19;
                *(byte *)(uVar7 + uVar13 + 0x20) = (byte)(uVar16 >> 0xc) | 0xe0;
                lVar12 = uVar13 + 2;
                uVar6 = uVar7;
                if ((long)uVar11 < lVar12) {
                  uVar6 = (ulong)(1 < uVar17);
                  func_0x0001014d97ac(uVar6,lVar12,1,uVar7);
                  uVar17 = *(ulong *)(uVar6 + 0x18);
                  uVar11 = uVar17 >> 1;
                }
                *(long *)(uVar6 + 0x10) = lVar12;
                *(byte *)(uVar6 + lVar19 + 0x20) = (byte)(uVar16 >> 6) & 0x3f | 0x80;
                lVar19 = uVar13 + 3;
                if ((long)uVar11 < lVar19) {
                  uVar13 = (ulong)(1 < uVar17);
                  func_0x0001014d97ac(uVar13,lVar19,1,uVar6);
                  uVar6 = uVar13;
                }
                goto LAB_104572bcc;
              }
              uVar10 = (uVar16 >> 0x12 & 0xff) + 0xf0;
              if (uVar10 >> 8 != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x104572fa0);
                (*pcVar3)();
              }
              uVar17 = *unaff_x20;
              uVar13 = uVar17;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar6 = uVar17;
              if ((uVar13 & 1) == 0) {
                uVar6 = 0;
                func_0x0001014d97ac(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
              }
              uVar13 = *(ulong *)(uVar6 + 0x10);
              uVar17 = *(ulong *)(uVar6 + 0x18);
              uVar11 = uVar17 >> 1;
              lVar19 = uVar13 + 1;
              uVar7 = uVar6;
              if (uVar11 <= uVar13) {
                uVar7 = (ulong)(1 < uVar17);
                func_0x0001014d97ac(uVar7,lVar19,1,uVar6);
                uVar17 = *(ulong *)(uVar7 + 0x18);
                uVar11 = uVar17 >> 1;
              }
              *(long *)(uVar7 + 0x10) = lVar19;
              *(char *)(uVar7 + uVar13 + 0x20) = (char)uVar10;
              lVar1 = uVar13 + 2;
              uVar6 = uVar7;
              if ((long)uVar11 < lVar1) {
                uVar6 = (ulong)(1 < uVar17);
                func_0x0001014d97ac(uVar6,lVar1,1,uVar7);
                uVar17 = *(ulong *)(uVar6 + 0x18);
                uVar11 = uVar17 >> 1;
              }
              *(long *)(uVar6 + 0x10) = lVar1;
              *(byte *)(uVar6 + lVar19 + 0x20) = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
              lVar12 = uVar13 + 3;
              uVar7 = uVar6;
              if ((long)uVar11 < lVar12) {
                uVar7 = (ulong)(1 < uVar17);
                func_0x0001014d97ac(uVar7,lVar12,1,uVar6);
                uVar17 = *(ulong *)(uVar7 + 0x18);
                uVar11 = uVar17 >> 1;
              }
              *(long *)(uVar7 + 0x10) = lVar12;
              *(byte *)(uVar7 + lVar1 + 0x20) = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              lVar19 = uVar13 + 4;
              uVar6 = uVar7;
              if ((long)uVar11 < lVar19) {
                uVar6 = (ulong)(1 < uVar17);
                func_0x0001014d97ac(uVar6,lVar19,1,uVar7);
              }
              *(long *)(uVar6 + 0x10) = lVar19;
              lVar12 = uVar6 + lVar12;
            }
            *(byte *)(lVar12 + 0x20) = (byte)uVar8 & 0x3f | 0x80;
            *unaff_x20 = uVar6;
            goto LAB_104572880;
          }
          uVar17 = *unaff_x20;
          uVar13 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar6 = uVar17;
          if ((uVar13 & 1) == 0) {
            uVar6 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
          }
          uVar17 = *(ulong *)(uVar6 + 0x10);
          uVar13 = uVar6;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar17) {
            uVar13 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x0001014d97ac(uVar13,uVar17 + 1,1,uVar6);
          }
          *(ulong *)(uVar13 + 0x10) = uVar17 + 1;
          *(byte *)(uVar13 + uVar17 + 0x20) = (byte)uVar8;
        }
        *unaff_x20 = uVar13;
      }
      else {
        uVar8 = lVar18 << 0x10;
        ppppppuVar14 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (uVar8,param_1,param_2);
        if (0xb < (int)uVar8) goto LAB_1045728c4;
LAB_104572924:
        iVar15 = (int)uVar8;
        if (iVar15 == 8) {
          puVar5 = &UNK_10f580d67;
        }
        else if (iVar15 == 9) {
          puVar5 = &DAT_10f47f586;
        }
        else {
          if (iVar15 != 10) goto LAB_104572984;
          puVar5 = &DAT_10f47f589;
        }
LAB_104572878:
        FUN_104540d74(puVar5,2);
      }
LAB_104572880:
      lVar18 = (long)ppppppuVar14 + lVar18;
    } while (lVar18 < (long)uVar4);
    _swift_bridgeObjectRelease(param_2);
    uVar13 = *unaff_x20;
  }
  uVar4 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar4 = *(ulong *)(uVar8 + 0x10);
  uVar13 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001014d97ac(uVar13,uVar4 + 1,1,uVar8);
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar13 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar13;
  return;
}



/* Entry: 104573020; end: 10457311b;  */

void FUN_104573020(double param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  undefined1 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
    __sSd16debugDescriptionSSvg();
    if ((param_3 >> 0x3c & 1) == 0) {
      uVar8 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar8 = param_3 >> 0x38 & 0xf;
      }
    }
    else {
      uVar8 = param_2;
      __sSS8UTF8ViewV13_foreignCountSiyF(param_2,param_3);
    }
    uVar14 = *unaff_x20;
    lVar3 = *(long *)(uVar14 + 0x10);
    if (SCARRY8(lVar3,uVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10454102c);
      (*pcVar1)();
    }
    uVar4 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar4 == 0) ||
       (uVar13 = *(ulong *)(uVar14 + 0x18) >> 1, (long)uVar13 < (long)(lVar3 + uVar8))) {
      func_0x0001014d97ac();
      uVar13 = *(ulong *)(uVar4 + 0x18) >> 1;
      uVar14 = uVar4;
    }
    lVar11 = uVar13 - *(long *)(uVar14 + 0x10);
    lVar3 = uVar14 + *(long *)(uVar14 + 0x10) + 0x20;
    __ss11_StringGutsV8copyUTF84intoSiSgSrys5UInt8VG_tF(lVar3,lVar11,param_2,param_3);
    if (((uint)lVar11 & 0xff) != 1) {
      _swift_bridgeObjectRelease(param_3);
      if (lVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104541030);
        (*pcVar1)();
      }
      if (0 < lVar3) {
        if (SCARRY8(*(long *)(uVar14 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104541034);
          (*pcVar1)();
        }
        *(long *)(uVar14 + 0x10) = *(long *)(uVar14 + 0x10) + lVar3;
      }
      *unaff_x20 = uVar14;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104541038);
    (*pcVar1)();
  }
  if (((ulong)param_1 & 0xfffffffffffff) == 0) {
    if (0.0 <= param_1) {
      puVar6 = &UNK_10f748a00;
      lVar3 = 10;
    }
    else {
      puVar6 = &UNK_10f7489f4;
      lVar3 = 0xb;
    }
  }
  else {
    puVar6 = &UNK_10f7489ee;
    lVar3 = 5;
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e78);
    (*pcVar1)();
  }
  uVar14 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar14 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0x18);
    uVar4 = uVar13 >> 1;
    if (lVar11 + lVar3 <= (long)uVar4) goto LAB_104540de0;
  }
  func_0x0001014d97ac();
  uVar13 = *(ulong *)(uVar14 + 0x18);
  uVar4 = uVar13 >> 1;
  uVar8 = uVar14;
LAB_104540de0:
  uVar14 = *(ulong *)(uVar8 + 0x10);
  lVar11 = uVar4 - uVar14;
  if ((lVar3 == 0) || (lVar11 == 0)) {
    puVar5 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      puVar5 = puVar6;
    }
    puVar10 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      puVar10 = puVar6 + lVar3;
    }
    lVar12 = 0;
  }
  else {
    lVar12 = lVar3;
    if (lVar11 <= lVar3) {
      lVar12 = lVar11;
    }
    _memcpy(uVar8 + uVar14 + 0x20,puVar6,lVar12);
    puVar5 = puVar6 + lVar12;
    puVar10 = puVar6 + lVar3;
  }
  if (lVar12 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e7c);
    (*pcVar1)();
  }
  if (0 < lVar12) {
    bVar2 = SCARRY8(uVar14,lVar12);
    uVar14 = uVar14 + lVar12;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e80);
      (*pcVar1)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar14;
  }
  if ((lVar12 != lVar11 || puVar5 == (undefined *)0x0) || puVar10 == puVar5) {
LAB_104540e58:
    *unaff_x20 = uVar8;
    return;
  }
  puVar6 = puVar5 + 1;
  uVar9 = *puVar5;
  uVar4 = uVar8;
  do {
    while( true ) {
      uVar7 = uVar13 >> 1;
      if ((long)(uVar14 + 1) <= (long)uVar7) break;
      uVar8 = (ulong)(1 < uVar13);
      func_0x0001014d97ac(uVar8,uVar14 + 1,1,uVar4);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      uVar7 = uVar13 >> 1;
      if ((long)uVar7 <= (long)uVar14) goto LAB_104540e88;
LAB_104540ea4:
      lVar3 = uVar14 + 0x20;
      puVar5 = puVar6;
      do {
        *(undefined1 *)(uVar8 + lVar3) = uVar9;
        if (puVar5 == puVar10) {
          *(long *)(uVar8 + 0x10) = lVar3 + -0x1f;
          goto LAB_104540e58;
        }
        uVar9 = *puVar5;
        puVar6 = puVar6 + 1;
        lVar3 = lVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 - uVar7 != 0x20);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      *(ulong *)(uVar8 + 0x10) = uVar7;
      uVar4 = uVar8;
      uVar14 = uVar7;
    }
    uVar8 = uVar4;
    if ((long)uVar14 < (long)uVar7) goto LAB_104540ea4;
LAB_104540e88:
    *(ulong *)(uVar8 + 0x10) = uVar14;
    uVar4 = uVar8;
  } while( true );
}



/* Entry: 10457311c; end: 10457322f;  */

undefined * FUN_10457311c(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_104541038(0x5a41);
  FUN_104541038(0x7a61);
  FUN_104541038(0x3930);
  puVar5 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar3 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = (undefined *)0x0;
    func_0x0001014d97ac(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
  }
  uVar2 = *(ulong *)(puVar3 + 0x10);
  uVar6 = *(ulong *)(puVar3 + 0x18);
  uVar7 = uVar6 >> 1;
  puVar4 = puVar3;
  if (uVar7 <= uVar2) {
    puVar4 = (undefined *)(ulong)(1 < uVar6);
    func_0x0001014d97ac(puVar4,uVar2 + 1,1,puVar3);
    uVar6 = *(ulong *)(puVar4 + 0x18);
    uVar7 = uVar6 >> 1;
  }
  *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
  puVar4[uVar2 + 0x20] = 0x2b;
  lVar1 = uVar2 + 2;
  puVar5 = puVar4;
  if ((long)uVar7 < lVar1) {
    puVar5 = (undefined *)(ulong)(1 < uVar6);
    func_0x0001014d97ac(puVar5,lVar1,1,puVar4);
  }
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar5[uVar2 + 0x21] = 0x2f;
  return puVar5;
}



/* Entry: 104573230; end: 10457327f;  */

void FUN_104573230(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_104541038(0x3930);
  FUN_104541038(0x4641);
  puRam0000000113086650 = puVar1;
  return;
}



/* Entry: 104573280; end: 1045733a3;  */

void FUN_104573280(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
  *unaff_x20 = uVar3;
  FUN_104540bc4(param_1,param_2);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045733a4; end: 1045735db;  */

void FUN_1045733a4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 9) != '\x01') {
    uVar1 = unaff_x20[1];
    uVar3 = *unaff_x20;
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar2 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001014d97ac(uVar3,uVar2 + 1,1,uVar4);
      uVar4 = uVar3;
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(char *)(uVar4 + uVar2 + 0x20) = (char)uVar1;
    *unaff_x20 = uVar4;
  }
  FUN_104573280(param_1,param_2);
  uVar4 = *unaff_x20;
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x3a;
  *unaff_x20 = uVar4;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 1045735dc; end: 104573ec7;  */

void FUN_1045735dc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar4 = *unaff_x20;
  if (*(char *)((long)unaff_x20 + 9) != '\x01') {
    uVar2 = unaff_x20[1];
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001014d97ac(uVar4,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(char *)(uVar4 + uVar1 + 0x20) = (char)uVar2;
    *unaff_x20 = uVar4;
  }
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar4 = *(ulong *)(uVar1 + 0x10);
  uVar2 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    func_0x0001014d97ac(uVar2,uVar4 + 1,1,uVar1);
  }
  *(ulong *)(uVar2 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar2 + uVar4 + 0x20) = 0x7b;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x100;
  return;
}



/* Entry: 104573ec8; end: 10457489b;  */

void FUN_104573ec8(byte *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  param_2 = param_2 - (long)param_1;
  if (param_2 == 0) {
    return;
  }
  lVar5 = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    if (lVar5 == 3) {
      if (lRam0000000113086658 != -1) {
        _swift_once(0x113086658,0x104573100);
      }
      lVar5 = lRam0000000113086660;
      uVar6 = uVar7 >> 0x12 & 0x3f;
      if (*(ulong *)(lRam0000000113086660 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457455c);
        (*pcVar3)();
      }
      lVar1 = lRam0000000113086660 + 0x20;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar11 = *param_3;
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        func_0x0001014d97ac(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      uVar6 = uVar7 >> 0xc & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104574560);
        (*pcVar3)();
      }
      uVar11 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        func_0x0001014d97ac(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      uVar6 = uVar7 >> 6 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104574564);
        (*pcVar3)();
      }
      uVar11 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        func_0x0001014d97ac(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      if (*(ulong *)(lVar5 + 0x10) <= (uVar7 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104574568);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + (uVar7 & 0x3f));
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001014d97ac(uVar12,uVar6 + 1,1,uVar7);
        *param_3 = uVar12;
      }
      lVar5 = 0;
      uVar7 = 0;
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    }
    bVar4 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104574558);
      (*pcVar3)();
    }
    bVar2 = *param_1;
    uVar11 = (ulong)bVar2;
    uVar12 = uVar7 << 8;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    uVar6 = uVar11 | uVar12;
  } while (param_2 != 0);
  if (lVar5 == 1) {
    if (lRam0000000113086658 != -1) {
      _swift_once(0x113086658,0x104573100);
    }
    lVar5 = lRam0000000113086660;
    uVar6 = (ulong)(bVar2 >> 2);
    if (*(ulong *)(lRam0000000113086660 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045745c0);
      (*pcVar3)();
    }
    lVar1 = lRam0000000113086660 + 0x20;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar12 = *param_3;
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 & 3) * 0x10;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457467c);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar7 = *param_3;
    uVar6 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar7,uVar6 + 1,1);
      *param_3 = uVar7;
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    uVar8 = 0x3d;
    *(undefined1 *)(uVar7 + uVar6 + 0x20) = 0x3d;
    uVar6 = *param_3;
LAB_104574514:
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar5 = uVar7 + 1;
    if (uVar7 < *(ulong *)(uVar6 + 0x18) >> 1) goto LAB_104574524;
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001014d97ac(uVar12,lVar5,1,uVar6);
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 != 3) {
        return;
      }
      if (lRam0000000113086658 != -1) {
        _swift_once(0x113086658,0x104573100);
      }
      lVar5 = lRam0000000113086660;
      uVar6 = (uVar7 & 0xffffffffffffff) >> 10 & 0x3f;
      if (*(ulong *)(lRam0000000113086660 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045745dc);
        (*pcVar3)();
      }
      lVar1 = lRam0000000113086660 + 0x20;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar9 = *param_3;
      uVar6 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar9;
      uVar10 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar10 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *param_3 = uVar10;
      }
      uVar6 = *(ulong *)(uVar10 + 0x10);
      uVar9 = uVar10;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        func_0x0001014d97ac(uVar9,uVar6 + 1,1,uVar10);
        *param_3 = uVar9;
      }
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar9 + uVar6 + 0x20) = uVar8;
      uVar6 = (uVar7 & 0xffffffffffffff) >> 4 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045746cc);
        (*pcVar3)();
      }
      uVar10 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar10;
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001014d97ac(uVar10,uVar6 + 1,1,uVar7);
        *param_3 = uVar10;
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar10 + uVar6 + 0x20) = uVar8;
      uVar6 = (uVar11 | uVar12) >> 6 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045747d8);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001014d97ac(uVar12,uVar6 + 1,1,uVar7);
        *param_3 = uVar12;
      }
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
      if (*(ulong *)(lVar5 + 0x10) <= (uVar11 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10457489c);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + (uVar11 & 0x3f));
      uVar7 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar6 = uVar12;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar6;
      }
      goto LAB_104574514;
    }
    if (lRam0000000113086658 != -1) {
      _swift_once(0x113086658,0x104573100);
    }
    lVar5 = lRam0000000113086660;
    uVar6 = (uVar12 & 0xffffffffffff00) >> 10 & 0x3f;
    if (*(ulong *)(lRam0000000113086660 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045745a4);
      (*pcVar3)();
    }
    lVar1 = lRam0000000113086660 + 0x20;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar10 = *param_3;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar10;
    uVar7 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar10 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar10,uVar6 + 1,1,uVar7);
      *param_3 = uVar10;
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 | uVar12 & 0xffffffffffff00) >> 4 & 0x3f;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457462c);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 & 0xf) * 4;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10457471c);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = *param_3;
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar5 = uVar7 + 1;
    if (uVar7 < *(ulong *)(uVar6 + 0x18) >> 1) {
      uVar8 = 0x3d;
      goto LAB_104574524;
    }
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001014d97ac(uVar12,lVar5,1,uVar6);
    uVar8 = 0x3d;
  }
  *param_3 = uVar12;
  uVar6 = uVar12;
LAB_104574524:
  *(long *)(uVar6 + 0x10) = lVar5;
  *(undefined1 *)(uVar6 + uVar7 + 0x20) = uVar8;
  return;
}



/* Entry: 10457489c; end: 1045748a3;  */

void FUN_10457489c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1045748a4; end: 1045748ef;  */

undefined8 * FUN_1045748a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}


