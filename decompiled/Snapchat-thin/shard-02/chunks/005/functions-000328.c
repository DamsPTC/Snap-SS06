/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101db422c; end: 101db426f; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySnapSendSessionStartWithEntry:entrySource:sendSessionId:] */

void FUN_101db422c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_101db3bac(param_3,param_4,param_5,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101db4270; end: 101db446b;  */

void FUN_101db4270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar3 = PTR_PTR_1126a9538;
  func_0x000107c610f8(PTR_PTR_1126a9538);
  func_0x000107c453e4();
  func_0x000107c4b800(uVar5);
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar7 = *(long *)(unaff_x22 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    if (*(long *)(unaff_x22 + 0x30) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
      func_0x000107c5fadc(uVar5);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c564d4(puVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c5fadc(uVar4,param_2);
    func_0x000107c593e4(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107fdcaa8(uVar1);
    func_0x000107c59558(puVar3);
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c58ec0(puVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c54618(puVar3);
    func_0x000107c5a590(puVar3);
    func_0x000107c54624(puVar3);
    uVar5 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c54d3c(puVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c53484(puVar3);
    func_0x000107c55888(puVar3);
    func_0x000107c6142c(param_2);
    func_0x000107c615e8(lVar7);
  }
  lVar7 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c4ca5c();
  if (lVar7 != 1) {
    lVar7 = *(long *)(unaff_x22 + 0x20);
    func_0x000107c4ca5c();
    if (lVar7 != 2) goto LAB_101db4434;
  }
  func_0x000107c56498(puVar3);
LAB_101db4434:
  func_0x000107c4bfb0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000101db4468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db446c; end: 101db447f; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySnapSendSessionStartWithAsset:entrySource:sendSessionId:] */

void FUN_101db446c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101db4480(param_3,param_4,param_5,param_2,&UNK_110484070,&UNK_10da15728);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101db4480; end: 101db460b;  */

void FUN_101db4480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  long lStack_68;
  
  uVar4 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c4cabc();
      func_0x000107c61180();
      if (lVar2 == 0) {
        lVar5 = 0;
        uVar4 = 0;
      }
      else {
        lVar5 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
      }
      lVar2 = lVar1;
      func_0x000107c40f88();
      lVar3 = lVar1;
      func_0x000107c5df1c();
      func_0x000107c613fc(param_5,0x60,7);
      *(undefined8 *)(param_5 + 0x10) = unaff_x20;
      *(undefined8 *)(param_5 + 0x18) = param_1;
      *(long *)(param_5 + 0x20) = lVar5;
      *(undefined8 *)(param_5 + 0x28) = uVar4;
      *(long *)(param_5 + 0x30) = lVar3;
      *(long *)(param_5 + 0x38) = lVar2;
      *(undefined8 *)(param_5 + 0x40) = param_2;
      *(undefined8 *)(param_5 + 0x48) = param_3;
      *(undefined8 *)(param_5 + 0x50) = param_4;
      *(long *)(param_5 + 0x58) = lStack_68;
      func_0x000107c6157c();
      func_0x000107c61174(param_1);
      func_0x000107c61434(param_4);
      func_0x000107c615f0(lStack_68);
      uVar4 = 0xc0;
      func_0x0001001ca524(0xc0,0,0x48,4,0,0,param_6,param_5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lStack_68);
      func_0x000107c61574(param_5);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 101db460c; end: 101db4643;  */

void FUN_101db460c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_11;
  *(undefined8 *)(unaff_x22 + 0x58) = param_10;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db4644,0,0);
  return;
}



/* Entry: 101db4644; end: 101db4947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db4644(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  ulong uVar15;
  
  lVar13 = *(long *)(unaff_x22 + 0x20);
  puVar6 = PTR_PTR_1126a9538;
  func_0x000107c610f8(PTR_PTR_1126a9538);
  func_0x000107c453e4();
  puVar1 = (undefined8 *)(lVar13 + _DAT_11307e210);
  uVar11 = *puVar1;
  uVar3 = puVar1[1];
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar12 = *(ulong *)(unaff_x22 + 0x10);
  if (uVar12 == 0) goto LAB_101db48d4;
  if (*(long *)(unaff_x22 + 0x30) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c5fadc(uVar7);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar13 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c564d4(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(uVar11,uVar3);
  func_0x000107c593e4(puVar6);
  func_0x000107c61170(uVar11);
  func_0x000107fdcaa8(uVar2);
  func_0x000107c59558(puVar6);
  func_0x000107c5fadc(uVar8,uVar4);
  func_0x000107c58ec0(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c54618(puVar6);
  func_0x000107c307c0();
  uVar15 = uVar12;
  func_0x000107c5abe8();
  if ((uVar15 & 1) == 0) {
    func_0x000108dfcb70(*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_11307e218));
  }
  uVar11 = 0;
  func_0x000107c30780(lVar13,0);
  func_0x000107c61180();
  if (lVar13 == 0) {
    lVar14 = 0;
    uVar11 = 0xe000000000000000;
  }
  else {
    lVar14 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
  }
  uVar15 = *(ulong *)(*(long *)(unaff_x22 + 0x20) + _DAT_11307e1f8);
  if (uVar15 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar9 = uVar15;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    if ((uVar15 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar15 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101db4948);
        (*pcVar5)();
      }
      lVar13 = *(long *)(uVar15 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar13 = 0;
      FUN_101db519c(0,uVar15,&PTR__OBJC_CLASS___PHAsset_1126bd898,0x112d5dfc0);
    }
    lVar10 = lVar13;
    func_0x000107c4ca5c();
    if (lVar10 == 1) {
      func_0x000107c61170(lVar13);
    }
    else {
      lVar10 = lVar13;
      func_0x000107c4ca5c();
      func_0x000107c61170(lVar13);
      if (lVar10 != 2) goto LAB_101db4870;
    }
    func_0x000107c56498(puVar6);
  }
LAB_101db4870:
  func_0x000107c5a590(puVar6);
  func_0x000107c54624(puVar6);
  func_0x000107c5fadc(lVar14,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c54d3c(puVar6);
  func_0x000107c61170(lVar14);
  func_0x000107c53484(puVar6);
  func_0x000107c55888(puVar6);
  func_0x000107c615e8(uVar12);
LAB_101db48d4:
  func_0x000107c4bfb0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000101db4908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db4948; end: 101db495b; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySnapSendSessionStartWithMemoriesCRFeaturedStory:entrySource:sendSessionId:] */

void FUN_101db4948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101db4480(param_3,param_4,param_5,param_2,&UNK_110484048,&UNK_10da15718);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101db495c; end: 101db49f7;  */

void FUN_101db495c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101db4480(param_3,param_4,param_5,param_2,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101db49f8; end: 101db4bf3;  */

void FUN_101db49f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  uStack_80 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      puVar2 = PTR_PTR_1126af4c0;
      func_0x000107c61168();
      lVar3 = lVar1;
      func_0x000107c4cb6c(lVar1);
      func_0x000107c61180();
      func_0x000107c430e0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lStack_68);
      }
      else {
        lVar3 = lVar1;
        func_0x000107c4cabc();
        func_0x000107c61180();
        if (lVar3 == 0) {
          uStack_80 = 0;
          lStack_78 = 0;
        }
        else {
          lStack_78 = lVar3;
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
        }
        lVar3 = lVar1;
        func_0x000107c40f88();
        lVar4 = lVar1;
        func_0x000107c5df1c();
        puVar5 = &UNK_110484020;
        func_0x000107c613fc(&UNK_110484020,0x68,7);
        *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar5 + 0x18) = param_1;
        *(undefined **)(puVar5 + 0x20) = puVar2;
        *(long *)(puVar5 + 0x28) = lStack_78;
        *(undefined8 *)(puVar5 + 0x30) = uStack_80;
        *(long *)(puVar5 + 0x38) = lVar4;
        *(long *)(puVar5 + 0x40) = lVar3;
        *(undefined8 *)(puVar5 + 0x48) = param_2;
        *(undefined8 *)(puVar5 + 0x50) = param_3;
        *(undefined8 *)(puVar5 + 0x58) = param_4;
        *(long *)(puVar5 + 0x60) = lStack_68;
        func_0x000107c6157c();
        func_0x000107c615f0(param_1);
        func_0x000107c615f0(puVar2);
        func_0x000107c61434(param_4);
        func_0x000107c615f0(lStack_68);
        uVar6 = 0xc0;
        func_0x0001001ca524(0xc0,0,0x48,4,0,0,&UNK_10da156f8,puVar5,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lStack_68);
        func_0x000107c615e8(puVar2);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(uVar6);
      }
    }
  }
  return;
}



/* Entry: 101db4bf4; end: 101db4c2b;  */

void FUN_101db4bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_11;
  *(undefined8 *)(unaff_x22 + 0x78) = param_12;
  *(undefined8 *)(unaff_x22 + 0x68) = param_10;
  *(undefined8 *)(unaff_x22 + 0x60) = param_9;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db4c2c,0,0);
  return;
}



/* Entry: 101db4c2c; end: 101db4f6f;  */

void FUN_101db4c2c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x22;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar6 = *(long *)(unaff_x22 + 0x30);
  puVar4 = PTR_PTR_1126a9538;
  func_0x000107c610f8(PTR_PTR_1126a9538);
  func_0x000107c453e4();
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar8 = 0;
    param_2 = 0;
  }
  else {
    lVar8 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4a450();
  func_0x000107c615e8(uVar7);
  func_0x0001000d224c(unaff_x22 + 0x20);
  uVar11 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar11 != 0) {
    if (*(long *)(unaff_x22 + 0x48) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c564d4(puVar4);
    func_0x000107c61170(uVar7);
    if (param_2 == 0) {
      lVar8 = 0;
    }
    else {
      func_0x000107c5fadc(lVar8,param_2);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar6 = *(long *)(unaff_x22 + 0x50);
    func_0x000107c593e4(puVar4);
    func_0x000107c61170(lVar8);
    func_0x000107fdcaa8(uVar1);
    func_0x000107c59558(puVar4);
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c58ec0(puVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c54618(puVar4);
    if (lVar6 != 0x65) {
      func_0x000107c43c94();
      func_0x000107c307b8();
    }
    func_0x000107c42998(*(undefined8 *)(unaff_x22 + 0x38));
    uVar5 = uVar11;
    func_0x000107c5abe8();
    if ((uVar5 & 1) == 0) {
      func_0x000107c43c94(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000108dfcb04();
    }
    lVar8 = *(long *)(unaff_x22 + 0x38);
    lVar6 = lVar8;
    func_0x000107c42998();
    lVar6 = (long)(int)lVar6;
    func_0x000107c30780();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar12 = 0;
      lVar6 = -0x2000000000000000;
      lVar10 = lVar8;
    }
    else {
      lVar12 = lVar6;
      func_0x000107c5faec();
      lVar10 = lVar8;
      func_0x000107c61170(lVar6);
      lVar6 = lVar8;
    }
    uVar5 = *(ulong *)(unaff_x22 + 0x38);
    func_0x000107c3fba8();
    if ((int)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101db4f70);
      (*pcVar3)();
    }
    uVar5 = uVar5 & 0xffffffff;
    func_0x000107c30784();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar9 = 0;
      lVar10 = 0;
    }
    else {
      uVar9 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
    }
    FUN_101db3260(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c56498(puVar4);
    func_0x000107c5a590(puVar4);
    func_0x000107c54624(puVar4);
    func_0x000107c5fadc(lVar12,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c54d3c(puVar4);
    func_0x000107c61170(lVar12);
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x000107c5fadc(uVar9,lVar10);
      func_0x000107c6142c(lVar10);
    }
    func_0x000107c53484(puVar4);
    func_0x000107c61170(uVar9);
    func_0x000107c55888(puVar4);
    func_0x000107c615e8(uVar11);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c4bfb0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000101db4f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db4f70; end: 101db4f7b; -[_TtC29MemoriesEngagementLoggingImpl24MemoriesEngagementLogger logGallerySnapSendSessionStartWithSnap:entrySource:sendSessionId:] */

void FUN_101db4f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_101db49f8(param_3,param_4,param_5,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101db4f7c; end: 101db4fff;  */

void FUN_101db4f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  (*param_6)(param_3,param_4,param_5,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101db5000; end: 101db50b7;  */

void FUN_101db5000(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  plVar9 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101db57c8;
  plVar9[0xe] = lVar4;
  plVar9[0xf] = lVar8;
  plVar9[0xd] = lVar12;
  plVar9[0xc] = lVar11;
  plVar9[10] = lVar7;
  plVar9[0xb] = lVar10;
  plVar9[8] = lVar6;
  plVar9[9] = lVar3;
  plVar9[6] = lVar5;
  plVar9[7] = lVar2;
  plVar9[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db4c2c,0,0);
  return;
}



/* Entry: 101db50b8; end: 101db50e7;  */

bool FUN_101db50b8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101db50e8; end: 101db519b;  */

void FUN_101db50e8(void)

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
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101db57d4;
  plVar7[0xc] = lVar8;
  plVar7[0xb] = lVar11;
  plVar7[10] = lVar10;
  plVar7[8] = lVar6;
  plVar7[9] = lVar9;
  plVar7[6] = lVar5;
  plVar7[7] = lVar3;
  plVar7[4] = lVar4;
  plVar7[5] = lVar2;
  plVar7[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db4644,0,0);
  return;
}



/* Entry: 101db519c; end: 101db5357;  */

ulong FUN_101db519c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101db5280);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101db5284);
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
  FUN_101db5358(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101db5358);
  (*pcVar2)();
}



/* Entry: 101db5358; end: 101db5397;  */

void FUN_101db5358(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101db5398; end: 101db53db;  */

void FUN_101db5398(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db53dc; end: 101db548f;  */

void FUN_101db53dc(void)

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
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101db57cc;
  plVar7[0xc] = lVar8;
  plVar7[0xb] = lVar11;
  plVar7[10] = lVar10;
  plVar7[8] = lVar6;
  plVar7[9] = lVar9;
  plVar7[6] = lVar5;
  plVar7[7] = lVar3;
  plVar7[4] = lVar4;
  plVar7[5] = lVar2;
  plVar7[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db4270,0,0);
  return;
}



/* Entry: 101db5490; end: 101db54eb;  */

void FUN_101db5490(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db54ec; end: 101db55a3;  */

void FUN_101db54ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  plVar9 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101db57d0;
  plVar9[0xe] = lVar4;
  plVar9[0xf] = lVar8;
  plVar9[0xd] = lVar12;
  plVar9[0xc] = lVar11;
  plVar9[10] = lVar7;
  plVar9[0xb] = lVar10;
  plVar9[8] = lVar6;
  plVar9[9] = lVar3;
  plVar9[6] = lVar5;
  plVar9[7] = lVar2;
  plVar9[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db3d78,0,0);
  return;
}



/* Entry: 101db55a4; end: 101db5643;  */

void FUN_101db55a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x101db57d8;
  plVar8[7] = lVar3;
  plVar8[8] = lVar7;
  plVar8[5] = lVar2;
  plVar8[6] = lVar6;
  plVar8[3] = lVar1;
  plVar8[4] = lVar5;
  plVar8[2] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db3980,0,0);
  return;
}



/* Entry: 101db5644; end: 101db56fb;  */

void FUN_101db5644(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  plVar9 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101db57dc;
  plVar9[0xd] = lVar4;
  plVar9[0xe] = lVar8;
  plVar9[0xc] = lVar12;
  plVar9[0xb] = lVar11;
  plVar9[9] = lVar7;
  plVar9[10] = lVar10;
  plVar9[7] = lVar6;
  plVar9[8] = lVar3;
  plVar9[5] = lVar5;
  plVar9[6] = lVar2;
  plVar9[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db3464,0,0);
  return;
}



/* Entry: 101db56fc; end: 101db574f;  */

void FUN_101db56fc(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101db5750;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db2ef4,0,0);
  return;
}



/* Entry: 101db5750; end: 101db578b;  */

void FUN_101db5750(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101db5788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101db578c; end: 101db57df;  */

void FUN_101db578c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110484130;
  if (lRam0000000112e2c510 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e2c510 = param_1;
  }
  return;
}



/* Entry: 101db57e0; end: 101db5a4b;  */

long FUN_101db57e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104841b0;
  func_0x000107c613fc(&UNK_1104841b0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x0001000285a8(0x112e2c528,&UNK_10da15890);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  pcVar2 = FUN_101db5b70;
  func_0x0001000bdd8c(FUN_101db5b70,puVar1);
  uVar3 = 0;
  func_0x0001002baa7c(0);
  func_0x000107c610f8();
  func_0x000103b12aa0(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101db5a4c; end: 101db5b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db5a4c(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar2 = *(undefined8 *)(param_3 + _DAT_113083868);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  uVar5 = *(undefined8 *)(param_5 + _DAT_11303e8a0);
  lVar4 = 0;
  func_0x000101db2ebc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 101db5b70; end: 101db5b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db5b70(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_113083868);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_11303e8a0);
  lVar5 = 0;
  func_0x000101db2ebc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 101db5b7c; end: 101db5bb7;  */

void FUN_101db5b7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db5bb8; end: 101db5bc7;  */

void FUN_101db5bb8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101db5bc8; end: 101db5c67;  */

void FUN_101db5bc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db5c68; end: 101db5c77;  */

void FUN_101db5c68(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101db5c78; end: 101db5d8f;  */

undefined1  [16] FUN_101db5c78(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = (uint)(param_1 >> 0x3e);
  if (uVar2 == 0) {
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0xd000000000000018;
    uStack_28 = 0x800000010f010530;
    func_0x000107c614cc(param_1,auStack_58,auStack_70);
    uStack_48 = uStack_68;
    uVar1 = uStack_60;
  }
  else {
    if (uVar2 != 1) {
      uStack_28 = 0x800000010f010550;
      uStack_30 = 0xd00000000000002b;
      goto LAB_101db5d80;
    }
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0xd000000000000017;
    uStack_28 = 0x800000010f010510;
    func_0x000107c614cc(param_1 & 0x3fffffffffffffff,auStack_38,auStack_50);
    uVar1 = uStack_40;
  }
  func_0x000107c60640(uStack_48,uVar1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
LAB_101db5d80:
  auVar3._8_8_ = uStack_28;
  auVar3._0_8_ = uStack_30;
  return auVar3;
}



/* Entry: 101db5d90; end: 101db5dc7;  */

undefined1  [16] FUN_101db5d90(void)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *unaff_x20;
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 0) {
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0xd000000000000018;
    uStack_28 = 0x800000010f010530;
    func_0x000107c614cc(uVar1,auStack_58,auStack_70);
    uStack_48 = uStack_68;
    uVar2 = uStack_60;
  }
  else {
    if (uVar3 != 1) {
      uStack_28 = 0x800000010f010550;
      uStack_30 = 0xd00000000000002b;
      goto LAB_101db5d80;
    }
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0xd000000000000017;
    uStack_28 = 0x800000010f010510;
    func_0x000107c614cc(uVar1 & 0x3fffffffffffffff,auStack_38,auStack_50);
    uVar2 = uStack_40;
  }
  func_0x000107c60640(uStack_48,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
LAB_101db5d80:
  auVar4._8_8_ = uStack_28;
  auVar4._0_8_ = uStack_30;
  return auVar4;
}



/* Entry: 101db5dc8; end: 101db5e0b;  */

void FUN_101db5dc8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101db5e0c; end: 101db5e17;  */

void FUN_101db5e0c(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*param_1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101db5e18; end: 101db5e87;  */

ulong * FUN_101db5e18(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2 & 0x3fffffffffffffff);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1 & 0x3fffffffffffffff);
  return param_1;
}



/* Entry: 101db5e88; end: 101db5f9f;  */

int FUN_101db5e88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101db5fa0; end: 101db5fdf;  */

void FUN_101db5fa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2c608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da15a44;
  func_0x000107c61520(&UNK_10da15a44,&UNK_110484368);
  puRam0000000112e2c608 = puVar1;
  return;
}



/* Entry: 101db5fe0; end: 101db5fe7;  */

ulong * FUN_101db5fe0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  func_0x000107c614b0(uVar1 & 0x3fffffffffffffff);
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 101db5fe8; end: 101db621b;  */

void FUN_101db5fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  puVar1 = (undefined8 *)(param_5 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_101db5fa0();
    puVar3 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar1,0,0);
    *puVar1 = 0x8000000000000000;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c43b70(param_6);
  }
  else {
    if (param_4 == 0) {
      puVar3 = &UNK_110484428;
      func_0x000107c613fc(&UNK_110484428,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,puVar1);
      puVar4 = &UNK_110484748;
      func_0x000107c613fc(&UNK_110484748,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_6;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(undefined8 *)(puVar4 + 0x28) = param_1;
      *(undefined8 *)(puVar4 + 0x30) = param_2;
      func_0x000107c61174(param_3);
      func_0x000107c61434(param_2);
      func_0x000107c61174(param_6);
      uVar2 = 0x81;
      func_0x0001001ca524(0x81,0,0x48,3,0,0,&UNK_10da15ac8,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar2);
      return;
    }
    puVar4 = PTR_PTR_1126a9560;
    func_0x000107c610f8(PTR_PTR_1126a9560);
    uVar2 = 0;
    FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
    func_0x000107c61174(param_4);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
    func_0x000107c46830(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c56420(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c54654(puVar4);
    func_0x000107c43b74(param_6);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101db621c; end: 101db623b;  */

void FUN_101db621c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db623c,0,0);
  return;
}



/* Entry: 101db623c; end: 101db6587;  */

/* WARNING: Removing unreachable block (ram,0x000101db62e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db623c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined8 *)(lVar8 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x50) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_101db5fa0();
    puVar3 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar1,0,0);
    *puVar1 = 0x8000000000000000;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c43b70(uVar6);
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x38);
    if (lVar8 != 0) {
      func_0x000107c61174();
      lVar2 = lVar8;
      func_0x000107c3ab2c();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x58) = lVar2;
      if (lVar2 != 0) {
        func_0x0001000a8868((long)puVar1 + _DAT_112e2c618,
                            *(undefined8 *)((long)puVar1 + _DAT_112e2c618 + 0x18));
        lVar8 = lVar2;
        FUN_101db97f4(lVar2,1);
        *(long *)(unaff_x22 + 0x60) = lVar8;
        lVar9 = *(long *)((long)puVar1 + _DAT_112e2c620);
        plVar7 = (long *)0x100;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x68) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101db6588;
        plVar7[0x14] = lVar8;
        plVar7[0x15] = lVar9;
        plVar7[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101dba2a8,0,0);
        return;
      }
      func_0x000107c61170(lVar8);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    puVar3 = PTR_PTR_1126a9560;
    func_0x000107c610f8(PTR_PTR_1126a9560);
    uVar5 = 0;
    FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
    func_0x000107c46830(puVar3);
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126a9550;
    func_0x000107c610f8(PTR_PTR_1126a9550);
    func_0x000107c61174(puVar3);
    func_0x000107c453e4(puVar4);
    func_0x000107c53524();
    func_0x000107c602fc(0x32);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar6,uVar10);
    uVar6 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f010630);
    func_0x000107c6142c(0x800000010f010630);
    func_0x000107c5662c(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c54654(puVar3);
    func_0x000107c61170(puVar4);
    puVar4 = *(undefined **)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c5fadc(uVar6,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c56420(puVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c43b74(uVar10);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000101db6530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db6588; end: 101db65d7;  */

void FUN_101db6588(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db65d8,0,0);
  return;
}



/* Entry: 101db65d8; end: 101db66eb;  */

void FUN_101db65d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar3 = PTR_PTR_1126a9560;
  func_0x000107c610f8(PTR_PTR_1126a9560);
  uVar4 = 0;
  FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
  uVar7 = uVar5;
  func_0x000107c5fc48(uVar5,uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c46830(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c56420(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c43b74(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101db66e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db66ec; end: 101db693f; -[_TtC35FaceTaggingNativeBridgeServicesImpl27FaceTaggingNativeBridgeImpl processMediaForFaceTaggingWithMediaSource:mediaId:] */

void FUN_101db66ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5faec(param_4);
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8(PTR_PTR_1126b1588);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  puVar2 = &UNK_110484428;
  func_0x000107c613fc(&UNK_110484428,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(puVar1);
  FUN_101db82e0(param_4,param_2,param_1,puVar2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61578(puVar2,2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101db6940; end: 101db6a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db6940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e2c630);
  func_0x0001000a8868(puVar1,puVar1[3]);
  uVar2 = *puVar1;
  func_0x000107c61174(param_4);
  FUN_101dbd148(param_2,param_3,uVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101db6a30; end: 101db6a97; -[_TtC35FaceTaggingNativeBridgeServicesImpl27FaceTaggingNativeBridgeImpl resolveRegionForMediaWithMediaId:] */

void FUN_101db6a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000101db67c8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101db6a98; end: 101db6aa7; -[_TtC35FaceTaggingNativeBridgeServicesImpl27FaceTaggingNativeBridgeImpl isFaceTaggingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db6a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e2c610),PTR_s_isFaceTaggingFeatureEnabled_1125fa430);
  return;
}



/* Entry: 101db6aa8; end: 101db6c53;  */

void FUN_101db6aa8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  puVar1 = (undefined8 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_101db5fa0();
    puVar3 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar1,0,0);
    *puVar1 = 0x8000000000000000;
    param_5 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c43b70(param_4);
  }
  else {
    if (param_2 == 0) {
      puVar3 = &UNK_110484428;
      func_0x000107c613fc(&UNK_110484428,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,puVar1);
      puVar4 = &UNK_110484590;
      func_0x000107c613fc(&UNK_110484590,0x30,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_4;
      *(undefined8 *)(puVar4 + 0x20) = param_1;
      *(undefined **)(puVar4 + 0x28) = param_5;
      func_0x000107c61174(param_1);
      func_0x000107c61434(param_5);
      func_0x000107c61174(param_4);
      uVar2 = 0x81;
      func_0x0001001ca524(0x81,0,0x48,3,0,0,&UNK_10da15ab8,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar2);
      return;
    }
    uVar2 = 0;
    FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
    func_0x000107c5fc48(param_5,uVar2);
    func_0x000107c43b74(param_4);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 101db6c54; end: 101db6c6f;  */

void FUN_101db6c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db6c70,0,0);
  return;
}



/* Entry: 101db6c70; end: 101db6ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db6c70(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined8 *)(lVar7 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x48) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_101db5fa0();
    puVar4 = (undefined8 *)&UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar1,0,0);
    *puVar1 = 0x8000000000000000;
    puVar1 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    func_0x000107c43b70(uVar5);
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x38);
    if (lVar7 != 0) {
      func_0x000107c61174();
      lVar2 = lVar7;
      func_0x000107c3ab2c();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x50) = lVar2;
      if (lVar2 != 0) {
        lVar7 = *(long *)((long)puVar1 + _DAT_112e2c620);
        plVar3 = (long *)0x100;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x58) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_101db6ddc;
        plVar3[0x14] = *(long *)(unaff_x22 + 0x40);
        plVar3[0x15] = lVar7;
        plVar3[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101dba2a8,0,0);
        return;
      }
      func_0x000107c61170(lVar7);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = 0;
    FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
    func_0x000107c5fc48(uVar6,uVar5);
    func_0x000107c43b74(uVar8);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000101db6dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db6ddc; end: 101db6e2b;  */

void FUN_101db6ddc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db6e2c,0,0);
  return;
}



/* Entry: 101db6e2c; end: 101db6ecb;  */

void FUN_101db6e2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = 0;
  FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
  uVar4 = uVar6;
  func_0x000107c5fc48(uVar6,uVar3);
  func_0x000107c6142c(uVar6);
  func_0x000107c43b74(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101db6ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101db6ecc; end: 101db6feb; -[_TtC35FaceTaggingNativeBridgeServicesImpl27FaceTaggingNativeBridgeImpl getEmbeddingsWithMediaSource:mediaId:faces:] */

void FUN_101db6ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c5faec(param_4);
  uVar1 = 0;
  FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
  func_0x000107c5fc54(param_5,uVar1);
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8(PTR_PTR_1126b1588);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar2);
  puVar3 = &UNK_110484428;
  func_0x000107c613fc(&UNK_110484428,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(puVar2);
  func_0x000107c61434(param_5);
  func_0x000101db885c(param_4,param_2,param_1,puVar3,puVar2,param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61578(puVar3,2);
  func_0x000107c61430(param_5,2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101db6fec; end: 101db7463;  */

/* WARNING: Possible PIC construction at 0x000101db704c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db7080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db70e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db7150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db71c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db7338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db73ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db7420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db72f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db7328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db72f8) */
/* WARNING: Removing unreachable block (ram,0x000101db7424) */
/* WARNING: Removing unreachable block (ram,0x000101db73f0) */
/* WARNING: Removing unreachable block (ram,0x000101db733c) */
/* WARNING: Removing unreachable block (ram,0x000101db71c8) */
/* WARNING: Removing unreachable block (ram,0x000101db7154) */
/* WARNING: Removing unreachable block (ram,0x000101db70ec) */
/* WARNING: Removing unreachable block (ram,0x000101db7340) */
/* WARNING: Removing unreachable block (ram,0x000101db7348) */
/* WARNING: Removing unreachable block (ram,0x000101db70f4) */
/* WARNING: Removing unreachable block (ram,0x000101db7354) */
/* WARNING: Removing unreachable block (ram,0x000101db735c) */
/* WARNING: Removing unreachable block (ram,0x000101db7100) */
/* WARNING: Removing unreachable block (ram,0x000101db7450) */
/* WARNING: Removing unreachable block (ram,0x000101db7108) */
/* WARNING: Removing unreachable block (ram,0x000101db7460) */
/* WARNING: Removing unreachable block (ram,0x000101db7114) */
/* WARNING: Removing unreachable block (ram,0x000101db711c) */
/* WARNING: Removing unreachable block (ram,0x000101db7334) */
/* WARNING: Removing unreachable block (ram,0x000101db713c) */
/* WARNING: Removing unreachable block (ram,0x000101db7084) */
/* WARNING: Removing unreachable block (ram,0x000101db7268) */
/* WARNING: Removing unreachable block (ram,0x000101db7088) */
/* WARNING: Removing unreachable block (ram,0x000101db7050) */
/* WARNING: Removing unreachable block (ram,0x000101db71e0) */
/* WARNING: Removing unreachable block (ram,0x000101db7248) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101db7054) */
/* WARNING: Removing unreachable block (ram,0x000101db732c) */
/* WARNING: Removing unreachable block (ram,0x000101db7430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db6fec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e2c638);
  func_0x000107c41258(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101db7464; end: 101db76bf;  */

/* WARNING: Possible PIC construction at 0x000101db74c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db74f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db7670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db769c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db7674) */
/* WARNING: Removing unreachable block (ram,0x000101db74f8) */
/* WARNING: Removing unreachable block (ram,0x000101db75e4) */
/* WARNING: Removing unreachable block (ram,0x000101db74fc) */
/* WARNING: Removing unreachable block (ram,0x000101db74c4) */
/* WARNING: Removing unreachable block (ram,0x000101db756c) */
/* WARNING: Removing unreachable block (ram,0x000101db75c8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101db74c8) */
/* WARNING: Removing unreachable block (ram,0x000101db76a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db7464(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e2c638);
  func_0x000107c41258(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101db76c0; end: 101db771f; -[_TtC35FaceTaggingNativeBridgeServicesImpl27FaceTaggingNativeBridgeImpl init] */

void FUN_101db76c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingNativeBridgeServicesImpl.FaceTaggingNativeBridgeImpl",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101db76ec);
  (*pcVar1)();
}



/* Entry: 101db7720; end: 101db77b7; -[_TtC35FaceTaggingNativeBridgeServicesImpl27FaceTaggingNativeBridgeImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101db778c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db7790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db7720(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2c610));
  func_0x0001000834e4(param_1 + _DAT_112e2c618);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2c620));
  func_0x0001000834e4(param_1 + _DAT_112e2c628);
  func_0x0001000834e4(param_1 + _DAT_112e2c630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2c638));
  return;
}



/* Entry: 101db77b8; end: 101db77d7;  */

void FUN_101db77b8(void)

{
  func_0x000107c61168(&PTR_PTR_112804558);
  return;
}



/* Entry: 101db77d8; end: 101db82df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101db77d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10,undefined4 param_11,undefined4 param_12,long param_13
                    ,long param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long alStack_1b0 [4];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 auStack_130 [3];
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 auStack_108 [3];
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  alStack_1b0[0] = param_9;
  lVar4 = 0;
  alStack_1b0[1] = param_6;
  uStack_190 = param_1;
  uStack_188 = param_3;
  uStack_180 = param_4;
  uStack_178 = param_7;
  uStack_170 = param_8;
  func_0x000107c5f804();
  alStack_1b0[2] = *(long *)(lVar4 + -8);
  alStack_1b0[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_1b0[2] + 0x40));
  lVar10 = (long)alStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = param_13;
  uStack_70 = param_16;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_13 + -8) + 0x20))();
  lStack_a0 = param_14;
  uStack_98 = param_17;
  func_0x0001000c5db4(auStack_b8);
  (**(code **)(*(long *)(param_14 + -8) + 0x20))();
  lStack_c8 = param_10;
  uStack_c0 = param_15;
  func_0x0001000c5db4(auStack_e0);
  (**(code **)(*(long *)(param_10 + -8) + 0x20))();
  lVar1 = alStack_1b0[0];
  lVar5 = alStack_1b0[0];
  func_0x000107c610f8();
  lVar4 = lStack_78;
  func_0x0001000c6518(auStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  lVar4 = lStack_a0;
  func_0x0001000c6518(auStack_b8,lStack_a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar15);
  lVar4 = lStack_c8;
  func_0x0001000c6518(auStack_e0,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar16 = (undefined8 *)((long)puVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar16);
  uVar12 = *puVar11;
  uVar13 = *puVar15;
  uVar14 = *puVar16;
  uVar6 = 0;
  FUN_101db9dac();
  ppuStack_e8 = &PTR_DAT_1104847c8;
  uVar7 = 0;
  auStack_108[0] = uVar12;
  uStack_f0 = uVar6;
  func_0x000101dbc614();
  ppuStack_110 = &PTR_DAT_110484a38;
  uVar6 = 0;
  auStack_130[0] = uVar13;
  uStack_118 = uVar7;
  func_0x000101dbd128();
  lVar3 = alStack_1b0[3];
  lVar2 = alStack_1b0[2];
  lVar4 = _DAT_112e2c648;
  ppuStack_138 = &PTR_DAT_110484b38;
  auStack_158[0] = uVar14;
  uStack_140 = uVar6;
  (**(code **)(alStack_1b0[2] + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             alStack_1b0[3]);
  puVar8 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f010670);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar2 + 8))(lVar10,lVar3);
  *(undefined **)(lVar5 + lVar4) = puVar8;
  *(undefined8 *)(lVar5 + _DAT_112e2c610) = uStack_190;
  FUN_101db8d60(auStack_108,lVar5 + _DAT_112e2c618);
  puVar11 = (undefined8 *)(lVar5 + _DAT_112e2c620);
  *puVar11 = uStack_188;
  puVar11[1] = uStack_180;
  FUN_101db8d60(auStack_130,lVar5 + _DAT_112e2c628);
  FUN_101db8d60(auStack_158,lVar5 + _DAT_112e2c630);
  *(undefined8 *)(lVar5 + _DAT_112e2c638) = uStack_178;
  *(undefined8 *)(lVar5 + _DAT_112e2c640) = uStack_170;
  lStack_160 = lVar1;
  plVar9 = &lStack_168;
  lStack_168 = lVar5;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_158);
  func_0x0001000834e4(auStack_130);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return plVar9;
}



/* Entry: 101db82e0; end: 101db84a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db82e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = &UNK_110484608;
  func_0x000107c613fc(&UNK_110484608,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  puVar3 = &UNK_110484630;
  func_0x000107c613fc(&UNK_110484630,0x38,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = 0x101db8b64;
  *(undefined **)(puVar3 + 0x30) = puVar2;
  iVar6 = (int)*(undefined8 *)(param_3 + _DAT_112e2c640);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61174();
  func_0x000107c49d40();
  if (iVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + _DAT_112e2c648);
    pcStack_60 = FUN_101db8ba0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110484648;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    return;
  }
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000101db7b94(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 101db84a8; end: 101db8a53;  */

/* WARNING: Possible PIC construction at 0x000101db85f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db8794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db8818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101db8670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101db881c) */
/* WARNING: Removing unreachable block (ram,0x000101db8798) */
/* WARNING: Removing unreachable block (ram,0x000101db8838) */
/* WARNING: Removing unreachable block (ram,0x000101db85fc) */
/* WARNING: Removing unreachable block (ram,0x000101db8674) */
/* WARNING: Removing unreachable block (ram,0x000101db8678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db84a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = &UNK_1104844c8;
  func_0x000107c613fc(&UNK_1104844c8,0x28,7);
  *(long *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  lVar8 = *(long *)(param_3 + _DAT_112e2c638);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61434(param_6);
  func_0x000107c41258();
  func_0x000107c61180();
  lVar2 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar2 == 0) {
    func_0x0001000a8868(param_3 + _DAT_112e2c628,*(undefined8 *)(param_3 + _DAT_112e2c628 + 0x18));
    puVar3 = &UNK_1104844f0;
    func_0x000107c613fc(&UNK_1104844f0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x101db8da8;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    func_0x000107c6157c(puVar1);
    FUN_101dbbf5c(param_1,param_2,0x101db8dc8,puVar3);
  }
  else {
    uVar6 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c431c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126a9550;
      func_0x000107c610f8(PTR_PTR_1126a9550);
      func_0x000107c453e4();
      func_0x000107c53524();
      uStack_78 = 0;
      uStack_70 = 0xe000000000000000;
      func_0x000107c602fc(0x1c);
      func_0x000107c6142c(uStack_70);
      uStack_78 = 0xd00000000000001a;
      uStack_70 = 0x800000010f0105c0;
      func_0x000107c5fb78(param_1,param_2);
      uVar6 = uStack_70;
      uVar4 = uStack_78;
      func_0x000107c5fadc(uStack_78,uStack_70);
      func_0x000107c6142c(uVar6);
      func_0x000107c5662c(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61428(param_4 + 0x10,&uStack_78,0,0);
      puVar5 = (undefined8 *)(param_4 + 0x10);
      func_0x000107c61618();
      if (puVar5 == (undefined8 *)0x0) {
        FUN_101db5fa0();
        puVar7 = &UNK_110484368;
        func_0x000107c613f8(&UNK_110484368,puVar5,0,0);
        *puVar5 = 0x8000000000000000;
        func_0x000107c61174(puVar3);
        func_0x000107c5ed2c(puVar7);
        func_0x000107c614ac(puVar7);
        func_0x000107c43b70(param_5);
      }
      else {
        uVar6 = 0;
        FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
        func_0x000107c61174(puVar3);
        func_0x000107c5fc48(param_6,uVar6);
        func_0x000107c43b74(param_5);
      }
    }
    else {
      func_0x000107c61170(lVar2);
      func_0x0001000a8868(param_3 + _DAT_112e2c628,*(undefined8 *)(param_3 + _DAT_112e2c628 + 0x18))
      ;
      puVar3 = &UNK_110484518;
      func_0x000107c613fc(&UNK_110484518,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x101db8da8;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      func_0x000107c6157c(puVar1);
      FUN_101dbbf5c(param_1,param_2,FUN_101db8abc,puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101db8a54; end: 101db8a87;  */

void FUN_101db8a54(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar7 = *(undefined **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar2 = (undefined8 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_101db5fa0();
    puVar4 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar2,0,0);
    *puVar2 = 0x8000000000000000;
    puVar7 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    func_0x000107c43b70(uVar6);
  }
  else {
    if (param_2 == 0) {
      puVar4 = &UNK_110484428;
      func_0x000107c613fc(&UNK_110484428,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,puVar2);
      puVar5 = &UNK_110484590;
      func_0x000107c613fc(&UNK_110484590,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar6;
      *(undefined8 *)(puVar5 + 0x20) = param_1;
      *(undefined **)(puVar5 + 0x28) = puVar7;
      func_0x000107c61174(param_1);
      func_0x000107c61434(puVar7);
      func_0x000107c61174(uVar6);
      uVar6 = 0x81;
      func_0x0001001ca524(0x81,0,0x48,3,0,0,&UNK_10da15ab8,puVar5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar6);
      return;
    }
    uVar3 = 0;
    FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
    func_0x000107c5fc48(puVar7,uVar3);
    func_0x000107c43b74(uVar6);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101db8a88; end: 101db8abb;  */

void FUN_101db8a88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db8abc; end: 101db8adf;  */

void FUN_101db8abc(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1,0);
  return;
}



/* Entry: 101db8ae0; end: 101db8b57;  */

void FUN_101db8ae0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101db8dd4;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db6c70,0,0);
  return;
}



/* Entry: 101db8b58; end: 101db8b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db8b58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e2c630);
  func_0x0001000a8868(puVar3,puVar3[3]);
  uVar5 = *puVar3;
  func_0x000107c61174(uVar4);
  FUN_101dbd148(uVar2,uVar1,uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101db8b6c; end: 101db8b9f;  */

void FUN_101db8b6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db8ba0; end: 101db8bab;  */

void FUN_101db8ba0(void)

{
  long unaff_x20;
  
  FUN_101db6fec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101db8bac; end: 101db8bdb;  */

void FUN_101db8bac(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101db8bdc; end: 101db8c07;  */

void FUN_101db8bdc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db8c08; end: 101db8c77;  */

void FUN_101db8c08(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101db8c78; end: 101db8ca3;  */

void FUN_101db8c78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db8ca4; end: 101db8d23;  */

void FUN_101db8ca4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101db8d24;
  plVar5[8] = lVar4;
  plVar5[9] = lVar6;
  plVar5[6] = lVar3;
  plVar5[7] = lVar2;
  plVar5[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101db623c,0,0);
  return;
}



/* Entry: 101db8d24; end: 101db8d5f;  */

void FUN_101db8d24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101db8d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101db8d60; end: 101db8da3;  */

long FUN_101db8d60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101db8da4; end: 101db8dd7;  */

void FUN_101db8da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined8 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_101db5fa0();
    puVar4 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar2,0,0);
    *puVar2 = 0x8000000000000000;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    func_0x000107c43b70(uVar6);
  }
  else {
    if (param_4 == 0) {
      puVar4 = &UNK_110484428;
      func_0x000107c613fc(&UNK_110484428,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,puVar2);
      puVar5 = &UNK_110484748;
      func_0x000107c613fc(&UNK_110484748,0x38,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar6;
      *(undefined8 *)(puVar5 + 0x20) = param_3;
      *(undefined8 *)(puVar5 + 0x28) = param_1;
      *(undefined8 *)(puVar5 + 0x30) = param_2;
      func_0x000107c61174(param_3);
      func_0x000107c61434(param_2);
      func_0x000107c61174(uVar6);
      uVar6 = 0x81;
      func_0x0001001ca524(0x81,0,0x48,3,0,0,&UNK_10da15ac8,puVar5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar6);
      return;
    }
    puVar5 = PTR_PTR_1126a9560;
    func_0x000107c610f8(PTR_PTR_1126a9560);
    uVar3 = 0;
    FUN_101db8c08(0,0x112e2c678,&PTR_PTR_1126a9548);
    func_0x000107c61174(param_4);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
    func_0x000107c46830(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c56420(puVar5);
    func_0x000107c61170(param_1);
    func_0x000107c54654(puVar5);
    func_0x000107c43b74(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101db8dd8; end: 101db959f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db8dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 *puVar10;
  long alStack_e0 [4];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lStack_b8 = param_6;
  lStack_b0 = param_8;
  uStack_a8 = param_2;
  uStack_98 = param_1;
  func_0x000107c613fc();
  uVar1 = 0;
  lStack_90 = unaff_x20;
  FUN_101db9dac();
  func_0x000107c613fc();
  uVar9 = *(undefined8 *)(param_8 + _DAT_1130806b8);
  uStack_c0 = uVar1;
  func_0x000101dbbb40(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uStack_a0 = param_7;
  func_0x000107c6157c(uVar9);
  FUN_101dbb624(param_7,uVar9);
  lVar2 = 0;
  func_0x000101dbaab4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_7;
  lVar3 = 0;
  alStack_e0[2] = lVar2;
  alStack_e0[3] = param_7;
  func_0x000101dbc614();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  lVar4 = 0;
  func_0x000101dbcd80();
  lVar2 = lVar4;
  func_0x000107c613fc();
  uVar9 = *(undefined8 *)(param_6 + _DAT_112fcd460);
  *(undefined8 *)(lVar2 + 0x10) = param_4;
  *(long *)(lVar2 + 0x18) = param_5;
  ppuStack_68 = &PTR_DAT_110484b48;
  lVar5 = 0;
  alStack_88[0] = lVar2;
  lStack_70 = lVar4;
  func_0x000101dbd128();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_88,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  uVar1 = *puVar10;
  *(long *)(lVar5 + 0x28) = lVar4;
  *(undefined ***)(lVar5 + 0x30) = &PTR_DAT_110484b48;
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x38) = uVar9;
  func_0x000107c6157c(param_7);
  func_0x000107c61174();
  alStack_e0[1] = param_3;
  func_0x000107c61174();
  func_0x000107c61174();
  alStack_e0[0] = param_5;
  func_0x000107c61174(uVar9);
  func_0x0001000834e4(alStack_88);
  puVar6 = &UNK_110484770;
  func_0x000107c613fc(&UNK_110484770,0x48,7);
  uVar7 = uStack_a8;
  lVar4 = lStack_b0;
  uVar9 = uStack_c0;
  lVar2 = alStack_e0[2];
  *(undefined8 *)(puVar6 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar6 + 0x18) = uStack_c0;
  *(long *)(puVar6 + 0x20) = alStack_e0[2];
  *(long *)(puVar6 + 0x28) = lVar3;
  *(long *)(puVar6 + 0x30) = lVar5;
  *(undefined8 *)(puVar6 + 0x38) = param_4;
  *(long *)(puVar6 + 0x40) = lStack_b0;
  func_0x0001000285a8(0x112e2c680,&UNK_10da15ad0);
  func_0x000107c613fc();
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(lVar5);
  func_0x000107c61174(lVar4);
  uVar1 = 0x101db95e0;
  func_0x0001000bdd8c(0x101db95e0,puVar6);
  uVar8 = 0;
  func_0x0001002bd744(0);
  func_0x000107c610f8();
  func_0x000103a6bc80(uVar1,uVar8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(alStack_e0[1]);
  func_0x000107c61170(param_4);
  func_0x000107c61170(alStack_e0[0]);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(alStack_e0[3]);
  *(undefined8 *)(lStack_90 + 0x10) = uVar1;
  return;
}



/* Entry: 101db95a0; end: 101db95af;  */

void FUN_101db95a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101db95b0; end: 101db95d3;  */

void FUN_101db95b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db95d4; end: 101db95e3;  */

void FUN_101db95d4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101db95e4; end: 101db9637;  */

void FUN_101db95e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101db9638; end: 101db964b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db9638(undefined8 *param_1)

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
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = 0;
  FUN_101db77b8();
  uVar4 = uVar3;
  func_0x000103bcba98();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(auStack_70);
  uVar5 = auStack_70[0];
  func_0x000107c614f0();
  uVar6 = 0;
  uStack_88 = uVar7;
  uStack_80 = uVar2;
  uStack_78 = uVar8;
  func_0x000101dbd128();
  uVar7 = 0;
  FUN_101db9dac();
  uVar8 = 0;
  func_0x000101dbc614();
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar9);
  FUN_101db77d8(uVar4,&uStack_78,uVar1,&PTR_DAT_1104848c0,&uStack_80,&uStack_88,uVar9,auStack_70[0],
                uVar3,uVar6,uVar5,uVar7,uVar8,&PTR_DAT_110484b38,&PTR_DAT_1104847c8,
                &PTR_DAT_110484a38);
  *param_1 = uVar4;
  return;
}



/* Entry: 101db964c; end: 101db96c7;  */

void FUN_101db964c(undefined8 param_1)

{
  if (lRam0000000112e2c6b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6907e0);
  return;
}



/* Entry: 101db96c8; end: 101db96cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101db96c8(undefined8 *param_1)

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
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = 0;
  FUN_101db77b8();
  uVar4 = uVar3;
  func_0x000103bcba98();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(auStack_70);
  uVar5 = auStack_70[0];
  func_0x000107c614f0();
  uVar6 = 0;
  uStack_88 = uVar7;
  uStack_80 = uVar2;
  uStack_78 = uVar8;
  func_0x000101dbd128();
  uVar7 = 0;
  FUN_101db9dac();
  uVar8 = 0;
  func_0x000101dbc614();
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar9);
  FUN_101db77d8(uVar4,&uStack_78,uVar1,&PTR_DAT_1104848c0,&uStack_80,&uStack_88,uVar9,auStack_70[0],
                uVar3,uVar6,uVar5,uVar7,uVar8,&PTR_DAT_110484b38,&PTR_DAT_1104847c8,
                &PTR_DAT_110484a38);
  *param_1 = uVar4;
  return;
}



/* Entry: 101db96cc; end: 101db97c7;  */

undefined1  [16] FUN_101db96cc(ulong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((param_1 >> 0x20 & 0xff) == 0) {
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "CVPixelBufferCreate failed, status=";
    uVar2 = 0xd000000000000023;
  }
  else {
    if (((uint)(param_1 >> 0x20) & 0xff) != 1) {
      uVar4 = 0x800000010f0106f0;
      uVar2 = 0xd00000000000002f;
      goto LAB_101db97b8;
    }
    func_0x000107c602fc(0x2e);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "CVPixelBufferLockBaseAddress failed, status=";
    uVar2 = 0xd00000000000002c;
  }
  uVar4 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
LAB_101db97b8:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 101db97c8; end: 101db97f3;  */

undefined1  [16] FUN_101db97c8(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined5 *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar2 = (char)((uint5)*unaff_x20 >> 0x20);
  if (cVar2 == '\0') {
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "CVPixelBufferCreate failed, status=";
    uVar3 = 0xd000000000000023;
  }
  else {
    if (cVar2 != '\x01') {
      uVar5 = 0x800000010f0106f0;
      uVar3 = 0xd00000000000002f;
      goto LAB_101db97b8;
    }
    func_0x000107c602fc(0x2e);
    func_0x000107c6142c(0xe000000000000000);
    pcVar1 = "CVPixelBufferLockBaseAddress failed, status=";
    uVar3 = 0xd00000000000002c;
  }
  uVar5 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
LAB_101db97b8:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 101db97f4; end: 101db9d9b;  */

undefined * FUN_101db97f4(int *param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *unaff_x20;
  undefined *puVar17;
  long unaff_x21;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = param_1;
  func_0x000107c60980();
  piVar5 = param_1;
  func_0x000107c6097c(param_1);
  FUN_101db9ec4(piVar4,piVar5);
  puVar17 = unaff_x20;
  if (unaff_x21 == 0) {
    piVar5 = piVar4;
    func_0x000107c60ad0();
    iVar3 = (int)piVar5;
    if (iVar3 == 0) {
      piVar5 = piVar4;
      func_0x000107c60ac8(piVar4);
      piVar6 = piVar4;
      func_0x000107c60ab8(piVar4);
      piVar7 = piVar4;
      func_0x000107c60aa8();
      piVar8 = piVar4;
      func_0x000107c60ab0();
      piVar9 = piVar8;
      func_0x000107c608bc();
      func_0x000107c608a0(piVar7,piVar5,piVar6,8,piVar8,piVar9,0x2002);
      func_0x000107c61170();
      if (piVar7 == (int *)0x0) {
        FUN_101dba0b0();
        puVar17 = &UNK_110484858;
        func_0x000107c613f8(&UNK_110484858,piVar9,0,0);
        *piVar9 = 0;
        *(undefined1 *)(piVar9 + 1) = 2;
        func_0x000107c61654();
        func_0x000107c60ae0(piVar4,0);
      }
      else {
        func_0x000107c6090c(piVar7,0x11);
        dVar22 = (double)(long)piVar5;
        dVar23 = (double)(long)piVar6;
        dVar21 = 0.0;
        func_0x000107c5ff40(0,0,dVar22,dVar23,param_1,0);
        func_0x000107c61170(piVar7);
        func_0x000107c60ae0(piVar4,0);
        puVar10 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c61174();
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001013b9140();
        puVar11 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
        func_0x000107c610f8();
        uVar12 = 0;
        func_0x0001013ae418(0);
        uVar20 = 0x112d797d8;
        func_0x000101dba178(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
        puVar18 = puVar17;
        func_0x000107c5f9dc(puVar17,uVar12,PTR___sypN_11034f1a8 + 8,uVar20);
        func_0x000107c6142c(puVar17);
        func_0x000107c45b20();
        func_0x000107c61170(piVar4);
        func_0x000107c61170();
        func_0x0001013b1ec4();
        func_0x000107c613fc();
        uVar20 = 1;
        *(undefined8 *)(puVar18 + 0x18) = 3;
        *(undefined8 *)(puVar18 + 0x10) = 1;
        *(undefined **)(puVar18 + 0x20) = puVar10;
        uVar12 = 0;
        func_0x000101dba0f0(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
        func_0x000107c61174();
        puVar17 = puVar18;
        func_0x000107c5fc48(puVar18,uVar12);
        func_0x000107c61574(puVar18);
        puVar18 = puVar11;
        func_0x000107c4e5b0();
        func_0x000107c61170(puVar17);
        puVar17 = (undefined *)0x0;
        if (((ulong)puVar18 & 1) != 0) {
          func_0x000107c61174(0);
          puVar18 = puVar10;
          func_0x000107c50700();
          func_0x000107c61180();
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar18 != (undefined *)0x0) {
            uVar12 = 0;
            func_0x000101dba0f0(0,0x112d79950,&PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
            puVar13 = puVar18;
            func_0x000107c5fc54(puVar18,uVar12);
            func_0x000107c61170(puVar18);
          }
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar18 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar18 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar18 = puVar13;
            }
            func_0x000107c60480();
          }
          if (puVar18 == (undefined *)0x0) {
            func_0x000107c61170(piVar4);
            func_0x000107c61170(puVar10);
            func_0x000107c6142c(puVar13);
            func_0x000107c61170(puVar11);
            puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            func_0x000107c6157c(unaff_x20);
            FUN_101dbaf14(0,(ulong)puVar18 & ((long)puVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
            if ((long)puVar18 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101db9d98);
              (*pcVar2)();
            }
            puVar19 = (undefined *)0x0;
            do {
              if (((ulong)puVar13 & 0xc000000000000001) == 0) {
                if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101db9d3c);
                  (*pcVar2)();
                }
                if (*(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101db9d40);
                  (*pcVar2)();
                }
                puVar14 = *(undefined **)(puVar13 + (long)puVar19 * 8 + 0x20);
                func_0x000107c61174(puVar14);
              }
              else {
                puVar14 = puVar19;
                func_0x0001013b2188(puVar19,puVar13);
              }
              func_0x000107c3ec58();
              dVar21 = (1.0 - dVar21) - dVar23;
              puVar15 = PTR_PTR_1126a9548;
              func_0x000107c610f8();
              func_0x000107c495fc(uVar20,dVar21,dVar22);
              func_0x000107c61170(puVar14);
              uVar1 = *(ulong *)(puVar17 + 0x10);
              if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar1) {
                FUN_101dbaf14(1 < *(ulong *)(puVar17 + 0x18),uVar1 + 1,1);
              }
              puVar19 = puVar19 + 1;
              *(ulong *)(puVar17 + 0x10) = uVar1 + 1;
              *(undefined **)(puVar17 + uVar1 * 8 + 0x20) = puVar15;
            } while (puVar18 != puVar19);
            func_0x000107c61574(unaff_x20);
            func_0x000107c61170(piVar4);
            func_0x000107c61170(puVar10);
            func_0x000107c6142c(puVar13);
            func_0x000107c61170(puVar11);
          }
          goto LAB_101db98b8;
        }
        puVar18 = puVar17;
        func_0x000107c61174(0);
        func_0x000107c5ed30(0);
        func_0x000107c61170(puVar18);
        func_0x000107c61654();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
      }
    }
    else {
      FUN_101dba0b0();
      puVar17 = &UNK_110484858;
      func_0x000107c613f8(&UNK_110484858,piVar5,0,0);
      *piVar5 = iVar3;
      *(undefined1 *)(piVar5 + 1) = 1;
      func_0x000107c61654();
    }
    func_0x000107c61170(piVar4);
  }
LAB_101db98b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return puVar17;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(puVar17,0x10,7);
  return puVar17;
}



/* Entry: 101db9d9c; end: 101db9dab;  */

void FUN_101db9d9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101db9dac; end: 101db9dcb;  */

void FUN_101db9dac(void)

{
  func_0x000107c61168(&PTR_PTR_112e2c798);
  return;
}



/* Entry: 101db9dcc; end: 101db9ec3;  */

undefined * FUN_101db9dcc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112e2c808);
    puVar2 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar3;
      func_0x0001014c0ae8();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101db9ec0);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101db9ec4);
        (*pcVar1)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 101db9ec4; end: 101dba0af;  */

void FUN_101db9ec4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_60 = 0;
  uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  piVar1 = (int *)0x112e2c7f8;
  func_0x0001000285a8(0x112e2c7f8,&UNK_10da15b40);
  func_0x000107c61534();
  piVar1[6] = 2;
  piVar1[7] = 0;
  piVar1[4] = 1;
  piVar1[5] = 0;
  *(undefined8 *)(piVar1 + 8) = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  func_0x000107c61174();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  puVar3 = puVar2;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar2);
  *(undefined **)(piVar1 + 10) = puVar3;
  piVar4 = piVar1;
  FUN_101db9dcc();
  func_0x000107c61588(piVar1);
  func_0x000101dba130(piVar1 + 8);
  uVar5 = 0;
  func_0x0001014bede8(0);
  uVar6 = 0;
  func_0x000101db5db4(0);
  uVar7 = 0x112da8f90;
  func_0x000101dba178(0x112da8f90,&SUB_1014bede8,&UNK_10dcb8d78);
  piVar1 = piVar4;
  func_0x000107c5f9dc(piVar4,uVar5,uVar6,uVar7);
  func_0x000107c6142c(piVar4);
  func_0x000107c60aa0(uVar8,param_1,param_2,0x42475241,piVar1,&lStack_60);
  func_0x000107c61170();
  if (((int)uVar8 != 0) || (piVar1 = (int *)0x0, lStack_60 == 0)) {
    FUN_101dba0b0();
    func_0x000107c613f8(&UNK_110484858,piVar1,0,0);
    *piVar1 = (int)uVar8;
    *(undefined1 *)(piVar1 + 1) = 0;
    func_0x000107c61654();
    func_0x000107c61170(lStack_60);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112e2c7f0 != (undefined *)0x0) {
    return;
  }
  puVar2 = &UNK_10da15bbc;
  func_0x000107c61520(&UNK_10da15bbc,&UNK_110484858);
  puRam0000000112e2c7f0 = puVar2;
  return;
}



/* Entry: 101dba0b0; end: 101dba0ef;  */

void FUN_101dba0b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2c7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da15bbc;
  func_0x000107c61520(&UNK_10da15bbc,&UNK_110484858);
  puRam0000000112e2c7f0 = puVar1;
  return;
}



/* Entry: 101dba0f0; end: 101dba1b7;  */

void FUN_101dba0f0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dba1b8; end: 101dba2a7;  */

int FUN_101dba1b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 5) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 1) ^ 0xff;
  if (*(byte *)(param_1 + 1) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101dba2a8; end: 101dba32b;  */

void FUN_101dba2a8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0xa0);
  if (uVar3 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x10);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101dba32c,uVar2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101dba328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 101dba32c; end: 101dba39f;  */

void FUN_101dba32c(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x70);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  uVar2 = 0x112e2c8b0;
  func_0x0001000285a8(0x112e2c8b0,&UNK_10da15c50);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dba3a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0x78,uVar3,uVar2);
  return;
}


