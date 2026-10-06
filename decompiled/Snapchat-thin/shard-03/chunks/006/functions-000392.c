/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a40088; end: 102a40277;  */

/* WARNING: Removing unreachable block (ram,0x000102a40248) */

undefined * FUN_102a40088(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_80;
  undefined8 uStack_78;
  undefined *apuStack_70 [2];
  
  if (*(char *)(unaff_x20 + 0x20) != '\0') {
    func_0x0001000285a8(0x112ee4290,&UNK_10db0f320);
    func_0x000100087bd4(&lStack_80,FUN_102a41b38);
    lVar1 = lStack_80;
    if (*(long *)(lStack_80 + 0x10) != 0) {
      puVar8 = (ulong *)(lStack_80 + 0x40);
      apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar6 = -1L << ((ulong)*(byte *)(lStack_80 + 0x20) & 0x3f);
      uVar7 = 0xffffffffffffffff;
      if (-uVar6 < 0x40) {
        uVar7 = ~(-1L << (-uVar6 & 0x3f));
      }
      uVar7 = uVar7 & *puVar8;
      func_0x000107c61434(lStack_80);
      lVar10 = 0;
      lVar11 = lVar10;
      while( true ) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
          uVar5 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = lVar10 << 9 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 3;
          lStack_80 = *(long *)(*(long *)(lVar1 + 0x30) + uVar5);
          uVar9 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + uVar5);
          uStack_78 = uVar9;
          func_0x000107c61434(uVar9);
          FUN_102a40278(apuStack_70,&lStack_80);
          func_0x000107c6142c(uVar9);
          lVar11 = lVar10;
        }
        bVar4 = SCARRY8(lVar10,1);
        lVar10 = lVar10 + 1;
        if (bVar4) break;
        if ((long)(0x3f - uVar6 >> 6) <= lVar10) {
          func_0x000107c6142c(lVar1);
          FUN_102a41ae0(lVar1,puVar8,~uVar6,lVar11,0);
          puVar2 = apuStack_70[0];
          func_0x000100087bd4(FUN_102a41b84);
          return puVar2;
        }
        uVar7 = puVar8[lVar10];
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a40248);
      (*pcVar3)();
    }
    func_0x000107c6142c(lStack_80);
  }
  return (undefined *)0x0;
}



/* Entry: 102a40278; end: 102a40663;  */

void FUN_102a40278(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x12;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_100 [8];
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar19 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puVar16 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = *(long *)(param_2[1] + 0x10);
  if (lVar17 != 0) {
    uVar14 = *param_2;
    uVar13 = (ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff);
    lVar20 = param_2[1] + uVar13;
    lVar11 = *(long *)(lVar19 + 0x48);
    pcVar18 = *(code **)(lVar19 + 0x10);
    do {
      (*pcVar18)((long)puVar16 - extraout_x12,lVar20,lVar2);
      (**(code **)(lVar19 + 0x20))(puVar16,(long)puVar16 - extraout_x12,lVar2);
      func_0x0001000d224c(&lStack_58);
      lVar1 = lStack_58;
      if (lStack_58 == 0) {
        (**(code **)(lVar19 + 8))(puVar16,lVar2);
      }
      else {
        lVar3 = 0x112d55580;
        func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        (*pcVar18)(lVar3 + uVar13,puVar16,lVar2);
        lVar4 = lVar3;
        func_0x000107c5fc48(lVar3,lVar2);
        func_0x000107c61574(lVar3);
        lVar3 = lVar1;
        func_0x000107c4eddc();
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar4);
        if (lVar3 == 0) {
          (**(code **)(lVar19 + 8))(puVar16,lVar2);
        }
        else {
          puVar5 = &UNK_10401523c;
          FUN_102a40e68(&UNK_10401523c,0x112df4198,&UNK_10d9c2988);
          func_0x000107c613fc();
          *(undefined8 *)(puVar5 + 0x18) = 3;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          *(long *)(puVar5 + 0x20) = lVar3;
          func_0x0001040154a8(0);
          func_0x000107c610f8();
          func_0x000107c61174();
          uVar10 = 0;
          func_0x000104012fbc();
          puVar6 = puVar5;
          func_0x0001040130b8();
          if (uVar10 >> 0x3c < 0xf) {
            func_0x000103f57b54(0);
            func_0x000107c610f8();
            func_0x00010006c00c(puVar6,uVar10);
            uVar7 = uVar14;
            func_0x000103f57900(uVar14,puVar6,uVar10);
            uVar15 = *param_1;
            uVar9 = uVar15;
            func_0x000107c61550();
            if ((((int)uVar9 == 0) || ((long)uVar15 < 0)) ||
               (uVar9 = uVar15, (uVar15 >> 0x3e & 1) != 0)) {
              if (uVar15 >> 0x3e == 0) {
                uVar8 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar8 = uVar15 & 0xffffffffffffff8;
                if (0x7fffffffffffffff < uVar15) {
                  uVar8 = uVar15;
                }
                func_0x000107c60480(uVar8);
              }
              uVar9 = 0;
              FUN_102a41640(0,uVar8 + 1,1,uVar15);
            }
            uVar12 = uVar9 & 0xffffffffffffff8;
            uVar15 = *(ulong *)(uVar12 + 0x10);
            uVar8 = uVar9;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar15) {
              uVar8 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
              FUN_102a41640(uVar8,uVar15 + 1,1,uVar9);
              uVar12 = uVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar12 + 0x10) = uVar15 + 1;
            *(undefined8 *)(uVar12 + uVar15 * 8 + 0x20) = uVar7;
            func_0x000107c61170(puVar5);
            func_0x0001000b44c0(puVar6,uVar10);
            func_0x000107c61170(lVar3);
            (**(code **)(lVar19 + 8))(puVar16,lVar2);
            *param_1 = uVar8;
          }
          else {
            (**(code **)(lVar19 + 8))(puVar16,lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(puVar5);
          }
        }
      }
      lVar20 = lVar20 + lVar11;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}



/* Entry: 102a40664; end: 102a4066f; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl registerExternalPaths] */

void FUN_102a40664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_102a40088();
  func_0x000107c61574(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000103f57b54(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102a40670; end: 102a4085f;  */

/* WARNING: Removing unreachable block (ram,0x000102a40830) */

undefined * FUN_102a40670(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_80;
  undefined8 uStack_78;
  undefined *apuStack_70 [2];
  
  if (*(char *)(unaff_x20 + 0x20) != '\0') {
    func_0x0001000285a8(0x112ee4280,&UNK_10db0f308);
    func_0x000100087bd4(&lStack_80,FUN_102a41a94);
    lVar1 = lStack_80;
    if (*(long *)(lStack_80 + 0x10) != 0) {
      puVar8 = (ulong *)(lStack_80 + 0x40);
      apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar6 = -1L << ((ulong)*(byte *)(lStack_80 + 0x20) & 0x3f);
      uVar7 = 0xffffffffffffffff;
      if (-uVar6 < 0x40) {
        uVar7 = ~(-1L << (-uVar6 & 0x3f));
      }
      uVar7 = uVar7 & *puVar8;
      func_0x000107c61434(lStack_80);
      lVar10 = 0;
      lVar11 = lVar10;
      while( true ) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
          uVar5 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = lVar10 << 9 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 3;
          lStack_80 = *(long *)(*(long *)(lVar1 + 0x30) + uVar5);
          uVar9 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + uVar5);
          uStack_78 = uVar9;
          func_0x000107c61434(uVar9);
          FUN_102a40860(apuStack_70,&lStack_80);
          func_0x000107c6142c(uVar9);
          lVar11 = lVar10;
        }
        bVar4 = SCARRY8(lVar10,1);
        lVar10 = lVar10 + 1;
        if (bVar4) break;
        if ((long)(0x3f - uVar6 >> 6) <= lVar10) {
          func_0x000107c6142c(lVar1);
          FUN_102a41ae0(lVar1,puVar8,~uVar6,lVar11,0);
          puVar2 = apuStack_70[0];
          func_0x000100087bd4(FUN_102a41ae8);
          return puVar2;
        }
        uVar7 = puVar8[lVar10];
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a40830);
      (*pcVar3)();
    }
    func_0x000107c6142c(lStack_80);
  }
  return (undefined *)0x0;
}



/* Entry: 102a40860; end: 102a40b93;  */

void FUN_102a40860(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lStack_58;
  
  lVar17 = param_2[1];
  uVar13 = *(ulong *)(lVar17 + 0x10);
  if (uVar13 != 0) {
    uVar18 = 0;
    uVar14 = *param_2;
    puVar19 = (undefined8 *)(lVar17 + 0x28);
    do {
      if (*(ulong *)(lVar17 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a40b94);
        (*pcVar4)();
      }
      uVar1 = puVar19[-1];
      uVar2 = *puVar19;
      func_0x00010006c00c(uVar1,uVar2);
      func_0x0001000d224c(&lStack_58);
      lVar3 = lStack_58;
      if (lStack_58 == 0) {
LAB_102a408e0:
        func_0x00010006c090(uVar1,uVar2);
      }
      else {
        lVar5 = 0x112d4c088;
        func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        *(undefined8 *)(lVar5 + 0x20) = uVar1;
        *(undefined8 *)(lVar5 + 0x28) = uVar2;
        func_0x00010006c00c(uVar1,uVar2);
        lVar6 = lVar5;
        func_0x000107c5fc48(lVar5,PTR___s10Foundation4DataVN_110350ae0);
        func_0x000107c61574(lVar5);
        lVar5 = lVar3;
        func_0x000107c4edd0();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar6);
        if (lVar5 == 0) goto LAB_102a408e0;
        puVar7 = &UNK_10401523c;
        FUN_102a40e68(&UNK_10401523c,0x112df4198,&UNK_10d9c2988);
        func_0x000107c613fc();
        *(undefined8 *)(puVar7 + 0x18) = 3;
        *(undefined8 *)(puVar7 + 0x10) = 1;
        *(long *)(puVar7 + 0x20) = lVar5;
        func_0x0001040154a8(0);
        func_0x000107c610f8();
        func_0x000107c61174();
        uVar12 = 0;
        func_0x000104012fbc();
        puVar8 = puVar7;
        func_0x0001040130b8();
        if (0xe < uVar12 >> 0x3c) {
          func_0x000107c61170(lVar5);
          func_0x000107c61170(puVar7);
          func_0x00010006c090(uVar1,uVar2);
          return;
        }
        func_0x000103f57b54(0);
        func_0x000107c610f8();
        func_0x00010006c00c(puVar8,uVar12);
        uVar9 = uVar14;
        func_0x000103f57900(uVar14,puVar8,uVar12);
        uVar16 = *param_1;
        uVar11 = uVar16;
        func_0x000107c61550();
        if ((((int)uVar11 == 0) || ((long)uVar16 < 0)) ||
           (uVar11 = uVar16, (uVar16 >> 0x3e & 1) != 0)) {
          if (uVar16 >> 0x3e == 0) {
            uVar10 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar10 = uVar16 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar16) {
              uVar10 = uVar16;
            }
            func_0x000107c60480(uVar10);
          }
          uVar11 = 0;
          FUN_102a41640(0,uVar10 + 1,1,uVar16);
        }
        uVar15 = uVar11 & 0xffffffffffffff8;
        uVar16 = *(ulong *)(uVar15 + 0x10);
        uVar10 = uVar11;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar16) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
          FUN_102a41640(uVar10,uVar16 + 1,1,uVar11);
          uVar15 = uVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar16 + 1;
        *(undefined8 *)(uVar15 + uVar16 * 8 + 0x20) = uVar9;
        func_0x000107c61170(puVar7);
        func_0x0001000b44c0(puVar8,uVar12);
        func_0x000107c61170(lVar5);
        func_0x00010006c090(uVar1,uVar2);
        *param_1 = uVar10;
      }
      uVar18 = uVar18 + 1;
      puVar19 = puVar19 + 2;
    } while (uVar13 != uVar18);
  }
  return;
}



/* Entry: 102a40b94; end: 102a40b9f; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl registerExternalContent] */

void FUN_102a40b94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_102a40670();
  func_0x000107c61574(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000103f57b54(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102a40ba0; end: 102a40c03;  */

void FUN_102a40ba0(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000103f57b54(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102a40c04; end: 102a40e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a40c04(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_68;
  
  if ((*(char *)(unaff_x20 + 0x20) != '\0') && (func_0x0001000d224c(&lStack_68), lStack_68 != 0)) {
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar7 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a40dc4);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + 0x20 + uVar8 * 8);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar8;
          FUN_102a418f8(uVar8,param_1);
        }
        bVar3 = SCARRY8(uVar8,1);
        uVar8 = uVar8 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a40dc0);
          (*pcVar2)();
        }
        func_0x0001040154a8(0);
        lVar5 = *(long *)(uVar4 + _DAT_1130347b0);
        func_0x000104013250(lVar5,((long *)(uVar4 + _DAT_1130347b0))[1]);
        if (lVar5 != 0) {
          uVar9 = *(ulong *)(lVar5 + _DAT_113046d58);
          if (uVar9 >> 0x3e == 0) {
            uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar10 = uVar9 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar9) {
              uVar10 = uVar9;
            }
            func_0x000107c60480();
          }
          if (uVar10 != 0) {
            uVar11 = 0;
            do {
              if ((uVar9 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a40dbc);
                  (*pcVar2)();
                }
                uVar6 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
                func_0x000107c61174(uVar6);
              }
              else {
                uVar6 = uVar11;
                func_0x000101a91cb4(uVar11,uVar9);
              }
              uVar1 = uVar11 + 1;
              if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102a40db8);
                (*pcVar2)();
              }
              func_0x000107c41f54(lStack_68);
              func_0x000107c61170(uVar6);
              uVar11 = uVar11 + 1;
            } while (uVar1 != uVar10);
          }
          func_0x000107c61170(lVar5);
        }
        func_0x000107c61170(uVar4);
      } while (uVar8 != uVar7);
    }
    func_0x000107c615e8(lStack_68);
  }
  return;
}



/* Entry: 102a40e04; end: 102a40e57; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl discardExternalContent:] */

void FUN_102a40e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103f57b54(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c6157c(param_1);
  FUN_102a40c04(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102a40e58; end: 102a40e5f; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl mediaObservable] */

void FUN_102a40e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 102a40e60; end: 102a40e67; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl emitMedia:] */

void FUN_102a40e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028);
  return;
}



/* Entry: 102a40e68; end: 102a40f2b;  */

void FUN_102a40e68(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102a40f2c; end: 102a4107f;  */

void FUN_102a40f2c(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000102a40ed4();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a41008);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_102a41230(lVar5,param_3,param_4,param_5);
    uVar2 = param_2;
    func_0x000102a40ed4();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_110724858);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a40fd0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102a410e4(param_4,param_5);
    lVar5 = *unaff_x20;
    goto joined_r0x000102a41024;
  }
  lVar5 = *unaff_x20;
joined_r0x000102a41024:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a41080);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 102a41080; end: 102a410e3;  */

void FUN_102a41080(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102a410e4; end: 102a4122f;  */

void FUN_102a410e4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8();
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_102a411b0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_102a411b0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a41230);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102a41208;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102a41208:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102a41230; end: 102a4163f;  */

void FUN_102a41230(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,param_3);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102a41478:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a414a8);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_102a41478;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a414ac);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 102a41640; end: 102a41767;  */

ulong FUN_102a41640(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a41768);
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
  FUN_102a41768(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a41764);
      (*pcVar1)();
    }
    FUN_102a41800(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102a41768; end: 102a417ff;  */

undefined * FUN_102a41768(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = &SUB_103f57b54;
    FUN_102a40e68(&SUB_103f57b54,0x112ee4288,&UNK_10db0f318);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102a41800; end: 102a418f7;  */

long FUN_102a41800(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a418f4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a418f8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103f57b54(0);
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
      func_0x000103f57b54(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a418f0);
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



/* Entry: 102a418f8; end: 102a41a93;  */

ulong FUN_102a418f8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a419c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a419cc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103f57b54(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103f57b54(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f0e47b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a41a94);
  (*pcVar2)();
}



/* Entry: 102a41a94; end: 102a41adf;  */

void FUN_102a41a94(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_38,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61434();
  return;
}



/* Entry: 102a41ae0; end: 102a41ae7;  */

void FUN_102a41ae0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102a41ae8; end: 102a41b37;  */

void FUN_102a41ae8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 102a41b38; end: 102a41b83;  */

void FUN_102a41b38(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_38,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61434();
  return;
}



/* Entry: 102a41b84; end: 102a41bd3;  */

void FUN_102a41b84(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 102a41bd4; end: 102a41c3b;  */

void FUN_102a41bd4(void)

{
  long unaff_x20;
  
  FUN_102a3fe8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102a41c3c; end: 102a41c4b;  */

undefined1  [16] FUN_102a41c3c(void)

{
  return ZEXT816(0x11058b840);
}



/* Entry: 102a41c4c; end: 102a41daf;  */

void FUN_102a41c4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  func_0x0001000285a8(0x112ee42c8,&UNK_10db0f3a0);
  puVar1 = &UNK_11058b888;
  func_0x000107c613fc(&UNK_11058b888,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_12;
  *(undefined8 *)(puVar1 + 0x58) = param_3;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_3);
  pcVar2 = FUN_102a41dec;
  func_0x0001000823a8(FUN_102a41dec,puVar1);
  func_0x000100082720("CameraLensApiServicePluginRegistryServiceProvider",0x31,2);
  pcVar3 = pcVar2;
  func_0x000102b2ebc0();
  func_0x000107c61574(pcVar2);
  func_0x000100082720("CameraLensApiServicePluginCollectionEntryPointProvider",0x36,2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102a41db0; end: 102a41deb;  */

void FUN_102a41db0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102a41c4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102a41dec; end: 102a41df7;  */

void FUN_102a41dec(void)

{
  long unaff_x20;
  
  FUN_102a41df8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102a41df8; end: 102a4202f;  */

void FUN_102a41df8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11059f1f8;
  ppuVar4 = &PTR_DAT_112ef4890;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11058b8b0;
  func_0x000107c613fc(&UNK_11058b8b0,0x58,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar3 = 0x112ee42d0;
  func_0x0001000285a8(0x112ee42d0,&UNK_10db0f3a8);
  func_0x0001000a6ee8(&UNK_11058c2c0,"AILensRemoteApiRPCPluginKey",0x1b,2,FUN_102a42030,puVar2,uVar3
                      ,&UNK_11058c2c0,&PTR_DAT_112ee4760);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11058b8d8;
  func_0x000107c613fc(&UNK_11058b8d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(undefined8 *)(puVar2 + 0x18) = param_11;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_11058c500,"LensPlusUpsellApiPluginKey",0x1a,2,0x102a4208c,puVar2,uVar3,
                      &UNK_11058c500,&PTR_DAT_112ee4920);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ee42d8;
  func_0x0001000285a8(0x112ee42d8,&UNK_10db0f3b0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("CameraLensApiServicePluginRegistryServiceProvider",0x31,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102a42030; end: 102a42113;  */

void FUN_102a42030(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102a48a5c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100082720("AILensRemoteApiRPCSaberPluginProvider",0x25,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a42114; end: 102a421a7;  */

void FUN_102a42114(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_2);
    uStack_50 = uVar2;
    func_0x000100075034(FUN_102a427b8,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102a421a8; end: 102a42403;  */

void FUN_102a421a8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  ulong uStack_70;
  ulong uStack_68;
  undefined *puVar9;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = param_2;
  func_0x000107c6157c(uVar13);
  func_0x0001000c74f0(&uStack_68);
  func_0x000107c61574(uVar13);
  if (uStack_68 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uStack_68 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uStack_68 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uStack_68) {
      uVar14 = uStack_68;
    }
    func_0x000107c60480();
  }
  uStack_70 = uStack_68 & 0xffffffffffffff8;
  uVar12 = 0;
  while( true ) {
    if (uVar14 == uVar12) {
      func_0x000107c6142c(uStack_68);
      return;
    }
    if ((uStack_68 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_70 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a423e0);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uStack_68 + uVar12 * 8 + 0x20);
      func_0x000107c61174();
      uVar11 = uVar10;
    }
    else {
      uVar4 = uVar12;
      uVar11 = uStack_68;
      FUN_102a42460(uVar12,uStack_68,&PTR_PTR_1126ae6a8,0x112d4d630);
    }
    uVar5 = uVar4;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5faec();
    uVar10 = uVar11;
    func_0x000107c61170(uVar5);
    if (uVar6 == param_1 && uVar11 == param_2) break;
    uVar10 = uVar11;
    func_0x000107c605b8(uVar6,uVar11,param_1,param_2,0);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar11);
    if ((uVar6 & 1) != 0) goto LAB_102a422e8;
    bVar2 = SCARRY8(uVar12,1);
    uVar12 = uVar12 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a423e4);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar11);
LAB_102a422e8:
  if ((uStack_68 & 0xc000000000000001) == 0) {
    if (*(long *)(uStack_70 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a42404);
      (*pcVar1)();
    }
    lVar7 = *(long *)(uStack_68 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar7 = 0;
    uVar10 = uStack_68;
    FUN_102a42460(0,uStack_68,&PTR_PTR_1126ae6a8,0x112d4d630);
  }
  func_0x000107c6142c(uStack_68);
  lVar8 = lVar7;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar8 == 0) {
    lVar8 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
  }
  puVar9 = PTR_PTR_1126ae6a8;
  func_0x000107c61168();
  iVar3 = (int)puVar9;
  func_0x000107c4a148();
  func_0x000107c61170(lVar8);
  if (((long)uVar12 < 1) || (iVar3 == 0)) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  }
  else {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  }
  func_0x000107c46ed0();
  return;
}



/* Entry: 102a42404; end: 102a4242f;  */

void FUN_102a42404(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a42430; end: 102a4244f;  */

void FUN_102a42430(void)

{
  FUN_102a421a8();
  return;
}



/* Entry: 102a42450; end: 102a4245f;  */

void FUN_102a42450(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102a42460; end: 102a4261b;  */

ulong FUN_102a42460(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a42544);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a42548);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102a42770(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4261c);
  (*pcVar2)();
}



/* Entry: 102a4261c; end: 102a4262f;  */

ulong FUN_102a4261c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a42544);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a42548);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b1cf0;
    func_0x000107c61168(PTR_PTR_1126b1cf0);
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
    puVar4 = PTR_PTR_1126b1cf0;
    func_0x000107c61168(PTR_PTR_1126b1cf0);
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
  FUN_102a42770(0,0x112d5d238,&PTR_PTR_1126b1cf0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4261c);
  (*pcVar2)();
}



/* Entry: 102a42630; end: 102a4274f;  */

void FUN_102a42630(long *param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined *puStack_48;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112ee42e0,&UNK_10db0f3c0);
  func_0x000107c613fc();
  ppuVar2 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x18) = ppuVar2;
  puVar3 = &UNK_11058b9e8;
  func_0x000107c613fc(&UNK_11058b9e8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar4 = FUN_102a427b0;
  puVar5 = puVar3;
  (**(code **)(*param_1 + 0x60))(FUN_102a427b0);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar6)();
  func_0x000107c615e8(pcVar4);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102a42750; end: 102a4276f;  */

void FUN_102a42750(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4328);
  return;
}



/* Entry: 102a42770; end: 102a427af;  */

void FUN_102a42770(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a427b0; end: 102a427b7;  */

void FUN_102a427b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    uStack_50 = uVar3;
    func_0x000100075034(FUN_102a427b8,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102a427b8; end: 102a427fb;  */

void FUN_102a427b8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = uVar1;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 102a427fc; end: 102a4282b;  */

void FUN_102a427fc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102a4282c; end: 102a42b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102a4282c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  func_0x0001000d224c(&puStack_b8);
  puVar4 = puStack_b8;
  if (puStack_b8 != (undefined *)0x0) {
    lVar5 = 0;
    FUN_102a42b78();
    lVar15 = lVar5;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar15 + _DAT_112ee4390);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar7 = PTR_s_init_1125d9248;
    lStack_80 = lVar15;
    lStack_78 = lVar5;
    func_0x000107c6157c(param_3);
    plVar6 = &lStack_80;
    func_0x000107c61154(plVar6,puVar7);
    lVar5 = param_1[4];
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102a42e9c(0,0,0);
    lVar15 = *(long *)(lVar5 + 0x10);
    if (lVar15 != 0) {
      lVar17 = 0;
      puVar16 = (undefined1 *)(lVar5 + 0x30);
      do {
        puVar12 = puStack_88;
        uVar3 = *puVar16;
        uVar9 = *(undefined8 *)(puVar16 + -0x10);
        uVar13 = *(undefined8 *)(puVar16 + -8);
        puVar7 = &UNK_11058ba40;
        func_0x000107c613fc(&UNK_11058ba40,0x29,7);
        *(long **)(puVar7 + 0x10) = plVar6;
        *(undefined8 *)(puVar7 + 0x18) = uVar9;
        *(undefined8 *)(puVar7 + 0x20) = uVar13;
        puVar7[0x28] = uVar3;
        func_0x000107c61438(uVar13,2);
        func_0x000107c61174(plVar6);
        uVar14 = uVar9;
        func_0x000107c5fadc(uVar9,uVar13);
        uVar8 = uVar9;
        func_0x000107c5fadc(uVar9,uVar13);
        func_0x000107c5fadc(uVar9,uVar13);
        pcStack_98 = FUN_102a42ed0;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100de205c;
        puStack_a0 = &UNK_11058ba58;
        ppuVar10 = &puStack_b8;
        puStack_90 = puVar7;
        func_0x000107c60bc4(ppuVar10);
        puVar11 = PTR_PTR_1126aed70;
        func_0x000107c61168();
        func_0x000107c3dac4();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar9);
        puVar7 = puStack_90;
        func_0x000107c6142c(uVar13);
        func_0x000107c61574(puVar7);
        uVar2 = *(ulong *)(puVar12 + 0x10);
        puStack_88 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
          func_0x000102a42e9c(1 < *(ulong *)(puVar12 + 0x18),uVar2 + 1,1);
        }
        lVar17 = lVar17 + 1;
        puVar16 = puVar16 + 0x18;
        *(ulong *)(puStack_88 + 0x10) = uVar2 + 1;
        *(undefined **)(puStack_88 + uVar2 * 8 + 0x20) = puVar11;
      } while (lVar15 != lVar17);
    }
    puVar7 = puStack_88;
    uVar9 = *param_1;
    uVar14 = param_1[1];
    uVar13 = param_1[2];
    uVar8 = param_1[3];
    puVar12 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c5fadc(uVar9,uVar14);
    func_0x000107c5fadc(uVar13,uVar8);
    uVar14 = 0;
    FUN_102a43078(0,0x112d360a8,&PTR_PTR_1126aed70);
    puVar11 = puVar7;
    func_0x000107c5fc48(puVar7,uVar14);
    func_0x000107c61574(puVar7);
    func_0x000107c48d50(puVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar11);
    func_0x000107c53fcc(puVar12);
    func_0x000107c3e2c0(puVar4);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(plVar6);
  }
  return puVar4 != (undefined *)0x0;
}



/* Entry: 102a42b78; end: 102a42b97;  */

void FUN_102a42b78(void)

{
  func_0x000107c61168(&PTR_PTR_112882620);
  return;
}



/* Entry: 102a42b98; end: 102a42c73;  */

void FUN_102a42b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11058baa0;
  func_0x000107c613fc(&UNK_11058baa0,0x29,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar1[0x28] = param_5;
  pcStack_50 = FUN_102a430e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11058bab8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102a42c74; end: 102a42ce3;  */

/* WARNING: Possible PIC construction at 0x000102a42cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a42cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a42c74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee4390);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  func_0x000107c6157c(uVar3);
  (*pcVar2)(param_4);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102a42ce4; end: 102a42d07;  */

void FUN_102a42ce4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a42d08; end: 102a42d2b;  */

uint FUN_102a42d08(uint param_1)

{
  FUN_102a4282c();
  return param_1 & 1;
}



/* Entry: 102a42d2c; end: 102a42e37; -[_TtC24AILensRemoteApiRPCPluginP33_3EFD7BD4C1692F994D210AA70AD3F07623AlertResolutionReporter dialogDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102a42d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a42d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a42d2c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee4390);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  func_0x000107c61174();
  FUN_102a42f1c(pcVar2,uVar3);
  (*pcVar2)(0);
  func_0x000107c61170(param_1);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102a42e38; end: 102a42e5b; -[_TtC24AILensRemoteApiRPCPluginP33_3EFD7BD4C1692F994D210AA70AD3F07623AlertResolutionReporter dealloc] */

void FUN_102a42e38(void)

{
  func_0x000107c61174();
  func_0x000102a42dac();
  return;
}



/* Entry: 102a42e5c; end: 102a42e6f; -[_TtC24AILensRemoteApiRPCPluginP33_3EFD7BD4C1692F994D210AA70AD3F07623AlertResolutionReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a42e5c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ee4390) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ee4390))[1]);
    return;
  }
  return;
}



/* Entry: 102a42e70; end: 102a42ecf; -[_TtC24AILensRemoteApiRPCPluginP33_3EFD7BD4C1692F994D210AA70AD3F07623AlertResolutionReporter init] */

void FUN_102a42e70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AILensRemoteApiRPCPlugin.AlertResolutionReporter",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a42e9c);
  (*pcVar1)();
}



/* Entry: 102a42ed0; end: 102a42efb;  */

void FUN_102a42ed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  ppuVar5 = &puStack_70;
  puVar4 = &UNK_11058baa0;
  func_0x000107c613fc(&UNK_11058baa0,0x29,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  puVar4[0x28] = uVar3;
  pcStack_50 = FUN_102a430e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11058bab8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102a42efc; end: 102a42f1b;  */

void FUN_102a42efc(void)

{
  func_0x000107c61168(&PTR_PTR_112ee43d8);
  return;
}



/* Entry: 102a42f1c; end: 102a42f3b;  */

void FUN_102a42f1c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102a42f3c; end: 102a43077;  */

undefined *
FUN_102a42f3c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a43078);
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
    (*param_5)();
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
    FUN_102a43078(0,param_6,param_7);
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



/* Entry: 102a43078; end: 102a430b7;  */

void FUN_102a43078(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a430b8; end: 102a430e3;  */

void FUN_102a430b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a430e4; end: 102a430fb;  */

/* WARNING: Possible PIC construction at 0x000102a42cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a42cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a430e4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ee4390);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  func_0x000107c6157c(uVar3,uVar4,uVar6);
  (*pcVar2)(uVar5);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102a430fc; end: 102a431a7;  */

void FUN_102a430fc(void)

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



/* Entry: 102a431a8; end: 102a431bb;  */

bool FUN_102a431a8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a431bc; end: 102a43217;  */

bool FUN_102a431bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return false;
  }
  return (char)uVar1 == (char)uVar2;
}



/* Entry: 102a43218; end: 102a432c7;  */

undefined8 FUN_102a43218(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_2 + 0x10)) {
    if ((lVar5 != 0) && (param_1 != param_2)) {
      pcVar6 = (char *)(param_2 + 0x30);
      pcVar7 = (char *)(param_1 + 0x30);
      do {
        uVar3 = *(ulong *)(pcVar7 + -0x10);
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (uVar3 == *(ulong *)(pcVar6 + -0x10) && *(long *)(pcVar7 + -8) == *(long *)(pcVar6 + -8))
        {
          if (cVar1 != cVar2) goto LAB_102a432a8;
        }
        else {
          func_0x000107c605b8();
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        pcVar6 = pcVar6 + 0x18;
        pcVar7 = pcVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar4 = 1;
  }
  else {
LAB_102a432a8:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 102a432c8; end: 102a43357;  */

uint FUN_102a432c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x000102a43414(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102a43358; end: 102a4348f;  */

void FUN_102a43358(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = (uint)param_3;
  uVar1 = uVar2 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      pcVar3 = FUN_102a498a8;
      uVar4 = 0x102a49974;
      uVar5 = 0x102a49b0c;
    }
    else {
      pcVar3 = (code *)0x102a49ca8;
      uVar4 = 0x102a49d74;
      uVar5 = 0x102a49e40;
      param_3 = (ulong)(uVar2 & 0x3f);
    }
    FUN_102a4355c(&uStack_48,param_2,param_3,pcVar3,uVar4,uVar5);
  }
  else if (uVar1 == 2) {
    func_0x000102a43708(&uStack_48,param_2,uVar2 & 0x3f);
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_40;
  param_1[2] = uStack_38;
  param_1[4] = uStack_28;
  param_1[3] = uStack_30;
  return;
}



/* Entry: 102a43490; end: 102a4355b;  */

bool FUN_102a43490(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1[1] == 0) {
    return param_2[1] == 0;
  }
  if (param_2[1] != 0) {
    uVar5 = *param_1;
    uVar6 = param_1[2];
    uVar2 = param_1[3];
    uVar7 = param_1[4];
    uVar1 = param_2[2];
    uVar3 = param_2[3];
    uVar8 = param_2[4];
    if ((((uVar5 == *param_2 && param_1[1] == param_2[1]) ||
         (func_0x000107c605b8(), (uVar5 & 1) != 0)) &&
        ((uVar6 == uVar1 && uVar2 == uVar3 ||
         (func_0x000107c605b8(uVar6,uVar2,uVar1,uVar3,0), (uVar6 & 1) != 0)))) &&
       (FUN_102a43218(uVar7,uVar8), (uVar7 & 1) != 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    return bVar4;
  }
  return false;
}



/* Entry: 102a4355c; end: 102a43883;  */

void FUN_102a4355c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  code *param_5,code *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = (uint)param_3;
  uVar3 = param_2;
  (*param_4)();
  uVar4 = uVar3;
  uVar9 = param_3;
  (*param_5)();
  if ((uVar8 & 0xff) != 1) {
    func_0x000107c61434(uVar9);
    uVar5 = 10;
    uVar10 = 0xe100000000000000;
    func_0x000107c5fb78(10,0xe100000000000000);
    func_0x000102a49a40();
    lVar6 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    puVar1 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    puVar2 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar6 + 0x38) = puVar1;
    *(undefined **)(lVar6 + 0x40) = puVar2;
    *(undefined8 *)(lVar6 + 0x20) = param_2;
    uVar11 = uVar10;
    func_0x000107c5fb00(uVar5,uVar10,lVar6);
    func_0x000107c6142c(uVar10);
    func_0x000107c61434(uVar9);
    func_0x000107c5fb78(uVar5,uVar11);
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar9);
  }
  lVar6 = 0x112ee4468;
  func_0x0001000285a8(0x112ee4468,&UNK_10db0f6c0);
  uVar11 = 0x50;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 4;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  lVar7 = lVar6;
  (*param_6)();
  *(long *)(lVar6 + 0x20) = lVar7;
  *(undefined8 *)(lVar6 + 0x28) = uVar11;
  *(undefined1 *)(lVar6 + 0x30) = 1;
  func_0x000102a49bdc();
  *(long *)(lVar6 + 0x38) = lVar7;
  *(undefined8 *)(lVar6 + 0x40) = uVar11;
  *(undefined1 *)(lVar6 + 0x48) = 0;
  *param_1 = uVar3;
  param_1[1] = param_3;
  param_1[2] = uVar4;
  param_1[3] = uVar9;
  param_1[4] = lVar6;
  return;
}



/* Entry: 102a43884; end: 102a43887;  */

void FUN_102a43884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee4460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0f580;
  func_0x000107c61520(&UNK_10db0f580,&UNK_11058bbf8);
  puRam0000000112ee4460 = puVar1;
  return;
}



/* Entry: 102a43888; end: 102a438c7;  */

void FUN_102a43888(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee4460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0f580;
  func_0x000107c61520(&UNK_10db0f580,&UNK_11058bbf8);
  puRam0000000112ee4460 = puVar1;
  return;
}



/* Entry: 102a438c8; end: 102a438f7;  */

/* WARNING: Possible PIC construction at 0x000102a438dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a438e0) */

void FUN_102a438c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a438f8; end: 102a439cf;  */

undefined8 * FUN_102a438f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102a439d0; end: 102a43a23;  */

undefined8 * FUN_102a439d0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102a43a24; end: 102a43c2f;  */

int FUN_102a43a24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a43c30; end: 102a43c63;  */

undefined8 * FUN_102a43c30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102a43c64; end: 102a43cb7;  */

undefined8 * FUN_102a43c64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 102a43cb8; end: 102a43cf3;  */

undefined8 * FUN_102a43cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 102a43cf4; end: 102a43d8b;  */

int FUN_102a43cf4(int *param_1,int param_2)

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



/* Entry: 102a43d8c; end: 102a43dd3;  */

/* WARNING: Possible PIC construction at 0x000102a43dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a43db0) */

void FUN_102a43d8c(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102a43dd4; end: 102a43f67;  */

undefined8 * FUN_102a43dd4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    uVar2 = param_2[4];
    param_1[4] = uVar2;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  uVar4 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 102a43f68; end: 102a4401f;  */

undefined8 * FUN_102a43f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  if (uVar2 < 0xffffffff) {
    uVar1 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[1];
    if (uVar3 < 0xffffffff) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(param_1[3]);
      func_0x000107c6142c(param_1[4]);
      uVar1 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      param_1[4] = param_2[4];
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar3;
      func_0x000107c6142c(uVar2);
      param_1[2] = param_2[2];
      func_0x000107c6142c(param_1[3]);
      uVar1 = param_1[4];
      uVar4 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      func_0x000107c6142c(uVar1);
    }
  }
  return param_1;
}



/* Entry: 102a44020; end: 102a4415b;  */

int FUN_102a44020(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 102a4415c; end: 102a443d3;  */

/* WARNING: Removing unreachable block (ram,0x000102a4421c) */
/* WARNING: Removing unreachable block (ram,0x000102a441bc) */
/* WARNING: Removing unreachable block (ram,0x000102a4427c) */

void FUN_102a4415c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  lVar6 = -0x2fffffffffffffe5;
  FUN_102a44580(0xd00000000000001b,0x800000010f0e4930,1);
  lStack_a8 = 0;
  if (lVar6 != 0) {
    lStack_a8 = lVar6;
  }
  pcStack_a0 = (code *)0x0;
  if (lVar6 != 0) {
    pcStack_a0 = FUN_102a443d4;
  }
  uStack_98 = 0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  lVar6 = -0x2fffffffffffffde;
  FUN_102a44580(0xd000000000000022,0x800000010f0e4950,1);
  lStack_90 = 0;
  if (lVar6 != 0) {
    lStack_90 = lVar6;
  }
  pcStack_88 = (code *)0x0;
  if (lVar6 != 0) {
    pcStack_88 = FUN_102a443e8;
  }
  uStack_80 = 0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  lVar6 = -0x2fffffffffffffdc;
  FUN_102a44580(0xd000000000000024,0x800000010f0e4980,1);
  if (lVar6 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = 0x102a44410;
  }
  uVar12 = 0;
  lStack_78 = lVar6;
  uStack_68 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar12;
    if (uVar12 < 4) {
      uVar1 = 3;
    }
    plVar4 = &lStack_a8 + uVar12 * 3;
    do {
      plVar11 = plVar4;
      if (uVar12 == 3) {
        uVar10 = 0x112ee4480;
        func_0x0001000285a8(0x112ee4480,&UNK_10db0f7b0);
        func_0x000107c61408(&lStack_a8,3,uVar10);
        puRam0000000112ee4478 = puVar9;
        return;
      }
      uVar12 = uVar12 + 1;
      if (uVar1 + 1 == uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102a443d4);
        (*pcVar5)();
      }
      lVar6 = *plVar11;
      plVar4 = plVar11 + 3;
    } while (lVar6 == 0);
    lVar2 = plVar11[1];
    lVar3 = plVar11[2];
    func_0x000107c61174();
    func_0x000107c6157c(lVar3);
    puVar7 = puVar9;
    func_0x000107c61558();
    puVar8 = puVar9;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_102a4465c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_102a4465c(puVar9,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(long *)(puVar9 + uVar1 * 0x18 + 0x20) = lVar6;
    *(long *)(puVar9 + uVar1 * 0x18 + 0x28) = lVar2;
    *(long *)(puVar9 + uVar1 * 0x18 + 0x30) = lVar3;
  } while( true );
}



/* Entry: 102a443d4; end: 102a443e7;  */

undefined1  [16] FUN_102a443d4(undefined8 ***param_1,undefined8 ***param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined1 auVar3 [16];
  undefined8 **ppuStack_48;
  ulong uStack_40;
  
  pppuVar1 = param_1;
  pppuVar2 = param_1;
  func_0x000107c4d928();
  if (1 < (long)pppuVar1) {
    func_0x000107c4f88c();
    pppuVar1 = param_2;
    func_0x000107c5ff18();
    if (((uint)pppuVar1 & 0xff) != 1) {
      func_0x000107c5fbd8();
      if (((ulong)param_1 ^ (ulong)pppuVar2) >> 0xe != 0) {
        if ((param_3 >> 0x3c & 1) == 0) {
          if ((param_3 >> 0x3d & 1) == 0) {
            if (((ulong)param_2 >> 0x3c & 1) == 0) {
              func_0x000107c60358(param_2,param_3);
              pppuVar1 = param_2;
            }
            else {
              pppuVar1 = (undefined8 ***)((param_3 & 0xfffffffffffffff) + 0x20);
            }
          }
          else {
            uStack_40 = param_3 & 0xffffffffffffff;
            pppuVar1 = &ppuStack_48;
            ppuStack_48 = param_2;
          }
          pppuVar2 = param_1;
          func_0x000101a452e8();
          param_1 = pppuVar1;
        }
        else {
          func_0x000101a44f44(param_1,pppuVar2,param_2,param_3,10);
        }
        func_0x000107c6142c(param_3);
        pppuVar1 = (undefined8 ***)0x0;
        if (((uint)pppuVar2 & 0xff) != 1) {
          pppuVar1 = param_1;
        }
        goto LAB_102a44964;
      }
      func_0x000107c6142c(param_3);
    }
  }
  pppuVar2 = (undefined8 ***)0x1;
  pppuVar1 = (undefined8 ***)0x0;
LAB_102a44964:
  auVar3._8_8_ = pppuVar2;
  auVar3._0_8_ = pppuVar1;
  return auVar3;
}



/* Entry: 102a443e8; end: 102a44437;  */

void FUN_102a443e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102a4487c(1,param_1,param_2,param_3);
  return;
}



/* Entry: 102a44438; end: 102a4457b;  */

void FUN_102a44438(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a44578);
    (*pcVar1)();
  }
  uVar8 = (uint)(param_4 >> 0x20);
  uVar7 = uVar8 >> 0x1e;
  uVar6 = param_3 >> 0x20;
  if (uVar8 >> 0x1e < 2) {
    uVar4 = param_4 >> 0x30 & 0xff;
    if (uVar7 != 0) {
      uVar4 = uVar6;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = (long)(int)param_3;
    }
  }
  else if (uVar7 == 2) {
    uVar4 = *(ulong *)(param_3 + 0x18);
    uVar5 = *(ulong *)(param_3 + 0x10);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
  }
  uVar2 = uVar5;
  func_0x000101287c80(uVar5,uVar4,param_3,param_4);
  uVar8 = uVar8 >> 0x1e;
  if ((param_2 == 0) || (param_2 <= uVar2)) {
    func_0x000101287c1c(uVar5,param_2,param_3,param_4);
    lVar3 = 0;
    if (uVar8 < 2) {
      uVar6 = uVar5;
      if (uVar8 != 0) goto LAB_102a44524;
    }
    else if (uVar8 != 3) goto LAB_102a44518;
  }
  else if (uVar8 < 2) {
    if (uVar7 == 0) {
      lVar3 = 0;
      uVar5 = param_4 >> 0x30 & 0xff;
      goto LAB_102a44530;
    }
LAB_102a44524:
    lVar3 = (long)(int)param_3;
    uVar5 = uVar6;
  }
  else {
    if (uVar7 != 2) {
      uVar5 = 0;
      lVar3 = 0;
      goto LAB_102a44530;
    }
    uVar5 = *(ulong *)(param_3 + 0x18);
LAB_102a44518:
    lVar3 = *(long *)(param_3 + 0x10);
  }
  if ((long)uVar5 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4457c);
    (*pcVar1)();
  }
LAB_102a44530:
  func_0x000107c5ee18(lVar3,uVar5,param_3,param_4);
  func_0x00010006c090(param_3,param_4);
  *param_1 = lVar3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 102a4457c; end: 102a4457f;  */

long * FUN_102a4457c(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  uint uVar16;
  long extraout_x8;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long alStack_130 [4];
  long *aplStack_110 [2];
  undefined1 **ppuStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar18 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar13 = (long *)((long)aplStack_110 + lVar18);
  plVar17 = (long *)param_1[3];
  if (0xe < (ulong)plVar17 >> 0x3c) goto LAB_102a44e84;
  param_1 = (long *)param_1[2];
  uVar2 = (uint)((ulong)plVar17 >> 0x20);
  uVar16 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar16 != 0) {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) goto LAB_102a44e84;
      goto LAB_102a44a9c;
    }
    if (((ulong)plVar17 & 0xff000000000000) == 0) goto LAB_102a44a7c;
  }
  else {
    if (uVar16 != 2) {
LAB_102a44a7c:
      func_0x0001000b44c0(param_1,plVar17);
      goto LAB_102a44e84;
    }
    if (param_1[2] == param_1[3]) goto LAB_102a44e84;
LAB_102a44a9c:
    func_0x00010006c00c(param_1,plVar17);
  }
  func_0x00010006c00c(param_1,plVar17);
  puVar6 = (undefined1 *)0x1000;
  FUN_102a44438(&puStack_80,0x1000,param_1,plVar17);
  uVar2 = (uint)((ulong)puStack_78 >> 0x20);
  uVar16 = uVar2 >> 0x1e;
  aplStack_110[0] = param_1;
  aplStack_110[1] = plVar17;
  if (uVar2 >> 0x1e < 2) {
    if (uVar16 != 0) {
      lVar20 = (long)(int)puStack_80;
      puVar9 = (undefined1 *)(((long)puStack_80 >> 0x20) - lVar20);
      if ((long)puStack_80 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f34);
        (*pcVar4)();
      }
      func_0x000107c5ec30();
      if (puVar6 != (undefined1 *)0x0) {
        puVar14 = puVar6;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar20,(long)puVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f3c);
          (*pcVar4)();
        }
        puVar6 = puVar6 + (lVar20 - (long)puVar14);
        goto LAB_102a44bc8;
      }
      func_0x000107c5ec38();
LAB_102a44c04:
      puVar6 = (undefined1 *)0x0;
      puVar14 = (undefined1 *)0x0;
      goto LAB_102a44c0c;
    }
    uStack_a8 = SUB81(puStack_80,0);
    uStack_a7 = (undefined1)((ulong)puStack_80 >> 8);
    uStack_a6 = (undefined1)((ulong)puStack_80 >> 0x10);
    uStack_a5 = (undefined1)((ulong)puStack_80 >> 0x18);
    uStack_a4 = (undefined1)((ulong)puStack_80 >> 0x20);
    uStack_a3 = (undefined1)((ulong)puStack_80 >> 0x28);
    uStack_a2 = (undefined1)((ulong)puStack_80 >> 0x30);
    uStack_a1 = (undefined1)((ulong)puStack_80 >> 0x38);
    uStack_a0 = SUB81(puStack_78,0);
    uStack_9f = (undefined1)((ulong)puStack_78 >> 8);
    uStack_9e = (undefined1)((ulong)puStack_78 >> 0x10);
    uStack_9d = (undefined1)((ulong)puStack_78 >> 0x18);
    uStack_9c = (undefined1)((ulong)puStack_78 >> 0x20);
    puVar14 = (undefined1 *)((ulong)puStack_78 >> 0x30 & 0xff);
    uStack_9b = (undefined1)((ulong)puStack_78 >> 0x28);
LAB_102a44bf4:
    puVar6 = &uStack_a8;
    func_0x000107c5fb50();
LAB_102a44d1c:
    func_0x00010006c090(puStack_80,puStack_78);
    puVar9 = puStack_80;
  }
  else {
    if (uVar16 != 2) {
      uStack_a0 = 0;
      uStack_9f = 0;
      uStack_9e = 0;
      uStack_9d = 0;
      uStack_9c = 0;
      uStack_9b = 0;
      uStack_a8 = 0;
      uStack_a7 = 0;
      uStack_a6 = 0;
      uStack_a5 = 0;
      uStack_a4 = 0;
      uStack_a3 = 0;
      uStack_a2 = 0;
      uStack_a1 = 0;
      puVar14 = (undefined1 *)0x0;
      goto LAB_102a44bf4;
    }
    lVar20 = *(long *)(puStack_80 + 0x10);
    lVar1 = *(long *)(puStack_80 + 0x18);
    func_0x000107c5ec30();
    puVar14 = puVar6;
    if (puVar6 != (undefined1 *)0x0) {
      func_0x000107c5ec3c();
      if (SBORROW8(lVar20,(long)puVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f38);
        (*pcVar4)();
      }
      puVar6 = puVar6 + (lVar20 - (long)puVar14);
    }
    puVar9 = (undefined1 *)(lVar1 - lVar20);
    if (SBORROW8(lVar1,lVar20)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44b94);
      (*pcVar4)();
    }
LAB_102a44bc8:
    func_0x000107c5ec38();
    if (puVar6 == (undefined1 *)0x0) goto LAB_102a44c04;
    if ((long)puVar9 <= (long)puVar14) {
      puVar14 = puVar9;
    }
LAB_102a44c0c:
    func_0x000107c5fb50();
    if (puVar14 != (undefined1 *)0x0) goto LAB_102a44d1c;
    puStack_b8 = puStack_80;
    puStack_b0 = puStack_78;
    func_0x00010006c00c(puStack_80,puStack_78);
    uVar21 = 0x112dd0c48;
    func_0x0001000285a8(0x112dd0c48,&UNK_10dca5e20);
    ppuVar7 = &puStack_e0;
    func_0x000107c6147c(ppuVar7,&puStack_b8,PTR___s10Foundation4DataVN_110350ae0,uVar21,6);
    if (((ulong)ppuVar7 & 1) == 0) {
      uStack_c0 = 0;
      puStack_d8 = (undefined1 *)0x0;
      puStack_e0 = (undefined1 *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      FUN_102a4535c(&puStack_e0);
LAB_102a44d08:
      puVar6 = puStack_80;
      puVar14 = puStack_78;
      func_0x0001018e4f60();
      goto LAB_102a44d1c;
    }
    func_0x0001018e61f8(&puStack_e0,&uStack_a8);
    uVar21 = uStack_88;
    uVar8 = uStack_90;
    func_0x0001000a8868(&uStack_a8,uStack_90);
    func_0x000107c604a4(uVar8,uVar21);
    if ((uVar8 & 1) == 0) {
      func_0x0001000834e4(&uStack_a8);
      goto LAB_102a44d08;
    }
    func_0x0001000a8868(&uStack_a8,uStack_90);
    func_0x000107c604a0(&puStack_e0,&UNK_1018e4fc8,0,PTR___sSSN_11034da80,uStack_90,uStack_88);
    func_0x00010006c090(puStack_80,puStack_78);
    puVar9 = &uStack_a8;
    func_0x0001000834e4(puVar9);
    puVar6 = puStack_e0;
    puVar14 = puStack_d8;
  }
  uStack_a8 = SUB81(puVar6,0);
  uStack_a7 = (undefined1)((ulong)puVar6 >> 8);
  uStack_a6 = (undefined1)((ulong)puVar6 >> 0x10);
  uStack_a5 = (undefined1)((ulong)puVar6 >> 0x18);
  uStack_a4 = (undefined1)((ulong)puVar6 >> 0x20);
  uStack_a3 = (undefined1)((ulong)puVar6 >> 0x28);
  uStack_a2 = (undefined1)((ulong)puVar6 >> 0x30);
  uStack_a1 = (undefined1)((ulong)puVar6 >> 0x38);
  uStack_a0 = SUB81(puVar14,0);
  uStack_9f = (undefined1)((ulong)puVar14 >> 8);
  uStack_9e = (undefined1)((ulong)puVar14 >> 0x10);
  uStack_9d = (undefined1)((ulong)puVar14 >> 0x18);
  uStack_9c = (undefined1)((ulong)puVar14 >> 0x20);
  uStack_9b = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_9a = (undefined2)((ulong)puVar14 >> 0x30);
  func_0x000107c5eb88(plVar13);
  func_0x000100e8b654();
  puVar3 = PTR___sSSN_11034da80;
  plVar17 = plVar13;
  param_1 = (long *)PTR___sSSN_11034da80;
  func_0x000107c601f0(plVar13,PTR___sSSN_11034da80,puVar9);
  (**(code **)(lVar22 + 8))(plVar13,lVar5);
  func_0x000107c6142c(puVar14);
  puStack_e0 = (undefined1 *)0xf;
  uStack_a8 = SUB81(plVar17,0);
  uStack_a7 = (undefined1)((ulong)plVar17 >> 8);
  uStack_a6 = (undefined1)((ulong)plVar17 >> 0x10);
  uStack_a5 = (undefined1)((ulong)plVar17 >> 0x18);
  uStack_a4 = (undefined1)((ulong)plVar17 >> 0x20);
  uStack_a3 = (undefined1)((ulong)plVar17 >> 0x28);
  uStack_a2 = (undefined1)((ulong)plVar17 >> 0x30);
  uStack_a1 = (undefined1)((ulong)plVar17 >> 0x38);
  uStack_a0 = SUB81(param_1,0);
  uStack_9f = (undefined1)((ulong)param_1 >> 8);
  uStack_9e = (undefined1)((ulong)param_1 >> 0x10);
  uStack_9d = (undefined1)((ulong)param_1 >> 0x18);
  uStack_9c = (undefined1)((ulong)param_1 >> 0x20);
  uStack_9b = (undefined1)((ulong)param_1 >> 0x28);
  uStack_9a = (undefined2)((ulong)param_1 >> 0x30);
  plStack_f8 = plVar17;
  plStack_f0 = param_1;
  func_0x000107c61434(param_1);
  uVar21 = 0x112d7eee0;
  func_0x0001000285a8(0x112d7eee0,&UNK_10dccb030);
  uVar10 = uVar21;
  func_0x00010142b1dc();
  ppuVar7 = &puStack_e0;
  func_0x000107c60148(ppuVar7,&uStack_a8,uVar21,puVar3,uVar10,puVar9);
  ppuStack_100 = ppuVar7;
  if (lRam0000000112ee4470 != -1) {
    func_0x000107c61568(0x112ee4470,FUN_102a4415c);
  }
  lVar5 = lRam0000000112ee4478;
  plVar13 = *(long **)(lRam0000000112ee4478 + 0x10);
  if (plVar13 != (long *)0x0) {
    param_1 = (long *)0x0;
    puVar19 = (undefined8 *)(lRam0000000112ee4478 + 0x30);
    do {
      if (*(long **)(lVar5 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f18);
        (*pcVar4)();
      }
      plVar11 = (long *)puVar19[-2];
      pcVar4 = (code *)puVar19[-1];
      uVar21 = *puVar19;
      func_0x000107c61174();
      func_0x000107c6157c(uVar21);
      plVar17 = plStack_f8;
      func_0x000107c5fadc(plStack_f8,plStack_f0);
      plVar12 = plVar11;
      func_0x000107c43630();
      func_0x000107c61180();
      func_0x000107c61170(plVar17);
      plVar17 = plStack_f0;
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12;
        plVar15 = plStack_f8;
        (*pcVar4)(plVar12,plStack_f8,plStack_f0);
        func_0x000107c6142c(plVar17);
        func_0x000107c61574(uVar21);
        func_0x000107c61170(plVar11);
        func_0x000107c61170(plVar12);
        func_0x0001000b44c0(aplStack_110[0],aplStack_110[1]);
        param_1 = plVar13;
        goto LAB_102a44e8c;
      }
      func_0x000107c61574(uVar21);
      func_0x000107c61170(plVar11);
      param_1 = (long *)((long)param_1 + 1);
      puVar19 = puVar19 + 3;
    } while (plVar13 != param_1);
  }
  func_0x0001000b44c0(aplStack_110[0],aplStack_110[1]);
  func_0x000107c6142c(plStack_f0);
  plVar17 = plVar13;
LAB_102a44e84:
  plVar13 = (long *)0x0;
  plVar15 = (long *)0xc0;
LAB_102a44e8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(long **)((long)alStack_130 + lVar18) = param_1;
    *(long **)((long)alStack_130 + lVar18 + 8) = plVar17;
    *(undefined1 **)((long)alStack_130 + lVar18 + 0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_130 + lVar18 + 0x18) = FUN_102a44f40;
    lVar18 = *plVar15;
    *plVar13 = lVar18;
    func_0x000107c6157c(lVar18);
    return (long *)(lVar18 + 0x10);
  }
  return plVar13;
}



/* Entry: 102a44580; end: 102a4465b;  */

undefined * FUN_102a44580(ulong param_1,ulong param_2,undefined *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *unaff_x20;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar6 = param_1;
  func_0x000107c47dcc();
  func_0x000107c61170(param_1);
  uVar3 = 0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar8 = uVar9;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)(param_3 + 0x18) >> 1;
    if ((long)uVar8 < (long)uVar9) {
      if ((long)(uVar8 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a44778);
        (*pcVar2)();
      }
      uVar8 = *(ulong *)(param_3 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar8 <= (long)uVar9) {
        uVar8 = uVar9;
      }
    }
  }
  uVar9 = *(ulong *)(param_3 + 0x10);
  if ((long)uVar8 <= (long)uVar9) {
    uVar8 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    puVar4 = (undefined *)0x112ee4488;
    func_0x0001000285a8(0x112ee4488,&UNK_10db0f7b8);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x18) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_3 + 0x20;
  if ((uVar3 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar9,&UNK_11058bf20);
  }
  else {
    if (puVar4 != param_3 || puVar1 + uVar9 * 0x18 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar9 * 0x18);
    }
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  func_0x000107c6142c(param_3);
  return puVar4;
}



/* Entry: 102a4465c; end: 102a44777;  */

undefined * FUN_102a4465c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a44778);
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
    puVar3 = (undefined *)0x112ee4488;
    func_0x0001000285a8(0x112ee4488,&UNK_10db0f7b8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11058bf20);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102a44778; end: 102a4487b;  */

undefined8 FUN_102a44778(long param_1,uint param_2,long param_3,byte param_4)

{
  uint uVar1;
  
  uVar1 = param_2 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      if (param_4 < 0x40) {
        if ((param_2 & 0xff) == 1) {
          if (param_4 == 1) {
            return 1;
          }
        }
        else if ((param_4 != 1) && (param_1 == param_3)) {
          return 1;
        }
      }
    }
    else if ((param_4 & 0xc0) == 0x40) {
      if ((param_2 & 0x3f) == 1) {
        if ((param_4 & 0x3f) == 1) {
          return 1;
        }
      }
      else if (((param_4 & 0x3f) != 1) && (param_1 == param_3)) {
        return 1;
      }
    }
  }
  else if (uVar1 == 2) {
    if ((char)param_4 < -0x40) {
      if ((param_2 & 0x3f) == 1) {
        if ((param_4 & 0x3f) == 1) {
          return 1;
        }
      }
      else if (((param_4 & 0x3f) != 1) && (param_1 == param_3)) {
        return 1;
      }
    }
  }
  else if (((0xbf < param_4) && (param_3 == 0)) && (param_4 == 0xc0)) {
    return 1;
  }
  return 0;
}



/* Entry: 102a4487c; end: 102a449c7;  */

undefined1  [16]
FUN_102a4487c(long param_1,undefined8 ***param_2,undefined8 ***param_3,ulong param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined1 auVar3 [16];
  undefined8 **ppuStack_48;
  ulong uStack_40;
  
  pppuVar1 = param_2;
  pppuVar2 = param_2;
  func_0x000107c4d928();
  if (param_1 < (long)pppuVar1) {
    func_0x000107c4f88c();
    pppuVar1 = param_3;
    func_0x000107c5ff18();
    if (((uint)pppuVar1 & 0xff) != 1) {
      func_0x000107c5fbd8();
      if (((ulong)param_2 ^ (ulong)pppuVar2) >> 0xe != 0) {
        if ((param_4 >> 0x3c & 1) == 0) {
          if ((param_4 >> 0x3d & 1) == 0) {
            if (((ulong)param_3 >> 0x3c & 1) == 0) {
              func_0x000107c60358(param_3,param_4);
              pppuVar1 = param_3;
            }
            else {
              pppuVar1 = (undefined8 ***)((param_4 & 0xfffffffffffffff) + 0x20);
            }
          }
          else {
            uStack_40 = param_4 & 0xffffffffffffff;
            pppuVar1 = &ppuStack_48;
            ppuStack_48 = param_3;
          }
          pppuVar2 = param_2;
          func_0x000101a452e8();
          param_2 = pppuVar1;
        }
        else {
          func_0x000101a44f44(param_2,pppuVar2,param_3,param_4,10);
        }
        func_0x000107c6142c(param_4);
        pppuVar1 = (undefined8 ***)0x0;
        if (((uint)pppuVar2 & 0xff) != 1) {
          pppuVar1 = param_2;
        }
        goto LAB_102a44964;
      }
      func_0x000107c6142c(param_4);
    }
  }
  pppuVar2 = (undefined8 ***)0x1;
  pppuVar1 = (undefined8 ***)0x0;
LAB_102a44964:
  auVar3._8_8_ = pppuVar2;
  auVar3._0_8_ = pppuVar1;
  return auVar3;
}



/* Entry: 102a449c8; end: 102a44f3f;  */

long * FUN_102a449c8(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  uint uVar16;
  long extraout_x8;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long alStack_130 [4];
  long *aplStack_110 [2];
  undefined1 **ppuStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar18 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar13 = (long *)((long)aplStack_110 + lVar18);
  plVar17 = (long *)param_1[3];
  if (0xe < (ulong)plVar17 >> 0x3c) goto LAB_102a44e84;
  param_1 = (long *)param_1[2];
  uVar2 = (uint)((ulong)plVar17 >> 0x20);
  uVar16 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar16 != 0) {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) goto LAB_102a44e84;
      goto LAB_102a44a9c;
    }
    if (((ulong)plVar17 & 0xff000000000000) == 0) goto LAB_102a44a7c;
  }
  else {
    if (uVar16 != 2) {
LAB_102a44a7c:
      func_0x0001000b44c0(param_1,plVar17);
      goto LAB_102a44e84;
    }
    if (param_1[2] == param_1[3]) goto LAB_102a44e84;
LAB_102a44a9c:
    func_0x00010006c00c(param_1,plVar17);
  }
  func_0x00010006c00c(param_1,plVar17);
  puVar6 = (undefined1 *)0x1000;
  FUN_102a44438(&puStack_80,0x1000,param_1,plVar17);
  uVar2 = (uint)((ulong)puStack_78 >> 0x20);
  uVar16 = uVar2 >> 0x1e;
  aplStack_110[0] = param_1;
  aplStack_110[1] = plVar17;
  if (uVar2 >> 0x1e < 2) {
    if (uVar16 != 0) {
      lVar20 = (long)(int)puStack_80;
      puVar9 = (undefined1 *)(((long)puStack_80 >> 0x20) - lVar20);
      if ((long)puStack_80 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f34);
        (*pcVar4)();
      }
      func_0x000107c5ec30();
      if (puVar6 != (undefined1 *)0x0) {
        puVar14 = puVar6;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar20,(long)puVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f3c);
          (*pcVar4)();
        }
        puVar6 = puVar6 + (lVar20 - (long)puVar14);
        goto LAB_102a44bc8;
      }
      func_0x000107c5ec38();
LAB_102a44c04:
      puVar6 = (undefined1 *)0x0;
      puVar14 = (undefined1 *)0x0;
      goto LAB_102a44c0c;
    }
    uStack_a8 = SUB81(puStack_80,0);
    uStack_a7 = (undefined1)((ulong)puStack_80 >> 8);
    uStack_a6 = (undefined1)((ulong)puStack_80 >> 0x10);
    uStack_a5 = (undefined1)((ulong)puStack_80 >> 0x18);
    uStack_a4 = (undefined1)((ulong)puStack_80 >> 0x20);
    uStack_a3 = (undefined1)((ulong)puStack_80 >> 0x28);
    uStack_a2 = (undefined1)((ulong)puStack_80 >> 0x30);
    uStack_a1 = (undefined1)((ulong)puStack_80 >> 0x38);
    uStack_a0 = SUB81(puStack_78,0);
    uStack_9f = (undefined1)((ulong)puStack_78 >> 8);
    uStack_9e = (undefined1)((ulong)puStack_78 >> 0x10);
    uStack_9d = (undefined1)((ulong)puStack_78 >> 0x18);
    uStack_9c = (undefined1)((ulong)puStack_78 >> 0x20);
    puVar14 = (undefined1 *)((ulong)puStack_78 >> 0x30 & 0xff);
    uStack_9b = (undefined1)((ulong)puStack_78 >> 0x28);
LAB_102a44bf4:
    puVar6 = &uStack_a8;
    func_0x000107c5fb50();
LAB_102a44d1c:
    func_0x00010006c090(puStack_80,puStack_78);
    puVar9 = puStack_80;
  }
  else {
    if (uVar16 != 2) {
      uStack_a0 = 0;
      uStack_9f = 0;
      uStack_9e = 0;
      uStack_9d = 0;
      uStack_9c = 0;
      uStack_9b = 0;
      uStack_a8 = 0;
      uStack_a7 = 0;
      uStack_a6 = 0;
      uStack_a5 = 0;
      uStack_a4 = 0;
      uStack_a3 = 0;
      uStack_a2 = 0;
      uStack_a1 = 0;
      puVar14 = (undefined1 *)0x0;
      goto LAB_102a44bf4;
    }
    lVar20 = *(long *)(puStack_80 + 0x10);
    lVar1 = *(long *)(puStack_80 + 0x18);
    func_0x000107c5ec30();
    puVar14 = puVar6;
    if (puVar6 != (undefined1 *)0x0) {
      func_0x000107c5ec3c();
      if (SBORROW8(lVar20,(long)puVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f38);
        (*pcVar4)();
      }
      puVar6 = puVar6 + (lVar20 - (long)puVar14);
    }
    puVar9 = (undefined1 *)(lVar1 - lVar20);
    if (SBORROW8(lVar1,lVar20)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44b94);
      (*pcVar4)();
    }
LAB_102a44bc8:
    func_0x000107c5ec38();
    if (puVar6 == (undefined1 *)0x0) goto LAB_102a44c04;
    if ((long)puVar9 <= (long)puVar14) {
      puVar14 = puVar9;
    }
LAB_102a44c0c:
    func_0x000107c5fb50();
    if (puVar14 != (undefined1 *)0x0) goto LAB_102a44d1c;
    puStack_b8 = puStack_80;
    puStack_b0 = puStack_78;
    func_0x00010006c00c(puStack_80,puStack_78);
    uVar21 = 0x112dd0c48;
    func_0x0001000285a8(0x112dd0c48,&UNK_10dca5e20);
    ppuVar7 = &puStack_e0;
    func_0x000107c6147c(ppuVar7,&puStack_b8,PTR___s10Foundation4DataVN_110350ae0,uVar21,6);
    if (((ulong)ppuVar7 & 1) == 0) {
      uStack_c0 = 0;
      puStack_d8 = (undefined1 *)0x0;
      puStack_e0 = (undefined1 *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      FUN_102a4535c(&puStack_e0);
LAB_102a44d08:
      puVar6 = puStack_80;
      puVar14 = puStack_78;
      func_0x0001018e4f60();
      goto LAB_102a44d1c;
    }
    func_0x0001018e61f8(&puStack_e0,&uStack_a8);
    uVar21 = uStack_88;
    uVar8 = uStack_90;
    func_0x0001000a8868(&uStack_a8,uStack_90);
    func_0x000107c604a4(uVar8,uVar21);
    if ((uVar8 & 1) == 0) {
      func_0x0001000834e4(&uStack_a8);
      goto LAB_102a44d08;
    }
    func_0x0001000a8868(&uStack_a8,uStack_90);
    func_0x000107c604a0(&puStack_e0,&UNK_1018e4fc8,0,PTR___sSSN_11034da80,uStack_90,uStack_88);
    func_0x00010006c090(puStack_80,puStack_78);
    puVar9 = &uStack_a8;
    func_0x0001000834e4(puVar9);
    puVar6 = puStack_e0;
    puVar14 = puStack_d8;
  }
  uStack_a8 = SUB81(puVar6,0);
  uStack_a7 = (undefined1)((ulong)puVar6 >> 8);
  uStack_a6 = (undefined1)((ulong)puVar6 >> 0x10);
  uStack_a5 = (undefined1)((ulong)puVar6 >> 0x18);
  uStack_a4 = (undefined1)((ulong)puVar6 >> 0x20);
  uStack_a3 = (undefined1)((ulong)puVar6 >> 0x28);
  uStack_a2 = (undefined1)((ulong)puVar6 >> 0x30);
  uStack_a1 = (undefined1)((ulong)puVar6 >> 0x38);
  uStack_a0 = SUB81(puVar14,0);
  uStack_9f = (undefined1)((ulong)puVar14 >> 8);
  uStack_9e = (undefined1)((ulong)puVar14 >> 0x10);
  uStack_9d = (undefined1)((ulong)puVar14 >> 0x18);
  uStack_9c = (undefined1)((ulong)puVar14 >> 0x20);
  uStack_9b = (undefined1)((ulong)puVar14 >> 0x28);
  uStack_9a = (undefined2)((ulong)puVar14 >> 0x30);
  func_0x000107c5eb88(plVar13);
  func_0x000100e8b654();
  puVar3 = PTR___sSSN_11034da80;
  plVar17 = plVar13;
  param_1 = (long *)PTR___sSSN_11034da80;
  func_0x000107c601f0(plVar13,PTR___sSSN_11034da80,puVar9);
  (**(code **)(lVar22 + 8))(plVar13,lVar5);
  func_0x000107c6142c(puVar14);
  puStack_e0 = (undefined1 *)0xf;
  uStack_a8 = SUB81(plVar17,0);
  uStack_a7 = (undefined1)((ulong)plVar17 >> 8);
  uStack_a6 = (undefined1)((ulong)plVar17 >> 0x10);
  uStack_a5 = (undefined1)((ulong)plVar17 >> 0x18);
  uStack_a4 = (undefined1)((ulong)plVar17 >> 0x20);
  uStack_a3 = (undefined1)((ulong)plVar17 >> 0x28);
  uStack_a2 = (undefined1)((ulong)plVar17 >> 0x30);
  uStack_a1 = (undefined1)((ulong)plVar17 >> 0x38);
  uStack_a0 = SUB81(param_1,0);
  uStack_9f = (undefined1)((ulong)param_1 >> 8);
  uStack_9e = (undefined1)((ulong)param_1 >> 0x10);
  uStack_9d = (undefined1)((ulong)param_1 >> 0x18);
  uStack_9c = (undefined1)((ulong)param_1 >> 0x20);
  uStack_9b = (undefined1)((ulong)param_1 >> 0x28);
  uStack_9a = (undefined2)((ulong)param_1 >> 0x30);
  plStack_f8 = plVar17;
  plStack_f0 = param_1;
  func_0x000107c61434(param_1);
  uVar21 = 0x112d7eee0;
  func_0x0001000285a8(0x112d7eee0,&UNK_10dccb030);
  uVar10 = uVar21;
  func_0x00010142b1dc();
  ppuVar7 = &puStack_e0;
  func_0x000107c60148(ppuVar7,&uStack_a8,uVar21,puVar3,uVar10,puVar9);
  ppuStack_100 = ppuVar7;
  if (lRam0000000112ee4470 != -1) {
    func_0x000107c61568(0x112ee4470,FUN_102a4415c);
  }
  lVar5 = lRam0000000112ee4478;
  plVar13 = *(long **)(lRam0000000112ee4478 + 0x10);
  if (plVar13 != (long *)0x0) {
    param_1 = (long *)0x0;
    puVar19 = (undefined8 *)(lRam0000000112ee4478 + 0x30);
    do {
      if (*(long **)(lVar5 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a44f18);
        (*pcVar4)();
      }
      plVar11 = (long *)puVar19[-2];
      pcVar4 = (code *)puVar19[-1];
      uVar21 = *puVar19;
      func_0x000107c61174();
      func_0x000107c6157c(uVar21);
      plVar17 = plStack_f8;
      func_0x000107c5fadc(plStack_f8,plStack_f0);
      plVar12 = plVar11;
      func_0x000107c43630();
      func_0x000107c61180();
      func_0x000107c61170(plVar17);
      plVar17 = plStack_f0;
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12;
        plVar15 = plStack_f8;
        (*pcVar4)(plVar12,plStack_f8,plStack_f0);
        func_0x000107c6142c(plVar17);
        func_0x000107c61574(uVar21);
        func_0x000107c61170(plVar11);
        func_0x000107c61170(plVar12);
        func_0x0001000b44c0(aplStack_110[0],aplStack_110[1]);
        param_1 = plVar13;
        goto LAB_102a44e8c;
      }
      func_0x000107c61574(uVar21);
      func_0x000107c61170(plVar11);
      param_1 = (long *)((long)param_1 + 1);
      puVar19 = puVar19 + 3;
    } while (plVar13 != param_1);
  }
  func_0x0001000b44c0(aplStack_110[0],aplStack_110[1]);
  func_0x000107c6142c(plStack_f0);
  plVar17 = plVar13;
LAB_102a44e84:
  plVar13 = (long *)0x0;
  plVar15 = (long *)0xc0;
LAB_102a44e8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(long **)((long)alStack_130 + lVar18) = param_1;
    *(long **)((long)alStack_130 + lVar18 + 8) = plVar17;
    *(undefined1 **)((long)alStack_130 + lVar18 + 0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_130 + lVar18 + 0x18) = FUN_102a44f40;
    lVar18 = *plVar15;
    *plVar13 = lVar18;
    func_0x000107c6157c(lVar18);
    return (long *)(lVar18 + 0x10);
  }
  return plVar13;
}



/* Entry: 102a44f40; end: 102a44fa3;  */

long FUN_102a44f40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a44fa4; end: 102a45173;  */

undefined8 * FUN_102a44fa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
  }
  uVar1 = param_2[4];
  func_0x000107c614b0(uVar1);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 102a45174; end: 102a4535b;  */

int FUN_102a45174(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102a4535c; end: 102a453cb;  */

undefined8 FUN_102a4535c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dd0c50;
  func_0x0001000285a8(0x112dd0c50,&UNK_10d9920d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102a453cc; end: 102a4542b;  */

undefined8 * FUN_102a453cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 102a4542c; end: 102a4546f;  */

undefined8 * FUN_102a4542c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar2 = param_2[2];
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}


