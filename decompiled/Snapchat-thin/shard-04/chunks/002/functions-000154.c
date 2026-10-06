/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103218170; end: 103218173;  */

long FUN_103218170(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar3 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  uVar3 = 0x112f4d140;
  func_0x0001000285a8(0x112f4d140,&UNK_10db9ec30);
  uVar4 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_78;
  *(undefined8 *)(lVar1 + 0x70) = uStack_80;
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_88;
  *(undefined8 *)(lVar1 + 0x98) = uStack_90;
  FUN_103218304(&uStack_60,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103218304(&uStack_70,auStack_a0,0x112f4d140,&UNK_10db9ec30);
  FUN_103218304(&uStack_80,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103218304(&uStack_90,auStack_a0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 103218174; end: 103218273;  */

uint FUN_103218174(long param_1,char param_2,long param_3,char param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_2 == '\0') {
    if (param_4 == '\0') {
      uVar4 = (uint)param_3 ^ (uint)param_1 ^ 1;
      goto LAB_103218264;
    }
  }
  else if (param_2 == '\x01') {
    if (param_4 == '\x01') {
      puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
      lVar2 = param_3;
      func_0x000107c6148c(param_3,puVar1);
      if (lVar2 != 0) {
        func_0x000107c615f0(param_3);
      }
      puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c6148c(param_1,puVar1);
      if (param_1 == 0) {
        if (lVar2 == 0) goto LAB_103218248;
        func_0x000107c61170(lVar2);
      }
      else if (lVar2 != 0) {
        uVar3 = 0;
        func_0x0001007bbbf8(0);
        func_0x000107c60118(param_1,lVar2,uVar3);
        func_0x000107c61170(lVar2);
        uVar4 = (uint)param_1;
        goto LAB_103218264;
      }
    }
  }
  else if ((param_4 == '\x02') && (param_3 == 0)) {
LAB_103218248:
    uVar4 = 1;
    goto LAB_103218264;
  }
  uVar4 = 0;
LAB_103218264:
  return uVar4 & 1;
}



/* Entry: 103218274; end: 103218303;  */

void FUN_103218274(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0e5b8;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e5d8;
  uVar6 = param_3;
  func_0x000107c5faec();
  ppuVar5 = ppuVar4;
  uVar7 = uVar6;
  func_0x000103b93afc();
  puVar1 = *ppuVar5;
  puVar2 = ppuVar5[1];
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0e618;
  func_0x000107c5faec();
  *param_1 = ppuVar3;
  param_1[1] = param_3;
  param_1[2] = ppuVar4;
  param_1[3] = uVar6;
  param_1[4] = puVar1;
  param_1[5] = puVar2;
  param_1[6] = ppuVar5;
  param_1[7] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(puVar2);
  return;
}



/* Entry: 103218304; end: 1032183af;  */

undefined8 FUN_103218304(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1032183b0; end: 1032184bf;  */

undefined8 * FUN_1032183b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1032184c0; end: 103218523;  */

undefined8 * FUN_1032184c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103218524; end: 103218603;  */

int FUN_103218524(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103218604; end: 103218653;  */

undefined8 * FUN_103218604(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001032185cc(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001032185f0(uVar3,uVar2);
  return param_1;
}



/* Entry: 103218654; end: 10321868f;  */

undefined8 * FUN_103218654(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001032185f0(uVar3,uVar2);
  return param_1;
}



/* Entry: 103218690; end: 103218767;  */

int FUN_103218690(int *param_1,uint param_2)

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



/* Entry: 103218768; end: 1032187ab;  */

/* WARNING: Possible PIC construction at 0x000103218788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010321878c) */

void FUN_103218768(long param_1)

{
  func_0x000103b93a28();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1032187ac; end: 10321885f;  */

long FUN_1032187ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  lVar5 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  uVar6 = 0x112f4d148;
  func_0x0001000285a8(0x112f4d148,&UNK_10db9ece8);
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  uVar6 = 0x112f4c588;
  func_0x0001000285a8(0x112f4c588,&UNK_10db9d0c0);
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  *(undefined ***)(lVar5 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x48) = uVar2;
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 103218860; end: 1032188ef;  */

long FUN_103218860(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032188f0; end: 10321895b;  */

undefined8 * FUN_1032188f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10321895c; end: 10321899f;  */

undefined8 * FUN_10321895c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1032189a0; end: 103218a37;  */

int FUN_1032189a0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103218a38; end: 103219123;  */

undefined * FUN_103218a38(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar6 = 0;
  func_0x000107c5ed50();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = &UNK_10db9ed28;
  func_0x000107c614e0(&UNK_10db9ed28);
  lVar14 = unaff_x20[1];
  if (lVar14 == 0) {
    func_0x000107c61574();
  }
  else {
    lVar1 = unaff_x20[2];
    lVar3 = unaff_x20[3];
    lVar15 = *unaff_x20;
    lVar13 = unaff_x20[4];
    func_0x000107c61434(lVar14);
    func_0x000107c61434(lVar3);
    FUN_1032267f8(lVar15,lVar14,lVar1,lVar3,lVar13,puVar11);
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(lVar14);
    func_0x000107c61574(puVar11);
    if (lVar15 != 0) {
      lVar14 = lVar15;
      func_0x000107c4cf80();
      if (lVar14 == 0) {
        func_0x000107c61170(lVar15);
        return PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lStack_d8 = lVar15;
      func_0x000107c4cf7c();
      func_0x000107c61180();
      if (lVar15 != 0) {
        lStack_e8 = lVar15;
        lStack_e0 = lVar16;
        func_0x000107c600f4(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000100e15a08();
        func_0x000107c601c0(auStack_88,lVar6,lVar15);
        puVar4 = PTR___sypN_11034f1a8;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_70 != 0) {
          func_0x000100102924(auStack_88,auStack_a8);
          func_0x000100102924(auStack_a8,auStack_d0);
          uVar9 = 0;
          FUN_103219274(0,0x112f4d150,&PTR_PTR_1126acdc0);
          plVar10 = &lStack_b0;
          func_0x000107c6147c(plVar10,auStack_d0,puVar4 + 8,uVar9,6);
          lVar14 = lStack_b0;
          if ((((ulong)plVar10 & 1) != 0) && (lStack_b0 != 0)) {
            puVar8 = puVar11;
            func_0x000107c61550();
            if (((int)puVar8 == 0) ||
               (((long)puVar11 < 0 || (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar11 >> 0x3e == 0) {
                puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar11) {
                  puVar7 = puVar11;
                }
                func_0x000107c60480(puVar7);
              }
              puVar8 = (undefined *)0x0;
              FUN_103222c2c(0,puVar7 + 1,1,puVar11);
            }
            uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
            uVar2 = *(ulong *)(uVar12 + 0x10);
            puVar11 = puVar8;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
              FUN_103222c2c(puVar11,uVar2 + 1,1,puVar8);
              uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
            *(long *)(uVar12 + uVar2 * 8 + 0x20) = lVar14;
          }
          func_0x000107c601c0(auStack_88,lVar6,lVar15);
        }
        func_0x000107c61170(lStack_e8);
        func_0x000107c61170(lStack_d8);
        (**(code **)(lStack_e0 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
        return puVar11;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103218cf4);
      (*pcVar5)();
    }
  }
  return (undefined *)0x0;
}



/* Entry: 103219124; end: 10321913f;  */

void FUN_103219124(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103219140();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103219140; end: 103219273;  */

undefined * FUN_103219140(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103219274);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103222b90();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103219274(0,0x112f4d158,&PTR_PTR_1126d4b28);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103219274; end: 1032192b3;  */

void FUN_103219274(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032192b4; end: 103219387;  */

void FUN_1032192b4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e39c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d8c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c42120();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) goto LAB_10321934c;
    }
  }
  func_0x000107c3e39c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c5cab0();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar1 == 0) {
    return;
  }
LAB_10321934c:
  func_0x000107c5faec(lVar1);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 103219388; end: 10321985b;  */

undefined1  [16] FUN_103219388(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined auStack_a0 [8];
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar3 = (undefined *)0x0;
  puStack_80 = param_2;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(puVar3 + -8);
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  func_0x000103218cf4();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61434(param_3);
    goto LAB_103219824;
  }
  puVar15 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar14;
  puStack_88 = puVar3;
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar3 = *(undefined **)(puVar15 + 0x10);
    if (puVar3 == (undefined *)0x0) goto LAB_1032195ec;
LAB_103219414:
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar7 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar4 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1032195d4);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar4 + (long)puVar7 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = param_2;
        }
        else {
          puVar5 = puVar7;
          puVar12 = puVar4;
          func_0x0001032229c0();
        }
        puVar13 = puVar7 + 1;
        if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1032195d0);
          (*pcVar2)();
        }
        puVar8 = puVar5;
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103219850);
          (*pcVar2)();
        }
        puVar6 = puVar8;
        func_0x000107c3cfdc();
        func_0x000107c61170(puVar8);
        if ((int)puVar6 == 0xc) {
          puVar6 = puVar5;
          func_0x000107c4b880();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103219858);
            (*pcVar2)();
          }
          puVar8 = puVar6;
          func_0x000107c42d8c();
        }
        else {
          puVar8 = puVar5;
          func_0x000107c3cf80();
          func_0x000107c61180();
          if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103219854);
            (*pcVar2)();
          }
          puVar6 = puVar8;
          func_0x000107c5da28();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10321985c);
            (*pcVar2)();
          }
          puVar8 = puVar6;
          func_0x000107c41598();
        }
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        if (puVar8 != (undefined *)0x0) break;
        func_0x000107c61170(puVar5);
        param_2 = puVar12;
        puVar7 = puVar7 + 1;
        if (puVar13 == puVar3) goto LAB_1032195f8;
      }
      puVar7 = puVar8;
      func_0x000107c5faec();
      param_2 = puVar12;
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar8);
      puVar5 = puStack_78;
      func_0x000107c61558();
      if (((ulong)puVar5 & 1) == 0) {
        param_2 = (undefined *)(*(long *)(puStack_78 + 0x10) + 1);
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1);
        puStack_78 = puVar5;
      }
      uVar1 = *(ulong *)(puStack_78 + 0x10);
      puVar5 = (undefined *)(uVar1 + 1);
      if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_78 + 0x18));
        param_2 = puVar5;
        func_0x0001000d182c(puVar8,puVar5,1,puStack_78);
        puStack_78 = puVar8;
      }
      *(undefined **)(puStack_78 + 0x10) = puVar5;
      *(undefined **)(puStack_78 + uVar1 * 0x10 + 0x20) = puVar7;
      *(undefined **)(puStack_78 + uVar1 * 0x10 + 0x28) = puVar12;
      puVar12 = param_2;
      puVar7 = puVar13;
    } while (puVar13 != puVar3);
  }
  else {
    puVar3 = puVar4;
    if (-1 < (long)puVar4) {
      puVar3 = puVar15;
    }
    func_0x000107c60480();
    if (puVar3 != (undefined *)0x0) goto LAB_103219414;
LAB_1032195ec:
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = param_2;
  }
LAB_1032195f8:
  func_0x000107c6142c(puVar4);
  puVar3 = puStack_78;
  puVar4 = (undefined *)0x0;
  if (param_3 != (undefined *)0x0) {
    puVar4 = puStack_80;
  }
  puVar15 = (undefined *)0xe000000000000000;
  if (param_3 != (undefined *)0x0) {
    puVar15 = param_3;
  }
  lVar14 = *(long *)(puStack_78 + 0x10);
  if (lVar14 != 0) {
    uVar11 = *(ulong *)(puStack_78 + 0x20);
    puVar7 = *(undefined **)(puStack_78 + 0x28);
    uVar1 = uVar11 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(param_3);
      puVar5 = puVar7;
      func_0x000107c61434();
      lVar14 = lVar14 + -1;
      if (lVar14 == 0) {
        func_0x000107c6142c();
        FUN_103227044();
        lVar9 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 4;
        *(undefined8 *)(lVar9 + 0x10) = 2;
        puVar5 = PTR___sSSN_11034da80;
        *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
        lVar14 = lVar9;
        func_0x00010075bbf0();
        *(undefined **)(lVar9 + 0x20) = puVar4;
        *(undefined **)(lVar9 + 0x28) = puVar15;
        *(undefined **)(lVar9 + 0x60) = puVar5;
        *(long *)(lVar9 + 0x68) = lVar14;
        *(long *)(lVar9 + 0x40) = lVar14;
        *(ulong *)(lVar9 + 0x48) = uVar11;
        *(undefined **)(lVar9 + 0x50) = puVar7;
      }
      else {
        func_0x000103227110();
        lVar9 = 0x112d36008;
        puStack_80 = puVar5;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 6;
        *(undefined8 *)(lVar9 + 0x10) = 3;
        puVar5 = PTR___sSSN_11034da80;
        *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
        lVar10 = lVar9;
        func_0x00010075bbf0();
        *(long *)(lVar9 + 0x40) = lVar10;
        *(undefined **)(lVar9 + 0x20) = puVar4;
        *(undefined **)(lVar9 + 0x28) = puVar15;
        puVar4 = PTR_PTR_1126b2c18;
        func_0x000107c61168();
        puVar13 = puVar7;
        func_0x000107c5fadc(uVar11);
        func_0x000107c6142c(puVar7);
        func_0x000107c43604();
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        puVar15 = puVar4;
        func_0x000107c5faec();
        func_0x000107c61170(puVar4);
        *(undefined **)(lVar9 + 0x60) = puVar5;
        *(long *)(lVar9 + 0x68) = lVar10;
        *(undefined **)(lVar9 + 0x48) = puVar15;
        *(undefined **)(lVar9 + 0x50) = puVar13;
        func_0x000107c6142c(puVar3);
        puVar4 = PTR___sSis7CVarArgsWP_11034df08;
        *(undefined **)(lVar9 + 0x88) = PTR___sSiN_11034deb0;
        *(undefined **)(lVar9 + 0x90) = puVar4;
        *(long *)(lVar9 + 0x70) = lVar14;
        puVar3 = puStack_80;
      }
      puVar15 = puVar12;
      func_0x000107c5fae0(puVar3,puVar12,lVar9);
      puVar4 = puStack_98;
      func_0x000107c6142c(puVar12);
      func_0x000107c61574(lVar9);
      puStack_70 = puVar3;
      puStack_68 = puVar15;
      func_0x000107c5eb68(puVar4);
      func_0x000100e8b654();
      puVar3 = puVar4;
      param_3 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar4,PTR___sSSN_11034da80,lVar9);
      (**(code **)(lStack_90 + 8))(puVar4,puStack_88);
      func_0x000107c6142c(puVar15);
      puStack_80 = puVar3;
      goto LAB_103219824;
    }
  }
  func_0x000107c61434(param_3);
  func_0x000107c6142c(puVar3);
  puStack_80 = puVar4;
  param_3 = puVar15;
LAB_103219824:
  auVar16._8_8_ = param_3;
  auVar16._0_8_ = puStack_80;
  return auVar16;
}



/* Entry: 10321985c; end: 1032198c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10321985c(ulong param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_1130190c8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if ((param_1 & 1) == 0) {
        func_0x000107c4ded4();
      }
      else {
        lVar1 = 1;
      }
      func_0x000107c615e8();
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 1032198c8; end: 103219a47;  */

long FUN_1032198c8(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  uVar3 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  func_0x00010321a96c(&uStack_70,auStack_c0,0x112f4b538,&UNK_10db9ab30);
  func_0x00010321a96c(&uStack_80,auStack_c0,0x112f4b7e0,&UNK_10db9b0a0);
  func_0x00010321a96c(&uStack_90,auStack_c0,0x112f4b7e0,&UNK_10db9b0a0);
  func_0x00010321a96c(&uStack_a0,auStack_c0,0x112f4b7e0,&UNK_10db9b0a0);
  func_0x00010321a96c(&uStack_b0,auStack_c0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 103219a48; end: 103219a8b;  */

void FUN_103219a48(undefined8 *param_1)

{
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
  
  FUN_10321a324(&uStack_70);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 103219a8c; end: 103219a8f;  */

long FUN_103219a8c(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  uVar3 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  func_0x00010321a96c(&uStack_70,auStack_c0,0x112f4b538,&UNK_10db9ab30);
  func_0x00010321a96c(&uStack_80,auStack_c0,0x112f4b7e0,&UNK_10db9b0a0);
  func_0x00010321a96c(&uStack_90,auStack_c0,0x112f4b7e0,&UNK_10db9b0a0);
  func_0x00010321a96c(&uStack_a0,auStack_c0,0x112f4b7e0,&UNK_10db9b0a0);
  func_0x00010321a96c(&uStack_b0,auStack_c0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 103219a90; end: 103219cfb;  */

uint FUN_103219a90(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  undefined1 auStack_190 [80];
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puVar6;
  
  puVar2 = &UNK_10db9ede8;
  func_0x000107c614e0(&UNK_10db9ede8);
  lStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  if (lStack_98 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_118 = param_1[5];
    uStack_120 = param_1[4];
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    uStack_f8 = param_1[9];
    uStack_100 = param_1[8];
    uStack_138 = param_1[1];
    uStack_140 = *param_1;
    uStack_128 = param_1[3];
    uStack_130 = param_1[2];
    uStack_f0 = uStack_140;
    uStack_e8 = uStack_138;
    uStack_e0 = uStack_130;
    uStack_d8 = uStack_128;
    uStack_d0 = uStack_120;
    uStack_c8 = uStack_118;
    uStack_c0 = uStack_110;
    uStack_b8 = uStack_108;
    uStack_b0 = uStack_100;
    uStack_a8 = uStack_f8;
    FUN_10321a938(&uStack_140,auStack_190);
    puVar3 = &uStack_f0;
    FUN_103225b98(puVar3,param_1,puVar2);
    func_0x00010321a9b4(&uStack_a0,0x112f4d1c0,&UNK_10db9ee08);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = &UNK_10db9ee10;
      func_0x000107c614e0(&UNK_10db9ee10);
      FUN_10321a938(&uStack_140,auStack_190);
      puVar3 = &uStack_f0;
      func_0x000103225a38(puVar3,param_1,puVar2);
      func_0x00010321a9b4(&uStack_a0,0x112f4d1c0,&UNK_10db9ee08);
      func_0x000107c61574(puVar2);
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        func_0x000107c5c018();
        func_0x000107c61180();
        if (puVar4 != (undefined8 *)0x0) {
          puVar2 = &UNK_10db9ee30;
          func_0x000107c614e0(&UNK_10db9ee30);
          FUN_10321a938(&uStack_140,auStack_190);
          puVar5 = &uStack_f0;
          func_0x000103225a14(puVar5,param_1,puVar2);
          func_0x00010321a9b4(&uStack_a0,0x112f4d1c0,&UNK_10db9ee08);
          func_0x000107c61574(puVar2);
          if (puVar5 == (undefined8 *)0x0) {
            iVar1 = 0;
          }
          else {
            puVar6 = puVar5;
            func_0x000107c3ebcc();
            iVar1 = (int)puVar6;
            func_0x000107c61170(puVar5);
          }
          puVar5 = puVar4;
          func_0x000107c5c080();
          puVar6 = puVar4;
          func_0x000107c5c084(puVar4);
          puVar7 = puVar3;
          func_0x000107c5def0(puVar3);
          func_0x000107b2894c(puVar5,puVar6,puVar7);
          if (iVar1 != 0) {
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar3);
            if ((param_2 & 1) == 0) {
              return 0;
            }
            return 1;
          }
          if ((int)puVar5 != 0) {
            puVar5 = puVar4;
            func_0x000107c5c080(puVar4);
            puVar6 = puVar4;
            func_0x000107c5c084(puVar4);
            func_0x000107b289f4(puVar5,puVar6);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar4);
            if ((param_2 & 1) == 0) {
              return 0;
            }
            return (uint)puVar5 ^ 1;
          }
          func_0x000107c61170(puVar4);
        }
        func_0x000107c61170(puVar3);
      }
    }
  }
  return 0;
}



/* Entry: 103219cfc; end: 10321a05b;  */

code * FUN_103219cfc(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar4 = 0x103219e80;
  func_0x0001000c0ebc(0x103219e80,0);
  puVar1 = &UNK_110627768;
  func_0x000107c613fc(&UNK_110627768,0x11,7);
  puVar1[0x10] = param_2;
  pcVar2 = FUN_10321a3d8;
  func_0x0001000bfde0(FUN_10321a3d8,puVar1,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar2);
  puVar3 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_10321a05c;
  FUN_10326d7dc(FUN_10321a05c,0,uVar4);
  func_0x000107c61170(uVar4);
  uVar5 = *puVar3;
  func_0x000107c61174(uVar5);
  uVar4 = 0x10321a078;
  FUN_10326d7dc(0x10321a078,0,uVar5);
  func_0x000107c61170(uVar5);
  pcVar6 = pcVar2;
  func_0x00010061da28(pcVar2,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  uVar4 = 0x112f4d160;
  func_0x0001000285a8(0x112f4d160,&UNK_10db9ed48);
  pcVar2 = FUN_10321a29c;
  func_0x0001000bfde0(FUN_10321a29c,0,uVar4);
  func_0x000107c61574(pcVar6);
  return pcVar2;
}



/* Entry: 10321a05c; end: 10321a093;  */

void FUN_10321a05c(void)

{
  if (lRam0000000112f4d7f8 != -1) {
    func_0x000107c61568(0x112f4d7f8,0x1032275c8);
  }
  func_0x000107c45154(uRam0000000113807148,0x113807148,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10321a094; end: 10321a0db;  */

void FUN_10321a094(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    func_0x000107c61568(param_1,param_3);
  }
  func_0x000107c45154(*param_2,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10321a0dc; end: 10321a29b;  */

void FUN_10321a0dc(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_24f;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_167;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
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
  undefined8 uStack_6f;
  
  uVar1 = param_2;
  lVar3 = param_3;
  FUN_1032271dc();
  if ((param_2 & 1) == 0) {
    param_3 = param_4;
  }
  if (param_3 == 0) {
    func_0x0001031e60c4(&lStack_110);
  }
  else {
    lStack_2f0 = param_3;
    func_0x0001031e60f0(&lStack_2f0);
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_1b0 = uStack_260;
    uStack_19f = (undefined7)uStack_24f;
    uStack_198 = (undefined1)((ulong)uStack_24f >> 0x38);
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_238 = uStack_2e8;
    lStack_240 = lStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    lStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    lStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    func_0x0001031e6100(&lStack_240);
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_80 = uStack_1b0;
    uStack_6f = CONCAT17(uStack_198,uStack_19f);
    uStack_c8 = uStack_1f8;
    uStack_d0 = uStack_200;
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_108 = uStack_238;
    lStack_110 = lStack_240;
    uStack_f8 = uStack_228;
    uStack_100 = uStack_230;
    uStack_e8 = lStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = lStack_208;
    uStack_e0 = uStack_210;
  }
  uStack_190 = uStack_98;
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_180 = uStack_88;
  uStack_188 = uStack_90;
  uStack_178 = uStack_80;
  uStack_167 = uStack_6f;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = (undefined1)uStack_a8;
  uStack_19f = (undefined7)((ulong)uStack_a8 >> 8);
  uStack_1a8 = (undefined1)uStack_b0;
  uStack_1a7 = (undefined7)((ulong)uStack_b0 >> 8);
  uStack_200 = uStack_108;
  lStack_208 = lStack_110;
  uStack_1f0 = uStack_f8;
  uStack_1f8 = uStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_3);
  func_0x000107c3f650();
  func_0x000107c61180();
  lStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0x654d6e6f69746361;
  uStack_228 = 0xea0000000000756e;
  uStack_150 = 1;
  uStack_158 = 0;
  uStack_210 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0x100;
  uStack_128 = 0;
  uStack_120 = 1;
  uStack_220 = uVar1;
  lStack_218 = lVar3;
  puStack_148 = puVar2;
  func_0x00010321a934(&lStack_240);
  func_0x000107c610b4(param_1,&lStack_240,0x128);
  return;
}



/* Entry: 10321a29c; end: 10321a2e3;  */

void FUN_10321a29c(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_10321a0dc(auStack_148,*param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 10321a2e4; end: 10321a2eb;  */

code * FUN_10321a2e4(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar5 = 0x103219e80;
  func_0x0001000c0ebc(0x103219e80,0);
  puVar2 = &UNK_110627768;
  func_0x000107c613fc(&UNK_110627768,0x11,7);
  puVar2[0x10] = uVar1;
  pcVar3 = FUN_10321a3d8;
  func_0x0001000bfde0(FUN_10321a3d8,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar2);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar3);
  puVar4 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  pcVar3 = FUN_10321a05c;
  FUN_10326d7dc(FUN_10321a05c,0,uVar5);
  func_0x000107c61170(uVar5);
  uVar6 = *puVar4;
  func_0x000107c61174(uVar6);
  uVar5 = 0x10321a078;
  FUN_10326d7dc(0x10321a078,0,uVar6);
  func_0x000107c61170(uVar6);
  pcVar7 = pcVar3;
  func_0x00010061da28(pcVar3,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar5);
  uVar5 = 0x112f4d160;
  func_0x0001000285a8(0x112f4d160,&UNK_10db9ed48);
  pcVar3 = FUN_10321a29c;
  func_0x0001000bfde0(FUN_10321a29c,0,uVar5);
  func_0x000107c61574(pcVar7);
  return pcVar3;
}



/* Entry: 10321a2ec; end: 10321a323;  */

undefined * FUN_10321a2ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x000103217470();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 10321a324; end: 10321a3d7;  */

void FUN_10321a324(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010326c18c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0dc78;
  uVar5 = param_3;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0dd98;
  uVar6 = uVar5;
  func_0x000107c5faec();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0eab8;
  uVar7 = uVar6;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebe918;
  uVar8 = uVar7;
  func_0x000107c5faec();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = ppuVar1;
  param_1[3] = uVar5;
  param_1[4] = ppuVar2;
  param_1[5] = uVar6;
  param_1[6] = ppuVar3;
  param_1[7] = uVar7;
  param_1[8] = ppuVar4;
  param_1[9] = uVar8;
  return;
}



/* Entry: 10321a3d8; end: 10321a453;  */

void FUN_10321a3d8(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  long unaff_x20;
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
  
  bVar1 = 0;
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  FUN_103219a90(&uStack_80,*(undefined1 *)(unaff_x20 + 0x10));
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 10321a454; end: 10321a493;  */

void FUN_10321a454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9ed88;
  func_0x000107c61520(&DAT_10db9ed88,&UNK_110627818);
  puRam0000000112f4d168 = puVar1;
  return;
}



/* Entry: 10321a494; end: 10321a497;  */

void FUN_10321a494(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d170 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d178;
  func_0x00010002969c(0x112f4d178,&UNK_10db9ed80);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d170 = puVar2;
  return;
}



/* Entry: 10321a498; end: 10321a4e7;  */

void FUN_10321a498(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d170 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d178;
  func_0x00010002969c(0x112f4d178,&UNK_10db9ed80);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d170 = puVar2;
  return;
}



/* Entry: 10321a4e8; end: 10321a65f;  */

undefined ** FUN_10321a4e8(void)

{
  return &PTR_DAT_110627780;
}



/* Entry: 10321a660; end: 10321a6cb;  */

long FUN_10321a660(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10321a6cc; end: 10321a747;  */

undefined8 * FUN_10321a6cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 10321a748; end: 10321a813;  */

undefined8 * FUN_10321a748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10321a814; end: 10321a887;  */

undefined8 * FUN_10321a814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10321a888; end: 10321a937;  */

int FUN_10321a888(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10321a938; end: 10321a9f3;  */

undefined8 FUN_10321a938(undefined8 param_1,undefined8 param_2)

{
  FUN_10321a6cc(param_2,param_1,&UNK_110627898);
  return param_2;
}



/* Entry: 10321a9f4; end: 10321aa0f;  */

undefined8 FUN_10321a9f4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
     (func_0x000107c605b8(uVar3,param_1[1],*param_2,param_2[1],0), (uVar3 & 1) != 0)) {
    if (uVar1 == 0) {
      if (uVar2 != 0) {
        return 0;
      }
    }
    else {
      if (uVar2 == 0) {
        return 0;
      }
      lVar8 = *(long *)(uVar1 + 0x10);
      if (lVar8 != *(long *)(uVar2 + 0x10)) {
        return 0;
      }
      if ((lVar8 != 0) && (uVar1 != uVar2)) {
        plVar6 = (long *)(uVar2 + 0x28);
        plVar7 = (long *)(uVar1 + 0x28);
        do {
          uVar3 = plVar7[-1];
          if ((uVar3 != plVar6[-1] || *plVar7 != *plVar6) &&
             (func_0x000107c605b8(), (uVar3 & 1) == 0)) {
            return 0;
          }
          plVar6 = plVar6 + 2;
          plVar7 = plVar7 + 2;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    if (uVar5 == 0) {
      if (uVar4 == 0) {
        return 1;
      }
    }
    else if (uVar4 != 0) {
      func_0x00010321cad8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      uVar3 = uVar5;
      func_0x000107c60118();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10321aa10; end: 10321ac1b;  */

long FUN_10321aa10(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x50) = uStack_78;
  *(undefined8 *)(lVar1 + 0x48) = uStack_80;
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uVar2 = 0x112f4d1d0;
  func_0x0001000285a8(0x112f4d1d0,&UNK_10db9eea0);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uVar3 = 0x112f4c640;
  func_0x0001000285a8(0x112f4c640,&UNK_10db9d6c0);
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uVar3 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar2 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0xf0) = unaff_x20[0xd];
  *(undefined8 *)(lVar1 + 0xe8) = uVar2;
  *(undefined8 *)(lVar1 + 0x100) = uVar3;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x118) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x110) = uStack_d0;
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  *(undefined8 *)(lVar1 + 0x150) = uVar3;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x140) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x138) = uStack_e0;
  func_0x00010321cbb0(&uStack_70,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  func_0x00010321cbb0(&uStack_80,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  func_0x00010321cbb0(&uStack_90,auStack_f0,0x112f4d1d0,&UNK_10db9eea0);
  func_0x00010321cbb0(&uStack_a0,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  func_0x00010321cbb0(&uStack_b0,auStack_f0,0x112f4c640,&UNK_10db9d6c0);
  func_0x00010321cbb0(&uStack_c0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  func_0x00010321cbb0(&uStack_d0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  func_0x00010321cbb0(&uStack_e0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10321ac1c; end: 10321ac77;  */

void FUN_10321ac1c(undefined8 *param_1)

{
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
  
  FUN_10321c000(&uStack_c0);
  func_0x00010321ca68(&uStack_c0);
  param_1[0xd] = uStack_58;
  param_1[0xc] = uStack_60;
  param_1[0xf] = uStack_48;
  param_1[0xe] = uStack_50;
  param_1[0x11] = uStack_38;
  param_1[0x10] = uStack_40;
  param_1[0x13] = uStack_28;
  param_1[0x12] = uStack_30;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Entry: 10321ac78; end: 10321ac7b;  */

long FUN_10321ac78(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x50) = uStack_78;
  *(undefined8 *)(lVar1 + 0x48) = uStack_80;
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uVar2 = 0x112f4d1d0;
  func_0x0001000285a8(0x112f4d1d0,&UNK_10db9eea0);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uVar3 = 0x112f4c640;
  func_0x0001000285a8(0x112f4c640,&UNK_10db9d6c0);
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uVar3 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar2 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0xf0) = unaff_x20[0xd];
  *(undefined8 *)(lVar1 + 0xe8) = uVar2;
  *(undefined8 *)(lVar1 + 0x100) = uVar3;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x118) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x110) = uStack_d0;
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  *(undefined8 *)(lVar1 + 0x150) = uVar3;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x140) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x138) = uStack_e0;
  func_0x00010321cbb0(&uStack_70,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  func_0x00010321cbb0(&uStack_80,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  func_0x00010321cbb0(&uStack_90,auStack_f0,0x112f4d1d0,&UNK_10db9eea0);
  func_0x00010321cbb0(&uStack_a0,auStack_f0,0x112f4b528,&UNK_10db9ab20);
  func_0x00010321cbb0(&uStack_b0,auStack_f0,0x112f4c640,&UNK_10db9d6c0);
  func_0x00010321cbb0(&uStack_c0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  func_0x00010321cbb0(&uStack_d0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  func_0x00010321cbb0(&uStack_e0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10321ac7c; end: 10321acf3;  */

void FUN_10321ac7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c45098(0x4026000000000000,0x4026000000000000,puVar1,param_2,0x217,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puRam0000000112f4d260 = puVar1;
  return;
}



/* Entry: 10321acf4; end: 10321b6c3;  */

void FUN_10321acf4(long *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uStack_7e8;
  undefined8 *puStack_7d0;
  undefined1 auStack_7c0 [160];
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  
  uStack_338 = param_2[0x17];
  uStack_340 = param_2[0x16];
  uStack_328 = param_2[0x19];
  uStack_330 = param_2[0x18];
  uStack_4a8 = param_2[0x13];
  uStack_4b0 = param_2[0x12];
  uStack_348 = param_2[0x15];
  uStack_350 = param_2[0x14];
  uStack_4e8 = param_2[0xb];
  uStack_4f0 = param_2[10];
  uStack_388 = param_2[0xd];
  uStack_390 = param_2[0xc];
  uStack_4d8 = param_2[0xd];
  uStack_4e0 = param_2[0xc];
  uStack_378 = param_2[0xf];
  uStack_380 = param_2[0xe];
  uStack_4c8 = param_2[0xf];
  uStack_4d0 = param_2[0xe];
  uStack_368 = param_2[0x11];
  uStack_370 = param_2[0x10];
  uStack_4b8 = param_2[0x11];
  uStack_4c0 = param_2[0x10];
  uStack_358 = param_2[0x13];
  uStack_360 = param_2[0x12];
  uStack_528 = param_2[3];
  uStack_530 = param_2[2];
  uStack_3c8 = param_2[5];
  uStack_3d0 = param_2[4];
  uStack_518 = param_2[5];
  uStack_520 = param_2[4];
  uStack_3b8 = param_2[7];
  uStack_3c0 = param_2[6];
  uStack_508 = param_2[7];
  uStack_510 = param_2[6];
  uStack_3a8 = param_2[9];
  uStack_3b0 = param_2[8];
  uStack_4f8 = param_2[9];
  uStack_500 = param_2[8];
  uStack_398 = param_2[0xb];
  uStack_3a0 = param_2[10];
  uStack_3e8 = param_2[1];
  uStack_3f0 = *param_2;
  uStack_3d8 = param_2[3];
  uStack_3e0 = param_2[2];
  uStack_538 = param_2[1];
  uStack_540 = *param_2;
  uStack_4a0 = param_2[0x14];
  puVar5 = param_2;
  uVar10 = param_3;
  FUN_10321b6c4();
  if (uVar10 == 0) {
LAB_10321aec4:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  puVar9 = &UNK_10db9ef90;
  func_0x000107c614e0(&UNK_10db9ef90);
  uStack_618 = param_2[0xd];
  uStack_620 = param_2[0xc];
  uStack_608 = param_2[0xf];
  uStack_610 = param_2[0xe];
  uStack_5f8 = param_2[0x11];
  uStack_600 = param_2[0x10];
  uStack_5e8 = param_2[0x13];
  uStack_5f0 = param_2[0x12];
  uStack_658 = param_2[5];
  uStack_660 = param_2[4];
  uStack_648 = param_2[7];
  uStack_650 = param_2[6];
  uStack_638 = param_2[9];
  uStack_640 = param_2[8];
  uStack_628 = param_2[0xb];
  uStack_630 = param_2[10];
  uStack_678 = param_2[1];
  uStack_680 = *param_2;
  uStack_668 = param_2[3];
  uStack_670 = param_2[2];
  iVar4 = (int)&uStack_680;
  FUN_10321cb18();
  if (iVar4 == 1) {
    func_0x000107c61574(puVar9);
    puStack_7d0 = (undefined8 *)0x0;
    puVar19 = (undefined8 *)0x0;
LAB_10321ae00:
    puVar9 = &UNK_10db9efb0;
    func_0x000107c614e0(&UNK_10db9efb0);
    iVar4 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar4 != 1) goto LAB_10321af64;
    func_0x000107c61574(puVar9);
    puVar6 = puVar19;
LAB_10321aff8:
    puVar9 = &UNK_10db9efd0;
    func_0x000107c614e0(&UNK_10db9efd0);
    iVar4 = (int)&uStack_680;
    func_0x00010321cb1c();
    uStack_7e8 = (uint)param_3;
    if (iVar4 != 1) {
      puVar17 = (undefined8 *)0x0;
      puVar19 = puVar6;
      goto LAB_10321b058;
    }
    func_0x000107c61574(puVar9);
    puVar14 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    if ((param_3 & 1) != 0) goto LAB_10321b130;
  }
  else {
    uStack_148 = uStack_618;
    uStack_150 = uStack_620;
    uStack_138 = uStack_608;
    uStack_140 = uStack_610;
    uStack_128 = uStack_5f8;
    uStack_130 = uStack_600;
    uStack_118 = uStack_5e8;
    uStack_120 = uStack_5f0;
    uStack_188 = uStack_658;
    uStack_190 = uStack_660;
    uStack_178 = uStack_648;
    uStack_180 = uStack_650;
    uStack_168 = uStack_638;
    uStack_170 = uStack_640;
    uStack_158 = uStack_628;
    uStack_160 = uStack_630;
    uStack_1a8 = uStack_678;
    uStack_1b0 = uStack_680;
    uStack_198 = uStack_668;
    uStack_1a0 = uStack_670;
    uStack_a8 = uStack_618;
    uStack_b0 = uStack_620;
    uStack_98 = uStack_608;
    uStack_a0 = uStack_610;
    uStack_88 = uStack_5f8;
    uStack_90 = uStack_600;
    uStack_78 = uStack_5e8;
    uStack_80 = uStack_5f0;
    uStack_e8 = uStack_658;
    uStack_f0 = uStack_660;
    uStack_d8 = uStack_648;
    uStack_e0 = uStack_650;
    uStack_c8 = uStack_638;
    uStack_d0 = uStack_640;
    uStack_b8 = uStack_628;
    uStack_c0 = uStack_630;
    uStack_108 = uStack_678;
    uStack_110 = uStack_680;
    uStack_f8 = uStack_668;
    uStack_100 = uStack_670;
    FUN_10321cb34(&uStack_1b0,&uStack_250);
    puVar19 = &uStack_110;
    FUN_103225df0(puVar19,&uStack_540,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar19 & 1) != 0) {
      func_0x000107c6142c(uVar10);
      goto LAB_10321aec4;
    }
    puVar9 = &UNK_10db9f068;
    func_0x000107c614e0(&UNK_10db9f068);
    FUN_10321cb34(&uStack_1b0,&uStack_250);
    puVar17 = &uStack_110;
    puVar19 = &uStack_540;
    func_0x000103225f4c(puVar17,puVar19,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar9);
    if (puVar17 == (undefined8 *)0x0) {
      puVar9 = &UNK_10db9f088;
      func_0x000107c614e0(&UNK_10db9f088);
      FUN_10321cb34(&uStack_1b0,&uStack_250);
      puStack_7d0 = &uStack_110;
      puVar19 = &uStack_540;
      FUN_103225cb8(puStack_7d0,puVar19,puVar9);
      func_0x00010321cb68(&uStack_680);
      func_0x000107c61574(puVar9);
      goto LAB_10321ae00;
    }
    puVar6 = puVar17;
    func_0x000107c5c158();
    func_0x000107c61180();
    func_0x000107c61170(puVar17);
    puStack_7d0 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    puVar9 = &UNK_10db9efb0;
    func_0x000107c614e0(&UNK_10db9efb0);
LAB_10321af64:
    uStack_1e8 = uStack_618;
    uStack_1f0 = uStack_620;
    uStack_1d8 = uStack_608;
    uStack_1e0 = uStack_610;
    uStack_1c8 = uStack_5f8;
    uStack_1d0 = uStack_600;
    uStack_1b8 = uStack_5e8;
    uStack_1c0 = uStack_5f0;
    uStack_228 = uStack_658;
    uStack_230 = uStack_660;
    uStack_218 = uStack_648;
    uStack_220 = uStack_650;
    uStack_208 = uStack_638;
    uStack_210 = uStack_640;
    uStack_1f8 = uStack_628;
    uStack_200 = uStack_630;
    uStack_248 = uStack_678;
    uStack_250 = uStack_680;
    uStack_238 = uStack_668;
    uStack_240 = uStack_670;
    uStack_148 = uStack_618;
    uStack_150 = uStack_620;
    uStack_138 = uStack_608;
    uStack_140 = uStack_610;
    uStack_128 = uStack_5f8;
    uStack_130 = uStack_600;
    uStack_118 = uStack_5e8;
    uStack_120 = uStack_5f0;
    uStack_188 = uStack_658;
    uStack_190 = uStack_660;
    uStack_178 = uStack_648;
    uStack_180 = uStack_650;
    uStack_168 = uStack_638;
    uStack_170 = uStack_640;
    uStack_158 = uStack_628;
    uStack_160 = uStack_630;
    uStack_1a8 = uStack_678;
    uStack_1b0 = uStack_680;
    uStack_198 = uStack_668;
    uStack_1a0 = uStack_670;
    FUN_10321cb34(&uStack_250,&uStack_320);
    puVar17 = &uStack_1b0;
    FUN_103225df0(puVar17,&uStack_540,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar9);
    if (((uint)puVar17 & 0xff) == 2) {
      param_3 = param_3 & 0xffffffff;
      puVar6 = puVar19;
      goto LAB_10321aff8;
    }
    puVar9 = &UNK_10db9efd0;
    func_0x000107c614e0(&UNK_10db9efd0);
LAB_10321b058:
    uStack_2b8 = uStack_618;
    uStack_2c0 = uStack_620;
    uStack_2a8 = uStack_608;
    uStack_2b0 = uStack_610;
    uStack_298 = uStack_5f8;
    uStack_2a0 = uStack_600;
    uStack_288 = uStack_5e8;
    uStack_290 = uStack_5f0;
    uStack_2f8 = uStack_658;
    uStack_300 = uStack_660;
    uStack_2e8 = uStack_648;
    uStack_2f0 = uStack_650;
    uStack_2d8 = uStack_638;
    uStack_2e0 = uStack_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_318 = uStack_678;
    uStack_320 = uStack_680;
    uStack_308 = uStack_668;
    uStack_310 = uStack_670;
    uStack_1e8 = uStack_618;
    uStack_1f0 = uStack_620;
    uStack_1d8 = uStack_608;
    uStack_1e0 = uStack_610;
    uStack_1c8 = uStack_5f8;
    uStack_1d0 = uStack_600;
    uStack_1b8 = uStack_5e8;
    uStack_1c0 = uStack_5f0;
    uStack_228 = uStack_658;
    uStack_230 = uStack_660;
    uStack_218 = uStack_648;
    uStack_220 = uStack_650;
    uStack_208 = uStack_638;
    uStack_210 = uStack_640;
    uStack_1f8 = uStack_628;
    uStack_200 = uStack_630;
    uStack_248 = uStack_678;
    uStack_250 = uStack_680;
    uStack_238 = uStack_668;
    uStack_240 = uStack_670;
    FUN_10321cb34(&uStack_320,&uStack_490);
    puVar7 = &uStack_250;
    puVar6 = &uStack_540;
    FUN_103225cb8(puVar7,puVar6,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar9);
    if (puVar6 == (undefined8 *)0x0) {
LAB_10321b118:
      puVar14 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      puVar6 = puVar19;
      puVar7 = puStack_7d0;
    }
    else {
      uVar15 = (ulong)puVar7 & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar15 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      puVar14 = puStack_7d0;
      puVar18 = puVar19;
      if (uVar15 == 0) {
        func_0x000107c6142c(puVar6);
        goto LAB_10321b118;
      }
    }
    puStack_7d0 = puVar7;
    uStack_7e8 = (uint)param_3;
    if (((param_3 & 1) != 0) && (((ulong)puVar17 & 1) == 0)) {
LAB_10321b130:
      if ((uStack_7e8 >> 8 & 1) == 0) {
        uStack_278 = uStack_340;
        uStack_280 = uStack_348;
        uStack_268 = uStack_330;
        uStack_270 = uStack_338;
        uStack_260 = uStack_328;
        puVar19 = &uStack_280;
        puVar17 = puStack_7d0;
        FUN_103219388(puVar19,puStack_7d0,puVar6);
        if (puVar17 != (undefined8 *)0x0) {
          func_0x000107c6142c(puVar6);
          puVar6 = puVar17;
          puStack_7d0 = puVar19;
        }
      }
    }
  }
  puVar19 = (undefined8 *)&UNK_10db9eff0;
  func_0x000107c614e0();
  iVar4 = (int)&uStack_680;
  func_0x00010321cb1c();
  if (iVar4 == 1) {
    func_0x000107c61574();
  }
  else {
    uStack_428 = uStack_618;
    uStack_430 = uStack_620;
    uStack_418 = uStack_608;
    uStack_420 = uStack_610;
    uStack_408 = uStack_5f8;
    uStack_410 = uStack_600;
    uStack_3f8 = uStack_5e8;
    uStack_400 = uStack_5f0;
    uStack_468 = uStack_658;
    uStack_470 = uStack_660;
    uStack_458 = uStack_648;
    uStack_460 = uStack_650;
    uStack_448 = uStack_638;
    uStack_450 = uStack_640;
    uStack_438 = uStack_628;
    uStack_440 = uStack_630;
    uStack_488 = uStack_678;
    uStack_490 = uStack_680;
    uStack_478 = uStack_668;
    uStack_480 = uStack_670;
    uStack_2b8 = uStack_618;
    uStack_2c0 = uStack_620;
    uStack_2a8 = uStack_608;
    uStack_2b0 = uStack_610;
    uStack_298 = uStack_5f8;
    uStack_2a0 = uStack_600;
    uStack_288 = uStack_5e8;
    uStack_290 = uStack_5f0;
    uStack_2f8 = uStack_658;
    uStack_300 = uStack_660;
    uStack_2e8 = uStack_648;
    uStack_2f0 = uStack_650;
    uStack_2d8 = uStack_638;
    uStack_2e0 = uStack_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_318 = uStack_678;
    uStack_320 = uStack_680;
    uStack_308 = uStack_668;
    uStack_310 = uStack_670;
    FUN_10321cb34(&uStack_490,&uStack_5e0);
    puVar17 = &uStack_320;
    FUN_103225df0(puVar17,&uStack_540,puVar19);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574();
    if ((((uint)puVar17 & 0xff) != 2) && (((ulong)puVar17 & 1) != 0)) {
      func_0x000107c6142c(puVar18);
      func_0x000107c6142c();
      puVar14 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      puStack_7d0 = (undefined8 *)0x6867696c746f7053;
      puVar19 = puVar6;
      puVar6 = (undefined8 *)0xe900000000000074;
    }
  }
  FUN_10321b8f0();
  if (((ulong)puVar19 & 1) == 0) {
    lVar11 = 0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x20) = puStack_7d0;
    *(undefined8 **)(lVar11 + 0x28) = puVar6;
    *(undefined8 **)(lVar11 + 0x30) = puVar14;
    *(undefined8 **)(lVar11 + 0x38) = puVar18;
    puVar9 = &UNK_10db9f018;
    func_0x000107c614e0(&UNK_10db9f018);
    iVar4 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar4 == 1) {
      func_0x000107c61434(puVar18);
      func_0x000107c61434(puVar6);
      puVar19 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)0x0;
    }
    else {
      uStack_428 = uStack_618;
      uStack_430 = uStack_620;
      uStack_418 = uStack_608;
      uStack_420 = uStack_610;
      uStack_408 = uStack_5f8;
      uStack_410 = uStack_600;
      uStack_3f8 = uStack_5e8;
      uStack_400 = uStack_5f0;
      uStack_468 = uStack_658;
      uStack_470 = uStack_660;
      uStack_458 = uStack_648;
      uStack_460 = uStack_650;
      uStack_448 = uStack_638;
      uStack_450 = uStack_640;
      uStack_438 = uStack_628;
      uStack_440 = uStack_630;
      uStack_488 = uStack_678;
      uStack_490 = uStack_680;
      uStack_478 = uStack_668;
      uStack_480 = uStack_670;
      func_0x00010321cbb0(&uStack_680,&uStack_5e0,0x112f4d250,&UNK_10db9f060);
      func_0x000107c61434(puVar18);
      func_0x000107c61434(puVar6);
      puVar19 = &uStack_490;
      puVar17 = &uStack_540;
      FUN_103225cb8(puVar19,puVar17,puVar9);
      func_0x00010321cb68(&uStack_680);
    }
    func_0x000107c61574(puVar9);
    uVar15 = 0;
    *(undefined8 **)(lVar11 + 0x40) = puVar19;
    *(undefined8 **)(lVar11 + 0x48) = puVar17;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = uVar15;
      if (uVar15 < 4) {
        uVar2 = 3;
      }
      lVar12 = uVar15 * 0x10 + 0x28;
      do {
        if (uVar15 == 3) {
          func_0x000107c61588(lVar11);
          uVar13 = 0x112d35ff8;
          func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
          func_0x000107c61408((undefined8 *)(lVar11 + 0x20),3,uVar13);
          func_0x000107c6145c(lVar11,0x20,7);
          lVar11 = *(long *)(puVar9 + 0x10);
          goto joined_r0x00010321b4c8;
        }
        uVar15 = uVar15 + 1;
        if (uVar2 + 1 == uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10321b6ac);
          (*pcVar3)();
        }
        lVar1 = lVar12 + 0x10;
        lVar20 = *(long *)(lVar11 + lVar12);
        lVar12 = lVar1;
      } while (lVar20 == 0);
      uVar13 = *(undefined8 *)(lVar11 + lVar1 + -0x18);
      func_0x000107c61434(lVar20);
      puVar16 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar16 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000d182c(puVar9,uVar2 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar9 + uVar2 * 0x10 + 0x20) = uVar13;
      *(long *)(puVar9 + uVar2 * 0x10 + 0x28) = lVar20;
    } while( true );
  }
  lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x00010321b4c8:
  if (lVar11 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    func_0x000107c61434(puVar9);
    puVar16 = puVar9;
  }
  puVar8 = &UNK_10db9eff0;
  func_0x000107c614e0(&UNK_10db9eff0);
  iVar4 = (int)&uStack_680;
  func_0x00010321cb1c();
  if (iVar4 == 1) {
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_10db9f040;
    func_0x000107c614e0(&UNK_10db9f040);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar18);
    puVar19 = (undefined8 *)0x0;
  }
  else {
    uStack_6b8 = uStack_618;
    uStack_6c0 = uStack_620;
    uStack_6a8 = uStack_608;
    uStack_6b0 = uStack_610;
    uStack_698 = uStack_5f8;
    uStack_6a0 = uStack_600;
    uStack_688 = uStack_5e8;
    uStack_690 = uStack_5f0;
    uStack_6f8 = uStack_658;
    uStack_700 = uStack_660;
    uStack_6e8 = uStack_648;
    uStack_6f0 = uStack_650;
    uStack_6d8 = uStack_638;
    uStack_6e0 = uStack_640;
    uStack_6c8 = uStack_628;
    uStack_6d0 = uStack_630;
    uStack_718 = uStack_678;
    uStack_720 = uStack_680;
    uStack_708 = uStack_668;
    uStack_710 = uStack_670;
    uStack_578 = uStack_618;
    uStack_580 = uStack_620;
    uStack_568 = uStack_608;
    uStack_570 = uStack_610;
    uStack_558 = uStack_5f8;
    uStack_560 = uStack_600;
    uStack_548 = uStack_5e8;
    uStack_550 = uStack_5f0;
    uStack_5b8 = uStack_658;
    uStack_5c0 = uStack_660;
    uStack_5a8 = uStack_648;
    uStack_5b0 = uStack_650;
    uStack_598 = uStack_638;
    uStack_5a0 = uStack_640;
    uStack_588 = uStack_628;
    uStack_590 = uStack_630;
    uStack_5d8 = uStack_678;
    uStack_5e0 = uStack_680;
    uStack_5c8 = uStack_668;
    uStack_5d0 = uStack_670;
    FUN_10321cb34(&uStack_720,auStack_7c0);
    puVar19 = &uStack_5e0;
    FUN_103225df0(puVar19,&uStack_540,puVar8);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar19 & 1) != 0) {
      if (lRam0000000112f4d258 != -1) {
        func_0x000107c61568(0x112f4d258,FUN_10321ac7c);
      }
      puVar19 = puRam0000000112f4d260;
      func_0x000107c61174(puRam0000000112f4d260);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar18);
      goto LAB_10321b62c;
    }
    puVar8 = &UNK_10db9f040;
    func_0x000107c614e0(&UNK_10db9f040);
    FUN_10321cb34(&uStack_720,auStack_7c0);
    puVar19 = &uStack_5e0;
    FUN_103225f28(puVar19,&uStack_540,puVar8);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar18);
  }
  func_0x000107c61574(puVar8);
LAB_10321b62c:
  func_0x000107c6142c(puVar6);
  *param_1 = (long)puVar5;
  param_1[1] = uVar10;
  param_1[2] = (long)puVar16;
  param_1[3] = (long)puVar19;
  return;
}



/* Entry: 10321b6c4; end: 10321b8ef;  */

undefined1  [16] FUN_10321b6c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_380 [160];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  
  uStack_1b8 = unaff_x20[0x11];
  uStack_1c0 = unaff_x20[0x10];
  uStack_1a8 = unaff_x20[0x13];
  uStack_1b0 = unaff_x20[0x12];
  uStack_1a0 = unaff_x20[0x14];
  uStack_1f8 = unaff_x20[9];
  uStack_200 = unaff_x20[8];
  uStack_1e8 = unaff_x20[0xb];
  uStack_1f0 = unaff_x20[10];
  uStack_1d8 = unaff_x20[0xd];
  uStack_1e0 = unaff_x20[0xc];
  uStack_1c8 = unaff_x20[0xf];
  uStack_1d0 = unaff_x20[0xe];
  uStack_238 = unaff_x20[1];
  uStack_240 = *unaff_x20;
  uStack_228 = unaff_x20[3];
  uStack_230 = unaff_x20[2];
  uStack_218 = unaff_x20[5];
  uStack_220 = unaff_x20[4];
  uStack_208 = unaff_x20[7];
  uStack_210 = unaff_x20[6];
  puVar4 = &UNK_10db9f0a8;
  func_0x000107c614e0(&UNK_10db9f0a8);
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  iVar3 = (int)&uStack_f0;
  FUN_10321cb18();
  if (iVar3 == 1) {
LAB_10321b760:
    func_0x000107c61574();
  }
  else {
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_268 = uStack_78;
    uStack_270 = uStack_80;
    uStack_258 = uStack_68;
    uStack_260 = uStack_70;
    uStack_248 = uStack_58;
    uStack_250 = uStack_60;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    FUN_10321cb34(&uStack_2e0,auStack_380);
    puVar5 = &uStack_190;
    FUN_103225df0(puVar5,&uStack_240,puVar4);
    func_0x00010321cb68(&uStack_f0);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = &UNK_10db9f0e8;
      func_0x000107c614e0(&UNK_10db9f0e8);
      FUN_10321cb34(&uStack_2e0,auStack_380);
      puVar5 = &uStack_190;
      puVar7 = &uStack_240;
      FUN_103225cb8(puVar5,puVar7,puVar4);
      func_0x00010321cb68(&uStack_f0);
      func_0x000107c61574(puVar4);
      goto LAB_10321b8d4;
    }
    lVar6 = unaff_x20[0x15];
    puVar5 = (undefined8 *)unaff_x20[0x16];
    uVar1 = unaff_x20[0x17];
    uVar2 = unaff_x20[0x18];
    uVar8 = unaff_x20[0x19];
    puVar4 = &UNK_10db9f0c8;
    func_0x000107c614e0(&UNK_10db9f0c8);
    if (puVar5 == (undefined8 *)0x0) goto LAB_10321b760;
    func_0x000107c61434(puVar5);
    func_0x000107c61434(uVar2);
    puVar7 = puVar5;
    func_0x00010322681c(lVar6,puVar5,uVar1,uVar2,uVar8,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(puVar5);
    if (lVar6 != 0) {
      FUN_1032192b4();
      func_0x000107c61170(lVar6);
      goto LAB_10321b8d4;
    }
  }
  puVar5 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
LAB_10321b8d4:
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = puVar5;
  return auVar9;
}



/* Entry: 10321b8f0; end: 10321bdbf;  */

bool FUN_10321b8f0(void)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  undefined8 *unaff_x20;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 auStack_3b0 [2];
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar11 = (long)auStack_3b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_1d8 = unaff_x20[0x11];
  uStack_1e0 = unaff_x20[0x10];
  uStack_1c8 = unaff_x20[0x13];
  uStack_1d0 = unaff_x20[0x12];
  uStack_1c0 = unaff_x20[0x14];
  uStack_218 = unaff_x20[9];
  uStack_220 = unaff_x20[8];
  uStack_208 = unaff_x20[0xb];
  uStack_210 = unaff_x20[10];
  uStack_1f8 = unaff_x20[0xd];
  uStack_200 = unaff_x20[0xc];
  uStack_1e8 = unaff_x20[0xf];
  uStack_1f0 = unaff_x20[0xe];
  uStack_258 = unaff_x20[1];
  uStack_260 = *unaff_x20;
  uStack_248 = unaff_x20[3];
  uStack_250 = unaff_x20[2];
  uStack_238 = unaff_x20[5];
  uStack_240 = unaff_x20[4];
  uStack_228 = unaff_x20[7];
  uStack_230 = unaff_x20[6];
  puVar5 = &UNK_10db9f0a8;
  func_0x000107c614e0(&UNK_10db9f0a8);
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  iVar3 = (int)&uStack_110;
  FUN_10321cb18();
  if (iVar3 == 1) {
    func_0x000107c61574(puVar5);
    bVar2 = false;
  }
  else {
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_268 = uStack_78;
    uStack_270 = uStack_80;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_1a8 = uStack_108;
    uStack_1b0 = uStack_110;
    uStack_198 = uStack_f8;
    uStack_1a0 = uStack_100;
    FUN_10321cb34(&uStack_300,&lStack_3a0);
    puVar6 = &uStack_1b0;
    FUN_103225df0(puVar6,&uStack_260,puVar5);
    func_0x000107c61574(puVar5);
    func_0x00010321cb68(&uStack_110);
    if ((((uint)puVar6 & 0xff) == 2) || (((ulong)puVar6 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      lVar7 = unaff_x20[0x15];
      lVar8 = unaff_x20[0x16];
      auStack_3b0[0] = unaff_x20[0x17];
      uVar1 = unaff_x20[0x18];
      uVar13 = unaff_x20[0x19];
      puVar5 = &UNK_10db9f0c8;
      func_0x000107c614e0(&UNK_10db9f0c8);
      if (lVar8 == 0) {
        func_0x000107c61574();
      }
      else {
        func_0x000107c61434(lVar8);
        func_0x000107c61434(uVar1);
        lVar10 = lVar8;
        func_0x00010322681c(lVar7,lVar8,auStack_3b0[0],uVar1,uVar13,puVar5);
        func_0x000107c61574(puVar5);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c();
        if (lVar7 != 0) {
          FUN_1032192b4();
          func_0x000107c61170(lVar7);
          if (lVar10 != 0) {
            lStack_3a0 = lVar8;
            lStack_398 = lVar10;
            func_0x000107c5eb88(uVar11);
            func_0x000100e8b654();
            uVar9 = uVar11;
            puVar5 = PTR___sSSN_11034da80;
            func_0x000107c601f0(uVar11,PTR___sSSN_11034da80,lVar7);
            (**(code **)(lVar12 + 8))(uVar11,lVar4);
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(puVar5);
            uVar11 = uVar9 & 0xffffffffffff;
            if (((ulong)puVar5 & 0x2000000000000000) != 0) {
              uVar11 = (ulong)puVar5 >> 0x38 & 0xf;
            }
            return uVar11 == 0;
          }
        }
      }
      bVar2 = true;
    }
  }
  return bVar2;
}



/* Entry: 10321bdc0; end: 10321becb;  */

undefined8 FUN_10321bdc0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  puVar3 = &UNK_110627ac0;
  func_0x000107c613fc(&UNK_110627ac0,0x12,7);
  puVar3[0x10] = uVar1;
  puVar3[0x11] = uVar2;
  uVar4 = 0x112f4d1d8;
  func_0x0001000285a8(0x112f4d1d8,&UNK_10db9eea8);
  pcVar5 = FUN_10321cbf8;
  func_0x0001000bfde0(FUN_10321cbf8,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  FUN_10321c174();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  uVar4 = 0x112f4d1f0;
  func_0x0001000285a8(0x112f4d1f0,&UNK_10db9eeb0);
  uVar6 = 0x10321bb98;
  func_0x0001000bfde0(0x10321bb98,0,uVar4);
  func_0x000107c61574(puVar3);
  return uVar6;
}



/* Entry: 10321becc; end: 10321bfff;  */

undefined8
FUN_10321becc(ulong param_1,long param_2,long param_3,ulong param_4,ulong param_5,long param_6,
             long param_7,long param_8)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (((param_1 == param_5) && (param_2 == param_6)) ||
     (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) != 0)) {
    if (param_3 == 0) {
      if (param_7 != 0) {
        return 0;
      }
    }
    else {
      if (param_7 == 0) {
        return 0;
      }
      lVar4 = *(long *)(param_3 + 0x10);
      if (lVar4 != *(long *)(param_7 + 0x10)) {
        return 0;
      }
      if ((lVar4 != 0) && (param_3 != param_7)) {
        plVar2 = (long *)(param_7 + 0x28);
        plVar3 = (long *)(param_3 + 0x28);
        do {
          uVar1 = plVar3[-1];
          if ((uVar1 != plVar2[-1] || *plVar3 != *plVar2) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
            return 0;
          }
          plVar2 = plVar2 + 2;
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      func_0x00010321cad8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c61174(param_8);
      func_0x000107c61174();
      uVar1 = param_4;
      func_0x000107c60118();
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_8);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10321c000; end: 10321c157;  */

void FUN_10321c000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0d6b8;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0d718;
  uVar11 = param_3;
  func_0x000107c5faec();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0dab8;
  uVar12 = uVar11;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0d758;
  uVar13 = uVar12;
  func_0x000107c5faec();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0d7b8;
  uVar14 = uVar13;
  func_0x000107c5faec();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0daf8;
  uVar15 = uVar14;
  func_0x000107c5faec();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0ea78;
  uVar16 = uVar15;
  func_0x000107c5faec();
  ppuVar8 = &PTR____CFConstantStringClassReference_110ebe918;
  uVar17 = uVar16;
  func_0x000107c5faec();
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0ead8;
  uVar18 = uVar17;
  func_0x000107c5faec();
  ppuVar10 = &PTR____CFConstantStringClassReference_110f0d778;
  uVar19 = uVar18;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  param_1[2] = ppuVar2;
  param_1[3] = uVar11;
  param_1[4] = ppuVar3;
  param_1[5] = uVar12;
  param_1[6] = ppuVar4;
  param_1[7] = uVar13;
  param_1[8] = ppuVar5;
  param_1[9] = uVar14;
  param_1[10] = ppuVar6;
  param_1[0xb] = uVar15;
  param_1[0xc] = ppuVar7;
  param_1[0xd] = uVar16;
  param_1[0xe] = ppuVar8;
  param_1[0xf] = uVar17;
  param_1[0x10] = ppuVar9;
  param_1[0x11] = uVar18;
  param_1[0x12] = ppuVar10;
  param_1[0x13] = uVar19;
  return;
}



/* Entry: 10321c158; end: 10321c173;  */

void FUN_10321c158(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puStack_7d0;
  undefined1 auStack_7c0 [160];
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  
  bVar3 = *(byte *)(unaff_x20 + 0x10);
  uVar14 = 0x100;
  if (*(char *)(unaff_x20 + 0x11) == '\0') {
    uVar14 = 0;
  }
  uVar11 = (ulong)(uVar14 | bVar3);
  uStack_338 = param_2[0x17];
  uStack_340 = param_2[0x16];
  uStack_328 = param_2[0x19];
  uStack_330 = param_2[0x18];
  uStack_4a8 = param_2[0x13];
  uStack_4b0 = param_2[0x12];
  uStack_348 = param_2[0x15];
  uStack_350 = param_2[0x14];
  uStack_4e8 = param_2[0xb];
  uStack_4f0 = param_2[10];
  uStack_388 = param_2[0xd];
  uStack_390 = param_2[0xc];
  uStack_4d8 = param_2[0xd];
  uStack_4e0 = param_2[0xc];
  uStack_378 = param_2[0xf];
  uStack_380 = param_2[0xe];
  uStack_4c8 = param_2[0xf];
  uStack_4d0 = param_2[0xe];
  uStack_368 = param_2[0x11];
  uStack_370 = param_2[0x10];
  uStack_4b8 = param_2[0x11];
  uStack_4c0 = param_2[0x10];
  uStack_358 = param_2[0x13];
  uStack_360 = param_2[0x12];
  uStack_528 = param_2[3];
  uStack_530 = param_2[2];
  uStack_3c8 = param_2[5];
  uStack_3d0 = param_2[4];
  uStack_518 = param_2[5];
  uStack_520 = param_2[4];
  uStack_3b8 = param_2[7];
  uStack_3c0 = param_2[6];
  uStack_508 = param_2[7];
  uStack_510 = param_2[6];
  uStack_3a8 = param_2[9];
  uStack_3b0 = param_2[8];
  uStack_4f8 = param_2[9];
  uStack_500 = param_2[8];
  uStack_398 = param_2[0xb];
  uStack_3a0 = param_2[10];
  uStack_3e8 = param_2[1];
  uStack_3f0 = *param_2;
  uStack_3d8 = param_2[3];
  uStack_3e0 = param_2[2];
  uStack_538 = param_2[1];
  uStack_540 = *param_2;
  uStack_4a0 = param_2[0x14];
  puVar6 = param_2;
  FUN_10321b6c4();
  if (uVar11 == 0) {
LAB_10321aec4:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  puVar10 = &UNK_10db9ef90;
  func_0x000107c614e0(&UNK_10db9ef90);
  uStack_618 = param_2[0xd];
  uStack_620 = param_2[0xc];
  uStack_608 = param_2[0xf];
  uStack_610 = param_2[0xe];
  uStack_5f8 = param_2[0x11];
  uStack_600 = param_2[0x10];
  uStack_5e8 = param_2[0x13];
  uStack_5f0 = param_2[0x12];
  uStack_658 = param_2[5];
  uStack_660 = param_2[4];
  uStack_648 = param_2[7];
  uStack_650 = param_2[6];
  uStack_638 = param_2[9];
  uStack_640 = param_2[8];
  uStack_628 = param_2[0xb];
  uStack_630 = param_2[10];
  uStack_678 = param_2[1];
  uStack_680 = *param_2;
  uStack_668 = param_2[3];
  uStack_670 = param_2[2];
  iVar5 = (int)&uStack_680;
  FUN_10321cb18();
  if (iVar5 == 1) {
    func_0x000107c61574(puVar10);
    puStack_7d0 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)0x0;
LAB_10321ae00:
    puVar10 = &UNK_10db9efb0;
    func_0x000107c614e0(&UNK_10db9efb0);
    iVar5 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar5 != 1) goto LAB_10321af64;
    func_0x000107c61574(puVar10);
    puVar7 = puVar21;
LAB_10321aff8:
    puVar10 = &UNK_10db9efd0;
    func_0x000107c614e0(&UNK_10db9efd0);
    iVar5 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar5 != 1) {
      puVar19 = (undefined8 *)0x0;
      puVar21 = puVar7;
      goto LAB_10321b058;
    }
    func_0x000107c61574(puVar10);
    puVar16 = (undefined8 *)0x0;
    puVar20 = (undefined8 *)0x0;
    if ((bVar3 & 1) != 0) goto LAB_10321b130;
  }
  else {
    uStack_148 = uStack_618;
    uStack_150 = uStack_620;
    uStack_138 = uStack_608;
    uStack_140 = uStack_610;
    uStack_128 = uStack_5f8;
    uStack_130 = uStack_600;
    uStack_118 = uStack_5e8;
    uStack_120 = uStack_5f0;
    uStack_188 = uStack_658;
    uStack_190 = uStack_660;
    uStack_178 = uStack_648;
    uStack_180 = uStack_650;
    uStack_168 = uStack_638;
    uStack_170 = uStack_640;
    uStack_158 = uStack_628;
    uStack_160 = uStack_630;
    uStack_1a8 = uStack_678;
    uStack_1b0 = uStack_680;
    uStack_198 = uStack_668;
    uStack_1a0 = uStack_670;
    uStack_a8 = uStack_618;
    uStack_b0 = uStack_620;
    uStack_98 = uStack_608;
    uStack_a0 = uStack_610;
    uStack_88 = uStack_5f8;
    uStack_90 = uStack_600;
    uStack_78 = uStack_5e8;
    uStack_80 = uStack_5f0;
    uStack_e8 = uStack_658;
    uStack_f0 = uStack_660;
    uStack_d8 = uStack_648;
    uStack_e0 = uStack_650;
    uStack_c8 = uStack_638;
    uStack_d0 = uStack_640;
    uStack_b8 = uStack_628;
    uStack_c0 = uStack_630;
    uStack_108 = uStack_678;
    uStack_110 = uStack_680;
    uStack_f8 = uStack_668;
    uStack_100 = uStack_670;
    FUN_10321cb34(&uStack_1b0,&uStack_250);
    puVar21 = &uStack_110;
    FUN_103225df0(puVar21,&uStack_540,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar21 & 1) != 0) {
      func_0x000107c6142c(uVar11);
      goto LAB_10321aec4;
    }
    puVar10 = &UNK_10db9f068;
    func_0x000107c614e0(&UNK_10db9f068);
    FUN_10321cb34(&uStack_1b0,&uStack_250);
    puVar19 = &uStack_110;
    puVar21 = &uStack_540;
    func_0x000103225f4c(puVar19,puVar21,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    if (puVar19 == (undefined8 *)0x0) {
      puVar10 = &UNK_10db9f088;
      func_0x000107c614e0(&UNK_10db9f088);
      FUN_10321cb34(&uStack_1b0,&uStack_250);
      puStack_7d0 = &uStack_110;
      puVar21 = &uStack_540;
      FUN_103225cb8(puStack_7d0,puVar21,puVar10);
      func_0x00010321cb68(&uStack_680);
      func_0x000107c61574(puVar10);
      goto LAB_10321ae00;
    }
    puVar7 = puVar19;
    func_0x000107c5c158();
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    puStack_7d0 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puVar10 = &UNK_10db9efb0;
    func_0x000107c614e0(&UNK_10db9efb0);
LAB_10321af64:
    uStack_1e8 = uStack_618;
    uStack_1f0 = uStack_620;
    uStack_1d8 = uStack_608;
    uStack_1e0 = uStack_610;
    uStack_1c8 = uStack_5f8;
    uStack_1d0 = uStack_600;
    uStack_1b8 = uStack_5e8;
    uStack_1c0 = uStack_5f0;
    uStack_228 = uStack_658;
    uStack_230 = uStack_660;
    uStack_218 = uStack_648;
    uStack_220 = uStack_650;
    uStack_208 = uStack_638;
    uStack_210 = uStack_640;
    uStack_1f8 = uStack_628;
    uStack_200 = uStack_630;
    uStack_248 = uStack_678;
    uStack_250 = uStack_680;
    uStack_238 = uStack_668;
    uStack_240 = uStack_670;
    uStack_148 = uStack_618;
    uStack_150 = uStack_620;
    uStack_138 = uStack_608;
    uStack_140 = uStack_610;
    uStack_128 = uStack_5f8;
    uStack_130 = uStack_600;
    uStack_118 = uStack_5e8;
    uStack_120 = uStack_5f0;
    uStack_188 = uStack_658;
    uStack_190 = uStack_660;
    uStack_178 = uStack_648;
    uStack_180 = uStack_650;
    uStack_168 = uStack_638;
    uStack_170 = uStack_640;
    uStack_158 = uStack_628;
    uStack_160 = uStack_630;
    uStack_1a8 = uStack_678;
    uStack_1b0 = uStack_680;
    uStack_198 = uStack_668;
    uStack_1a0 = uStack_670;
    FUN_10321cb34(&uStack_250,&uStack_320);
    puVar19 = &uStack_1b0;
    FUN_103225df0(puVar19,&uStack_540,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    puVar7 = puVar21;
    if (((uint)puVar19 & 0xff) == 2) goto LAB_10321aff8;
    puVar10 = &UNK_10db9efd0;
    func_0x000107c614e0(&UNK_10db9efd0);
LAB_10321b058:
    uStack_2b8 = uStack_618;
    uStack_2c0 = uStack_620;
    uStack_2a8 = uStack_608;
    uStack_2b0 = uStack_610;
    uStack_298 = uStack_5f8;
    uStack_2a0 = uStack_600;
    uStack_288 = uStack_5e8;
    uStack_290 = uStack_5f0;
    uStack_2f8 = uStack_658;
    uStack_300 = uStack_660;
    uStack_2e8 = uStack_648;
    uStack_2f0 = uStack_650;
    uStack_2d8 = uStack_638;
    uStack_2e0 = uStack_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_318 = uStack_678;
    uStack_320 = uStack_680;
    uStack_308 = uStack_668;
    uStack_310 = uStack_670;
    uStack_1e8 = uStack_618;
    uStack_1f0 = uStack_620;
    uStack_1d8 = uStack_608;
    uStack_1e0 = uStack_610;
    uStack_1c8 = uStack_5f8;
    uStack_1d0 = uStack_600;
    uStack_1b8 = uStack_5e8;
    uStack_1c0 = uStack_5f0;
    uStack_228 = uStack_658;
    uStack_230 = uStack_660;
    uStack_218 = uStack_648;
    uStack_220 = uStack_650;
    uStack_208 = uStack_638;
    uStack_210 = uStack_640;
    uStack_1f8 = uStack_628;
    uStack_200 = uStack_630;
    uStack_248 = uStack_678;
    uStack_250 = uStack_680;
    uStack_238 = uStack_668;
    uStack_240 = uStack_670;
    FUN_10321cb34(&uStack_320,&uStack_490);
    puVar8 = &uStack_250;
    puVar7 = &uStack_540;
    FUN_103225cb8(puVar8,puVar7,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    if (puVar7 == (undefined8 *)0x0) {
LAB_10321b118:
      puVar16 = (undefined8 *)0x0;
      puVar20 = (undefined8 *)0x0;
      puVar7 = puVar21;
      puVar8 = puStack_7d0;
    }
    else {
      uVar17 = (ulong)puVar8 & 0xffffffffffff;
      if (((ulong)puVar7 & 0x2000000000000000) != 0) {
        uVar17 = (ulong)puVar7 >> 0x38 & 0xf;
      }
      puVar16 = puStack_7d0;
      puVar20 = puVar21;
      if (uVar17 == 0) {
        func_0x000107c6142c(puVar7);
        goto LAB_10321b118;
      }
    }
    puStack_7d0 = puVar8;
    if (((bVar3 & 1) != 0) && (((ulong)puVar19 & 1) == 0)) {
LAB_10321b130:
      if (uVar14 == 0) {
        uStack_278 = uStack_340;
        uStack_280 = uStack_348;
        uStack_268 = uStack_330;
        uStack_270 = uStack_338;
        uStack_260 = uStack_328;
        puVar21 = &uStack_280;
        puVar19 = puStack_7d0;
        FUN_103219388(puVar21,puStack_7d0,puVar7);
        if (puVar19 != (undefined8 *)0x0) {
          func_0x000107c6142c(puVar7);
          puVar7 = puVar19;
          puStack_7d0 = puVar21;
        }
      }
    }
  }
  puVar21 = (undefined8 *)&UNK_10db9eff0;
  func_0x000107c614e0();
  iVar5 = (int)&uStack_680;
  func_0x00010321cb1c();
  if (iVar5 == 1) {
    func_0x000107c61574();
  }
  else {
    uStack_428 = uStack_618;
    uStack_430 = uStack_620;
    uStack_418 = uStack_608;
    uStack_420 = uStack_610;
    uStack_408 = uStack_5f8;
    uStack_410 = uStack_600;
    uStack_3f8 = uStack_5e8;
    uStack_400 = uStack_5f0;
    uStack_468 = uStack_658;
    uStack_470 = uStack_660;
    uStack_458 = uStack_648;
    uStack_460 = uStack_650;
    uStack_448 = uStack_638;
    uStack_450 = uStack_640;
    uStack_438 = uStack_628;
    uStack_440 = uStack_630;
    uStack_488 = uStack_678;
    uStack_490 = uStack_680;
    uStack_478 = uStack_668;
    uStack_480 = uStack_670;
    uStack_2b8 = uStack_618;
    uStack_2c0 = uStack_620;
    uStack_2a8 = uStack_608;
    uStack_2b0 = uStack_610;
    uStack_298 = uStack_5f8;
    uStack_2a0 = uStack_600;
    uStack_288 = uStack_5e8;
    uStack_290 = uStack_5f0;
    uStack_2f8 = uStack_658;
    uStack_300 = uStack_660;
    uStack_2e8 = uStack_648;
    uStack_2f0 = uStack_650;
    uStack_2d8 = uStack_638;
    uStack_2e0 = uStack_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_318 = uStack_678;
    uStack_320 = uStack_680;
    uStack_308 = uStack_668;
    uStack_310 = uStack_670;
    FUN_10321cb34(&uStack_490,&uStack_5e0);
    puVar19 = &uStack_320;
    FUN_103225df0(puVar19,&uStack_540,puVar21);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574();
    if ((((uint)puVar19 & 0xff) != 2) && (((ulong)puVar19 & 1) != 0)) {
      func_0x000107c6142c(puVar20);
      func_0x000107c6142c();
      puVar16 = (undefined8 *)0x0;
      puVar20 = (undefined8 *)0x0;
      puStack_7d0 = (undefined8 *)0x6867696c746f7053;
      puVar21 = puVar7;
      puVar7 = (undefined8 *)0xe900000000000074;
    }
  }
  FUN_10321b8f0();
  if (((ulong)puVar21 & 1) == 0) {
    lVar12 = 0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x20) = puStack_7d0;
    *(undefined8 **)(lVar12 + 0x28) = puVar7;
    *(undefined8 **)(lVar12 + 0x30) = puVar16;
    *(undefined8 **)(lVar12 + 0x38) = puVar20;
    puVar10 = &UNK_10db9f018;
    func_0x000107c614e0(&UNK_10db9f018);
    iVar5 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar5 == 1) {
      func_0x000107c61434(puVar20);
      func_0x000107c61434(puVar7);
      puVar21 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0x0;
    }
    else {
      uStack_428 = uStack_618;
      uStack_430 = uStack_620;
      uStack_418 = uStack_608;
      uStack_420 = uStack_610;
      uStack_408 = uStack_5f8;
      uStack_410 = uStack_600;
      uStack_3f8 = uStack_5e8;
      uStack_400 = uStack_5f0;
      uStack_468 = uStack_658;
      uStack_470 = uStack_660;
      uStack_458 = uStack_648;
      uStack_460 = uStack_650;
      uStack_448 = uStack_638;
      uStack_450 = uStack_640;
      uStack_438 = uStack_628;
      uStack_440 = uStack_630;
      uStack_488 = uStack_678;
      uStack_490 = uStack_680;
      uStack_478 = uStack_668;
      uStack_480 = uStack_670;
      func_0x00010321cbb0(&uStack_680,&uStack_5e0,0x112f4d250,&UNK_10db9f060);
      func_0x000107c61434(puVar20);
      func_0x000107c61434(puVar7);
      puVar21 = &uStack_490;
      puVar19 = &uStack_540;
      FUN_103225cb8(puVar21,puVar19,puVar10);
      func_0x00010321cb68(&uStack_680);
    }
    func_0x000107c61574(puVar10);
    uVar17 = 0;
    *(undefined8 **)(lVar12 + 0x40) = puVar21;
    *(undefined8 **)(lVar12 + 0x48) = puVar19;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = uVar17;
      if (uVar17 < 4) {
        uVar2 = 3;
      }
      lVar13 = uVar17 * 0x10 + 0x28;
      do {
        if (uVar17 == 3) {
          func_0x000107c61588(lVar12);
          uVar15 = 0x112d35ff8;
          func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
          func_0x000107c61408((undefined8 *)(lVar12 + 0x20),3,uVar15);
          func_0x000107c6145c(lVar12,0x20,7);
          lVar12 = *(long *)(puVar10 + 0x10);
          goto joined_r0x00010321b4c8;
        }
        uVar17 = uVar17 + 1;
        if (uVar2 + 1 == uVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10321b6ac);
          (*pcVar4)();
        }
        lVar1 = lVar13 + 0x10;
        lVar22 = *(long *)(lVar12 + lVar13);
        lVar13 = lVar1;
      } while (lVar22 == 0);
      uVar15 = *(undefined8 *)(lVar12 + lVar1 + -0x18);
      func_0x000107c61434(lVar22);
      puVar18 = puVar10;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar18 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000d182c(puVar10,uVar2 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar10 + uVar2 * 0x10 + 0x20) = uVar15;
      *(long *)(puVar10 + uVar2 * 0x10 + 0x28) = lVar22;
    } while( true );
  }
  lVar12 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x00010321b4c8:
  if (lVar12 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    func_0x000107c61434(puVar10);
    puVar18 = puVar10;
  }
  puVar9 = &UNK_10db9eff0;
  func_0x000107c614e0(&UNK_10db9eff0);
  iVar5 = (int)&uStack_680;
  func_0x00010321cb1c();
  if (iVar5 == 1) {
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_10db9f040;
    func_0x000107c614e0(&UNK_10db9f040);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(puVar20);
    puVar21 = (undefined8 *)0x0;
  }
  else {
    uStack_6b8 = uStack_618;
    uStack_6c0 = uStack_620;
    uStack_6a8 = uStack_608;
    uStack_6b0 = uStack_610;
    uStack_698 = uStack_5f8;
    uStack_6a0 = uStack_600;
    uStack_688 = uStack_5e8;
    uStack_690 = uStack_5f0;
    uStack_6f8 = uStack_658;
    uStack_700 = uStack_660;
    uStack_6e8 = uStack_648;
    uStack_6f0 = uStack_650;
    uStack_6d8 = uStack_638;
    uStack_6e0 = uStack_640;
    uStack_6c8 = uStack_628;
    uStack_6d0 = uStack_630;
    uStack_718 = uStack_678;
    uStack_720 = uStack_680;
    uStack_708 = uStack_668;
    uStack_710 = uStack_670;
    uStack_578 = uStack_618;
    uStack_580 = uStack_620;
    uStack_568 = uStack_608;
    uStack_570 = uStack_610;
    uStack_558 = uStack_5f8;
    uStack_560 = uStack_600;
    uStack_548 = uStack_5e8;
    uStack_550 = uStack_5f0;
    uStack_5b8 = uStack_658;
    uStack_5c0 = uStack_660;
    uStack_5a8 = uStack_648;
    uStack_5b0 = uStack_650;
    uStack_598 = uStack_638;
    uStack_5a0 = uStack_640;
    uStack_588 = uStack_628;
    uStack_590 = uStack_630;
    uStack_5d8 = uStack_678;
    uStack_5e0 = uStack_680;
    uStack_5c8 = uStack_668;
    uStack_5d0 = uStack_670;
    FUN_10321cb34(&uStack_720,auStack_7c0);
    puVar21 = &uStack_5e0;
    FUN_103225df0(puVar21,&uStack_540,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar21 & 1) != 0) {
      if (lRam0000000112f4d258 != -1) {
        func_0x000107c61568(0x112f4d258,FUN_10321ac7c);
      }
      puVar21 = puRam0000000112f4d260;
      func_0x000107c61174(puRam0000000112f4d260);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar20);
      goto LAB_10321b62c;
    }
    puVar9 = &UNK_10db9f040;
    func_0x000107c614e0(&UNK_10db9f040);
    FUN_10321cb34(&uStack_720,auStack_7c0);
    puVar21 = &uStack_5e0;
    FUN_103225f28(puVar21,&uStack_540,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(puVar20);
  }
  func_0x000107c61574(puVar9);
LAB_10321b62c:
  func_0x000107c6142c(puVar7);
  *param_1 = (long)puVar6;
  param_1[1] = uVar11;
  param_1[2] = (long)puVar18;
  param_1[3] = (long)puVar21;
  return;
}



/* Entry: 10321c174; end: 10321c1e3;  */

void FUN_10321c174(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4d1e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d1d8;
  func_0x00010002969c(0x112f4d1d8,&UNK_10db9eea8);
  uVar2 = uVar1;
  FUN_10321c1e4();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4d1e0 = puVar3;
  return;
}



/* Entry: 10321c1e4; end: 10321c223;  */

void FUN_10321c1e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ef64;
  func_0x000107c61520(&UNK_10db9ef64,&UNK_110627a90);
  puRam0000000112f4d1e8 = puVar1;
  return;
}



/* Entry: 10321c224; end: 10321c247;  */

void FUN_10321c224(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10321c248();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10321c248; end: 10321c287;  */

void FUN_10321c248(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d1f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9eef0;
  func_0x000107c61520(&DAT_10db9eef0,&UNK_110627970);
  puRam0000000112f4d1f8 = puVar1;
  return;
}



/* Entry: 10321c288; end: 10321c28b;  */

void FUN_10321c288(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d200 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d208;
  func_0x00010002969c(0x112f4d208,&UNK_10db9eee8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d200 = puVar2;
  return;
}



/* Entry: 10321c28c; end: 10321c2db;  */

void FUN_10321c28c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d200 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d208;
  func_0x00010002969c(0x112f4d208,&UNK_10db9eee8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d200 = puVar2;
  return;
}



/* Entry: 10321c2dc; end: 10321c44f;  */

undefined ** FUN_10321c2dc(void)

{
  return &PTR_DAT_1106278d8;
}



/* Entry: 10321c450; end: 10321c4b7;  */

/* WARNING: Possible PIC construction at 0x00010321c464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010321c474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010321c484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010321c494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010321c4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010321c498) */
/* WARNING: Removing unreachable block (ram,0x00010321c488) */
/* WARNING: Removing unreachable block (ram,0x00010321c478) */
/* WARNING: Removing unreachable block (ram,0x00010321c468) */
/* WARNING: Removing unreachable block (ram,0x00010321c4a8) */

void FUN_10321c450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10321c4b8; end: 10321c593;  */

undefined8 * FUN_10321c4b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar8 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar8;
  uVar9 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar9;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  return param_1;
}



/* Entry: 10321c594; end: 10321c6ff;  */

undefined8 * FUN_10321c594(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10321c700; end: 10321c7c3;  */

undefined8 * FUN_10321c700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x13];
  uVar2 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10321c7c4; end: 10321c883;  */

int FUN_10321c7c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10321c884; end: 10321c8b3;  */

void FUN_10321c884(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10321c8b4; end: 10321c97b;  */

undefined8 * FUN_10321c8b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 10321c97c; end: 10321c9cf;  */

undefined8 * FUN_10321c97c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10321c9d0; end: 10321ca9b;  */

int FUN_10321c9d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10321ca9c; end: 10321cb17;  */

/* WARNING: Possible PIC construction at 0x00010321cac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010321cac4) */

void FUN_10321ca9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    func_0x000107c61174(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 10321cb18; end: 10321cb33;  */

void FUN_10321cb18(void)

{
  return;
}



/* Entry: 10321cb34; end: 10321cbf7;  */

undefined8 FUN_10321cb34(undefined8 param_1,undefined8 param_2)

{
  FUN_10321c4b8(param_2,param_1,&UNK_1106279f0);
  return param_2;
}



/* Entry: 10321cbf8; end: 10321cc6b;  */

void FUN_10321cbf8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puStack_7d0;
  undefined1 auStack_7c0 [160];
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  
  bVar3 = *(byte *)(unaff_x20 + 0x10);
  uVar14 = 0x100;
  if (*(char *)(unaff_x20 + 0x11) == '\0') {
    uVar14 = 0;
  }
  uVar11 = (ulong)(uVar14 | bVar3);
  uStack_338 = param_2[0x17];
  uStack_340 = param_2[0x16];
  uStack_328 = param_2[0x19];
  uStack_330 = param_2[0x18];
  uStack_4a8 = param_2[0x13];
  uStack_4b0 = param_2[0x12];
  uStack_348 = param_2[0x15];
  uStack_350 = param_2[0x14];
  uStack_4e8 = param_2[0xb];
  uStack_4f0 = param_2[10];
  uStack_388 = param_2[0xd];
  uStack_390 = param_2[0xc];
  uStack_4d8 = param_2[0xd];
  uStack_4e0 = param_2[0xc];
  uStack_378 = param_2[0xf];
  uStack_380 = param_2[0xe];
  uStack_4c8 = param_2[0xf];
  uStack_4d0 = param_2[0xe];
  uStack_368 = param_2[0x11];
  uStack_370 = param_2[0x10];
  uStack_4b8 = param_2[0x11];
  uStack_4c0 = param_2[0x10];
  uStack_358 = param_2[0x13];
  uStack_360 = param_2[0x12];
  uStack_528 = param_2[3];
  uStack_530 = param_2[2];
  uStack_3c8 = param_2[5];
  uStack_3d0 = param_2[4];
  uStack_518 = param_2[5];
  uStack_520 = param_2[4];
  uStack_3b8 = param_2[7];
  uStack_3c0 = param_2[6];
  uStack_508 = param_2[7];
  uStack_510 = param_2[6];
  uStack_3a8 = param_2[9];
  uStack_3b0 = param_2[8];
  uStack_4f8 = param_2[9];
  uStack_500 = param_2[8];
  uStack_398 = param_2[0xb];
  uStack_3a0 = param_2[10];
  uStack_3e8 = param_2[1];
  uStack_3f0 = *param_2;
  uStack_3d8 = param_2[3];
  uStack_3e0 = param_2[2];
  uStack_538 = param_2[1];
  uStack_540 = *param_2;
  uStack_4a0 = param_2[0x14];
  puVar6 = param_2;
  FUN_10321b6c4();
  if (uVar11 == 0) {
LAB_10321aec4:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  puVar10 = &UNK_10db9ef90;
  func_0x000107c614e0(&UNK_10db9ef90);
  uStack_618 = param_2[0xd];
  uStack_620 = param_2[0xc];
  uStack_608 = param_2[0xf];
  uStack_610 = param_2[0xe];
  uStack_5f8 = param_2[0x11];
  uStack_600 = param_2[0x10];
  uStack_5e8 = param_2[0x13];
  uStack_5f0 = param_2[0x12];
  uStack_658 = param_2[5];
  uStack_660 = param_2[4];
  uStack_648 = param_2[7];
  uStack_650 = param_2[6];
  uStack_638 = param_2[9];
  uStack_640 = param_2[8];
  uStack_628 = param_2[0xb];
  uStack_630 = param_2[10];
  uStack_678 = param_2[1];
  uStack_680 = *param_2;
  uStack_668 = param_2[3];
  uStack_670 = param_2[2];
  iVar5 = (int)&uStack_680;
  FUN_10321cb18();
  if (iVar5 == 1) {
    func_0x000107c61574(puVar10);
    puStack_7d0 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)0x0;
LAB_10321ae00:
    puVar10 = &UNK_10db9efb0;
    func_0x000107c614e0(&UNK_10db9efb0);
    iVar5 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar5 != 1) goto LAB_10321af64;
    func_0x000107c61574(puVar10);
    puVar7 = puVar21;
LAB_10321aff8:
    puVar10 = &UNK_10db9efd0;
    func_0x000107c614e0(&UNK_10db9efd0);
    iVar5 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar5 != 1) {
      puVar19 = (undefined8 *)0x0;
      puVar21 = puVar7;
      goto LAB_10321b058;
    }
    func_0x000107c61574(puVar10);
    puVar16 = (undefined8 *)0x0;
    puVar20 = (undefined8 *)0x0;
    if ((bVar3 & 1) != 0) goto LAB_10321b130;
  }
  else {
    uStack_148 = uStack_618;
    uStack_150 = uStack_620;
    uStack_138 = uStack_608;
    uStack_140 = uStack_610;
    uStack_128 = uStack_5f8;
    uStack_130 = uStack_600;
    uStack_118 = uStack_5e8;
    uStack_120 = uStack_5f0;
    uStack_188 = uStack_658;
    uStack_190 = uStack_660;
    uStack_178 = uStack_648;
    uStack_180 = uStack_650;
    uStack_168 = uStack_638;
    uStack_170 = uStack_640;
    uStack_158 = uStack_628;
    uStack_160 = uStack_630;
    uStack_1a8 = uStack_678;
    uStack_1b0 = uStack_680;
    uStack_198 = uStack_668;
    uStack_1a0 = uStack_670;
    uStack_a8 = uStack_618;
    uStack_b0 = uStack_620;
    uStack_98 = uStack_608;
    uStack_a0 = uStack_610;
    uStack_88 = uStack_5f8;
    uStack_90 = uStack_600;
    uStack_78 = uStack_5e8;
    uStack_80 = uStack_5f0;
    uStack_e8 = uStack_658;
    uStack_f0 = uStack_660;
    uStack_d8 = uStack_648;
    uStack_e0 = uStack_650;
    uStack_c8 = uStack_638;
    uStack_d0 = uStack_640;
    uStack_b8 = uStack_628;
    uStack_c0 = uStack_630;
    uStack_108 = uStack_678;
    uStack_110 = uStack_680;
    uStack_f8 = uStack_668;
    uStack_100 = uStack_670;
    FUN_10321cb34(&uStack_1b0,&uStack_250);
    puVar21 = &uStack_110;
    FUN_103225df0(puVar21,&uStack_540,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar21 & 1) != 0) {
      func_0x000107c6142c(uVar11);
      goto LAB_10321aec4;
    }
    puVar10 = &UNK_10db9f068;
    func_0x000107c614e0(&UNK_10db9f068);
    FUN_10321cb34(&uStack_1b0,&uStack_250);
    puVar19 = &uStack_110;
    puVar21 = &uStack_540;
    func_0x000103225f4c(puVar19,puVar21,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    if (puVar19 == (undefined8 *)0x0) {
      puVar10 = &UNK_10db9f088;
      func_0x000107c614e0(&UNK_10db9f088);
      FUN_10321cb34(&uStack_1b0,&uStack_250);
      puStack_7d0 = &uStack_110;
      puVar21 = &uStack_540;
      FUN_103225cb8(puStack_7d0,puVar21,puVar10);
      func_0x00010321cb68(&uStack_680);
      func_0x000107c61574(puVar10);
      goto LAB_10321ae00;
    }
    puVar7 = puVar19;
    func_0x000107c5c158();
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    puStack_7d0 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puVar10 = &UNK_10db9efb0;
    func_0x000107c614e0(&UNK_10db9efb0);
LAB_10321af64:
    uStack_1e8 = uStack_618;
    uStack_1f0 = uStack_620;
    uStack_1d8 = uStack_608;
    uStack_1e0 = uStack_610;
    uStack_1c8 = uStack_5f8;
    uStack_1d0 = uStack_600;
    uStack_1b8 = uStack_5e8;
    uStack_1c0 = uStack_5f0;
    uStack_228 = uStack_658;
    uStack_230 = uStack_660;
    uStack_218 = uStack_648;
    uStack_220 = uStack_650;
    uStack_208 = uStack_638;
    uStack_210 = uStack_640;
    uStack_1f8 = uStack_628;
    uStack_200 = uStack_630;
    uStack_248 = uStack_678;
    uStack_250 = uStack_680;
    uStack_238 = uStack_668;
    uStack_240 = uStack_670;
    uStack_148 = uStack_618;
    uStack_150 = uStack_620;
    uStack_138 = uStack_608;
    uStack_140 = uStack_610;
    uStack_128 = uStack_5f8;
    uStack_130 = uStack_600;
    uStack_118 = uStack_5e8;
    uStack_120 = uStack_5f0;
    uStack_188 = uStack_658;
    uStack_190 = uStack_660;
    uStack_178 = uStack_648;
    uStack_180 = uStack_650;
    uStack_168 = uStack_638;
    uStack_170 = uStack_640;
    uStack_158 = uStack_628;
    uStack_160 = uStack_630;
    uStack_1a8 = uStack_678;
    uStack_1b0 = uStack_680;
    uStack_198 = uStack_668;
    uStack_1a0 = uStack_670;
    FUN_10321cb34(&uStack_250,&uStack_320);
    puVar19 = &uStack_1b0;
    FUN_103225df0(puVar19,&uStack_540,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    puVar7 = puVar21;
    if (((uint)puVar19 & 0xff) == 2) goto LAB_10321aff8;
    puVar10 = &UNK_10db9efd0;
    func_0x000107c614e0(&UNK_10db9efd0);
LAB_10321b058:
    uStack_2b8 = uStack_618;
    uStack_2c0 = uStack_620;
    uStack_2a8 = uStack_608;
    uStack_2b0 = uStack_610;
    uStack_298 = uStack_5f8;
    uStack_2a0 = uStack_600;
    uStack_288 = uStack_5e8;
    uStack_290 = uStack_5f0;
    uStack_2f8 = uStack_658;
    uStack_300 = uStack_660;
    uStack_2e8 = uStack_648;
    uStack_2f0 = uStack_650;
    uStack_2d8 = uStack_638;
    uStack_2e0 = uStack_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_318 = uStack_678;
    uStack_320 = uStack_680;
    uStack_308 = uStack_668;
    uStack_310 = uStack_670;
    uStack_1e8 = uStack_618;
    uStack_1f0 = uStack_620;
    uStack_1d8 = uStack_608;
    uStack_1e0 = uStack_610;
    uStack_1c8 = uStack_5f8;
    uStack_1d0 = uStack_600;
    uStack_1b8 = uStack_5e8;
    uStack_1c0 = uStack_5f0;
    uStack_228 = uStack_658;
    uStack_230 = uStack_660;
    uStack_218 = uStack_648;
    uStack_220 = uStack_650;
    uStack_208 = uStack_638;
    uStack_210 = uStack_640;
    uStack_1f8 = uStack_628;
    uStack_200 = uStack_630;
    uStack_248 = uStack_678;
    uStack_250 = uStack_680;
    uStack_238 = uStack_668;
    uStack_240 = uStack_670;
    FUN_10321cb34(&uStack_320,&uStack_490);
    puVar8 = &uStack_250;
    puVar7 = &uStack_540;
    FUN_103225cb8(puVar8,puVar7,puVar10);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar10);
    if (puVar7 == (undefined8 *)0x0) {
LAB_10321b118:
      puVar16 = (undefined8 *)0x0;
      puVar20 = (undefined8 *)0x0;
      puVar7 = puVar21;
      puVar8 = puStack_7d0;
    }
    else {
      uVar17 = (ulong)puVar8 & 0xffffffffffff;
      if (((ulong)puVar7 & 0x2000000000000000) != 0) {
        uVar17 = (ulong)puVar7 >> 0x38 & 0xf;
      }
      puVar16 = puStack_7d0;
      puVar20 = puVar21;
      if (uVar17 == 0) {
        func_0x000107c6142c(puVar7);
        goto LAB_10321b118;
      }
    }
    puStack_7d0 = puVar8;
    if (((bVar3 & 1) != 0) && (((ulong)puVar19 & 1) == 0)) {
LAB_10321b130:
      if (uVar14 == 0) {
        uStack_278 = uStack_340;
        uStack_280 = uStack_348;
        uStack_268 = uStack_330;
        uStack_270 = uStack_338;
        uStack_260 = uStack_328;
        puVar21 = &uStack_280;
        puVar19 = puStack_7d0;
        FUN_103219388(puVar21,puStack_7d0,puVar7);
        if (puVar19 != (undefined8 *)0x0) {
          func_0x000107c6142c(puVar7);
          puVar7 = puVar19;
          puStack_7d0 = puVar21;
        }
      }
    }
  }
  puVar21 = (undefined8 *)&UNK_10db9eff0;
  func_0x000107c614e0();
  iVar5 = (int)&uStack_680;
  func_0x00010321cb1c();
  if (iVar5 == 1) {
    func_0x000107c61574();
  }
  else {
    uStack_428 = uStack_618;
    uStack_430 = uStack_620;
    uStack_418 = uStack_608;
    uStack_420 = uStack_610;
    uStack_408 = uStack_5f8;
    uStack_410 = uStack_600;
    uStack_3f8 = uStack_5e8;
    uStack_400 = uStack_5f0;
    uStack_468 = uStack_658;
    uStack_470 = uStack_660;
    uStack_458 = uStack_648;
    uStack_460 = uStack_650;
    uStack_448 = uStack_638;
    uStack_450 = uStack_640;
    uStack_438 = uStack_628;
    uStack_440 = uStack_630;
    uStack_488 = uStack_678;
    uStack_490 = uStack_680;
    uStack_478 = uStack_668;
    uStack_480 = uStack_670;
    uStack_2b8 = uStack_618;
    uStack_2c0 = uStack_620;
    uStack_2a8 = uStack_608;
    uStack_2b0 = uStack_610;
    uStack_298 = uStack_5f8;
    uStack_2a0 = uStack_600;
    uStack_288 = uStack_5e8;
    uStack_290 = uStack_5f0;
    uStack_2f8 = uStack_658;
    uStack_300 = uStack_660;
    uStack_2e8 = uStack_648;
    uStack_2f0 = uStack_650;
    uStack_2d8 = uStack_638;
    uStack_2e0 = uStack_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_318 = uStack_678;
    uStack_320 = uStack_680;
    uStack_308 = uStack_668;
    uStack_310 = uStack_670;
    FUN_10321cb34(&uStack_490,&uStack_5e0);
    puVar19 = &uStack_320;
    FUN_103225df0(puVar19,&uStack_540,puVar21);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574();
    if ((((uint)puVar19 & 0xff) != 2) && (((ulong)puVar19 & 1) != 0)) {
      func_0x000107c6142c(puVar20);
      func_0x000107c6142c();
      puVar16 = (undefined8 *)0x0;
      puVar20 = (undefined8 *)0x0;
      puStack_7d0 = (undefined8 *)0x6867696c746f7053;
      puVar21 = puVar7;
      puVar7 = (undefined8 *)0xe900000000000074;
    }
  }
  FUN_10321b8f0();
  if (((ulong)puVar21 & 1) == 0) {
    lVar12 = 0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x20) = puStack_7d0;
    *(undefined8 **)(lVar12 + 0x28) = puVar7;
    *(undefined8 **)(lVar12 + 0x30) = puVar16;
    *(undefined8 **)(lVar12 + 0x38) = puVar20;
    puVar10 = &UNK_10db9f018;
    func_0x000107c614e0(&UNK_10db9f018);
    iVar5 = (int)&uStack_680;
    func_0x00010321cb1c();
    if (iVar5 == 1) {
      func_0x000107c61434(puVar20);
      func_0x000107c61434(puVar7);
      puVar21 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0x0;
    }
    else {
      uStack_428 = uStack_618;
      uStack_430 = uStack_620;
      uStack_418 = uStack_608;
      uStack_420 = uStack_610;
      uStack_408 = uStack_5f8;
      uStack_410 = uStack_600;
      uStack_3f8 = uStack_5e8;
      uStack_400 = uStack_5f0;
      uStack_468 = uStack_658;
      uStack_470 = uStack_660;
      uStack_458 = uStack_648;
      uStack_460 = uStack_650;
      uStack_448 = uStack_638;
      uStack_450 = uStack_640;
      uStack_438 = uStack_628;
      uStack_440 = uStack_630;
      uStack_488 = uStack_678;
      uStack_490 = uStack_680;
      uStack_478 = uStack_668;
      uStack_480 = uStack_670;
      func_0x00010321cbb0(&uStack_680,&uStack_5e0,0x112f4d250,&UNK_10db9f060);
      func_0x000107c61434(puVar20);
      func_0x000107c61434(puVar7);
      puVar21 = &uStack_490;
      puVar19 = &uStack_540;
      FUN_103225cb8(puVar21,puVar19,puVar10);
      func_0x00010321cb68(&uStack_680);
    }
    func_0x000107c61574(puVar10);
    uVar17 = 0;
    *(undefined8 **)(lVar12 + 0x40) = puVar21;
    *(undefined8 **)(lVar12 + 0x48) = puVar19;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = uVar17;
      if (uVar17 < 4) {
        uVar2 = 3;
      }
      lVar13 = uVar17 * 0x10 + 0x28;
      do {
        if (uVar17 == 3) {
          func_0x000107c61588(lVar12);
          uVar15 = 0x112d35ff8;
          func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
          func_0x000107c61408((undefined8 *)(lVar12 + 0x20),3,uVar15);
          func_0x000107c6145c(lVar12,0x20,7);
          lVar12 = *(long *)(puVar10 + 0x10);
          goto joined_r0x00010321b4c8;
        }
        uVar17 = uVar17 + 1;
        if (uVar2 + 1 == uVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10321b6ac);
          (*pcVar4)();
        }
        lVar1 = lVar13 + 0x10;
        lVar22 = *(long *)(lVar12 + lVar13);
        lVar13 = lVar1;
      } while (lVar22 == 0);
      uVar15 = *(undefined8 *)(lVar12 + lVar1 + -0x18);
      func_0x000107c61434(lVar22);
      puVar18 = puVar10;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar18 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000d182c(puVar10,uVar2 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar10 + uVar2 * 0x10 + 0x20) = uVar15;
      *(long *)(puVar10 + uVar2 * 0x10 + 0x28) = lVar22;
    } while( true );
  }
  lVar12 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x00010321b4c8:
  if (lVar12 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    func_0x000107c61434(puVar10);
    puVar18 = puVar10;
  }
  puVar9 = &UNK_10db9eff0;
  func_0x000107c614e0(&UNK_10db9eff0);
  iVar5 = (int)&uStack_680;
  func_0x00010321cb1c();
  if (iVar5 == 1) {
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_10db9f040;
    func_0x000107c614e0(&UNK_10db9f040);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(puVar20);
    puVar21 = (undefined8 *)0x0;
  }
  else {
    uStack_6b8 = uStack_618;
    uStack_6c0 = uStack_620;
    uStack_6a8 = uStack_608;
    uStack_6b0 = uStack_610;
    uStack_698 = uStack_5f8;
    uStack_6a0 = uStack_600;
    uStack_688 = uStack_5e8;
    uStack_690 = uStack_5f0;
    uStack_6f8 = uStack_658;
    uStack_700 = uStack_660;
    uStack_6e8 = uStack_648;
    uStack_6f0 = uStack_650;
    uStack_6d8 = uStack_638;
    uStack_6e0 = uStack_640;
    uStack_6c8 = uStack_628;
    uStack_6d0 = uStack_630;
    uStack_718 = uStack_678;
    uStack_720 = uStack_680;
    uStack_708 = uStack_668;
    uStack_710 = uStack_670;
    uStack_578 = uStack_618;
    uStack_580 = uStack_620;
    uStack_568 = uStack_608;
    uStack_570 = uStack_610;
    uStack_558 = uStack_5f8;
    uStack_560 = uStack_600;
    uStack_548 = uStack_5e8;
    uStack_550 = uStack_5f0;
    uStack_5b8 = uStack_658;
    uStack_5c0 = uStack_660;
    uStack_5a8 = uStack_648;
    uStack_5b0 = uStack_650;
    uStack_598 = uStack_638;
    uStack_5a0 = uStack_640;
    uStack_588 = uStack_628;
    uStack_590 = uStack_630;
    uStack_5d8 = uStack_678;
    uStack_5e0 = uStack_680;
    uStack_5c8 = uStack_668;
    uStack_5d0 = uStack_670;
    FUN_10321cb34(&uStack_720,auStack_7c0);
    puVar21 = &uStack_5e0;
    FUN_103225df0(puVar21,&uStack_540,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar21 & 1) != 0) {
      if (lRam0000000112f4d258 != -1) {
        func_0x000107c61568(0x112f4d258,FUN_10321ac7c);
      }
      puVar21 = puRam0000000112f4d260;
      func_0x000107c61174(puRam0000000112f4d260);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar20);
      goto LAB_10321b62c;
    }
    puVar9 = &UNK_10db9f040;
    func_0x000107c614e0(&UNK_10db9f040);
    FUN_10321cb34(&uStack_720,auStack_7c0);
    puVar21 = &uStack_5e0;
    FUN_103225f28(puVar21,&uStack_540,puVar9);
    func_0x00010321cb68(&uStack_680);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(puVar20);
  }
  func_0x000107c61574(puVar9);
LAB_10321b62c:
  func_0x000107c6142c(puVar7);
  *param_1 = (long)puVar6;
  param_1[1] = uVar11;
  param_1[2] = (long)puVar18;
  param_1[3] = (long)puVar21;
  return;
}



/* Entry: 10321cc6c; end: 10321cce3;  */

void FUN_10321cc6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0db78;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0d6d8;
  uVar4 = param_3;
  func_0x000107c5faec();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0d6f8;
  uVar5 = uVar4;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  param_1[2] = ppuVar2;
  param_1[3] = uVar4;
  param_1[4] = ppuVar3;
  param_1[5] = uVar5;
  return;
}



/* Entry: 10321cce4; end: 10321cfbf;  */

long FUN_10321cce4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  lVar7 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  uVar8 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(undefined ***)(lVar7 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x20) = uVar1;
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  uVar8 = 0x112f4c648;
  func_0x0001000285a8(0x112f4c648,&UNK_10db9d6d0);
  *(undefined8 *)(lVar7 + 0x60) = uVar8;
  *(undefined ***)(lVar7 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x48) = uVar2;
  *(undefined8 *)(lVar7 + 0x50) = uVar5;
  *(undefined8 *)(lVar7 + 0x88) = uVar8;
  *(undefined ***)(lVar7 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x70) = uVar3;
  *(undefined8 *)(lVar7 + 0x78) = uVar6;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return lVar7;
}



/* Entry: 10321cfc0; end: 10321d02f;  */

void FUN_10321cfc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4d270 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d268;
  func_0x00010002969c(0x112f4d268,&UNK_10db9f108);
  uVar2 = uVar1;
  FUN_10321d030();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4d270 = puVar3;
  return;
}



/* Entry: 10321d030; end: 10321d06f;  */

void FUN_10321d030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9f1b4;
  func_0x000107c61520(&UNK_10db9f1b4,&UNK_110627c58);
  puRam0000000112f4d278 = puVar1;
  return;
}



/* Entry: 10321d070; end: 10321d293;  */

void FUN_10321d070(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_24f;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_19f;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
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
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar4 = (undefined8 *)*param_2;
  uVar8 = param_2[1];
  puVar3 = puVar4;
  uVar7 = uVar8;
  if (*(char *)(param_2 + 2) == '\x01') {
    func_0x00010321d678(puVar4,uVar8);
    uVar8 = 3;
LAB_10321d188:
    func_0x0001031e60c4(&puStack_240);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if (*(char *)(param_2 + 2) == -1) {
      func_0x00010321d858(&puStack_190);
      goto LAB_10321d264;
    }
    func_0x00010321d888();
    func_0x0001032271fc();
    func_0x000108f470a4();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) goto LAB_10321d188;
    puStack_2f0 = puVar4;
    func_0x0001031e60f0(&puStack_2f0);
    uStack_108 = uStack_268;
    uStack_110 = uStack_270;
    uStack_100 = uStack_260;
    uStack_ef = (undefined7)uStack_24f;
    uStack_e8 = (undefined1)((ulong)uStack_24f >> 0x38);
    uStack_148 = uStack_2a8;
    uStack_150 = uStack_2b0;
    puStack_138 = (undefined8 *)uStack_298;
    uStack_140 = uStack_2a0;
    uStack_128 = uStack_288;
    uStack_130 = uStack_290;
    uStack_118 = uStack_278;
    uStack_120 = uStack_280;
    uStack_188 = uStack_2e8;
    puStack_190 = puStack_2f0;
    uStack_178 = uStack_2d8;
    uStack_180 = uStack_2e0;
    uStack_168 = uStack_2c8;
    puStack_170 = puStack_2d0;
    puStack_158 = (undefined8 *)uStack_2b8;
    uStack_160 = uStack_2c0;
    func_0x0001031e6100(&puStack_190);
    uStack_1b8 = uStack_108;
    uStack_1c0 = uStack_110;
    uStack_1b0 = uStack_100;
    uStack_19f = CONCAT17(uStack_e8,uStack_ef);
    uStack_1f8 = uStack_148;
    uStack_200 = uStack_150;
    uStack_1e8 = puStack_138;
    uStack_1f0 = uStack_140;
    uStack_1d8 = uStack_128;
    uStack_1e0 = uStack_130;
    uStack_1c8 = uStack_118;
    uStack_1d0 = uStack_120;
    uStack_238 = uStack_188;
    puStack_240 = puStack_190;
    uStack_228 = uStack_178;
    uStack_230 = uStack_180;
    uStack_218 = uStack_168;
    puStack_220 = puStack_170;
    uStack_208 = puStack_158;
    uStack_210 = uStack_160;
  }
  uStack_e0 = uStack_1c8;
  uStack_e8 = (undefined1)uStack_1d0;
  uStack_e7 = (undefined7)((ulong)uStack_1d0 >> 8);
  uStack_d0 = uStack_1b8;
  uStack_d8 = uStack_1c0;
  uStack_c8 = uStack_1b0;
  uStack_b7 = uStack_19f;
  uStack_120 = uStack_208;
  uStack_128 = uStack_210;
  uStack_110 = uStack_1f8;
  uStack_118 = uStack_200;
  uStack_100 = uStack_1e8;
  uStack_108 = uStack_1f0;
  uStack_f0 = (undefined1)uStack_1d8;
  uStack_ef = (undefined7)((ulong)uStack_1d8 >> 8);
  uStack_f8 = (undefined1)uStack_1e0;
  uStack_f7 = (undefined7)((ulong)uStack_1e0 >> 8);
  uStack_150 = uStack_238;
  puStack_158 = puStack_240;
  uStack_140 = uStack_228;
  uStack_148 = uStack_230;
  uStack_130 = uStack_218;
  puStack_138 = puStack_220;
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000103bad4fc();
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  func_0x000101c68d90(0);
  func_0x000107c61434(uVar2);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c();
  func_0x000107c61170(puVar4);
  puStack_190 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_180 = 0x6567646162;
  uStack_178 = 0xe500000000000000;
  uStack_160 = 0;
  uStack_a8 = 0;
  uStack_80 = 0x102;
  uStack_78 = 0;
  uStack_70 = 1;
  puStack_170 = puVar3;
  uStack_168 = uVar7;
  uStack_a0 = uVar8;
  uStack_98 = uVar1;
  uStack_90 = uVar2;
  puStack_88 = puVar6;
  func_0x00010321d89c(&puStack_190);
LAB_10321d264:
  func_0x000107c610b4(param_1,&puStack_190,0x128);
  return;
}



/* Entry: 10321d294; end: 10321d34f;  */

code * FUN_10321d294(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar1 = 0x112f4d268;
  func_0x0001000285a8(0x112f4d268,&UNK_10db9f108);
  uVar2 = 0x10321cdb4;
  func_0x0001000bfde0(0x10321cdb4,0,uVar1);
  uVar3 = uVar2;
  FUN_10321cfc0();
  func_0x0001000c2068();
  func_0x000107c61574(uVar2);
  uVar1 = 0x112f4d280;
  func_0x0001000285a8(0x112f4d280,&UNK_10db9f110);
  pcVar4 = FUN_10321d070;
  func_0x0001000bfde0(FUN_10321d070,0,uVar1);
  func_0x000107c61574(uVar3);
  return pcVar4;
}



/* Entry: 10321d350; end: 10321d38f;  */

void FUN_10321d350(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f150;
  func_0x000107c61520(&DAT_10db9f150,&UNK_110627b40);
  puRam0000000112f4d288 = puVar1;
  return;
}



/* Entry: 10321d390; end: 10321d393;  */

void FUN_10321d390(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d290 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d298;
  func_0x00010002969c(0x112f4d298,&UNK_10db9f148);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d290 = puVar2;
  return;
}



/* Entry: 10321d394; end: 10321d3e3;  */

void FUN_10321d394(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d290 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d298;
  func_0x00010002969c(0x112f4d298,&UNK_10db9f148);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d290 = puVar2;
  return;
}



/* Entry: 10321d3e4; end: 10321d3fb;  */

undefined ** FUN_10321d3e4(void)

{
  return &PTR_DAT_110627b00;
}



/* Entry: 10321d3fc; end: 10321d433;  */

undefined * FUN_10321d3fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001032173b0();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 10321d434; end: 10321d443;  */

undefined1  [16] FUN_10321d434(void)

{
  return ZEXT816(0x110627b40);
}



/* Entry: 10321d444; end: 10321d49f;  */

long FUN_10321d444(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10321d4a0; end: 10321d57f;  */

undefined8 * FUN_10321d4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10321d580; end: 10321d5d3;  */

undefined8 * FUN_10321d580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10321d5d4; end: 10321d6c7;  */

int FUN_10321d5d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10321d6c8; end: 10321d763;  */

undefined8 * FUN_10321d6c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010321d678(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10321d764; end: 10321d7a7;  */

undefined8 * FUN_10321d764(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010321d6a0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10321d7a8; end: 10321d8a7;  */

int FUN_10321d7a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10321d8a8; end: 10321d933;  */

void FUN_10321d8a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0a3890);
  uRam0000000112f4d450 = uVar1;
  return;
}



/* Entry: 10321d934; end: 10321da93;  */

long FUN_10321d934(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x50) = uStack_78;
  *(undefined8 *)(lVar1 + 0x48) = uStack_80;
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uVar3 = 0x112f4d2e0;
  func_0x0001000285a8(0x112f4d2e0,&UNK_10db9f240);
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  FUN_10321f978(&uStack_70,auStack_b0,0x112f4b528,&UNK_10db9ab20);
  FUN_10321f978(&uStack_80,auStack_b0,0x112f4b528,&UNK_10db9ab20);
  FUN_10321f978(&uStack_90,auStack_b0,0x112f4d2e0,&UNK_10db9f240);
  FUN_10321f978(&uStack_a0,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  return lVar1;
}



/* Entry: 10321da94; end: 10321daff;  */

void FUN_10321da94(undefined8 *param_1)

{
  *param_1 = 0xd000000000000025;
  param_1[1] = 0x800000010f0a3770;
  param_1[2] = 0xd000000000000023;
  param_1[3] = 0x800000010f0a37a0;
  param_1[4] = 0xd000000000000031;
  param_1[5] = 0x800000010f0a3800;
  param_1[6] = 0xd000000000000021;
  param_1[7] = 0x800000010f0a37d0;
  return;
}


