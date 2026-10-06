/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0018041c; end: 0018044f;  */

void FUN_0018041c(void)

{
  FUN_00180450();
  return;
}



/* Entry: 00180450; end: 0018057b;  */

/* WARNING: Removing unreachable block (ram,0x00180578) */

void FUN_00180450(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                 code *param_6,undefined8 param_7)

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
      if (lVar1 == 1) {
        pcVar3 = *(code **)(param_3 + 0x1a0);
        (*param_4)();
        (*pcVar3)();
      }
      else if (lVar1 == 536000000) {
        (*param_6)();
        (**(code **)(param_3 + 0x1d0))(unaff_x20 + 0x18,param_7,lVar1,536000000,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0018057c; end: 001805ab;  */

void FUN_0018057c(void)

{
  FUN_001805ac();
  return;
}



/* Entry: 001805ac; end: 0018067f;  */

void FUN_001805ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,code *param_8,undefined8 param_9
                 )

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_7 + 0x118);
    uVar1 = param_1;
    (*param_8)();
    (*pcVar2)(param_2,1,param_9,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  (**(code **)(param_7 + 0x1b0))(param_5,536000000,0x1ff2b601,param_6,param_7);
  if (unaff_x21 == 0) {
    FUN_0013ad2c(param_1,param_3,param_4,param_6,param_7);
  }
  return;
}



/* Entry: 00180680; end: 00180703;  */

bool FUN_00180680(ulong param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  FUN_00149b3c(param_1,param_5);
  if (((param_1 & 1) == 0) || (FUN_00038814(param_2,param_3,param_6,param_7), (param_2 & 1) == 0)) {
    return false;
  }
  if (*(long *)(param_4 + 0x10) != *(long *)(param_8 + 0x10)) {
    return false;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_4 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_4 + 0x40);
  uVar9 = uVar9 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar4 = lVar7;
  if (uVar10 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 - 1 & uVar10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_4 + 0x30) + uVar8 * 8);
  FUN_000e1304(*(long *)(param_4 + 0x38) + uVar8 * 0x28,&uStack_c8);
  lVar7 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_4);
      return true;
    }
    uVar8 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(param_8 + 0x10) == 0) || (FUN_000e1d94(lVar4), (uVar8 & 1) == 0)) {
LAB_000e3018:
      _swift_release(param_4);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(param_8 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    FUN_0001393c(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    FUN_0001393c(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_4);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar4 = lVar7;
    if (uVar10 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar8 = uVar9;
    if ((long)uVar9 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    while( true ) {
      lVar4 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar9 <= lVar4) break;
      uVar10 = ((ulong *)(param_4 + 0x40))[lVar4];
      lVar7 = lVar7 + 1;
      if (uVar10 != 0) goto LAB_000e2ecc;
    }
    uVar10 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar7 = uVar8 - 1;
  } while( true );
}



/* Entry: 00180704; end: 0018070f;  */

void FUN_00180704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  (*(code *)0x14ceac)(auStack_88,param_1,param_2,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00180710; end: 0018077f;  */

void FUN_00180710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  (*param_5)(auStack_88,param_1,param_2,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00180780; end: 001807cb;  */

void FUN_00180780(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  return;
}



/* Entry: 001807cc; end: 001807fb;  */

undefined1  [16] FUN_001807cc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 001807fc; end: 0018082f;  */

void FUN_001807fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00180830; end: 00180843;  */

undefined1  [16] FUN_00180830(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x180840;
  return auVar1;
}



/* Entry: 00180844; end: 0018087b;  */

void FUN_00180844(void)

{
  FUN_0018041c();
  return;
}



/* Entry: 0018087c; end: 0018091b;  */

void FUN_0018087c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f60 != -1) {
    _swift_once(0xaf0f60,FUN_001802bc);
  }
  uVar5 = uRam0000000000b65598;
  uVar4 = uRam0000000000b65590;
  uVar3 = uRam0000000000b65588;
  uVar2 = uRam0000000000b65580;
  uVar1 = uRam0000000000b65578;
  *param_1 = uRam0000000000b65570;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0018091c; end: 0018092f;  */

void FUN_0018091c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21c0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21c0,&UNK_007deba0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00180930; end: 00180963;  */

void FUN_00180930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 00180964; end: 0018096f;  */

void FUN_00180964(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  (*(code *)0x14ceac)(auStack_88,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00180970; end: 001809d7;  */

void FUN_00180970(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  (*param_3)(auStack_88,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001809d8; end: 001809ef;  */

/* WARNING: Removing unreachable block (ram,0x0014d168) */

void FUN_001809d8(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_1e8 [72];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *unaff_x20;
  lVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  lVar14 = *(long *)(lVar8 + 0x10);
  if (lVar14 != 0) {
    __ss6HasherV8_combineyySuF(1);
    lVar15 = 0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    do {
      plVar7 = (long *)(lVar8 + 0x20 + lVar15 * 0x48);
      lStack_110 = plVar7[8];
      lStack_128 = plVar7[5];
      uStack_130 = plVar7[4];
      lStack_118 = plVar7[7];
      lStack_120 = plVar7[6];
      lStack_148 = plVar7[1];
      lVar9 = *plVar7;
      lStack_138 = plVar7[3];
      lStack_140 = plVar7[2];
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_160 = uStack_c0;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      lVar13 = *(long *)(lVar9 + 0x10);
      lStack_150 = lVar9;
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar11);
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
      lVar9 = lStack_148;
      lVar13 = *(long *)(lStack_148 + 0x10);
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar11);
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
      lVar9 = lStack_120;
      lVar13 = lStack_128;
      if (lStack_120 == 0) {
        func_0x00191f94(&lStack_150,auStack_1e8);
        lVar13 = lStack_118;
        lVar9 = lStack_110;
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        func_0x00191f94(&lStack_150,auStack_1e8);
        __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar13,lVar9);
        lVar13 = lStack_118;
        lVar9 = lStack_110;
      }
      lStack_118 = lVar13;
      lStack_110 = lVar9;
      if (lVar9 != 0) {
        __ss6HasherV8_combineyySuF(4);
        __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar13,lVar9);
      }
      lVar9 = lStack_140;
      lVar13 = *(long *)(lStack_140 + 0x10);
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar12 = (undefined8 *)(lVar9 + 0x28);
        do {
          uVar1 = puVar12[-1];
          uVar3 = *puVar12;
          _swift_bridgeObjectRetain(uVar3);
          __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,uVar1,uVar3);
          _swift_bridgeObjectRelease(uVar3);
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar5 = (uint)(uStack_130 >> 0x20);
      uVar6 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uStack_130 & 0xff000000000000) == 0) goto LAB_0014d0f4;
        }
        else {
          lVar13 = (long)(int)lStack_138;
          lVar9 = lStack_138 >> 0x20;
LAB_0014d0e4:
          if (lVar13 == lVar9) goto LAB_0014d0f4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1a0);
      }
      else if (uVar6 == 2) {
        lVar13 = *(long *)(lStack_138 + 0x10);
        lVar9 = *(long *)(lStack_138 + 0x18);
        goto LAB_0014d0e4;
      }
LAB_0014d0f4:
      lVar15 = lVar15 + 1;
      func_0x00191fc8(&lStack_150);
      if (lVar15 == lVar14) goto LAB_0014d124;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      uStack_d0 = uStack_170;
      uStack_c0 = uStack_160;
      uStack_f8 = uStack_198;
      uStack_100 = uStack_1a0;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
    } while( true );
  }
LAB_0014d140:
  FUN_0013bd14(&uStack_b0,536000000,0x1ff2b601,lVar10);
  uVar5 = (uint)(uVar2 >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar8 = (long)(int)lVar4;
      lVar10 = lVar4 >> 0x20;
      goto LAB_0014d1dc;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0014d170;
  }
  else {
    if (uVar6 != 2) goto LAB_0014d170;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar10 = *(long *)(lVar4 + 0x18);
LAB_0014d1dc:
    if (lVar8 == lVar10) goto LAB_0014d170;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_b0,lVar4,uVar2);
LAB_0014d170:
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
LAB_0014d124:
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_78 = uStack_168;
  uStack_80 = uStack_170;
  uStack_70 = uStack_160;
  uStack_a8 = uStack_198;
  uStack_b0 = uStack_1a0;
  uStack_98 = uStack_188;
  uStack_a0 = uStack_190;
  goto LAB_0014d140;
}



/* Entry: 001809f0; end: 00180ad3;  */

void FUN_001809f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  (*in_x3)(auStack_88,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00180ad4; end: 00180b3f;  */

void FUN_00180ad4(void)

{
  __sSS6appendyySSF(0x6f697461636f4c2e,0xe90000000000006e);
  uRam0000000000b655a0 = 0xd00000000000001e;
  uRam0000000000b655a8 = 0x80000000008b94d0;
  return;
}



/* Entry: 00180b40; end: 00180b7f;  */

undefined8 FUN_00180b40(void)

{
  if (lRam0000000000af0f70 != -1) {
    _swift_once(0xaf0f70,FUN_00180ad4);
  }
  return 0xb655a0;
}



/* Entry: 00180b80; end: 00180b9f;  */

undefined1  [16] FUN_00180b80(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0f70 != -1) {
    _swift_once(0xaf0f70,FUN_00180ad4);
  }
  auVar1._8_8_ = uRam0000000000b655a8;
  auVar1._0_8_ = uRam0000000000b655a0;
  _swift_bridgeObjectRetain(uRam0000000000b655a8);
  return auVar1;
}



/* Entry: 00180ba0; end: 00180c5f;  */

void FUN_00180ba0(void)

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
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007ded00,0x4e,&uStack_48,&lStack_40);
  puRam0000000000b655b8 = puStack_38;
  lRam0000000000b655b0 = lStack_40;
  puRam0000000000b655c8 = puStack_28;
  puRam0000000000b655c0 = puStack_30;
  puRam0000000000b655d8 = puStack_18;
  puRam0000000000b655d0 = puStack_20;
  return;
}



/* Entry: 00180c60; end: 00180cff;  */

void FUN_00180c60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f78 != -1) {
    _swift_once(0xaf0f78,FUN_00180ba0);
  }
  uVar5 = uRam0000000000b655d8;
  uVar4 = uRam0000000000b655d0;
  uVar3 = uRam0000000000b655c8;
  uVar2 = uRam0000000000b655c0;
  uVar1 = uRam0000000000b655b8;
  *param_1 = uRam0000000000b655b0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00180d00; end: 00180ddf;  */

void FUN_00180d00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
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
          pcVar3 = *(code **)(param_3 + 0x58);
          goto LAB_00180dac;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x58);
          goto LAB_00180dac;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x158);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x158);
        }
        else {
          if (lVar1 != 6) goto LAB_00180dbc;
          pcVar3 = *(code **)(param_3 + 0x160);
        }
LAB_00180dac:
        (*pcVar3)();
      }
LAB_00180dbc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00180de0; end: 00180f57;  */

void FUN_00180de0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  lVar6 = *unaff_x20;
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar7);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  lVar6 = unaff_x20[1];
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar7);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  lVar5 = unaff_x20[6];
  if (lVar5 != 0) {
    lVar6 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar5);
  }
  lVar5 = unaff_x20[8];
  if (lVar5 != 0) {
    lVar6 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar5);
  }
  lVar6 = unaff_x20[2];
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(lVar5);
    puVar8 = (undefined8 *)(lVar6 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar8 = puVar8 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = unaff_x20[3];
  uVar3 = (uint)((ulong)unaff_x20[4] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[4] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00180f38;
    }
    lVar6 = (long)(int)lVar5;
    lVar5 = lVar5 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  if (lVar6 == lVar5) {
    return;
  }
LAB_00180f38:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00180f58; end: 00181053;  */

void FUN_00180f58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x138))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((*(long *)(unaff_x20[1] + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x138))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],3,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      if (unaff_x20[8] != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[7],unaff_x20[8],4,param_2,param_3);
      }
      if (*(long *)(unaff_x20[2] + 0x10) != 0) {
        (**(code **)(param_3 + 0x100))(unaff_x20[2],6,param_2,param_3);
      }
      FUN_0013ad2c(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
    }
  }
  return;
}



/* Entry: 00181054; end: 00181063;  */

ulong FUN_00181054(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  ulong *unaff_x20;
  ulong uVar21;
  long lVar22;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar14 = *param_1;
  lVar19 = *param_2;
  lVar11 = *(long *)(lVar14 + 0x10);
  if (lVar11 != *(long *)(lVar19 + 0x10)) {
    return 0;
  }
  if (lVar11 != 0 && lVar14 != lVar19) {
    piVar15 = (int *)(lVar14 + 0x20);
    piVar20 = (int *)(lVar19 + 0x20);
    do {
      if (*piVar15 != *piVar20) {
        return 0;
      }
      lVar11 = lVar11 + -1;
      piVar15 = piVar15 + 1;
      piVar20 = piVar20 + 1;
    } while (lVar11 != 0);
  }
  lVar14 = param_1[1];
  lVar19 = param_2[1];
  lVar11 = *(long *)(lVar14 + 0x10);
  if (lVar11 != *(long *)(lVar19 + 0x10)) {
    return 0;
  }
  if (lVar11 != 0 && lVar14 != lVar19) {
    piVar15 = (int *)(lVar14 + 0x20);
    piVar20 = (int *)(lVar19 + 0x20);
    do {
      if (*piVar15 != *piVar20) {
        return 0;
      }
      lVar11 = lVar11 + -1;
      piVar15 = piVar15 + 1;
      piVar20 = piVar20 + 1;
    } while (lVar11 != 0);
  }
  lVar14 = param_1[6];
  lVar11 = param_2[6];
  if (lVar14 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[5];
    if (((uVar16 != param_2[5]) || (lVar14 != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,lVar14,param_2[5],lVar11,0), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  lVar14 = param_1[8];
  lVar11 = param_2[8];
  if (lVar14 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[7];
    if (((uVar16 != param_2[7]) || (lVar14 != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,lVar14,param_2[7],lVar11,0), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  uVar16 = param_1[2];
  FUN_000aa78c(uVar16,param_2[2]);
  if ((uVar16 & 1) == 0) {
    return 0;
  }
  lVar11 = param_1[3];
  pbVar8 = (byte *)param_1[4];
  lVar14 = param_2[3];
  uVar16 = param_2[4];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar11;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if (((lVar11 != 0) || (pbVar8 != (byte *)0xc000000000000000)) ||
       ((uVar16 >> 0x3e < 3 || ((uVar13 = 0, lVar14 != 0 || (uVar16 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)((ulong)lVar11 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar12,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)lVar14)) goto LAB_0003899c;
    }
    else {
      if (uVar10 == 2) {
        uVar13 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
        if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (uVar17 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar16 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar18) {
LAB_0003899c:
        uVar16 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar13) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)lVar11;
          abStack_70[1] = (byte)((ulong)lVar11 >> 8);
          abStack_70[2] = (byte)((ulong)lVar11 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar11 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar11 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar11 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar11 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar11 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar16 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar22 = (long)iVar5;
        lVar19 = (lVar11 >> 0x20) - lVar22;
        if (lVar11 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar6 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar22,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar11 = (lVar22 - lVar6) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar19 <= lVar6) {
              lVar6 = lVar19;
            }
            pbVar9 = (byte *)(lVar6 + lVar11);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar22 = *(long *)(lVar11 + 0x10);
        lVar6 = *(long *)(lVar11 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar19 = lVar11;
        if (lVar11 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar22,lVar19)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar11 = (lVar22 - lVar19) + lVar11;
        }
        lVar1 = lVar6 - lVar22;
        if (SBORROW8(lVar6,lVar22)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar11 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar19) {
            lVar19 = lVar1;
          }
          pbVar9 = (byte *)(lVar19 + lVar11);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar11,pbVar9,lVar14,uVar16);
      uVar16 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar16 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar11 = (long)pbVar8 - uVar16;
  if (SBORROW8((long)pbVar8,uVar16)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar21 = *unaff_x20;
  uVar18 = uVar21 & 0xffffffffffffff8;
  uVar16 = uVar18 + 0x20 + uVar16 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar16;
  _swift_arrayDestroy(uVar16,lVar11,uVar7);
  lVar19 = lVar14 - lVar11;
  if (SBORROW8(lVar14,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar19 != 0) {
    if (uVar21 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar18 + 0x10);
      lVar11 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar18;
      if ((uVar21 & 0x8000000000000000) != 0) {
        uVar13 = uVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar11 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar16 = uVar16 + lVar14 * 8;
    uVar13 = uVar18 + 0x20 + (long)pbVar8 * 8;
    if (uVar16 != uVar13 || uVar13 + lVar11 * 8 <= uVar16) {
      _memmove(uVar16,uVar13,lVar11 << 3);
    }
    if (uVar21 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar13 = uVar18;
      if ((uVar21 & 0x8000000000000000) != 0) {
        uVar13 = uVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar19)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar13 + lVar19;
  }
  if (lVar14 < 1) {
    return uVar13;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00181064; end: 001810f7;  */

/* WARNING: Removing unreachable block (ram,0x001810b8) */

void FUN_00181064(code *param_1)

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
  (*param_1)(&uStack_d0);
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



/* Entry: 001810f8; end: 00181143;  */

void FUN_001810f8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 00181144; end: 00181173;  */

undefined1  [16] FUN_00181144(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                  *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 00181174; end: 001811a7;  */

void FUN_00181174(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 001811a8; end: 001811bb;  */

undefined1  [16] FUN_001811a8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1811b8;
  return auVar1;
}



/* Entry: 001811bc; end: 001811e3;  */

void FUN_001811bc(void)

{
  FUN_00180d00();
  return;
}



/* Entry: 001811e4; end: 00181283;  */

void FUN_001811e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f78 != -1) {
    _swift_once(0xaf0f78,FUN_00180ba0);
  }
  uVar5 = uRam0000000000b655d8;
  uVar4 = uRam0000000000b655d0;
  uVar3 = uRam0000000000b655c8;
  uVar2 = uRam0000000000b655c0;
  uVar1 = uRam0000000000b655b8;
  *param_1 = uRam0000000000b655b0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00181284; end: 00181297;  */

void FUN_00181284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21b8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21b8,&UNK_007deb98);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00181298; end: 001812cb;  */

void FUN_00181298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 001812cc; end: 001814af;  */

/* WARNING: Removing unreachable block (ram,0x00181338) */

void FUN_001812cc(void)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
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
  FUN_00180de0(&uStack_120);
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



/* Entry: 001814b0; end: 00181507;  */

uint FUN_001814b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x00182d7c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00181508; end: 0018152f;  */

undefined * FUN_00181508(void)

{
  return &UNK_009afc60;
}



/* Entry: 00181530; end: 001815ef;  */

void FUN_00181530(void)

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
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007deceb,0xd,&uStack_48,&lStack_40);
  puRam0000000000b655e8 = puStack_38;
  lRam0000000000b655e0 = lStack_40;
  puRam0000000000b655f8 = puStack_28;
  puRam0000000000b655f0 = puStack_30;
  puRam0000000000b65608 = puStack_18;
  puRam0000000000b65600 = puStack_20;
  return;
}



/* Entry: 001815f0; end: 0018168f;  */

void FUN_001815f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f80 != -1) {
    _swift_once(0xaf0f80,FUN_00181530);
  }
  uVar5 = uRam0000000000b65608;
  uVar4 = uRam0000000000b65600;
  uVar3 = uRam0000000000b655f8;
  uVar2 = uRam0000000000b655f0;
  uVar1 = uRam0000000000b655e8;
  *param_1 = uRam0000000000b655e0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00181690; end: 00181743;  */

/* WARNING: Removing unreachable block (ram,0x00181740) */

void FUN_00181690(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
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
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00187350();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00181744; end: 001817db;  */

void FUN_00181744(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (FUN_001a03f0(param_2,1), unaff_x21 != 0)) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001817b4;
    }
    lVar3 = (long)(int)param_3;
    lVar4 = param_3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_001817b4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}



/* Entry: 001817dc; end: 00181877;  */

void FUN_001817dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x00187350();
    (*pcVar2)(param_2,1,&UNK_009b33d0,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 00181878; end: 0018187b;  */

uint FUN_00181878(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uStack_c0 = puVar4[4];
        uStack_b8 = (undefined6)puVar4[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar4 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar4 + 0x2e) >> 0x10);
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        uStack_80 = puVar5[4];
        uStack_78 = (undefined6)puVar5[5];
        uStack_72 = (undefined2)*(undefined8 *)((long)puVar5 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar5 + 0x2e) >> 0x10);
        FUN_00191f34(&uStack_e0,auStack_118);
        FUN_00191f34(&uStack_a0,auStack_118);
        puVar2 = &uStack_e0;
        func_0x00182f04(puVar2,&uStack_a0);
        func_0x00191f68(&uStack_a0);
        func_0x00191f68(&uStack_e0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_0018314c;
        puVar5 = puVar5 + 7;
        puVar4 = puVar4 + 7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    FUN_00038814(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_0018314c:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 0018187c; end: 00181923;  */

/* WARNING: Removing unreachable block (ram,0x001818e4) */

void FUN_0018187c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00181744(&uStack_d0,param_1,param_2,param_3);
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



/* Entry: 00181924; end: 0018195b;  */

void FUN_00181924(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 0018195c; end: 0018198b;  */

undefined1  [16] FUN_0018195c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0018198c; end: 001819bf;  */

void FUN_0018198c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001819c0; end: 001819d3;  */

undefined1  [16] FUN_001819c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1819d0;
  return auVar1;
}



/* Entry: 001819d4; end: 00181a0b;  */

void FUN_001819d4(void)

{
  FUN_00181690();
  return;
}



/* Entry: 00181a0c; end: 00181aab;  */

void FUN_00181a0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f80 != -1) {
    _swift_once(0xaf0f80,FUN_00181530);
  }
  uVar5 = uRam0000000000b65608;
  uVar4 = uRam0000000000b65600;
  uVar3 = uRam0000000000b655f8;
  uVar2 = uRam0000000000b655f0;
  uVar1 = uRam0000000000b655e8;
  *param_1 = uRam0000000000b655e0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00181aac; end: 00181abf;  */

void FUN_00181aac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21b0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21b0,&UNK_007deb90);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00181ac0; end: 00181af3;  */

void FUN_00181ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 00181af4; end: 00181cb3;  */

/* WARNING: Removing unreachable block (ram,0x00181b58) */

void FUN_00181af4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
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
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
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
  FUN_00181744(&uStack_d0,uVar1,uVar2,uVar3);
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



/* Entry: 00181cb4; end: 00181ccf;  */

uint FUN_00181cb4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_d8 = puVar10[1];
        uStack_e0 = *puVar10;
        uStack_c8 = puVar10[3];
        uStack_d0 = puVar10[2];
        uStack_c0 = puVar10[4];
        uStack_b8 = (undefined6)puVar10[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar10 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar10 + 0x2e) >> 0x10);
        uStack_98 = puVar11[1];
        uStack_a0 = *puVar11;
        uStack_88 = puVar11[3];
        uStack_90 = puVar11[2];
        uStack_80 = puVar11[4];
        uStack_78 = (undefined6)puVar11[5];
        uStack_72 = (undefined2)*(undefined8 *)((long)puVar11 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar11 + 0x2e) >> 0x10);
        FUN_00191f34(&uStack_e0,auStack_118);
        FUN_00191f34(&uStack_a0,auStack_118);
        puVar5 = &uStack_e0;
        func_0x00182f04(puVar5,&uStack_a0);
        func_0x00191f68(&uStack_a0);
        func_0x00191f68(&uStack_e0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_0018314c;
        puVar11 = puVar11 + 7;
        puVar10 = puVar10 + 7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    FUN_00038814(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_0018314c:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 00181cd0; end: 00181d3f;  */

void FUN_00181cd0(void)

{
  __sSS6appendyySSF(0x7461746f6e6e412e,0xeb000000006e6f69);
  uRam0000000000b65610 = 0xd000000000000021;
  uRam0000000000b65618 = 0x80000000008b94f0;
  return;
}



/* Entry: 00181d40; end: 00181d7f;  */

undefined8 FUN_00181d40(void)

{
  if (lRam0000000000af0f90 != -1) {
    _swift_once(0xaf0f90,FUN_00181cd0);
  }
  return 0xb65610;
}



/* Entry: 00181d80; end: 00181d9f;  */

undefined1  [16] FUN_00181d80(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0f90 != -1) {
    _swift_once(0xaf0f90,FUN_00181cd0);
  }
  auVar1._8_8_ = uRam0000000000b65618;
  auVar1._0_8_ = uRam0000000000b65610;
  _swift_bridgeObjectRetain(uRam0000000000b65618);
  return auVar1;
}



/* Entry: 00181da0; end: 00181e5f;  */

void FUN_00181da0(void)

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
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007decc0,0x2a,&uStack_48,&lStack_40);
  puRam0000000000b65628 = puStack_38;
  lRam0000000000b65620 = lStack_40;
  puRam0000000000b65638 = puStack_28;
  puRam0000000000b65630 = puStack_30;
  puRam0000000000b65648 = puStack_18;
  puRam0000000000b65640 = puStack_20;
  return;
}



/* Entry: 00181e60; end: 00181eff;  */

void FUN_00181e60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f98 != -1) {
    _swift_once(0xaf0f98,FUN_00181da0);
  }
  uVar5 = uRam0000000000b65648;
  uVar4 = uRam0000000000b65640;
  uVar3 = uRam0000000000b65638;
  uVar2 = uRam0000000000b65630;
  uVar1 = uRam0000000000b65628;
  *param_1 = uRam0000000000b65620;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00181f00; end: 00182017;  */

/* WARNING: Removing unreachable block (ram,0x00181fe0) */

void FUN_00181f00(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x58);
        }
        else {
          if (lVar1 != 2) goto LAB_00181f78;
          pcVar4 = *(code **)(param_3 + 0x158);
        }
LAB_00181f68:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x50);
          goto LAB_00181f68;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x50);
          goto LAB_00181f68;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_00191ef4();
          (*pcVar4)(unaff_x20 + 0x35,&UNK_009b3478,lVar1,param_2,param_3);
        }
      }
LAB_00181f78:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00182018; end: 00182147;  */

void FUN_00182018(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar5 = *unaff_x20;
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar4);
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar6);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
    lVar4 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
    lVar4 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  cVar1 = *(char *)((long)unaff_x20 + 0x35);
  if (cVar1 != '\x03') {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(cVar1);
  }
  lVar4 = unaff_x20[1];
  uVar2 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00182128;
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
LAB_00182128:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00182148; end: 0018227b;  */

void FUN_00182148(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char cStack_41;
  
  uVar1 = *unaff_x20;
  if ((*(long *)(uVar1 + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x138))(uVar1,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[4] != 0) {
      uVar1 = unaff_x20[3];
      (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[4],2,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
        uVar1 = (ulong)(uint)unaff_x20[5];
        (**(code **)(param_3 + 0x18))(uVar1,3,param_2,param_3);
      }
      if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
        uVar1 = (ulong)(uint)unaff_x20[6];
        (**(code **)(param_3 + 0x18))(uVar1,4,param_2,param_3);
      }
      if (*(char *)((long)unaff_x20 + 0x35) != '\x03') {
        pcVar2 = *(code **)(param_3 + 0x80);
        cStack_41 = *(char *)((long)unaff_x20 + 0x35);
        FUN_00191ef4();
        (*pcVar2)(&cStack_41,5,&UNK_009b3478,uVar1,param_2,param_3);
      }
      FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
    }
  }
  return;
}



/* Entry: 0018227c; end: 0018227f;  */

ulong FUN_0018227c(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  ulong *unaff_x20;
  ulong uVar21;
  long lVar22;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar14 = *param_1;
  lVar19 = *param_2;
  lVar11 = *(long *)(lVar14 + 0x10);
  if (lVar11 != *(long *)(lVar19 + 0x10)) {
    return 0;
  }
  if (lVar11 != 0 && lVar14 != lVar19) {
    piVar15 = (int *)(lVar14 + 0x20);
    piVar20 = (int *)(lVar19 + 0x20);
    do {
      if (*piVar15 != *piVar20) {
        return 0;
      }
      lVar11 = lVar11 + -1;
      piVar15 = piVar15 + 1;
      piVar20 = piVar20 + 1;
    } while (lVar11 != 0);
  }
  lVar14 = param_1[4];
  lVar11 = param_2[4];
  if (lVar14 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[3];
    if (((uVar16 != param_2[3]) || (lVar14 != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,lVar14,param_2[3],lVar11,0), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    if (*(char *)((long)param_2 + 0x2c) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x2c) == '\x01') {
      return 0;
    }
    if ((int)param_1[5] != (int)param_2[5]) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    if (*(char *)((long)param_2 + 0x34) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x34) == '\x01') {
      return 0;
    }
    if ((int)param_1[6] != (int)param_2[6]) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x35) == '\x03') {
    if (*(char *)((long)param_2 + 0x35) != '\x03') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x35) != *(char *)((long)param_2 + 0x35)) {
    return 0;
  }
  lVar11 = param_1[1];
  pbVar8 = (byte *)param_1[2];
  lVar14 = param_2[1];
  uVar16 = param_2[2];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar11;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if (((lVar11 != 0) || (pbVar8 != (byte *)0xc000000000000000)) ||
       ((uVar16 >> 0x3e < 3 || ((uVar13 = 0, lVar14 != 0 || (uVar16 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)((ulong)lVar11 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar12,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)lVar14)) goto LAB_0003899c;
    }
    else {
      if (uVar10 == 2) {
        uVar13 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
        if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (uVar17 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar16 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar18) {
LAB_0003899c:
        uVar16 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar13) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)lVar11;
          abStack_70[1] = (byte)((ulong)lVar11 >> 8);
          abStack_70[2] = (byte)((ulong)lVar11 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar11 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar11 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar11 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar11 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar11 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar16 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar22 = (long)iVar5;
        lVar19 = (lVar11 >> 0x20) - lVar22;
        if (lVar11 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar6 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar22,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar11 = (lVar22 - lVar6) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar19 <= lVar6) {
              lVar6 = lVar19;
            }
            pbVar9 = (byte *)(lVar6 + lVar11);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar22 = *(long *)(lVar11 + 0x10);
        lVar6 = *(long *)(lVar11 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar19 = lVar11;
        if (lVar11 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar22,lVar19)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar11 = (lVar22 - lVar19) + lVar11;
        }
        lVar1 = lVar6 - lVar22;
        if (SBORROW8(lVar6,lVar22)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar11 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar19) {
            lVar19 = lVar1;
          }
          pbVar9 = (byte *)(lVar19 + lVar11);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar11,pbVar9,lVar14,uVar16);
      uVar16 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar16 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar11 = (long)pbVar8 - uVar16;
  if (SBORROW8((long)pbVar8,uVar16)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar21 = *unaff_x20;
  uVar18 = uVar21 & 0xffffffffffffff8;
  uVar16 = uVar18 + 0x20 + uVar16 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar16;
  _swift_arrayDestroy(uVar16,lVar11,uVar7);
  lVar19 = lVar14 - lVar11;
  if (SBORROW8(lVar14,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar19 != 0) {
    if (uVar21 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar18 + 0x10);
      lVar11 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar18;
      if ((uVar21 & 0x8000000000000000) != 0) {
        uVar13 = uVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar11 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar16 = uVar16 + lVar14 * 8;
    uVar13 = uVar18 + 0x20 + (long)pbVar8 * 8;
    if (uVar16 != uVar13 || uVar13 + lVar11 * 8 <= uVar16) {
      _memmove(uVar16,uVar13,lVar11 << 3);
    }
    if (uVar21 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar13 = uVar18;
      if ((uVar21 & 0x8000000000000000) != 0) {
        uVar13 = uVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar19)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar13 + lVar19;
  }
  if (lVar14 < 1) {
    return uVar13;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00182280; end: 0018230f;  */

/* WARNING: Removing unreachable block (ram,0x001822d0) */

void FUN_00182280(void)

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
  FUN_00182018(&uStack_d0);
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



/* Entry: 00182310; end: 00182367;  */

void FUN_00182310(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x34) = 0x301;
  return;
}



/* Entry: 00182368; end: 00182397;  */

undefined1  [16] FUN_00182368(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00182398; end: 001823cb;  */

void FUN_00182398(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001823cc; end: 001823df;  */

undefined1  [16] FUN_001823cc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1823dc;
  return auVar1;
}



/* Entry: 001823e0; end: 00182407;  */

void FUN_001823e0(void)

{
  FUN_00181f00();
  return;
}



/* Entry: 00182408; end: 001824a7;  */

void FUN_00182408(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f98 != -1) {
    _swift_once(0xaf0f98,FUN_00181da0);
  }
  uVar5 = uRam0000000000b65648;
  uVar4 = uRam0000000000b65640;
  uVar3 = uRam0000000000b65638;
  uVar2 = uRam0000000000b65630;
  uVar1 = uRam0000000000b65628;
  *param_1 = uRam0000000000b65620;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001824a8; end: 001824e3;  */

void FUN_001824a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21a8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21a8,&UNK_007deb88);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001824e4; end: 001826c7;  */

/* WARNING: Removing unreachable block (ram,0x00182550) */

void FUN_001824e4(void)

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
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined6)unaff_x20[5];
  uStack_42 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x2e);
  uStack_40 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2e) >> 0x10);
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
  FUN_00182018(&uStack_110);
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



/* Entry: 001826c8; end: 001827df;  */

uint FUN_001826c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined6)param_1[5];
  uStack_62 = (undefined2)*(undefined8 *)((long)param_1 + 0x2e);
  uStack_60 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x2e) >> 0x10);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined6)param_2[5];
  uStack_22 = (undefined2)*(undefined8 *)((long)param_2 + 0x2e);
  uStack_20 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x2e) >> 0x10);
  func_0x00182f04(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 001827e0; end: 0018291f;  */

void FUN_001827e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0fa0 != -1) {
    _swift_once(0xaf0fa0,0x182720);
  }
  uVar5 = uRam0000000000b65678;
  uVar4 = uRam0000000000b65670;
  uVar3 = uRam0000000000b65668;
  uVar2 = uRam0000000000b65660;
  uVar1 = uRam0000000000b65658;
  *param_1 = uRam0000000000b65650;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00182920; end: 00182be3;  */

uint FUN_00182920(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar2 = *param_1;
  FUN_00148a28(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar2 == 0) goto LAB_00182990;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 = param_1[3], uVar3 == param_2[3] && (param_1[4] == uVar2)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) != 0)))) {
LAB_00182990:
      if ((char)param_1[6] == '\x01') {
        if (*(char *)(param_2 + 6) != '\x01') goto LAB_00182b08;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 6) == '\x01') || (param_1[5] != param_2[5])) goto LAB_00182b0c;
      }
      if ((char)param_1[8] == '\x01') {
        if (*(char *)(param_2 + 8) != '\x01') goto LAB_00182b08;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 8) == '\x01') || (param_1[7] != param_2[7])) goto LAB_00182b0c;
      }
      if ((char)param_1[10] == '\x01') {
        if (*(char *)(param_2 + 10) != '\x01') goto LAB_00182b08;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 10) == '\x01') || ((double)param_1[9] != (double)param_2[9]))
        goto LAB_00182b0c;
      }
      uVar6 = param_1[0xc];
      uVar3 = param_1[0xb];
      uVar2 = param_2[0xc];
      uVar5 = param_2[0xb];
      uStack_70 = uVar5;
      uStack_68 = uVar2;
      uStack_60 = uVar3;
      uStack_58 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar2 >> 0x3c) goto LAB_00182ab8;
        func_0x00187028(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
        func_0x00187028(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
        uVar4 = uVar3;
        FUN_00038814(uVar3,uVar6,uVar5,uVar2);
        FUN_00023344(uVar5,uVar2);
        FUN_00023344(uVar3,uVar6);
        if ((uVar4 & 1) != 0) goto LAB_00182b98;
      }
      else if (uVar2 >> 0x3c < 0xf) {
LAB_00182ab8:
        func_0x00187028(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
        func_0x00187028(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
        FUN_00023344(uVar3,uVar6);
        FUN_00023344(uVar5,uVar2);
      }
      else {
        func_0x00187028(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
        func_0x00187028(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
        FUN_00023344(uVar3,uVar6);
LAB_00182b98:
        uVar2 = param_2[0xe];
        if (param_1[0xe] == 0) {
          if (uVar2 == 0) goto LAB_00182bd4;
        }
        else if ((uVar2 != 0) &&
                (((uVar3 = param_1[0xd], uVar3 == param_2[0xd] && (param_1[0xe] == uVar2)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_00182bd4:
          uVar2 = param_1[1];
          FUN_00038814(uVar2,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)uVar2;
          goto LAB_00182b0c;
        }
      }
    }
  }
LAB_00182b08:
  uVar1 = 0;
LAB_00182b0c:
  return uVar1 & 1;
}



/* Entry: 00182be4; end: 0018305f;  */

ulong FUN_00182be4(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((char)param_1[2] == '\f') {
    if ((char)param_2[2] != '\f') {
      return 0;
    }
  }
  else if ((char)param_1[2] != (char)param_2[2]) {
    return 0;
  }
  lVar13 = param_1[4];
  lVar11 = param_2[4];
  if (lVar13 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[3];
    if (((uVar16 != param_2[3]) || (lVar13 != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,lVar13,param_2[3],lVar11,0), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  lVar11 = *param_1;
  pbVar9 = (byte *)param_1[1];
  lVar13 = *param_2;
  uVar16 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar11;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar15 = 0;
    if (((lVar11 != 0) || (pbVar9 != (byte *)0xc000000000000000)) ||
       ((uVar16 >> 0x3e < 3 || ((uVar15 = 0, lVar13 != 0 || (uVar16 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar15 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)((ulong)lVar11 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar15 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar15 != (long)(iVar14 - (int)lVar13)) goto LAB_0003899c;
    }
    else {
      if (uVar12 == 2) {
        uVar15 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
        if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar15 = 0;
      if (uVar17 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar16 = (ulong)(uVar15 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar15 != uVar18) {
LAB_0003899c:
        uVar16 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar15) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)lVar11;
          abStack_70[1] = (byte)((ulong)lVar11 >> 8);
          abStack_70[2] = (byte)((ulong)lVar11 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar11 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar11 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar11 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar11 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar11 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar16 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar11 >> 0x20) - lVar20;
        if (lVar11 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar7 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar11 = (lVar20 - lVar7) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar10 = (byte *)(lVar7 + lVar11);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar7 = *(long *)(lVar11 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar11;
        if (lVar11 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar11 = (lVar20 - lVar6) + lVar11;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar11 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar10 = (byte *)(lVar6 + lVar11);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar11,pbVar10,lVar13,uVar16);
      uVar16 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar16 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar11 = (long)pbVar9 - uVar16;
  if (SBORROW8((long)pbVar9,uVar16)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar16 = uVar18 + 0x20 + uVar16 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar15 = uVar16;
  _swift_arrayDestroy(uVar16,lVar11,uVar8);
  lVar6 = lVar13 - lVar11;
  if (SBORROW8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar18 + 0x10);
      lVar11 = uVar15 - (long)pbVar9;
    }
    else {
      uVar15 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar11 = uVar15 - (long)pbVar9;
    }
    if (SBORROW8(uVar15,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar16 = uVar16 + lVar13 * 8;
    uVar15 = uVar18 + 0x20 + (long)pbVar9 * 8;
    if (uVar16 != uVar15 || uVar15 + lVar11 * 8 <= uVar16) {
      _memmove(uVar16,uVar15,lVar11 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar15 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar15,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar15 + lVar6;
  }
  if (lVar13 < 1) {
    return uVar15;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00183060; end: 00183173;  */

uint FUN_00183060(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uStack_c0 = puVar4[4];
        uStack_b8 = (undefined6)puVar4[5];
        uStack_b2 = (undefined2)*(undefined8 *)((long)puVar4 + 0x2e);
        uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)puVar4 + 0x2e) >> 0x10);
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        uStack_80 = puVar5[4];
        uStack_78 = (undefined6)puVar5[5];
        uStack_72 = (undefined2)*(undefined8 *)((long)puVar5 + 0x2e);
        uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)puVar5 + 0x2e) >> 0x10);
        FUN_00191f34(&uStack_e0,auStack_118);
        FUN_00191f34(&uStack_a0,auStack_118);
        puVar2 = &uStack_e0;
        func_0x00182f04(puVar2,&uStack_a0);
        func_0x00191f68(&uStack_a0);
        func_0x00191f68(&uStack_e0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_0018314c;
        puVar5 = puVar5 + 7;
        puVar4 = puVar4 + 7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    FUN_00038814(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_0018314c:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 00183174; end: 001831e3;  */

ulong FUN_00183174(long param_1,byte *param_2,ulong param_3,ulong param_4,long param_5,ulong param_6
                  ,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *unaff_x20;
  ulong uVar18;
  long lVar19;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  cVar11 = (char)((ulong)param_8 >> 0x20);
  cVar10 = (char)((ulong)param_7 >> 0x20);
  if ((param_3 & 0xff00000000) == 0x100000000) {
    if (cVar10 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar10 == '\x01') {
      return 0;
    }
    if ((int)param_3 != (int)param_7) {
      return 0;
    }
  }
  if ((param_4 & 0xff00000000) == 0x100000000) {
    if (cVar11 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar11 == '\x01') {
      return 0;
    }
    if ((int)param_4 != (int)param_8) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar14 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar13,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)param_5)) goto LAB_0003899c;
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (uVar15 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar14 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar14 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar14 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar19 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar19;
        if (param_1 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar19 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar19 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar19 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar19;
        if (SBORROW8(lVar7,lVar19)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_5,param_6);
      uVar14 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar14 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar14;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar14;
  if (SBORROW8((long)param_2,uVar14)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar17 = uVar18 & 0xffffffffffffff8;
  uVar14 = uVar17 + 0x20 + uVar14 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar14;
  _swift_arrayDestroy(uVar14,lVar6,uVar8);
  lVar19 = param_5 - lVar6;
  if (SBORROW8(param_5,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar19 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar17 + 0x10);
      lVar6 = uVar16 - (long)param_2;
    }
    else {
      uVar16 = uVar17;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar16 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar16 - (long)param_2;
    }
    if (SBORROW8(uVar16,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar14 = uVar14 + param_5 * 8;
    uVar16 = uVar17 + 0x20 + (long)param_2 * 8;
    if (uVar14 != uVar16 || uVar16 + lVar6 * 8 <= uVar14) {
      _memmove(uVar14,uVar16,lVar6 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar16 = uVar17;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar16 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar19)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar17 + 0x10) = uVar16 + lVar19;
  }
  if (param_5 < 1) {
    return uVar16;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 001831e4; end: 00183403;  */

ulong FUN_001831e4(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *unaff_x20;
  ulong uVar20;
  long lVar21;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar14 = param_1[3];
  lVar12 = param_2[3];
  if (lVar14 == 0) {
    if (lVar12 != 0) {
      return 0;
    }
  }
  else {
    if (lVar12 == 0) {
      return 0;
    }
    uVar17 = param_1[2];
    if ((uVar17 != param_2[2] || lVar14 != lVar12) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar17,lVar14,param_2[2],lVar12,0), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_2 + 4);
  if (*(byte *)(param_1 + 4) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)(param_1 + 4) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  lVar12 = *param_1;
  pbVar10 = (byte *)param_1[1];
  lVar14 = *param_2;
  uVar17 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar17 >> 0x20);
  uVar18 = uVar4 >> 0x1e;
  iVar6 = (int)lVar12;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar12 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar17 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar14 != 0 || (uVar17 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar12 >> 0x20);
        if (SBORROW4(iVar15,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar16 = (ulong)(iVar15 - iVar6);
      }
joined_r0x000389b8:
      if (1 < uVar4 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar18 == 0) {
        uVar19 = uVar17 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar14)) goto LAB_0003899c;
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
        if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (uVar18 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar18 != 2) {
        uVar17 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar16 != uVar19) {
LAB_0003899c:
        uVar17 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)lVar12;
          abStack_70[1] = (byte)((ulong)lVar12 >> 8);
          abStack_70[2] = (byte)((ulong)lVar12 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar12 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar12 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar12 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar12 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar12 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar17 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar21 = (long)iVar6;
        lVar7 = (lVar12 >> 0x20) - lVar21;
        if (lVar12 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar12 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar12 = 0;
        }
        else {
          lVar8 = lVar12;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          lVar12 = (lVar21 - lVar8) + lVar12;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar12 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar11 = (byte *)(lVar8 + lVar12);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar8 = *(long *)(lVar12 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = lVar12;
        if (lVar12 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          lVar12 = (lVar21 - lVar7) + lVar12;
        }
        lVar2 = lVar8 - lVar21;
        if (SBORROW8(lVar8,lVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar12 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar11 = (byte *)(lVar7 + lVar12);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar12,pbVar11,lVar14,uVar17);
      uVar17 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar17 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar17;
  }
  ___stack_chk_fail();
  lVar12 = (long)pbVar10 - uVar17;
  if (SBORROW8((long)pbVar10,uVar17)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar20 = *unaff_x20;
  uVar19 = uVar20 & 0xffffffffffffff8;
  uVar17 = uVar19 + 0x20 + uVar17 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar17;
  _swift_arrayDestroy(uVar17,lVar12,uVar9);
  lVar7 = lVar14 - lVar12;
  if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar7 != 0) {
    if (uVar20 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar19 + 0x10);
      lVar12 = uVar16 - (long)pbVar10;
    }
    else {
      uVar16 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar16 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar12 = uVar16 - (long)pbVar10;
    }
    if (SBORROW8(uVar16,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar17 = uVar17 + lVar14 * 8;
    uVar16 = uVar19 + 0x20 + (long)pbVar10 * 8;
    if (uVar17 != uVar16 || uVar16 + lVar12 * 8 <= uVar17) {
      _memmove(uVar17,uVar16,lVar12 << 3);
    }
    if (uVar20 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar19 + 0x10);
    }
    else {
      uVar16 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar16 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar7)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar19 + 0x10) = uVar16 + lVar7;
  }
  if (lVar14 < 1) {
    return uVar16;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar5)();
}



/* Entry: 00183404; end: 00183aeb;  */

uint FUN_00183404(undefined8 *param_1,undefined8 *param_2)

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
    if (lVar5 == 0) goto LAB_0018345c;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_0018345c:
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
        func_0x00187028(&uStack_c0,&uStack_80,0xaefe58,&UNK_007d9c30);
        func_0x00187028(&uStack_100,&uStack_80,0xaefe58,&UNK_007d9c30);
        func_0x00191ff4(&lStack_200,0xaefe58,&UNK_007d9c30);
LAB_0018361c:
        uVar4 = *param_1;
        FUN_00038814(uVar4,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar4;
        goto LAB_00183628;
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
      func_0x00187028(&uStack_c0,auStack_280,0xaefe58,&UNK_007d9c30);
      func_0x00187028(&uStack_100,auStack_280,0xaefe58,&UNK_007d9c30);
      puVar3 = &uStack_80;
      func_0x00185ce0(puVar3,&lStack_200);
      func_0x00191ff4(&lStack_240,0xaefe58,&UNK_007d9c30);
      func_0x00191ff4(&lStack_180,0xaefe58,&UNK_007d9c30);
      if (((ulong)puVar3 & 1) != 0) goto LAB_0018361c;
      goto LAB_00183540;
    }
    lStack_200 = lStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    func_0x00187028(&uStack_c0,&uStack_80,0xaefe58,&UNK_007d9c30);
    func_0x00187028(&uStack_100,&uStack_80,0xaefe58,&UNK_007d9c30);
    func_0x00191ff4(&lStack_200,0xaf08a0,&UNK_007dafb8);
    uVar1 = 0;
    goto LAB_00183628;
  }
LAB_00183540:
  uVar1 = 0;
LAB_00183628:
  return uVar1 & 1;
}



/* Entry: 00183aec; end: 00185277;  */

uint FUN_00183aec(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_428 [72];
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 uStack_3a0;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined8 uStack_30f;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 uStack_230;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
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
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  
  lVar5 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar5 == 0) goto LAB_00183b4c;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_00183b4c:
    lVar7 = *param_1;
    lVar6 = *param_2;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      if (lVar5 != 0 && lVar7 != lVar6) {
        puVar8 = (undefined8 *)(lVar7 + 0x20);
        puVar9 = (undefined8 *)(lVar6 + 0x20);
        do {
          uStack_178 = puVar8[1];
          uStack_180 = *puVar8;
          uStack_168 = puVar8[3];
          uStack_170 = puVar8[2];
          uStack_158 = puVar8[5];
          uStack_160 = puVar8[4];
          uStack_148 = puVar8[7];
          uStack_150 = puVar8[6];
          uStack_138 = puVar8[9];
          uStack_140 = puVar8[8];
          uStack_128 = puVar8[0xb];
          uStack_130 = puVar8[10];
          uStack_118 = puVar8[0xd];
          uStack_120 = puVar8[0xc];
          uStack_110 = puVar8[0xe];
          uStack_fe = *(undefined8 *)((long)puVar8 + 0x82);
          uStack_100 = (undefined2)((ulong)*(undefined8 *)((long)puVar8 + 0x7a) >> 0x30);
          uStack_108 = (undefined2)puVar8[0xf];
          uStack_106 = (undefined6)((ulong)puVar8[0xf] >> 0x10);
          uStack_e8 = puVar9[1];
          uStack_f0 = *puVar9;
          uStack_d8 = puVar9[3];
          uStack_e0 = puVar9[2];
          uStack_c8 = puVar9[5];
          uStack_d0 = puVar9[4];
          uStack_b8 = puVar9[7];
          uStack_c0 = puVar9[6];
          uStack_a8 = puVar9[9];
          uStack_b0 = puVar9[8];
          uStack_98 = puVar9[0xb];
          uStack_a0 = puVar9[10];
          uStack_88 = puVar9[0xd];
          uStack_90 = puVar9[0xc];
          uStack_80 = puVar9[0xe];
          uStack_6e = *(undefined8 *)((long)puVar9 + 0x82);
          uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x7a) >> 0x30);
          uStack_78 = (undefined2)puVar9[0xf];
          uStack_76 = (undefined6)((ulong)puVar9[0xf] >> 0x10);
          FUN_00192420(&uStack_180,&lStack_300);
          FUN_00192420(&uStack_f0,&lStack_300);
          puVar3 = &uStack_180;
          func_0x00183720(puVar3,&uStack_f0);
          func_0x00192454(&uStack_f0);
          func_0x00192454(&uStack_180);
          if (((ulong)puVar3 & 1) == 0) goto LAB_00183e04;
          puVar9 = puVar9 + 0x12;
          puVar8 = puVar8 + 0x12;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lStack_208 = param_1[8];
      lStack_210 = param_1[7];
      lStack_1f8 = param_1[10];
      lStack_200 = param_1[9];
      lStack_1e8 = param_1[0xc];
      lStack_1f0 = param_1[0xb];
      uStack_1e0 = (undefined1)param_1[0xd];
      lStack_218 = param_1[6];
      lStack_220 = param_1[5];
      lStack_258 = param_2[8];
      lStack_260 = param_2[7];
      lStack_248 = param_2[10];
      lStack_250 = param_2[9];
      lStack_238 = param_2[0xc];
      lStack_240 = param_2[0xb];
      uStack_230 = (undefined1)param_2[0xd];
      lStack_268 = param_2[6];
      lStack_270 = param_2[5];
      lStack_2e8 = param_1[8];
      lStack_2f0 = param_1[7];
      lStack_2d8 = param_1[10];
      lStack_2e0 = param_1[9];
      lStack_2c8 = param_1[0xc];
      lStack_2d0 = param_1[0xb];
      uStack_2c0 = (undefined1)param_1[0xd];
      lStack_2f8 = param_1[6];
      lStack_300 = param_1[5];
      lStack_330 = param_2[8];
      lStack_338 = param_2[7];
      lStack_320 = param_2[10];
      lStack_328 = param_2[9];
      uStack_280 = (undefined1)param_2[0xc];
      uStack_27f = (undefined7)((ulong)param_2[0xc] >> 8);
      uStack_288 = (undefined1)param_2[0xb];
      uStack_287 = (undefined7)((ulong)param_2[0xb] >> 8);
      uStack_278 = (undefined1)param_2[0xd];
      lStack_340 = param_2[6];
      lStack_348 = param_2[5];
      lStack_2b8 = lStack_348;
      lStack_2b0 = lStack_340;
      lStack_2a8 = lStack_338;
      lStack_2a0 = lStack_330;
      lStack_298 = lStack_328;
      lStack_290 = lStack_320;
      if (lStack_300 == 0) {
        if (lStack_348 == 0) {
          lStack_378 = param_1[8];
          lStack_380 = param_1[7];
          lStack_368 = param_1[10];
          lStack_370 = param_1[9];
          lStack_358 = param_1[0xc];
          lStack_360 = param_1[0xb];
          uStack_350 = CONCAT71(uStack_350._1_7_,(char)param_1[0xd]);
          lStack_388 = param_1[6];
          lStack_390 = param_1[5];
          func_0x00187028(&lStack_220,&lStack_1d0,0xaefe40,&UNK_007dafe0);
          func_0x00187028(&lStack_270,&lStack_1d0,0xaefe40,&UNK_007dafe0);
          func_0x00191ff4(&lStack_390,0xaefe40,&UNK_007dafe0);
LAB_00183e94:
          lVar5 = param_1[1];
          FUN_00038814(lVar5,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)lVar5;
          goto LAB_00183e08;
        }
      }
      else if (lStack_348 != 0) {
        lStack_3c8 = param_2[8];
        lStack_3d0 = param_2[7];
        lStack_3b8 = param_2[10];
        lStack_3c0 = param_2[9];
        lStack_3a8 = param_2[0xc];
        lStack_3b0 = param_2[0xb];
        uStack_3a0 = (undefined1)param_2[0xd];
        lStack_3d8 = param_2[6];
        lStack_3e0 = param_2[5];
        uStack_350 = CONCAT71(uStack_350._1_7_,uStack_3a0);
        lStack_1c8 = param_1[6];
        lStack_1d0 = param_1[5];
        lStack_1b8 = param_1[8];
        lStack_1c0 = param_1[7];
        lStack_1a8 = param_1[10];
        lStack_1b0 = param_1[9];
        lStack_198 = param_1[0xc];
        lStack_1a0 = param_1[0xb];
        uStack_190 = (undefined1)param_1[0xd];
        lStack_390 = lStack_3e0;
        lStack_388 = lStack_3d8;
        lStack_380 = lStack_3d0;
        lStack_378 = lStack_3c8;
        lStack_370 = lStack_3c0;
        lStack_368 = lStack_3b8;
        lStack_360 = lStack_3b0;
        lStack_358 = lStack_3a8;
        func_0x00187028(&lStack_220,auStack_428,0xaefe40,&UNK_007dafe0);
        func_0x00187028(&lStack_270,auStack_428,0xaefe40,&UNK_007dafe0);
        plVar4 = &lStack_1d0;
        FUN_0018554c(plVar4,&lStack_390);
        func_0x00191ff4(&lStack_3e0,0xaefe40,&UNK_007dafe0);
        func_0x00191ff4(&lStack_300,0xaefe40,&UNK_007dafe0);
        if (((ulong)plVar4 & 1) != 0) goto LAB_00183e94;
        goto LAB_00183e04;
      }
      uStack_30f = CONCAT17(uStack_278,uStack_27f);
      uStack_317 = uStack_287;
      uStack_310 = uStack_280;
      uStack_350 = CONCAT71(uStack_2bf,uStack_2c0);
      lStack_390 = lStack_300;
      lStack_388 = lStack_2f8;
      lStack_380 = lStack_2f0;
      lStack_378 = lStack_2e8;
      lStack_370 = lStack_2e0;
      lStack_368 = lStack_2d8;
      lStack_360 = lStack_2d0;
      lStack_358 = lStack_2c8;
      uStack_318 = uStack_288;
      func_0x00187028(&lStack_220,&lStack_1d0,0xaefe40,&UNK_007dafe0);
      func_0x00187028(&lStack_270,&lStack_1d0,0xaefe40,&UNK_007dafe0);
      func_0x00191ff4(&lStack_390,0xaf0978,&UNK_007dafe8);
    }
  }
LAB_00183e04:
  uVar1 = 0;
LAB_00183e08:
  return uVar1 & 1;
}



/* Entry: 00185278; end: 0018554b;  */

uint FUN_00185278(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_310 [80];
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    if (*(char *)((long)param_2 + 0x14) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x14) == '\x01' ||
           *(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    if (*(char *)((long)param_2 + 0x1c) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x1c) == '\x01' ||
           *(int *)(param_1 + 3) != *(int *)(param_2 + 3)) {
    return 0;
  }
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_b0 = param_1[10];
  uStack_a8 = (undefined1)param_1[0xb];
  uStack_9f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_1c8 = param_1[5];
  lStack_1d0 = param_1[4];
  uStack_208 = param_2[7];
  uStack_210 = param_2[6];
  uStack_108 = param_2[9];
  uStack_110 = param_2[8];
  uStack_1f8 = param_2[9];
  uStack_200 = param_2[8];
  uStack_100 = param_2[10];
  uStack_f8 = (undefined1)param_2[0xb];
  uStack_ef = *(undefined8 *)((long)param_2 + 0x61);
  uStack_f7 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_218 = param_2[5];
  lStack_220 = param_2[4];
  uStack_1a0 = param_1[10];
  uStack_198 = (undefined1)param_1[0xb];
  uStack_18f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
  uStack_188 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
  uStack_197 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_1f0 = param_2[10];
  uStack_148 = (undefined1)param_2[0xb];
  uStack_1df = *(undefined8 *)((long)param_2 + 0x61);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  lStack_180 = lStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_13f = uStack_1df;
  if (lStack_1d0 == 0) {
    if (lStack_220 != 0) goto LAB_00185434;
    uStack_248 = param_1[9];
    uStack_250 = param_1[8];
    uStack_240 = param_1[10];
    uStack_238 = (undefined1)param_1[0xb];
    uStack_22f = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
    uStack_228 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
    uStack_237 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
    uStack_230 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_268 = param_1[5];
    lStack_270 = param_1[4];
    uStack_258 = param_1[7];
    uStack_260 = param_1[6];
    func_0x00187028(&uStack_e0,&uStack_90,0xaefe90,&UNK_007e1580);
    func_0x00187028(&uStack_130,&uStack_90,0xaefe90,&UNK_007e1580);
    func_0x00191ff4(&lStack_270,0xaefe90,&UNK_007e1580);
  }
  else {
    if (lStack_220 == 0) {
LAB_00185434:
      uStack_1e8 = uStack_148;
      uStack_238 = uStack_198;
      uStack_237 = uStack_197;
      uStack_228 = uStack_188;
      uStack_230 = uStack_190;
      uStack_22f = uStack_18f;
      lStack_270 = lStack_1d0;
      uStack_268 = uStack_1c8;
      uStack_260 = uStack_1c0;
      uStack_258 = uStack_1b8;
      uStack_250 = uStack_1b0;
      uStack_248 = uStack_1a8;
      uStack_240 = uStack_1a0;
      uStack_1e7 = uStack_147;
      uStack_1e0 = uStack_140;
      func_0x00187028(&uStack_e0,&uStack_90,0xaefe90,&UNK_007e1580);
      func_0x00187028(&uStack_130,&uStack_90,0xaefe90,&UNK_007e1580);
      func_0x00191ff4(&lStack_270,0xaf07b0,&UNK_007daf80);
      uVar1 = 0;
      goto LAB_00185530;
    }
    uStack_298 = param_2[9];
    uStack_2a0 = param_2[8];
    uStack_290 = param_2[10];
    uStack_288 = (undefined1)param_2[0xb];
    uStack_27f = *(undefined8 *)((long)param_2 + 0x61);
    uStack_287 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
    uStack_280 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
    uStack_2b8 = param_2[5];
    lStack_2c0 = param_2[4];
    uStack_2a8 = param_2[7];
    uStack_2b0 = param_2[6];
    uStack_22f = (undefined7)uStack_27f;
    uStack_228 = (undefined1)((ulong)uStack_27f >> 0x38);
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_60 = param_1[10];
    uStack_4f = *(undefined8 *)((long)param_1 + 0x61);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
    uStack_58 = (undefined1)param_1[0xb];
    uStack_57 = (undefined7)((ulong)param_1[0xb] >> 8);
    lStack_270 = lStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_237 = uStack_287;
    uStack_230 = uStack_280;
    func_0x00187028(&uStack_e0,auStack_310,0xaefe90,&UNK_007e1580);
    func_0x00187028(&uStack_130,auStack_310,0xaefe90,&UNK_007e1580);
    puVar2 = &uStack_90;
    func_0x00184f8c(puVar2,&lStack_270);
    func_0x00191ff4(&lStack_2c0,0xaefe90,&UNK_007e1580);
    func_0x00191ff4(&lStack_1d0,0xaefe90,&UNK_007e1580);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_00185530;
    }
  }
  uVar3 = *param_1;
  FUN_00038814(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_00185530:
  return uVar1 & 1;
}



/* Entry: 0018554c; end: 0018617f;  */

uint FUN_0018554c(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar6 = param_1[5];
  uVar4 = param_1[4];
  uVar10 = param_1[7];
  uVar8 = param_1[6];
  uVar7 = param_2[5];
  uVar5 = param_2[4];
  uVar11 = param_2[7];
  lVar9 = param_2[6];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_00185634;
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,0,uVar10);
LAB_00185714:
    bVar1 = *(byte *)(param_2 + 8);
    if ((byte)param_1[8] == 2) {
      if (bVar1 != 2) goto LAB_00185694;
    }
    else {
      uVar2 = 0;
      if ((bVar1 == 2) || ((((byte)param_1[8] ^ bVar1) & 1) != 0)) goto LAB_00185698;
    }
    uVar4 = *param_1;
    func_0x00149810(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      FUN_00038814(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_000e17c0(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_00185698;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_00185634:
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    uVar3 = uVar4;
    FUN_00186180(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_00185714;
  }
LAB_00185694:
  uVar2 = 0;
LAB_00185698:
  return uVar2 & 1;
}



/* Entry: 00186180; end: 00186347;  */

bool FUN_00186180(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,ulong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar9 = (uint)(param_8 >> 0x20);
  uVar8 = (uint)param_8;
  uVar7 = (uint)param_4;
  if ((param_4 & 0xff) == 4) {
    if ((uVar8 & 0xff) != 4) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff) == 4) {
      return false;
    }
    if (((uVar8 ^ uVar7) & 0xff) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00) == 0x300) {
    if ((uVar8 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff00) == 0x300) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff00) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000) == 0x30000) {
    if ((uVar8 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff0000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000) == 0x3000000) {
    if ((uVar8 & 0xff000000) != 0x3000000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff000000) == 0x3000000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00000000) == 0x300000000) {
    if ((uVar9 & 0xff) != 3) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff) == 3) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff00000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000000000) == 0x30000000000) {
    if ((uVar9 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff00) == 0x300) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff0000000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000000000) == 0x3000000000000) {
    if ((uVar9 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff000000000000) != 0) {
      return false;
    }
  }
  if (param_4 >> 0x38 == 5) {
    if ((ulong)(uVar9 >> 0x18) != 5) {
      return false;
    }
  }
  else if (param_4 >> 0x38 != (ulong)(uVar9 >> 0x18)) {
    return false;
  }
  FUN_00038814(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return false;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(param_7 + 0x10)) {
    return false;
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar4 = lVar10;
  if (uVar13 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar13 - 1 & uVar13;
  uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_3 + 0x30) + uVar11 * 8);
  FUN_000e1304(*(long *)(param_3 + 0x38) + uVar11 * 0x28,&uStack_c8);
  lVar10 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_3);
      return true;
    }
    uVar11 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(param_7 + 0x10) == 0) || (FUN_000e1d94(lVar4), (uVar11 & 1) == 0)) {
LAB_000e3018:
      _swift_release(param_3);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(param_7 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    FUN_0001393c(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    FUN_0001393c(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_3);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar4 = lVar10;
    if (uVar13 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar11 = uVar12;
    if ((long)uVar12 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    while( true ) {
      lVar4 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar12 <= lVar4) break;
      uVar13 = ((ulong *)(param_3 + 0x40))[lVar4];
      lVar10 = lVar10 + 1;
      if (uVar13 != 0) goto LAB_000e2ecc;
    }
    uVar13 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar10 = uVar11 - 1;
  } while( true );
}



/* Entry: 00186348; end: 00186483;  */

ulong FUN_00186348(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 00186484; end: 00186513;  */

void FUN_00186484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRetain();
    func_0x00023304(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_4);
    return;
  }
  return;
}



/* Entry: 00186514; end: 00186533;  */

void FUN_00186514(void)

{
  _objc_opt_self(&PTR_PTR_00af16e8);
  return;
}



/* Entry: 00186534; end: 00186937;  */

void FUN_00186534(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [72];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar12 = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar8 = puVar2;
  puVar16 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar16 = puVar2;
  puVar15 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar15 = puVar2;
  puVar14 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar14 = puVar2;
  puVar3 = (undefined8 *)(unaff_x20 + 0x48);
  *puVar3 = puVar2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar4 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x98);
  *puVar7 = puVar2;
  puVar5 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar5 = puVar2;
  puVar6 = (undefined1 *)(unaff_x20 + 0xa8);
  *puVar6 = 3;
  _swift_beginAccess(param_1 + 0x10,auStack_118,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar12,auStack_130,1,0);
  *puVar12 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar11;
  _swift_beginAccess(param_1 + 0x20,auStack_148,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar9,auStack_160,1,0);
  *puVar9 = uVar13;
  _swift_beginAccess(param_1 + 0x28,auStack_178,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar8,auStack_190,1,0);
  *puVar8 = uVar10;
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar10);
  _swift_beginAccess(param_1 + 0x30,auStack_1a8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(puVar16,auStack_1c0,1,0);
  uVar11 = *puVar16;
  *puVar16 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x38,auStack_1d8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  _swift_beginAccess(puVar15,auStack_1f0,1,0);
  uVar11 = *puVar15;
  *puVar15 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x40,auStack_208,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  _swift_beginAccess(puVar14,auStack_220,1,0);
  uVar11 = *puVar14;
  *puVar14 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x48,auStack_238,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  _swift_beginAccess(puVar3,auStack_250,1,0);
  uVar11 = *puVar3;
  *puVar3 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0x50,auStack_268,0,0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_100 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_f0 = *(undefined8 *)(param_1 + 0x60);
  _swift_beginAccess(puVar4,auStack_280,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_b0 = *puVar4;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_d0;
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_f8;
  *puVar4 = uStack_100;
  func_0x00187028(&uStack_100,auStack_2c8,0xaefe60,&UNK_007d9c38);
  func_0x00191ff4(&uStack_b0,0xaefe60,&UNK_007d9c38);
  _swift_beginAccess(param_1 + 0x98,auStack_2c8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x98);
  _swift_beginAccess(puVar7,auStack_2e0,1,0);
  uVar11 = *puVar7;
  *puVar7 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0xa0,auStack_2f8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  _swift_beginAccess(puVar5,auStack_310,1,0);
  uVar11 = *puVar5;
  *puVar5 = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRelease(uVar11);
  _swift_beginAccess(param_1 + 0xa8,auStack_328,0,0);
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  _swift_beginAccess(puVar6,auStack_340,1,0);
  *puVar6 = uVar1;
  return;
}



/* Entry: 00186938; end: 00186b5b;  */

undefined8 FUN_00186938(undefined8 param_1,undefined8 param_2)

{
  FUN_0018e4cc(param_2,param_1,&UNK_009b2288);
  return param_2;
}



/* Entry: 00186b5c; end: 00186b7b;  */

void FUN_00186b5c(void)

{
  _objc_opt_self(&PTR_PTR_00af18e8);
  return;
}



/* Entry: 00186b7c; end: 00186dff;  */

void FUN_00186b7c(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar8 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar6 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar5 = puVar2;
  puVar4 = (undefined8 *)(unaff_x20 + 0x78);
  *puVar4 = puVar2;
  puVar3 = (undefined1 *)(unaff_x20 + 0x80);
  *puVar3 = 3;
  _swift_beginAccess(param_1 + 0x10,auStack_118,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar8,auStack_130,1,0);
  *puVar8 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  _swift_beginAccess(param_1 + 0x20,auStack_148,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar10,auStack_160,1,0);
  *puVar10 = uVar9;
  _swift_beginAccess(param_1 + 0x28,auStack_178,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x30);
  uStack_100 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar6,auStack_190,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_b0 = *puVar6;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_d0;
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_f8;
  *puVar6 = uStack_100;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  func_0x00187028(&uStack_100,auStack_1d8,0xaefe50,&UNK_007dafc0);
  func_0x00191ff4(&uStack_b0,0xaefe50,&UNK_007dafc0);
  _swift_beginAccess(param_1 + 0x70,auStack_1d8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  _swift_beginAccess(puVar5,auStack_1f0,1,0);
  uVar7 = *puVar5;
  *puVar5 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_1 + 0x78,auStack_208,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  _swift_beginAccess(puVar4,auStack_220,1,0);
  uVar7 = *puVar4;
  *puVar4 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_1 + 0x80,auStack_238,0,0);
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  _swift_beginAccess(puVar3,auStack_250,1,0);
  *puVar3 = uVar1;
  return;
}



/* Entry: 00186e00; end: 00186e5f;  */

undefined8 FUN_00186e00(undefined8 param_1,undefined8 param_2)

{
  FUN_0018f278(param_2,param_1,&UNK_009b2790);
  return param_2;
}



/* Entry: 00186e60; end: 00186e7f;  */

void FUN_00186e60(void)

{
  _objc_opt_self(&PTR_PTR_00af1a48);
  return;
}



/* Entry: 00186e80; end: 00186e97;  */

int FUN_00186e80(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00186e98; end: 00186fb7;  */

undefined8 FUN_00186e98(undefined8 param_1,undefined8 param_2)

{
  FUN_0018f61c(param_2,param_1,&UNK_009b2828);
  return param_2;
}



/* Entry: 00186fb8; end: 00186ff7;  */

void FUN_00186fb8(void)

{
  _objc_opt_self(&PTR_PTR_00af1b48);
  return;
}



/* Entry: 00186ff8; end: 0018706f;  */

void FUN_00186ff8(void)

{
  long in_x4;
  
  if (in_x4 == 1) {
    return;
  }
  func_0x00023304();
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(in_x4);
  return;
}


