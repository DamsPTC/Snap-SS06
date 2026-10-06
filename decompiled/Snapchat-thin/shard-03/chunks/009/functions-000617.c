/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f07fd0; end: 102f0800f;  */

void FUN_102f07fd0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102f08010; end: 102f0802b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f08010(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 uVar17;
  ulong uVar18;
  long unaff_x20;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 uStack_194;
  ulong uStack_188;
  long alStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_80 [32];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar14 = *(long *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined4 *)(unaff_x20 + 0xb8);
  bVar4 = *(byte *)(unaff_x20 + 0xbc);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar15 = *param_1;
    func_0x000107c61428(lVar13 + 0x10,auStack_80,0,0);
    lVar13 = lVar13 + 0x10;
    func_0x000107c61618();
    if (lVar13 != 0) {
      uVar5 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      puVar6 = &UNK_1105e6a18;
      func_0x000107c613fc(&UNK_1105e6a18,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      puVar7 = &UNK_1105e6a40;
      func_0x000107c613fc(&UNK_1105e6a40,0x11,7);
      puVar7[0x10] = 0;
      uVar16 = *(ulong *)(unaff_x20 + 0x20);
      if (uVar16 >> 0x3e == 0) {
        uStack_188 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uStack_188 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uStack_188 = uVar16;
        }
        func_0x000107c60480();
      }
      if ((long)uStack_188 < 2) {
        uStack_194 = 0;
      }
      else {
        uVar18 = *(ulong *)(*(long *)(lVar13 + _DAT_112f27e90) + _DAT_113077160);
        uVar16 = uVar18;
        func_0x000107c615f0();
        func_0x000107c5b230();
        if ((uVar16 & 1) == 0) {
          uVar16 = uVar18;
          func_0x000107c5b22c();
          uStack_194 = (undefined1)uVar16;
        }
        else {
          uStack_194 = 1;
        }
        func_0x000107c615e8(uVar18);
      }
      uVar17 = (undefined1)*(undefined8 *)(lVar13 + _DAT_112f27e98);
      uVar8 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f114190);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar8);
      lVar20 = *(long *)(lVar14 + 0x10);
      if (lVar20 != 0) {
        puVar19 = (undefined8 *)(lVar14 + 0x28);
        do {
          uVar12 = 0x112f27e30;
          uVar8 = puVar19[-1];
          uVar11 = *puVar19;
          func_0x000107c6157c(uVar8);
          func_0x000107c61174();
          func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
          func_0x000100087bd4(alStack_120,0x102f09ab8,uVar8,uVar12);
          lVar14 = alStack_120[0];
          if (alStack_120[0] == 0) {
            uVar12 = uVar15;
            func_0x000107c5d784();
            func_0x000107c61180();
            uStack_110 = uVar8;
            uStack_108 = uVar12;
            func_0x000107c61174();
            func_0x000100087bd4(FUN_102f0802c,alStack_120,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61170(uVar12);
            func_0x0001000285a8(0x112f28058,&UNK_10db63ad0);
            uVar9 = uVar12;
            func_0x000103edf20c();
            puVar10 = &UNK_1105e6a68;
            func_0x000107c613fc(&UNK_1105e6a68,0x108,7);
            uVar21 = *(undefined8 *)(unaff_x20 + 0x78);
            uVar23 = *(undefined8 *)(unaff_x20 + 0x90);
            uVar22 = *(undefined8 *)(unaff_x20 + 0x88);
            *(undefined8 *)(puVar10 + 0xc0) = *(undefined8 *)(unaff_x20 + 0x80);
            *(undefined8 *)(puVar10 + 0xb8) = uVar21;
            *(undefined8 *)(puVar10 + 0xd0) = uVar23;
            *(undefined8 *)(puVar10 + 200) = uVar22;
            uVar21 = *(undefined8 *)(unaff_x20 + 0x98);
            *(undefined8 *)(puVar10 + 0xe0) = *(undefined8 *)(unaff_x20 + 0xa0);
            *(undefined8 *)(puVar10 + 0xd8) = uVar21;
            uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
            uVar23 = *(undefined8 *)(unaff_x20 + 0x50);
            uVar22 = *(undefined8 *)(unaff_x20 + 0x48);
            *(undefined8 *)(puVar10 + 0x80) = *(undefined8 *)(unaff_x20 + 0x40);
            *(undefined8 *)(puVar10 + 0x78) = uVar21;
            *(undefined8 *)(puVar10 + 0x90) = uVar23;
            *(undefined8 *)(puVar10 + 0x88) = uVar22;
            uVar21 = *(undefined8 *)(unaff_x20 + 0x58);
            uVar23 = *(undefined8 *)(unaff_x20 + 0x70);
            uVar22 = *(undefined8 *)(unaff_x20 + 0x68);
            *(undefined8 *)(puVar10 + 0xa0) = *(undefined8 *)(unaff_x20 + 0x60);
            *(undefined8 *)(puVar10 + 0x98) = uVar21;
            *(undefined8 *)(puVar10 + 0xb0) = uVar23;
            *(undefined8 *)(puVar10 + 0xa8) = uVar22;
            uVar21 = *(undefined8 *)(unaff_x20 + 0x18);
            uVar23 = *(undefined8 *)(unaff_x20 + 0x30);
            uVar22 = *(undefined8 *)(unaff_x20 + 0x28);
            *(undefined8 *)(puVar10 + 0x60) = *(undefined8 *)(unaff_x20 + 0x20);
            *(undefined8 *)(puVar10 + 0x58) = uVar21;
            *(undefined8 *)(puVar10 + 0x10) = uVar8;
            *(undefined8 *)(puVar10 + 0x18) = uVar12;
            *(undefined8 *)(puVar10 + 0x20) = uVar5;
            *(undefined **)(puVar10 + 0x28) = puVar7;
            *(undefined **)(puVar10 + 0x30) = puVar6;
            *(ulong *)(puVar10 + 0x38) = uStack_188;
            puVar10[0x40] = uStack_194;
            puVar10[0x41] = uVar17;
            *(long *)(puVar10 + 0x48) = lVar13;
            *(undefined4 *)(puVar10 + 0x50) = uVar3;
            *(undefined8 *)(puVar10 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xa8);
            *(undefined8 *)(puVar10 + 0x70) = uVar23;
            *(undefined8 *)(puVar10 + 0x68) = uVar22;
            puVar10[0xf0] = bVar4 & 1;
            *(undefined8 *)(puVar10 + 0xf8) = uVar1;
            *(undefined8 *)(puVar10 + 0x100) = uVar2;
            func_0x000107c6157c(uVar8);
            func_0x000107c61174();
            func_0x000107c6157c(uVar5);
            func_0x000107c6157c(puVar7);
            func_0x000107c6157c(puVar6);
            func_0x000107c61174(lVar13);
            FUN_102f04d58((undefined8 *)(unaff_x20 + 0x18),alStack_120);
            func_0x000107c6157c(uVar2);
            func_0x00010075a04c(0,1,0x102f08044,puVar10);
            func_0x000107c61170(uVar11);
            func_0x000107c61574(uVar8);
            func_0x000107c61170(uVar12);
            func_0x000107c61574(uVar9);
            func_0x000107c61574(puVar10);
          }
          else {
            func_0x000107c61170(uVar11);
            func_0x000107c61574(uVar8);
            func_0x000107c61170(lVar14);
          }
          puVar19 = puVar19 + 2;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(lVar13);
      func_0x000107c61574(uVar5);
    }
  }
  return;
}



/* Entry: 102f0802c; end: 102f080c3;  */

void FUN_102f0802c(void)

{
  long unaff_x20;
  
  FUN_102f1c2dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102f080c4; end: 102f080ef;  */

void FUN_102f080c4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0xc0);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0xb0) & 1) == 0) {
      func_0x000102ede748(1,unaff_x20 + 0x18,*(byte *)(unaff_x20 + 0xb0),
                          *(undefined8 *)(unaff_x20 + 0xb8),pcVar1,*(undefined8 *)(unaff_x20 + 200))
      ;
    }
    (*pcVar1)(1);
  }
  else {
    uVar3 = *(ulong *)(unaff_x20 + 0x20);
    if (uVar3 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee7ec0);
            (*pcVar1)();
          }
          uVar7 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
          func_0x000107c6157c(uVar7);
        }
        else {
          uVar7 = uVar5;
          FUN_102f02a90(uVar5,uVar3);
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee7e70);
          (*pcVar1)();
        }
        uVar6 = uVar5 + 1;
        uVar2 = 0x112f27e30;
        func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
        func_0x000100087bd4(&uStack_68,0x102f09ae0,uVar7,uVar2);
        uVar2 = uStack_68;
        func_0x000107c3f474(uStack_68);
        func_0x000107c61170(uVar2);
        *(undefined1 *)(uVar7 + 0x80) = 1;
        func_0x000107c61574(uVar7);
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar4);
    }
  }
  return;
}



/* Entry: 102f080f0; end: 102f0815f;  */

undefined8 FUN_102f080f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102f08160; end: 102f08167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f08160(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar6 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar1 = lVar6 + _DAT_112f27e80;
    func_0x000107c61428(lVar1,auStack_50,0,0);
    lVar3 = lVar1;
    func_0x000102f05844();
    if ((int)lVar3 == 1) {
      func_0x000107c61170(lVar6);
    }
    else {
      uVar5 = *(ulong *)(lVar1 + 8);
      func_0x000107c61434(uVar5);
      func_0x000107c61170(lVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar4 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar4 == 0) {
        func_0x000107c6142c(uVar5);
      }
      else if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102eeed60);
          (*pcVar2)();
        }
        lVar6 = *(long *)(uVar5 + 0x20);
        func_0x000107c6157c(lVar6);
        func_0x000107c6142c(uVar5);
        func_0x000107c61174(*(undefined8 *)(lVar6 + 0x28));
        func_0x000107c61574(lVar6);
      }
      else {
        lVar6 = 0;
        FUN_102f02a90(0,uVar5);
        func_0x000107c6142c(uVar5);
        func_0x000107c61174(*(undefined8 *)(lVar6 + 0x28));
        func_0x000107c615e8(lVar6);
      }
    }
  }
  return;
}



/* Entry: 102f08168; end: 102f081ef;  */

void FUN_102f08168(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f081f0;
  plVar5[0xe] = lVar4;
  plVar5[0xf] = lVar8;
  plVar5[0xc] = lVar3;
  plVar5[0xd] = lVar1;
  plVar5[10] = lVar2;
  plVar5[0xb] = lVar6;
  lVar6 = 0;
  func_0x000107c5ede0();
  plVar5[0x10] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x11] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar7;
  lVar6 = 0;
  func_0x00010392d0f4();
  plVar5[0x13] = lVar6;
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x14] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f0b024,0,0);
  return;
}



/* Entry: 102f081f0; end: 102f08233;  */

void FUN_102f081f0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f08230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102f08234; end: 102f08243;  */

undefined * FUN_102f08234(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  func_0x000107c60f6c();
  lVar3 = 0;
  func_0x000102f0ba50();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  puVar4 = &UNK_1105e85c0;
  func_0x000107c613fc(&UNK_1105e85c0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(long *)(puVar4 + 0x18) = lVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(uVar1);
  uVar5 = 6;
  func_0x0001001ca524(6,0,0x54,3,0,0,&UNK_10db63bb8,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c6005c();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (*(long *)(lVar3 + 0x10) == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c3e174();
    func_0x000107c61180();
  }
  func_0x000107c61574(lVar3);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 102f08244; end: 102f0827f;  */

void FUN_102f08244(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f08280; end: 102f0828b;  */

void FUN_102f08280(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  long lStack_78;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (uVar1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar10 = uVar1;
    }
    uVar11 = uVar10;
    func_0x000107c60480();
    if ((long)uVar11 < 1) goto LAB_102ef5174;
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    if ((uVar1 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef51f0);
        (*pcVar2)();
      }
      lStack_78 = *(long *)(*(long *)(uVar1 + 0x20) + 0x28);
      func_0x000107c61174();
    }
    else {
      lVar8 = 0;
      FUN_102f02a90(0,uVar1);
      lStack_78 = *(long *)(lVar8 + 0x28);
      func_0x000107c61174();
      func_0x000107c615e8(lVar8);
    }
    uVar11 = 0;
    dVar13 = 0.0;
    while( true ) {
      if ((uVar1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef5140);
          (*pcVar2)();
        }
        uVar12 = *(ulong *)(uVar1 + uVar11 * 8 + 0x20);
        uVar3 = uVar12;
        func_0x000107c6157c(uVar12);
      }
      else {
        uVar12 = uVar11;
        FUN_102f02a90(uVar11,uVar1);
        uVar3 = uVar12;
      }
      if (SCARRY8(uVar11,1)) break;
      uVar9 = uVar11 + 1;
      func_0x000103be2924();
      func_0x000107c61574(uVar12);
      dVar13 = dVar13 + (double)uVar3 / 1000.0;
      uVar11 = uVar11 + 1;
      if (uVar9 == uVar10) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 == 0) {
          FUN_102f09540();
          func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        }
        else {
          lVar8 = lVar4;
          func_0x000107c5c92c(0x405e000000000000);
          func_0x000107c61180();
          func_0x000107c615e8(lVar4);
          lVar4 = 0x112d38dc0;
          func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
          func_0x000107c613fc();
          *(undefined8 *)(lVar4 + 0x18) = 2;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          uVar5 = 0;
          func_0x000103f5fab8();
          func_0x000107c610f8();
          func_0x000107c61174();
          lVar6 = lVar8;
          func_0x000103f5f888(dVar13);
          *(undefined8 *)(lVar4 + 0x38) = uVar5;
          *(long *)(lVar4 + 0x20) = lVar6;
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
          lVar6 = lVar4;
          func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
          func_0x000107c61574(lVar4);
          func_0x000107c45788(puVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lStack_78);
          lStack_78 = lVar6;
        }
        func_0x000107c61170(lStack_78);
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef513c);
    (*pcVar2)();
  }
LAB_102ef5174:
  FUN_102f09540(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102f0828c; end: 102f082bb;  */

void FUN_102f0828c(code *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (*param_1)(param_2,0,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102f082bc; end: 102f082c3;  */

void FUN_102f082bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102ef524c(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102f082c4; end: 102f08fa7;  */

/* WARNING: Removing unreachable block (ram,0x000102f0854c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f082c4(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined8 *param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uStack_158;
  undefined1 auStack_130 [152];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  puVar3 = &UNK_1105e6fe0;
  func_0x000107c613fc(&UNK_1105e6fe0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  *(undefined8 *)(puVar3 + 0x20) = param_10;
  func_0x000107c61428(param_1 + 0x10,auStack_130,0x21,0);
  func_0x000107c61580(param_8,2);
  func_0x000107c61174();
  func_0x000107c615f4(param_10,2);
  func_0x000107c61174();
  FUN_102f03014();
  uVar10 = *(ulong *)(param_1 + 0x10);
  uVar11 = uVar10 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar11 + 0x10);
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
    FUN_102738e9c(uVar10,uVar1 + 1,1);
    uVar11 = uVar10 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar11 + uVar1 * 8 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x10) = uVar10;
  func_0x000107c614a8(auStack_130);
  uVar1 = param_7 + 1;
  if (SCARRY8(param_7,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f087ac);
    (*pcVar2)();
  }
  if (param_3 == *(long *)(param_4 + _DAT_112f27fd8)) {
    if (param_5 >> 0x3e == 0) {
      uVar10 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = param_5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_5) {
        uVar10 = param_5;
      }
      func_0x000107c60480();
    }
    if ((long)uVar10 <= (long)uVar1) {
      func_0x000107c615f0(param_2);
      pcVar5 = "processBundle(at:)";
      func_0x0001000c10c0("processBundle(at:)");
      func_0x000107c61180();
      puVar6 = &UNK_1105e5fa0;
      func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_4);
      puVar7 = &UNK_1105e7008;
      func_0x000107c613fc(&UNK_1105e7008,0xc0,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(long *)(puVar7 + 0x18) = param_3;
      uVar12 = param_6[0xc];
      uVar14 = param_6[0xf];
      uVar13 = param_6[0xe];
      *(undefined8 *)(puVar7 + 0x88) = param_6[0xd];
      *(undefined8 *)(puVar7 + 0x80) = uVar12;
      *(undefined8 *)(puVar7 + 0x98) = uVar14;
      *(undefined8 *)(puVar7 + 0x90) = uVar13;
      uVar12 = param_6[0x10];
      *(undefined8 *)(puVar7 + 0xa8) = param_6[0x11];
      *(undefined8 *)(puVar7 + 0xa0) = uVar12;
      uVar12 = param_6[0x12];
      uVar13 = param_6[4];
      uVar15 = param_6[7];
      uVar14 = param_6[6];
      *(undefined8 *)(puVar7 + 0x48) = param_6[5];
      *(undefined8 *)(puVar7 + 0x40) = uVar13;
      *(undefined8 *)(puVar7 + 0x58) = uVar15;
      *(undefined8 *)(puVar7 + 0x50) = uVar14;
      uVar13 = param_6[8];
      uVar15 = param_6[0xb];
      uVar14 = param_6[10];
      *(undefined8 *)(puVar7 + 0x68) = param_6[9];
      *(undefined8 *)(puVar7 + 0x60) = uVar13;
      *(undefined8 *)(puVar7 + 0x78) = uVar15;
      *(undefined8 *)(puVar7 + 0x70) = uVar14;
      uVar13 = *param_6;
      uVar15 = param_6[3];
      uVar14 = param_6[2];
      *(undefined8 *)(puVar7 + 0x28) = param_6[1];
      *(undefined8 *)(puVar7 + 0x20) = uVar13;
      *(undefined8 *)(puVar7 + 0x38) = uVar15;
      *(undefined8 *)(puVar7 + 0x30) = uVar14;
      *(undefined8 *)(puVar7 + 0xb0) = uVar12;
      *(long *)(puVar7 + 0xb8) = param_1;
      uStack_78 = 0x102f09b44;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1105e7020;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar6 = puStack_70;
      FUN_102f04d58(param_6,auStack_130);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(pcVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(param_8);
      func_0x000107c61574(puVar3);
      func_0x000107c615e8(pcVar5);
      goto LAB_102f088e4;
    }
    if ((param_5 & 0xc000000000000001) == 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f08934);
        (*pcVar2)();
      }
      if (*(ulong *)((param_5 & 0xffffffffffffff8) + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f08938);
        (*pcVar2)();
      }
      uStack_158 = *(ulong *)(param_5 + uVar1 * 8 + 0x20);
      func_0x000107c615f0(param_2);
      func_0x000107c615f0(uStack_158);
    }
    else {
      func_0x000107c615f0(param_2);
      uStack_158 = uVar1;
      FUN_10274d138(uVar1,param_5);
    }
    puVar6 = &UNK_1105e7058;
    func_0x000107c613fc(&UNK_1105e7058,0xe8,7);
    uVar12 = param_6[0xc];
    uVar14 = param_6[0xf];
    uVar13 = param_6[0xe];
    *(undefined8 *)(puVar6 + 0xa0) = param_6[0xd];
    *(undefined8 *)(puVar6 + 0x98) = uVar12;
    *(undefined8 *)(puVar6 + 0xb0) = uVar14;
    *(undefined8 *)(puVar6 + 0xa8) = uVar13;
    uVar12 = param_6[0x10];
    *(undefined8 *)(puVar6 + 0xc0) = param_6[0x11];
    *(undefined8 *)(puVar6 + 0xb8) = uVar12;
    uVar12 = param_6[4];
    uVar14 = param_6[7];
    uVar13 = param_6[6];
    *(undefined8 *)(puVar6 + 0x60) = param_6[5];
    *(undefined8 *)(puVar6 + 0x58) = uVar12;
    *(undefined8 *)(puVar6 + 0x70) = uVar14;
    *(undefined8 *)(puVar6 + 0x68) = uVar13;
    uVar12 = param_6[8];
    uVar14 = param_6[0xb];
    uVar13 = param_6[10];
    *(undefined8 *)(puVar6 + 0x80) = param_6[9];
    *(undefined8 *)(puVar6 + 0x78) = uVar12;
    *(undefined8 *)(puVar6 + 0x90) = uVar14;
    *(undefined8 *)(puVar6 + 0x88) = uVar13;
    uVar12 = *param_6;
    uVar14 = param_6[3];
    uVar13 = param_6[2];
    *(undefined8 *)(puVar6 + 0x40) = param_6[1];
    *(undefined8 *)(puVar6 + 0x38) = uVar12;
    *(long *)(puVar6 + 0x10) = param_1;
    *(ulong *)(puVar6 + 0x18) = uStack_158;
    *(long *)(puVar6 + 0x20) = param_3;
    *(long *)(puVar6 + 0x28) = param_4;
    *(ulong *)(puVar6 + 0x30) = param_5;
    uVar12 = param_6[0x12];
    *(undefined8 *)(puVar6 + 0x50) = uVar14;
    *(undefined8 *)(puVar6 + 0x48) = uVar13;
    *(undefined8 *)(puVar6 + 200) = uVar12;
    *(code **)(puVar6 + 0xd0) = FUN_102f09b1c;
    *(undefined **)(puVar6 + 0xd8) = puVar3;
    *(ulong *)(puVar6 + 0xe0) = uVar1;
    puVar9 = auStack_130;
    FUN_102f04d58(param_6);
    func_0x000107c6157c(param_1);
    func_0x000107c615f0(uStack_158);
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_5);
    func_0x000107c61174();
    uVar10 = uStack_158;
    func_0x000107c4e090();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c3eea8();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar11;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar11);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x00010006c00c(uVar10,puVar9);
    uVar11 = uVar10;
    func_0x0001010282b0(uVar10,puVar9);
    if (uVar11 == 0) {
      func_0x00010006c090(uVar10,puVar9);
      func_0x000107c6157c(param_8);
      uVar12 = param_9;
      func_0x000107c61174();
      func_0x000107c615f0(param_10);
      FUN_102f082c4(param_1,uStack_158,param_3,param_4,param_5,param_6,uVar1,param_8,uVar12,param_10
                   );
      func_0x000107c61574(param_8);
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(param_10);
      func_0x00010006c090(uVar10,puVar9);
      func_0x000107c61574(param_8);
      func_0x000107c61574(puVar3);
    }
    else {
      puVar7 = &UNK_1105e5fa0;
      func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_4);
      puVar4 = &UNK_1105e7080;
      func_0x000107c613fc(&UNK_1105e7080,0x100,7);
      *(undefined **)(puVar4 + 0x10) = puVar7;
      *(undefined8 *)(puVar4 + 0x18) = 0x102f09b2c;
      *(undefined **)(puVar4 + 0x20) = puVar6;
      *(long *)(puVar4 + 0x28) = param_1;
      *(ulong *)(puVar4 + 0x30) = uStack_158;
      *(long *)(puVar4 + 0x38) = param_3;
      *(long *)(puVar4 + 0x40) = param_4;
      *(ulong *)(puVar4 + 0x48) = param_5;
      uVar12 = param_6[0xc];
      uVar14 = param_6[0xf];
      uVar13 = param_6[0xe];
      *(undefined8 *)(puVar4 + 0xb8) = param_6[0xd];
      *(undefined8 *)(puVar4 + 0xb0) = uVar12;
      *(undefined8 *)(puVar4 + 200) = uVar14;
      *(undefined8 *)(puVar4 + 0xc0) = uVar13;
      uVar12 = param_6[0x10];
      *(undefined8 *)(puVar4 + 0xd8) = param_6[0x11];
      *(undefined8 *)(puVar4 + 0xd0) = uVar12;
      uVar12 = param_6[0x12];
      uVar13 = param_6[4];
      uVar15 = param_6[7];
      uVar14 = param_6[6];
      *(undefined8 *)(puVar4 + 0x78) = param_6[5];
      *(undefined8 *)(puVar4 + 0x70) = uVar13;
      *(undefined8 *)(puVar4 + 0x88) = uVar15;
      *(undefined8 *)(puVar4 + 0x80) = uVar14;
      uVar13 = param_6[8];
      uVar15 = param_6[0xb];
      uVar14 = param_6[10];
      *(undefined8 *)(puVar4 + 0x98) = param_6[9];
      *(undefined8 *)(puVar4 + 0x90) = uVar13;
      *(undefined8 *)(puVar4 + 0xa8) = uVar15;
      *(undefined8 *)(puVar4 + 0xa0) = uVar14;
      uVar13 = *param_6;
      uVar15 = param_6[3];
      uVar14 = param_6[2];
      *(undefined8 *)(puVar4 + 0x58) = param_6[1];
      *(undefined8 *)(puVar4 + 0x50) = uVar13;
      *(undefined8 *)(puVar4 + 0x68) = uVar15;
      *(undefined8 *)(puVar4 + 0x60) = uVar14;
      *(undefined8 *)(puVar4 + 0xe0) = uVar12;
      *(code **)(puVar4 + 0xe8) = FUN_102f09b1c;
      *(undefined **)(puVar4 + 0xf0) = puVar3;
      *(ulong *)(puVar4 + 0xf8) = uVar1;
      FUN_102f04d58(param_6,auStack_130);
      func_0x000107c6157c(param_1);
      func_0x000107c615f0(uStack_158);
      func_0x000107c6157c(puVar3);
      func_0x000107c61434(param_5);
      func_0x000107c61174(param_4);
      func_0x000107c6157c(puVar7);
      func_0x000107c6157c(puVar6);
      FUN_102efaa78(uVar11,0x102f099fc,puVar4,param_8,param_9,param_10);
      func_0x000107c61170(uVar11);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar4);
      func_0x00010006c090(uVar10,puVar9);
      func_0x00010006c090(uVar10,puVar9);
      func_0x000107c61574(param_8);
      func_0x000107c61574(puVar3);
    }
    func_0x000107c615e8(uStack_158);
    puVar3 = puVar6;
  }
  else {
    func_0x000107c615f0(param_2);
    func_0x000107c61574(param_8);
  }
  func_0x000107c61574(puVar3);
LAB_102f088e4:
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_9);
  return;
}



/* Entry: 102f08fa8; end: 102f08fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f08fa8(double param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x20;
  double dVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar10 = *(undefined **)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar13 = auStack_88;
  func_0x000107c61428(lVar3 + 0x10,puVar13,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    (*param_3)();
  }
  else {
    puVar4 = puVar10;
    func_0x000107c51cc8();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar6 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    lVar7 = lVar3 + _DAT_112f27fb0;
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    lVar17 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar1);
    (**(code **)(lVar17 + 8))(uVar16,uVar1,lVar17);
    lVar17 = *(long *)(lVar3 + _DAT_112f27e60);
    puVar4 = &UNK_1105e7170;
    uVar14 = 0x20;
    func_0x000107c613fc(&UNK_1105e7170,0x20,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    func_0x000107c6157c(param_4);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar7 = lVar17;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar17);
    if (lVar7 == 0) {
      func_0x000107c615e8(uVar16);
      func_0x000107c61574(puVar4);
      func_0x00010006c090(puVar6,puVar13);
    }
    else {
      FUN_102ed8938();
      if (uVar14 >> 0x3c < 0xf) {
        puVar5 = puVar10;
        func_0x000107c51cc8(puVar10);
        func_0x000107c61180();
        func_0x000107c3e400(&puStack_b8);
        func_0x000107c61170(puVar5);
        func_0x000107c60a3c(&puStack_b8);
        dVar18 = 0.0;
        if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
          param_1 = param_1 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf54);
            (*pcVar2)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf58);
            (*pcVar2)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf5c);
            (*pcVar2)();
          }
          dVar18 = (double)((long)param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU));
        }
        puVar5 = puVar10;
        func_0x000107c51cc8();
        func_0x000107c61180();
        puVar8 = puVar5;
        func_0x000107c5cda4();
        func_0x000107c61170(puVar5);
        puVar5 = PTR___ss6UInt64VN_11034f048;
        puVar15 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        puStack_b8 = puVar8;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        puVar8 = puVar10;
        puVar11 = puVar15;
        func_0x000107c5cdb0();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5ce2c();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = puVar11;
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          func_0x000107c5faec(0);
          puVar8 = puVar11;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar11);
        }
        func_0x000107c5cdb0();
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c3e1a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          func_0x000107c5faec(0);
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        puVar8 = PTR_PTR_1126ac798;
        func_0x000107c610f8();
        puVar10 = puVar6;
        func_0x000107c5ee20(puVar6,puVar13);
        func_0x000107c5fadc(puVar5,puVar15);
        func_0x000107c6142c(puVar15);
        func_0x000107c45830(0,dVar18);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        puVar10 = &UNK_1105e7198;
        func_0x000107c613fc(&UNK_1105e7198,0x40,7);
        *(undefined8 *)(puVar10 + 0x10) = param_2;
        *(ulong *)(puVar10 + 0x18) = uVar14;
        *(undefined8 *)(puVar10 + 0x20) = uVar16;
        *(undefined **)(puVar10 + 0x28) = puVar8;
        *(code **)(puVar10 + 0x30) = FUN_102f091a0;
        *(undefined **)(puVar10 + 0x38) = puVar4;
        pcStack_98 = FUN_102f091c0;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100f1c768;
        puStack_a0 = &UNK_1105e71b0;
        ppuVar12 = &puStack_b8;
        puStack_90 = puVar10;
        func_0x000107c60bc4(ppuVar12);
        puVar10 = puStack_90;
        func_0x000100de78a0(param_2,uVar14);
        func_0x000107c615f0(uVar16);
        func_0x000107c61174(puVar8);
        func_0x000107c6157c(puVar4);
        func_0x000107c61574(puVar10);
        func_0x000107c440d8(lVar7);
        func_0x000107c615e8(uVar16);
        func_0x000107c61574(puVar4);
        func_0x00010006c090(puVar6,puVar13);
        func_0x000107c61170(lVar3);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(puVar8);
        func_0x0001000b44c0(param_2,uVar14);
        func_0x000107c615e8(lVar7);
        return;
      }
      func_0x000107c615e8(uVar16);
      func_0x000107c61574(puVar4);
      func_0x00010006c090(puVar6,puVar13);
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102f08fd0; end: 102f09197;  */

void FUN_102f08fd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f09198; end: 102f0919f;  */

void FUN_102f09198(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_68;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0260c);
          (*pcVar1)();
        }
        uVar7 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c6157c(uVar7);
      }
      else {
        uVar7 = uVar5;
        FUN_102f02a90(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02608);
        (*pcVar1)();
      }
      uVar6 = uVar5 + 1;
      uVar2 = 0x112f27e30;
      func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
      func_0x000100087bd4(&uStack_68,0x102f09b08,uVar7,uVar2);
      uVar2 = uStack_68;
      func_0x000107c3f474(uStack_68);
      func_0x000107c61574(uVar7);
      func_0x000107c61170(uVar2);
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar4);
  }
  return;
}



/* Entry: 102f091a0; end: 102f091bf;  */

void FUN_102f091a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102f091c0; end: 102f091cf;  */

/* WARNING: Possible PIC construction at 0x000102ed8790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed8794) */

void FUN_102f091c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  if (param_1 != 0) {
    puVar4 = PTR_PTR_1126da278;
    func_0x000107c61168(PTR_PTR_1126da278);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar4);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126bcf68;
    func_0x000107c610f8(PTR_PTR_1126bcf68);
    func_0x000107c5ee20(uVar6,uVar2);
    func_0x000107c45ae0(puVar5);
    func_0x000107c61170(uVar6);
    puVar7 = puVar4;
    func_0x000107c3d778(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x0001000285a8(0x112ebe818,&UNK_10dada750);
    puVar5 = puVar7;
    func_0x000103edf20c(puVar7);
    puVar4 = &UNK_1105e5e10;
    func_0x000107c613fc(&UNK_1105e5e10,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar3;
    func_0x000107c6157c(uVar3);
    func_0x00010075a04c(0,1,FUN_102ed92c4,puVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar5);
    return;
  }
  return;
}



/* Entry: 102f091d0; end: 102f093bb;  */

void FUN_102f091d0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102f01a8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),unaff_x20 + 0x38,
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 102f093bc; end: 102f093d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f093bc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
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
  undefined8 uStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    (**(code **)(unaff_x20 + 0x28))(0);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000100b60084(&uStack_100,*(char *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        *(code **)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  }
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f27e80);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  puVar2 = puVar1;
  func_0x000102f05844();
  if ((int)puVar2 == 1) {
    func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
  }
  else {
    lVar4 = puVar1[6];
    func_0x000107c6157c(lVar4);
    func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
    if ((lVar4 != 0) &&
       (lVar3 = *(long *)(lVar3 + 0x40), func_0x000107c615e8(lVar4), lVar3 == lVar4)) {
      FUN_102ed3eb4(&uStack_198);
      uStack_98 = puVar1[0xd];
      uStack_a0 = puVar1[0xc];
      uStack_88 = puVar1[0xf];
      uStack_90 = puVar1[0xe];
      uStack_78 = puVar1[0x11];
      uStack_80 = puVar1[0x10];
      uStack_70 = puVar1[0x12];
      uStack_d8 = puVar1[5];
      uStack_e0 = puVar1[4];
      uStack_c8 = puVar1[7];
      uStack_d0 = puVar1[6];
      uStack_b8 = puVar1[9];
      uStack_c0 = puVar1[8];
      uStack_a8 = puVar1[0xb];
      uStack_b0 = puVar1[10];
      uStack_f8 = puVar1[1];
      uStack_100 = *puVar1;
      uStack_e8 = puVar1[3];
      uStack_f0 = puVar1[2];
      puVar1[0xd] = uStack_130;
      puVar1[0xc] = uStack_138;
      puVar1[0xf] = uStack_120;
      puVar1[0xe] = uStack_128;
      puVar1[0x11] = uStack_110;
      puVar1[0x10] = uStack_118;
      puVar1[0x12] = uStack_108;
      puVar1[5] = uStack_170;
      puVar1[4] = uStack_178;
      puVar1[7] = uStack_160;
      puVar1[6] = uStack_168;
      puVar1[9] = uStack_150;
      puVar1[8] = uStack_158;
      puVar1[0xb] = uStack_140;
      puVar1[10] = uStack_148;
      puVar1[1] = uStack_190;
      *puVar1 = uStack_198;
      puVar1[3] = uStack_180;
      puVar1[2] = uStack_188;
      FUN_102f080f0(&uStack_100,0x112f27e88,&UNK_10db63a18);
    }
  }
  return;
}



/* Entry: 102f093d4; end: 102f0945f;  */

void FUN_102f093d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0xc0);
  lVar5 = *(long *)(unaff_x20 + 200);
  plVar7 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102f09460;
  plVar7[0xb] = lVar6;
  plVar7[0xc] = lVar5;
  plVar7[10] = unaff_x20 + 0x28;
  *(undefined4 *)(plVar7 + 0x1d) = uVar3;
  lVar5 = 0;
  func_0x000107c5fcec(0,uVar1,uVar2);
  puVar4 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xd] = lVar6;
  lVar6 = 0x112d45220;
  FUN_102f07fd0(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[0xe] = lVar5;
  plVar7[0xf] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ef293c,lVar5,lVar6);
  return;
}



/* Entry: 102f09460; end: 102f0949b;  */

void FUN_102f09460(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f09498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f0949c; end: 102f094db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f0949c(ulong param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    FUN_102ee540c(*(undefined8 *)(unaff_x20 + 0x18),
                  *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112f86e78),0,0,
                  *(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  }
  return;
}



/* Entry: 102f094dc; end: 102f094ef;  */

void FUN_102f094dc(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 < 2) {
    if (pcVar1 == (code *)0x0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      return;
    }
    uVar2 = 0;
  }
  (*pcVar1)(uVar2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102f094f0; end: 102f0953f;  */

void FUN_102f094f0(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 102f09540; end: 102f0957f;  */

void FUN_102f09540(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102f09580; end: 102f095bb;  */

void FUN_102f09580(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f095bc; end: 102f095cb;  */

void FUN_102f095bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar8 = &puStack_90;
  uVar10 = *param_1;
  uVar5 = *(undefined1 *)(param_1 + 1);
  pcVar6 = "send(with:sendParameters:snapDocSendHandler:)";
  func_0x0001000c10c0("send(with:sendParameters:snapDocSendHandler:)");
  func_0x000107c61180();
  puVar7 = &UNK_1105e8278;
  func_0x000107c613fc(&UNK_1105e8278,0x48,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  puVar7[0x18] = uVar5;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar3;
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  *(undefined8 *)(puVar7 + 0x38) = uVar4;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  pcStack_70 = FUN_102f093bc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105e8290;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000100d2b830(uVar10,uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c4e524(pcVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(pcVar6);
  return;
}



/* Entry: 102f095cc; end: 102f0966b;  */

void FUN_102f095cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f0966c; end: 102f096d3;  */

void FUN_102f0966c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f096d4; end: 102f09a67;  */

/* WARNING: Possible PIC construction at 0x000102ede0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ede0c8) */
/* WARNING: Removing unreachable block (ram,0x000102ede148) */

void FUN_102f096d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar2 = (undefined *)0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f114430);
    func_0x000107c466bc(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126cdf20;
    func_0x000107c61168(PTR_PTR_1126cdf20);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar2);
    func_0x000107c61180();
    func_0x000107c40b70();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102f09a68; end: 102f09b1b;  */

void FUN_102f09a68(void)

{
  FUN_102f07e50();
  return;
}



/* Entry: 102f09b1c; end: 102f09bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f09b1c(double param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x20;
  double dVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar10 = *(undefined **)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar13 = auStack_88;
  func_0x000107c61428(lVar3 + 0x10,puVar13,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    (*param_3)();
  }
  else {
    puVar4 = puVar10;
    func_0x000107c51cc8();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar6 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    lVar7 = lVar3 + _DAT_112f27fb0;
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    lVar17 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar1);
    (**(code **)(lVar17 + 8))(uVar16,uVar1,lVar17);
    lVar17 = *(long *)(lVar3 + _DAT_112f27e60);
    puVar4 = &UNK_1105e7170;
    uVar14 = 0x20;
    func_0x000107c613fc(&UNK_1105e7170,0x20,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    func_0x000107c6157c(param_4);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar7 = lVar17;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar17);
    if (lVar7 == 0) {
      func_0x000107c615e8(uVar16);
      func_0x000107c61574(puVar4);
      func_0x00010006c090(puVar6,puVar13);
    }
    else {
      FUN_102ed8938();
      if (uVar14 >> 0x3c < 0xf) {
        puVar5 = puVar10;
        func_0x000107c51cc8(puVar10);
        func_0x000107c61180();
        func_0x000107c3e400(&puStack_b8);
        func_0x000107c61170(puVar5);
        func_0x000107c60a3c(&puStack_b8);
        dVar18 = 0.0;
        if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
          param_1 = param_1 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf54);
            (*pcVar2)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf58);
            (*pcVar2)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf5c);
            (*pcVar2)();
          }
          dVar18 = (double)((long)param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU));
        }
        puVar5 = puVar10;
        func_0x000107c51cc8();
        func_0x000107c61180();
        puVar8 = puVar5;
        func_0x000107c5cda4();
        func_0x000107c61170(puVar5);
        puVar5 = PTR___ss6UInt64VN_11034f048;
        puVar15 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        puStack_b8 = puVar8;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        puVar8 = puVar10;
        puVar11 = puVar15;
        func_0x000107c5cdb0();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5ce2c();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = puVar11;
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          func_0x000107c5faec(0);
          puVar8 = puVar11;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar11);
        }
        func_0x000107c5cdb0();
        func_0x000107c61180();
        puVar11 = puVar10;
        func_0x000107c3e1a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          func_0x000107c5faec(0);
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        puVar8 = PTR_PTR_1126ac798;
        func_0x000107c610f8();
        puVar10 = puVar6;
        func_0x000107c5ee20(puVar6,puVar13);
        func_0x000107c5fadc(puVar5,puVar15);
        func_0x000107c6142c(puVar15);
        func_0x000107c45830(0,dVar18);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        puVar10 = &UNK_1105e7198;
        func_0x000107c613fc(&UNK_1105e7198,0x40,7);
        *(undefined8 *)(puVar10 + 0x10) = param_2;
        *(ulong *)(puVar10 + 0x18) = uVar14;
        *(undefined8 *)(puVar10 + 0x20) = uVar16;
        *(undefined **)(puVar10 + 0x28) = puVar8;
        *(code **)(puVar10 + 0x30) = FUN_102f091a0;
        *(undefined **)(puVar10 + 0x38) = puVar4;
        pcStack_98 = FUN_102f091c0;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100f1c768;
        puStack_a0 = &UNK_1105e71b0;
        ppuVar12 = &puStack_b8;
        puStack_90 = puVar10;
        func_0x000107c60bc4(ppuVar12);
        puVar10 = puStack_90;
        func_0x000100de78a0(param_2,uVar14);
        func_0x000107c615f0(uVar16);
        func_0x000107c61174(puVar8);
        func_0x000107c6157c(puVar4);
        func_0x000107c61574(puVar10);
        func_0x000107c440d8(lVar7);
        func_0x000107c615e8(uVar16);
        func_0x000107c61574(puVar4);
        func_0x00010006c090(puVar6,puVar13);
        func_0x000107c61170(lVar3);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(puVar8);
        func_0x0001000b44c0(param_2,uVar14);
        func_0x000107c615e8(lVar7);
        return;
      }
      func_0x000107c615e8(uVar16);
      func_0x000107c61574(puVar4);
      func_0x00010006c090(puVar6,puVar13);
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102f09bac; end: 102f0a2df;  */

undefined * FUN_102f09bac(long param_1)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puStack_130;
  undefined *apuStack_128 [3];
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined *apuStack_e8 [3];
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined *puStack_78;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102f03224(0,lVar4,0);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    ppuVar2 = &puStack_130;
    puVar5 = puStack_78;
    do {
      uStack_b8 = puVar7[1];
      uStack_c0 = *puVar7;
      uStack_a8 = puVar7[3];
      uStack_b0 = puVar7[2];
      uStack_a0 = puVar7[4];
      uStack_98 = (undefined1)puVar7[5];
      uStack_8f = *(undefined8 *)((long)puVar7 + 0x31);
      uStack_97 = (undefined7)*(undefined8 *)((long)puVar7 + 0x29);
      uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)puVar7 + 0x29) >> 0x38);
      puStack_d0 = &UNK_1105e88a8;
      ppuStack_c8 = &PTR_DAT_1105e88d0;
      puVar3 = &UNK_1105e8638;
      func_0x000107c613fc(&UNK_1105e8638,0x49,7);
      uVar8 = *puVar7;
      uVar10 = puVar7[3];
      uVar9 = puVar7[2];
      *(undefined8 *)(puVar3 + 0x18) = puVar7[1];
      *(undefined8 *)(puVar3 + 0x10) = uVar8;
      *(undefined8 *)(puVar3 + 0x28) = uVar10;
      *(undefined8 *)(puVar3 + 0x20) = uVar9;
      uVar8 = puVar7[4];
      *(undefined8 *)(puVar3 + 0x38) = puVar7[5];
      *(undefined8 *)(puVar3 + 0x30) = uVar8;
      uVar8 = *(undefined8 *)((long)puVar7 + 0x29);
      *(undefined8 *)(puVar3 + 0x41) = *(undefined8 *)((long)puVar7 + 0x31);
      *(undefined8 *)(puVar3 + 0x39) = uVar8;
      apuStack_e8[0] = puVar3;
      FUN_102edda34(&uStack_c0,apuStack_128);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_78 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x000102f03224(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_78;
      puVar3 = puStack_d0;
      func_0x0001000c6518(apuStack_e8,puStack_d0);
      puStack_130 = (undefined1 *)ppuVar2;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
      puVar6 = (undefined8 *)((long)ppuVar2 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar6);
      puStack_110 = &UNK_1105e88a8;
      ppuStack_108 = &PTR_DAT_1105e88d0;
      puVar3 = &UNK_1105e8638;
      func_0x000107c613fc(&UNK_1105e8638,0x49,7);
      apuStack_128[0] = puVar3;
      uVar8 = *puVar6;
      uVar10 = puVar6[3];
      uVar9 = puVar6[2];
      *(undefined8 *)(puVar3 + 0x18) = puVar6[1];
      *(undefined8 *)(puVar3 + 0x10) = uVar8;
      *(undefined8 *)(puVar3 + 0x28) = uVar10;
      *(undefined8 *)(puVar3 + 0x20) = uVar9;
      uVar8 = puVar6[4];
      *(undefined8 *)(puVar3 + 0x38) = puVar6[5];
      *(undefined8 *)(puVar3 + 0x30) = uVar8;
      uVar8 = *(undefined8 *)((long)puVar6 + 0x29);
      *(undefined8 *)(puVar3 + 0x41) = *(undefined8 *)((long)puVar6 + 0x31);
      *(undefined8 *)(puVar3 + 0x39) = uVar8;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      FUN_102f1bbec(apuStack_128,puVar5 + uVar1 * 0x28 + 0x20);
      func_0x000102f1bc04(apuStack_e8);
      puVar7 = puVar7 + 8;
      lVar4 = lVar4 + -1;
      ppuVar2 = (undefined1 **)puStack_130;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Entry: 102f0a2e0; end: 102f0a73b;  */

undefined8
FUN_102f0a2e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar13 = *(ulong *)(param_1 + 8);
  if (uVar13 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar2 = uVar13;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    return 0;
  }
  if ((uVar13 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0a73c);
      (*pcVar1)();
    }
    lVar14 = *(long *)(uVar13 + 0x20);
    func_0x000107c6157c(lVar14);
  }
  else {
    lVar14 = 0;
    FUN_102f02a90(0,uVar13);
  }
  uVar3 = *(undefined8 *)(lVar14 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lVar14);
  lVar14 = param_1;
  FUN_102f10b20();
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x10) != 0) {
      uVar12 = *(undefined8 *)(lVar14 + 0x20);
      uVar15 = *(undefined8 *)(lVar14 + 0x28);
      func_0x000107c61434(uVar15);
      func_0x000107c6142c(lVar14);
      goto LAB_102f0a3ac;
    }
    func_0x000107c6142c();
  }
  uVar12 = 0;
  uVar15 = 0;
LAB_102f0a3ac:
  puVar4 = &UNK_1105e84d0;
  func_0x000107c613fc(&UNK_1105e84d0,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x38) = uVar15;
  *(undefined8 *)(puVar4 + 0x40) = param_2;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_1105e84f8;
  func_0x000107c613fc(&UNK_1105e84f8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10db63b90;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102f10de4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10130cf2c;
  puStack_88 = &UNK_1105e8510;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126b2470;
  func_0x000107c61168();
  puVar6 = &UNK_1105e8548;
  func_0x000107c613fc(&UNK_1105e8548,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10db63b90;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  pcStack_80 = (code *)0x102f10e08;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10279b358;
  puStack_88 = &UNK_1105e8560;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c5e560();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  lVar14 = 0x112ebe5f8;
  lVar9 = lVar14;
  FUN_102f0bbc4(0x112ebe5f8,&UNK_10db74d60,0x112ebe6b0,&UNK_10dada080);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 3;
  *(undefined8 *)(lVar9 + 0x10) = 1;
  *(undefined **)(lVar9 + 0x20) = puVar8;
  func_0x000107c61174(puVar8);
  func_0x0001000285a8(0x112ebe5f8,&UNK_10db74d60);
  lVar10 = lVar9;
  func_0x000107c5fc48(lVar9,lVar14);
  func_0x000107c61574(lVar9);
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fc48(param_6,PTR___sSSN_11034da80);
  }
  puVar6 = PTR_PTR_1126b2478;
  func_0x000107c610f8(PTR_PTR_1126b2478);
  func_0x000107c47134();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_6);
  func_0x000102f105f0(param_1);
  puVar11 = PTR_PTR_1126b2490;
  func_0x000107c610f8(PTR_PTR_1126b2490);
  func_0x000107c61174(puVar5);
  func_0x000107c47634(puVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000103f5b134(0);
  func_0x000107c610f8();
  puVar6 = puVar11;
  func_0x000107c61174(puVar11);
  uVar12 = 0;
  func_0x000103f5aeec(0,puVar11,0,0,0,0);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar3);
  return uVar12;
}



/* Entry: 102f0a73c; end: 102f0a84b;  */

/* WARNING: Possible PIC construction at 0x000102f0a7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f0a7c4) */

void FUN_102f0a73c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_2 + 8);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation4DateVACycfC_110350bb0)(param_1);
    return;
  }
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0a848);
      (*pcVar1)();
    }
    lVar5 = *(long *)(uVar4 + 0x20);
    func_0x000107c6157c(lVar5);
  }
  else {
    lVar5 = 0;
    FUN_102f02a90(0,uVar4);
  }
  lVar3 = *(long *)(lVar5 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lVar5);
  func_0x000107c5ca90();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0a84c);
    (*pcVar1)();
  }
  func_0x000107c5b184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102f0a84c; end: 102f0a96f;  */

ulong FUN_102f0a84c(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong unaff_x20;
  ulong uVar4;
  
  uVar4 = unaff_x20;
  func_0x000107c3fe70();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_102f1c198(0,0x112ebb480,&PTR_PTR_1126c4258);
  uVar3 = uVar4;
  func_0x000107c5fc54(uVar4,uVar2);
  func_0x000107c61170(uVar4);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar3);
  uVar3 = 0;
  if ((-1 < (long)param_1) && ((long)param_1 < (long)uVar4)) {
    func_0x000107c3fe70();
    func_0x000107c61180();
    uVar4 = unaff_x20;
    func_0x000107c5fc54();
    func_0x000107c61170(unaff_x20);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0a970);
        (*pcVar1)();
      }
      param_1 = *(ulong *)(uVar4 + param_1 * 8 + 0x20);
      func_0x000107c61174(param_1);
    }
    else {
      func_0x000102f02fac(param_1,uVar4);
    }
    func_0x000107c6142c(uVar4);
    uVar3 = param_1;
  }
  return uVar3;
}



/* Entry: 102f0a970; end: 102f0af97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102f0a970(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar5 = *param_1;
  uVar15 = uVar5;
  uVar12 = param_2;
  func_0x000107c5d0f0();
  uVar14 = 0;
  iVar4 = (int)uVar15;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      uVar15 = *(ulong *)(param_2 + _DAT_113076888);
      if (uVar15 != 0) {
        uVar19 = uVar15 & 0xffffffffffffff8;
        if (uVar15 >> 0x3e == 0) {
          uVar17 = *(ulong *)(uVar19 + 0x10);
        }
        else {
          uVar17 = uVar15;
          if (-1 < (long)uVar15) {
            uVar17 = uVar19;
          }
          func_0x000107c60480();
        }
        if (uVar17 != 0) {
          uVar20 = 0;
          do {
            if ((uVar15 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0ae94);
                (*pcVar3)();
              }
              uVar9 = *(ulong *)(uVar15 + uVar20 * 8 + 0x20);
              func_0x000107c61174();
              uVar13 = uVar12;
            }
            else {
              uVar9 = uVar20;
              uVar13 = uVar15;
              func_0x000102f02c38();
            }
            uVar1 = uVar20 + 1;
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0ae90);
              (*pcVar3)();
            }
            uVar8 = *(ulong *)(uVar9 + _DAT_113076ad8);
            uVar2 = ((ulong *)(uVar9 + _DAT_113076ad8))[1];
            func_0x000107c61434(uVar2);
            uVar6 = uVar5;
            func_0x000107c5bfec();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c5faec();
            uVar12 = uVar13;
            func_0x000107c61170(uVar6);
            if (uVar2 == 0) {
              func_0x000107c6142c(uVar13);
              func_0x000107c61170(uVar9);
            }
            else {
              if (uVar8 == uVar7 && uVar2 == uVar13) {
                func_0x000107c6142c(uVar2);
                func_0x000107c6142c(uVar13);
LAB_102f0ae74:
                func_0x000107c61170(uVar9);
LAB_102f0ae78:
                uVar14 = 1;
                goto LAB_102f0af78;
              }
              uVar12 = uVar2;
              func_0x000107c605b8(uVar8,uVar2,uVar7,uVar13,0);
              func_0x000107c6142c(uVar2);
              func_0x000107c6142c(uVar13);
              func_0x000107c61170(uVar9);
              if ((uVar8 & 1) != 0) goto LAB_102f0ae78;
            }
            uVar20 = uVar20 + 1;
          } while (uVar1 != uVar17);
        }
      }
      uVar15 = *(ulong *)(param_2 + _DAT_1138135c0);
      if (uVar15 != 0) {
        func_0x000107c5bfec(uVar5);
        func_0x000107c61180();
        uVar19 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if (*(long *)(uVar15 + 0x10) != 0) {
          func_0x000107c61434(uVar15);
          uVar5 = uVar12;
          func_0x000100029284(uVar19);
          func_0x000107c6142c(uVar12);
          uVar12 = uVar15;
          if ((uVar5 & 1) != 0) {
            func_0x000107c6142c(uVar15);
            uVar14 = 1;
            goto LAB_102f0af78;
          }
        }
        func_0x000107c6142c(uVar12);
      }
      uVar14 = (uint)*(byte *)(param_2 + _DAT_113076868);
    }
    else if (iVar4 == 1) {
      func_0x000107c5bfec();
      func_0x000107c61180();
      uVar15 = uVar5;
      func_0x000107c5faec();
      uVar17 = uVar12;
      func_0x000107c61170();
      func_0x00010846a2f4();
      func_0x000107c61180();
      uVar19 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      if ((uVar15 == uVar19) && (uVar12 == uVar17)) {
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar17);
      }
      else {
        func_0x000107c605b8(uVar15,uVar12,uVar19,uVar17,0);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar17);
        if ((uVar15 & 1) == 0) {
          uVar14 = (uint)*(byte *)(param_2 + _DAT_1138135d0);
          goto LAB_102f0af78;
        }
      }
      lVar18 = *(long *)(param_2 + _DAT_113076880);
      if (lVar18 == 0) {
        uVar14 = 0;
      }
      else {
        lVar16 = *(long *)(lVar18 + _DAT_1130769b0);
        if (lVar16 == 0) {
          uVar14 = 1;
        }
        else {
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c61174(lVar18);
          func_0x000107c61434(lVar16);
          func_0x000107c46ed0(puVar10);
          puVar11 = puVar10;
          func_0x0001010345b0();
          func_0x000107c6142c(lVar16);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(lVar18);
          uVar14 = (uint)puVar11 ^ 1;
        }
      }
    }
    else if (iVar4 == 2) {
      lVar18 = *(long *)(param_2 + _DAT_113076880);
      if ((lVar18 == 0) || (lVar16 = *(long *)(lVar18 + _DAT_1130769b0), lVar16 == 0)) {
        uVar14 = 0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(lVar18);
        func_0x000107c61434(lVar16);
        func_0x000107c46ed0(puVar10);
        puVar11 = puVar10;
        func_0x0001010345b0();
        func_0x000107c6142c(lVar16);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar18);
        uVar14 = (uint)puVar11;
      }
    }
  }
  else if (iVar4 == 6 || iVar4 == 4) {
    uVar15 = *(ulong *)(param_2 + _DAT_113076888);
    if (uVar15 != 0) {
      uVar19 = uVar15 & 0xffffffffffffff8;
      if (uVar15 >> 0x3e == 0) {
        uVar17 = *(ulong *)(uVar19 + 0x10);
      }
      else {
        uVar17 = uVar15;
        if (-1 < (long)uVar15) {
          uVar17 = uVar19;
        }
        func_0x000107c60480();
      }
      if (uVar17 != 0) {
        uVar20 = 0;
        do {
          if ((uVar15 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0ae8c);
              (*pcVar3)();
            }
            uVar9 = *(ulong *)(uVar15 + uVar20 * 8 + 0x20);
            func_0x000107c61174();
            uVar13 = uVar12;
          }
          else {
            uVar9 = uVar20;
            uVar13 = uVar15;
            func_0x000102f02c38();
          }
          uVar1 = uVar20 + 1;
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0ae88);
            (*pcVar3)();
          }
          uVar8 = *(ulong *)(uVar9 + _DAT_113076ad8);
          uVar2 = ((ulong *)(uVar9 + _DAT_113076ad8))[1];
          func_0x000107c61434(uVar2);
          uVar6 = uVar5;
          func_0x000107c5bfec();
          func_0x000107c61180();
          uVar7 = uVar6;
          func_0x000107c5faec();
          uVar12 = uVar13;
          func_0x000107c61170(uVar6);
          if (uVar2 == 0) {
            func_0x000107c6142c(uVar13);
            func_0x000107c61170(uVar9);
          }
          else {
            if (uVar8 == uVar7 && uVar2 == uVar13) {
              func_0x000107c6142c(uVar2);
              func_0x000107c6142c(uVar13);
              goto LAB_102f0ae74;
            }
            uVar12 = uVar2;
            func_0x000107c605b8(uVar8,uVar2,uVar7,uVar13,0);
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(uVar13);
            func_0x000107c61170(uVar9);
            if ((uVar8 & 1) != 0) goto LAB_102f0ae78;
          }
          uVar20 = uVar20 + 1;
        } while (uVar1 != uVar17);
      }
    }
    uVar14 = 0;
  }
  else if (iVar4 == 3) {
    uVar14 = (uint)*(byte *)(param_2 + _DAT_113076868);
  }
LAB_102f0af78:
  return uVar14 & 1;
}



/* Entry: 102f0af98; end: 102f0b023;  */

void FUN_102f0af98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  lVar1 = 0;
  func_0x00010392d0f4();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f0b024,0,0);
  return;
}



/* Entry: 102f0b024; end: 102f0b08b;  */

void FUN_102f0b024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f0b08c,uVar1,uVar2);
  return;
}



/* Entry: 102f0b08c; end: 102f0b0d3;  */

void FUN_102f0b08c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  func_0x000107c61574();
  (*pcVar1)();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f0b0d4,0,0);
  return;
}



/* Entry: 102f0b0d4; end: 102f0b1f3;  */

void FUN_102f0b0d4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x22 + 0x60);
    func_0x000107c61174();
  }
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(unaff_x22 + 0x70);
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar3 = &UNK_1105e85e8;
    func_0x000107c613fc(&UNK_1105e85e8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(long *)(puVar3 + 0x18) = lVar1;
    *(code **)(unaff_x22 + 0x30) = FUN_102f10f3c;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_101485318;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1105e8600;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar7);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61434(lVar1);
    func_0x000107c61574(uVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(lVar7);
  }
  *(undefined **)(unaff_x22 + 0xc0) = puVar2;
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f0b1f4;
  plVar6 = *(long **)(unaff_x22 + 0x78);
  plVar4[5] = unaff_x22 + 0x40;
  plVar4[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar4[7] = lVar7;
  lVar1 = 0;
  __sSqMa(0,lVar7);
  plVar4[8] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[9] = lVar1;
  uVar5 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar5;
  lVar1 = *(long *)(lVar7 + -8);
  plVar4[0xb] = lVar1;
  uVar5 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102f0b1f4; end: 102f0b28f;  */

void FUN_102f0b1f4(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x22;
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 200));
  uVar3 = *(undefined8 *)(lVar6 + 0x40);
  lVar2 = *(long *)(lVar6 + 0x48);
  *(undefined8 *)(lVar6 + 0xd0) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(lVar6 + 0xd8) = plVar4;
  *plVar4 = lVar7;
  plVar4[1] = (long)FUN_102f0b290;
                    /* WARNING: Could not recover jumptable at 0x000102f0b28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(lVar6 + 0xa0),*(undefined8 *)(lVar6 + 0xb8),uVar3,lVar2);
  return;
}



/* Entry: 102f0b290; end: 102f0b2f3;  */

void FUN_102f0b290(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  *(long *)(lVar3 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102f0b2f4;
  }
  else {
    pcVar2 = FUN_102f0b430;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102f0b2f4; end: 102f0b42f;  */

void FUN_102f0b2f4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa0);
  puVar4 = puVar2;
  func_0x000107c614c4(puVar2,*(undefined8 *)(unaff_x22 + 0x98));
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  if ((int)puVar4 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(lVar1 + 0x20))(uVar8,puVar2,uVar9);
    puVar6 = PTR_PTR_1126b1c68;
    func_0x000107c61168(PTR_PTR_1126b1c68);
    puVar5 = puVar6;
    func_0x000107c5ed90();
    func_0x000107c5de5c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar5);
    (**(code **)(lVar1 + 8))(uVar8,uVar9);
  }
  else {
    uVar8 = *puVar2;
    puVar6 = PTR_PTR_1126b1c68;
    func_0x000107c61168(PTR_PTR_1126b1c68);
    func_0x000107c45148();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102f0b42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Entry: 102f0b430; end: 102f0b48b;  */

void FUN_102f0b430(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102f0b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f0b48c; end: 102f0b5c7;  */

undefined * FUN_102f0b48c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  func_0x000107c60f6c();
  lVar2 = 0;
  func_0x000102f0ba50();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  puVar3 = &UNK_1105e85c0;
  func_0x000107c613fc(&UNK_1105e85c0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(long *)(puVar3 + 0x18) = lVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(param_2);
  uVar4 = 6;
  func_0x0001001ca524(6,0,0x54,3,0,0,&UNK_10db63bb8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c6005c();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (*(long *)(lVar2 + 0x10) == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c3e174();
    func_0x000107c61180();
  }
  func_0x000107c61574(lVar2);
  func_0x000107c61170(uVar1);
  return puVar3;
}



/* Entry: 102f0b5c8; end: 102f0b61f;  */

void FUN_102f0b5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102f0b620;
                    /* WARNING: Could not recover jumptable at 0x000102f0b61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))();
  return;
}



/* Entry: 102f0b620; end: 102f0b68f;  */

void FUN_102f0b620(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_1;
    pcVar1 = FUN_102f0b690;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x102f0b6d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f0b690; end: 102f0b70b;  */

void FUN_102f0b690(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10) = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61170(uVar1);
  func_0x000107c60060();
                    /* WARNING: Could not recover jumptable at 0x000102f0b6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f0b70c; end: 102f0b7c3;  */

/* WARNING: Possible PIC construction at 0x000102f0b7a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f0b7a8) */

void FUN_102f0b70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105e8598;
  func_0x000107c613fc(&UNK_1105e8598,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(6,0,0x54,3,0,0,&UNK_10db63ba8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102f0b7c4; end: 102f0b81b;  */

void FUN_102f0b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102f0b81c;
                    /* WARNING: Could not recover jumptable at 0x000102f0b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))();
  return;
}



/* Entry: 102f0b81c; end: 102f0b887;  */

void FUN_102f0b81c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    pcVar1 = FUN_102f0b888;
  }
  else {
    pcVar1 = FUN_102f0b8cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f0b888; end: 102f0b8cb;  */

void FUN_102f0b888(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(unaff_x22 + 0x10))(0,uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f0b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f0b8cc; end: 102f0b927;  */

void FUN_102f0b8cc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c614b0(uVar2);
  (*pcVar1)(uVar2,0);
  func_0x000107c614ac(uVar2);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102f0b924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f0b928; end: 102f0b967;  */

void FUN_102f0b928(ulong param_1,code *param_2)

{
  undefined8 uVar1;
  
  if (param_1 < 2) {
    if (param_2 == (code *)0x0) {
      return;
    }
    uVar1 = 1;
  }
  else {
    if (param_2 == (code *)0x0) {
      return;
    }
    uVar1 = 0;
  }
  (*param_2)(uVar1);
  return;
}



/* Entry: 102f0b968; end: 102f0b9a3; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceUtil init] */

void FUN_102f0b968(undefined8 param_1)

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



/* Entry: 102f0b9a4; end: 102f0b9d7;  */

void FUN_102f0b9a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f0b9d8; end: 102f0b9db; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceUtil .cxx_destruct] */

void FUN_102f0b9d8(void)

{
  return;
}



/* Entry: 102f0b9dc; end: 102f0b9fb;  */

void FUN_102f0b9dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128aba60);
  return;
}



/* Entry: 102f0b9fc; end: 102f0ba2b;  */

bool FUN_102f0b9fc(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && ((char)param_1[1] == '\x01') != ((char)param_2[1] != '\x01');
}



/* Entry: 102f0ba2c; end: 102f0ba6f;  */

void FUN_102f0ba2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f0ba70; end: 102f0bae7;  */

void FUN_102f0ba70(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102f1c198(0,param_1,param_2);
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



/* Entry: 102f0bae8; end: 102f0bb03;  */

void FUN_102f0bae8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f281a8;
  plVar5 = (long *)&UNK_10db63bc0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)0x102f1c3f0)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102f0bb04; end: 102f0bb6f;  */

void FUN_102f0bb04(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 102f0bb70; end: 102f0bbc3;  */

void FUN_102f0bb70(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f281a0;
  plVar5 = (long *)&UNK_10db74760;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_1043f7068)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102f0bbc4; end: 102f0bc37;  */

/* WARNING: Possible PIC construction at 0x000102f0bc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f0bc08) */
/* WARNING: Removing unreachable block (ram,0x000102f0bc0c) */

void FUN_102f0bbc4(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x102f0bc08;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 102f0bc38; end: 102f0bc7f;  */

void FUN_102f0bc38(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f281e8;
  plVar5 = (long *)&UNK_10db63c10;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102f1c198(0,0x112f27bc8,&PTR_PTR_1126b37e0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102f0bc80; end: 102f0bddf;  */

void FUN_102f0bc80(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102f0bd4c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102f0bd4c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102f0bde0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102f0bdb8;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102f0bdb8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102f0bde0; end: 102f0d6b7;  */

void FUN_102f0bde0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102f0c040:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102f0c070);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102f0c040;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102f0c074);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
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
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102f0d6b8; end: 102f0da8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f0d6b8(undefined *param_1,undefined *param_2,undefined *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long extraout_x8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  undefined *unaff_x21;
  undefined *puVar12;
  undefined *unaff_x22;
  uint uVar13;
  undefined *unaff_x23;
  long lVar14;
  undefined *puVar15;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long alStack_c0 [12];
  undefined auStack_60 [8];
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)((long)alStack_c0 + lVar2 + 0x60);
  puVar3 = param_1;
  func_0x000107c4050c();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
LAB_102f0d80c:
    puVar4 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    param_2 = param_1;
    puVar5 = puVar6;
    puVar6 = unaff_x22;
  }
  else {
    unaff_x21 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    unaff_x23 = (undefined *)((ulong)param_2 >> 0x3e);
    uVar13 = (uint)((ulong)param_2 >> 0x20);
    iVar11 = (int)unaff_x21;
    if (uVar13 >> 0x1e < 2) {
      if (uVar13 >> 0x1e == 0) {
        if (((ulong)param_2 & 0xff000000000000) == 0) {
LAB_102f0d7fc:
          func_0x00010006c090(unaff_x21,param_2);
          param_1 = param_2;
          unaff_x22 = puVar3;
          goto LAB_102f0d80c;
        }
      }
      else if ((long)iVar11 == (long)unaff_x21 >> 0x20) goto LAB_102f0d7fc;
    }
    else if ((uVar13 >> 0x1e != 2) || (*(long *)(unaff_x21 + 0x10) == *(long *)(unaff_x21 + 0x18)))
    goto LAB_102f0d7fc;
    puStack_58 = unaff_x21;
    puStack_50 = param_2;
    func_0x000107c5fb04(puVar6);
    FUN_102f1c1d8();
    puVar4 = auStack_60 + 8;
    param_3 = PTR___s10Foundation4DataVN_110350ae0;
    func_0x000107c5faf4();
    puVar12 = puVar6;
    puVar5 = puVar4;
    if ((puVar6 == (undefined *)0x0) ||
       (puVar15 = puVar4, func_0x000107c5fb5c(), puVar3 = puVar6, (long)puVar15 < 0x11)) {
      uVar13 = uVar13 >> 0x1e;
      iVar8 = (int)((ulong)unaff_x21 >> 0x20);
      if (uVar13 == 2) {
        uVar9 = *(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10);
        if (SBORROW8(*(long *)(unaff_x21 + 0x18),*(long *)(unaff_x21 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0da80);
          (*pcVar1)();
        }
joined_r0x000102f0d868:
        if (uVar9 == 0x10) {
LAB_102f0d86c:
          unaff_x24 = puVar6;
          if (uVar13 == 2) {
            lVar14 = *(long *)(unaff_x21 + 0x10);
            func_0x000107c5ec30();
            param_3 = puVar4;
            if (puVar4 != (undefined *)0x0) {
              puVar3 = puVar4;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar14,(long)puVar3)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0da88);
                (*pcVar1)();
              }
              param_3 = puVar4 + (lVar14 - (long)puVar3);
            }
            func_0x000107c5ec38();
            puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            func_0x000107c610f8();
            func_0x000107c48ff4();
            unaff_x23 = puVar3;
            func_0x000107c3ac54();
          }
          else {
            if (uVar13 != 1) {
              puStack_50._0_6_ = SUB86(param_2,0);
              puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
              puStack_58 = unaff_x21;
              func_0x000107c610f8();
              param_3 = auStack_60 + 8;
              func_0x000107c48ff4();
              unaff_x23 = puVar3;
              func_0x000107c3ac54();
              func_0x000107c61180();
              func_0x000107c61170(puVar3);
              puVar4 = unaff_x23;
              func_0x000107c5faec();
              func_0x000107c61170(unaff_x23);
              func_0x000107c6142c(puVar6);
              func_0x00010006c090(unaff_x21,param_2);
              puVar12 = unaff_x24;
              puVar5 = puVar6;
              puVar6 = puVar4;
              goto LAB_102f0d810;
            }
            lVar14 = (long)iVar11;
            if ((long)unaff_x21 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0da84);
              (*pcVar1)();
            }
            func_0x000107c5ec30();
            param_3 = puVar4;
            if (puVar4 != (undefined *)0x0) {
              puVar3 = puVar4;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar14,(long)puVar3)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0da8c);
                (*pcVar1)();
              }
              param_3 = puVar4 + (lVar14 - (long)puVar3);
            }
            func_0x000107c5ec38();
            puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            func_0x000107c610f8();
            func_0x000107c48ff4();
            unaff_x23 = puVar3;
            func_0x000107c3ac54();
          }
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          puVar4 = unaff_x23;
          func_0x000107c5faec();
          func_0x000107c61170(unaff_x23);
          func_0x000107c6142c(puVar6);
          func_0x00010006c090(unaff_x21,param_2);
          puVar12 = unaff_x24;
          puVar5 = puVar4;
          goto LAB_102f0d810;
        }
      }
      else {
        if (uVar13 != 1) {
          uVar9 = (ulong)param_2 >> 0x30 & 0xff;
          goto joined_r0x000102f0d868;
        }
        if (SBORROW4(iVar8,iVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0da7c);
          (*pcVar1)();
        }
        if (iVar8 - iVar11 == 0x10) goto LAB_102f0d86c;
      }
      func_0x00010006c090(unaff_x21,param_2);
      unaff_x21 = puVar6;
      puVar6 = puVar3;
    }
    else {
      func_0x00010006c090(unaff_x21,param_2);
    }
  }
LAB_102f0d810:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)alStack_c0 + lVar2) = unaff_x28;
  *(undefined8 *)((long)alStack_c0 + lVar2 + 8) = unaff_x27;
  *(undefined8 *)((long)alStack_c0 + lVar2 + 0x10) = unaff_x26;
  *(undefined8 *)((long)alStack_c0 + lVar2 + 0x18) = unaff_x25;
  *(undefined **)((long)alStack_c0 + lVar2 + 0x20) = unaff_x24;
  *(undefined **)((long)alStack_c0 + lVar2 + 0x28) = unaff_x23;
  *(undefined **)((long)alStack_c0 + lVar2 + 0x30) = puVar6;
  *(undefined **)((long)alStack_c0 + lVar2 + 0x38) = unaff_x21;
  *(undefined **)((long)alStack_c0 + lVar2 + 0x40) = puVar5;
  *(undefined **)((long)alStack_c0 + lVar2 + 0x48) = param_2;
  *(undefined1 **)((long)alStack_c0 + lVar2 + 0x50) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_c0 + lVar2 + 0x58) = FUN_102f0da90;
  uVar9 = (ulong)puVar12 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar9 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar9 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168();
    puVar6 = puVar3;
    func_0x000107c51bc4();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126ac7b0;
        func_0x000107c610f8(PTR_PTR_1126ac7b0);
        func_0x000107c4704c();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar3);
        return puVar4;
      }
LAB_102f0dd5c:
      func_0x000107c61170(puVar6);
    }
LAB_102f0dd60:
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar12;
    if (puVar4 == (undefined *)0x0) {
LAB_102f0dc2c:
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c61168();
      puVar6 = puVar5;
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) goto LAB_102f0dd60;
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102f0dd5c;
      puVar15 = PTR_PTR_1126ac7b0;
      func_0x000107c610f8();
      func_0x000107c4704c();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      if (puVar4 == (undefined *)0x0) {
        return puVar15;
      }
      if (puVar15 == (undefined *)0x0) {
        return (undefined *)0x0;
      }
      puVar6 = puVar15;
      func_0x000107c4a8c4(puVar15);
      func_0x000107c61180();
      puVar10 = puVar6;
      func_0x000107c5faec();
      puVar7 = puVar3;
      func_0x000107c61170(puVar6);
      puVar6 = puVar15;
      func_0x000107c4a804(puVar15);
      func_0x000107c61180();
      puVar5 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170(puVar6);
      func_0x0001044d64d8(0);
      func_0x000107c610f8();
      func_0x0001044d5bec(puVar10,puVar3,puVar5,puVar7);
      func_0x000107c5fadc(puVar12,param_3);
      func_0x000107c5451c(puVar4);
    }
    else {
      puVar6 = puVar12;
      puVar3 = param_3;
      func_0x000107c5fadc(puVar12,param_3);
      puVar5 = puVar4;
      func_0x000107c42714();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      if (puVar5 == (undefined *)0x0) goto LAB_102f0dc2c;
      lVar2 = *(long *)((long)(puVar5 + _DAT_113080550) + 8);
      if (lVar2 == 0) {
LAB_102f0dc24:
        func_0x000107c61170(puVar5);
        goto LAB_102f0dc2c;
      }
      lVar14 = *(long *)((long)(puVar5 + _DAT_113080558) + 8);
      if (lVar14 == 0) goto LAB_102f0dc24;
      puVar10 = *(undefined **)(puVar5 + _DAT_113080550);
      puVar12 = *(undefined **)(puVar5 + _DAT_113080558);
      puVar15 = PTR_PTR_1126ac7b0;
      func_0x000107c610f8(PTR_PTR_1126ac7b0);
      func_0x000107c61434(lVar2);
      func_0x000107c61434(lVar14);
      func_0x000107c5fadc(puVar10,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c5fadc(puVar12,lVar14);
      func_0x000107c6142c(lVar14);
      func_0x000107c4704c(puVar15);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar12);
  }
  return puVar15;
}



/* Entry: 102f0da90; end: 102f0e817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f0da90(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  uVar4 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar4 = param_3 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168();
    puVar5 = puVar2;
    func_0x000107c51bc4();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126ac7b0;
        func_0x000107c610f8(PTR_PTR_1126ac7b0);
        func_0x000107c4704c();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar2);
        return puVar7;
      }
LAB_102f0dd5c:
      func_0x000107c61170(puVar5);
    }
LAB_102f0dd60:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = param_2;
    if (param_1 == 0) {
LAB_102f0dc2c:
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c61168();
      puVar5 = puVar2;
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102f0dd60;
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) goto LAB_102f0dd5c;
      puVar7 = PTR_PTR_1126ac7b0;
      func_0x000107c610f8();
      func_0x000107c4704c();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      if (param_1 == 0) {
        return puVar7;
      }
      if (puVar7 == (undefined *)0x0) {
        return (undefined *)0x0;
      }
      puVar2 = puVar7;
      func_0x000107c4a8c4(puVar7);
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c5faec();
      uVar6 = uVar4;
      func_0x000107c61170(puVar2);
      puVar2 = puVar7;
      func_0x000107c4a804(puVar7);
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
      func_0x0001044d64d8(0);
      func_0x000107c610f8();
      func_0x0001044d5bec(puVar5,uVar4,puVar3,uVar6);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c5451c(param_1);
    }
    else {
      uVar6 = param_2;
      uVar4 = param_3;
      func_0x000107c5fadc(param_2,param_3);
      lVar1 = param_1;
      func_0x000107c42714();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (lVar1 == 0) goto LAB_102f0dc2c;
      lVar8 = ((undefined8 *)(lVar1 + _DAT_113080550))[1];
      if (lVar8 == 0) {
LAB_102f0dc24:
        func_0x000107c61170(lVar1);
        goto LAB_102f0dc2c;
      }
      uVar6 = ((ulong *)(lVar1 + _DAT_113080558))[1];
      if (uVar6 == 0) goto LAB_102f0dc24;
      puVar5 = *(undefined **)(lVar1 + _DAT_113080550);
      param_2 = *(ulong *)(lVar1 + _DAT_113080558);
      puVar7 = PTR_PTR_1126ac7b0;
      func_0x000107c610f8(PTR_PTR_1126ac7b0);
      func_0x000107c61434(lVar8);
      func_0x000107c61434(uVar6);
      func_0x000107c5fadc(puVar5,lVar8);
      func_0x000107c6142c(lVar8);
      func_0x000107c5fadc(param_2,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c4704c(puVar7);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_2);
  }
  return puVar7;
}



/* Entry: 102f0e818; end: 102f0e91b;  */

bool FUN_102f0e818(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar3 = *(undefined **)(param_1 + 0x48);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  puVar7 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar6 = *(undefined **)(puVar7 + 0x10);
  }
  else {
    puVar6 = puVar7;
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar6 = puVar1;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(puVar3);
  puVar3 = (undefined *)0x0;
  do {
    puVar5 = puVar3;
    if (puVar6 == puVar5) break;
    if (((ulong)puVar1 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar7 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f0e8fc);
        (*pcVar2)();
      }
      puVar3 = *(undefined **)(puVar1 + (long)puVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar3 = puVar5;
      func_0x000100fb1534(puVar5,puVar1);
    }
    if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f0e8cc);
      (*pcVar2)();
    }
    puVar4 = puVar3;
    func_0x000107c5d0f0();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5 + 1;
  } while ((int)puVar4 != 2);
  func_0x000107c6142c(puVar1);
  return puVar6 != puVar5;
}



/* Entry: 102f0e91c; end: 102f0f3af;  */

undefined * FUN_102f0e91c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  uVar14 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
  if ((uVar14 & 1) == 0) {
LAB_102f0e9a4:
    uVar21 = 0;
  }
  else {
    uVar14 = param_1;
    func_0x000107c44a00();
    func_0x000107c61180();
    if (uVar14 == 0) goto LAB_102f0e9a4;
    uVar5 = 0;
    FUN_102f1c198(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar21 = uVar14;
    func_0x000107c5fc54(uVar14,uVar5);
    func_0x000107c61170(uVar14);
  }
  uVar14 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
  if ((uVar14 & 1) != 0) {
    uVar14 = param_1;
    func_0x000107c4d1e0();
    func_0x000107c61180();
    if (uVar14 != 0) {
      uVar5 = 0;
      FUN_102f1c198(0,0x112d54e00,&PTR_PTR_1126bcf68);
      uVar6 = uVar14;
      func_0x000107c5fc54(uVar14,uVar5);
      func_0x000107c61170(uVar14);
      uVar14 = uVar6 >> 0x3e;
      if (uVar14 == 0) {
        uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar7 = uVar6 & 0xffffffffffffff8;
        if ((uVar6 & 0x8000000000000000) != 0) {
          uVar7 = uVar6;
        }
        func_0x000107c60480();
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
      if (uVar7 != 0) {
        func_0x000107c61434(uVar6);
        uVar7 = 0;
        func_0x000102f032ac(0,0,0);
        if (uVar14 == 0) {
          uVar20 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar20 = uVar6 & 0xffffffffffffff8;
          if ((uVar6 & 0x8000000000000000) != 0) {
            uVar20 = uVar6;
          }
          func_0x000107c60480();
        }
        if (uVar20 != 0) {
          uVar15 = uVar6 & 0xffffffffffffff8;
          uVar2 = uVar15;
          if ((uVar6 & 0x8000000000000000) != 0) {
            uVar2 = uVar6;
          }
          uVar16 = uVar21 & 0xffffffffffffff8;
          uVar3 = uVar21;
          if (-1 < (long)uVar21) {
            uVar3 = uVar16;
          }
          lVar19 = 4;
          do {
            uVar22 = lVar19 - 4;
            if ((uVar6 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar15 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102f0ec4c);
                (*pcVar4)();
              }
              uVar8 = *(ulong *)(uVar6 + lVar19 * 8);
              func_0x000107c61174();
              uVar13 = uVar7;
            }
            else {
              uVar8 = uVar22;
              uVar13 = uVar6;
              func_0x000101016c54();
            }
            uVar1 = lVar19 - 3;
            if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102f0ec48);
              (*pcVar4)();
            }
            uVar10 = uVar8;
            func_0x000107c3eea8();
            func_0x000107c61180();
            uVar9 = uVar10;
            func_0x000107c5ee30();
            uVar7 = uVar13;
            func_0x000107c61170(uVar10);
            if (uVar14 == 0) {
              uVar10 = *(ulong *)(uVar15 + 0x10);
            }
            else {
              uVar10 = uVar2;
              func_0x000107c60480();
            }
            uVar18 = 0;
            if (uVar21 != 0) {
              if (uVar21 >> 0x3e == 0) {
                uVar17 = *(ulong *)(uVar16 + 0x10);
              }
              else {
                uVar17 = uVar3;
                func_0x000107c60480();
              }
              if (uVar17 == uVar10) {
                if ((uVar21 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar16 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x102f0ec50);
                    (*pcVar4)();
                  }
                  uVar10 = *(ulong *)(uVar21 + lVar19 * 8);
                  func_0x000107c61174();
                }
                else {
                  uVar10 = uVar22;
                  uVar7 = uVar21;
                  func_0x0001002ec9a0();
                }
                uVar17 = uVar10;
                func_0x000107c3ebcc();
                uVar18 = (undefined1)uVar17;
                func_0x000107c61170(uVar8);
                uVar8 = uVar10;
              }
              else {
                uVar18 = 0;
              }
            }
            func_0x000107c61170(uVar8);
            uVar10 = *(ulong *)(puVar11 + 0x10);
            uVar8 = uVar10 + 1;
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar10) {
              uVar7 = uVar8;
              func_0x000102f032ac(1 < *(ulong *)(puVar11 + 0x18),uVar8,1);
            }
            *(ulong *)(puVar11 + 0x10) = uVar8;
            *(ulong *)(puVar11 + uVar10 * 0x20 + 0x20) = uVar9;
            *(ulong *)(puVar11 + uVar10 * 0x20 + 0x28) = uVar13;
            *(ulong *)(puVar11 + uVar10 * 0x20 + 0x30) = uVar22;
            puVar11[uVar10 * 0x20 + 0x38] = 0;
            puVar11[uVar10 * 0x20 + 0x39] = uVar18;
            lVar19 = lVar19 + 1;
          } while (uVar1 != uVar20);
        }
        func_0x000107c61430(uVar6,2);
        func_0x000107c6142c(uVar21);
        return puVar11;
      }
      func_0x000107c6142c(uVar6);
    }
  }
  puVar11 = (undefined *)0x112f280c8;
  func_0x0001000285a8(0x112f280c8,&UNK_10db63b40);
  uVar5 = 0x40;
  func_0x000107c613fc();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  func_0x000107c4e090();
  func_0x000107c61180();
  uVar14 = param_1;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar6 = uVar14;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar14);
  *(ulong *)(puVar11 + 0x20) = uVar6;
  *(undefined8 *)(puVar11 + 0x28) = uVar5;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  puVar11[0x38] = 1;
  if (uVar21 == 0) {
    uVar18 = 0;
    goto LAB_102f0ed64;
  }
  uVar14 = uVar21 & 0xffffffffffffff8;
  if (uVar21 >> 0x3e == 0) {
    if (*(long *)(uVar14 + 0x10) == 1) goto LAB_102f0ed0c;
LAB_102f0ed58:
    uVar18 = 0;
  }
  else {
    uVar6 = uVar21;
    if (-1 < (long)uVar21) {
      uVar6 = uVar14;
    }
    func_0x000107c60480();
    if (uVar6 != 1) goto LAB_102f0ed58;
LAB_102f0ed0c:
    if ((uVar21 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f0eda0);
        (*pcVar4)();
      }
      uVar5 = *(undefined8 *)(uVar21 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = 0;
      func_0x0001002ec9a0(0,uVar21);
    }
    uVar12 = uVar5;
    func_0x000107c3ebcc();
    uVar18 = (undefined1)uVar12;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c6142c(uVar21);
LAB_102f0ed64:
  puVar11[0x39] = uVar18;
  return puVar11;
}



/* Entry: 102f0f3b0; end: 102f0fd5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102f0f3b0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  undefined *puStack_80;
  undefined8 *******pppppppuStack_58;
  
  lVar4 = *(long *)(*param_1 + 0x28);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar16 = lVar4;
  func_0x000107c4e928();
  func_0x000107c61180();
  if (lVar16 == 0) {
    func_0x000107c61170(lVar4);
    return;
  }
  pppppppuStack_58 = (undefined8 *******)0x0;
  uVar5 = 0;
  FUN_102f1c198(0,0x112d55598,&PTR_PTR_1126b25d0);
  pppppppuVar9 = &pppppppuStack_58;
  func_0x000107c5fc4c(lVar16,pppppppuVar9,uVar5);
  pppppppuVar2 = pppppppuStack_58;
  if (pppppppuStack_58 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd2c);
    (*pcVar3)();
  }
  func_0x000107c61170(lVar16);
  pppppppuVar18 = (undefined8 *******)((ulong)pppppppuVar2 & 0xffffffffffffff8);
  if ((ulong)pppppppuVar2 >> 0x3e == 0) {
    pppppppuVar17 = (undefined8 *******)pppppppuVar18[2];
    pppppppuVar11 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppppuVar17 = pppppppuVar2;
    if (-1 < (long)pppppppuVar2) {
      pppppppuVar17 = pppppppuVar18;
    }
    func_0x000107c60480();
    pppppppuVar11 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)pppppppuVar11;
  if (pppppppuVar17 != (undefined8 *******)0x0) {
    pppppppuVar10 = (undefined8 *******)0x0;
    do {
      while( true ) {
        if (((ulong)pppppppuVar2 & 0xc000000000000001) == 0) {
          if (pppppppuVar18[2] <= pppppppuVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0f5d8);
            (*pcVar3)();
          }
          pppppppuVar6 = (undefined8 *******)pppppppuVar2[(long)((long)pppppppuVar10 + 4)];
          func_0x000107c61174();
        }
        else {
          pppppppuVar6 = pppppppuVar10;
          pppppppuVar9 = pppppppuVar2;
          func_0x00010121c1ac();
        }
        pppppppuVar12 = (undefined8 *******)((long)pppppppuVar10 + 1);
        if (SCARRY8((long)pppppppuVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0f5d4);
          (*pcVar3)();
        }
        pppppppuVar7 = pppppppuVar6;
        func_0x000107c4abb4();
        if ((int)pppppppuVar7 == 4) break;
        func_0x000107c61170(pppppppuVar6);
LAB_102f0f484:
        pppppppuVar10 = (undefined8 *******)((long)pppppppuVar10 + 1);
        if (pppppppuVar12 == pppppppuVar17) goto LAB_102f0f5f4;
      }
      pppppppuVar7 = pppppppuVar6;
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd18);
        (*pcVar3)();
      }
      pppppppuVar8 = pppppppuVar7;
      func_0x000107c4ce20();
      func_0x000107c61180();
      func_0x000107c61170(pppppppuVar7);
      func_0x000107c61170(pppppppuVar6);
      if (pppppppuVar8 == (undefined8 *******)0x0) goto LAB_102f0f484;
      pppppppuVar10 = pppppppuVar11;
      func_0x000107c61550();
      if ((((int)pppppppuVar10 == 0) || ((long)pppppppuVar11 < 0)) ||
         (((ulong)pppppppuVar11 >> 0x3e & 1) != 0)) {
        if ((ulong)pppppppuVar11 >> 0x3e == 0) {
          pppppppuVar9 = *(undefined8 ********)(((ulong)pppppppuVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          pppppppuVar9 = (undefined8 *******)((ulong)pppppppuVar11 & 0xffffffffffffff8);
          if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar11) {
            pppppppuVar9 = pppppppuVar11;
          }
          func_0x000107c60480();
        }
        pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + 1);
        pppppppuVar10 = (undefined8 *******)0x0;
        FUN_102ed65b8(0,pppppppuVar9,1,pppppppuVar11);
        pppppppuVar11 = pppppppuVar10;
      }
      uVar15 = (ulong)pppppppuVar11 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar15 + 0x10);
      pppppppuVar10 = (undefined8 *******)(uVar1 + 1);
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar1) {
        pppppppuVar11 = (undefined8 *******)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        pppppppuVar9 = pppppppuVar10;
        FUN_102ed65b8(pppppppuVar11,pppppppuVar10,1);
        uVar15 = (ulong)pppppppuVar11 & 0xffffffffffffff8;
      }
      *(undefined8 ********)(uVar15 + 0x10) = pppppppuVar10;
      *(undefined8 ********)(uVar15 + uVar1 * 8 + 0x20) = pppppppuVar8;
      pppppppuVar10 = pppppppuVar12;
    } while (pppppppuVar12 != pppppppuVar17);
  }
LAB_102f0f5f4:
  pppppppuStack_58 = pppppppuVar11;
  func_0x000107c6142c(pppppppuVar2);
  func_0x000102f0eda0(lVar4);
  FUN_102f02500();
  pppppppuVar2 = pppppppuStack_58;
  if ((ulong)pppppppuStack_58 >> 0x3e == 0) {
    pppppppuVar18 = *(undefined8 ********)(((ulong)pppppppuStack_58 & 0xffffffffffffff8) + 0x10);
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppppuVar18 = (undefined8 *******)((ulong)pppppppuStack_58 & 0xffffffffffffff8);
    if ((undefined8 *******)0x7fffffffffffffff < pppppppuStack_58) {
      pppppppuVar18 = pppppppuStack_58;
    }
    func_0x000107c60480();
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_80;
  if (pppppppuVar18 == (undefined8 *******)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = (undefined *)0x0;
    lVar16 = 4;
    do {
      pppppppuVar17 = (undefined8 *******)(lVar16 + -4);
      if (((ulong)pppppppuVar2 & 0xc000000000000001) == 0) {
        if (*(undefined8 ********)(((ulong)pppppppuVar2 & 0xffffffffffffff8) + 0x10) <=
            pppppppuVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fc68);
          (*pcVar3)();
        }
        pppppppuVar11 = (undefined8 *******)pppppppuVar2[lVar16];
        func_0x000107c61174();
      }
      else {
        pppppppuVar11 = pppppppuVar17;
        pppppppuVar9 = pppppppuVar2;
        func_0x000102f02fc0();
      }
      pppppppuVar10 = (undefined8 *******)(lVar16 + -3);
      if (SCARRY8((long)pppppppuVar17,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fc64);
        (*pcVar3)();
      }
      pppppppuVar17 = pppppppuVar11;
      func_0x000107c4ce50();
      if ((int)pppppppuVar17 == 3) {
        pppppppuVar17 = pppppppuVar11;
        func_0x000107c453bc();
        func_0x000107c61180();
        if (pppppppuVar17 != (undefined8 *******)0x0) {
          pppppppuVar6 = pppppppuVar17;
          func_0x000107c453c0();
          if ((int)pppppppuVar6 == 1) {
            pppppppuVar6 = pppppppuVar17;
            func_0x000107c4e7ec();
            func_0x000107c61180();
            if (pppppppuVar6 != (undefined8 *******)0x0) {
              pppppppuVar12 = pppppppuVar6;
              func_0x000107c44a28();
              pppppppuVar7 = pppppppuVar17;
              if ((int)pppppppuVar12 != 0) {
                pppppppuVar9 = pppppppuVar6;
                func_0x000107c4e7c0();
                func_0x000107c61180();
                if (pppppppuVar9 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd38);
                  (*pcVar3)();
                }
                pppppppuVar12 = pppppppuVar9;
                func_0x000107c44e64();
                func_0x000107c61170(pppppppuVar9);
                pppppppuVar9 = pppppppuVar6;
                func_0x000107c4e7c0();
                func_0x000107c61180();
                if (pppppppuVar9 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd34);
                  (*pcVar3)();
                }
                pppppppuVar7 = pppppppuVar9;
                func_0x000107c4c0fc();
                func_0x000107c61170(pppppppuVar9);
                func_0x000103ee3894(pppppppuVar12);
                pppppppuVar8 = pppppppuVar6;
                func_0x000107c4d3e4();
                func_0x000107c61180();
                if (pppppppuVar8 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd30);
                  (*pcVar3)();
                }
                puVar13 = PTR_PTR_1126c0e50;
                func_0x000107c610f8();
                pppppppuVar9 = pppppppuVar7;
                func_0x000107c5fadc(pppppppuVar12);
                func_0x000107c6142c(pppppppuVar7);
                func_0x000107c47ee4();
                func_0x000107c61170(pppppppuVar12);
                func_0x000107c61170(pppppppuVar8);
                func_0x000107c61174();
                puVar14 = puStack_80;
                func_0x000107c61550();
                if ((((int)puVar14 == 0) || ((long)puStack_80 < 0)) ||
                   (puVar14 = puStack_80, ((ulong)puStack_80 >> 0x3e & 1) != 0)) {
                  if ((ulong)puStack_80 >> 0x3e == 0) {
                    puVar14 = *(undefined **)(((ulong)puStack_80 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar14 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puStack_80) {
                      puVar14 = puStack_80;
                    }
                    func_0x000107c60480();
                  }
                  pppppppuVar9 = (undefined8 *******)(puVar14 + 1);
                  puVar14 = (undefined *)0x0;
                  FUN_102ed671c(0,pppppppuVar9,1,puStack_80);
                }
                uVar15 = (ulong)puVar14 & 0xffffffffffffff8;
                uVar1 = *(ulong *)(uVar15 + 0x10);
                pppppppuVar12 = (undefined8 *******)(uVar1 + 1);
                puStack_80 = puVar14;
                if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar1) {
                  puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
                  pppppppuVar9 = pppppppuVar12;
                  FUN_102ed671c(puStack_80,pppppppuVar12,1,puVar14);
                  uVar15 = (ulong)puStack_80 & 0xffffffffffffff8;
                }
                *(undefined8 ********)(uVar15 + 0x10) = pppppppuVar12;
                *(undefined **)(uVar15 + uVar1 * 8 + 0x20) = puVar13;
                func_0x000107c61170(puVar13);
                pppppppuVar7 = pppppppuVar6;
                pppppppuVar6 = pppppppuVar17;
              }
              func_0x000107c61170(pppppppuVar7);
              pppppppuVar17 = pppppppuVar6;
            }
          }
          func_0x000107c61170(pppppppuVar17);
        }
      }
      if (puVar19 != (undefined *)0x0) {
LAB_102f0f668:
        func_0x000107c61170(pppppppuVar11);
        goto LAB_102f0f670;
      }
      pppppppuVar17 = pppppppuVar11;
      func_0x000107c4ce50();
      if ((int)pppppppuVar17 == 7) {
        pppppppuVar17 = pppppppuVar11;
        func_0x000107c434d8();
        func_0x000107c61180();
        if (pppppppuVar17 != (undefined8 *******)0x0) {
          pppppppuVar6 = pppppppuVar17;
          func_0x000107c434c8();
          func_0x000107c61180();
          if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd1c);
            (*pcVar3)();
          }
          pppppppuVar12 = pppppppuVar6;
          func_0x000107c453a8();
          func_0x000107c61170(pppppppuVar6);
          if ((int)pppppppuVar12 == 1) {
            pppppppuVar6 = pppppppuVar17;
            func_0x000107c434c8();
            func_0x000107c61180();
            if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd24);
              (*pcVar3)();
            }
            pppppppuVar12 = pppppppuVar6;
            func_0x000107c5dcc8();
            func_0x000107c61180();
            func_0x000107c61170(pppppppuVar6);
            if (pppppppuVar12 != (undefined8 *******)0x0) {
              pppppppuVar6 = pppppppuVar12;
              func_0x000107c44a28();
              if ((int)pppppppuVar6 != 0) {
                pppppppuVar9 = pppppppuVar12;
                func_0x000107c4e7c0();
                func_0x000107c61180();
                if (pppppppuVar9 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd4c);
                  (*pcVar3)();
                }
                pppppppuVar6 = pppppppuVar9;
                func_0x000107c44e64();
                func_0x000107c61170(pppppppuVar9);
                pppppppuVar9 = pppppppuVar12;
                func_0x000107c4e7c0();
                func_0x000107c61180();
                if (pppppppuVar9 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd48);
                  (*pcVar3)();
                }
                pppppppuVar7 = pppppppuVar9;
                func_0x000107c4c0fc();
                func_0x000107c61170(pppppppuVar9);
                func_0x000103ee3894(pppppppuVar6);
                pppppppuVar8 = pppppppuVar12;
                func_0x000107c4d3e4();
                func_0x000107c61180();
                if (pppppppuVar8 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd44);
                  (*pcVar3)();
                }
                puVar19 = PTR_PTR_1126c0e50;
                func_0x000107c610f8();
                pppppppuVar9 = pppppppuVar7;
                func_0x000107c5fadc(pppppppuVar6);
                func_0x000107c6142c(pppppppuVar7);
                func_0x000107c47ee4();
                func_0x000107c61170(pppppppuVar12);
                func_0x000107c61170(pppppppuVar17);
                func_0x000107c61170(pppppppuVar6);
                func_0x000107c61170(pppppppuVar8);
                if (puVar19 != (undefined *)0x0) goto LAB_102f0f668;
                goto LAB_102f0fa1c;
              }
              func_0x000107c61170(pppppppuVar17);
              pppppppuVar17 = pppppppuVar12;
            }
          }
          func_0x000107c61170(pppppppuVar17);
        }
      }
LAB_102f0fa1c:
      pppppppuVar17 = pppppppuVar11;
      func_0x000107c4ce50();
      if ((int)pppppppuVar17 == 7) {
        pppppppuVar17 = pppppppuVar11;
        func_0x000107c434d8();
        func_0x000107c61180();
        if (pppppppuVar17 == (undefined8 *******)0x0) goto LAB_102f0fc10;
        pppppppuVar6 = pppppppuVar17;
        func_0x000107c434c8();
        func_0x000107c61180();
        if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd20);
          (*pcVar3)();
        }
        pppppppuVar12 = pppppppuVar6;
        func_0x000107c453a8();
        func_0x000107c61170(pppppppuVar6);
        if ((int)pppppppuVar12 == 3) {
          pppppppuVar6 = pppppppuVar17;
          func_0x000107c434c8();
          func_0x000107c61180();
          if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd28);
            (*pcVar3)();
          }
          pppppppuVar12 = pppppppuVar6;
          func_0x000107c5dccc();
          func_0x000107c61180();
          func_0x000107c61170(pppppppuVar6);
          if (pppppppuVar12 == (undefined8 *******)0x0) {
            func_0x000107c61170(pppppppuVar17);
            goto LAB_102f0fc10;
          }
          pppppppuVar6 = pppppppuVar12;
          func_0x000107c5dcc0();
          func_0x000107c61180();
          if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd3c);
            (*pcVar3)();
          }
          pppppppuVar7 = pppppppuVar6;
          func_0x000107c5faec();
          pppppppuVar8 = pppppppuVar9;
          func_0x000107c61170(pppppppuVar6);
          func_0x000107c6142c(pppppppuVar9);
          uVar1 = (ulong)pppppppuVar7 & 0xffffffffffff;
          if (((ulong)pppppppuVar9 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)pppppppuVar9 >> 0x38 & 0xf;
          }
          pppppppuVar9 = pppppppuVar8;
          if (uVar1 != 0) {
            pppppppuVar6 = pppppppuVar12;
            func_0x000107c5dcd0();
            func_0x000107c61180();
            if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd40);
              (*pcVar3)();
            }
            pppppppuVar7 = pppppppuVar6;
            func_0x000107c5faec();
            pppppppuVar9 = pppppppuVar8;
            func_0x000107c61170(pppppppuVar6);
            func_0x000107c6142c(pppppppuVar8);
            uVar1 = (ulong)pppppppuVar7 & 0xffffffffffff;
            if (((ulong)pppppppuVar8 & 0x2000000000000000) != 0) {
              uVar1 = (ulong)pppppppuVar8 >> 0x38 & 0xf;
            }
            if (uVar1 != 0) {
              pppppppuVar6 = pppppppuVar12;
              func_0x000107c5dcc0();
              func_0x000107c61180();
              if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd5c);
                (*pcVar3)();
              }
              pppppppuVar7 = pppppppuVar12;
              func_0x000107c5dcd0();
              func_0x000107c61180();
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                func_0x000107c61170(pppppppuVar6);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102f0fd58);
                (*pcVar3)();
              }
              puVar19 = PTR_PTR_1126c0e50;
              func_0x000107c610f8();
              func_0x000107c47ee4();
              func_0x000107c61170(pppppppuVar11);
              func_0x000107c61170(pppppppuVar12);
              func_0x000107c61170(pppppppuVar17);
              func_0x000107c61170(pppppppuVar6);
              func_0x000107c61170(pppppppuVar7);
              goto LAB_102f0f670;
            }
          }
          func_0x000107c61170(pppppppuVar17);
          func_0x000107c61170(pppppppuVar12);
          func_0x000107c61170(pppppppuVar11);
          puVar19 = (undefined *)0x0;
        }
        else {
          func_0x000107c61170(pppppppuVar17);
          func_0x000107c61170(pppppppuVar11);
          puVar19 = (undefined *)0x0;
        }
      }
      else {
LAB_102f0fc10:
        func_0x000107c61170(pppppppuVar11);
        puVar19 = (undefined *)0x0;
      }
LAB_102f0f670:
      lVar16 = lVar16 + 1;
    } while (pppppppuVar10 != pppppppuVar18);
  }
  uVar5 = 0;
  FUN_102f1c198(0,0x112f27bc0,&PTR_PTR_1126c0e50);
  puVar13 = puStack_80;
  func_0x000107c5fc48(puStack_80,uVar5);
  func_0x000107c5d5a4(param_2);
  func_0x000107c6142c(puStack_80);
  func_0x000107c6142c(pppppppuVar2);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102f0fd5c; end: 102f10b1f;  */

void FUN_102f0fd5c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_68;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0fe18);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        func_0x000107c6157c(uVar5);
      }
      else {
        uVar5 = uVar4;
        FUN_102f02a90(uVar4,uVar2);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0fe14);
        (*pcVar1)();
      }
      uVar6 = uVar4 + 1;
      uStack_68 = uVar5;
      FUN_102f0f3b0(&uStack_68,param_1);
      func_0x000107c61574(uVar5);
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar3);
  }
  return;
}



/* Entry: 102f10b20; end: 102f10d17;  */

undefined * FUN_102f10b20(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if (uVar9 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    lVar10 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((uVar9 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f10cb8);
        (*pcVar2)();
      }
      lVar10 = *(long *)(uVar9 + 0x20);
      func_0x000107c6157c(lVar10);
      uVar9 = param_2;
    }
    else {
      lVar10 = 0;
      FUN_102f02a90();
    }
    lVar4 = *(long *)(lVar10 + 0x38);
    func_0x000107c61174();
    func_0x000107c61574(lVar10);
    lVar10 = lVar4;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 != 0) {
      lVar5 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
      puVar6 = (undefined *)0x0;
      uVar8 = 1;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      uVar3 = uVar1 + 1;
      puVar11 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        uVar8 = uVar3;
        func_0x0001000d182c(puVar11,uVar3,1,puVar6);
      }
      *(ulong *)(puVar11 + 0x10) = uVar3;
      *(long *)(puVar11 + uVar1 * 0x10 + 0x20) = lVar5;
      *(ulong *)(puVar11 + uVar1 * 0x10 + 0x28) = uVar9;
      uVar9 = uVar8;
    }
    lVar10 = lVar4;
    func_0x000107c4eb78();
    func_0x000107c61180();
    if (lVar10 != 0) {
      lVar5 = lVar10;
      func_0x000107c5faec();
      func_0x000107c61170(lVar10);
      puVar6 = puVar11;
      func_0x000107c61558();
      puVar7 = puVar11;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puVar11 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000d182c(puVar11,uVar3 + 1,1,puVar7);
      }
      *(ulong *)(puVar11 + 0x10) = uVar3 + 1;
      *(long *)(puVar11 + uVar3 * 0x10 + 0x20) = lVar5;
      *(ulong *)(puVar11 + uVar3 * 0x10 + 0x28) = uVar9;
    }
    func_0x000107c61170(lVar4);
    lVar10 = *(long *)(puVar11 + 0x10);
  }
  if (lVar10 == 0) {
    func_0x000107c6142c(puVar11);
    puVar11 = (undefined *)0x0;
  }
  return puVar11;
}



/* Entry: 102f10d18; end: 102f10d9f;  */

void FUN_102f10d18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102f10da0;
  plVar7[0xe] = lVar4;
  plVar7[0xf] = lVar8;
  plVar7[0xc] = lVar3;
  plVar7[0xd] = lVar1;
  plVar7[10] = lVar2;
  plVar7[0xb] = lVar5;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar7[0x10] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x11] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x12] = uVar6;
  lVar5 = 0;
  func_0x00010392d0f4();
  plVar7[0x13] = lVar5;
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x14] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f0b024,0,0);
  return;
}



/* Entry: 102f10da0; end: 102f10de3;  */

void FUN_102f10da0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f10de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102f10de4; end: 102f10e0f;  */

undefined * FUN_102f10de4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  func_0x000107c60f6c();
  lVar3 = 0;
  func_0x000102f0ba50();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  puVar4 = &UNK_1105e85c0;
  func_0x000107c613fc(&UNK_1105e85c0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(long *)(puVar4 + 0x18) = lVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(uVar1);
  uVar5 = 6;
  func_0x0001001ca524(6,0,0x54,3,0,0,&UNK_10db63bb8,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c6005c();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (*(long *)(lVar3 + 0x10) == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c3e174();
    func_0x000107c61180();
  }
  func_0x000107c61574(lVar3);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 102f10e10; end: 102f10e87;  */

void FUN_102f10e10(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  piVar3 = *(int **)(unaff_x20 + 0x20);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102f1c2d8;
  plVar6[2] = lVar2;
  plVar6[3] = lVar4;
  iVar1 = *piVar3;
  plVar5 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_102f0b81c;
                    /* WARNING: Could not recover jumptable at 0x000102f0b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 102f10e88; end: 102f10eff;  */

void FUN_102f10e88(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  piVar3 = *(int **)(unaff_x20 + 0x20);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102f10f00;
  plVar6[2] = lVar2;
  plVar6[3] = lVar4;
  iVar1 = *piVar3;
  plVar5 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_102f0b620;
                    /* WARNING: Could not recover jumptable at 0x000102f0b61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 102f10f00; end: 102f10f3b;  */

void FUN_102f10f00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f10f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f10f3c; end: 102f10f43;  */

void FUN_102f10f3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF_110350f90)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102f10f44; end: 102f110df;  */

uint FUN_102f10f44(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar6 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x000103be8288(0);
    if ((uVar4 & 0xc000000000000001) == 0) {
      lVar8 = *(long *)((uVar4 & 0xffffffffffffff8) + 0x10);
      plVar9 = (long *)(uVar4 + 0x20);
      do {
        uVar6 = uVar6 - 1;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f110a8);
          (*pcVar1)();
        }
        lVar5 = *plVar9;
        uVar7 = *(ulong *)(lVar5 + 0x28);
        func_0x000107c6157c(lVar5);
        uVar4 = uVar7;
        func_0x000103be6c38();
        if ((((uVar4 & 1) != 0) || (uVar4 = uVar7, func_0x000103be6c3c(), (uVar4 & 1) != 0)) ||
           (func_0x000103be6c40(), (uVar7 & 1) != 0)) {
          func_0x000107c61574(lVar5);
          goto LAB_102f11098;
        }
        func_0x000103be4240();
        uVar3 = (uint)uVar7;
        func_0x000107c61574(lVar5);
      } while (((uVar7 & 1) == 0) && (lVar8 = lVar8 + -1, plVar9 = plVar9 + 1, uVar6 != 0));
    }
    else {
      lVar8 = 0;
      do {
        lVar5 = lVar8;
        FUN_102f02a90(lVar8,uVar4);
        uVar7 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f110a4);
          (*pcVar1)();
        }
        uVar10 = *(ulong *)(lVar5 + 0x28);
        uVar2 = uVar10;
        func_0x000103be6c38();
        if ((((uVar2 & 1) != 0) || (uVar2 = uVar10, func_0x000103be6c3c(), (uVar2 & 1) != 0)) ||
           (func_0x000103be6c40(), (uVar10 & 1) != 0)) {
          func_0x000107c615e8(lVar5);
LAB_102f11098:
          uVar3 = 0;
          goto LAB_102f110c4;
        }
        func_0x000103be4240();
        uVar3 = (uint)uVar10;
        func_0x000107c615e8(lVar5);
      } while (((uVar10 & 1) == 0) && (lVar8 = lVar8 + 1, uVar7 != uVar6));
    }
    uVar3 = uVar3 ^ 1;
  }
LAB_102f110c4:
  return uVar3 & 1;
}



/* Entry: 102f110e0; end: 102f1134f;  */

undefined8 FUN_102f110e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puStack_78;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f11350);
    (*pcVar2)();
  }
  lVar3 = param_2;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    puStack_78 = (undefined *)0x0;
    uVar4 = 0;
    FUN_102f1c198(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar3,&puStack_78,uVar4);
    func_0x000107c61170(lVar3);
    if (puStack_78 != (undefined *)0x0) {
      puVar8 = puStack_78;
    }
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar9 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar9 != (undefined *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f112ec);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(puVar8 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
        uVar4 = param_1;
      }
      else {
        uVar5 = uVar10;
        func_0x00010121c1ac(uVar10,puVar8);
        uVar4 = param_1;
      }
      puVar1 = (undefined *)(uVar10 + 1);
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f112e8);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1133c);
        (*pcVar2)();
      }
      uVar7 = uVar6;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar6);
      param_1 = uVar4;
      if ((int)uVar7 == 1) {
        uVar6 = uVar5;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f11340);
          (*pcVar2)();
        }
        uVar7 = uVar6;
        func_0x000107c3e240();
        func_0x000107c61170(uVar6);
        param_1 = uVar4;
        if ((int)uVar7 != 5) goto LAB_102f111a0;
        uVar6 = uVar5;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f11344);
          (*pcVar2)();
        }
        uVar7 = uVar6;
        func_0x000107c44740();
        func_0x000107c61170(uVar6);
        if ((uVar7 & 1) == 0) {
          func_0x000107c61170(uVar5);
LAB_102f112dc:
          uVar4 = 0;
          goto LAB_102f11308;
        }
        uVar6 = uVar5;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1134c);
          (*pcVar2)();
        }
        uVar7 = uVar6;
        func_0x000107c3e404();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f11348);
          (*pcVar2)();
        }
        func_0x000107c5dc0c(uVar7);
        param_1 = uVar4;
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar5);
        if (0.0 < (float)uVar4) goto LAB_102f112dc;
      }
      else {
LAB_102f111a0:
        func_0x000107c61170(uVar5);
      }
      uVar10 = uVar10 + 1;
    } while (puVar1 != puVar9);
  }
  uVar4 = 1;
LAB_102f11308:
  func_0x000107c6142c(puVar8);
  return uVar4;
}



/* Entry: 102f11350; end: 102f130bb;  */

/* WARNING: Removing unreachable block (ram,0x000102f119ac) */
/* WARNING: Removing unreachable block (ram,0x000102f119b0) */
/* WARNING: Removing unreachable block (ram,0x000102f119b4) */
/* WARNING: Removing unreachable block (ram,0x000102f1154c) */
/* WARNING: Removing unreachable block (ram,0x000102f11618) */
/* WARNING: Removing unreachable block (ram,0x000102f119c0) */
/* WARNING: Removing unreachable block (ram,0x000102f119a8) */
/* WARNING: Removing unreachable block (ram,0x000102f11520) */
/* WARNING: Removing unreachable block (ram,0x000102f116dc) */

undefined * FUN_102f11350(undefined **param_1,undefined **param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  
  ppuVar6 = param_1;
  ppuVar4 = param_2;
  func_0x000107c41830();
  func_0x000107c61180();
  ppuVar15 = ppuVar4;
  ppuVar16 = ppuVar6;
  if (ppuVar6 == (undefined **)0x0) {
    func_0x000107c5faec();
    ppuVar15 = ppuVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(ppuVar4);
  }
  func_0x000107c5faec();
  ppuVar4 = param_1;
  ppuVar12 = ppuVar15;
  func_0x000107c42120();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c5faec();
  ppuVar10 = ppuVar12;
  func_0x000107c61170(ppuVar4);
  func_0x000107c4a91c();
  iVar3 = (int)param_1;
  ppuVar4 = ppuVar12;
  if (iVar3 < 4) {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        func_0x000107c6142c(ppuVar15);
        func_0x000107c61170(ppuVar16);
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52cd8;
        ppuVar6 = (undefined **)0x79726f74735f796d;
        ppuVar15 = ppuVar16;
        func_0x000107c61174();
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f52cd8);
        ppuVar4 = ppuVar10;
        func_0x000107c61170();
        uVar1 = (ulong)ppuVar5 & 0xffffffffffff;
        if (((ulong)ppuVar12 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)ppuVar12 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000108f57dfc();
          func_0x000107c61180();
          if (ppuVar15 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f119c0);
            (*pcVar2)();
          }
          ppuVar5 = ppuVar15;
          func_0x000107c5faec();
          func_0x000107c6142c(ppuVar12);
          func_0x000107c61170(ppuVar15);
          ppuVar15 = (undefined **)0xe800000000000000;
        }
        else {
          ppuVar15 = (undefined **)0xe800000000000000;
          ppuVar4 = ppuVar12;
        }
        goto LAB_102f117c4;
      }
      if (iVar3 != 1) {
LAB_102f116e0:
        func_0x000107c6142c(ppuVar12);
        func_0x000107c6142c(ppuVar15);
        func_0x000107c61170(ppuVar16);
        return (undefined *)0x0;
      }
      func_0x000107c6142c(ppuVar15);
      func_0x000107c61170(ppuVar16);
      ppuVar6 = &PTR____CFConstantStringClassReference_110e43098;
      func_0x000107c5faec();
      ppuVar16 = &PTR____CFConstantStringClassReference_110f52d58;
      ppuVar11 = ppuVar16;
      ppuVar13 = ppuVar10;
      func_0x000107c61174();
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f52d58);
      ppuVar14 = ppuVar13;
      func_0x000107c61170();
      uVar1 = (ulong)ppuVar5 & 0xffffffffffff;
      if (((ulong)ppuVar12 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)ppuVar12 >> 0x38 & 0xf;
      }
      ppuVar15 = ppuVar10;
      if (uVar1 == 0) {
        func_0x000108f580b4();
        func_0x000107c61180();
        if (ppuVar11 == (undefined **)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f11484);
          (*pcVar2)();
        }
        goto LAB_102f1169c;
      }
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 != 3) goto LAB_102f116e0;
        func_0x000107c61170(ppuVar16);
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52d38;
        ppuVar13 = ppuVar10;
        goto LAB_102f11798;
      }
      func_0x000107c6142c(ppuVar15);
      func_0x000107c61170(ppuVar16);
      ppuVar6 = &PTR____CFConstantStringClassReference_110e43078;
      func_0x000107c5faec();
      ppuVar16 = &PTR____CFConstantStringClassReference_110f52df8;
      ppuVar11 = ppuVar16;
      ppuVar13 = ppuVar10;
      func_0x000107c61174();
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f52df8);
      ppuVar14 = ppuVar13;
      func_0x000107c61170();
      uVar1 = (ulong)ppuVar5 & 0xffffffffffff;
      if (((ulong)ppuVar12 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)ppuVar12 >> 0x38 & 0xf;
      }
      ppuVar15 = ppuVar10;
      if (uVar1 == 0) {
        func_0x000108f5833c();
        func_0x000107c61180();
        if (ppuVar11 == (undefined **)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f119bc);
          (*pcVar2)();
        }
LAB_102f1169c:
        ppuVar5 = ppuVar11;
        func_0x000107c5faec();
        func_0x000107c6142c(ppuVar12);
        func_0x000107c61170(ppuVar11);
        ppuVar4 = ppuVar14;
      }
    }
  }
  else {
    if (iVar3 < 6) {
      if (iVar3 == 4) {
        func_0x000107c6142c(ppuVar15);
        ppuVar4 = (undefined **)PTR_PTR_1126c3320;
        func_0x000107c61168();
        func_0x000107c5cb00();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar16);
        ppuVar6 = ppuVar4;
        func_0x000107c5faec();
        ppuVar13 = ppuVar10;
        func_0x000107c61170(ppuVar4);
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52ef8;
        ppuVar15 = ppuVar10;
        goto LAB_102f11798;
      }
      if (iVar3 != 5) goto LAB_102f116e0;
      func_0x000107c61170(ppuVar16);
      ppuVar13 = ppuVar10;
      if (param_2 == (undefined **)0x0) {
LAB_102f11788:
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52d98;
        goto LAB_102f11798;
      }
      func_0x000107c61174();
      ppuVar4 = param_2;
      func_0x000107c4f638();
      func_0x000107c61180();
      ppuVar13 = ppuVar10;
      if (ppuVar4 == (undefined **)0x0) {
LAB_102f11780:
        func_0x000107c61170(param_2);
        goto LAB_102f11788;
      }
      ppuVar16 = ppuVar4;
      func_0x000107c5faec();
      ppuVar13 = ppuVar10;
      func_0x000107c61170(ppuVar4);
      if ((ppuVar16 == ppuVar6) && (ppuVar10 == ppuVar15)) {
        func_0x000107c6142c(ppuVar10);
      }
      else {
        ppuVar13 = ppuVar10;
        func_0x000107c605b8(ppuVar16,ppuVar10,ppuVar6,ppuVar15,0);
        func_0x000107c6142c(ppuVar10);
        if (((ulong)ppuVar16 & 1) == 0) goto LAB_102f11780;
      }
      ppuVar16 = param_2;
      func_0x000107c5d0f0();
      func_0x000108438cec();
      func_0x000107c61180();
      ppuVar10 = ppuVar16;
      if (ppuVar16 == (undefined **)0x0) {
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52d98;
        ppuVar10 = ppuVar16;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52d98);
      }
      func_0x000107c5faec();
      ppuVar4 = ppuVar13;
      func_0x000107c61170(ppuVar10);
      ppuVar10 = param_2;
      func_0x000107c42120();
      func_0x000107c61180();
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar11 = ppuVar10;
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar10);
        func_0x000107c61170(param_2);
        uVar1 = (ulong)ppuVar11 & 0xffffffffffff;
        if (((ulong)ppuVar4 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)ppuVar4 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000107c6142c(ppuVar4);
          ppuVar4 = ppuVar12;
        }
        else {
          func_0x000107c6142c(ppuVar12);
          ppuVar5 = ppuVar11;
        }
        goto LAB_102f117bc;
      }
    }
    else {
      if (iVar3 == 6) {
        func_0x000107c61170(ppuVar16);
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52c78;
        ppuVar13 = ppuVar10;
      }
      else {
        if (iVar3 != 7) goto LAB_102f116e0;
        func_0x000107c61170(ppuVar16);
        ppuVar16 = &PTR____CFConstantStringClassReference_110f52c98;
        ppuVar13 = ppuVar10;
      }
LAB_102f11798:
      param_2 = ppuVar16;
      func_0x000107c61174(ppuVar16);
      func_0x000107c5faec(ppuVar16);
    }
    func_0x000107c61170(param_2);
    ppuVar4 = ppuVar12;
  }
LAB_102f117bc:
  func_0x000107c61434(ppuVar15);
  ppuVar10 = ppuVar13;
LAB_102f117c4:
  func_0x000107c6142c(ppuVar15);
  uVar1 = (ulong)ppuVar6 & 0xffffffffffff;
  if (((ulong)ppuVar15 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)ppuVar15 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(ppuVar4);
    func_0x000107c6142c(ppuVar15);
    func_0x000107c6142c(ppuVar10);
    return (undefined *)0x0;
  }
  puVar7 = PTR_PTR_1126b3558;
  func_0x000107c610f8(PTR_PTR_1126b3558);
  func_0x000107c5fadc(ppuVar6,ppuVar15);
  func_0x000107c5fadc(ppuVar16,ppuVar10);
  func_0x000107c48298(puVar7);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(ppuVar16);
  puVar8 = PTR_PTR_1126b3560;
  func_0x000107c610f8(PTR_PTR_1126b3560);
  func_0x000107c61174(puVar7);
  func_0x000107c5fadc(ppuVar5,ppuVar4);
  func_0x000107c46d94(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar5);
  puVar9 = PTR_PTR_1126b3568;
  func_0x000107c610f8(PTR_PTR_1126b3568);
  func_0x000107c48294();
  func_0x000107c6142c(ppuVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c6142c(ppuVar15);
  func_0x000107c6142c(ppuVar10);
  func_0x000107c61170(puVar8);
  return puVar9;
}



/* Entry: 102f130bc; end: 102f131a3;  */

void FUN_102f130bc(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f131a4);
        (*pcVar1)();
      }
      lVar5 = *(long *)(uVar4 + 0x20);
      func_0x000107c6157c(lVar5);
    }
    else {
      lVar5 = 0;
      FUN_102f02a90(0,uVar4);
    }
    lVar3 = *(long *)(lVar5 + 0x38);
    func_0x000107c61174();
    func_0x000107c61574(lVar5);
    lVar5 = lVar3;
    func_0x000107c3f5f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 102f131a4; end: 102f132c7;  */

bool FUN_102f131a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar8 = uVar5 & 0xffffffffffffff8;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar6 = uVar8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  uVar7 = 0;
  do {
    uVar4 = uVar7;
    if (uVar6 == uVar4) break;
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f132ac);
        (*pcVar1)();
      }
      uVar7 = *(ulong *)(uVar5 + uVar4 * 8 + 0x20);
      func_0x000107c6157c(uVar7);
    }
    else {
      uVar7 = uVar4;
      FUN_102f02a90(uVar4,uVar5);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f13288);
      (*pcVar1)();
    }
    lVar2 = *(long *)(uVar7 + 0x28);
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f132c4);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4e8ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f132c8);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c420f4();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar7);
    uVar7 = uVar4 + 1;
  } while ((int)lVar2 != 6);
  return uVar6 != uVar4;
}



/* Entry: 102f132c8; end: 102f145a7;  */

undefined * FUN_102f132c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 auStack_b0 [32];
  long lStack_90;
  undefined *apuStack_88 [4];
  undefined *puStack_68;
  
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_1;
  func_0x000107c4455c();
  func_0x000107c61180();
  puVar12 = PTR___sypN_11034f1a8;
  if (lVar18 != 0) {
    lVar4 = lVar18;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar18);
    lVar18 = *(long *)(lVar4 + 0x10);
    if (lVar18 == 0) {
      func_0x000107c6142c(lVar4);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar15 = lVar4;
      do {
        lVar15 = lVar15 + 0x20;
        func_0x0001000bb420(lVar15,apuStack_88);
        func_0x000100102924(apuStack_88,auStack_b0);
        uVar9 = 0x112d6dfd0;
        func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
        plVar7 = &lStack_90;
        func_0x000107c6147c(plVar7,auStack_b0,puVar12 + 8,uVar9,6);
        lVar2 = lStack_90;
        if ((((ulong)plVar7 & 1) != 0) && (lStack_90 != 0)) {
          puVar6 = puVar16;
          func_0x000107c61550();
          if (((int)puVar6 == 0) ||
             (((long)puVar16 < 0 || (puVar6 = puVar16, ((ulong)puVar16 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar16 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar16) {
                puVar5 = puVar16;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            func_0x000101bcad64(0,puVar5 + 1,1,puVar16);
          }
          uVar14 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar14 + 0x10);
          puVar16 = puVar6;
          if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
            puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
            func_0x000101bcad64(puVar16,uVar1 + 1,1,puVar6);
            uVar14 = (ulong)puVar16 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
          *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar2;
        }
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      func_0x000107c6142c(lVar4);
    }
  }
  func_0x000107c4fa70();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    lVar18 = *(long *)(lVar4 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar18 != 0) {
      lVar15 = lVar4;
      do {
        lVar15 = lVar15 + 0x20;
        func_0x0001000bb420(lVar15,apuStack_88);
        func_0x000100102924(apuStack_88,auStack_b0);
        uVar9 = 0x112d6dfc8;
        func_0x0001000285a8(0x112d6dfc8,&UNK_10d9301c0);
        plVar7 = &lStack_90;
        func_0x000107c6147c(plVar7,auStack_b0,puVar12 + 8,uVar9,6);
        lVar2 = lStack_90;
        if ((((ulong)plVar7 & 1) != 0) && (lStack_90 != 0)) {
          puVar5 = puVar6;
          func_0x000107c61550();
          if (((int)puVar5 == 0) ||
             (((long)puVar6 < 0 || (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar6 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar6) {
                puVar8 = puVar6;
              }
              func_0x000107c60480(puVar8);
            }
            puVar5 = (undefined *)0x0;
            FUN_102ed62e0(0,puVar8 + 1,1,puVar6);
          }
          uVar14 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar14 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
            FUN_102ed62e0(puVar6,uVar1 + 1,1,puVar5);
            uVar14 = (ulong)puVar6 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
          *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar2;
        }
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    func_0x000107c6142c(lVar4);
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = 0x112d6dfd0;
  func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
  puVar5 = puVar16;
  func_0x000107c5fc48(puVar16,uVar9);
  func_0x000107c6142c(puVar16);
  puVar16 = puVar5;
  func_0x000107e3271c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar9 = 0;
  func_0x000104522c9c();
  puVar5 = puVar16;
  func_0x000107c5fc54(puVar16,uVar9);
  func_0x000107c61170(puVar16);
  FUN_102d4454c(puVar5);
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar16 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_88[0] = puVar12;
    puVar5 = (undefined *)((ulong)puVar16 & ((long)puVar16 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar5,0);
    if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f137fc);
      (*pcVar3)();
    }
    puVar8 = (undefined *)0x0;
    do {
      puVar12 = apuStack_88[0];
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= (long)puVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f13750);
          (*pcVar3)();
        }
        puVar17 = *(undefined **)(puVar6 + (long)puVar8 * 8 + 0x20);
        func_0x000107c615f0(puVar17);
        puVar13 = puVar5;
      }
      else {
        puVar17 = puVar8;
        puVar13 = puVar6;
        FUN_102f02de8();
      }
      puVar10 = puVar17;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f13800);
        (*pcVar3)();
      }
      puVar11 = puVar10;
      func_0x000107c5faec();
      puVar5 = puVar13;
      func_0x000107c615e8(puVar17);
      func_0x000107c61170(puVar10);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      puVar17 = (undefined *)(uVar1 + 1);
      apuStack_88[0] = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        puVar5 = puVar17;
        func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),puVar17,1);
      }
      puVar12 = apuStack_88[0];
      puVar8 = puVar8 + 1;
      *(undefined **)(apuStack_88[0] + 0x10) = puVar17;
      *(undefined **)(apuStack_88[0] + uVar1 * 0x10 + 0x20) = puVar11;
      *(undefined **)(apuStack_88[0] + uVar1 * 0x10 + 0x28) = puVar13;
    } while (puVar16 != puVar8);
    func_0x000107c6142c(puVar6);
  }
  puVar16 = puVar12;
  func_0x000107c5fc48(puVar12,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar12);
  puVar12 = puVar16;
  func_0x000107e327a0(puVar16);
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  puVar16 = puVar12;
  func_0x000107c5fc54(puVar12,uVar9);
  func_0x000107c61170(puVar12);
  FUN_102d4454c(puVar16);
  return puStack_68;
}



/* Entry: 102f145a8; end: 102f1469f;  */

undefined8 FUN_102f145a8(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f146a0);
        (*pcVar1)();
      }
      lVar5 = *(long *)(uVar4 + 0x20);
      func_0x000107c6157c(lVar5);
    }
    else {
      lVar5 = 0;
      FUN_102f02a90(0,uVar4);
    }
    uVar2 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar5);
    func_0x000103be8288(0);
    uVar4 = uVar2;
    func_0x000103be6c38();
    if ((((uVar4 & 1) == 0) && (uVar4 = uVar2, func_0x000103be6c3c(), (uVar4 & 1) == 0)) &&
       (uVar4 = uVar2, func_0x000103be6c40(), (uVar4 & 1) == 0)) {
      func_0x000103be4240();
      func_0x000107c61170(uVar2);
      uVar3 = 1;
      if ((uVar4 & 1) == 0) {
        uVar3 = 2;
      }
    }
    else {
      func_0x000107c61170(uVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 102f146a0; end: 102f14a87;  */

/* WARNING: Removing unreachable block (ram,0x000102f14968) */

void FUN_102f146a0(long *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  
  puVar16 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar16 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar16;
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar15 = param_2;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar15 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar16 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f147f0);
            (*pcVar4)();
          }
          puVar5 = *(undefined **)(param_2 + (long)puVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar7;
          param_3 = param_2;
          func_0x000100fb1534();
        }
        puVar1 = puVar7 + 1;
        if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f147ec);
          (*pcVar4)();
        }
        puVar6 = puVar5;
        func_0x000107c5d0f0();
        if ((int)puVar6 == 2) break;
LAB_102f146f4:
        func_0x000107c61170(puVar5);
        puVar7 = puVar7 + 1;
        if (puVar1 == puVar15) goto LAB_102f1480c;
      }
      puVar6 = puVar5;
      func_0x000107c5c97c();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) goto LAB_102f146f4;
      func_0x000107c61170();
      puVar7 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        param_3 = (undefined *)(*(long *)(puVar3 + 0x10) + 1);
        func_0x000102f03198(0,param_3,1);
      }
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar7 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        param_3 = puVar7;
        func_0x000102f03198(1 < *(ulong *)(puVar3 + 0x18),puVar7,1);
      }
      *(undefined **)(puVar3 + 0x10) = puVar7;
      *(undefined **)(puVar3 + uVar2 * 8 + 0x20) = puVar5;
      puVar7 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_102f1480c:
  uVar11 = (uint)((ulong)puVar3 >> 0x3e) & 1;
  if ((long)puVar3 < 0) {
    uVar11 = 1;
  }
  if (uVar11 == 1) {
    puVar16 = puVar3;
    func_0x000107c60480();
    if (puVar16 != (undefined *)0x0) goto LAB_102f14828;
LAB_102f148c8:
    func_0x000107c61574(puVar3);
LAB_102f1498c:
    lVar13 = 0;
  }
  else {
    if (*(long *)(puVar3 + 0x10) == 0) goto LAB_102f148c8;
LAB_102f14828:
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f14a88);
        (*pcVar4)();
      }
      lVar8 = *(long *)(puVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar8 = 0;
      param_3 = puVar3;
      func_0x000100fb1534();
    }
    lVar9 = lVar8;
    func_0x000107c5c97c();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c61170(lVar8);
      goto LAB_102f148c8;
    }
    if (uVar11 != 0) {
      func_0x000107c60480(puVar3);
    }
    func_0x000107c61574(puVar3);
    lVar13 = lVar9;
    func_0x000107c5b1a8();
    func_0x000107c61180();
    lVar10 = lVar13;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar13);
    uVar11 = (uint)((ulong)param_3 >> 0x20);
    uVar12 = uVar11 >> 0x1e;
    if (1 < uVar11 >> 0x1e) {
      if (uVar12 == 2) {
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)(lVar10 + 0x18);
        func_0x00010006c090(lVar10);
        if (lVar13 != lVar14) goto LAB_102f1490c;
      }
      else {
        func_0x00010006c090(lVar10);
      }
LAB_102f1497c:
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      goto LAB_102f1498c;
    }
    if (uVar12 == 0) {
      puVar16 = param_3;
      func_0x00010006c090(lVar10);
      uVar2 = (ulong)param_3 & 0xff000000000000;
      param_3 = puVar16;
      if (uVar2 == 0) goto LAB_102f1497c;
    }
    else {
      func_0x00010006c090(lVar10);
      if ((long)(int)lVar10 == lVar10 >> 0x20) goto LAB_102f1497c;
    }
LAB_102f1490c:
    lVar13 = lVar9;
    func_0x000107c5b1a8();
    func_0x000107c61180();
    lVar10 = lVar13;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar13);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar13 = lVar10;
    func_0x0001010282b0(lVar10,param_3);
    func_0x00010006c090(lVar10);
    if (lVar13 != 0) {
      lVar10 = lVar9;
      func_0x000107c3fb8c();
      func_0x000107c61180();
      lVar14 = lVar10;
      func_0x000107c5faec();
      puVar16 = param_3;
      func_0x000107c61170(lVar10);
      lVar10 = lVar9;
      func_0x000107c50108();
      func_0x000107c61180();
      if (lVar10 == 0) {
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar8);
        lVar17 = 0;
        puVar16 = (undefined *)0xf000000000000000;
      }
      else {
        lVar17 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar8);
      }
      goto LAB_102f149a0;
    }
    func_0x000107c61170();
    func_0x000107c61170(lVar8);
  }
  lVar14 = 0;
  param_3 = (undefined *)0x0;
  lVar17 = 0;
  puVar16 = (undefined *)0x0;
LAB_102f149a0:
  *param_1 = lVar13;
  param_1[1] = lVar14;
  param_1[2] = (long)param_3;
  param_1[3] = lVar17;
  param_1[4] = (long)puVar16;
  return;
}



/* Entry: 102f14a88; end: 102f14c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f14a88(long param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126cc780;
    func_0x000107c610f8(PTR_PTR_1126cc780);
    func_0x000107c61174();
    func_0x000107c453e4(puVar2);
    puVar3 = PTR_PTR_1126d5dc0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar5 = ((undefined8 *)(param_1 + _DAT_113076b38))[1];
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(param_1 + _DAT_113076b38);
      func_0x000107c61434(lVar5);
      func_0x000107c5fadc(uVar7,lVar5);
      func_0x000107c6142c(lVar5);
      uVar6 = uVar7;
      func_0x000107c54230(puVar3);
      param_3 = (uint)uVar6;
      func_0x000107c61170(uVar7);
    }
    lVar5 = ((undefined8 *)(param_1 + _DAT_113076b30))[1];
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_113076b30);
      func_0x000107c61434(lVar5);
      func_0x000103ee34e0(uVar6,lVar5);
      func_0x000107c6142c(lVar5);
      if ((param_3 & 0xff) != 1) {
        puVar4 = PTR_PTR_1126afad0;
        func_0x000107c610f8(PTR_PTR_1126afad0);
        func_0x000107c453e4();
        func_0x000107c578cc(puVar3);
        func_0x000107c61170(puVar4);
        puVar4 = puVar3;
        func_0x000107c4f38c();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f14c4c);
          (*pcVar1)();
        }
        func_0x000107c55138();
        func_0x000107c61170(puVar4);
        puVar4 = puVar3;
        func_0x000107c4f38c();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f14c50);
          (*pcVar1)();
        }
        func_0x000107c5616c();
        func_0x000107c61170(puVar4);
      }
    }
    func_0x000107c5963c(puVar3);
    func_0x000107c59638(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
  }
  return puVar2;
}



/* Entry: 102f14c50; end: 102f14caf;  */

uint FUN_102f14c50(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  func_0x000103be8288(0);
  uVar2 = param_1;
  func_0x000103be6c38();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x000103be6c3c(), (uVar2 & 1) == 0)) {
    func_0x000103be6c40();
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      func_0x000103be4240();
      return uVar1 & 1;
    }
  }
  return 1;
}



/* Entry: 102f14cb0; end: 102f1569f;  */

undefined * FUN_102f14cb0(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uStack_70;
  undefined *puStack_68;
  
  puVar4 = PTR_PTR_1126b25c8;
  lVar6 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_102f14c50(param_1);
  func_0x000107c5a0f8(puVar4);
  func_0x000107c5293c(puVar4);
  func_0x000107c570a8(puVar4);
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar20 = param_2;
  func_0x000107c427c0();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar20 != 0) {
    lVar5 = lVar20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    lVar7 = lVar6;
    if (lVar5 == 0) {
      func_0x000107c5faec();
      lVar7 = lVar6;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar6);
    }
    lVar6 = lVar20;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
    }
    lVar7 = lVar5;
    lVar16 = lVar6;
    func_0x00010853d600(lVar5,lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c54574(puVar4);
    func_0x000107c61170(lVar7);
    lVar6 = lVar20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    lVar5 = lVar16;
    if (lVar6 == 0) {
      func_0x000107c5faec();
      lVar5 = lVar16;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar16);
    }
    lVar7 = lVar20;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    lVar5 = lVar6;
    func_0x00010853d6b8(lVar6,lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c54578(puVar4);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar5);
  }
  lVar20 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f152b4);
    (*pcVar3)();
  }
  lVar6 = lVar20;
  func_0x000107c4e8ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f152b8);
    (*pcVar3)();
  }
  func_0x000107c44b24(lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c55048(puVar4);
  puVar8 = puVar4;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c56438();
    func_0x000107c61170(puVar8);
    func_0x000103be2924();
    func_0x000107c56408(puVar4);
    lVar20 = param_1;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f152c0);
      (*pcVar3)();
    }
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar20);
    puVar8 = PTR_PTR_1126d8d28;
    func_0x000107c610f8(PTR_PTR_1126d8d28);
    func_0x000107c453e4();
    func_0x000107c550b8();
    func_0x000107c5a724(puVar8);
    func_0x000107c54104(puVar4);
    func_0x000107c61170(puVar8);
    puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f152c4);
      (*pcVar3)();
    }
    lVar20 = param_1;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (lVar20 != 0) {
      uStack_70 = 0;
      uVar9 = 0;
      FUN_102f1c198(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(lVar20,&uStack_70,uVar9);
      func_0x000107c61170(lVar20);
      uVar2 = uStack_70;
      puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
      if (uStack_70 != 0) {
        uVar18 = uStack_70 & 0xffffffffffffff8;
        if (uStack_70 >> 0x3e == 0) {
          uVar19 = *(ulong *)(uVar18 + 0x10);
        }
        else {
          uVar19 = uStack_70;
          if (-1 < (long)uStack_70) {
            uVar19 = uVar18;
          }
          func_0x000107c60480();
        }
        if (uVar19 == 0) {
          func_0x000107c6142c(uVar2);
          puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
        }
        else {
          lVar20 = 4;
          do {
            uVar17 = lVar20 - 4;
            if ((uVar2 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar18 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102f15270);
                (*pcVar3)();
              }
              uVar10 = *(ulong *)(uVar2 + lVar20 * 8);
              func_0x000107c61174();
            }
            else {
              uVar10 = uVar17;
              func_0x00010121c1ac(uVar17,uVar2);
            }
            uVar1 = lVar20 - 3;
            if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f1526c);
              (*pcVar3)();
            }
            uVar17 = uVar10;
            func_0x000107c4abb4();
            if ((int)uVar17 == 1) {
              uVar17 = uVar10;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar17 != 0) {
                uVar11 = uVar17;
                func_0x000107c3e240();
                uVar12 = uVar17;
                if ((int)uVar11 == 5) {
                  uVar11 = uVar17;
                  func_0x00010853cd64();
                  func_0x000107c61180();
                  if (uVar11 == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f152b0);
                    (*pcVar3)();
                  }
                  uVar9 = 0;
                  FUN_102f1c198(0,0x112d530c8,&PTR_PTR_1126affc8);
                  uVar12 = uVar11;
                  func_0x000107c5fc54(uVar11,uVar9);
                  func_0x000107c61170(uVar11);
                  func_0x000102dbc6a8(uVar12);
                  func_0x000107c6142c(uVar12);
                  uVar12 = uVar10;
                  uVar10 = uVar17;
                  if (((param_3 & 1) != 0) &&
                     (uVar11 = uVar17, func_0x000107c4e088(), (int)uVar11 == 0x1b)) {
                    func_0x000107c4c9ec(uVar17);
                    func_0x000107c61180();
                    func_0x000107c5645c(puVar4);
                    func_0x000107c61170(uVar17);
                  }
                }
                func_0x000107c61170(uVar12);
              }
            }
            func_0x000107c61170(uVar10);
            lVar20 = lVar20 + 1;
          } while (uVar1 != uVar19);
          func_0x000107c6142c(uVar2);
          puVar8 = puStack_68;
        }
      }
    }
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      puVar15 = *(undefined **)(puVar8 + 0x10);
    }
    else {
      puVar15 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar15 = puVar8;
      }
      func_0x000107c6029c();
    }
    if (puVar15 != (undefined *)0x0) {
      puVar15 = puVar8;
      func_0x000102dbb760(puVar8);
      puVar13 = puVar15;
      func_0x000102f09d94();
      func_0x000107c61574(puVar15);
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar14 = puVar13;
      func_0x000107c5fc48(puVar13,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar13);
      func_0x000107c45788(puVar15);
      func_0x000107c61170(puVar14);
      func_0x000107c524e4(puVar4);
      func_0x000107c61170(puVar15);
    }
    func_0x000107c5a824(puVar4);
    func_0x000107c6142c(puVar8);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f152bc);
  (*pcVar3)();
}



/* Entry: 102f156a0; end: 102f15817;  */

/* WARNING: Possible PIC construction at 0x000102f15730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f157e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f157f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f157ec) */
/* WARNING: Removing unreachable block (ram,0x000102f157fc) */

void FUN_102f156a0(undefined *param_1,ulong param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  func_0x000107c40534();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126cc790;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c538bc(param_1);
  if (param_4 != 0) {
    uVar1 = (ulong)param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c5a4cc(puVar2);
      puVar2 = param_3;
      goto code_r0x000107c61170;
    }
  }
  if ((param_2 & 1) == 0) {
    puVar3 = puVar2;
    func_0x000107c4058c();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b2378;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    func_0x000107c538e4(puVar2);
    puVar4 = puVar3;
    func_0x000107c5d20c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b5c10;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    func_0x000107c5a16c(puVar3);
    puVar3 = puVar4;
    func_0x000107c4fdf4();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c610f8(PTR_PTR_1126d2bc0);
      func_0x000107c453e4();
    }
    func_0x000107c5a31c();
    func_0x000107c57cc0(puVar4);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102f15818; end: 102f15aa3;  */

undefined * FUN_102f15818(undefined *param_1,uint param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_68;
  
  uVar2 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar2 = param_4 >> 0x38 & 0xf;
  }
  if (param_1 == (undefined *)0x0) {
    if ((param_4 == 0 || uVar2 == 0) && ((param_2 ^ 0xffffffff) & 1) == 0) {
      param_1 = (undefined *)0x0;
    }
    else {
      param_1 = PTR_PTR_1126cf388;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar7 = param_1;
      func_0x000107c3e328();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f15aa0);
        (*pcVar3)();
      }
      puVar8 = PTR_PTR_1126b25f0;
      func_0x000107c610f8(PTR_PTR_1126b25f0);
      func_0x000107c453e4();
      FUN_102f156a0();
      func_0x000107c3d798(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
    }
  }
  else {
    puVar7 = param_1;
    func_0x000107c61174();
    puVar8 = puVar7;
    func_0x000107c3e328();
    func_0x000107c61180();
    if (puVar8 != (undefined *)0x0) {
      puStack_68 = (undefined *)0x0;
      uVar4 = 0;
      FUN_102f1c198(0,0x112d538a0,&PTR_PTR_1126b25f0);
      func_0x000107c5fc50(puVar8,&puStack_68,uVar4);
      func_0x000107c61170(puVar8);
      puVar8 = puStack_68;
      if (puStack_68 != (undefined *)0x0) {
        puVar11 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        if ((ulong)puStack_68 >> 0x3e == 0) {
          puVar9 = *(undefined **)(puVar11 + 0x10);
        }
        else {
          puVar9 = puStack_68;
          if (-1 < (long)puStack_68) {
            puVar9 = puVar11;
          }
          func_0x000107c60480();
        }
        if (puVar9 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar11 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102f159f8);
                (*pcVar3)();
              }
              puVar5 = *(undefined **)(puVar8 + (long)puVar10 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar5 = puVar10;
              func_0x0001010c40f8(puVar10,puVar8);
            }
            puVar1 = puVar10 + 1;
            if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f159f4);
              (*pcVar3)();
            }
            puVar6 = puVar5;
            func_0x000107c3e2f4();
            if ((int)puVar6 == 1) {
              FUN_102f156a0(puVar5,param_2 & 1,param_3,param_4);
              func_0x000107c6142c(puVar8);
              goto LAB_102f15a74;
            }
            func_0x000107c61170(puVar5);
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar9);
        }
        func_0x000107c6142c(puVar8);
        if (param_4 != 0 && uVar2 != 0 || ((param_2 ^ 0xffffffff) & 1) != 0) {
          func_0x000107c3e328();
          func_0x000107c61180();
          if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f15aa4);
            (*pcVar3)();
          }
          puVar5 = PTR_PTR_1126b25f0;
          func_0x000107c610f8(PTR_PTR_1126b25f0);
          func_0x000107c453e4();
          FUN_102f156a0();
          func_0x000107c3d798(puVar7);
          func_0x000107c61170(puVar7);
LAB_102f15a74:
          func_0x000107c61170(puVar5);
        }
      }
    }
  }
  return param_1;
}



/* Entry: 102f15aa4; end: 102f1639f;  */

void FUN_102f15aa4(double param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  int iVar21;
  undefined8 *puVar22;
  double dVar23;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  uVar14 = param_3;
  func_0x000107c4cd3c();
  puVar12 = PTR___sypN_11034f1a8;
  if (uVar14 == 0) {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102f15e78:
    uVar14 = param_3;
    func_0x000107c4cd38();
    func_0x000107c61180();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16384);
      (*pcVar2)();
    }
    func_0x000107c4fe7c();
    func_0x000107c61170(uVar14);
    uVar14 = param_3;
    func_0x000107c4cd40();
    func_0x000107c61180();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16388);
      (*pcVar2)();
    }
    func_0x000107c4fe7c();
    func_0x000107c61170(uVar14);
    uVar14 = param_3;
    func_0x000107c4cd24();
    func_0x000107c61180();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1638c);
      (*pcVar2)();
    }
    func_0x000107c4fe60();
    func_0x000107c61170(uVar14);
    uVar14 = param_3;
    func_0x000107c4cd34();
    func_0x000107c61180();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16390);
      (*pcVar2)();
    }
    func_0x000107c4fe7c();
    func_0x000107c61170(uVar14);
    uVar14 = *(ulong *)(puStack_a8 + 0x10);
    if (uVar14 != 0) {
      uVar16 = 0;
      puVar22 = (undefined8 *)(puStack_a8 + 0x40);
      do {
        if (*(ulong *)(puStack_a8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162e4);
          (*pcVar2)();
        }
        uVar4 = puVar22[-4];
        uVar6 = puVar22[-3];
        uVar18 = puVar22[-2];
        uVar19 = *puVar22;
        func_0x000107c61174(uVar4);
        func_0x000107c61434(uVar18);
        func_0x000107c61174(uVar19);
        uVar20 = param_3;
        func_0x000107c4cd38();
        func_0x000107c61180();
        if (uVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1635c);
          (*pcVar2)();
        }
        func_0x000107c3d798();
        func_0x000107c61170(uVar20);
        uVar20 = param_3;
        func_0x000107c4cd40();
        func_0x000107c61180();
        if (uVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16360);
          (*pcVar2)();
        }
        func_0x000107c61434(uVar18);
        func_0x000107c5fadc(uVar6,uVar18);
        func_0x000107c6142c(uVar18);
        func_0x000107c3d798(uVar20);
        func_0x000107c61170(uVar20);
        func_0x000107c61170(uVar6);
        uVar20 = param_3;
        func_0x000107c4cd24();
        func_0x000107c61180();
        if (uVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16364);
          (*pcVar2)();
        }
        func_0x000107c3d810();
        func_0x000107c61170(uVar20);
        uVar20 = param_3;
        func_0x000107c4cd34();
        func_0x000107c61180();
        if (uVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16368);
          (*pcVar2)();
        }
        uVar16 = uVar16 + 1;
        func_0x000107c3d798();
        func_0x000107c61170(uVar19);
        func_0x000107c6142c(uVar18);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar20);
        puVar22 = puVar22 + 5;
      } while (uVar14 != uVar16);
    }
    if (param_2 >> 0x3e == 0) {
      uVar14 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar14 = param_2;
      }
      func_0x000107c60480();
    }
    if (uVar14 != 0) {
      lVar15 = 4;
      do {
        uVar20 = lVar15 - 4;
        uVar16 = param_2;
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16308);
            (*pcVar2)();
          }
          uVar10 = *(ulong *)(param_2 + lVar15 * 8);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar20;
          FUN_102f02f98();
        }
        uVar3 = lVar15 - 3;
        if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162e8);
          (*pcVar2)();
        }
        uVar20 = uVar10;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar13 = uVar16;
        if (uVar20 == 0) {
          func_0x000107c5faec();
          uVar13 = uVar16;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar16);
        }
        uVar16 = uVar20;
        func_0x000109189420();
        func_0x000107c61180();
        func_0x000107c61170(uVar20);
        uVar20 = uVar10;
        if (uVar16 != 0) {
          uVar20 = param_3;
          func_0x000107c4cd38();
          func_0x000107c61180();
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16370);
            (*pcVar2)();
          }
          func_0x000107c3d798();
          func_0x000107c61170(uVar20);
          uVar20 = param_3;
          func_0x000107c4cd40();
          func_0x000107c61180();
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16374);
            (*pcVar2)();
          }
          uVar11 = uVar10;
          func_0x000107c5db08();
          func_0x000107c61180();
          if (uVar11 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar13);
          }
          func_0x000107c3d798(uVar20);
          func_0x000107c61170(uVar20);
          func_0x000107c61170(uVar11);
          uVar20 = param_3;
          func_0x000107c4cd24();
          func_0x000107c61180();
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16378);
            (*pcVar2)();
          }
          func_0x000107c3d810();
          func_0x000107c61170(uVar20);
          puVar12 = PTR_PTR_1126d2a60;
          func_0x000107c610f8(PTR_PTR_1126d2a60);
          func_0x000107c453e4();
          uVar20 = uVar10;
          func_0x000107c4f888(uVar10);
          func_0x000107c61180();
          func_0x000107c5ba38();
          func_0x000107c61170(uVar20);
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162f0);
            (*pcVar2)();
          }
          if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162f4);
            (*pcVar2)();
          }
          dVar23 = 4294967296.0;
          if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162f8);
            (*pcVar2)();
          }
          func_0x000107c59780(puVar12);
          uVar20 = uVar10;
          func_0x000107c4f888(uVar10);
          func_0x000107c61180();
          func_0x000107c42818();
          func_0x000107c61170(uVar20);
          if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162fc);
            (*pcVar2)();
          }
          if (dVar23 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16300);
            (*pcVar2)();
          }
          param_1 = 4294967296.0;
          if (4294967296.0 <= dVar23) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16304);
            (*pcVar2)();
          }
          func_0x000107c54590(puVar12);
          uVar20 = param_3;
          func_0x000107c4cd34();
          func_0x000107c61180();
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1637c);
            (*pcVar2)();
          }
          func_0x000107c3d798();
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar16);
          func_0x000107c61170(puVar12);
        }
        func_0x000107c61170(uVar20);
        lVar15 = lVar15 + 1;
      } while (uVar3 != uVar14);
    }
    func_0x000107c6142c(puStack_a8);
    return;
  }
  uVar16 = 0;
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102f15b08:
  uVar20 = uVar16;
  uVar10 = uVar14;
  if (uVar14 <= uVar16) {
    uVar10 = uVar16;
  }
  do {
    if (uVar10 == uVar20) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162e0);
      (*pcVar2)();
    }
    uVar16 = param_3;
    func_0x000107c4cd24();
    func_0x000107c61180();
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16358);
      (*pcVar2)();
    }
    uVar3 = uVar16;
    func_0x000107c40808();
    func_0x000107c61170(uVar16);
    if (uVar20 < uVar3) {
      uVar16 = param_3;
      func_0x000107c4cd24();
      func_0x000107c61180();
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16380);
        (*pcVar2)();
      }
      uVar3 = uVar16;
      func_0x000107c5dc14();
      func_0x000107c61170(uVar16);
      iVar21 = (int)uVar3;
      if (iVar21 != 3) goto LAB_102f15ba0;
    }
    else {
      iVar21 = 0;
LAB_102f15ba0:
      uVar16 = param_3;
      func_0x000107c4cd38();
      func_0x000107c61180();
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1636c);
        (*pcVar2)();
      }
      if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f162ec);
        (*pcVar2)();
      }
      uVar3 = uVar16;
      func_0x000107c4d9a0();
      func_0x000107c61180();
      func_0x000107c61170(uVar16);
      func_0x000107c60234(auStack_90,uVar3);
      func_0x000107c615e8(uVar3);
      uVar4 = 0;
      FUN_102f1c198(0,0x112dc0130,&PTR_PTR_1126afad0);
      ppuVar5 = &puStack_a0;
      func_0x000107c6147c(ppuVar5,auStack_90,puVar12 + 8,uVar4,6);
      puVar8 = puStack_a0;
      if ((int)ppuVar5 != 0) break;
    }
    uVar20 = uVar20 + 1;
    if (uVar14 == uVar20) goto LAB_102f15e78;
  } while( true );
  uVar16 = param_3;
  func_0x000107c4cd40();
  func_0x000107c61180();
  if (uVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16398);
    (*pcVar2)();
  }
  uVar10 = uVar16;
  func_0x000107c40808();
  func_0x000107c61170(uVar16);
  if ((long)uVar20 < (long)uVar10) {
    uVar16 = param_3;
    func_0x000107c4cd40();
    func_0x000107c61180();
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f163a0);
      (*pcVar2)();
    }
    uVar10 = uVar16;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
    func_0x000107c60234(auStack_90,uVar10);
    func_0x000107c615e8(uVar10);
    ppuVar5 = &puStack_a0;
    func_0x000107c6147c(ppuVar5,auStack_90,puVar12 + 8,PTR___sSSN_11034da80,6);
    puVar17 = puStack_a0;
    uVar4 = uStack_98;
    if ((int)ppuVar5 == 0) {
      puVar17 = (undefined *)0x0;
      uVar4 = 0xe000000000000000;
    }
  }
  else {
    puVar17 = (undefined *)0x0;
    uVar4 = 0xe000000000000000;
  }
  uVar16 = param_3;
  func_0x000107c4cd34();
  func_0x000107c61180();
  if (uVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f16394);
    (*pcVar2)();
  }
  uVar10 = uVar16;
  func_0x000107c40808();
  func_0x000107c61170(uVar16);
  if ((long)uVar20 < (long)uVar10) {
    uVar16 = param_3;
    func_0x000107c4cd34();
    func_0x000107c61180();
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f1639c);
      (*pcVar2)();
    }
    uVar10 = uVar16;
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
    func_0x000107c60234(auStack_90,uVar10);
    func_0x000107c615e8(uVar10);
    uVar6 = 0;
    FUN_102f1c198(0,0x112f281c8,&PTR_PTR_1126d2a60);
    ppuVar5 = &puStack_a0;
    func_0x000107c6147c(ppuVar5,auStack_90,puVar12 + 8,uVar6,6);
    puVar7 = puStack_a0;
    if ((int)ppuVar5 != 0) goto LAB_102f15d98;
  }
  puVar7 = PTR_PTR_1126d2a60;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_102f15d98:
  func_0x000107c61174();
  func_0x000107c61174();
  puVar9 = puStack_a8;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    plVar1 = (long *)(puStack_a8 + 0x10);
    puStack_a8 = (undefined *)0x0;
    FUN_102ed6318(0,*plVar1 + 1,1);
  }
  uVar10 = *(ulong *)(puStack_a8 + 0x10);
  if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar10) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
    FUN_102ed6318(puVar9,uVar10 + 1,1,puStack_a8);
    puStack_a8 = puVar9;
  }
  uVar16 = uVar20 + 1;
  *(ulong *)(puStack_a8 + 0x10) = uVar10 + 1;
  *(undefined **)(puStack_a8 + uVar10 * 0x28 + 0x20) = puVar8;
  *(undefined **)(puStack_a8 + uVar10 * 0x28 + 0x28) = puVar17;
  *(undefined8 *)(puStack_a8 + uVar10 * 0x28 + 0x30) = uVar4;
  *(int *)(puStack_a8 + uVar10 * 0x28 + 0x38) = iVar21;
  *(undefined **)(puStack_a8 + uVar10 * 0x28 + 0x40) = puVar7;
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  if (uVar14 - 1 == uVar20) goto LAB_102f15e78;
  goto LAB_102f15b08;
}



/* Entry: 102f163a0; end: 102f17f4f;  */

/* WARNING: Possible PIC construction at 0x000102f16430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f16468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f164c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f165f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f16654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f166f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f1671c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f167d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f167e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f167f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f16538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f167f8) */
/* WARNING: Removing unreachable block (ram,0x000102f167e8) */
/* WARNING: Removing unreachable block (ram,0x000102f167d8) */
/* WARNING: Removing unreachable block (ram,0x000102f166f8) */
/* WARNING: Removing unreachable block (ram,0x000102f1681c) */
/* WARNING: Removing unreachable block (ram,0x000102f1670c) */
/* WARNING: Removing unreachable block (ram,0x000102f16658) */
/* WARNING: Removing unreachable block (ram,0x000102f16664) */
/* WARNING: Removing unreachable block (ram,0x000102f165f4) */
/* WARNING: Removing unreachable block (ram,0x000102f165fc) */
/* WARNING: Removing unreachable block (ram,0x000102f166a4) */
/* WARNING: Removing unreachable block (ram,0x000102f166a8) */
/* WARNING: Removing unreachable block (ram,0x000102f16608) */
/* WARNING: Removing unreachable block (ram,0x000102f166b8) */
/* WARNING: Removing unreachable block (ram,0x000102f16610) */
/* WARNING: Removing unreachable block (ram,0x000102f16618) */
/* WARNING: Removing unreachable block (ram,0x000102f16668) */
/* WARNING: Removing unreachable block (ram,0x000102f1661c) */
/* WARNING: Removing unreachable block (ram,0x000102f1668c) */
/* WARNING: Removing unreachable block (ram,0x000102f16628) */
/* WARNING: Removing unreachable block (ram,0x000102f16634) */
/* WARNING: Removing unreachable block (ram,0x000102f16688) */
/* WARNING: Removing unreachable block (ram,0x000102f16640) */
/* WARNING: Removing unreachable block (ram,0x000102f16678) */
/* WARNING: Removing unreachable block (ram,0x000102f16720) */
/* WARNING: Removing unreachable block (ram,0x000102f16738) */
/* WARNING: Removing unreachable block (ram,0x000102f16748) */
/* WARNING: Removing unreachable block (ram,0x000102f1676c) */
/* WARNING: Removing unreachable block (ram,0x000102f16780) */
/* WARNING: Removing unreachable block (ram,0x000102f167a4) */
/* WARNING: Removing unreachable block (ram,0x000102f167b8) */
/* WARNING: Removing unreachable block (ram,0x000102f16650) */
/* WARNING: Removing unreachable block (ram,0x000102f164cc) */
/* WARNING: Removing unreachable block (ram,0x000102f164d8) */
/* WARNING: Removing unreachable block (ram,0x000102f16548) */
/* WARNING: Removing unreachable block (ram,0x000102f1646c) */
/* WARNING: Removing unreachable block (ram,0x000102f16474) */
/* WARNING: Removing unreachable block (ram,0x000102f16690) */
/* WARNING: Removing unreachable block (ram,0x000102f16694) */
/* WARNING: Removing unreachable block (ram,0x000102f16480) */
/* WARNING: Removing unreachable block (ram,0x000102f16484) */
/* WARNING: Removing unreachable block (ram,0x000102f1648c) */
/* WARNING: Removing unreachable block (ram,0x000102f16534) */
/* WARNING: Removing unreachable block (ram,0x000102f16494) */
/* WARNING: Removing unreachable block (ram,0x000102f164dc) */
/* WARNING: Removing unreachable block (ram,0x000102f16498) */
/* WARNING: Removing unreachable block (ram,0x000102f16684) */
/* WARNING: Removing unreachable block (ram,0x000102f164a4) */
/* WARNING: Removing unreachable block (ram,0x000102f164f0) */
/* WARNING: Removing unreachable block (ram,0x000102f164b8) */
/* WARNING: Removing unreachable block (ram,0x000102f16434) */
/* WARNING: Removing unreachable block (ram,0x000102f16438) */
/* WARNING: Removing unreachable block (ram,0x000102f1653c) */
/* WARNING: Removing unreachable block (ram,0x000102f16544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f163a0(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_68;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((param_2 != 0) && (*(long *)(param_2 + _DAT_113076880) != 0)) &&
     (puVar3 = *(undefined **)(*(long *)(param_2 + _DAT_113076880) + _DAT_1130769d8),
     puVar3 != (undefined *)0x0)) {
    func_0x000107c61434(puVar3);
    puVar2 = puVar3;
  }
  puVar3 = param_1;
  func_0x000107c3e324();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
      puVar3 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar2) {
        puVar3 = puVar2;
      }
      func_0x000107c60480();
    }
    else {
      puVar3 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
    }
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
      return;
    }
    puVar3 = param_1;
    func_0x000107c3e324();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126cf388;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    func_0x000107c5299c(param_1);
    func_0x000107c3e328();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b25f0;
      func_0x000107c610f8(PTR_PTR_1126b25f0);
      func_0x000107c453e4();
      puVar3 = PTR_PTR_1126cc790;
      func_0x000107c610f8(PTR_PTR_1126cc790);
      func_0x000107c453e4();
      func_0x000107c538bc(puVar2);
    }
    else {
      uStack_68 = 0;
      uVar1 = 0;
      FUN_102f1c198(0,0x112d538a0,&PTR_PTR_1126b25f0);
      func_0x000107c5fc50(puVar3,&uStack_68,uVar1);
    }
  }
  else {
    func_0x000107c3e328();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}


