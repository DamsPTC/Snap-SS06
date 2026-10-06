/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045d9928; end: 1045d9983;  */

undefined1  [16]
FUN_1045d9928(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    _swift_once(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  _swift_bridgeObjectRetain(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1045d9984; end: 1045d9997;  */

undefined8 FUN_1045d9984(void)

{
  return 0x1045d9994;
}



/* Entry: 1045d9998; end: 1045d99b3;  */

void FUN_1045d9998(void)

{
  func_0x0001045de954();
  return;
}



/* Entry: 1045d99b4; end: 1045d9a53;  */

void FUN_1045d99b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f08 != -1) {
    _swift_once(0x113087f08,FUN_1045d9754);
  }
  uVar5 = uRam0000000113814018;
  uVar4 = uRam0000000113814010;
  uVar3 = uRam0000000113814008;
  uVar2 = uRam0000000113814000;
  uVar1 = uRam0000000113813ff8;
  *param_1 = uRam0000000113813ff0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d9a54; end: 1045d9a8f;  */

void FUN_1045d9a54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893d0,&UNK_10dd1d8e0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045d9a90; end: 1045d9b4f;  */

void FUN_1045d9a90(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e7b0,0x40,&uStack_48,&lStack_40);
  puRam0000000113814028 = puStack_38;
  lRam0000000113814020 = lStack_40;
  puRam0000000113814038 = puStack_28;
  puRam0000000113814030 = puStack_30;
  puRam0000000113814048 = puStack_18;
  puRam0000000113814040 = puStack_20;
  return;
}



/* Entry: 1045d9b50; end: 1045d9bef;  */

void FUN_1045d9b50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f10 != -1) {
    _swift_once(0x113087f10,FUN_1045d9a90);
  }
  uVar5 = uRam0000000113814048;
  uVar4 = uRam0000000113814040;
  uVar3 = uRam0000000113814038;
  uVar2 = uRam0000000113814030;
  uVar1 = uRam0000000113814028;
  *param_1 = uRam0000000113814020;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045d9bf0; end: 1045d9bf7;  */

bool FUN_1045d9bf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x40);
  uVar5 = uVar5 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar3 = 0;
  lVar6 = lVar3;
  if (uVar7 == 0) goto LAB_1045592f8;
LAB_104559324:
  uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 - 1 & uVar7;
  uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar6 << 6;
  uStack_c0 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar4 * 8);
  FUN_104558b10(*(long *)(param_3 + 0x38) + uVar4 * 0x28,&uStack_b8);
  lVar3 = lVar6;
  do {
    lVar6 = lStack_a0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    lStack_70 = lStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if (lStack_a0 == 0) {
      _swift_release(param_3);
LAB_1045593ec:
      return lVar6 == 0;
    }
    FUN_104558c58(&uStack_88,&uStack_c0);
    lVar1 = lStack_a0;
    uVar4 = uStack_a8;
    func_0x0001000a8868(&uStack_c0,uStack_a8);
    (**(code **)(lVar1 + 0x38))(uVar4,lVar1);
    if ((uVar4 & 1) == 0) {
      _swift_release(param_3);
      func_0x0001000834e4(&uStack_c0);
      goto LAB_1045593ec;
    }
    func_0x0001000834e4(&uStack_c0);
    lVar6 = lVar3;
    if (uVar7 != 0) goto LAB_104559324;
LAB_1045592f8:
    uVar4 = uVar5;
    if ((long)uVar5 <= lVar3 + 1) {
      uVar4 = lVar3 + 1;
    }
    while( true ) {
      lVar6 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104559418);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar6) break;
      uVar7 = ((ulong *)(param_3 + 0x40))[lVar6];
      lVar3 = lVar3 + 1;
      if (uVar7 != 0) goto LAB_104559324;
    }
    uVar7 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar3 = uVar4 - 1;
  } while( true );
}



/* Entry: 1045d9bf8; end: 1045d9d7f;  */

/* WARNING: Removing unreachable block (ram,0x0001045d9d5c) */

void FUN_1045d9bf8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x32) {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x0001045f9150();
          goto LAB_1045d9c84;
        }
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x188);
          func_0x000104604174();
          goto LAB_1045d9c84;
        }
LAB_1045d9d18:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_1045f96a4();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x20,&UNK_11078d130,lVar2,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 0x32) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_1045fa968();
        }
        else {
          if (lVar1 != 999) goto LAB_1045d9d18;
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x0001045f9190();
        }
LAB_1045d9c84:
        (*pcVar3)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045d9d80; end: 1045d9f27;  */

void FUN_1045d9d80(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((*(long *)(unaff_x20[1] + 0x10) != 0) && (FUN_1046113b0(unaff_x20[1],2), unaff_x21 != 0)) {
    return;
  }
  lVar5 = unaff_x20[9];
  if ((char)lVar5 != '\x02') {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF((char)lVar5);
  }
  lVar5 = unaff_x20[7];
  if (lVar5 != 0) {
    lVar4 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar6 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(0x32);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00010006c00c(lVar4,lVar1);
    _swift_bridgeObjectRetain(lVar5);
    FUN_1045ee434(&uStack_a0,lVar4,lVar1,lVar5,lVar6);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    func_0x00010458a4f4(lVar4,lVar1,lVar5,lVar6);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_10460e87c(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_1045ae514(param_1,1000,0x20000000,unaff_x20[4]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar5 = unaff_x20[2];
  uVar2 = (uint)((ulong)unaff_x20[3] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[3] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045d9f14;
    }
    lVar4 = (long)(int)lVar5;
    lVar5 = lVar5 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  if (lVar4 == lVar5) {
    return;
  }
LAB_1045d9f14:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045d9f28; end: 1045da07b;  */

void FUN_1045d9f28(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  code *pcVar4;
  char cStack_41;
  
  lVar2 = unaff_x20[1];
  lVar3 = param_1;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar4 = *(code **)(param_3 + 0x118);
    func_0x0001045f9150();
    (*pcVar4)(lVar2,2,&UNK_11078d250,lVar3,param_2,param_3);
    lVar3 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((char)unaff_x20[9] != '\x02') {
    pcVar4 = *(code **)(param_3 + 0x80);
    cStack_41 = (char)unaff_x20[9];
    func_0x000104604174();
    (*pcVar4)(&cStack_41,3,&UNK_11078d1d8,lVar3,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_1045da07c();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001045f9190();
      (*pcVar4)(lVar3,999,&UNK_11078e0d8,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[4],1000,0x20000000,param_2,param_3);
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1045da07c; end: 1045da0ff;  */

void FUN_1045da07c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045fa968();
    (*pcVar1)(&uStack_60,0x32,&UNK_11078e1f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045da100; end: 1045da103;  */

uint FUN_1045da100(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_220 [32];
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = *param_1;
  lVar5 = *param_2;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == *(long *)(lVar5 + 0x10)) {
    if (lVar7 != 0 && lVar6 != lVar5) {
      puVar8 = (undefined8 *)(lVar6 + 0x20);
      puVar9 = (undefined8 *)(lVar5 + 0x20);
      do {
        uStack_158 = puVar8[1];
        uStack_160 = *puVar8;
        uStack_148 = puVar8[3];
        uStack_150 = puVar8[2];
        uStack_138 = puVar8[5];
        uStack_140 = puVar8[4];
        uStack_128 = puVar8[7];
        uStack_130 = puVar8[6];
        uStack_118 = puVar8[9];
        uStack_120 = puVar8[8];
        uStack_108 = puVar8[0xb];
        uStack_110 = puVar8[10];
        uStack_f8 = puVar8[0xd];
        uStack_100 = puVar8[0xc];
        uStack_f0 = puVar8[0xe];
        uStack_88 = puVar9[0xb];
        uStack_90 = puVar9[10];
        uStack_78 = puVar9[0xd];
        uStack_80 = puVar9[0xc];
        uStack_70 = puVar9[0xe];
        uStack_98 = puVar9[9];
        uStack_a0 = puVar9[8];
        uStack_d8 = puVar9[1];
        uStack_e0 = *puVar9;
        uStack_c8 = puVar9[3];
        uStack_d0 = puVar9[2];
        uStack_b8 = puVar9[5];
        uStack_c0 = puVar9[4];
        uStack_a8 = puVar9[7];
        uStack_b0 = puVar9[6];
        func_0x000104604214(&uStack_160,&uStack_200);
        func_0x000104604214(&uStack_e0,&uStack_200);
        puVar2 = &uStack_160;
        FUN_1045f48a0(puVar2,&uStack_e0);
        func_0x000104604248(&uStack_e0);
        func_0x000104604248(&uStack_160);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1045f7134;
        puVar9 = puVar9 + 0xf;
        puVar8 = puVar8 + 0xf;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar3 = param_1[1];
    FUN_1045bbc90(uVar3,param_2[1]);
    if ((uVar3 & 1) != 0) {
      lVar5 = param_1[6];
      uVar3 = param_1[5];
      lVar12 = param_1[8];
      lVar10 = param_1[7];
      lVar6 = param_2[6];
      lVar7 = param_2[5];
      lVar13 = param_2[8];
      lVar11 = param_2[7];
      uStack_200 = uVar3;
      lStack_1f8 = lVar5;
      lStack_1f0 = lVar10;
      lStack_1e8 = lVar12;
      lStack_180 = lVar7;
      lStack_178 = lVar6;
      lStack_170 = lVar11;
      lStack_168 = lVar13;
      if (lVar10 == 0) {
        if (lVar11 != 0) goto LAB_1045f70d4;
        func_0x0001045f8fa8(&uStack_200,auStack_220,0x113087928,&UNK_10dd19bf8);
        func_0x0001045f8fa8(&lStack_180,auStack_220,0x113087928,&UNK_10dd19bf8);
        func_0x00010458a4f4(uVar3,lVar5,0,lVar12);
LAB_1045f71b4:
        if ((char)param_1[9] == '\x02') {
          if ((char)param_2[9] == '\x02') {
LAB_1045f71d8:
            uVar3 = param_1[2];
            func_0x000100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
            if ((uVar3 & 1) != 0) {
              lVar7 = param_1[4];
              FUN_104558fb4(lVar7,param_2[4]);
              uVar1 = (uint)lVar7;
              goto LAB_1045f7138;
            }
          }
        }
        else if ((char)param_1[9] == (char)param_2[9]) goto LAB_1045f71d8;
      }
      else if (lVar11 == 0) {
LAB_1045f70d4:
        func_0x0001045f8fa8(&uStack_200,auStack_220,0x113087928,&UNK_10dd19bf8);
        func_0x0001045f8fa8(&lStack_180,auStack_220,0x113087928,&UNK_10dd19bf8);
        func_0x00010458a4f4(uVar3,lVar5,lVar10,lVar12);
        func_0x00010458a4f4(lVar7,lVar6,lVar11,lVar13);
      }
      else {
        func_0x0001045f8fa8(&uStack_200,auStack_220,0x113087928,&UNK_10dd19bf8);
        func_0x0001045f8fa8(&lStack_180,auStack_220,0x113087928,&UNK_10dd19bf8);
        uVar4 = uVar3;
        FUN_1045f8100(uVar3,lVar5,lVar10,lVar12,lVar7,lVar6,lVar11,lVar13);
        func_0x00010458a4f4(lVar7,lVar6,lVar11,lVar13);
        func_0x00010458a4f4(uVar3,lVar5,lVar10,lVar12);
        if ((uVar4 & 1) != 0) goto LAB_1045f71b4;
      }
    }
  }
LAB_1045f7134:
  uVar1 = 0;
LAB_1045f7138:
  return uVar1 & 1;
}



/* Entry: 1045da104; end: 1045da193;  */

/* WARNING: Removing unreachable block (ram,0x0001045da154) */

void FUN_1045da104(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045d9d80(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045da194; end: 1045da1eb;  */

void FUN_1045da194(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  return;
}



/* Entry: 1045da1ec; end: 1045da28f;  */

undefined8 FUN_1045da1ec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar5 = unaff_x20[8];
  FUN_104559288();
  if ((uVar4 & 1) != 0) {
    func_0x0001045be170();
    uVar4 = uVar6;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar6);
    if ((uVar4 & 1) != 0) {
      if (uVar3 != 0) {
        func_0x00010006c00c(uVar2,uVar1);
        uVar4 = uVar3;
        _swift_bridgeObjectRetain();
        FUN_104559288();
        func_0x00010458a4f4(uVar2,uVar1,uVar3,uVar5);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045da290; end: 1045da2bf;  */

undefined1  [16] FUN_1045da290(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1045da2c0; end: 1045da2f3;  */

void FUN_1045da2c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045da2f4; end: 1045da307;  */

undefined1  [16] FUN_1045da2f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045da304;
  return auVar1;
}



/* Entry: 1045da308; end: 1045da31b;  */

void FUN_1045da308(void)

{
  FUN_1045d9bf8();
  return;
}



/* Entry: 1045da31c; end: 1045da35b;  */

void FUN_1045da31c(void)

{
  FUN_1045d9f28();
  return;
}



/* Entry: 1045da35c; end: 1045da3fb;  */

void FUN_1045da35c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f10 != -1) {
    _swift_once(0x113087f10,FUN_1045d9a90);
  }
  uVar5 = uRam0000000113814048;
  uVar4 = uRam0000000113814040;
  uVar3 = uRam0000000113814038;
  uVar2 = uRam0000000113814030;
  uVar1 = uRam0000000113814028;
  *param_1 = uRam0000000113814020;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045da3fc; end: 1045da437;  */

void FUN_1045da3fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893c8,&UNK_10dd1d8d8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045da438; end: 1045da623;  */

/* WARNING: Removing unreachable block (ram,0x0001045da4a4) */

void FUN_1045da438(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[7];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_1045d9d80(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045da624; end: 1045da73b;  */

uint FUN_1045da624(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined1)param_1[7];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined1)param_2[7];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x41);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1045da100(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045da73c; end: 1045da87b;  */

void FUN_1045da73c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f28 != -1) {
    _swift_once(0x113087f28,0x1045da67c);
  }
  uVar5 = uRam0000000113814078;
  uVar4 = uRam0000000113814070;
  uVar3 = uRam0000000113814068;
  uVar2 = uRam0000000113814060;
  uVar1 = uRam0000000113814058;
  *param_1 = uRam0000000113814050;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045da87c; end: 1045da8eb;  */

void FUN_1045da87c(void)

{
  __sSS6appendyySSF(0x6172616c6365442e,0xec0000006e6f6974);
  uRam0000000113814080 = 0xd000000000000025;
  uRam0000000113814088 = 0x800000010f208410;
  return;
}



/* Entry: 1045da8ec; end: 1045da92b;  */

undefined8 FUN_1045da8ec(void)

{
  if (lRam0000000113087f30 != -1) {
    _swift_once(0x113087f30,FUN_1045da87c);
  }
  return 0x113814080;
}



/* Entry: 1045da92c; end: 1045da94b;  */

undefined1  [16] FUN_1045da92c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113087f30 != -1) {
    _swift_once(0x113087f30,FUN_1045da87c);
  }
  auVar1._8_8_ = uRam0000000113814088;
  auVar1._0_8_ = uRam0000000113814080;
  _swift_bridgeObjectRetain(uRam0000000113814088);
  return auVar1;
}



/* Entry: 1045da94c; end: 1045daa0b;  */

void FUN_1045da94c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e750,0x32,&uStack_48,&lStack_40);
  puRam0000000113814098 = puStack_38;
  lRam0000000113814090 = lStack_40;
  puRam00000001138140a8 = puStack_28;
  puRam00000001138140a0 = puStack_30;
  puRam00000001138140b8 = puStack_18;
  puRam00000001138140b0 = puStack_20;
  return;
}



/* Entry: 1045daa0c; end: 1045daaab;  */

void FUN_1045daa0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f38 != -1) {
    _swift_once(0x113087f38,FUN_1045da94c);
  }
  uVar5 = uRam00000001138140b8;
  uVar4 = uRam00000001138140b0;
  uVar3 = uRam00000001138140a8;
  uVar2 = uRam00000001138140a0;
  uVar1 = uRam0000000113814098;
  *param_1 = uRam0000000113814090;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045daaac; end: 1045dab8b;  */

void FUN_1045daaac(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_1045dab58;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x18;
          goto LAB_1045dab58;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x28;
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x38;
        }
        else {
          if (lVar1 != 6) goto LAB_1045dab68;
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x39;
        }
LAB_1045dab58:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_1045dab68:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045dab8c; end: 1045dacab;  */

void FUN_1045dab8c(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (*(char *)((long)unaff_x20 + 0x14) != '\x01') {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[6];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + 7);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x39);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045dac8c;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_1045dac8c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045dacac; end: 1045dadb3;  */

void FUN_1045dacac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x14) != '\x01') {
    (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 2),1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[4] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[3],unaff_x20[4],2,param_2,param_3);
    }
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],3,param_2,param_3);
    }
    if (*(byte *)(unaff_x20 + 7) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 7) & 1,5,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x39) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x39) & 1,6,param_2,param_3);
    }
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045dadb4; end: 1045dadb7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045dadb4(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    if (*(char *)((long)param_2 + 0x14) != '\x01') {
      return (byte *)0x0;
    }
  }
  else if (*(char *)((long)param_2 + 0x14) == '\x01' || *(int *)(param_1 + 2) != (int)param_2[2]) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar16 = param_2[4];
  if (lVar19 == 0) {
    if (lVar16 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar16 == 0) {
      return (byte *)0x0;
    }
    uVar22 = param_1[3];
    if (((uVar22 != param_2[3]) || (lVar19 != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[3],lVar16,0), (uVar22 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  lVar19 = param_1[6];
  lVar16 = param_2[6];
  if (lVar19 == 0) {
    if (lVar16 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar16 == 0) {
      return (byte *)0x0;
    }
    uVar22 = param_1[5];
    if (((uVar22 != param_2[5]) || (lVar19 != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[5],lVar16,0), (uVar22 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  bVar27 = *(byte *)(param_2 + 7);
  if (*(byte *)(param_1 + 7) == 2) {
    if (bVar27 != 2) {
      return (byte *)0x0;
    }
  }
  else {
    if (bVar27 == 2) {
      return (byte *)0x0;
    }
    if (((*(byte *)(param_1 + 7) ^ bVar27) & 1) != 0) {
      return (byte *)0x0;
    }
  }
  bVar27 = *(byte *)((long)param_2 + 0x39);
  if (*(byte *)((long)param_1 + 0x39) == 2) {
    if (bVar27 == 2) {
LAB_1045f5358:
      pbVar10 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      lVar16 = *param_2;
      uVar22 = param_2[1];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar22 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar22 >> 0x3e < 3)) || ((uVar21 = 0, lVar16 != 0 || (uVar22 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar22 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar22);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar22;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar16);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar19;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar19;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar22 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  else if ((bVar27 != 2) && (((*(byte *)((long)param_1 + 0x39) ^ bVar27) & 1) == 0))
  goto LAB_1045f5358;
  return (byte *)0x0;
}



/* Entry: 1045dadb8; end: 1045dae47;  */

/* WARNING: Removing unreachable block (ram,0x0001045dae08) */

void FUN_1045dadb8(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045dab8c(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045dae48; end: 1045dae97;  */

void FUN_1045dae48(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 7) = 0x202;
  return;
}



/* Entry: 1045dae98; end: 1045daec7;  */

undefined1  [16] FUN_1045dae98(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045daec8; end: 1045daefb;  */

void FUN_1045daec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045daefc; end: 1045daf0f;  */

undefined8 FUN_1045daefc(void)

{
  return 0x1045daf0c;
}



/* Entry: 1045daf10; end: 1045daf37;  */

void FUN_1045daf10(void)

{
  FUN_1045daaac();
  return;
}



/* Entry: 1045daf38; end: 1045dafd7;  */

void FUN_1045daf38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f38 != -1) {
    _swift_once(0x113087f38,FUN_1045da94c);
  }
  uVar5 = uRam00000001138140b8;
  uVar4 = uRam00000001138140b0;
  uVar3 = uRam00000001138140a8;
  uVar2 = uRam00000001138140a0;
  uVar1 = uRam0000000113814098;
  *param_1 = uRam0000000113814090;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dafd8; end: 1045db013;  */

void FUN_1045dafd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893c0,&UNK_10dd1d8d0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045db014; end: 1045db1f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045db080) */

void FUN_1045db014(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined2)unaff_x20[5];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  __ss6HasherV5_seedABSi_tcfC(&uStack_c0,0);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  FUN_1045dab8c(&uStack_110);
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_80 = uStack_d0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045db1f8; end: 1045db24f;  */

uint FUN_1045db1f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined2)param_1[5];
  uStack_5e = *(undefined8 *)((long)param_1 + 0x32);
  uStack_66 = (undefined6)*(undefined8 *)((long)param_1 + 0x2a);
  uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x2a) >> 0x30);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined2)param_2[5];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x32);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x2a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x2a) >> 0x30);
  func_0x0001045f5214(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1045db250; end: 1045db277;  */

undefined * FUN_1045db250(void)

{
  return &UNK_11078b1a8;
}



/* Entry: 1045db278; end: 1045db337;  */

void FUN_1045db278(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e6d0,0x73,&uStack_48,&lStack_40);
  puRam00000001138140c8 = puStack_38;
  lRam00000001138140c0 = lStack_40;
  puRam00000001138140d8 = puStack_28;
  puRam00000001138140d0 = puStack_30;
  puRam00000001138140e8 = puStack_18;
  puRam00000001138140e0 = puStack_20;
  return;
}



/* Entry: 1045db338; end: 1045db3d7;  */

void FUN_1045db338(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f40 != -1) {
    _swift_once(0x113087f40,FUN_1045db278);
  }
  uVar5 = uRam00000001138140e8;
  uVar4 = uRam00000001138140e0;
  uVar3 = uRam00000001138140d8;
  uVar2 = uRam00000001138140d0;
  uVar1 = uRam00000001138140c8;
  *param_1 = uRam00000001138140c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045db3d8; end: 1045db513;  */

uint FUN_1045db3d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x80);
  if (uVar5 == 0) {
    uVar9 = 1;
    goto LAB_1045db4f0;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar8 = *(long *)(unaff_x20 + 0x88);
  func_0x00010006c00c(uVar1,uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(lVar8);
  uVar10 = uVar5;
  FUN_104559288();
  if ((uVar10 & 1) == 0) {
LAB_1045db4d0:
    uVar9 = 0;
  }
  else {
    _swift_beginAccess(lVar8 + 0x30,auStack_78,0,0);
    uVar10 = *(ulong *)(lVar8 + 0x40);
    if (uVar10 != 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0x48);
      uVar4 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = *(undefined8 *)(lVar8 + 0x38);
      func_0x00010006c00c(uVar4,uVar7);
      uVar3 = uVar10;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar4,uVar7,uVar10,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_1045db4d0;
    }
    _swift_beginAccess(lVar8 + 0x80,auStack_90,0,0);
    uVar7 = *(undefined8 *)(lVar8 + 0x80);
    uVar4 = uVar7;
    _swift_bridgeObjectRetain(uVar7);
    func_0x0001045be170();
    _swift_bridgeObjectRelease(uVar7);
    uVar7 = uVar4;
    FUN_10456cde8(uVar4);
    uVar9 = (uint)uVar7;
    _swift_bridgeObjectRelease(uVar4);
  }
  func_0x0001045f8a44(uVar1,uVar2,uVar5,lVar8);
LAB_1045db4f0:
  return uVar9 & 1;
}



/* Entry: 1045db514; end: 1045db5fb;  */

uint FUN_1045db514(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_104559288();
  if ((param_3 & 1) == 0) {
LAB_1045db5dc:
    uVar3 = 0;
  }
  else {
    _swift_beginAccess(param_4 + 0x30,auStack_58,0,0);
    uVar5 = *(ulong *)(param_4 + 0x40);
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_4 + 0x48);
      uVar2 = *(undefined8 *)(param_4 + 0x30);
      uVar4 = *(undefined8 *)(param_4 + 0x38);
      func_0x00010006c00c(uVar2,uVar4);
      uVar1 = uVar5;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar2,uVar4,uVar5,uVar6);
      if ((uVar1 & 1) == 0) goto LAB_1045db5dc;
    }
    _swift_beginAccess(param_4 + 0x80,auStack_70,0,0);
    uVar4 = *(undefined8 *)(param_4 + 0x80);
    uVar2 = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    func_0x0001045be170();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar2;
    FUN_10456cde8(uVar2);
    uVar3 = (uint)uVar4;
    _swift_bridgeObjectRelease(uVar2);
  }
  return uVar3 & 1;
}



/* Entry: 1045db5fc; end: 1045db77f;  */

/* WARNING: Removing unreachable block (ram,0x0001045db764) */

void FUN_1045db5fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x10;
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x38;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x50);
        lVar2 = unaff_x20 + 0x20;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x188);
        func_0x000104604134();
        lVar2 = unaff_x20 + 0x25;
        puVar3 = &UNK_11078d430;
        goto code_r0x0001045db750;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x188);
        func_0x0001046040f4();
        lVar2 = unaff_x20 + 0x26;
        puVar3 = &UNK_11078d3a0;
        goto code_r0x0001045db750;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x28;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x48;
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000103a17e6c();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_11078d990;
code_r0x0001045db750:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_1045db684;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x50);
        lVar2 = unaff_x20 + 0x58;
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x60;
        break;
      default:
        goto LAB_1045db684;
      case 0x11:
        pcVar4 = *(code **)(param_3 + 0x140);
        lVar2 = unaff_x20 + 0x90;
      }
      (*pcVar4)(lVar2,param_2,param_3);
LAB_1045db684:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1045db780; end: 1045dba57;  */

void FUN_1045db780(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar7 = unaff_x20[3];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[8];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    lVar7 = unaff_x20[4];
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar7);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x25);
  if ((ulong)bVar2 != 3) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1ea98 + (ulong)bVar2 * 8));
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x26);
  if ((ulong)bVar2 != 0x12) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF((ulong)bVar2 + 1);
  }
  lVar7 = unaff_x20[6];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[10];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[9];
    __ss6HasherV8_combineyySuF(7);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[0x10];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0xe];
    uVar1 = unaff_x20[0xf];
    lVar9 = unaff_x20[0x11];
    __ss6HasherV8_combineyySuF(8);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00010006c00c(lVar8,uVar1);
    _swift_bridgeObjectRetain(lVar7);
    _swift_retain(lVar9);
    FUN_1045e62a4();
    if (unaff_x21 == 0) {
      uVar3 = (uint)(uVar1 >> 0x20);
      uVar4 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((uVar1 & 0xff000000000000) == 0) goto LAB_1045db914;
        }
        else {
          lVar5 = (long)(int)lVar8;
          lVar6 = lVar8 >> 0x20;
LAB_1045dba3c:
          if (lVar5 == lVar6) goto LAB_1045db914;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,lVar8,uVar1);
      }
      else if (uVar4 == 2) {
        lVar5 = *(long *)(lVar8 + 0x10);
        lVar6 = *(long *)(lVar8 + 0x18);
        goto LAB_1045dba3c;
      }
    }
    else {
      _swift_errorRelease();
    }
LAB_1045db914:
    func_0x0001045f8a44(lVar8,uVar1,lVar7,lVar9);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if (*(char *)((long)unaff_x20 + 0x5c) != '\x01') {
    lVar7 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(9);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar7);
  }
  lVar7 = unaff_x20[0xd];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0xc];
    __ss6HasherV8_combineyySuF(10);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  bVar2 = *(byte *)(unaff_x20 + 0x12);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar7 = *unaff_x20;
  uVar3 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045db9e0;
    }
    lVar8 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (lVar8 == lVar7) {
    return;
  }
LAB_1045db9e0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045dba58; end: 1045dbc4f;  */

void FUN_1045dba58(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char cStack_41;
  
  uVar1 = param_1;
  if (unaff_x20[3] != 0) {
    uVar1 = unaff_x20[2];
    (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[8] != 0) {
      uVar1 = unaff_x20[7];
      (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[8],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
      uVar1 = (ulong)*(uint *)(unaff_x20 + 4);
      (**(code **)(param_3 + 0x18))(uVar1,3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x25) != '\x03') {
      pcVar2 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)((long)unaff_x20 + 0x25);
      func_0x000104604134();
      (*pcVar2)(&cStack_41,4,&UNK_11078d430,uVar1,param_2,param_3);
    }
    FUN_1045dbc50();
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],6,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[9],unaff_x20[10],7,param_2,param_3);
    }
    FUN_1045dbcc4();
    if (*(char *)((long)unaff_x20 + 0x5c) != '\x01') {
      (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 0xb),9,param_2,param_3);
    }
    if (unaff_x20[0xd] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xc],unaff_x20[0xd],10,param_2,param_3);
    }
    if (*(byte *)(unaff_x20 + 0x12) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 0x12) & 1,0x11,param_2,param_3);
    }
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045dbc50; end: 1045dbcc3;  */

void FUN_1045dbc50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  char cStack_31;
  
  cStack_31 = *(char *)(param_1 + 0x26);
  if (cStack_31 != '\x12') {
    pcVar1 = *(code **)(param_4 + 0x80);
    func_0x0001046040f4();
    (*pcVar1)(&cStack_31,5,&UNK_11078d3a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045dbcc4; end: 1045dbd47;  */

void FUN_1045dbcc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x80);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103a17e6c();
    (*pcVar1)(&uStack_60,8,&UNK_11078d990,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045dbd48; end: 1045dbd4b;  */

uint FUN_1045dbd48(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar5 = param_1[3];
  lVar3 = param_2[3];
  if (lVar5 == 0) {
    if (lVar3 == 0) {
LAB_1045f6a9c:
      if (*(char *)((long)param_1 + 0x24) == '\x01') {
        if (*(char *)((long)param_2 + 0x24) == '\x01') {
LAB_1045f6acc:
          if (*(char *)((long)param_1 + 0x25) == '\x03') {
            if (*(char *)((long)param_2 + 0x25) == '\x03') {
LAB_1045f6af0:
              if (*(char *)((long)param_1 + 0x26) == '\x12') {
                if (*(char *)((long)param_2 + 0x26) == '\x12') {
LAB_1045f6b14:
                  lVar5 = param_1[6];
                  lVar3 = param_2[6];
                  if (lVar5 == 0) {
                    if (lVar3 == 0) {
LAB_1045f6b6c:
                      lVar5 = param_1[8];
                      lVar3 = param_2[8];
                      if (lVar5 == 0) {
                        if (lVar3 == 0) {
LAB_1045f6bc4:
                          lVar5 = param_1[10];
                          lVar3 = param_2[10];
                          if (lVar5 == 0) {
                            if (lVar3 == 0) {
LAB_1045f6c1c:
                              if (*(char *)((long)param_1 + 0x5c) == '\x01') {
                                if (*(char *)((long)param_2 + 0x5c) != '\x01') goto LAB_1045f6e4c;
                              }
                              else {
                                uVar4 = 0;
                                if ((*(char *)((long)param_2 + 0x5c) == '\x01') ||
                                   (*(int *)(param_1 + 0xb) != *(int *)(param_2 + 0xb)))
                                goto LAB_1045f6e50;
                              }
                              lVar5 = param_1[0xd];
                              lVar3 = param_2[0xd];
                              if (lVar5 == 0) {
                                if (lVar3 == 0) {
LAB_1045f6cac:
                                  uVar8 = param_1[0xf];
                                  uVar7 = param_1[0xe];
                                  uVar12 = param_1[0x11];
                                  uVar10 = param_1[0x10];
                                  uVar9 = param_2[0xf];
                                  uVar6 = param_2[0xe];
                                  uVar13 = param_2[0x11];
                                  uVar11 = param_2[0x10];
                                  uStack_a0 = uVar6;
                                  uStack_98 = uVar9;
                                  uStack_90 = uVar11;
                                  uStack_88 = uVar13;
                                  uStack_80 = uVar7;
                                  uStack_78 = uVar8;
                                  uStack_70 = uVar10;
                                  uStack_68 = uVar12;
                                  if (uVar10 == 0) {
                                    if (uVar11 != 0) goto LAB_1045f6d20;
                                    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087978,
                                                        &UNK_10dd19c08);
                                    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087978,
                                                        &UNK_10dd19c08);
                                    func_0x0001045f8a44(uVar7,uVar8,0,uVar12);
LAB_1045f6ec4:
                                    bVar1 = *(byte *)(param_2 + 0x12);
                                    if (*(byte *)(param_1 + 0x12) == 2) {
                                      if (bVar1 != 2) goto LAB_1045f6e4c;
                                    }
                                    else {
                                      uVar4 = 0;
                                      if ((bVar1 == 2) ||
                                         (((*(byte *)(param_1 + 0x12) ^ bVar1) & 1) != 0))
                                      goto LAB_1045f6e50;
                                    }
                                    uVar9 = *param_1;
                                    func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
                                    uVar4 = (uint)uVar9;
                                    goto LAB_1045f6e50;
                                  }
                                  if (uVar11 == 0) {
LAB_1045f6d20:
                                    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087978,
                                                        &UNK_10dd19c08);
                                    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087978,
                                                        &UNK_10dd19c08);
                                    func_0x0001045f8a44(uVar7,uVar8,uVar10,uVar12);
                                  }
                                  else {
                                    if (uVar12 == uVar13) {
                                      func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087978,
                                                          &UNK_10dd19c08);
                                      func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087978,
                                                          &UNK_10dd19c08);
LAB_1045f6dcc:
                                      uVar2 = uVar7;
                                      func_0x000100e25fcc(uVar7,uVar8,uVar6,uVar9);
                                      if ((uVar2 & 1) != 0) {
                                        uVar2 = uVar10;
                                        FUN_104558fb4(uVar10,uVar11);
                                        func_0x0001045f8a44(uVar6,uVar9,uVar11,uVar13);
                                        func_0x0001045f8a44(uVar7,uVar8,uVar10,uVar12);
                                        if ((uVar2 & 1) == 0) goto LAB_1045f6e4c;
                                        goto LAB_1045f6ec4;
                                      }
                                    }
                                    else {
                                      func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087978,
                                                          &UNK_10dd19c08);
                                      func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087978,
                                                          &UNK_10dd19c08);
                                      _swift_retain(uVar12);
                                      _swift_retain(uVar13);
                                      uVar2 = uVar12;
                                      func_0x0001045e71c8(uVar12,uVar13);
                                      _swift_release(uVar13);
                                      _swift_release(uVar12);
                                      if ((uVar2 & 1) != 0) goto LAB_1045f6dcc;
                                    }
                                    func_0x0001045f8a44(uVar6,uVar9,uVar11,uVar13);
                                    uVar6 = uVar7;
                                    uVar9 = uVar8;
                                    uVar11 = uVar10;
                                    uVar13 = uVar12;
                                  }
                                  func_0x0001045f8a44(uVar6,uVar9,uVar11,uVar13);
                                }
                              }
                              else if (lVar3 != 0) {
                                uVar6 = param_1[0xc];
                                if (((uVar6 == param_2[0xc]) && (lVar5 == lVar3)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (uVar6,lVar5,param_2[0xc],lVar3,0), (uVar6 & 1) != 0))
                                goto LAB_1045f6cac;
                              }
                            }
                          }
                          else if (lVar3 != 0) {
                            uVar6 = param_1[9];
                            if (((uVar6 == param_2[9]) && (lVar5 == lVar3)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (uVar6,lVar5,param_2[9],lVar3,0), (uVar6 & 1) != 0))
                            goto LAB_1045f6c1c;
                          }
                        }
                      }
                      else if (lVar3 != 0) {
                        uVar6 = param_1[7];
                        if (((uVar6 == param_2[7]) && (lVar5 == lVar3)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (uVar6,lVar5,param_2[7],lVar3,0), (uVar6 & 1) != 0))
                        goto LAB_1045f6bc4;
                      }
                    }
                  }
                  else if (lVar3 != 0) {
                    uVar6 = param_1[5];
                    if (((uVar6 == param_2[5]) && (lVar5 == lVar3)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (uVar6,lVar5,param_2[5],lVar3,0), (uVar6 & 1) != 0))
                    goto LAB_1045f6b6c;
                  }
                }
              }
              else if (*(char *)((long)param_1 + 0x26) == *(char *)((long)param_2 + 0x26))
              goto LAB_1045f6b14;
            }
          }
          else if (*(char *)((long)param_1 + 0x25) == *(char *)((long)param_2 + 0x25))
          goto LAB_1045f6af0;
        }
      }
      else if (*(char *)((long)param_2 + 0x24) != '\x01' &&
               *(int *)(param_1 + 4) == *(int *)(param_2 + 4)) goto LAB_1045f6acc;
    }
  }
  else if (lVar3 != 0) {
    uVar6 = param_1[2];
    if ((uVar6 == param_2[2] && lVar5 == lVar3) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,lVar5,param_2[2],lVar3,0), (uVar6 & 1) != 0)) goto LAB_1045f6a9c;
  }
LAB_1045f6e4c:
  uVar4 = 0;
LAB_1045f6e50:
  return uVar4 & 1;
}



/* Entry: 1045dbd4c; end: 1045dbddb;  */

/* WARNING: Removing unreachable block (ram,0x0001045dbd9c) */

void FUN_1045dbd4c(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045db780(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045dbddc; end: 1045dbe4f;  */

void FUN_1045dbddc(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0x301;
  *(undefined1 *)((long)param_1 + 0x26) = 0x12;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 2;
  return;
}



/* Entry: 1045dbe50; end: 1045dbe7f;  */

undefined1  [16] FUN_1045dbe50(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045dbe80; end: 1045dbeb3;  */

void FUN_1045dbe80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045dbeb4; end: 1045dbec7;  */

undefined8 FUN_1045dbeb4(void)

{
  return 0x1045dbec4;
}



/* Entry: 1045dbec8; end: 1045dbedb;  */

void FUN_1045dbec8(void)

{
  FUN_1045db5fc();
  return;
}



/* Entry: 1045dbedc; end: 1045dbf33;  */

void FUN_1045dbedc(void)

{
  FUN_1045dba58();
  return;
}



/* Entry: 1045dbf34; end: 1045dbfd3;  */

void FUN_1045dbf34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f40 != -1) {
    _swift_once(0x113087f40,FUN_1045db278);
  }
  uVar5 = uRam00000001138140e8;
  uVar4 = uRam00000001138140e0;
  uVar3 = uRam00000001138140d8;
  uVar2 = uRam00000001138140d0;
  uVar1 = uRam00000001138140c8;
  *param_1 = uRam00000001138140c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dbfd4; end: 1045dc00f;  */

void FUN_1045dbfd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893b8,&UNK_10dd1d8c8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045dc010; end: 1045dc23f;  */

/* WARNING: Removing unreachable block (ram,0x0001045dc094) */

void FUN_1045dc010(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_120,0);
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_130 = uStack_e0;
  uStack_168 = uStack_118;
  uStack_170 = uStack_120;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  FUN_1045db780(&uStack_170);
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_e0 = uStack_130;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_118 = uStack_168;
  uStack_120 = uStack_170;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045dc240; end: 1045dc2cf;  */

uint FUN_1045dc240(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = *(undefined1 *)(param_1 + 0x12);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = *(undefined1 *)(param_2 + 0x12);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1045dbd48(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1045dc2d0; end: 1045dc38f;  */

void FUN_1045dc2d0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e5e0,0xe9,&uStack_48,&lStack_40);
  puRam00000001138140f8 = puStack_38;
  lRam00000001138140f0 = lStack_40;
  puRam0000000113814108 = puStack_28;
  puRam0000000113814100 = puStack_30;
  puRam0000000113814118 = puStack_18;
  puRam0000000113814110 = puStack_20;
  return;
}



/* Entry: 1045dc390; end: 1045dc4cf;  */

void FUN_1045dc390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f48 != -1) {
    _swift_once(0x113087f48,FUN_1045dc2d0);
  }
  uVar5 = uRam0000000113814118;
  uVar4 = uRam0000000113814110;
  uVar3 = uRam0000000113814108;
  uVar2 = uRam0000000113814100;
  uVar1 = uRam00000001138140f8;
  *param_1 = uRam00000001138140f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dc4d0; end: 1045dc58f;  */

void FUN_1045dc4d0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e5a0,0x31,&uStack_48,&lStack_40);
  puRam0000000113814128 = puStack_38;
  lRam0000000113814120 = lStack_40;
  puRam0000000113814138 = puStack_28;
  puRam0000000113814130 = puStack_30;
  puRam0000000113814148 = puStack_18;
  puRam0000000113814140 = puStack_20;
  return;
}



/* Entry: 1045dc590; end: 1045dc6cf;  */

void FUN_1045dc590(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f50 != -1) {
    _swift_once(0x113087f50,FUN_1045dc4d0);
  }
  uVar5 = uRam0000000113814148;
  uVar4 = uRam0000000113814140;
  uVar3 = uRam0000000113814138;
  uVar2 = uRam0000000113814130;
  uVar1 = uRam0000000113814128;
  *param_1 = uRam0000000113814120;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dc6d0; end: 1045dc6f7;  */

undefined * FUN_1045dc6d0(void)

{
  return &UNK_11078b1b8;
}



/* Entry: 1045dc6f8; end: 1045dc7b7;  */

void FUN_1045dc6f8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e580,0x10,&uStack_48,&lStack_40);
  puRam0000000113814158 = puStack_38;
  lRam0000000113814150 = lStack_40;
  puRam0000000113814168 = puStack_28;
  puRam0000000113814160 = puStack_30;
  puRam0000000113814178 = puStack_18;
  puRam0000000113814170 = puStack_20;
  return;
}



/* Entry: 1045dc7b8; end: 1045dc857;  */

void FUN_1045dc7b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f58 != -1) {
    _swift_once(0x113087f58,FUN_1045dc6f8);
  }
  uVar5 = uRam0000000113814178;
  uVar4 = uRam0000000113814170;
  uVar3 = uRam0000000113814168;
  uVar2 = uRam0000000113814160;
  uVar1 = uRam0000000113814158;
  *param_1 = uRam0000000113814150;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dc858; end: 1045dc987;  */

undefined8 FUN_1045dc858(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(ulong *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar8 = *(ulong *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  if (uVar2 == 0) {
LAB_1045dc948:
    uVar1 = 1;
  }
  else {
    uStack_90 = uVar2;
    uStack_88 = uVar4;
    uStack_80 = uVar6;
    uStack_78 = uVar8;
    uStack_70 = uVar1;
    uStack_68 = uVar3;
    uStack_60 = uVar5;
    uStack_58 = uVar7;
    _swift_bridgeObjectRetain(uVar2);
    func_0x00010006c00c(uVar4,uVar6);
    _swift_bridgeObjectRetain(uVar8);
    func_0x0001045f8978(uVar1,uVar3,uVar5,uVar7);
    FUN_104559288();
    if ((uVar8 & 1) == 0) {
LAB_1045dc950:
      func_0x000104603c54(&uStack_90,0x113087028,&UNK_10dd18940);
    }
    else {
      if (uVar5 != 0) {
        func_0x00010006c00c(uVar1,uVar3);
        uVar8 = uVar5;
        _swift_bridgeObjectRetain();
        FUN_104559288();
        func_0x00010458a4f4(uVar1,uVar3,uVar5,uVar7);
        if ((uVar8 & 1) == 0) goto LAB_1045dc950;
      }
      func_0x0001045be170();
      uVar8 = uVar2;
      FUN_10456cde8();
      func_0x000104603c54(&uStack_90,0x113087028,&UNK_10dd18940);
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar8 & 1) != 0) goto LAB_1045dc948;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1045dc988; end: 1045dca27;  */

uint FUN_1045dc988(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_104559288();
  if ((uVar2 & 1) == 0) {
LAB_1045dca10:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[6];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[7];
      uVar5 = unaff_x20[4];
      uVar4 = unaff_x20[5];
      func_0x00010006c00c(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_1045dca10;
    }
    uVar4 = *unaff_x20;
    func_0x0001045be170(uVar4);
    uVar5 = uVar4;
    FUN_10456d190();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 1045dca28; end: 1045dcafb;  */

/* WARNING: Removing unreachable block (ram,0x0001045dcaf8) */

void FUN_1045dca28(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x10,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000103a17e2c();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_11078dd70,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045dcafc; end: 1045dcb7b;  */

void FUN_1045dcafc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[2],unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    FUN_1045dcb7c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045dcb7c; end: 1045dcc0f;  */

void FUN_1045dcb7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_80 = *(long *)(param_1 + 0x20);
  if (lStack_80 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103a17e2c();
    (*pcVar1)(&lStack_80,2,&UNK_11078dd70,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045dcc10; end: 1045dcc13;  */

uint FUN_1045dcc10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_280 [64];
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 == 0) goto LAB_1045f53dc;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_1045f53dc:
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_178 = param_1[5];
    lStack_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_f8 = param_2[5];
    uStack_100 = param_2[4];
    uStack_e8 = param_2[7];
    uStack_f0 = param_2[6];
    uStack_d8 = param_2[9];
    uStack_e0 = param_2[8];
    uStack_c8 = param_2[0xb];
    uStack_d0 = param_2[10];
    uStack_1b8 = param_2[5];
    lStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    lStack_140 = lStack_1c0;
    uStack_138 = uStack_1b8;
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    if (lStack_180 == 0) {
      if (lStack_1c0 == 0) {
        uStack_1f8 = param_1[5];
        lStack_200 = param_1[4];
        uStack_1e8 = param_1[7];
        uStack_1f0 = param_1[6];
        uStack_1d8 = param_1[9];
        uStack_1e0 = param_1[8];
        uStack_1c8 = param_1[0xb];
        uStack_1d0 = param_1[10];
        func_0x0001045f8fa8(&uStack_c0,&uStack_80,0x113087028,&UNK_10dd18940);
        func_0x0001045f8fa8(&uStack_100,&uStack_80,0x113087028,&UNK_10dd18940);
        func_0x000104603c54(&lStack_200,0x113087028,&UNK_10dd18940);
LAB_1045f559c:
        uVar4 = *param_1;
        func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar4;
        goto LAB_1045f55a8;
      }
    }
    else if (lStack_1c0 != 0) {
      uStack_238 = param_2[5];
      lStack_240 = param_2[4];
      uStack_228 = param_2[7];
      uStack_230 = param_2[6];
      uStack_218 = param_2[9];
      uStack_220 = param_2[8];
      uStack_208 = param_2[0xb];
      uStack_210 = param_2[10];
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_58 = param_1[9];
      uStack_60 = param_1[8];
      uStack_48 = param_1[0xb];
      uStack_50 = param_1[10];
      lStack_200 = lStack_240;
      uStack_1f8 = uStack_238;
      uStack_1f0 = uStack_230;
      uStack_1e8 = uStack_228;
      uStack_1e0 = uStack_220;
      uStack_1d8 = uStack_218;
      uStack_1d0 = uStack_210;
      uStack_1c8 = uStack_208;
      func_0x0001045f8fa8(&uStack_c0,auStack_280,0x113087028,&UNK_10dd18940);
      func_0x0001045f8fa8(&uStack_100,auStack_280,0x113087028,&UNK_10dd18940);
      puVar3 = &uStack_80;
      func_0x0001045f7c60(puVar3,&lStack_200);
      func_0x000104603c54(&lStack_240,0x113087028,&UNK_10dd18940);
      func_0x000104603c54(&lStack_180,0x113087028,&UNK_10dd18940);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1045f559c;
      goto LAB_1045f54c0;
    }
    lStack_200 = lStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    func_0x0001045f8fa8(&uStack_c0,&uStack_80,0x113087028,&UNK_10dd18940);
    func_0x0001045f8fa8(&uStack_100,&uStack_80,0x113087028,&UNK_10dd18940);
    func_0x000104603c54(&lStack_200,0x113087a00,&UNK_10dd19c28);
    uVar1 = 0;
    goto LAB_1045f55a8;
  }
LAB_1045f54c0:
  uVar1 = 0;
LAB_1045f55a8:
  return uVar1 & 1;
}



/* Entry: 1045dcc14; end: 1045dcc4f;  */

void FUN_1045dcc14(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1045bfa40(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045dcc50; end: 1045dcc8b;  */

void FUN_1045dcc50(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 1045dcc8c; end: 1045dccbb;  */

undefined1  [16] FUN_1045dcc8c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045dccbc; end: 1045dccef;  */

void FUN_1045dccbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045dccf0; end: 1045dcd03;  */

undefined8 FUN_1045dccf0(void)

{
  return 0x1045dcd00;
}



/* Entry: 1045dcd04; end: 1045dcd17;  */

void FUN_1045dcd04(void)

{
  FUN_1045dca28();
  return;
}



/* Entry: 1045dcd18; end: 1045dcd57;  */

void FUN_1045dcd18(void)

{
  FUN_1045dcafc();
  return;
}



/* Entry: 1045dcd58; end: 1045dcdf7;  */

void FUN_1045dcd58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f58 != -1) {
    _swift_once(0x113087f58,FUN_1045dc6f8);
  }
  uVar5 = uRam0000000113814178;
  uVar4 = uRam0000000113814170;
  uVar3 = uRam0000000113814168;
  uVar2 = uRam0000000113814160;
  uVar1 = uRam0000000113814158;
  *param_1 = uRam0000000113814150;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dcdf8; end: 1045dce33;  */

void FUN_1045dcdf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893b0,&UNK_10dd1d8c0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045dce34; end: 1045dcf27;  */

void FUN_1045dce34(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_28 = unaff_x20[0xb];
  uStack_30 = unaff_x20[10];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  FUN_1045bfa40(auStack_c8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045dcf28; end: 1045dcf7f;  */

uint FUN_1045dcf28(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1045f5384(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1045dcf80; end: 1045dcfa7;  */

undefined * FUN_1045dcf80(void)

{
  return &UNK_11078b1c8;
}



/* Entry: 1045dcfa8; end: 1045dd067;  */

void FUN_1045dcfa8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e530,0x42,&uStack_48,&lStack_40);
  puRam0000000113814188 = puStack_38;
  lRam0000000113814180 = lStack_40;
  puRam0000000113814198 = puStack_28;
  puRam0000000113814190 = puStack_30;
  puRam00000001138141a8 = puStack_18;
  puRam00000001138141a0 = puStack_20;
  return;
}



/* Entry: 1045dd068; end: 1045dd107;  */

void FUN_1045dd068(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f60 != -1) {
    _swift_once(0x113087f60,FUN_1045dcfa8);
  }
  uVar5 = uRam00000001138141a8;
  uVar4 = uRam00000001138141a0;
  uVar3 = uRam0000000113814198;
  uVar2 = uRam0000000113814190;
  uVar1 = uRam0000000113814188;
  *param_1 = uRam0000000113814180;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dd108; end: 1045dd1c7;  */

void FUN_1045dd108(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1045f8adc();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined **)(lVar2 + 0x70) = puVar1;
  *(undefined **)(lVar2 + 0x78) = puVar1;
  *(undefined1 *)(lVar2 + 0x80) = 3;
  lRam0000000113087a18 = lVar2;
  return;
}



/* Entry: 1045dd1c8; end: 1045dd1cf;  */

undefined8 FUN_1045dd1c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_68,0,0);
  uVar1 = *(ulong *)(param_3 + 0x20);
  uVar6 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045bec6c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar6;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x28,auStack_c8,0,0);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar1 = *(ulong *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  uStack_90 = *(undefined8 *)(param_3 + 0x48);
  uVar8 = *(ulong *)(param_3 + 0x60);
  uVar7 = *(undefined8 *)(param_3 + 0x58);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  uVar6 = *(ulong *)(param_3 + 0x40);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  if (uVar1 == 0) {
    return 1;
  }
  uStack_b0 = uVar1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_88 = uVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar3,uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x0001045f8978(uVar5,uVar7,uVar8,uVar2);
  FUN_104559288();
  if ((uVar6 & 1) == 0) {
LAB_1045dd348:
    func_0x000104603c54(&uStack_b0,0x113087020,&UNK_10dd19c30);
  }
  else {
    if (uVar8 != 0) {
      func_0x00010006c00c(uVar5,uVar7);
      uVar6 = uVar8;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar7,uVar8,uVar2);
      if ((uVar6 & 1) == 0) goto LAB_1045dd348;
    }
    func_0x0001045be170();
    uVar6 = uVar1;
    FUN_10456cde8();
    func_0x000104603c54(&uStack_b0,0x113087020,&UNK_10dd19c30);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045dd1d0; end: 1045dd37f;  */

undefined8 FUN_1045dd1d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar6 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0001045bec6c();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar6;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_c8,0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(ulong *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(ulong *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return 1;
  }
  uStack_b0 = uVar1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_88 = uVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar3,uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x0001045f8978(uVar5,uVar7,uVar8,uVar2);
  FUN_104559288();
  if ((uVar6 & 1) == 0) {
LAB_1045dd348:
    func_0x000104603c54(&uStack_b0,0x113087020,&UNK_10dd19c30);
  }
  else {
    if (uVar8 != 0) {
      func_0x00010006c00c(uVar5,uVar7);
      uVar6 = uVar8;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar7,uVar8,uVar2);
      if ((uVar6 & 1) == 0) goto LAB_1045dd348;
    }
    func_0x0001045be170();
    uVar6 = uVar1;
    FUN_10456cde8();
    func_0x000104603c54(&uStack_b0,0x113087020,&UNK_10dd19c30);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045dd380; end: 1045dd383;  */

uint FUN_1045dd380(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_104559288();
  if ((uVar2 & 1) == 0) {
LAB_1045e0d88:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[7];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[8];
      uVar5 = unaff_x20[5];
      uVar4 = unaff_x20[6];
      func_0x00010006c00c(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_1045e0d88;
    }
    uVar4 = *unaff_x20;
    func_0x0001045be170(uVar4);
    uVar5 = uVar4;
    FUN_10456d190();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 1045dd384; end: 1045dd3b3;  */

void FUN_1045dd384(void)

{
  FUN_1045dd3b4();
  return;
}



/* Entry: 1045dd3b4; end: 1045dd47f;  */

void FUN_1045dd3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,code *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    (*param_4)(0);
    _swift_allocObject();
    (*param_6)();
    _swift_release(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  (*param_7)(uVar3,param_1,param_2,param_3);
  return;
}


