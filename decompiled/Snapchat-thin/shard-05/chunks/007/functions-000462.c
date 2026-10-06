/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10402c5a0; end: 10402d497;  */

void FUN_10402c5a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x113049a18;
  func_0x0001000285a8(0x113049a18,&UNK_10dcc4d00);
  lVar8 = lVar16;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar16,lVar1,param_2,uVar7);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_10402c800:
    _swift_release(lVar16);
    *unaff_x20 = lVar8;
    return;
  }
  puVar18 = (ulong *)(lVar16 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar8 + 0x40;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10402c830);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_10402c800;
        }
        uVar17 = puVar18[lVar19];
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar10 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    uVar4 = *(undefined1 *)(*(long *)(lVar16 + 0x38) + uVar10);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar9,uVar7,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar10 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar12 + 1;
        if ((uVar14 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10402c834);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar14 != uVar10) {
          uVar12 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar10 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar10) = uVar4;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar11 = lVar19;
  } while( true );
}



/* Entry: 10402d498; end: 10402d6c3;  */

void FUN_10402d498(undefined1 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_104023cec();
  *(undefined **)(unaff_x20 + 0xd0) = puVar1;
  puVar1 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + 0xd8) = puVar1;
  lVar2 = 0x112ef9150;
  func_0x0001000285a8(0x112ef9150,&UNK_10db28670);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_11034ad20;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x40) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar2 + 0x28) = 1;
  _objc_retain();
  lVar3 = lVar2;
  func_0x0001010fe1c8(lVar2);
  _swift_setDeallocating(lVar2);
  FUN_10402dc84((undefined8 *)(lVar2 + 0x20),0x112d5dff8,&UNK_10d9246e0);
  puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
  _objc_allocWithZone();
  uVar4 = 0;
  func_0x0001010f6448(0);
  uVar5 = 0x112d5dce8;
  func_0x00010402dcc4(0x112d5dce8,0xff,&SUB_1010f6448,&UNK_10d9244d4);
  lVar2 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  _swift_bridgeObjectRelease(lVar3);
  func_0x000107c47c98();
  _objc_release(lVar2);
  *(undefined **)(unaff_x20 + 0xe0) = puVar1;
  func_0x00010402d714(param_2,unaff_x20 + 0x70);
  uVar5 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1df910);
  func_0x00010bf1f440();
  _objc_release(uVar5);
  *(undefined1 *)(unaff_x20 + 0x98) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar2 + 8))(uVar5,lVar2);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
  func_0x00010402d6c4(param_3,unaff_x20 + 0xa8);
  func_0x000107c539f8(*(undefined8 *)(unaff_x20 + 0xd8));
  FUN_10402dc84(param_3,0x113049c70,&UNK_10dcc50b0);
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 10402d6c4; end: 10402d757;  */

undefined8 FUN_10402d6c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113049c70;
  func_0x0001000285a8(0x113049c70,&UNK_10dcc50b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10402d758; end: 10402d76f;  */

undefined8 * FUN_10402d758(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10402d770; end: 10402d7f3;  */

void FUN_10402d770(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(unaff_x20 + 0x78);
  plVar3 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10402d7f4;
  plVar3[0x15] = unaff_x20 + 0x40;
  plVar3[0x16] = lVar5;
  plVar3[0x13] = unaff_x20 + 0x10;
  plVar3[0x14] = lVar4;
  plVar3[0x12] = param_1;
  lVar4 = 0;
  __sScEMa();
  plVar3[0x17] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x18] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x19] = uVar1;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  plVar3[0x1a] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x1b] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x1c] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x1d] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104029de8,0,0);
  return;
}



/* Entry: 10402d7f4; end: 10402d82f;  */

void FUN_10402d7f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010402d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10402d830; end: 10402d8f3;  */

void FUN_10402d830(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  lVar1 = *(long *)(unaff_x20 + (uVar4 + 0x3f & 0xffffffffffffff8));
  plVar2 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10402deb4;
  plVar2[0x15] = unaff_x20 + uVar4;
  plVar2[0x16] = lVar1;
  plVar2[0x13] = unaff_x20 + 0x10;
  plVar2[0x14] = unaff_x20 + uVar3;
  plVar2[0x12] = param_1;
  lVar1 = 0;
  __sScEMa();
  plVar2[0x17] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[0x18] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x19] = uVar3;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  plVar2[0x1a] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[0x1b] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x1c] = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402aac4,0,0);
  return;
}



/* Entry: 10402d8f4; end: 10402d913;  */

void FUN_10402d8f4(void)

{
  _objc_opt_self(&PTR_PTR_113049cb8);
  return;
}



/* Entry: 10402d914; end: 10402da53;  */

int FUN_10402d914(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10402da54; end: 10402da87;  */

undefined8 * FUN_10402da54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10402da88; end: 10402dadb;  */

undefined8 * FUN_10402da88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10402dadc; end: 10402db17;  */

undefined8 * FUN_10402dadc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10402db18; end: 10402dbb3;  */

int FUN_10402db18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10402dbb4; end: 10402dbf3;  */

void FUN_10402dbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc4fac;
  _swift_getWitnessTable(&UNK_10dcc4fac,&UNK_1107371c0);
  puRam0000000113049db0 = puVar1;
  return;
}



/* Entry: 10402dbf4; end: 10402dc47;  */

void FUN_10402dbf4(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10402deb8;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  _swift_task_alloc();
  plVar2[2] = (long)plVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_10402b720;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(param_1);
  return;
}



/* Entry: 10402dc48; end: 10402dc83;  */

void FUN_10402dc48(void)

{
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 10402dc84; end: 10402dd03;  */

undefined8 FUN_10402dc84(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10402dd04; end: 10402de6b;  */

int FUN_10402dd04(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10402dd80;
        goto LAB_10402dd64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10402dd64:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10402dd80:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10402de6c; end: 10402deab;  */

void FUN_10402de6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5080;
  _swift_getWitnessTable(&UNK_10dcc5080,&UNK_110737258);
  puRam0000000113049dc8 = puVar1;
  return;
}



/* Entry: 10402deac; end: 10402ded7;  */

undefined8 * FUN_10402deac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10402ded8; end: 10402e05b;  */

void FUN_10402ded8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(lVar7 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  if (*(char *)(lVar7 + 0x78) == '\0') {
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    _swift_retain(uVar5);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x38) = plVar4;
    uVar2 = 0;
    FUN_10402d8f4(0);
    pcVar3 = FUN_10402e05c;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10402e05c;
  }
  else {
    if (*(char *)(lVar7 + 0x78) == '\x01') {
      _swift_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010402df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    puVar1 = &UNK_110737600;
    _swift_allocObject(&UNK_110737600,0x20,7);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    uVar2 = 0;
    FUN_10402d8f4();
    _swift_retain(uVar5);
    uVar5 = 8;
    func_0x0001001ca524(8,0,0x5c,4,0,0,&UNK_10dcc5330,puVar1,uVar2);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    _swift_release(puVar1);
    uVar6 = *(undefined8 *)(lVar7 + 0x70);
    *(undefined8 *)(lVar7 + 0x70) = uVar5;
    *(undefined1 *)(lVar7 + 0x78) = 0;
    _swift_retain(uVar5);
    _swift_release(uVar6);
    pcVar3 = (code *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    _swift_task_alloc();
    *(code **)(unaff_x22 + 0x48) = pcVar3;
    *(long *)pcVar3 = unaff_x22;
    *(undefined8 *)(pcVar3 + 8) = 0x10402e0d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(pcVar3,unaff_x22 + 0x10,uVar5,uVar2);
  return;
}



/* Entry: 10402e05c; end: 10402e123;  */

void FUN_10402e05c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10402e0a8,uVar1,0);
  return;
}



/* Entry: 10402e124; end: 10402e177;  */

void FUN_10402e124(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  uVar2 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(lVar1 + 0x78) = 1;
  _swift_retain();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010402e174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Entry: 10402e178; end: 10402e2b3;  */

void FUN_10402e178(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  if (lRam0000000113049dd0 != -1) {
    _swift_once(0x113049dd0,FUN_10402f988);
  }
  uVar1 = uRam0000000113049dd8;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _swift_retain(uRam0000000113049dd8);
  func_0x000100075034(auStack_38,FUN_10402fa70,auStack_60,PTR___sSiN_11034deb0);
  _swift_release(uVar1);
  return;
}



/* Entry: 10402e2b4; end: 10402ee73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402e2b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x12;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  char cStack_91;
  byte abStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = 0;
  uStack_b0 = param_4;
  __s10Foundation4DateVMa();
  lStack_a8 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lStack_a8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = auStack_d0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar11 - extraout_x12;
  __s10Foundation4DateVACycfC(lVar10);
  if ((*(byte *)(unaff_x20 + _DAT_113049df8) & 1) == 0) {
    FUN_10402d6c4(unaff_x20 + _DAT_113049e00,abStack_90);
    lVar12 = lStack_78;
    if (lStack_78 == 0) {
      FUN_104031d2c(abStack_90,0x113049c70,&UNK_10dcc50b0);
    }
    else {
      func_0x0001000a8868(abStack_90,lStack_78);
      (**(code **)(lStack_70 + 8))(0,0,lVar12,lStack_70);
      func_0x0001000834e4(abStack_90);
    }
    puVar2 = &UNK_1107372c0;
    _swift_allocObject(&UNK_1107372c0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = uStack_b0;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    _swift_retain(param_5);
    *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
    puVar4 = &UNK_10dcc50c0;
  }
  else {
    uStack_b8 = param_1;
    if (lRam0000000113049dd0 != -1) {
      _swift_once(0x113049dd0,FUN_10402f988);
    }
    uVar3 = uRam0000000113049dd8;
    uStack_80 = param_2;
    lStack_78 = param_3;
    _swift_retain(uRam0000000113049dd8);
    func_0x000100075034(&cStack_91,FUN_104031270,abStack_90,PTR___sSbN_11034dd40);
    _swift_release(uVar3);
    if (cStack_91 == '\x01') {
      FUN_10402d6c4(unaff_x20 + _DAT_113049e00,abStack_90);
      lVar12 = lStack_78;
      if (lStack_78 == 0) {
        FUN_104031d2c(abStack_90,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        func_0x0001000a8868(abStack_90,lStack_78);
        (**(code **)(lStack_70 + 8))(0,1,lVar12,lStack_70);
        func_0x0001000834e4(abStack_90);
      }
      puVar2 = &UNK_110737338;
      _swift_allocObject(&UNK_110737338,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = uStack_b0;
      *(undefined8 *)(puVar2 + 0x18) = param_5;
      *(undefined8 *)(puVar2 + 0x20) = 1;
      _swift_retain(param_5);
      *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
      puVar4 = &UNK_10dcc50e8;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113049e08);
      _swift_retain(uVar7);
      uVar3 = 0x112dc3dc8;
      func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
      func_0x000100075034(abStack_90,0x104032044,0,uVar3);
      _swift_release(uVar7);
      if ((abStack_90[0] == 2) || ((abStack_90[0] & 1) != 0)) {
        lVar8 = *(long *)(unaff_x20 + _DAT_113049de0);
        uVar3 = param_2;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
        func_0x000107c4d9c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (lVar8 != 0) {
          uVar3 = *(undefined8 *)(lVar8 + 0x10);
          _swift_release(lVar8);
          FUN_10402d6c4(unaff_x20 + _DAT_113049e00,abStack_90);
          lVar12 = lStack_78;
          if (lStack_78 == 0) {
            FUN_104031d2c(abStack_90,0x113049c70,&UNK_10dcc50b0);
          }
          else {
            func_0x0001000a8868(abStack_90,lStack_78);
            (**(code **)(lStack_70 + 8))(0,3,lVar12,lStack_70);
            func_0x0001000834e4(abStack_90);
          }
          puVar2 = &UNK_110737310;
          _swift_allocObject(&UNK_110737310,0x28,7);
          *(undefined8 *)(puVar2 + 0x10) = uStack_b0;
          *(undefined8 *)(puVar2 + 0x18) = param_5;
          *(undefined8 *)(puVar2 + 0x20) = uVar3;
          _swift_retain(param_5);
          *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
          uVar3 = 8;
          func_0x0001001ca524(8,0,0x5c,4,0,0,&UNK_10dcc50e0,puVar2);
          goto LAB_10402e76c;
        }
      }
      FUN_10402d6c4(unaff_x20 + _DAT_113049e00,abStack_90);
      lVar8 = lStack_78;
      uStack_c8 = param_5;
      lStack_c0 = lVar1;
      if (lStack_78 == 0) {
        FUN_104031d2c(abStack_90,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        func_0x0001000a8868(abStack_90,lStack_78);
        lVar1 = lStack_c0;
        (**(code **)(lStack_70 + 8))(0,2,lVar8,lStack_70);
        func_0x0001000834e4(abStack_90);
      }
      lVar8 = lStack_a8;
      (**(code **)(lStack_a8 + 0x10))(puVar11,lVar10,lVar1);
      uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
      uVar6 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
      uVar9 = lVar12 + uVar6 + 7 & 0xfffffffffffffff8;
      puVar2 = &UNK_1107372e8;
      _swift_allocObject(&UNK_1107372e8,uVar9 + 0x10,uVar5 | 7);
      uVar3 = uStack_b8;
      lVar1 = lStack_c0;
      *(long *)(puVar2 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar2 + 0x18) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      *(long *)(puVar2 + 0x28) = param_3;
      (**(code **)(lVar8 + 0x20))(puVar2 + uVar6,puVar11,lStack_c0);
      *(undefined8 *)(puVar2 + uVar9) = uStack_b0;
      *(undefined8 *)((long)(puVar2 + uVar9) + 8) = uStack_c8;
      _swift_retain();
      _objc_retain();
      _objc_retain(uVar3);
      _swift_bridgeObjectRetain(param_3);
      *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
      puVar4 = &UNK_10dcc50d8;
    }
  }
  uVar3 = 8;
  func_0x0001001ca524(8,0,0x5c,4,0,0,puVar4,puVar2);
LAB_10402e76c:
  _swift_release(puVar2);
  _swift_release(uVar3);
  (**(code **)(lStack_a8 + 8))(lVar10,lVar1);
  return;
}



/* Entry: 10402ee74; end: 10402eef7;  */

void FUN_10402ee74(void)

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



/* Entry: 10402eef8; end: 10402ef23; +[SCWAnalyzerBridge cofKey] */

void FUN_10402eef8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1df910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10402ef24; end: 10402ef4f; +[SCWAnalyzerBridge descriptiveModalCofKey] */

void FUN_10402ef24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1df930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10402ef50; end: 10402f0fb;  */

ulong FUN_10402ef50(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  byte bStack_31;
  
  uVar1 = param_1;
  FUN_10403181c();
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1df910);
  if ((uVar1 & 1) == 0) {
    func_0x000107c4c270();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5dc0c();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(param_1);
      uVar3 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        if (lRam0000000113049e10 != -1) {
          _swift_once(0x113049e10,0x10402f13c);
        }
        uVar2 = uRam0000000113049e18;
        _swift_retain(uRam0000000113049e18);
        func_0x000100075034(&bStack_31,FUN_10402f194,0,PTR___sSbN_11034dd40);
        _swift_release(uVar2);
        if ((bStack_31 & 1) == 0) {
          puVar4 = &UNK_110737400;
          _swift_allocObject(&UNK_110737400,0x18,7);
          *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
          uVar2 = 8;
          func_0x0001001ca524(8,0,0x5c,4,0,0,&UNK_10dcc5120,puVar4,PTR___sytN_11034f1b0 + 8);
          _swift_release(puVar4);
          _swift_release(uVar2);
        }
      }
    }
    param_1 = 0;
  }
  else {
    func_0x00010bf1f440();
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 10402f0fc; end: 10402f193; +[SCWAnalyzerBridge isCallsiteGateOpenWithConfigProvider:] */

uint FUN_10402f0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _swift_unknownObjectRetain(param_3);
  uVar1 = (uint)uVar2;
  FUN_10402ef50();
  _swift_unknownObjectRelease(param_3);
  return uVar1 & 1;
}



/* Entry: 10402f194; end: 10402f1bb;  */

void FUN_10402f194(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 1;
  return;
}



/* Entry: 10402f1bc; end: 10402f273;  */

void FUN_10402f1bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___SCSensitivityAnalyzer_1126adb50;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCSensitivityAnalyzer_1126adb50);
  func_0x00010bfee200();
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_opt_self(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf024a0(puVar1);
  uVar3 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1df980);
  func_0x000107c52de0(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010402f270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10402f274; end: 10402f287;  */

bool FUN_10402f274(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10402f288; end: 10402f333;  */

void FUN_10402f288(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10402f334; end: 10402f343; -[SCWAnalyzerBridge isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10402f334(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113049df8);
}



/* Entry: 10402f344; end: 10402f3f7; -[SCWAnalyzerBridge isAnalysisAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10402f344(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bStack_31;
  
  if (*(char *)(param_1 + _DAT_113049df8) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113049e08);
    _objc_retain();
    _swift_retain(uVar2);
    uVar1 = 0x112dc3dc8;
    func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
    func_0x000100075034(&bStack_31,0x10403201c,0,uVar1);
    _swift_release(uVar2);
    _objc_release(param_1);
    return bStack_31 == 2 | bStack_31 & 1;
  }
  return 0;
}



/* Entry: 10402f3f8; end: 10402f40f; +[SCWAnalyzerBridge isLastKnownAppleAnalysisEnabled] */

uint FUN_10402f3f8(uint param_1)

{
  FUN_10403181c();
  return param_1 & 1;
}



/* Entry: 10402f410; end: 10402f427;  */

void FUN_10402f410(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f428,0,0);
  return;
}



/* Entry: 10402f428; end: 10402f49b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402f428(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (*(char *)(*(long *)(unaff_x22 + 0x10) + _DAT_113049df8) == '\x01') {
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10402f49c;
    plVar1[7] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f5a8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010402f498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10402f49c; end: 10402f503;  */

void FUN_10402f49c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x28) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10402f504;
  lVar2 = *(long *)(lVar2 + 0x10);
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f838,param_1,0);
  return;
}



/* Entry: 10402f504; end: 10402f57b;  */

void FUN_10402f504(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10402f54c,0,0);
  return;
}



/* Entry: 10402f57c; end: 10402f5a7; -[SCWAnalyzerBridge warmUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402f57c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1107375b0;
  if (*(char *)(param_1 + _DAT_113049df8) == '\x01') {
    _swift_allocObject(&UNK_1107375b0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    _objc_retain(param_1);
    _objc_retain();
    uVar2 = 8;
    func_0x0001001ca524(8,0,0x5c,4,0,0,&UNK_10dcc52f8,puVar1,PTR___sytN_11034f1b0 + 8);
    _swift_release(puVar1);
    _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10402f5a8; end: 10402f6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402f5a8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_113049e28);
  puVar1 = (undefined8 *)(lVar4 + _DAT_113049e30);
  uVar6 = puVar1[1];
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  FUN_10402d6c4(lVar4 + _DAT_113049e00,unaff_x22 + 0x10);
  puVar2 = &UNK_1107375d8;
  _swift_allocObject(&UNK_1107375d8,0x50,7);
  *(undefined **)(unaff_x22 + 0x40) = puVar2;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x40) = uVar9;
  *(undefined8 *)(puVar2 + 0x38) = uVar8;
  *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(unaff_x22 + 0x30);
  plVar3 = (long *)0x50;
  _swift_retain(uVar6);
  _swift_unknownObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10402f6b8;
                    /* WARNING: Could not recover jumptable at 0x00010402f6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x10402debc)(&UNK_10dcc5318,puVar2);
  return;
}



/* Entry: 10402f6b8; end: 10402f70f;  */

void FUN_10402f6b8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f710,0,0);
  return;
}



/* Entry: 10402f710; end: 10402f7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402f710(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_113049e08);
  _swift_retain(uVar4);
  uVar1 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  func_0x000100075034(unaff_x22 + 0x60,0x104032030,0,uVar1);
  _swift_release(uVar4);
  if (*(char *)(unaff_x22 + 0x60) == '\x02') {
    plVar2 = (long *)0x40;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10402f7e0;
    lVar3 = *(long *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x38);
    plVar2[5] = lVar3;
    plVar2[6] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f838,lVar3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010402f7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 10402f7e0; end: 10402f81f;  */

void FUN_10402f7e0(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010402f81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Entry: 10402f820; end: 10402f837;  */

void FUN_10402f820(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f838,param_1,0);
  return;
}



/* Entry: 10402f838; end: 10402f8ab;  */

void FUN_10402f838(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  lVar1 = *(long *)(lVar3 + 0x90);
  func_0x0001000a8868(lVar3 + 0x70,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(lVar3 + 0xa0) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x21) = *(undefined1 *)(lVar3 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f8ac,0,0);
  return;
}



/* Entry: 10402f8ac; end: 10402f987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402f8ac(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = 0;
  if (*(long *)(unaff_x22 + 0x38) != 0) {
    uVar1 = *(undefined1 *)(unaff_x22 + 0x21);
  }
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_113049e08);
  *(undefined1 *)(unaff_x22 + 0x20) = uVar1;
  _swift_retain(uVar3);
  func_0x000100075034(FUN_104031b60,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  _swift_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_opt_self(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1df980);
  func_0x000107c52de0(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010402f984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10402f988; end: 10402f99f;  */

void FUN_10402f988(void)

{
  undefined **ppuVar1;
  undefined *puStack_28;
  
  puStack_28 = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
  _swift_allocObject();
  ppuVar1 = &puStack_28;
  func_0x00010006c248();
  ppuRam0000000113049dd8 = ppuVar1;
  return;
}



/* Entry: 10402f9a0; end: 10402f9ff;  */

void FUN_10402f9a0(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puStack_28;
  
  puStack_28 = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
  _swift_allocObject();
  ppuVar1 = &puStack_28;
  func_0x00010006c248();
  *param_2 = (long)ppuVar1;
  return;
}



/* Entry: 10402fa00; end: 10402fa6f;  */

void FUN_10402fa00(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _swift_bridgeObjectRetain(param_4);
  func_0x000100403b00(auStack_40,param_3,param_4);
  _swift_bridgeObjectRelease(uStack_38);
  *param_1 = *(undefined8 *)(*param_2 + 0x10);
  return;
}



/* Entry: 10402fa70; end: 10402fa87;  */

void FUN_10402fa70(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10402fa00(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10402fa88; end: 10402fc47; +[SCWAnalyzerBridge markRevealedMediaID:] */

void FUN_10402fa88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lRam0000000113049dd0 != -1) {
    _swift_once(0x113049dd0,FUN_10402f988);
  }
  uVar1 = uRam0000000113049dd8;
  uStack_50 = param_3;
  uStack_48 = param_2;
  _swift_retain(uRam0000000113049dd8);
  func_0x000100075034(auStack_38,FUN_104031fec,auStack_60,PTR___sSiN_11034deb0);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 10402fc48; end: 10402fde7; -[SCWAnalyzerBridge requiresModalRevealForMediaID:] */

undefined1 FUN_10402fc48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010402fb34(param_3);
  if (((uint)uVar1 & 0xff) == 1) {
    if (lRam0000000113049de8 != -1) {
      _swift_once(0x113049de8,0x10402f994);
    }
    uVar1 = uRam0000000113049df0;
    uStack_50 = param_3;
    uStack_48 = param_2;
    _swift_retain(uRam0000000113049df0);
    func_0x000100075034(&uStack_31,0x1040320b0,auStack_60,PTR___sSbN_11034dd40);
    _swift_release(uVar1);
    _swift_bridgeObjectRelease(param_2);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
    uStack_31 = 0;
  }
  return uStack_31;
}



/* Entry: 10402fde8; end: 10402febf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402fde8(undefined8 param_1,undefined8 param_2,long param_3,char param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  lVar3 = *(long *)(param_3 + _DAT_113049de0);
  lVar2 = lVar3;
  func_0x000107c4d9c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) ||
     (cVar1 = *(char *)(lVar2 + 0x18), _swift_release(), cVar1 != '\x01' || param_4 != '\0')) {
    lVar2 = 0x113049e98;
    func_0x0001000285a8(0x113049e98,&UNK_10dcc5340);
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x10) = param_5;
    *(char *)(lVar2 + 0x18) = param_4;
    func_0x000107c56bcc(lVar3);
    _objc_release(param_1);
    _swift_release(lVar2);
  }
  else {
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10402fec0; end: 10402fec7; -[SCWAnalyzerBridge initWithConfigProvider:] */

void FUN_10402fec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c001510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithConfigProvider_tweakOver_1125ddf08,param_3,0);
  return;
}



/* Entry: 10402fec8; end: 104030033; -[SCWAnalyzerBridge initWithConfigProvider:tweakOverride:] */

undefined8
FUN_10402fec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  _swift_getObjectType();
  puVar2 = &UNK_110737588;
  _swift_allocObject(&UNK_110737588,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  _objc_allocWithZone(uVar1);
  _swift_unknownObjectRetain(param_3);
  FUN_104030118();
  uVar1 = param_1;
  _swift_getObjectType(param_1);
  _swift_deallocPartialClassInstance(param_1,uVar1,0x78,7);
  return param_3;
}



/* Entry: 104030034; end: 104030117;  */

void FUN_104030034(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lStack_38;
  
  if (param_2 == 2) {
    puVar2 = (undefined *)0x0;
    FUN_104028b84();
    puVar3 = puVar2;
    _swift_allocObject();
    uVar4 = 2;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        lStack_38 = param_2;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_110737470,&lStack_38,&UNK_110737470,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104030118);
        (*pcVar1)();
      }
      puVar3 = PTR__OBJC_CLASS___SCSensitivityAnalyzer_1126adb50;
      _objc_allocWithZone();
      func_0x00010bfee200();
      puVar2 = (undefined *)0x0;
      FUN_104031bc4();
      ppuVar5 = &PTR_DAT_110736fd0;
      goto LAB_1040300d8;
    }
    puVar2 = (undefined *)0x0;
    FUN_104028b84();
    puVar3 = puVar2;
    _swift_allocObject();
    uVar4 = 1;
  }
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  ppuVar5 = &PTR_DAT_110736ec8;
LAB_1040300d8:
  param_1[3] = puVar2;
  param_1[4] = ppuVar5;
  *param_1 = puVar3;
  return;
}



/* Entry: 104030118; end: 10403040b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104030118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  undefined1 uStack_61;
  
  _swift_getObjectType();
  lVar2 = _DAT_113049e38;
  lVar3 = 0x1130498f0;
  func_0x0001000285a8(0x1130498f0,&UNK_10dcc4ba0);
  _swift_allocObject();
  _swift_defaultActor_initialize();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined1 *)(lVar3 + 0x78) = 2;
  *(long *)(unaff_x20 + lVar2) = lVar3;
  lVar3 = _DAT_113049de0;
  puVar4 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  lVar3 = _DAT_113049e40;
  uVar5 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lVar3 = _DAT_113049e08;
  uStack_61 = 2;
  func_0x0001000285a8(0x113049e20,&UNK_10dcc5128);
  _swift_allocObject();
  puVar6 = &uStack_61;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + lVar3) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_113049e28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113049e58) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049e30);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  FUN_10402d6c4(param_5,unaff_x20 + _DAT_113049e00);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_4);
  uVar7 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1df910);
  uVar5 = param_1;
  func_0x00010bf1f440();
  _objc_release(uVar7);
  *(char *)(unaff_x20 + _DAT_113049df8) = (char)uVar5;
  if ((int)param_2 == 2) {
    uVar8 = 1;
  }
  else {
    uVar5 = 0xd000000000000022;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1df930);
    uVar7 = param_1;
    func_0x00010bf1f440();
    uVar8 = (undefined1)uVar7;
    _objc_release(uVar5);
  }
  *(undefined1 *)(unaff_x20 + _DAT_113049e60) = uVar8;
  puVar6 = &stack0xffffffffffffff88;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  func_0x000107c539f8(*(undefined8 *)(puVar6 + _DAT_113049de0));
  if (puVar6[_DAT_113049df8] == '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    _swift_unknownObjectRelease(param_1);
    _swift_release(param_4);
    FUN_104031d2c(param_5,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    FUN_104031d2c(param_5,0x113049c70,&UNK_10dcc50b0);
    _swift_unknownObjectRelease(param_1);
    _swift_release(param_4);
  }
  return puVar6;
}



/* Entry: 10403040c; end: 10403042b;  */

void FUN_10403040c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10403042c,0,0);
  return;
}



/* Entry: 10403042c; end: 1040304cb;  */

void FUN_10403042c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x88);
  (**(code **)(unaff_x22 + 0x90))(unaff_x22 + 0x10);
  func_0x00010402d714(unaff_x22 + 0x10,unaff_x22 + 0x38);
  func_0x00010402d6c4(uVar2,unaff_x22 + 0x60);
  FUN_10402d8f4(0);
  _swift_allocObject();
  uVar2 = uVar1;
  _swift_unknownObjectRetain();
  FUN_10402d498();
  _swift_unknownObjectRelease(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *puVar3 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001040304c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040304cc; end: 104030507;  */

void FUN_1040304cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040304e4,0,0);
  return;
}



/* Entry: 104030508; end: 104030597;  */

void FUN_104030508(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  if (*(char *)(*(long *)(unaff_x22 + 0x18) + 0x78) == '\x01') {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x70);
    *(long *)(unaff_x22 + 0x20) = lVar3;
    plVar1 = (long *)0x40;
    _swift_retain(lVar3);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x28) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_104030598;
    lVar2 = *(long *)(unaff_x22 + 0x10);
    plVar1[5] = lVar3;
    plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f838,lVar3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104030594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104030598; end: 10403060f;  */

void FUN_104030598(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040305e0,0,0);
  return;
}



/* Entry: 104030610; end: 104030623; -[SCWAnalyzerBridge appDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104030610(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110737560;
  if (*(char *)(param_1 + _DAT_113049df8) == '\x01') {
    _swift_allocObject(&UNK_110737560,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    _objc_retain(param_1);
    _objc_retain();
    uVar2 = 8;
    func_0x0001001ca524(8,0,0x5c,4,0,0,&UNK_10dcc52e8,puVar1,PTR___sytN_11034f1b0 + 8);
    _swift_release(puVar1);
    _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104030624; end: 1040306df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104030624(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_113049df8) == '\x01') {
    _swift_allocObject(param_3,0x18,7);
    *(long *)(param_3 + 0x10) = param_1;
    _objc_retain(param_1);
    _objc_retain();
    uVar1 = 8;
    func_0x0001001ca524(8,0,0x5c,4,0,0,param_4,param_3,PTR___sytN_11034f1b0 + 8);
    _swift_release(param_3);
    _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1040306e0; end: 10403075f;  */

void FUN_1040306e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_8;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(long *)(unaff_x22 + 0xb0) = param_2;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x100) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104030760;
  plVar3[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f5a8,0,0);
  return;
}



/* Entry: 104030760; end: 1040307cf;  */

void FUN_104030760(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x108) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x100));
  plVar1 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(lVar3 + 0x110) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_1040307d0;
  lVar4 = *(long *)(lVar3 + 0xc0);
  lVar2 = *(long *)(lVar3 + 0xb8);
  plVar1[0x37] = *(long *)(lVar3 + 200);
  plVar1[0x38] = param_1;
  plVar1[0x35] = lVar2;
  plVar1[0x36] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104029560,param_1,0);
  return;
}



/* Entry: 1040307d0; end: 104030823;  */

void FUN_1040307d0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  *(undefined1 *)(lVar1 + 0x139) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104030824,0,0);
  return;
}



/* Entry: 104030824; end: 104030987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104030824(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x22;
  
  puVar1 = PTR___sytN_11034f1b0;
  if (*(char *)(unaff_x22 + 0x139) == '\x01') {
    uVar4 = (ulong)(*(long *)(unaff_x22 + 0x118) != 0);
  }
  else {
    if ((*(long *)(unaff_x22 + 0x118) == 2) &&
       (*(char *)(*(long *)(unaff_x22 + 0xb0) + _DAT_113049e60) == '\x01')) {
      if (lRam0000000113049de8 != -1) {
        _swift_once(0x113049de8,0x10402f994);
      }
      uVar3 = uRam0000000113049df0;
      *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 200);
      _swift_retain(uVar3);
      func_0x000100075034(FUN_104031fd0,unaff_x22 + 0x90,puVar1 + 8);
      _swift_release(uVar3);
    }
    uVar4 = 2;
  }
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined1 *)(unaff_x22 + 0x38) = 0;
  *(ulong *)(unaff_x22 + 0x40) = uVar4;
  func_0x000100087bd4(FUN_104032108,unaff_x22 + 0x10,puVar1 + 8);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  uVar2 = 0;
  __sScMMa();
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104030988,uVar2,uVar3);
  return;
}



/* Entry: 104030988; end: 104030b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104030988(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
  if (lRam0000000113049dd0 != -1) {
    _swift_once(0x113049dd0,FUN_10402f988);
  }
  uVar3 = uRam0000000113049dd8;
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 200);
  _swift_retain(uVar3);
  func_0x000100075034(unaff_x22 + 0x138,0x1040320d8,unaff_x22 + 0x70,PTR___sSbN_11034dd40);
  _swift_release(uVar3);
  cVar2 = *(char *)(unaff_x22 + 0x138);
  FUN_10402d6c4(lVar4 + _DAT_113049e00,unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  if (lVar4 == 0) {
    FUN_104031d2c(unaff_x22 + 0x48,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar7 = *(long *)(unaff_x22 + 0x68);
    func_0x0001000a8868(unaff_x22 + 0x48,lVar4);
    __s10Foundation4DateVACycfC(uVar3);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar6);
    (**(code **)(lVar1 + 8))(uVar3,uVar5);
    (**(code **)(lVar7 + 0x10))(param_1,0,lVar4,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x48);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  if (cVar2 != '\0') {
    uVar3 = 1;
  }
  (**(code **)(unaff_x22 + 0xd8))(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104030b08,0,0);
  return;
}



/* Entry: 104030b08; end: 104030b43;  */

void FUN_104030b08(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x108));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104030b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104030b44; end: 104030bff; -[SCWAnalyzerBridge analyzeImage:mediaID:completion:] */

void FUN_104030b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  puVar1 = &UNK_110737538;
  _swift_allocObject(&UNK_110737538,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10402e2b4(param_3,param_4,param_2,FUN_104031fe4,puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 104030c00; end: 104030c7f;  */

void FUN_104030c00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_8;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(long *)(unaff_x22 + 0xb0) = param_2;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x100) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104030c80;
  plVar3[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f5a8,0,0);
  return;
}



/* Entry: 104030c80; end: 104030cef;  */

void FUN_104030c80(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x108) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x100));
  plVar2 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(lVar4 + 0x110) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_104030cf0;
  lVar5 = *(long *)(lVar4 + 0xc0);
  lVar3 = *(long *)(lVar4 + 0xb8);
  plVar2[0x28] = *(long *)(lVar4 + 200);
  plVar2[0x29] = param_1;
  plVar2[0x26] = lVar3;
  plVar2[0x27] = lVar5;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  plVar2[0x2a] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar2[0x2b] = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  plVar2[0x2c] = lVar5;
  uVar1 = lVar5 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x2d] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402a3f0,param_1,0);
  return;
}



/* Entry: 104030cf0; end: 104030d43;  */

void FUN_104030cf0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  *(undefined1 *)(lVar1 + 0x139) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104030d44,0,0);
  return;
}



/* Entry: 104030d44; end: 104030eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104030d44(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x22;
  
  puVar1 = PTR___sytN_11034f1b0;
  if (*(char *)(unaff_x22 + 0x139) == '\x01') {
    uVar4 = (ulong)(*(long *)(unaff_x22 + 0x118) != 0);
  }
  else {
    if ((*(long *)(unaff_x22 + 0x118) == 2) &&
       (*(char *)(*(long *)(unaff_x22 + 0xb0) + _DAT_113049e60) == '\x01')) {
      if (lRam0000000113049de8 != -1) {
        _swift_once(0x113049de8,0x10402f994);
      }
      uVar3 = uRam0000000113049df0;
      *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 200);
      _swift_retain(uVar3);
      func_0x000100075034(0x104031d80,unaff_x22 + 0x90,puVar1 + 8);
      _swift_release(uVar3);
    }
    uVar4 = 2;
  }
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined1 *)(unaff_x22 + 0x38) = 1;
  *(ulong *)(unaff_x22 + 0x40) = uVar4;
  func_0x000100087bd4(FUN_104031d6c,unaff_x22 + 0x10,puVar1 + 8);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  uVar2 = 0;
  __sScMMa();
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104030eac,uVar2,uVar3);
  return;
}



/* Entry: 104030eac; end: 10403102b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104030eac(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
  if (lRam0000000113049dd0 != -1) {
    _swift_once(0x113049dd0,FUN_10402f988);
  }
  uVar3 = uRam0000000113049dd8;
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 200);
  _swift_retain(uVar3);
  func_0x000100075034(unaff_x22 + 0x138,0x1040320c4,unaff_x22 + 0x70,PTR___sSbN_11034dd40);
  _swift_release(uVar3);
  cVar2 = *(char *)(unaff_x22 + 0x138);
  FUN_10402d6c4(lVar4 + _DAT_113049e00,unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  if (lVar4 == 0) {
    FUN_104031d2c(unaff_x22 + 0x48,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar7 = *(long *)(unaff_x22 + 0x68);
    func_0x0001000a8868(unaff_x22 + 0x48,lVar4);
    __s10Foundation4DateVACycfC(uVar3);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar6);
    (**(code **)(lVar1 + 8))(uVar3,uVar5);
    (**(code **)(lVar7 + 0x10))(param_1,1,lVar4,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x48);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  if (cVar2 != '\0') {
    uVar3 = 1;
  }
  (**(code **)(unaff_x22 + 0xd8))(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104031fc4,0,0);
  return;
}



/* Entry: 10403102c; end: 10403113b; -[SCWAnalyzerBridge analyzeVideoAtURL:mediaID:completion:] */

void FUN_10403102c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  puVar2 = &UNK_110737510;
  _swift_allocObject(&UNK_110737510,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  _objc_retain(param_1);
  func_0x00010402e854(puVar3,param_4,param_2,0x104031af8,puVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 10403113c; end: 104031157;  */

void FUN_10403113c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 104031158; end: 1040311bf;  */

void FUN_104031158(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040311c0,uVar1,uVar2);
  return;
}



/* Entry: 1040311c0; end: 104031203;  */

void FUN_1040311c0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar2 = *(code **)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  (*pcVar2)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104031200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104031204; end: 10403126f;  */

void FUN_104031204(void)

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
  plVar3 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x104032124;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 104031270; end: 1040312ab;  */

void FUN_104031270(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000f66f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*param_2);
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 1040312ac; end: 10403136f;  */

void FUN_1040312ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8));
  lVar7 = *plVar6;
  lVar4 = plVar6[1];
  plVar8 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10403214c;
  plVar8[0x1b] = lVar7;
  plVar8[0x1c] = lVar4;
  plVar8[0x19] = lVar3;
  plVar8[0x1a] = unaff_x20 + uVar9;
  plVar8[0x17] = lVar2;
  plVar8[0x18] = lVar5;
  plVar8[0x16] = lVar1;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  plVar8[0x1d] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x1e] = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0x1f] = uVar9;
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  plVar8[0x20] = (long)plVar6;
  *plVar6 = (long)plVar8;
  plVar6[1] = (long)FUN_104030760;
  plVar6[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f5a8,0,0);
  return;
}



/* Entry: 104031370; end: 1040313db;  */

void FUN_104031370(void)

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
  plVar3 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x104032128;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 1040313dc; end: 104031447;  */

void FUN_1040313dc(void)

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
  plVar3 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10403212c;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 104031448; end: 1040314b3;  */

void FUN_104031448(void)

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
  plVar3 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x104032130;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 1040314b4; end: 1040315a7;  */

void FUN_1040314b4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar10 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar9 + uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)(unaff_x20 + uVar9);
  lVar4 = *plVar3;
  lVar1 = plVar3[1];
  plVar3 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8));
  lVar5 = *plVar3;
  lVar2 = plVar3[1];
  plVar6 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x104032134;
  plVar6[0x1b] = lVar5;
  plVar6[0x1c] = lVar2;
  plVar6[0x19] = lVar1;
  plVar6[0x1a] = unaff_x20 + uVar7;
  plVar6[0x17] = unaff_x20 + uVar10;
  plVar6[0x18] = lVar4;
  plVar6[0x16] = lVar8;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  plVar6[0x1d] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[0x1e] = lVar4;
  uVar7 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1f] = uVar7;
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  plVar6[0x20] = (long)plVar3;
  *plVar3 = (long)plVar6;
  plVar3[1] = (long)FUN_104030c80;
  plVar3[7] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f5a8,0,0);
  return;
}



/* Entry: 1040315a8; end: 104031613;  */

void FUN_1040315a8(void)

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
  plVar3 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x104032138;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 104031614; end: 10403167f;  */

void FUN_104031614(void)

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
  plVar3 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10403213c;
  plVar3[3] = lVar2;
  plVar3[4] = lVar4;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104031158,0,0);
  return;
}



/* Entry: 104031680; end: 1040316df; -[SCWAnalyzerBridge init] */

void FUN_104031680(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCW.SCWAnalyzerBridge",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040316ac);
  (*pcVar1)();
}



/* Entry: 1040316e0; end: 10403177b; -[SCWAnalyzerBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040316e0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113049e28));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113049e30 + 8));
  FUN_104031d2c(param_1 + _DAT_113049e00,0x113049c70,&UNK_10dcc50b0);
  _swift_release(*(undefined8 *)(param_1 + _DAT_113049e38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113049de0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113049e40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113049e08));
  return;
}



/* Entry: 10403177c; end: 1040317df;  */

void FUN_10403177c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1040317e0;
                    /* WARNING: Could not recover jumptable at 0x0001040317dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1040317e0; end: 10403181b;  */

void FUN_1040317e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104031818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10403181c; end: 104031927;  */

undefined1 FUN_10403181c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_opt_self();
  func_0x000107c5ba34();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1df980);
  puVar3 = puVar1;
  func_0x000107c4d9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,puVar3);
    _swift_unknownObjectRelease(puVar3);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_104031d2c(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar4 = &uStack_71;
    _swift_dynamicCast(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar4 != 0) {
      return uStack_71;
    }
  }
  return 1;
}



/* Entry: 104031928; end: 10403197f;  */

void FUN_104031928(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104032140;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(plVar1,FUN_10402f1bc,0,0);
  return;
}



/* Entry: 104031980; end: 104031997;  */

void FUN_104031980(void)

{
  long unaff_x20;
  
  FUN_104030034(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104031998; end: 10403199b;  */

void FUN_104031998(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5140;
  _swift_getWitnessTable(&UNK_10dcc5140,&UNK_110737450);
  puRam0000000113049e48 = puVar1;
  return;
}


