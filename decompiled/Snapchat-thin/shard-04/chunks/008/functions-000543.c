/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039129e0; end: 103912a3f;  */

void FUN_1039129e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103912a40; end: 103912a4b;  */

void FUN_103912a40(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5648c(uVar3);
  func_0x000107c40c4c();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5ee94(puVar4);
    func_0x000107c61170(param_2);
    (**(code **)(lVar5 + 0x20))((long)puVar4 - extraout_x12,puVar4,lVar2);
    func_0x000107c5ee8c();
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103911478);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10391147c);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103911480);
      (*pcVar1)();
    }
    func_0x000107c53ac8(uVar3);
    (**(code **)(lVar5 + 8))((long)puVar4 - extraout_x12,lVar2);
  }
  return;
}



/* Entry: 103912a4c; end: 103912ae7;  */

void FUN_103912a4c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c45078();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar4 = *puVar1;
  *puVar1 = puVar2;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 103912ae8; end: 103912aeb;  */

void FUN_103912ae8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103912aec; end: 103912b17;  */

void FUN_103912aec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103912b18; end: 103912b27;  */

void FUN_103912b18(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 103912b28; end: 103912e2b;  */

void FUN_103912b28(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar15 = *param_2;
  if (uVar15 == 0) goto LAB_103912e04;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = uVar15;
  func_0x000107c615f0();
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar5 = uVar14;
  FUN_1039132cc();
  func_0x000107c61170(uVar14);
  if (uVar5 != 0) {
    if (uVar5 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      if (uVar14 == 0) goto LAB_103912d2c;
LAB_103912b9c:
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_103035c00(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103912e2c);
        (*pcVar3)();
      }
      if ((uVar5 & 0xc000000000000001) == 0) {
        puVar17 = (undefined8 *)(uVar5 + 0x20);
        do {
          puVar9 = puStack_90;
          uVar4 = (undefined4)*puVar17;
          func_0x000107c4e920();
          uVar16 = *(ulong *)(puVar9 + 0x10);
          puStack_90 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar16) {
            FUN_103035c00(1 < *(ulong *)(puVar9 + 0x18),uVar16 + 1,1);
          }
          *(ulong *)(puStack_90 + 0x10) = uVar16 + 1;
          *(undefined4 *)(puStack_90 + uVar16 * 4 + 0x20) = uVar4;
          uVar14 = uVar14 - 1;
          puVar17 = puVar17 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar16 = 0;
        do {
          puVar9 = puStack_90;
          uVar6 = uVar16;
          FUN_10391180c(uVar16,uVar5,&PTR_PTR_1126b25d0,0x112d55598);
          uVar7 = uVar6;
          func_0x000107c4e920();
          func_0x000107c615e8(uVar6);
          uVar6 = *(ulong *)(puVar9 + 0x10);
          puStack_90 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar6) {
            FUN_103035c00(1 < *(ulong *)(puVar9 + 0x18),uVar6 + 1,1);
          }
          uVar16 = uVar16 + 1;
          *(ulong *)(puStack_90 + 0x10) = uVar6 + 1;
          *(int *)(puStack_90 + uVar6 * 4 + 0x20) = (int)uVar7;
        } while (uVar14 != uVar16);
      }
      puVar9 = puStack_90;
      func_0x000107c6142c(uVar5);
      lVar11 = *(long *)(puVar9 + 0x10);
    }
    else {
      uVar14 = uVar5;
      if (-1 < (long)uVar5) {
        uVar14 = uVar5 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
      if (uVar14 != 0) goto LAB_103912b9c;
LAB_103912d2c:
      func_0x000107c6142c(uVar5);
      lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    if (lVar11 == 0) {
      func_0x000107c6142c(puVar9);
    }
    else {
      uVar13 = *(uint *)(puVar9 + 0x20);
      lVar11 = lVar11 + -1;
      if (lVar11 != 0) {
        puVar12 = (uint *)(puVar9 + 0x24);
        do {
          if (uVar13 <= *puVar12) {
            uVar13 = *puVar12;
          }
          lVar11 = lVar11 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar11 != 0);
      }
      func_0x000107c6142c(puVar9);
    }
  }
  puVar8 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  func_0x000107c4b838();
  func_0x000107c61180();
  puVar9 = &UNK_1106abc38;
  func_0x000107c613fc(&UNK_1106abc38,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar2;
  pcStack_70 = FUN_103912e90;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101e34e58;
  puStack_78 = &UNK_1106abc50;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_68);
  func_0x000107c5d684(uVar15);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(puVar8);
LAB_103912e04:
  *param_1 = uVar15;
  return;
}



/* Entry: 103912e2c; end: 103912e57;  */

void FUN_103912e2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103912e58; end: 103912e8f;  */

void FUN_103912e58(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c615f0();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103912e90; end: 103912e93;  */

void FUN_103912e90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126afff0;
  func_0x000107c610f8(PTR_PTR_1126afff0);
  func_0x000107c453e4();
  func_0x000107c597e0();
  func_0x000107c54358(puVar2,param_2,uVar1);
  if (param_1 != 0) {
    func_0x000107c5a0a4(param_1,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103912e94; end: 103912ef7;  */

void FUN_103912e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126afff0;
  func_0x000107c610f8(PTR_PTR_1126afff0);
  func_0x000107c453e4();
  func_0x000107c597e0();
  func_0x000107c54358(puVar2,param_2,uVar1);
  if (param_1 != 0) {
    func_0x000107c5a0a4(param_1,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103912ef8; end: 103912fa7;  */

void FUN_103912ef8(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 103912fa8; end: 103912fe3;  */

void FUN_103912fa8(void)

{
  FUN_1039119c8();
  return;
}



/* Entry: 103912fe4; end: 10391301b;  */

void FUN_103912fe4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10391301c; end: 1039131ef;  */

undefined8 FUN_10391301c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1039131f0);
    (*pcVar1)();
  }
  puVar2 = &UNK_1106abd58;
  func_0x000107c613fc(&UNK_1106abd58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar3 = &UNK_1106abd80;
  func_0x000107c613fc(&UNK_1106abd80,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_103913284;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_50 = FUN_10391328c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1027af418;
  puStack_58 = &UNK_1106abd98;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar6);
  lVar5 = unaff_x20;
  func_0x000107c4365c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(unaff_x20);
  puVar6 = puVar3;
  func_0x000107c61544(puVar3,"",0x53,10,0x29,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar6 & 1) == 0) {
    if (lVar5 == 0) {
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&puStack_90,lVar5);
      func_0x000107c615e8(lVar5);
    }
    uStack_68 = uStack_88;
    puStack_70 = puStack_90;
    puStack_58 = (undefined *)lStack_78;
    puStack_60 = (undefined *)uStack_80;
    if (lStack_78 == 0) {
      func_0x00010006e7f4(&puStack_70);
    }
    else {
      uVar7 = 0;
      func_0x0001012e2f20(0);
      puVar8 = &uStack_98;
      func_0x000107c6147c(puVar8,&puStack_70,PTR___sypN_11034f1a8 + 8,uVar7,6);
      if ((int)puVar8 != 0) {
        func_0x000107c61574(puVar2);
        return uStack_98;
      }
    }
    func_0x000107c61574(puVar2);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039131ec);
  (*pcVar1)();
}



/* Entry: 1039131f0; end: 103913283;  */

bool FUN_1039131f0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar2 = 0;
  func_0x0001012e2f20(0);
  plVar3 = &lStack_58;
  func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)plVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = lStack_58;
    func_0x000107c4c9b4(lStack_58);
    func_0x000107c4c9b4(param_2);
    func_0x000107c61170(lStack_58);
    bVar1 = lVar4 == param_2;
  }
  return bVar1;
}



/* Entry: 103913284; end: 10391328b;  */

bool FUN_103913284(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000bb420(param_1,auStack_50);
  uVar2 = 0;
  func_0x0001012e2f20(0);
  plVar3 = &lStack_58;
  func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)plVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = lStack_58;
    func_0x000107c4c9b4(lStack_58);
    func_0x000107c4c9b4(lVar5);
    func_0x000107c61170(lStack_58);
    bVar1 = lVar4 == lVar5;
  }
  return bVar1;
}



/* Entry: 10391328c; end: 1039132af;  */

uint FUN_10391328c(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return param_1 & 1;
}



/* Entry: 1039132b0; end: 1039132cb;  */

void FUN_1039132b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1039132cc; end: 10391354b;  */

undefined * FUN_1039132cc(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  lVar5 = unaff_x20;
  func_0x000107c44a2c();
  if ((int)lVar5 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103913544);
      (*pcVar4)();
    }
    lVar6 = lVar5;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103913548);
      (*pcVar4)();
    }
    lVar5 = lVar6;
    func_0x000107c40808();
    func_0x000107c61170(lVar6);
    if (0 < lVar5) {
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10391354c);
        (*pcVar4)();
      }
      lVar5 = unaff_x20;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (lVar5 != 0) {
        puStack_68 = (undefined *)0x0;
        uVar7 = 0;
        func_0x000101de16dc(0);
        func_0x000107c5fc50(lVar5,&puStack_68,uVar7);
        func_0x000107c61170(lVar5);
        puVar3 = puStack_68;
        if (puStack_68 != (undefined *)0x0) {
          puVar13 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((ulong)puStack_68 >> 0x3e == 0) {
            puVar12 = *(undefined **)(puVar13 + 0x10);
            puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar12 = puStack_68;
            if (-1 < (long)puStack_68) {
              puVar12 = puVar13;
            }
            func_0x000107c60480();
            puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
          if (puVar12 != (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            do {
              while( true ) {
                if (((ulong)puVar3 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(puVar13 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103913510);
                    (*pcVar4)();
                  }
                  puVar8 = *(undefined **)(puVar3 + (long)puVar11 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  puVar8 = puVar11;
                  func_0x00010121c1ac(puVar11,puVar3);
                }
                puVar1 = puVar11 + 1;
                if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10391350c);
                  (*pcVar4)();
                }
                puVar9 = puVar8;
                func_0x000107c4abb4();
                if ((int)puVar9 == 1) break;
LAB_1039133d4:
                func_0x000107c61170(puVar8);
                puVar11 = puVar11 + 1;
                if (puVar1 == puVar12) goto LAB_10391352c;
              }
              puVar9 = puVar8;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103913540);
                (*pcVar4)();
              }
              puVar10 = puVar9;
              func_0x000107c3e240();
              func_0x000107c61170(puVar9);
              if ((int)puVar10 != 5) goto LAB_1039133d4;
              puVar11 = puVar14;
              func_0x000107c61558();
              puStack_68 = puVar14;
              if (((ulong)puVar11 & 1) == 0) {
                func_0x000101a17c14(0,*(long *)(puVar14 + 0x10) + 1,1);
              }
              uVar2 = *(ulong *)(puStack_68 + 0x10);
              if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
                func_0x000101a17c14(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
              }
              *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
              *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar8;
              puVar11 = puVar1;
              puVar14 = puStack_68;
            } while (puVar1 != puVar12);
          }
LAB_10391352c:
          func_0x000107c6142c(puVar3);
          return puVar14;
        }
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10391354c; end: 103913987;  */

void FUN_10391354c(ulong param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_1039132cc();
  if (param_1 == 0) {
    return;
  }
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
    if (uVar5 == 0) goto LAB_103913624;
  }
  else {
    uVar5 = param_1;
    if (-1 < (long)param_1) {
      uVar5 = uVar6;
    }
    uVar4 = uVar5;
    func_0x000107c60480();
    if (uVar4 == 0) goto LAB_103913624;
    func_0x000107c60480();
  }
  if ((long)uVar5 < 2) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103913654);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      uVar6 = param_1;
      func_0x00010121c1ac(0);
      param_2 = (uint)uVar6;
    }
    func_0x000107c6142c(param_1);
    uVar3 = uVar2;
    func_0x000103913844(uVar2);
    func_0x000107c61170(uVar2);
    if ((param_2 & 0xff) == 1) {
      return;
    }
    if ((param_2 & 0xff) == 0xff) {
      return;
    }
    func_0x000102ebf638(uVar3,0);
    return;
  }
LAB_103913624:
  func_0x000107c6142c();
  return;
}



/* Entry: 103913988; end: 10391399b;  */

void FUN_103913988(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10391399c; end: 1039139eb;  */

undefined8 * FUN_10391399c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_103913988(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000102ebf64c(uVar3,uVar2);
  return param_1;
}



/* Entry: 1039139ec; end: 103913a27;  */

undefined8 * FUN_1039139ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000102ebf64c(uVar3,uVar2);
  return param_1;
}



/* Entry: 103913a28; end: 103913adf;  */

int FUN_103913a28(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103913ae0; end: 103913b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103913ae0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fae090) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103913b50; end: 103913baf; -[_TtC29ContentPostSendUpsellServices29ContentPostSendUpsellServices init] */

void FUN_103913b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentPostSendUpsellServices.ContentPostSendUpsellServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103913b7c);
  (*pcVar1)();
}



/* Entry: 103913bb0; end: 103913bbf;  */

undefined1  [16] FUN_103913bb0(void)

{
  return ZEXT816(0x1106abee0);
}



/* Entry: 103913bc0; end: 103913bcf; -[_TtC29ContentPostSendUpsellServices29ContentPostSendUpsellServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103913bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fae090));
  return;
}



/* Entry: 103913bd0; end: 103913d0f;  */

undefined8 FUN_103913bd0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_113187350;
  func_0x000107c5faec();
  puVar2 = param_1;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (puVar1 == puVar2 && param_2 == lVar3) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
  }
  else {
    lVar4 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_113187358;
      func_0x000107c5faec();
      puVar2 = param_1;
      lVar3 = lVar4;
      func_0x000107c5faec();
      if (puVar1 == puVar2 && lVar4 == lVar3) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        return 1;
      }
      func_0x000107c605b8(puVar1,lVar4,puVar2,lVar3,0);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      if (((ulong)puVar1 & 1) != 0) {
        return 1;
      }
      return 2;
    }
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 103913d10; end: 103913d93;  */

undefined * FUN_103913d10(long param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lStack_28;
  
  if (param_1 == 0) {
    ppuVar2 = &PTR_PTR_113187350;
  }
  else {
    if (param_1 == 2) {
      return (undefined *)0x0;
    }
    if (param_1 != 1) {
      lStack_28 = param_1;
      func_0x000107c60614(&UNK_1106abf80,&lStack_28,&UNK_1106abf80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103913d94);
      (*pcVar1)();
    }
    ppuVar2 = &PTR_PTR_113187358;
  }
  puVar3 = *ppuVar2;
  func_0x000107c61174(puVar3);
  return puVar3;
}



/* Entry: 103913d94; end: 103913da7;  */

bool FUN_103913d94(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103913da8; end: 103913e53;  */

void FUN_103913da8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103913e54; end: 103913e7f;  */

void FUN_103913e54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103913e80; end: 103913ebf;  */

void FUN_103913e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22600;
  func_0x000107c61520(&UNK_10dc22600,&UNK_1106abf80);
  puRam0000000112fae0c0 = puVar1;
  return;
}



/* Entry: 103913ec0; end: 103913ecf;  */

undefined1  [16] FUN_103913ec0(void)

{
  return ZEXT816(0x1106abf80);
}



/* Entry: 103913ed0; end: 103914137;  */

undefined8 FUN_103913ed0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_113187360;
  func_0x000107c5faec();
  puVar2 = param_1;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (puVar1 == puVar2 && param_2 == lVar3) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
  }
  else {
    lVar4 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_113187368;
      func_0x000107c5faec();
      puVar2 = param_1;
      lVar3 = lVar4;
      func_0x000107c5faec();
      if (puVar1 == puVar2 && lVar4 == lVar3) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        return 1;
      }
      lVar5 = lVar4;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      if (((ulong)puVar1 & 1) != 0) {
        func_0x000107c61170(param_1);
        return 1;
      }
      puVar1 = PTR_PTR_113187370;
      func_0x000107c5faec();
      puVar2 = param_1;
      lVar3 = lVar5;
      func_0x000107c5faec();
      if ((puVar1 == puVar2) && (lVar5 == lVar3)) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar5);
        func_0x000107c6142c(lVar3);
        return 2;
      }
      lVar4 = lVar5;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar3);
      if (((ulong)puVar1 & 1) != 0) {
        func_0x000107c61170(param_1);
        return 2;
      }
      puVar1 = PTR_PTR_113187378;
      func_0x000107c5faec();
      puVar2 = param_1;
      lVar3 = lVar4;
      func_0x000107c5faec();
      if ((puVar1 == puVar2) && (lVar4 == lVar3)) {
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        return 3;
      }
      func_0x000107c605b8(puVar1,lVar4,puVar2,lVar3,0);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      if (((ulong)puVar1 & 1) != 0) {
        return 3;
      }
      return 4;
    }
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 103914138; end: 1039141eb;  */

undefined * FUN_103914138(long param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lStack_28;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      ppuVar2 = &PTR_PTR_113187360;
    }
    else {
      if (param_1 != 1) goto LAB_1039141c8;
      ppuVar2 = &PTR_PTR_113187368;
    }
  }
  else if (param_1 == 2) {
    ppuVar2 = &PTR_PTR_113187370;
  }
  else {
    if (param_1 != 3) {
      if (param_1 == 4) {
        return (undefined *)0x0;
      }
LAB_1039141c8:
      lStack_28 = param_1;
      func_0x000107c60614(&UNK_1106abff8,&lStack_28,&UNK_1106abff8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1039141ec);
      (*pcVar1)();
    }
    ppuVar2 = &PTR_PTR_113187378;
  }
  puVar3 = *ppuVar2;
  func_0x000107c61174(puVar3);
  return puVar3;
}



/* Entry: 1039141ec; end: 1039141ff;  */

bool FUN_1039141ec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103914200; end: 1039142d7;  */

void FUN_103914200(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039142d8; end: 1039142f7;  */

void FUN_1039142d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1039142f8; end: 103914337;  */

void FUN_1039142f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc226f0;
  func_0x000107c61520(&UNK_10dc226f0,&UNK_1106abff8);
  puRam0000000112fae0c8 = puVar1;
  return;
}



/* Entry: 103914338; end: 103914347;  */

undefined1  [16] FUN_103914338(void)

{
  return ZEXT816(0x1106abff8);
}



/* Entry: 103914348; end: 1039143b7; +[_TtC27ShareYoursStickerSendingAPI28ShareYoursStickerSendHelpers hasShareYoursStickerInClientInfo:] */

uint FUN_103914348(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61174();
    lVar1 = param_3;
    FUN_1039147d8();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x0001039149ac(param_3);
      uVar2 = (uint)lVar1;
    }
    else {
      func_0x000107c61170(param_3);
      uVar2 = 1;
      param_3 = lVar1;
    }
    func_0x000107c61170(param_3);
  }
  return uVar2 & 1;
}



/* Entry: 1039143b8; end: 1039145f7;  */

void FUN_1039143b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1106ac170;
  func_0x000107c613fc(&UNK_1106ac170,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &UNK_1106ac198;
  func_0x000107c613fc(&UNK_1106ac198,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103915668;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10391570c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10103b958;
  puStack_88 = &UNK_1106ac1b0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1106ac1e8;
  func_0x000107c613fc(&UNK_1106ac1e8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  puVar7 = &UNK_1106ac210;
  func_0x000107c613fc(&UNK_1106ac210,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103915758;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x1039158a0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1106ac228;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x81,0x39,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1039145f4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x81,0x41,0x1d,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1039145f8);
  (*pcVar2)();
}



/* Entry: 1039145f8; end: 1039146eb; +[_TtC27ShareYoursStickerSendingAPI28ShareYoursStickerSendHelpers prepareShareYoursForSendWithClientInfo:promptText:client:disposeBag:completion:] */

void FUN_1039145f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x000107c60bc4(param_7);
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  uStack_60 = param_5;
  func_0x000107c614ec(param_1);
  func_0x000107c60bc4(param_7);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_103915334(param_3,param_4,param_2,0x103915314,auStack_70,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1039146ec; end: 1039146ef;  */

bool FUN_1039146ec(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  undefined1 auStack_40 [32];
  
  func_0x0001000bb420(param_1,auStack_40);
  uVar1 = 0;
  func_0x000103915790(0,0x112d5b150,&PTR_PTR_1126d2bc8);
  plVar2 = &lStack_48;
  func_0x000107c6147c(plVar2,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    lVar3 = lStack_48;
    func_0x000107c3cf80();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c3f63c(lVar3);
      func_0x000107c61170(lVar3);
      return (int)lVar4 == 0x4f;
    }
  }
  return false;
}



/* Entry: 1039146f0; end: 103914767;  */

uint FUN_1039146f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  uVar2 = 0;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c614f0();
  auStack_60[0] = param_2;
  uStack_48 = uVar3;
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_60,param_3,param_4);
  func_0x000100183ab8(auStack_60);
  return uVar2 & 1;
}



/* Entry: 103914768; end: 1039147a3; -[_TtC27ShareYoursStickerSendingAPI28ShareYoursStickerSendHelpers init] */

void FUN_103914768(undefined8 param_1)

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



/* Entry: 1039147a4; end: 1039147d7;  */

void FUN_1039147a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039147d8; end: 1039152cb;  */

long FUN_1039147d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c40dcc();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1039149ac);
    (*pcVar3)();
  }
  func_0x000107c600f4(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_1);
  func_0x000107c5ed4c(auStack_80);
  if (lStack_68 != 0) {
    uVar5 = 0;
    func_0x000103915790(0,0x112df90e8,&PTR_PTR_1126b0cc0);
    puVar1 = PTR___sypN_11034f1a8;
    do {
      plVar6 = &lStack_88;
      func_0x000107c6147c(plVar6,auStack_80,puVar1 + 8,uVar5,6);
      lVar2 = lStack_88;
      if (((ulong)plVar6 & 1) != 0) {
        lVar7 = lStack_88;
        func_0x000107c4ce20();
        func_0x000107c61180();
        if (lVar7 != 0) {
          lVar9 = lVar7;
          func_0x000107c4ce50();
          if ((int)lVar9 == 3) {
            lVar9 = lVar7;
            func_0x000107c453bc();
            func_0x000107c61180();
            if (lVar9 != 0) {
              lVar8 = lVar9;
              func_0x000107c453c0();
              func_0x000107c61170(lVar9);
              if ((int)lVar8 == 0x13) {
                lVar8 = lVar7;
                func_0x000107c453bc(lVar7);
                func_0x000107c61180();
                lVar9 = lVar8;
                func_0x000107c5a9a4();
                func_0x000107c61180();
                func_0x000107c61170(lVar8);
                func_0x000107c61170(lVar7);
                func_0x000107c61170(lVar2);
                goto LAB_103914974;
              }
            }
          }
          func_0x000107c61170(lVar7);
        }
        func_0x000107c61170(lVar2);
      }
      func_0x000107c5ed4c(auStack_80);
    } while (lStack_68 != 0);
  }
  lVar9 = 0;
LAB_103914974:
  (**(code **)(lVar10 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  return lVar9;
}



/* Entry: 1039152cc; end: 1039152f3;  */

void FUN_1039152cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar6 = &UNK_1106ac170;
  func_0x000107c613fc(&UNK_1106ac170,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar9;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar3;
  puVar7 = &UNK_1106ac198;
  func_0x000107c613fc(&UNK_1106ac198,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103915668;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10391570c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10103b958;
  puStack_88 = &UNK_1106ac1b0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar10 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1106ac1e8;
  func_0x000107c613fc(&UNK_1106ac1e8,0x30,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar2;
  *(undefined8 *)(puVar10 + 0x28) = uVar3;
  puVar11 = &UNK_1106ac210;
  func_0x000107c613fc(&UNK_1106ac210,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_103915758;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_80 = (code *)0x1039158a0;
  puStack_a0 = puVar4;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1106ac228;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar4 = puStack_78;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x81,0x39,0x25,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1039145f4);
    (*pcVar5)();
  }
  puVar6 = puVar11;
  func_0x000107c61544(puVar11,"",0x81,0x41,0x1d,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1039145f8);
  (*pcVar5)();
}



/* Entry: 1039152f4; end: 103915333;  */

void FUN_1039152f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff670);
  return;
}



/* Entry: 103915334; end: 10391565f;  */

/* WARNING: Possible PIC construction at 0x0001039153b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010391540c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103915424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103915478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103915654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103915510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103915598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039155c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039155d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039155ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010391548c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039155d8) */
/* WARNING: Removing unreachable block (ram,0x0001039155c4) */
/* WARNING: Removing unreachable block (ram,0x00010391559c) */
/* WARNING: Removing unreachable block (ram,0x000103915514) */
/* WARNING: Removing unreachable block (ram,0x000103915658) */
/* WARNING: Removing unreachable block (ram,0x00010391547c) */
/* WARNING: Removing unreachable block (ram,0x000103915484) */
/* WARNING: Removing unreachable block (ram,0x000103915428) */
/* WARNING: Removing unreachable block (ram,0x000103915410) */
/* WARNING: Removing unreachable block (ram,0x000103915424) */
/* WARNING: Removing unreachable block (ram,0x0001039153b4) */
/* WARNING: Removing unreachable block (ram,0x0001039155f0) */

void FUN_103915334(ulong param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_x7;
  
  puVar1 = &UNK_1106ac0f8;
  func_0x000107c613fc(&UNK_1106ac0f8,0x18,7);
  *(long *)(puVar1 + 0x10) = in_x7;
  if (param_1 == 0) {
    func_0x000107c60bc4(in_x7);
    (**(code **)(in_x7 + 0x10))(in_x7,0);
  }
  else {
    func_0x000107c60bc4(in_x7);
    func_0x000107c61174();
    uVar2 = param_1;
    FUN_1039147d8();
    if ((uVar2 != 0) || (uVar2 = param_1, func_0x0001039149ac(), (uVar2 & 1) == 0)) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    uVar3 = param_1;
    FUN_1039147d8();
    uVar2 = param_1;
    uVar4 = uVar3;
    func_0x000103914b54();
    if (uVar4 == 0) {
      if (uVar3 != 0) {
        func_0x000107c4f4c8();
        func_0x000107c61180();
        uVar2 = 0;
        if (uVar3 != 0) {
          func_0x000107c5faec();
          goto code_r0x000107c61170;
        }
      }
      if (param_3 == 0) {
        param_2 = 0;
        param_3 = 0xe000000000000000;
        (*param_4)();
      }
      else {
        uVar2 = param_3;
        func_0x000107c61434();
        (*param_4)();
      }
      if (uVar2 != 0) {
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c6142c(param_3);
        func_0x000107c40b88(uVar2);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
      func_0x000107c6142c(param_3);
      func_0x000103914dc8(0,0,param_1);
      (**(code **)(in_x7 + 0x10))(in_x7,0);
    }
    else {
      func_0x000107c5fadc();
      (**(code **)(in_x7 + 0x10))(in_x7,uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103915660; end: 103915667;  */

void FUN_103915660(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103915668; end: 10391570b;  */

/* WARNING: Possible PIC construction at 0x0001039156d8: Changing call to branch */

void FUN_103915668(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    func_0x000103914dc8(0,0,*(undefined8 *)(unaff_x20 + 0x18));
    (*pcVar2)(0,0);
    return;
  }
  func_0x000107c5faec();
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000103914dc8();
    (*pcVar2)(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10391570c; end: 10391572b;  */

void FUN_10391570c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10391572c; end: 103915757;  */

void FUN_10391572c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103915758; end: 10391587b;  */

void FUN_103915758(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000103914dc8(0,0,*(undefined8 *)(unaff_x20 + 0x18));
  (*pcVar1)(0,0);
  return;
}



/* Entry: 10391587c; end: 1039158a3;  */

void FUN_10391587c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1039158a4; end: 10391591b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039158a4(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  puVar2 = auStack_30;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fda380);
  *(undefined8 *)(unaff_x20 + _DAT_112fae0f8) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_30,puVar1);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10391591c; end: 103915983; -[MemoriesMemTwoShareableMediaProvider initWithTranscodingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391591c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = *(undefined8 *)(param_3 + _DAT_112fda380);
  *(undefined8 *)(param_1 + _DAT_112fae0f8) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103915984; end: 1039159a3;  */

void FUN_103915984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1039159a4,0,0);
  return;
}



/* Entry: 1039159a4; end: 103915a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039159a4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x22;
  undefined8 uVar15;
  long lVar16;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103915a04;
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar13 = *(long *)(unaff_x22 + 0x48);
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3[0xd] = unaff_x22 + 0x10;
  plVar3[0xe] = lVar4;
  plVar3[0xb] = lVar13;
  plVar3[0xc] = (long)FUN_103917ca8;
  func_0x000107c614f0();
  plVar3[0xf] = lVar4;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar3[0x10] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x11] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x12] = uVar5;
  lVar4 = 0;
  FUN_103917cd0();
  plVar3[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x14] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x15] = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x16] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x17] = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103915b80,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = plVar3[0xb];
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  plVar3[0x18] = uVar6;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      plVar3[0x19] = 0;
      plVar3[0x1a] = (long)puVar14;
      uVar6 = plVar3[0xb];
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103916040);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar6 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar5;
        func_0x000100fb0d50();
      }
      plVar3[0x1b] = uVar6;
      plVar3[0x1c] = uVar5 + 1;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10391603c);
        (*pcVar2)();
      }
      uVar5 = ((undefined8 *)(uVar6 + _DAT_112fda130))[1];
      if (uVar5 >> 0x3c < 0xf) {
        uVar15 = *(undefined8 *)(uVar6 + _DAT_112fda130);
        puVar7 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar15,uVar5);
        uVar8 = uVar15;
        func_0x000107c5ee20(uVar15,uVar5);
        plVar3[10] = 0;
        func_0x000107c4636c();
        plVar3[0x1d] = (long)puVar7;
        func_0x000107c61170(uVar8);
        puVar14 = (undefined *)plVar3[10];
        if (puVar7 != (undefined *)0x0) {
          func_0x000107c61174(puVar14);
          func_0x0001000b44c0(uVar15,uVar5);
          puVar10 = puVar7;
          func_0x00010801f580(puVar7,0);
          func_0x000107c61180();
          if (puVar10 != (undefined *)0x0) {
            func_0x00010795025c();
            func_0x00010b5f9f38();
            func_0x000107c61170(puVar10);
          }
          puVar10 = puVar7;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) goto LAB_103916058;
          puVar14 = puVar10;
          func_0x000107c4c944();
          func_0x000107c61170(puVar10);
          if (puVar14 == (undefined *)0x0) {
            func_0x0001079507c0(puVar7);
          }
          else {
            func_0x000107950750();
          }
          lVar11 = plVar3[0x16];
          lVar13 = plVar3[0x12];
          func_0x000107c61180();
          func_0x000107c5ee94(lVar13);
          func_0x000107c61170(puVar7);
          plVar3[7] = lVar11;
          plVar3[2] = (long)plVar3;
          plVar3[3] = (long)FUN_10391605c;
          func_0x000107c61448(plVar3 + 2,1);
          FUN_103917414();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(plVar3 + 2);
            return;
          }
          goto LAB_103916054;
        }
        puVar7 = puVar14;
        func_0x000107c61174(puVar14);
        func_0x000107c5ed30(puVar14);
        func_0x000107c61170(puVar7);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar15,uVar5);
      }
      else {
        FUN_1039180dc();
        puVar14 = &UNK_1106ac508;
        func_0x000107c613f8(&UNK_1106ac508,uVar6,0,0);
        func_0x000107c61654();
      }
      lVar13 = plVar3[0x1b];
      (*(code *)plVar3[0xc])(puVar14);
      func_0x000107c61170(lVar13);
      func_0x000107c614ac(puVar14);
      puVar14 = (undefined *)plVar3[0x1a];
      uVar5 = plVar3[0x1c];
    } while (uVar5 != plVar3[0x18]);
  }
  lVar13 = *(long *)(puVar14 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c61434(puVar14);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar11 = plVar3[0x13];
    lVar12 = plVar3[0x14];
    func_0x000107c61434(puVar14);
    func_0x000100403514(0,lVar13,0);
    uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
    puVar7 = puVar14 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    do {
      lVar16 = plVar3[0x15];
      FUN_1039182a8(puVar7,lVar16,FUN_103917cd0);
      puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar11 + 0x14));
      uVar8 = *puVar1;
      uVar15 = puVar1[1];
      func_0x000107c61434(uVar15);
      FUN_1039185b8(lVar16,FUN_103917cd0);
      uVar5 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar5) {
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar10 + uVar5 * 0x10 + 0x28) = uVar15;
      puVar7 = puVar7 + lVar12;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar7 = PTR___sSSN_11034da80;
  lVar13 = plVar3[0x16];
  lVar11 = plVar3[0x17];
  lVar16 = plVar3[0x15];
  lVar12 = plVar3[0x12];
  puVar9 = puVar10;
  func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar10);
  puVar10 = puVar9;
  func_0x00010b5fb448(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar10;
  func_0x000107c5fc54(puVar10,puVar7);
  func_0x000107c61170(puVar10);
  puVar10 = puVar14;
  FUN_103916d50(puVar14,puVar9);
  func_0x000107c61430(puVar14,2);
  func_0x000107c6142c(puVar9);
  func_0x000107c615c0(lVar11);
  func_0x000107c615c0(lVar13);
  func_0x000107c615c0(lVar16);
  func_0x000107c615c0(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000103915f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar3[1])(puVar10);
    return;
  }
LAB_103916054:
  func_0x000107c60e78();
LAB_103916058:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10391605c);
  (*pcVar2)();
}



/* Entry: 103915a54; end: 103915a93;  */

void FUN_103915a54(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(unaff_x22 + 0x30))(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103915a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103915a94; end: 103915aa3;  */

void FUN_103915a94(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 103915aa4; end: 103915b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103915aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
  undefined *puVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  lVar4 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar5;
  lVar4 = 0;
  FUN_103917cd0();
  *(long *)(unaff_x22 + 0x98) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103915b80,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(ulong *)(unaff_x22 + 0x58);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  *(ulong *)(unaff_x22 + 0xc0) = uVar6;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(undefined **)(unaff_x22 + 0xd0) = puVar13;
      uVar6 = *(ulong *)(unaff_x22 + 0x58);
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103916040);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar6 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar5;
        func_0x000100fb0d50();
      }
      *(ulong *)(unaff_x22 + 0xd8) = uVar6;
      *(ulong *)(unaff_x22 + 0xe0) = uVar5 + 1;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10391603c);
        (*pcVar3)();
      }
      uVar5 = ((undefined8 *)(uVar6 + _DAT_112fda130))[1];
      if (uVar5 >> 0x3c < 0xf) {
        uVar15 = *(undefined8 *)(uVar6 + _DAT_112fda130);
        puVar7 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar15,uVar5);
        uVar12 = uVar15;
        func_0x000107c5ee20(uVar15,uVar5);
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        func_0x000107c4636c();
        *(undefined **)(unaff_x22 + 0xe8) = puVar7;
        func_0x000107c61170(uVar12);
        puVar13 = *(undefined **)(unaff_x22 + 0x50);
        if (puVar7 != (undefined *)0x0) {
          func_0x000107c61174(puVar13);
          func_0x0001000b44c0(uVar15,uVar5);
          puVar9 = puVar7;
          func_0x00010801f580(puVar7,0);
          func_0x000107c61180();
          if (puVar9 != (undefined *)0x0) {
            func_0x00010795025c();
            func_0x00010b5f9f38();
            func_0x000107c61170(puVar9);
          }
          puVar9 = puVar7;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) goto LAB_103916058;
          puVar13 = puVar9;
          func_0x000107c4c944();
          func_0x000107c61170(puVar9);
          if (puVar13 == (undefined *)0x0) {
            func_0x0001079507c0(puVar7);
          }
          else {
            func_0x000107950750();
          }
          uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
          func_0x000107c61180();
          func_0x000107c5ee94(uVar12);
          func_0x000107c61170(puVar7);
          *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10391605c;
          func_0x000107c61448(unaff_x22 + 0x10,1);
          FUN_103917414();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
            return;
          }
          goto LAB_103916054;
        }
        puVar7 = puVar13;
        func_0x000107c61174(puVar13);
        func_0x000107c5ed30(puVar13);
        func_0x000107c61170(puVar7);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar15,uVar5);
      }
      else {
        FUN_1039180dc();
        puVar13 = &UNK_1106ac508;
        func_0x000107c613f8(&UNK_1106ac508,uVar6,0,0);
        func_0x000107c61654();
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
      (**(code **)(unaff_x22 + 0x60))(puVar13);
      func_0x000107c61170(uVar12);
      func_0x000107c614ac(puVar13);
      puVar13 = *(undefined **)(unaff_x22 + 0xd0);
      uVar5 = *(ulong *)(unaff_x22 + 0xe0);
    } while (uVar5 != *(ulong *)(unaff_x22 + 0xc0));
  }
  lVar10 = *(long *)(puVar13 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c61434(puVar13);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x98);
    lVar11 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61434(puVar13);
    func_0x000100403514(0,lVar10,0);
    uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
    puVar7 = puVar13 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    do {
      lVar17 = *(long *)(unaff_x22 + 0xa8);
      FUN_1039182a8(puVar7,lVar17,FUN_103917cd0);
      puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar2 + 0x14));
      uVar12 = *puVar1;
      uVar15 = puVar1[1];
      func_0x000107c61434(uVar15);
      FUN_1039185b8(lVar17,FUN_103917cd0);
      uVar5 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar9 + uVar5 * 0x10 + 0x20) = uVar12;
      *(undefined8 *)(puVar9 + uVar5 * 0x10 + 0x28) = uVar15;
      puVar7 = puVar7 + lVar11;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar7 = PTR___sSSN_11034da80;
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar8 = puVar9;
  func_0x000107c5fc48(puVar9,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar9);
  puVar9 = puVar8;
  func_0x00010b5fb448(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar9;
  func_0x000107c5fc54(puVar9,puVar7);
  func_0x000107c61170(puVar9);
  puVar9 = puVar13;
  FUN_103916d50(puVar13,puVar8);
  func_0x000107c61430(puVar13,2);
  func_0x000107c6142c(puVar8);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000103915f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar9);
    return;
  }
LAB_103916054:
  func_0x000107c60e78();
LAB_103916058:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10391605c);
  (*pcVar3)();
}



/* Entry: 103915b80; end: 10391605b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103915b80(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(ulong *)(unaff_x22 + 0x58);
  if (uVar9 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar4 = uVar9;
    }
    func_0x000107c60480();
  }
  *(ulong *)(unaff_x22 + 0xc0) = uVar4;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    uVar9 = 0;
    do {
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(undefined **)(unaff_x22 + 0xd0) = puVar12;
      uVar4 = *(ulong *)(unaff_x22 + 0x58);
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103916040);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar9;
        func_0x000100fb0d50();
      }
      *(ulong *)(unaff_x22 + 0xd8) = uVar4;
      *(ulong *)(unaff_x22 + 0xe0) = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10391603c);
        (*pcVar3)();
      }
      uVar9 = ((undefined8 *)(uVar4 + _DAT_112fda130))[1];
      if (uVar9 >> 0x3c < 0xf) {
        uVar15 = *(undefined8 *)(uVar4 + _DAT_112fda130);
        puVar5 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar15,uVar9);
        uVar11 = uVar15;
        func_0x000107c5ee20(uVar15,uVar9);
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        func_0x000107c4636c();
        *(undefined **)(unaff_x22 + 0xe8) = puVar5;
        func_0x000107c61170(uVar11);
        puVar12 = *(undefined **)(unaff_x22 + 0x50);
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c61174(puVar12);
          func_0x0001000b44c0(uVar15,uVar9);
          puVar7 = puVar5;
          func_0x00010801f580(puVar5,0);
          func_0x000107c61180();
          if (puVar7 != (undefined *)0x0) {
            func_0x00010795025c();
            func_0x00010b5f9f38();
            func_0x000107c61170(puVar7);
          }
          puVar7 = puVar5;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) goto LAB_103916058;
          puVar12 = puVar7;
          func_0x000107c4c944();
          func_0x000107c61170(puVar7);
          if (puVar12 == (undefined *)0x0) {
            func_0x0001079507c0(puVar5);
          }
          else {
            func_0x000107950750();
          }
          uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
          func_0x000107c61180();
          func_0x000107c5ee94(uVar11);
          func_0x000107c61170(puVar5);
          *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10391605c;
          func_0x000107c61448(unaff_x22 + 0x10,1);
          FUN_103917414();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
            return;
          }
          goto LAB_103916054;
        }
        puVar5 = puVar12;
        func_0x000107c61174(puVar12);
        func_0x000107c5ed30(puVar12);
        func_0x000107c61170(puVar5);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar15,uVar9);
      }
      else {
        FUN_1039180dc();
        puVar12 = &UNK_1106ac508;
        func_0x000107c613f8(&UNK_1106ac508,uVar4,0,0);
        func_0x000107c61654();
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
      (**(code **)(unaff_x22 + 0x60))(puVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c614ac(puVar12);
      puVar12 = *(undefined **)(unaff_x22 + 0xd0);
      uVar9 = *(ulong *)(unaff_x22 + 0xe0);
    } while (uVar9 != *(ulong *)(unaff_x22 + 0xc0));
  }
  lVar13 = *(long *)(puVar12 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c61434(puVar12);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x98);
    lVar10 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61434(puVar12);
    func_0x000100403514(0,lVar13,0);
    uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
    puVar5 = puVar12 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    do {
      lVar17 = *(long *)(unaff_x22 + 0xa8);
      FUN_1039182a8(puVar5,lVar17,FUN_103917cd0);
      puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar2 + 0x14));
      uVar11 = *puVar1;
      uVar15 = puVar1[1];
      func_0x000107c61434(uVar15);
      FUN_1039185b8(lVar17,FUN_103917cd0);
      uVar9 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
        func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar7 + uVar9 * 0x10 + 0x20) = uVar11;
      *(undefined8 *)(puVar7 + uVar9 * 0x10 + 0x28) = uVar15;
      puVar5 = puVar5 + lVar10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar5 = PTR___sSSN_11034da80;
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar6 = puVar7;
  func_0x000107c5fc48(puVar7,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar7);
  puVar7 = puVar6;
  func_0x00010b5fb448(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar7;
  func_0x000107c5fc54(puVar7,puVar5);
  func_0x000107c61170(puVar7);
  puVar7 = puVar12;
  FUN_103916d50(puVar12,puVar6);
  func_0x000107c61430(puVar12,2);
  func_0x000107c6142c(puVar6);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000103915f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar7);
    return;
  }
LAB_103916054:
  func_0x000107c60e78();
LAB_103916058:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10391605c);
  (*pcVar3)();
}



/* Entry: 10391605c; end: 10391610b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391605c(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long *unaff_x22;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *unaff_x22;
  lVar14 = *unaff_x22;
  *(long *)(lVar8 + 0xf0) = *(long *)(lVar8 + 0x30);
  if (*(long *)(lVar8 + 0x30) == 0) {
    FUN_10391811c(*(undefined8 *)(lVar8 + 0xb0),*(undefined8 *)(lVar8 + 0xb8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) goto LAB_103916108;
    pcVar3 = FUN_10391610c;
  }
  else {
    func_0x000107c61654();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
LAB_103916108:
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar10 = *(ulong *)(lVar14 + 0xd0);
      lVar7 = *(long *)(lVar14 + 0x88);
      uVar4 = *(undefined8 *)(lVar14 + 0x90);
      uVar11 = *(undefined8 *)(lVar14 + 0x80);
      func_0x000107c61170(*(undefined8 *)(lVar14 + 0xe8));
      (**(code **)(lVar7 + 8))(uVar4,uVar11);
      func_0x000107c61558();
      uVar16 = *(ulong *)(lVar14 + 0xd0);
      uVar9 = uVar16;
      if ((uVar10 & 1) == 0) {
        uVar9 = 0;
        FUN_103917e20(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      }
      uVar10 = *(ulong *)(uVar9 + 0x10);
      uVar16 = uVar9;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar10) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_103917e20(uVar16,uVar10 + 1,1,uVar9);
      }
      uVar11 = *(undefined8 *)(lVar14 + 0xd8);
      uVar4 = *(undefined8 *)(lVar14 + 0xb8);
      lVar7 = *(long *)(lVar14 + 0xa0);
      *(ulong *)(uVar16 + 0x10) = uVar10 + 1;
      uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
      FUN_10391811c(uVar4,uVar16 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)) +
                          *(long *)(lVar7 + 0x48) * uVar10);
      func_0x000107c61170(uVar11);
      uVar9 = *(ulong *)(lVar14 + 0xe0);
      uVar4 = *(undefined8 *)(lVar14 + 200);
      if (uVar9 != *(ulong *)(lVar14 + 0xc0)) {
        do {
          *(undefined8 *)(lVar14 + 200) = uVar4;
          *(ulong *)(lVar14 + 0xd0) = uVar16;
          uVar10 = *(ulong *)(lVar14 + 0x58);
          if ((uVar10 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103916640);
              (*pcVar3)();
            }
            uVar10 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar10 = uVar9;
            func_0x000100fb0d50();
          }
          *(ulong *)(lVar14 + 0xd8) = uVar10;
          *(ulong *)(lVar14 + 0xe0) = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10391663c);
            (*pcVar3)();
          }
          uVar9 = ((undefined8 *)(uVar10 + _DAT_112fda130))[1];
          if (uVar9 >> 0x3c < 0xf) {
            uVar11 = *(undefined8 *)(uVar10 + _DAT_112fda130);
            puVar5 = PTR_PTR_1126b25c0;
            func_0x000107c610f8();
            func_0x00010006c00c(uVar11,uVar9);
            uVar4 = uVar11;
            func_0x000107c5ee20(uVar11,uVar9);
            *(undefined8 *)(lVar14 + 0x50) = 0;
            func_0x000107c4636c();
            *(undefined **)(lVar14 + 0xe8) = puVar5;
            func_0x000107c61170(uVar4);
            puVar13 = *(undefined **)(lVar14 + 0x50);
            if (puVar5 != (undefined *)0x0) {
              func_0x000107c61174(puVar13);
              func_0x0001000b44c0(uVar11,uVar9);
              puVar13 = puVar5;
              func_0x00010801f580(puVar5,0);
              func_0x000107c61180();
              if (puVar13 != (undefined *)0x0) {
                func_0x00010795025c();
                func_0x00010b5f9f38();
                func_0x000107c61170(puVar13);
              }
              puVar13 = puVar5;
              func_0x000107c5ca90();
              func_0x000107c61180();
              if (puVar13 == (undefined *)0x0) goto LAB_103916684;
              puVar6 = puVar13;
              func_0x000107c4c944();
              func_0x000107c61170(puVar13);
              if (puVar6 == (undefined *)0x0) {
                func_0x0001079507c0(puVar5);
              }
              else {
                func_0x000107950750();
              }
              uVar11 = *(undefined8 *)(lVar14 + 0xb0);
              uVar4 = *(undefined8 *)(lVar14 + 0x90);
              func_0x000107c61180();
              func_0x000107c5ee94(uVar4);
              func_0x000107c61170(puVar5);
              *(undefined8 *)(lVar14 + 0x38) = uVar11;
              *(long *)(lVar14 + 0x10) = lVar14;
              *(code **)(lVar14 + 0x18) = FUN_10391605c;
              func_0x000107c61448(lVar14 + 0x10,1);
              FUN_103917414();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_continuation_await_110350070)(lVar14 + 0x10);
                return;
              }
              goto LAB_103916680;
            }
            puVar5 = puVar13;
            func_0x000107c61174(puVar13);
            func_0x000107c5ed30(puVar13);
            func_0x000107c61170(puVar5);
            func_0x000107c61654();
            func_0x0001000b44c0(uVar11,uVar9);
          }
          else {
            FUN_1039180dc();
            puVar13 = &UNK_1106ac508;
            func_0x000107c613f8(&UNK_1106ac508,uVar10,0,0);
            func_0x000107c61654();
          }
          uVar4 = *(undefined8 *)(lVar14 + 0xd8);
          (**(code **)(lVar14 + 0x60))(puVar13);
          func_0x000107c61170(uVar4);
          func_0x000107c614ac(puVar13);
          uVar4 = 0;
          uVar16 = *(ulong *)(lVar14 + 0xd0);
          uVar9 = *(ulong *)(lVar14 + 0xe0);
        } while (uVar9 != *(ulong *)(lVar14 + 0xc0));
      }
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar7 = *(long *)(uVar16 + 0x10);
      if (lVar7 == 0) {
        func_0x000107c61434(uVar16);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        lVar2 = *(long *)(lVar14 + 0x98);
        lVar12 = *(long *)(lVar14 + 0xa0);
        func_0x000107c61434(uVar16);
        func_0x000100403514(0,lVar7,0);
        uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
        lVar17 = uVar16 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff));
        lVar12 = *(long *)(lVar12 + 0x48);
        do {
          lVar19 = *(long *)(lVar14 + 0xa8);
          FUN_1039182a8(lVar17,lVar19,FUN_103917cd0);
          puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar2 + 0x14));
          uVar4 = *puVar1;
          uVar11 = puVar1[1];
          func_0x000107c61434(uVar11);
          FUN_1039185b8(lVar19,FUN_103917cd0);
          uVar9 = *(ulong *)(puVar13 + 0x10);
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
            func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
          }
          *(ulong *)(puVar13 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puVar13 + uVar9 * 0x10 + 0x20) = uVar4;
          *(undefined8 *)(puVar13 + uVar9 * 0x10 + 0x28) = uVar11;
          lVar17 = lVar17 + lVar12;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      puVar5 = PTR___sSSN_11034da80;
      uVar4 = *(undefined8 *)(lVar14 + 0xb0);
      uVar11 = *(undefined8 *)(lVar14 + 0xb8);
      uVar18 = *(undefined8 *)(lVar14 + 0xa8);
      uVar15 = *(undefined8 *)(lVar14 + 0x90);
      puVar6 = puVar13;
      func_0x000107c5fc48(puVar13,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar13);
      puVar13 = puVar6;
      func_0x00010b5fb448(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = puVar13;
      func_0x000107c5fc54(puVar13,puVar5);
      func_0x000107c61170(puVar13);
      uVar9 = uVar16;
      FUN_103916d50(uVar16,puVar6);
      func_0x000107c61430(uVar16,2);
      func_0x000107c6142c(puVar6);
      func_0x000107c615c0(uVar11);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar18);
      func_0x000107c615c0(uVar15);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000103916514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar14 + 8))(uVar9);
        return;
      }
LAB_103916680:
      func_0x000107c60e78();
LAB_103916684:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103916688);
      (*pcVar3)();
    }
    pcVar3 = FUN_103916688;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 10391610c; end: 103916687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391610c(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long unaff_x22;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(unaff_x22 + 0xd0);
  lVar8 = *(long *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar8 + 8))(uVar4,uVar11);
  func_0x000107c61558();
  uVar15 = *(ulong *)(unaff_x22 + 0xd0);
  uVar9 = uVar15;
  if ((uVar10 & 1) == 0) {
    uVar9 = 0;
    FUN_103917e20(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
  }
  uVar10 = *(ulong *)(uVar9 + 0x10);
  uVar15 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar10) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_103917e20(uVar15,uVar10 + 1,1,uVar9);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  *(ulong *)(uVar15 + 0x10) = uVar10 + 1;
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  FUN_10391811c(uVar4,uVar15 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x48) * uVar10);
  func_0x000107c61170(uVar11);
  uVar9 = *(ulong *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  if (uVar9 != *(ulong *)(unaff_x22 + 0xc0)) {
    do {
      *(undefined8 *)(unaff_x22 + 200) = uVar4;
      *(ulong *)(unaff_x22 + 0xd0) = uVar15;
      uVar10 = *(ulong *)(unaff_x22 + 0x58);
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103916640);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar9;
        func_0x000100fb0d50();
      }
      *(ulong *)(unaff_x22 + 0xd8) = uVar10;
      *(ulong *)(unaff_x22 + 0xe0) = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10391663c);
        (*pcVar3)();
      }
      uVar9 = ((undefined8 *)(uVar10 + _DAT_112fda130))[1];
      if (uVar9 >> 0x3c < 0xf) {
        uVar11 = *(undefined8 *)(uVar10 + _DAT_112fda130);
        puVar5 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar11,uVar9);
        uVar4 = uVar11;
        func_0x000107c5ee20(uVar11,uVar9);
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        func_0x000107c4636c();
        *(undefined **)(unaff_x22 + 0xe8) = puVar5;
        func_0x000107c61170(uVar4);
        puVar13 = *(undefined **)(unaff_x22 + 0x50);
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c61174(puVar13);
          func_0x0001000b44c0(uVar11,uVar9);
          puVar13 = puVar5;
          func_0x00010801f580(puVar5,0);
          func_0x000107c61180();
          if (puVar13 != (undefined *)0x0) {
            func_0x00010795025c();
            func_0x00010b5f9f38();
            func_0x000107c61170(puVar13);
          }
          puVar13 = puVar5;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) goto LAB_103916684;
          puVar6 = puVar13;
          func_0x000107c4c944();
          func_0x000107c61170(puVar13);
          if (puVar6 == (undefined *)0x0) {
            func_0x0001079507c0(puVar5);
          }
          else {
            func_0x000107950750();
          }
          uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
          func_0x000107c61180();
          func_0x000107c5ee94(uVar4);
          func_0x000107c61170(puVar5);
          *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10391605c;
          func_0x000107c61448(unaff_x22 + 0x10,1);
          FUN_103917414();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
            return;
          }
          goto LAB_103916680;
        }
        puVar5 = puVar13;
        func_0x000107c61174(puVar13);
        func_0x000107c5ed30(puVar13);
        func_0x000107c61170(puVar5);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar11,uVar9);
      }
      else {
        FUN_1039180dc();
        puVar13 = &UNK_1106ac508;
        func_0x000107c613f8(&UNK_1106ac508,uVar10,0,0);
        func_0x000107c61654();
      }
      uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
      (**(code **)(unaff_x22 + 0x60))(puVar13);
      func_0x000107c61170(uVar4);
      func_0x000107c614ac(puVar13);
      uVar4 = 0;
      uVar15 = *(ulong *)(unaff_x22 + 0xd0);
      uVar9 = *(ulong *)(unaff_x22 + 0xe0);
    } while (uVar9 != *(ulong *)(unaff_x22 + 0xc0));
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = *(long *)(uVar15 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c61434(uVar15);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x98);
    lVar12 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61434(uVar15);
    func_0x000100403514(0,lVar8,0);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    lVar16 = uVar15 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    do {
      lVar18 = *(long *)(unaff_x22 + 0xa8);
      FUN_1039182a8(lVar16,lVar18,FUN_103917cd0);
      puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar2 + 0x14));
      uVar4 = *puVar1;
      uVar11 = puVar1[1];
      func_0x000107c61434(uVar11);
      FUN_1039185b8(lVar18,FUN_103917cd0);
      uVar9 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
        func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar13 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar13 + uVar9 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(puVar13 + uVar9 * 0x10 + 0x28) = uVar11;
      lVar16 = lVar16 + lVar12;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  puVar5 = PTR___sSSN_11034da80;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar6 = puVar13;
  func_0x000107c5fc48(puVar13,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar13);
  puVar13 = puVar6;
  func_0x00010b5fb448(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar13;
  func_0x000107c5fc54(puVar13,puVar5);
  func_0x000107c61170(puVar13);
  uVar9 = uVar15;
  FUN_103916d50(uVar15,puVar6);
  func_0x000107c61430(uVar15,2);
  func_0x000107c6142c(puVar6);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103916514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar9);
    return;
  }
LAB_103916680:
  func_0x000107c60e78();
LAB_103916684:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103916688);
  (*pcVar3)();
}



/* Entry: 103916688; end: 103916b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103916688(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar11 + 8))(uVar10,uVar9);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  (**(code **)(unaff_x22 + 0x60))(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c614ac(uVar10);
  lVar11 = *(long *)(unaff_x22 + 0xd0);
  uVar12 = *(ulong *)(unaff_x22 + 0xe0);
  if (uVar12 != *(ulong *)(unaff_x22 + 0xc0)) {
    do {
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(long *)(unaff_x22 + 0xd0) = lVar11;
      uVar6 = *(ulong *)(unaff_x22 + 0x58);
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103916b78);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar6 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar12;
        func_0x000100fb0d50();
      }
      *(ulong *)(unaff_x22 + 0xd8) = uVar6;
      *(ulong *)(unaff_x22 + 0xe0) = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103916b74);
        (*pcVar3)();
      }
      uVar12 = ((undefined8 *)(uVar6 + _DAT_112fda130))[1];
      if (uVar12 >> 0x3c < 0xf) {
        uVar9 = *(undefined8 *)(uVar6 + _DAT_112fda130);
        puVar4 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar9,uVar12);
        uVar10 = uVar9;
        func_0x000107c5ee20(uVar9,uVar12);
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        func_0x000107c4636c();
        *(undefined **)(unaff_x22 + 0xe8) = puVar4;
        func_0x000107c61170(uVar10);
        puVar14 = *(undefined **)(unaff_x22 + 0x50);
        if (puVar4 != (undefined *)0x0) {
          func_0x000107c61174(puVar14);
          func_0x0001000b44c0(uVar9,uVar12);
          puVar14 = puVar4;
          func_0x00010801f580(puVar4,0);
          func_0x000107c61180();
          if (puVar14 != (undefined *)0x0) {
            func_0x00010795025c();
            func_0x00010b5f9f38();
            func_0x000107c61170(puVar14);
          }
          puVar14 = puVar4;
          func_0x000107c5ca90();
          func_0x000107c61180();
          if (puVar14 == (undefined *)0x0) goto LAB_103916b7c;
          puVar5 = puVar14;
          func_0x000107c4c944();
          func_0x000107c61170(puVar14);
          if (puVar5 == (undefined *)0x0) {
            func_0x0001079507c0(puVar4);
          }
          else {
            func_0x000107950750();
          }
          uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
          func_0x000107c61180();
          func_0x000107c5ee94(uVar10);
          func_0x000107c61170(puVar4);
          *(undefined8 *)(unaff_x22 + 0x38) = uVar9;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_10391605c;
          func_0x000107c61448(unaff_x22 + 0x10,1);
          FUN_103917414();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
            return;
          }
          goto LAB_103916b78;
        }
        puVar4 = puVar14;
        func_0x000107c61174(puVar14);
        func_0x000107c5ed30(puVar14);
        func_0x000107c61170(puVar4);
        func_0x000107c61654();
        func_0x0001000b44c0(uVar9,uVar12);
      }
      else {
        FUN_1039180dc();
        puVar14 = &UNK_1106ac508;
        func_0x000107c613f8(&UNK_1106ac508,uVar6,0,0);
        func_0x000107c61654();
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      (**(code **)(unaff_x22 + 0x60))(puVar14);
      func_0x000107c61170(uVar10);
      func_0x000107c614ac(puVar14);
      lVar11 = *(long *)(unaff_x22 + 0xd0);
      uVar12 = *(ulong *)(unaff_x22 + 0xe0);
    } while (uVar12 != *(ulong *)(unaff_x22 + 0xc0));
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(lVar11 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c61434(lVar11);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x98);
    lVar8 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61434(lVar11);
    func_0x000100403514(0,lVar13,0);
    uVar12 = (ulong)*(byte *)(lVar8 + 0x50);
    lVar15 = lVar11 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar8 + 0x48);
    do {
      lVar18 = *(long *)(unaff_x22 + 0xa8);
      FUN_1039182a8(lVar15,lVar18,FUN_103917cd0);
      puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar2 + 0x14));
      uVar10 = *puVar1;
      uVar9 = puVar1[1];
      func_0x000107c61434(uVar9);
      FUN_1039185b8(lVar18,FUN_103917cd0);
      uVar12 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar12) {
        func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar14 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puVar14 + uVar12 * 0x10 + 0x20) = uVar10;
      *(undefined8 *)(puVar14 + uVar12 * 0x10 + 0x28) = uVar9;
      lVar15 = lVar15 + lVar8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar4 = PTR___sSSN_11034da80;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar5 = puVar14;
  func_0x000107c5fc48(puVar14,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar14);
  puVar14 = puVar5;
  func_0x00010b5fb448(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar14;
  func_0x000107c5fc54(puVar14,puVar4);
  func_0x000107c61170(puVar14);
  lVar13 = lVar11;
  FUN_103916d50(lVar11,puVar5);
  func_0x000107c61430(lVar11,2);
  func_0x000107c6142c(puVar5);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000103916a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar13);
    return;
  }
LAB_103916b78:
  func_0x000107c60e78();
LAB_103916b7c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103916b80);
  (*pcVar3)();
}



/* Entry: 103916b80; end: 103916d03; -[MemoriesMemTwoShareableMediaProvider generateShareableMediaWithSnaps:errorHandler:completion:] */

void FUN_103916b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x000103a76890(0);
  func_0x000107c5fc54(param_3,uVar1);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar5 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1106ac380;
    func_0x000107c613fc(&UNK_1106ac380,0x18,7);
    *(long *)(puVar4 + 0x10) = param_4;
    pcVar5 = FUN_103917c2c;
  }
  puVar2 = &UNK_1106ac330;
  func_0x000107c613fc(&UNK_1106ac330,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1106ac358;
  func_0x000107c613fc(&UNK_1106ac358,0x40,7);
  *(code **)(puVar3 + 0x10) = FUN_103917b1c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(code **)(puVar3 + 0x30) = pcVar5;
  *(undefined **)(puVar3 + 0x38) = puVar4;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_3);
  FUN_103915a94(pcVar5,puVar4);
  uVar1 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dc22838,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  FUN_103917c1c(pcVar5,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103916d04; end: 103916d4f;  */

void FUN_103916d04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103917c64(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103916d50; end: 103917413;  */

undefined * FUN_103916d50(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined8 *puVar14;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long alStack_110 [2];
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_103918264();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar17 - extraout_x12);
  lVar6 = 0;
  FUN_103917cd0();
  lVar24 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar18 = (long)puVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar18 - extraout_x12_00;
  lVar6 = 0x112fae130;
  func_0x0001000285a8(0x112fae130,&UNK_10dc22858);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar25 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar25 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = lVar19 - extraout_x12_02;
  uVar27 = *(ulong *)(param_1 + 0x10);
  uVar20 = *(ulong *)(param_2 + 0x10);
  uVar22 = uVar20;
  if (uVar27 <= uVar20) {
    uVar22 = uVar27;
  }
  FUN_103917f9c(0,uVar22,0);
  alStack_110[1] = param_2;
  if (uVar22 != 0) {
    uVar26 = 0;
    puVar10 = (undefined8 *)(param_2 + 0x28);
    do {
      if (uVar27 == uVar26) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103917408);
        (*pcVar3)();
      }
      FUN_1039182a8(param_1 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar24 + 0x48) * uVar26,lVar18,FUN_103917cd0);
      if (uVar20 == uVar26) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10391740c);
        (*pcVar3)();
      }
      uVar9 = puVar10[-1];
      uVar11 = *puVar10;
      puVar7 = (undefined8 *)(lVar25 + *(int *)(lVar6 + 0x30));
      FUN_10391811c(lVar18,lVar25);
      *puVar7 = uVar9;
      puVar7[1] = uVar11;
      FUN_1039182a8(lVar25,puVar17,FUN_103918264);
      puVar7 = puVar17;
      func_0x000107c614c4(puVar17,lVar5);
      if ((int)puVar7 == 1) {
        (**(code **)(lVar12 + 0x20))(lVar13,puVar17,lVar4);
        puVar8 = PTR_PTR_1126b1c68;
        func_0x000107c61168();
        uVar21 = uVar11;
        func_0x000107c61434(uVar11);
        func_0x000107c5ed90();
        func_0x000107c5fadc(uVar9,uVar11);
        func_0x000107c5de5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar21);
        func_0x000107c61170(uVar9);
        (**(code **)(lVar12 + 8))(lVar13,lVar4);
      }
      else {
        uVar21 = *puVar17;
        puVar8 = PTR_PTR_1126b1c68;
        func_0x000107c61168();
        func_0x000107c61434(uVar11);
        func_0x000107c5fadc(uVar9,uVar11);
        func_0x000107c45148();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar21);
      }
      func_0x0001039182ec(lVar25);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_103917f9c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      uVar26 = uVar26 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar8;
      puVar10 = puVar10 + 2;
    } while (uVar22 != uVar26);
  }
  if (uVar20 < uVar27) {
    uVar26 = uVar22;
    if ((long)uVar22 <= (long)uVar20) {
      uVar26 = uVar20;
    }
    puVar17 = (undefined8 *)(alStack_110[1] + uVar22 * 0x10 + 0x28);
    do {
      if (uVar27 == uVar22) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103917410);
        (*pcVar3)();
      }
      FUN_1039182a8(param_1 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar24 + 0x48) * uVar22,lVar15,FUN_103917cd0);
      if (uVar20 == uVar22) {
        FUN_1039185b8(lVar15,FUN_103917cd0);
        return puVar2;
      }
      if (uVar26 == uVar22) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103917414);
        (*pcVar3)();
      }
      uVar9 = puVar17[-1];
      uVar11 = *puVar17;
      puVar10 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x30));
      FUN_10391811c(lVar15,lVar19);
      *puVar10 = uVar9;
      puVar10[1] = uVar11;
      func_0x000103918334(lVar19,lVar16);
      puVar10 = (undefined8 *)(lVar16 + *(int *)(lVar6 + 0x30));
      uVar9 = *puVar10;
      uVar21 = puVar10[1];
      FUN_1039182a8(lVar16,puVar14,FUN_103918264);
      puVar10 = puVar14;
      func_0x000107c614c4(puVar14,lVar5);
      if ((int)puVar10 == 1) {
        (**(code **)(lVar12 + 0x20))(lVar13,puVar14,lVar4);
        puVar8 = PTR_PTR_1126b1c68;
        func_0x000107c61168();
        func_0x000107c61434(uVar11);
        func_0x000107c5ed90();
        func_0x000107c5fadc(uVar9,uVar21);
        func_0x000107c5de5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar9);
        (**(code **)(lVar12 + 8))(lVar13,lVar4);
      }
      else {
        uVar23 = *puVar14;
        puVar8 = PTR_PTR_1126b1c68;
        func_0x000107c61168();
        func_0x000107c61434(uVar11);
        func_0x000107c5fadc(uVar9,uVar21);
        func_0x000107c45148();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar23);
      }
      func_0x0001039182ec(lVar16);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_103917f9c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      uVar22 = uVar22 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar8;
      puVar17 = puVar17 + 2;
    } while (uVar27 != uVar22);
  }
  return puVar2;
}



/* Entry: 103917414; end: 10391761f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103917414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [2];
  
  lVar3 = 0;
  uStack_c0 = param_6;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)&uStack_c0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(auStack_80);
  uStack_b8 = auStack_80[0];
  (**(code **)(lVar8 + 0x10))(lVar12,param_5,lVar3);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_1106ac3a8;
  func_0x000107c613fc(&UNK_1106ac3a8,uVar11 + 0x10,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  (**(code **)(lVar8 + 0x20))(puVar4 + uVar9,lVar12,lVar3);
  *(undefined8 *)(puVar4 + uVar11) = param_1;
  *(undefined8 *)(puVar4 + uVar11 + 8) = uStack_c0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x103918160;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = (undefined *)0x103918e54;
  puStack_98 = &UNK_1106ac3c0;
  ppuVar5 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_88;
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1106ac3f8;
  func_0x000107c613fc(&UNK_1106ac3f8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  pcStack_90 = FUN_1039181d0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1012519d0;
  puStack_98 = &UNK_1106ac410;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_88);
  uVar2 = uStack_b8;
  func_0x000107c5cee0(uStack_b8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103917620; end: 103917a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103917620(long param_1,long param_2,undefined *param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong auStack_b0 [4];
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  lVar9 = param_2;
  FUN_103917cd0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar11 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12);
  func_0x00010b5f824c();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar13 = 0;
    lVar9 = 0;
  }
  else {
    lVar13 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_1106ac448;
  func_0x000107c613fc(&UNK_1106ac448,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar13;
  *(long *)(puVar4 + 0x18) = lVar9;
  pcStack_70 = FUN_103918238;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101485318;
  puStack_78 = &UNK_1106ac460;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar14 = *(ulong *)(param_1 + _DAT_112fda348);
  if ((long)uVar14 < 0) {
    uVar14 = uVar14 & 0x7fffffffffffffff;
    auStack_b0[3] = param_5;
    func_0x000107c61174();
    uVar7 = uVar14;
    func_0x000107c5ee70();
    uVar10 = uVar7;
    func_0x00010b5fb2c4(param_3,uVar7,0,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    puVar4 = param_3;
    func_0x000107c5faec();
    uVar7 = uVar10;
    func_0x000107c61170();
    auStack_b0[1] = _DAT_11380cc98;
    auStack_b0[2] = uVar14;
    func_0x000107c5ed6c();
    uVar14 = (ulong)param_3 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar14 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61434(uVar10);
      uVar14 = uVar10;
    }
    else {
      uVar14 = uVar10;
      func_0x000107c5fadc();
      puVar8 = puVar4;
      func_0x000107c5c178();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar4 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      puStack_90 = puVar4;
      uStack_88 = uVar14;
      func_0x000107c61434(uVar14);
      func_0x000107c5fb78(0x2e,0xe100000000000000);
      func_0x000107c6142c(uVar14);
      uVar14 = uStack_88;
      func_0x000107c61434(uStack_88);
      func_0x000107c5fb78(param_3,uVar7);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar7);
      uVar14 = uStack_88;
      puVar4 = puStack_90;
    }
    func_0x000107c6142c(uVar10);
    lVar9 = 0;
    func_0x000107c5ede0();
    uVar7 = auStack_b0[2];
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar12,auStack_b0[2] + auStack_b0[1],lVar9);
    uVar6 = 0;
    FUN_103918264(0);
    func_0x000107c6159c(puVar12,uVar6,1);
    puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar2 + 0x14));
    *puVar1 = puVar4;
    puVar1[1] = uVar14;
    *(undefined **)((long)puVar12 + (long)*(int *)(lVar2 + 0x18)) = puVar3;
    FUN_10391811c(puVar12,lVar11);
    uVar14 = auStack_b0[3];
    uVar6 = *(undefined8 *)(*(long *)(auStack_b0[3] + 0x40) + 0x28);
    func_0x000107c61174(puVar3);
    FUN_10391811c(lVar11,uVar6);
    func_0x000107c61450(uVar14);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar7);
  }
  else {
    uVar15 = *(undefined8 *)(uVar14 + _DAT_112fda2d8);
    *puVar12 = uVar15;
    uVar6 = 0;
    FUN_103918264(0);
    func_0x000107c6159c(puVar12,uVar6,0);
    func_0x000107c61174(uVar14);
    func_0x000107c61174();
    func_0x000107c5ee70();
    uVar6 = uVar15;
    func_0x00010b5fb2c4(param_3,uVar15,0,0);
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    puVar4 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar2 + 0x14));
    *puVar1 = puVar4;
    puVar1[1] = uVar6;
    *(undefined **)((long)puVar12 + (long)*(int *)(lVar2 + 0x18)) = puVar3;
    func_0x000103a77c18();
    FUN_1039182a8(puVar12,lVar11,FUN_103917cd0);
    FUN_10391811c(lVar11,*(undefined8 *)(*(long *)(param_5 + 0x40) + 0x28));
    func_0x000107c61450(param_5);
    func_0x000107c61170(uVar14);
    FUN_1039185b8(puVar12,FUN_103917cd0);
  }
  return;
}



/* Entry: 103917a6c; end: 103917ab7;  */

void FUN_103917a6c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103917ab8; end: 103917aeb;  */

void FUN_103917ab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103917aec; end: 103917afb; -[MemoriesMemTwoShareableMediaProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103917aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae0f8));
  return;
}



/* Entry: 103917afc; end: 103917b1b;  */

void FUN_103917afc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff720);
  return;
}



/* Entry: 103917b1c; end: 103917b23;  */

void FUN_103917b1c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_103917c64(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103917b24; end: 103917b67;  */

void FUN_103917b24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103917b68; end: 103917bdf;  */

void FUN_103917b68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103917be0;
  plVar7[10] = lVar3;
  plVar7[0xb] = lVar6;
  plVar7[8] = lVar2;
  plVar7[9] = lVar5;
  plVar7[6] = lVar1;
  plVar7[7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1039159a4,0,0);
  return;
}



/* Entry: 103917be0; end: 103917c1b;  */

void FUN_103917be0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103917c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103917c1c; end: 103917c2b;  */

void FUN_103917c1c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103917c2c; end: 103917c63;  */

void FUN_103917c2c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103917c64; end: 103917ca7;  */

void FUN_103917c64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2fe30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1c68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f2fe30 = puVar1;
  return;
}



/* Entry: 103917ca8; end: 103917ccf;  */

void FUN_103917ca8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 103917cd0; end: 103917ceb;  */

void FUN_103917cd0(undefined8 param_1)

{
  if (lRam000000011356d668 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e78c504);
  return;
}



/* Entry: 103917cec; end: 103917d8b;  */

void FUN_103917cec(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103917d8c; end: 103917dc3;  */

undefined1  [16] FUN_103917d8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f175920;
  auVar1._0_8_ = 0xd000000000000052;
  return auVar1;
}



/* Entry: 103917dc4; end: 103917e1f;  */

void FUN_103917dc4(void)

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
    FUN_103917c64();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112fae138;
  plVar5 = (long *)&UNK_10dc22860;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103917e20; end: 103917f9b;  */

undefined * FUN_103917e20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103917f9c);
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
    puVar4 = (undefined *)0x112fae128;
    func_0x0001000285a8(0x112fae128,&UNK_10dc22848);
    lVar5 = 0;
    FUN_103917cd0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103917f94);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103917f98);
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
  FUN_103917cd0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 103917f9c; end: 103917fb7;  */

void FUN_103917f9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103917fb8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103917fb8; end: 1039180db;  */

undefined * FUN_103917fb8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1039180dc);
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
    FUN_103917dc4();
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
    FUN_103917c64(0);
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



/* Entry: 1039180dc; end: 10391811b;  */

void FUN_1039180dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011356d650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22960;
  func_0x000107c61520(&UNK_10dc22960,&UNK_1106ac508);
  puRam000000011356d650 = puVar1;
  return;
}



/* Entry: 10391811c; end: 1039181b3;  */

undefined8 FUN_10391811c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103917cd0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1039181b4; end: 1039181cf;  */

void FUN_1039181b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1039181d0; end: 103918237;  */

void FUN_1039181d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar2 = param_1;
  func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar3,uVar1);
  return;
}



/* Entry: 103918238; end: 103918263;  */

undefined8 FUN_103918238(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c5fadc(uVar1);
    return uVar1;
  }
  return 0;
}


