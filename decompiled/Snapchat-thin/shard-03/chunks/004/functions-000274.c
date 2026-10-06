/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102848c08; end: 102848c77;  */

void FUN_102848c08(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x00010284b814(0,0x112ec4380,&PTR_PTR_1126be658);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102848c78; end: 1028490f7;  */

/* WARNING: Possible PIC construction at 0x000102848d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102848d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102848e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102848d90) */
/* WARNING: Removing unreachable block (ram,0x000102848e54) */
/* WARNING: Removing unreachable block (ram,0x000102848d94) */
/* WARNING: Removing unreachable block (ram,0x000102848da4) */
/* WARNING: Removing unreachable block (ram,0x000102848dcc) */
/* WARNING: Removing unreachable block (ram,0x000102848e78) */
/* WARNING: Removing unreachable block (ram,0x000102848dfc) */
/* WARNING: Removing unreachable block (ram,0x000102848dac) */
/* WARNING: Removing unreachable block (ram,0x000102848d5c) */
/* WARNING: Removing unreachable block (ram,0x000102848e04) */

void FUN_102848c78(long param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar4 = (ulong *)(param_1 + 0x40);
  uVar3 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if (-uVar3 < 0x40) {
    uVar5 = ~(-1L << (-uVar3 & 0x3f));
  }
  uVar5 = uVar5 & *puVar4;
  func_0x000107c61434();
  lVar6 = 0;
  lVar2 = 0;
  do {
    if (uVar5 != 0) {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 8 +
                       lVar6 * 0x200);
      func_0x000107c61174();
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar6 == 0) {
        func_0x000107c4cde0(param_3);
        func_0x000107c61180();
        func_0x000107c5faec();
      }
      else {
        func_0x000107c5faec();
        param_3 = lVar6;
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    lVar6 = lVar2 + 1;
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102848e98);
      (*pcVar1)();
    }
    if ((long)(0x3f - uVar3 >> 6) <= lVar6) {
      func_0x000101d102f4(param_1,puVar4,~uVar3,0,0);
      param_3 = *param_2;
      *param_2 = 0;
      goto code_r0x000107c61170;
    }
    uVar5 = puVar4[lVar6];
    lVar2 = lVar2 + 1;
  } while( true );
}



/* Entry: 1028490f8; end: 10284913f;  */

undefined8 FUN_1028490f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102849140; end: 1028491b7;  */

void FUN_102849140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x00010284b814(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c453dc();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001070b31f8();
  func_0x000107c61170(uVar2);
  func_0x000107c6010c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1028491b8; end: 102849abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028491b8(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = *(long *)(unaff_x20 + _DAT_112ec4308);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar14 = uVar13;
      if (0x7fffffffffffffff < param_1) {
        uVar14 = param_1;
      }
      func_0x000107c60480();
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar15 = 0;
    while (uVar14 != uVar15) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028494cc);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar15 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar15;
        FUN_10284b0a0(uVar15,param_1,&PTR_PTR_1126dd8e0,0x112ea4798);
      }
      uVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028494c8);
        (*pcVar2)();
      }
      func_0x000107c49830(uVar5);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c490d8();
      func_0x000107c61170(uVar5);
      uVar15 = uVar15 + 1;
      if (puVar10 != (undefined *)0x0) {
        puVar7 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar6 = puVar8;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_10284a954(0,puVar6 + 1,1,puVar8,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                        0x112d4a820,&UNK_10d910f30);
        }
        uVar5 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar5 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar15) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_10284a954(puVar8,uVar15 + 1,1,puVar7,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570
                        ,0x112d4a820,&UNK_10d910f30);
          uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar5 + 0x10) = uVar15 + 1;
        *(undefined **)(uVar5 + uVar15 * 8 + 0x20) = puVar10;
        uVar15 = uVar1;
      }
    }
    uVar9 = 0;
    func_0x00010284b814(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar10 = puVar8;
    func_0x000107c5fc48(puVar8,uVar9);
    func_0x000107c6142c(puVar8);
    lVar11 = lVar4;
    func_0x000107c42ff8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar10);
    puVar8 = &UNK_110556f50;
    func_0x000107c613fc(&UNK_110556f50,0x20,7);
    *(ulong *)(puVar8 + 0x10) = param_1;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    pcStack_70 = FUN_10284b098;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100bcda3c;
    puStack_78 = &UNK_110556f68;
    ppuVar12 = &puStack_90;
    puStack_68 = puVar8;
    func_0x000107c60bc4(ppuVar12);
    puVar8 = puStack_68;
    func_0x000107c61434(param_1);
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar8);
    func_0x000107c4db80(lVar11);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar11);
  }
  puVar8 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar8;
}



/* Entry: 102849ac0; end: 102849c7f;  */

/* WARNING: Possible PIC construction at 0x000102849c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102849c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102849c60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102849c20) */
/* WARNING: Removing unreachable block (ram,0x000102849c08) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102849c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102849ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ec4348;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x00010451c820(0);
    func_0x0001045198cc(param_1,param_2,param_3,0,3,uVar2);
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar2 = 6;
    func_0x000104515e00(6,2,0x14,0xc);
    lVar3 = *(long *)(unaff_x20 + _DAT_112ec4310);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      puVar4 = &UNK_110556f00;
      func_0x000107c613fc(&UNK_110556f00,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = param_1;
      *(undefined8 *)(puVar4 + 0x18) = uVar2;
      *(long *)(puVar4 + 0x20) = lVar1;
      *(long *)(puVar4 + 0x28) = lVar3;
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar2);
      func_0x000107c615f0(lVar1);
      func_0x000107c615f0(lVar3);
      func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dae4538,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102849c80; end: 102849cef;  */

void FUN_102849c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102849cf0,uVar1,uVar2);
  return;
}



/* Entry: 102849cf0; end: 102849e07;  */

void FUN_102849cf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000104515b14(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c615f0(uVar5);
  func_0x0001045158a8(uVar2,uVar3,0,uVar5);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102849e08;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,1);
  uVar5 = 0x112ec4188;
  func_0x0001000285a8(0x112ec4188,&UNK_10dae4360);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10283dde8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110556f18;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  func_0x000107c61174(uVar2);
  func_0x000107c4ab9c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102849e08; end: 102849e5b;  */

void FUN_102849e08(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    uVar1 = 0x10284b9b4;
  }
  else {
    uVar1 = 0x10284b998;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (uVar1,*(undefined8 *)(lVar2 + 0xf8),*(undefined8 *)(lVar2 + 0x100));
  return;
}



/* Entry: 102849e5c; end: 102849e7f;  */

void FUN_102849e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x80) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102849e80,0,0);
  return;
}



/* Entry: 102849e80; end: 10284a103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102849e80(void)

{
  int iVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar10 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x38,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x88) = lVar10;
  if (lVar10 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x58);
    lVar8 = *(long *)(lVar6 + 0x10);
    *(long *)(unaff_x22 + 0x90) = lVar8;
    uVar4 = _DAT_112ec4318;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined **)(unaff_x22 + 0xa8) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
      uVar11 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar11;
      uVar2 = *(undefined1 *)(lVar6 + 0x30);
      *(undefined1 *)(unaff_x22 + 0xd0) = uVar2;
      func_0x000101107198(uVar9,uVar11,uVar2);
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar10 = *(long *)(unaff_x22 + 0x30);
      FUN_10284b5e0(unaff_x22 + 0x10,uVar4);
      piVar7 = *(int **)(lVar10 + 0x10);
      iVar1 = *piVar7;
      plVar3 = (long *)(ulong)(uint)piVar7[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10284a104;
                    /* WARNING: Could not recover jumptable at 0x000102849f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar7))
                (uVar9,uVar11,uVar2,*(undefined8 *)(unaff_x22 + 0x60),
                 *(undefined8 *)(unaff_x22 + 0x68),uVar4,lVar10);
      return;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = 0;
    func_0x00010451c820(0);
    func_0x0001045198cc(uVar4,uVar9,0,PTR___swiftEmptyArrayStorage_11034f1c8,3,uVar11);
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar9 = 6;
    func_0x000104515e00(6,2,0x14,0xc);
    lVar10 = *(long *)(lVar10 + _DAT_112ec4310);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    if (lVar10 == 0) {
      func_0x000107c61170(uVar11);
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
      puVar5 = &UNK_110557108;
      func_0x000107c613fc(&UNK_110557108,0x30,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar9;
      *(undefined8 *)(puVar5 + 0x20) = uVar12;
      *(long *)(puVar5 + 0x28) = lVar10;
      func_0x000107c61174(uVar4);
      func_0x000107c61174(uVar9);
      func_0x000107c615f0(uVar12);
      func_0x000107c615f0(lVar10);
      uVar12 = 0x23;
      func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dae4578,puVar5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar11);
      func_0x000107c61574(uVar12);
      func_0x000107c61574(puVar5);
    }
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010284a100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284a104; end: 10284a173;  */

void FUN_10284a104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  uVar4 = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined8 *)(lVar3 + 200) = param_1;
  uVar2 = *(undefined1 *)(lVar3 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xc0));
  func_0x000101107184(uVar4,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284a174,0,0);
  return;
}



/* Entry: 10284a174; end: 10284a4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284a174(void)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar12 = *(long *)(unaff_x22 + 200);
  if (lVar12 == 0) {
    func_0x00010284b604(unaff_x22 + 0x10);
    uVar3 = *(ulong *)(unaff_x22 + 0xa8);
  }
  else {
    uVar13 = *(ulong *)(unaff_x22 + 0xa8);
    func_0x00010284b604(unaff_x22 + 0x10);
    func_0x000107c61174();
    uVar3 = uVar13;
    func_0x000107c61550();
    uVar11 = *(ulong *)(unaff_x22 + 0xa8);
    if ((((uVar3 & 1) == 0) || ((uVar13 >> 0x3e & 1) != 0)) || (uVar4 = uVar11, (long)uVar11 < 0)) {
      if (uVar11 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar3 = uVar11;
        }
        func_0x000107c60480(uVar3);
        uVar11 = *(ulong *)(unaff_x22 + 0xa8);
      }
      uVar4 = 0;
      FUN_10284a954(0,uVar3 + 1,1,uVar11,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,
                    0x112d502b0,&UNK_10d9169a0);
      uVar13 = uVar4;
    }
    uVar13 = uVar13 & 0xffffffffffffff8;
    uVar11 = *(ulong *)(uVar13 + 0x10);
    uVar3 = uVar4;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_10284a954(uVar3,uVar11 + 1,1,uVar4,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,
                    0x112d502b0,&UNK_10d9169a0);
      uVar13 = uVar3 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
    *(long *)(uVar13 + uVar11 * 8 + 0x20) = lVar12;
    func_0x000107c61170(lVar12);
  }
  lVar12 = *(long *)(unaff_x22 + 0xa0) + 1;
  if (lVar12 == *(long *)(unaff_x22 + 0x90)) {
    lVar12 = *(long *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar5 = 0;
    func_0x00010451c820(0);
    func_0x0001045198cc(uVar6,uVar7,0,uVar3,3,uVar5);
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar7 = 6;
    func_0x000104515e00(6,2,0x14,0xc);
    lVar12 = *(long *)(lVar12 + _DAT_112ec4310);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    if (lVar12 == 0) {
      func_0x000107c61170(uVar5);
    }
    else {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
      puVar8 = &UNK_110557108;
      func_0x000107c613fc(&UNK_110557108,0x30,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar6;
      *(undefined8 *)(puVar8 + 0x18) = uVar7;
      *(undefined8 *)(puVar8 + 0x20) = uVar14;
      *(long *)(puVar8 + 0x28) = lVar12;
      func_0x000107c61174(uVar6);
      func_0x000107c61174(uVar7);
      func_0x000107c615f0(uVar14);
      func_0x000107c615f0(lVar12);
      uVar14 = 0x23;
      func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dae4578,puVar8,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(uVar14);
      func_0x000107c61574(puVar8);
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010284a488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xa0) = lVar12;
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  lVar12 = *(long *)(unaff_x22 + 0x58) + lVar12 * 0x18;
  uVar7 = *(undefined8 *)(lVar12 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  uVar5 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  uVar2 = *(undefined1 *)(lVar12 + 0x30);
  *(undefined1 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000101107198(uVar7,uVar5,uVar2);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar12 = *(long *)(unaff_x22 + 0x30);
  func_0x00010284b5e0(unaff_x22 + 0x10,uVar6);
  piVar10 = *(int **)(lVar12 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_10284a104;
                    /* WARNING: Could not recover jumptable at 0x00010284a448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (uVar7,uVar5,uVar2,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),
             uVar6,lVar12);
  return;
}



/* Entry: 10284a4e8; end: 10284a557;  */

void FUN_10284a4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284a558,uVar1,uVar2);
  return;
}



/* Entry: 10284a558; end: 10284a66f;  */

void FUN_10284a558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000104515b14(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c615f0(uVar5);
  func_0x0001045158a8(uVar2,uVar3,0,uVar5);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10284a670;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,1);
  uVar5 = 0x112ec4188;
  func_0x0001000285a8(0x112ec4188,&UNK_10dae4360);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10283dde8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110557120;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  func_0x000107c61174(uVar2);
  func_0x000107c4ab9c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10284a670; end: 10284a6c3;  */

void FUN_10284a670(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10284a6c4;
  }
  else {
    pcVar1 = FUN_10284a720;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xf8),*(undefined8 *)(lVar2 + 0x100));
  return;
}



/* Entry: 10284a6c4; end: 10284a71f;  */

void FUN_10284a6c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000100102924(unaff_x22 + 0xb0,unaff_x22 + 0x90);
  func_0x00010006e7f4(unaff_x22 + 0x90);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010284a71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284a720; end: 10284a78f;  */

void FUN_10284a720(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  func_0x00010006e7f4();
                    /* WARNING: Could not recover jumptable at 0x00010284a78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284a790; end: 10284a7eb; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin init] */

void FUN_10284a790(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapReactionMessagePlugin.MapReactionMessagePlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10284a7bc);
  (*pcVar1)();
}



/* Entry: 10284a7ec; end: 10284a893; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10284a7ec(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4308));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4310));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec4318));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4320));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec4328));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4330));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4338));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4340));
  param_1 = param_1 + _DAT_112ec4348;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10284a894; end: 10284a8b3;  */

void FUN_10284a894(void)

{
  func_0x000107c61168(&PTR_PTR_112865dc0);
  return;
}



/* Entry: 10284a8b4; end: 10284a92b;  */

void FUN_10284a8b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10284b9bc;
  plVar5[0x1c] = lVar3;
  plVar5[0x1d] = lVar2;
  plVar5[0x1a] = lVar4;
  plVar5[0x1b] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x1e] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x1f] = lVar3;
  plVar5[0x20] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102849cf0,lVar3,lVar4);
  return;
}



/* Entry: 10284a92c; end: 10284a93b;  */

long FUN_10284a92c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10284a93c; end: 10284a953;  */

void FUN_10284a93c(long param_1)

{
  func_0x00010284b604(param_1 + 0x20);
  return;
}



/* Entry: 10284a954; end: 10284aab3;  */

ulong FUN_10284a954(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10284aab4);
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
  FUN_10284aab4(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10284aab0);
      (*pcVar1)();
    }
    FUN_10284ab44(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 10284aab4; end: 10284ab43;  */

undefined *
FUN_10284aab4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_10284ac60(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 10284ab44; end: 10284ac5f;  */

long FUN_10284ab44(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10284ac5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10284ac60);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010284b814(0,param_5,param_6);
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
      func_0x00010284b814(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10284ac58);
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



/* Entry: 10284ac60; end: 10284acd7;  */

void FUN_10284ac60(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010284b814(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10284acd8; end: 10284ae33;  */

void FUN_10284acd8(void)

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
  
  func_0x0001000285a8(0x112ec4390,&UNK_10dae4558);
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
    if (uVar6 == 0) goto LAB_10284adb4;
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
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_10284adb4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10284ae34);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10284ae0c;
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
LAB_10284ae0c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10284ae34; end: 10284b097;  */

void FUN_10284ae34(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112ec4390;
  func_0x0001000285a8(0x112ec4390,&UNK_10dae4558);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10284b064:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10284b094);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10284b064;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10284b098);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 10284b098; end: 10284b09f;  */

/* WARNING: Possible PIC construction at 0x00010284972c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028498d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102849a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102849a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028495e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102849a7c) */
/* WARNING: Removing unreachable block (ram,0x000102849a4c) */
/* WARNING: Removing unreachable block (ram,0x000102849860) */
/* WARNING: Removing unreachable block (ram,0x000102849730) */
/* WARNING: Removing unreachable block (ram,0x000102849a04) */
/* WARNING: Removing unreachable block (ram,0x00010284973c) */
/* WARNING: Removing unreachable block (ram,0x0001028495e4) */
/* WARNING: Removing unreachable block (ram,0x0001028495ec) */
/* WARNING: Removing unreachable block (ram,0x0001028499e4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10284b098(double param_1,long param_2,long param_3)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  undefined *puVar6;
  undefined8 ******ppppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  uint uVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  long unaff_x20;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *******pppppppuStack_68;
  
  pppppppuVar1 = *(undefined8 ********)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    pppppppuStack_68 = (undefined8 *******)0x0;
    uVar3 = 0;
    func_0x00010284b814(0,0x112ec4378,&PTR_PTR_1126be690);
    pppppppuVar12 = &pppppppuStack_68;
    func_0x000107c5fc50(param_2,pppppppuVar12,uVar3);
    pppppppuVar17 = pppppppuStack_68;
    if (pppppppuStack_68 != (undefined8 *******)0x0) {
      pppppppuVar10 = pppppppuStack_68;
      if (param_3 == 0) {
        pppppppuVar15 = (undefined8 *******)((ulong)pppppppuStack_68 & 0xffffffffffffff8);
        if ((ulong)pppppppuStack_68 >> 0x3e == 0) {
          pppppppuVar16 = (undefined8 *******)pppppppuVar15[2];
        }
        else {
          pppppppuVar16 = pppppppuStack_68;
          if (-1 < (long)pppppppuStack_68) {
            pppppppuVar16 = pppppppuVar15;
          }
          func_0x000107c60480();
        }
        pppppppuVar10 = (undefined8 *******)PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (pppppppuVar16 != (undefined8 *******)0x0) {
          if (((ulong)pppppppuVar17 & 0xc000000000000001) == 0) {
            if (pppppppuVar15[2] == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1028499ec);
              (*pcVar2)();
            }
            ppppppuVar4 = pppppppuVar17[4];
            func_0x000107c61174();
            pppppppuVar17 = pppppppuVar12;
          }
          else {
            ppppppuVar4 = (undefined8 ******)0x0;
            FUN_10284b0a0(0,pppppppuVar17,&PTR_PTR_1126be690,0x112ec4378);
          }
          func_0x000107c4982c(ppppppuVar4);
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1028499f8);
            (*pcVar2)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1028499fc);
            (*pcVar2)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102849a00);
            (*pcVar2)();
          }
          pppppuVar19 = (undefined8 *****)(long)param_1;
          func_0x000107c61174();
          puVar9 = (undefined *)pppppppuVar10;
          func_0x000107c61558();
          uVar11 = (uint)puVar9;
          pppppppuStack_68 = pppppppuVar10;
          pppppuVar5 = pppppuVar19;
          func_0x00010035a314();
          uVar14 = (ulong)~(uint)pppppppuVar17 & 1;
          if (SCARRY8(*(long *)((long)pppppppuVar10 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102849a04);
            (*pcVar2)();
          }
          if (*(long *)((long)pppppppuVar10 + 0x18) <
              (long)(*(long *)((long)pppppppuVar10 + 0x10) + uVar14)) {
            FUN_10284ae34();
            pppppuVar5 = pppppuVar19;
            func_0x00010035a314();
            if (((uint)pppppppuVar17 & 1) != (uVar11 & 1)) {
              func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102849ac0);
              (*pcVar2)();
            }
          }
          else if (((ulong)puVar9 & 1) == 0) {
            FUN_10284acd8();
          }
          if (((ulong)pppppppuVar17 & 1) == 0) {
            pppppppuStack_68[((ulong)pppppuVar5 >> 6) + 8] =
                 (undefined8 ******)
                 ((ulong)pppppppuStack_68[((ulong)pppppuVar5 >> 6) + 8] |
                 1L << ((ulong)pppppuVar5 & 0x3f));
            pppppppuStack_68[6][(long)pppppuVar5] = pppppuVar19;
            pppppppuStack_68[7][(long)pppppuVar5] = ppppppuVar4;
          }
          else {
            pppppppuStack_68[7][(long)pppppuVar5] = ppppppuVar4;
          }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(ppppppuVar4);
          return;
        }
        func_0x000107c6142c(pppppppuVar17);
        if ((ulong)pppppppuVar1 >> 0x3e == 0) {
          pppppppuVar17 = *(undefined8 ********)(((ulong)pppppppuVar1 & 0xffffffffffffff8) + 0x10);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          pppppppuVar17 = (undefined8 *******)((ulong)pppppppuVar1 & 0xffffffffffffff8);
          if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar1) {
            pppppppuVar17 = pppppppuVar1;
          }
          func_0x000107c60480();
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
        if (pppppppuVar17 != (undefined8 *******)0x0) {
          ppppppuVar18 = (undefined8 ******)0x0;
          do {
            if (((ulong)pppppppuVar1 & 0xc000000000000001) == 0) {
              if (*(undefined8 *******)(((ulong)pppppppuVar1 & 0xffffffffffffff8) + 0x10) <=
                  ppppppuVar18) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1028499f4);
                (*pcVar2)();
              }
              ppppppuVar4 = pppppppuVar1[(long)ppppppuVar18 + 4];
              func_0x000107c61174();
            }
            else {
              ppppppuVar4 = ppppppuVar18;
              pppppppuVar12 = pppppppuVar1;
              FUN_10284b0a0(ppppppuVar18,pppppppuVar1,&PTR_PTR_1126dd8e0,0x112ea4798);
            }
            pppppppuVar15 = (undefined8 *******)((long)ppppppuVar18 + 1);
            if (SCARRY8((long)ppppppuVar18,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1028499f0);
              (*pcVar2)();
            }
            puVar6 = PTR_PTR_1126be658;
            func_0x000107c610f8();
            func_0x000107c453e4();
            ppppppuVar7 = ppppppuVar4;
            func_0x000107c4f954();
            if ((int)ppppppuVar7 == 1) {
              func_0x000107c49830();
              if ((long)ppppppuVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102849a0c);
                (*pcVar2)();
              }
              if ((*(long *)((long)pppppppuVar10 + 0x10) == 0) ||
                 (func_0x00010035a314(), ((ulong)pppppppuVar12 & 1) == 0)) {
                ppppppuVar4 = (undefined8 ******)0x0;
              }
              else {
                ppppppuVar4 = *(undefined8 *******)
                               (*(long *)((long)pppppppuVar10 + 0x38) + (long)ppppppuVar4 * 8);
                func_0x000107c61174(ppppppuVar4);
              }
              func_0x000107c52c8c(puVar6);
              goto code_r0x000107c61170;
            }
            if ((int)ppppppuVar7 == 2) {
              func_0x000107c424f8();
              func_0x000107c61180();
              if (ppppppuVar4 == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102849ab0);
                (*pcVar2)();
              }
              func_0x000107c610f8(PTR_PTR_1126be660);
              func_0x000107c46754();
              goto code_r0x000107c61170;
            }
            func_0x000107c61170(ppppppuVar4);
            puVar8 = puVar9;
            func_0x000107c61550();
            if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
               (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar8 = puVar9;
                }
                func_0x000107c60480();
              }
              pppppppuVar12 = (undefined8 *******)(puVar8 + 1);
              puVar8 = (undefined *)0x0;
              FUN_10284a954(0,pppppppuVar12,1,puVar9,0x112ec4380,&PTR_PTR_1126be658,0x112ec4388,
                            &UNK_10dae4548);
            }
            uVar13 = (ulong)puVar8 & 0xffffffffffffff8;
            uVar14 = *(ulong *)(uVar13 + 0x10);
            pppppppuVar16 = (undefined8 *******)(uVar14 + 1);
            puVar9 = puVar8;
            if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar14) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
              pppppppuVar12 = pppppppuVar16;
              FUN_10284a954(puVar9,pppppppuVar16,1,puVar8,0x112ec4380,&PTR_PTR_1126be658,0x112ec4388
                            ,&UNK_10dae4548);
              uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(undefined8 ********)(uVar13 + 0x10) = pppppppuVar16;
            *(undefined **)(uVar13 + uVar14 * 8 + 0x20) = puVar6;
            ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + 1);
          } while (pppppppuVar15 != pppppppuVar17);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pppppppuVar10);
      return;
    }
  }
  return;
}



/* Entry: 10284b0a0; end: 10284b25b;  */

ulong FUN_10284b0a0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10284b184);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10284b188);
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
  func_0x00010284b814(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10284b25c);
  (*pcVar2)();
}



/* Entry: 10284b25c; end: 10284b4d7;  */

undefined8 FUN_10284b25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar4 = &UNK_1105571f8;
  func_0x000107c613fc(&UNK_1105571f8,0x20,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar5 = &UNK_110557220;
  func_0x000107c613fc(&UNK_110557220,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10284b854;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x10284b9b0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_10283fc04;
  puStack_60 = &UNK_110557238;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6d0(param_2);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_48;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x5e,0xd1,0x1f,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10284b398);
  (*pcVar3)();
}



/* Entry: 10284b4d8; end: 10284b503;  */

void FUN_10284b4d8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  lVar13 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (uVar4 != 0) {
    if (uVar2 == 0) {
      func_0x000107c61428(lVar13 + 0x10,auStack_78,0,0);
      lVar13 = lVar13 + 0x10;
      func_0x000107c61618();
      if (lVar13 != 0) {
        lVar14 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar14 + 0x18) = 2;
        *(undefined8 *)(lVar14 + 0x10) = 1;
        *(undefined8 *)(lVar14 + 0x20) = uVar3;
        *(undefined8 *)(lVar14 + 0x28) = uVar5;
        func_0x000107c61434(uVar5);
        FUN_102849ac0(uVar1,uVar4,lVar14);
        func_0x000107c61170(lVar13);
        func_0x000107c61574(lVar14);
      }
    }
    else {
      uVar18 = uVar2 & 0xffffffffffffff8;
      if (uVar2 >> 0x3e == 0) {
        uVar19 = *(ulong *)(uVar18 + 0x10);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar19 = uVar2;
        if (-1 < (long)uVar2) {
          uVar19 = uVar18;
        }
        func_0x000107c60480();
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
      if (uVar19 != 0) {
        uVar15 = uVar4;
        uVar9 = 0;
        do {
          while( true ) {
            if ((uVar2 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar18 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x102848798);
                (*pcVar6)();
              }
              uVar7 = *(ulong *)(uVar2 + uVar9 * 8 + 0x20);
              func_0x000107c61174();
              uVar16 = uVar15;
            }
            else {
              uVar7 = uVar9;
              uVar16 = uVar2;
              FUN_10284b0a0(uVar9,uVar2,&PTR_PTR_1126dd8e0,0x112ea4798);
            }
            if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102848794);
              (*pcVar6)();
            }
            uVar17 = uVar9 + 1;
            func_0x000107c61174();
            uVar8 = uVar7;
            func_0x000107c424f8();
            func_0x000107c61180();
            if (uVar8 == 0) break;
            uVar9 = uVar8;
            func_0x000107c5faec();
            uVar15 = uVar16;
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar8);
            puVar10 = puVar12;
            func_0x000107c61558();
            puVar11 = puVar12;
            if (((ulong)puVar10 & 1) == 0) {
              uVar15 = *(long *)(puVar12 + 0x10) + 1;
              puVar11 = (undefined *)0x0;
              func_0x0001000d182c(0,uVar15,1,puVar12);
            }
            uVar8 = *(ulong *)(puVar11 + 0x10);
            uVar7 = uVar8 + 1;
            puVar12 = puVar11;
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar8) {
              puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              uVar15 = uVar7;
              func_0x0001000d182c(puVar12,uVar7,1,puVar11);
            }
            *(ulong *)(puVar12 + 0x10) = uVar7;
            *(ulong *)(puVar12 + uVar8 * 0x10 + 0x20) = uVar9;
            *(ulong *)(puVar12 + uVar8 * 0x10 + 0x28) = uVar16;
            uVar9 = uVar17;
            if (uVar17 == uVar19) goto LAB_1028487c0;
          }
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar7);
          uVar15 = uVar16;
          uVar9 = uVar9 + 1;
        } while (uVar17 != uVar19);
      }
LAB_1028487c0:
      func_0x000107c61428(lVar13 + 0x10,auStack_78,0,0);
      lVar13 = lVar13 + 0x10;
      func_0x000107c61618();
      if (lVar13 == 0) {
        func_0x000107c6142c(puVar12);
      }
      else {
        FUN_102849ac0(uVar1,uVar4,puVar12);
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(lVar13);
      }
    }
  }
  return;
}



/* Entry: 10284b504; end: 10284b533;  */

void FUN_10284b504(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102848830(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10284b534; end: 10284b54b;  */

undefined8 FUN_10284b534(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10284b54c; end: 10284b5df;  */

void FUN_10284b54c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x10284b9c4;
  plVar7[0xf] = lVar6;
  plVar7[0x10] = lVar8;
  plVar7[0xd] = lVar5;
  plVar7[0xe] = lVar3;
  plVar7[0xb] = lVar4;
  plVar7[0xc] = lVar2;
  plVar7[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102849e80,0,0);
  return;
}



/* Entry: 10284b5e0; end: 10284b623;  */

long * FUN_10284b5e0(long *param_1,long param_2)

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



/* Entry: 10284b624; end: 10284b65f;  */

void FUN_10284b624(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10284b660; end: 10284b6d7;  */

void FUN_10284b660(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10284b9c0;
  plVar5[0x1c] = lVar3;
  plVar5[0x1d] = lVar2;
  plVar5[0x1a] = lVar4;
  plVar5[0x1b] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x1e] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x1f] = lVar3;
  plVar5[0x20] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284a558,lVar3,lVar4);
  return;
}



/* Entry: 10284b6d8; end: 10284b71b;  */

void FUN_10284b6d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10284b71c; end: 10284b7af;  */

void FUN_10284b71c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10284b7b0;
  plVar7[0xf] = lVar6;
  plVar7[0x10] = lVar8;
  plVar7[0xd] = lVar5;
  plVar7[0xe] = lVar3;
  plVar7[0xb] = lVar4;
  plVar7[0xc] = lVar2;
  plVar7[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102849e80,0,0);
  return;
}



/* Entry: 10284b7b0; end: 10284b7eb;  */

void FUN_10284b7b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010284b7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10284b7ec; end: 10284b7f3;  */

/* WARNING: Possible PIC construction at 0x000102849000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102849064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102848f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102849004) */
/* WARNING: Removing unreachable block (ram,0x000102848f0c) */
/* WARNING: Removing unreachable block (ram,0x000102849010) */
/* WARNING: Removing unreachable block (ram,0x000102849068) */
/* WARNING: Removing unreachable block (ram,0x000102849070) */
/* WARNING: Removing unreachable block (ram,0x0001028490a8) */
/* WARNING: Removing unreachable block (ram,0x0001028490e8) */
/* WARNING: Removing unreachable block (ram,0x0001028490cc) */

void FUN_10284b7ec(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar8;
  puVar3 = puVar4;
  func_0x000107c61434();
  lVar9 = 0;
  lVar5 = 0;
  do {
    if (uVar7 != 0) {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                       lVar9 * 0x200);
      func_0x000107c61174();
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar9 == 0) {
        lVar5 = 0;
        puVar10 = (undefined8 *)0x0;
        puVar4 = puVar3;
      }
      else {
        lVar5 = lVar9;
        func_0x000107c5faec();
        puVar4 = puVar3;
        func_0x000107c61170(lVar9);
        puVar10 = puVar3;
      }
      func_0x000107c4cde0();
      func_0x000107c61180();
      lVar9 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      puVar3 = puVar4;
      if ((puVar10 != (undefined8 *)0x0) &&
         ((puVar3 = puVar10, lVar5 != lVar9 || (puVar10 != puVar4)))) {
        func_0x000107c605b8(lVar5,puVar10,lVar9,puVar4,0);
      }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
      return;
    }
    lVar9 = lVar5 + 1;
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028490f8);
      (*pcVar1)();
    }
    if ((long)(0x3f - uVar6 >> 6) <= lVar9) {
      func_0x000101d102f4(param_1,puVar8,~uVar6,0,0);
      puVar3 = (undefined8 *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      goto code_r0x000107c6142c;
    }
    uVar7 = puVar8[lVar9];
    lVar5 = lVar5 + 1;
  } while( true );
}



/* Entry: 10284b7f4; end: 10284b853;  */

void FUN_10284b7f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10284b854; end: 10284b85b;  */

/* WARNING: Possible PIC construction at 0x000102848d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102848d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102848e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102848d90) */
/* WARNING: Removing unreachable block (ram,0x000102848e54) */
/* WARNING: Removing unreachable block (ram,0x000102848d94) */
/* WARNING: Removing unreachable block (ram,0x000102848da4) */
/* WARNING: Removing unreachable block (ram,0x000102848dcc) */
/* WARNING: Removing unreachable block (ram,0x000102848e78) */
/* WARNING: Removing unreachable block (ram,0x000102848dfc) */
/* WARNING: Removing unreachable block (ram,0x000102848dac) */
/* WARNING: Removing unreachable block (ram,0x000102848d5c) */
/* WARNING: Removing unreachable block (ram,0x000102848e04) */

void FUN_10284b854(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  puVar6 = (ulong *)(param_1 + 0x40);
  uVar5 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar7 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *puVar6;
  func_0x000107c61434();
  lVar8 = 0;
  lVar4 = 0;
  do {
    if (uVar7 != 0) {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      lVar8 = *(long *)(*(long *)(param_1 + 0x38) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                       lVar8 * 0x200);
      func_0x000107c61174();
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c4cde0(lVar3);
        func_0x000107c61180();
        func_0x000107c5faec();
      }
      else {
        func_0x000107c5faec();
        lVar3 = lVar8;
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    lVar8 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102848e98);
      (*pcVar2)();
    }
    if ((long)(0x3f - uVar5 >> 6) <= lVar8) {
      func_0x000101d102f4(param_1,puVar6,~uVar5,0,0);
      lVar3 = *plVar1;
      *plVar1 = 0;
      goto code_r0x000107c61170;
    }
    uVar7 = puVar6[lVar8];
    lVar4 = lVar4 + 1;
  } while( true );
}



/* Entry: 10284b85c; end: 10284b97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10284b85c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4328);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    func_0x000107c4c3c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10284b980);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x000107c5b634();
    func_0x000107c61170(lVar4);
    if ((int)lVar3 == 2) {
      func_0x00010284bc70();
      goto LAB_10284b8e8;
    }
  }
  func_0x00010284bc90();
LAB_10284b8e8:
  puVar5 = PTR_PTR_1126c68c8;
  func_0x000107c61168(PTR_PTR_1126c68c8);
  func_0x000107c501a8();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126c68c0;
  func_0x000107c610f8(PTR_PTR_1126c68c0);
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48c9c(puVar6);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  return puVar6;
}



/* Entry: 10284b980; end: 10284b9c7;  */

void FUN_10284b980(long param_1)

{
  func_0x00010284b604(param_1 + 0x20);
  return;
}



/* Entry: 10284b9c8; end: 10284bc4f;  */

void FUN_10284b9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110557270;
  func_0x000107c613fc(&UNK_110557270,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10284bc50,puVar1);
  return;
}



/* Entry: 10284bc50; end: 10284bca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284bc50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar7 = &lStack_80;
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = uStack_58;
  func_0x000107c3ff84();
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar3 = uStack_60;
  func_0x0001000cad14();
  func_0x000100083b20(&lStack_68);
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&lStack_70);
  uVar8 = *(undefined8 *)(lStack_70 + _DAT_11301aef0);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_70);
  lVar5 = 0;
  FUN_10284a894();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ec4330) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ec4338) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ec4340) = 0;
  func_0x000107c61614(lVar6 + _DAT_112ec4348,0);
  *(undefined8 *)(lVar6 + _DAT_112ec4308) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112ec4310) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112ec4318) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ec4320) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112ec4328) = uVar8;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 10284bca8; end: 10284bd57;  */

undefined1  [16] FUN_10284bca8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0c2d40);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10284bd58);
  (*pcVar1)();
}



/* Entry: 10284bd58; end: 10284bd67; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284bd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec43f8));
  return;
}



/* Entry: 10284bd68; end: 10284bd9b; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284bd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec43f8);
  *(undefined8 *)(param_1 + _DAT_112ec43f8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10284bd9c; end: 10284bdab; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284bd9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4400));
  return;
}



/* Entry: 10284bdac; end: 10284bddf; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284bdac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4400);
  *(undefined8 *)(param_1 + _DAT_112ec4400) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10284bde0; end: 10284bdff; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284bde0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10284be00; end: 10284be13; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284be00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4408,param_3);
  return;
}



/* Entry: 10284be14; end: 10284be33; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284be14(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10284be34; end: 10284be47; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284be34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4410,param_3);
  return;
}



/* Entry: 10284be48; end: 10284c03b;  */

void FUN_10284be48(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  if (param_2 != 0) {
    func_0x000107c61174();
    lVar2 = param_2;
    func_0x000107c4ca5c();
    if (lVar2 != 0) {
      func_0x000107c4ca5c(param_2);
      lVar2 = param_2;
      func_0x000107c5c968();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10284c030);
        (*pcVar1)();
      }
      lVar3 = param_2;
      func_0x000107c42120();
      func_0x000107c61180();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126ab328;
        func_0x000107c610f8(PTR_PTR_1126ab328);
        func_0x000107c5fadc(param_5,param_6);
        func_0x000107c48ce4(puVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(param_5);
        func_0x000107c43b74(param_4);
        func_0x000107c4ab14(param_2);
        uVar5 = param_1;
        func_0x000107c4c0e4(param_2);
        uVar6 = uVar5;
        func_0x000107c61428(param_7 + 0x10,auStack_88,1,0);
        *(undefined8 *)(param_7 + 0x10) = param_1;
        *(undefined8 *)(param_7 + 0x18) = uVar5;
        *(undefined1 *)(param_7 + 0x20) = 0;
        func_0x000107c5ea20(param_2);
        func_0x000107c61170(param_2);
        func_0x000107c61170(puVar4);
        func_0x000107c61428(param_8 + 0x10,auStack_a0,1,0);
        *(undefined8 *)(param_8 + 0x10) = uVar6;
        *(undefined1 *)(param_8 + 0x18) = 0;
        return;
      }
      func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10284c03c);
      (*pcVar1)();
    }
    func_0x000107c61170(param_2);
  }
  if (param_3 == 0) {
    return;
  }
  func_0x000107c614b0(param_3);
  lVar2 = param_3;
  func_0x000107c5ed2c(param_3);
  func_0x000107c43b70(param_4);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
  return;
}



/* Entry: 10284c03c; end: 10284c1e7;  */

/* WARNING: Possible PIC construction at 0x00010284c098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284c09c) */

void FUN_10284c03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10284c1e8; end: 10284c2af;  */

void FUN_10284c1e8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  if (*(char *)(param_1 + 0x20) != '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    if (*(char *)(param_2 + 0x18) != '\x01') {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x000107c61428(param_3 + 0x10,auStack_98,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      if (param_3 != 0) {
        FUN_10284c2b0(uVar2,uVar1,uVar3);
        func_0x000107c61170(param_3);
      }
    }
  }
  return;
}



/* Entry: 10284c2b0; end: 10284c427;  */

/* WARNING: Possible PIC construction at 0x00010284c3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284c3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284c3ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284c2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ec4408;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x00010451c820(0);
    func_0x0001045199fc(param_1,param_2,param_3);
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar3 = 6;
    func_0x000104515e00(6,2,0x15,0x12);
    func_0x000104515b14(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c615f0(lVar1);
    func_0x0001045158a8(uVar2,uVar3,0,lVar1);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ec43c8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x000107c61174(uVar2);
      func_0x000107c4ab9c(lVar4);
      func_0x000107c615e8(lVar4);
      uVar3 = uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10284c428; end: 10284c49b; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10284c428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10284c964(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10284c49c; end: 10284c4b3; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010284c4b0) */

void FUN_10284c49c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10284c4b4; end: 10284c4bb; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin pluginType] */

undefined8 FUN_10284c4b4(void)

{
  return 0;
}



/* Entry: 10284c4bc; end: 10284c6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284c4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec43e0;
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + _DAT_112ec43e0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = param_1 + _DAT_112ec4408;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = param_1 + _DAT_112ec4410;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          func_0x00010438f958(0);
          func_0x000107c610f8();
          uVar5 = 0;
          func_0x00010438f54c(0,0,0,0,0xc,9,3,0,0);
          puVar6 = PTR_PTR_1126b1e48;
          func_0x000107c61168();
          uVar7 = param_2;
          func_0x000107c5fadc(param_2,param_3);
          func_0x000107c3f944();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          uVar7 = *(undefined8 *)(param_1 + _DAT_112ec43e8);
          func_0x000107c61174(uVar7);
          lVar3 = lVar4;
          func_0x000107c61174(lVar4);
          lVar8 = param_1;
          func_0x000107c61174(param_1);
          lVar9 = lVar2;
          func_0x00010438e1d4(lVar2,lVar4,0,param_2,param_3,uVar5,0,lVar8,0,puVar6);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar8);
          func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1));
          func_0x000107c61170(lVar8);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar6);
          param_1 = lVar9;
          goto LAB_10284c530;
        }
      }
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
LAB_10284c530:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10284c6e0; end: 10284c73f; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin init] */

void FUN_10284c6e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapShareMessagePlugin.MapShareMessagePlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10284c70c);
  (*pcVar1)();
}



/* Entry: 10284c740; end: 10284c7f7; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010284c7dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284c7e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10284c740(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec43c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec43d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec43d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec43e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec43e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec43f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec43f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4400));
  param_1 = param_1 + _DAT_112ec4408;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10284c7f8; end: 10284c817;  */

void FUN_10284c7f8(void)

{
  func_0x000107c61168(&PTR_PTR_112865f98);
  return;
}



/* Entry: 10284c818; end: 10284c81f; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

undefined8 FUN_10284c818(void)

{
  return 1;
}



/* Entry: 10284c820; end: 10284c827; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin canForwardMessageFromCTA:] */

undefined8 FUN_10284c820(void)

{
  return 0;
}



/* Entry: 10284c828; end: 10284c857; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_10284c828(void)

{
  func_0x000107c610f8(PTR_PTR_1126c68a8);
  func_0x000107c480c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10284c858; end: 10284c917; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x00010284c8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284c8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284c8f0) */
/* WARNING: Removing unreachable block (ram,0x00010284c900) */

void FUN_10284c858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10284cfc0(param_3,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10284c918; end: 10284c963; -[_TtC21MapShareMessagePlugin21MapShareMessagePlugin mapStoryDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284c918(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec43e0);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10284c964; end: 10284cfbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10284c964(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long extraout_x8;
  long lVar19;
  long unaff_x20;
  undefined1 *puVar20;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar19 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puVar20 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec43f0);
  func_0x000107c4ce08();
  func_0x000107c61180();
  func_0x000107c4ce20(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c40c30();
  func_0x000107c61170(param_1);
  func_0x000107c5ee88(puVar20,(double)lVar4 / 1000.0);
  lVar4 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c615e8(lVar3);
    (**(code **)(lVar19 + 8))(puVar20,lVar2);
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10284cfc0);
      (*pcVar1)();
    }
    lVar4 = lVar5;
    func_0x000107c4c27c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 == 0) {
      (**(code **)(lVar19 + 8))(puVar20,lVar2);
      func_0x000107c615e8(lVar3);
    }
    else {
      lVar5 = lVar4;
      func_0x000107c5bfec();
      func_0x000107c61180();
      if (lVar5 == 0) {
        (**(code **)(lVar19 + 8))(puVar20,lVar2);
        func_0x000107c615e8(lVar3);
      }
      else {
        lVar6 = lVar5;
        func_0x000107c5faec();
        lVar7 = *(long *)(unaff_x20 + _DAT_112ec43d0);
        uVar18 = param_2;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar7 == 0) {
          (**(code **)(lVar19 + 8))(puVar20,lVar2);
          func_0x000107c6142c(param_2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar4);
          lVar4 = lVar5;
        }
        else {
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lStack_f0 = lVar6;
          func_0x000107c61168();
          puVar9 = puVar8;
          func_0x000107c5ee70();
          func_0x000107c43870();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          if (puVar8 != (undefined *)0x0) {
            puVar10 = puVar8;
            func_0x000107c5faec();
            lStack_f8 = lVar2;
            func_0x000107c61170(puVar8);
            puVar8 = &UNK_1105573d8;
            func_0x000107c613fc(&UNK_1105573d8,0x28,7);
            *(undefined8 *)(puVar8 + 0x10) = 0;
            *(undefined8 *)(puVar8 + 0x18) = 0;
            puVar8[0x20] = 1;
            puVar9 = &UNK_110557400;
            func_0x000107c613fc(&UNK_110557400,0x20,7);
            *(undefined8 *)(puVar9 + 0x10) = 0;
            puVar9[0x18] = 1;
            puVar11 = PTR_PTR_1126b1588;
            func_0x000107c610f8();
            func_0x000107c453e4();
            puVar12 = &UNK_110557428;
            func_0x000107c613fc(&UNK_110557428,0x38,7);
            *(undefined **)(puVar12 + 0x10) = puVar11;
            *(undefined **)(puVar12 + 0x18) = puVar10;
            *(undefined8 *)(puVar12 + 0x20) = uVar18;
            *(undefined **)(puVar12 + 0x28) = puVar8;
            *(undefined **)(puVar12 + 0x30) = puVar9;
            uStack_88 = 0x10284d4e4;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_10284c03c;
            puStack_90 = &UNK_110557440;
            ppuVar13 = &puStack_a8;
            puStack_80 = puVar12;
            func_0x000107c60bc4(ppuVar13);
            puVar12 = puStack_80;
            func_0x000107c61174();
            puStack_100 = puVar11;
            func_0x000107c6157c(puVar8);
            func_0x000107c6157c(puVar9);
            func_0x000107c61574(puVar12);
            func_0x000107c431a8(lVar7);
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c61170(lVar5);
            puVar12 = PTR_PTR_1126ab310;
            func_0x000107c610f8();
            func_0x000107c453e4();
            puVar11 = PTR_PTR_1126ab318;
            puStack_108 = puVar12;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c53e00();
            puVar12 = &UNK_110557478;
            puVar14 = puVar12;
            func_0x000107c613fc(&UNK_110557478,0x18,7);
            func_0x000107c61614(puVar14 + 0x10,unaff_x20);
            puVar10 = &UNK_1105574a0;
            func_0x000107c613fc(&UNK_1105574a0,0x28,7);
            *(undefined **)(puVar10 + 0x10) = puVar14;
            *(long *)(puVar10 + 0x18) = lStack_f0;
            *(undefined8 *)(puVar10 + 0x20) = param_2;
            uStack_88 = 0x10284d4f4;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = (code *)&UNK_1000f6b44;
            puStack_90 = &UNK_1105574b8;
            ppuVar13 = &puStack_a8;
            puStack_80 = puVar10;
            func_0x000107c60bc4(ppuVar13);
            func_0x000107c61574(puStack_80);
            func_0x000107c56f18(puVar11);
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c613fc(&UNK_110557478,0x18,7);
            func_0x000107c61614(puVar12 + 0x10,unaff_x20);
            puVar10 = &UNK_1105574f0;
            func_0x000107c613fc(&UNK_1105574f0,0x28,7);
            *(undefined **)(puVar10 + 0x10) = puVar8;
            *(undefined **)(puVar10 + 0x18) = puVar9;
            *(undefined **)(puVar10 + 0x20) = puVar12;
            uStack_88 = 0x10284d500;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = (code *)&UNK_1000f6b44;
            puStack_90 = &UNK_110557508;
            ppuVar13 = &puStack_a8;
            puStack_80 = puVar10;
            func_0x000107c60bc4(ppuVar13);
            puVar12 = puStack_80;
            func_0x000107c6157c(puVar8);
            func_0x000107c6157c(puVar9);
            func_0x000107c61574(puVar12);
            func_0x000107c56db4(puVar11);
            func_0x000107c60bd0(ppuVar13);
            uVar18 = 0x112ec4440;
            uVar15 = 0;
            FUN_10284d50c(0,0x112ec4440,&PTR_PTR_1126ab320);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar16 = uVar15;
            func_0x000107c5faec();
            func_0x000107c61170(uVar15);
            uVar15 = 0;
            FUN_10284d50c(0,0x112ec4448,&PTR_PTR_1126ab310);
            puVar12 = puStack_108;
            puStack_a8 = puStack_108;
            uVar17 = 0;
            puStack_90 = (undefined *)uVar15;
            FUN_10284d50c(0,0x112ec4450,&PTR_PTR_1126ab318);
            apuStack_c8[0] = puVar11;
            uStack_b0 = uVar17;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            func_0x000107c61174(puVar12);
            func_0x000107c61174(puVar11);
            FUN_1027efbc4(uVar16,uVar18,&puStack_a8,apuStack_c8);
            func_0x000107c61170(puStack_100);
            func_0x000107c61170(puVar12);
            func_0x000107c61170(puVar11);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar7);
            func_0x000107c61170(lVar4);
            (**(code **)(lVar19 + 8))(puVar20,lStack_f8);
            func_0x000107c61574(puVar8);
            func_0x000107c61574(puVar9);
            return uVar16;
          }
          (**(code **)(lVar19 + 8))(puVar20,lVar2);
          func_0x000107c61170(lVar5);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar7);
          func_0x000107c6142c(param_2);
        }
      }
      func_0x000107c61170(lVar4);
    }
  }
  return 0;
}



/* Entry: 10284cfc0; end: 10284d48b;  */

/* WARNING: Possible PIC construction at 0x00010284d064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284d124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284d450) */
/* WARNING: Removing unreachable block (ram,0x00010284d440) */
/* WARNING: Removing unreachable block (ram,0x00010284d408) */
/* WARNING: Removing unreachable block (ram,0x00010284d3f0) */
/* WARNING: Removing unreachable block (ram,0x00010284d3e0) */
/* WARNING: Removing unreachable block (ram,0x00010284d3d0) */
/* WARNING: Removing unreachable block (ram,0x00010284d2f0) */
/* WARNING: Removing unreachable block (ram,0x00010284d430) */
/* WARNING: Removing unreachable block (ram,0x00010284d30c) */
/* WARNING: Removing unreachable block (ram,0x00010284d2d4) */
/* WARNING: Removing unreachable block (ram,0x00010284d2ac) */
/* WARNING: Removing unreachable block (ram,0x00010284d260) */
/* WARNING: Removing unreachable block (ram,0x00010284d274) */
/* WARNING: Removing unreachable block (ram,0x00010284d28c) */
/* WARNING: Removing unreachable block (ram,0x00010284d240) */
/* WARNING: Removing unreachable block (ram,0x00010284d220) */
/* WARNING: Removing unreachable block (ram,0x00010284d1f0) */
/* WARNING: Removing unreachable block (ram,0x00010284d19c) */
/* WARNING: Removing unreachable block (ram,0x00010284d47c) */
/* WARNING: Removing unreachable block (ram,0x00010284d1d0) */
/* WARNING: Removing unreachable block (ram,0x00010284d0fc) */
/* WARNING: Removing unreachable block (ram,0x00010284d0d0) */
/* WARNING: Removing unreachable block (ram,0x00010284d16c) */
/* WARNING: Removing unreachable block (ram,0x00010284d170) */
/* WARNING: Removing unreachable block (ram,0x00010284d0e4) */
/* WARNING: Removing unreachable block (ram,0x00010284d088) */
/* WARNING: Removing unreachable block (ram,0x00010284d08c) */
/* WARNING: Removing unreachable block (ram,0x00010284d118) */
/* WARNING: Removing unreachable block (ram,0x00010284d0a0) */
/* WARNING: Removing unreachable block (ram,0x00010284d120) */
/* WARNING: Removing unreachable block (ram,0x00010284d0bc) */
/* WARNING: Removing unreachable block (ram,0x00010284d068) */
/* WARNING: Removing unreachable block (ram,0x00010284d480) */
/* WARNING: Removing unreachable block (ram,0x00010284d06c) */
/* WARNING: Removing unreachable block (ram,0x00010284d128) */
/* WARNING: Removing unreachable block (ram,0x00010284d12c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284cfc0(void)

{
  undefined *puVar1;
  long lVar2;
  long in_x3;
  long in_x4;
  long lVar3;
  
  puVar1 = &UNK_110557360;
  func_0x000107c613fc(&UNK_110557360,0x18,7);
  *(long *)(puVar1 + 0x10) = in_x4;
  lVar3 = *(long *)(in_x3 + _DAT_112ec43f0);
  func_0x000107c60bc4(in_x4);
  func_0x000107c4ce08();
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5a934();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  (**(code **)(in_x4 + 0x10))(in_x4,0);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10284d48c; end: 10284d49f;  */

void FUN_10284d48c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010284d49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10284d4a0; end: 10284d4c7;  */

void FUN_10284d4a0(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 10284d4c8; end: 10284d50b;  */

void FUN_10284d4c8(long param_1,long param_2)

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



/* Entry: 10284d50c; end: 10284d54b;  */

void FUN_10284d50c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10284d54c; end: 10284d577;  */

void FUN_10284d54c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10284d578; end: 10284d5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284d578(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ec43e0;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + _DAT_112ec43e0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar4 = lVar3 + _DAT_112ec4408;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = lVar3 + _DAT_112ec4410;
      func_0x000107c61618();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          func_0x00010438f958(0);
          func_0x000107c610f8();
          uVar7 = 0;
          func_0x00010438f54c(0,0,0,0,0xc,9,3,0,0);
          puVar8 = PTR_PTR_1126b1e48;
          func_0x000107c61168();
          uVar9 = uVar1;
          func_0x000107c5fadc(uVar1,uVar12);
          func_0x000107c3f944();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          uVar9 = *(undefined8 *)(lVar3 + _DAT_112ec43e8);
          func_0x000107c61174(uVar9);
          lVar5 = lVar6;
          func_0x000107c61174(lVar6);
          lVar10 = lVar3;
          func_0x000107c61174(lVar3);
          lVar11 = lVar4;
          func_0x00010438e1d4(lVar4,lVar6,0,uVar1,uVar12,uVar7,0,lVar10,0,puVar8);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar10);
          func_0x000107c42c1c(*(undefined8 *)(lVar3 + lVar2));
          func_0x000107c61170(lVar10);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(puVar8);
          lVar3 = lVar11;
          goto LAB_10284c530;
        }
      }
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar4);
      return;
    }
  }
  else {
    func_0x000107c61170();
  }
LAB_10284c530:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10284d5a4; end: 10284d66b;  */

void FUN_10284d5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110557590;
  func_0x000107c613fc(&UNK_110557590,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10284d8a8,puVar1);
  return;
}



/* Entry: 10284d66c; end: 10284d8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284d66c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  uVar1 = 0x112ea7830;
  func_0x0001000285a8(0x112ea7830,&UNK_10dabb470);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c4c408();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar4 = uStack_80;
  func_0x000107c4c3ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar8 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_88);
  lVar5 = 0;
  FUN_10284c7f8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ec43f8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ec4400) = 0;
  func_0x000107c61614(lVar6 + _DAT_112ec4408,0);
  func_0x000107c61614(lVar6 + _DAT_112ec4410,0);
  *(undefined8 *)(lVar6 + _DAT_112ec43c8) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112ec43d0) = uVar2;
  *(undefined **)(lVar6 + _DAT_112ec43e0) = puVar3;
  *(undefined8 *)(lVar6 + _DAT_112ec43e8) = uStack_78;
  *(undefined8 *)(lVar6 + _DAT_112ec43d8) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112ec43f0) = uVar8;
  plVar7 = &lStack_98;
  lStack_98 = lVar6;
  lStack_90 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10284d8a8; end: 10284d8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284d8a8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  uVar2 = uStack_68;
  uVar1 = 0x112ea7830;
  func_0x0001000285a8(0x112ea7830,&UNK_10dabb470);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c4c408();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar4 = uStack_80;
  func_0x000107c4c3ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar8 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_88);
  lVar5 = 0;
  FUN_10284c7f8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ec43f8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ec4400) = 0;
  func_0x000107c61614(lVar6 + _DAT_112ec4408,0);
  func_0x000107c61614(lVar6 + _DAT_112ec4410,0);
  *(undefined8 *)(lVar6 + _DAT_112ec43c8) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112ec43d0) = uVar2;
  *(undefined **)(lVar6 + _DAT_112ec43e0) = puVar3;
  *(undefined8 *)(lVar6 + _DAT_112ec43e8) = uStack_78;
  *(undefined8 *)(lVar6 + _DAT_112ec43d8) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112ec43f0) = uVar8;
  plVar7 = &lStack_98;
  lStack_98 = lVar6;
  lStack_90 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10284d8c8; end: 10284dc9f;  */

void FUN_10284d8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110557680;
  func_0x000107c613fc(&UNK_110557680,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x10284d9b4,puVar1);
  return;
}



/* Entry: 10284dca0; end: 10284dcaf;  */

undefined1  [16] FUN_10284dca0(void)

{
  return ZEXT816(0x1105576a8);
}



/* Entry: 10284dcb0; end: 10284dccf; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dcb0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10284dcd0; end: 10284dce3; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4458,param_3);
  return;
}



/* Entry: 10284dce4; end: 10284dd03; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dce4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10284dd04; end: 10284dd17; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dd04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4460,param_3);
  return;
}



/* Entry: 10284dd18; end: 10284dd27; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dd18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4468));
  return;
}



/* Entry: 10284dd28; end: 10284dd67; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_10284dd28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10284dd68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10284dd68; end: 10284dea7;  */

/* WARNING: Possible PIC construction at 0x00010284dd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284de4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284de68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284de50) */
/* WARNING: Removing unreachable block (ram,0x00010284dda0) */
/* WARNING: Removing unreachable block (ram,0x00010284de8c) */
/* WARNING: Removing unreachable block (ram,0x00010284dda8) */
/* WARNING: Removing unreachable block (ram,0x00010284de6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dd68(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4468);
  *(undefined8 *)(unaff_x20 + _DAT_112ec4468) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10284dea8; end: 10284df6f;  */

/* WARNING: Possible PIC construction at 0x00010284df20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284df24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284dea8(long param_1,long param_2)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    func_0x000107c6157c(*(undefined8 *)(param_2 + _DAT_112ec4498));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10284df70; end: 10284e0c7;  */

void FUN_10284df70(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar7 = *param_1;
  puVar8 = (ulong *)(lVar7 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar6 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar6 = uVar6 & *puVar8;
  func_0x000107c61434(lVar7);
  lVar9 = 0;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar10 = *(undefined8 *)
                (*(long *)(lVar7 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                lVar1 * 0x200);
      func_0x000107c6157c(uVar10);
      func_0x000107c5fd50();
      func_0x000107c61574(uVar10);
      lVar9 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
      func_0x000102850570(lVar7,puVar8,~uVar11,lVar9,0);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10284ff70();
      func_0x000107c6142c(lVar7);
      *param_1 = (long)puVar5;
      return;
    }
    uVar6 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e0c8);
  (*pcVar3)();
}



/* Entry: 10284e0c8; end: 10284e0f3;  */

void FUN_10284e0c8(undefined1 *param_1)

{
  FUN_10284df70();
  *param_1 = 0;
  return;
}



/* Entry: 10284e0f4; end: 10284e103; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284e0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4470));
  return;
}



/* Entry: 10284e104; end: 10284e137; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284e104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4470);
  *(undefined8 *)(param_1 + _DAT_112ec4470) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


