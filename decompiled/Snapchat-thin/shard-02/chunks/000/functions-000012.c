/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016a9524; end: 1016a9533;  */

void FUN_1016a9524(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [6];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = puVar1;
    FUN_1016a8840();
    func_0x000107c61170(lVar3);
    puStack_e0 = puVar4;
    func_0x000100087f6c(&puStack_e0);
    func_0x000107c61170();
  }
  func_0x0001000d224c(&uStack_80);
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  puVar11 = (undefined8 *)(puVar4 + 0x20);
  *puVar11 = puVar5;
  puVar5 = puVar4;
  func_0x000100673700(puVar4);
  func_0x000107c61588(puVar4);
  uVar10 = *(undefined8 *)(puVar4 + 0x10);
  uVar6 = 0;
  FUN_1016a9b9c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar11,uVar10,uVar6);
  func_0x000100120cb0();
  puVar7 = puVar5;
  func_0x000107c5fe08(puVar5,uVar6,puVar11);
  func_0x000107c6142c(puVar5);
  func_0x0001000d224c(auStack_b0);
  uVar6 = 0;
  FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(auStack_b0[0]);
  puVar4 = &UNK_1103f5a08;
  func_0x000107c613fc(&UNK_1103f5a08,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  pcStack_c0 = FUN_1016a9a6c;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x10168981c;
  puStack_c8 = &UNK_1103f5a20;
  ppuVar8 = &puStack_e0;
  puStack_b8 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_b8;
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(puVar1);
  uVar9 = uStack_80;
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(FUN_1016a9a90,&puStack_e0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar9);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1016a9534; end: 1016a959f;  */

void FUN_1016a9534(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a95a0; end: 1016a96e3;  */

void FUN_1016a95a0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_90;
  func_0x0001000d224c(&uStack_58);
  if (-1 < param_2) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x0001000d224c(&uStack_60);
    uVar3 = 0;
    FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_60);
    uStack_70 = 0x1016a9b54;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013b7310;
    puStack_78 = &UNK_1103f5b38;
    uStack_68 = param_5;
    func_0x000107c60bc4(&puStack_90);
    uVar1 = uStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar1);
    func_0x000107c54910(uStack_58);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uStack_58);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a96e4);
  (*pcVar2)();
}



/* Entry: 1016a96e4; end: 1016a975b;  */

void FUN_1016a96e4(undefined1 *param_1,undefined *param_2)

{
  if (param_2 == (undefined *)0x0) {
    if (((ulong)param_1 & 1) != 0) {
      func_0x000100b60084();
      return;
    }
    FUN_1016a6c8c();
    param_2 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,param_1,0,0);
    *param_1 = 1;
  }
  else {
    func_0x000107c614b0(param_2);
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 1016a975c; end: 1016a9987;  */

void FUN_1016a975c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  
  func_0x0001000d224c(&uStack_78);
  func_0x0001000bb420(param_3,auStack_98);
  puVar2 = &UNK_1103f5a80;
  func_0x000107c613fc(&UNK_1103f5a80,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000100102924(auStack_98,puVar2 + 0x20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1016a9ae0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5a98;
  ppuVar3 = &puStack_c8;
  puStack_a0 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(auStack_98);
  uVar4 = 0;
  FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
  uVar5 = uVar4;
  func_0x000100bcb214();
  func_0x000107c61170(auStack_98[0]);
  func_0x0001000d224c(&uStack_d0);
  func_0x000100bcb214(uVar4);
  func_0x000107c61170(uStack_d0);
  uStack_a8 = 0x1016a9aec;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5ac0;
  ppuVar6 = &puStack_c8;
  puStack_a0 = (undefined *)param_5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  uStack_a8 = 0x1016a9af0;
  puStack_c8 = puVar1;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ff4e14;
  puStack_b0 = &UNK_1103f5ae8;
  ppuVar7 = &puStack_c8;
  puStack_a0 = (undefined *)param_5;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_a0;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e568(uStack_78);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uStack_78);
  return;
}



/* Entry: 1016a9988; end: 1016a9a0b;  */

void FUN_1016a9988(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (-1 < param_2) {
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5490c(uStack_38);
    func_0x000107c61170(uStack_38);
    func_0x000107c615e8(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a9a0c);
  (*pcVar1)();
}



/* Entry: 1016a9a0c; end: 1016a9a6b;  */

void FUN_1016a9a0c(undefined *param_1)

{
  undefined *puVar1;
  
  if (param_1 == (undefined *)0x0) {
    FUN_1016a6c8c();
    puVar1 = &UNK_11072d358;
    func_0x000107c613f8(&UNK_11072d358,param_1,0,0);
    *param_1 = 1;
  }
  else {
    func_0x000107c614b0();
    puVar1 = param_1;
  }
  func_0x00010488ade0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 1016a9a6c; end: 1016a9a8f;  */

void FUN_1016a9a6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,uVar5,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c47580();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar1;
    func_0x000100121450(puVar1);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&puStack_50);
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        uVar3 = 0;
        FUN_1016a9b9c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar4 = &uStack_58;
        func_0x000107c6147c(puVar4,&puStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
        puVar1 = PTR_PTR_1126a7858;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c5a494();
        puStack_50 = puVar1;
        func_0x000100087f6c(&puStack_50);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(uStack_58);
        return;
      }
      goto LAB_1016a9364;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61170(puVar1);
LAB_1016a9364:
  func_0x00010006e7f4(&puStack_50);
  return;
}



/* Entry: 1016a9a90; end: 1016a9ad3;  */

void FUN_1016a9a90(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 1016a9ad4; end: 1016a9af7;  */

void FUN_1016a9ad4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000d224c(&uStack_78);
  func_0x0001000bb420(unaff_x20 + 0x20,auStack_98);
  puVar3 = &UNK_1103f5a80;
  func_0x000107c613fc(&UNK_1103f5a80,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  func_0x000100102924(auStack_98,puVar3 + 0x20);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1016a9ae0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5a98;
  ppuVar4 = &puStack_c8;
  puStack_a0 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(auStack_98);
  uVar5 = 0;
  FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
  uVar6 = uVar5;
  func_0x000100bcb214();
  func_0x000107c61170(auStack_98[0]);
  func_0x0001000d224c(&uStack_d0);
  func_0x000100bcb214(uVar5);
  func_0x000107c61170(uStack_d0);
  uStack_a8 = 0x1016a9aec;
  puStack_c8 = puVar2;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1103f5ac0;
  ppuVar7 = &puStack_c8;
  puStack_a0 = (undefined *)uVar1;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  uStack_a8 = 0x1016a9af0;
  puStack_c8 = puVar2;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ff4e14;
  puStack_b0 = &UNK_1103f5ae8;
  ppuVar8 = &puStack_c8;
  puStack_a0 = (undefined *)uVar1;
  func_0x000107c60bc4(ppuVar8);
  puVar3 = puStack_a0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e568(uStack_78);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uStack_78);
  return;
}



/* Entry: 1016a9af8; end: 1016a9b33;  */

void FUN_1016a9af8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100183ab8(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a9b34; end: 1016a9b63;  */

void FUN_1016a9b34(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar5 = unaff_x20 + 0x20;
  ppuVar7 = &puStack_90;
  func_0x0001000d224c(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),lVar1,lVar5,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016a96e4);
    (*pcVar4)();
  }
  func_0x0001006732c8(lVar5,*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c605b0();
  func_0x0001000d224c(&uStack_60);
  uVar6 = 0;
  FUN_1016a9b9c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_60);
  uStack_70 = 0x1016a9b54;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1013b7310;
  puStack_78 = &UNK_1103f5b38;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar3 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c54910(uStack_58);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uStack_58);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1016a9b64; end: 1016a9b9b;  */

void FUN_1016a9b64(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1016a9b9c; end: 1016a9bdb;  */

void FUN_1016a9b9c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016a9bdc; end: 1016a9bfb;  */

void FUN_1016a9bdc(long param_1,long param_2)

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



/* Entry: 1016a9bfc; end: 1016a9c23;  */

void FUN_1016a9bfc(void)

{
  func_0x000100cb9068();
  return;
}



/* Entry: 1016a9c24; end: 1016a9c6f;  */

void FUN_1016a9c24(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016a9c70,param_1);
  return;
}



/* Entry: 1016a9c70; end: 1016a9cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a9c70(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016a9e70();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbfbd8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016a9cd8; end: 1016a9d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a9cd8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfbd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016a9d24; end: 1016a9ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016a9d24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c30ef8(param_1,lVar2);
  func_0x000107c61170(lVar2);
  return param_1;
}



/* Entry: 1016a9de0; end: 1016a9e1b; -[_TtC25LocalUserIdPluginProvider17LocalUserIdPlugin pushToValdiMarshaller:] */

undefined8 FUN_1016a9de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a9d24(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 1016a9e1c; end: 1016a9e4f;  */

void FUN_1016a9e1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016a9e50; end: 1016a9e5f;  */

undefined1  [16] FUN_1016a9e50(void)

{
  return ZEXT816(0x1103f5c40);
}



/* Entry: 1016a9e60; end: 1016a9e6f; -[_TtC25LocalUserIdPluginProvider17LocalUserIdPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a9e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfbd8));
  return;
}



/* Entry: 1016a9e70; end: 1016a9e8f;  */

void FUN_1016a9e70(void)

{
  func_0x000107c61168(&PTR_PTR_1127e52c8);
  return;
}



/* Entry: 1016a9e90; end: 1016a9edb;  */

void FUN_1016a9e90(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016a9edc,param_1);
  return;
}



/* Entry: 1016a9edc; end: 1016a9f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a9edc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016aa098();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbfc08) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016a9f44; end: 1016a9f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a9f44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfc08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016a9f90; end: 1016aa043; -[_TtC35NotificationPresenterPluginProvider27NotificationPresenterPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016a9f90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  uVar2 = uVar1;
  func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_pushToValdiMarshaller__112624b18);
  if ((uVar2 & 1) == 0) {
    func_0x000107c30efc(param_3);
  }
  else {
    param_3 = uVar1;
    func_0x000107c4f6d8(uVar1);
  }
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar1);
  return param_3;
}



/* Entry: 1016aa044; end: 1016aa077;  */

void FUN_1016aa044(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016aa078; end: 1016aa087;  */

undefined1  [16] FUN_1016aa078(void)

{
  return ZEXT816(0x1103f5ce0);
}



/* Entry: 1016aa088; end: 1016aa097; -[_TtC35NotificationPresenterPluginProvider27NotificationPresenterPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aa088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfc08));
  return;
}



/* Entry: 1016aa098; end: 1016aa0b7;  */

void FUN_1016aa098(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5388);
  return;
}



/* Entry: 1016aa0b8; end: 1016aa19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aa0b8(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar3 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c509b8(lStack_48);
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  lVar3 = lVar2;
  func_0x000107c4f57c(lVar2);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_1130807f0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_48);
  puVar4 = PTR_PTR_1126a7860;
  func_0x000107c610f8();
  func_0x000107c46230();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c615e8(lVar3);
    func_0x000107c615e8(uVar5);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aa1a0);
  (*pcVar1)();
}



/* Entry: 1016aa1a0; end: 1016aa1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aa1a0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar3 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c509b8(lStack_48);
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  lVar3 = lVar2;
  func_0x000107c4f57c(lVar2);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_1130807f0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_48);
  puVar4 = PTR_PTR_1126a7860;
  func_0x000107c610f8();
  func_0x000107c46230();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c615e8(lVar3);
    func_0x000107c615e8(uVar5);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aa1a0);
  (*pcVar1)();
}



/* Entry: 1016aa1b8; end: 1016aa1f3;  */

void FUN_1016aa1b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1016aa1f4; end: 1016aa457;  */

/* WARNING: Possible PIC construction at 0x0001016aa234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016aa2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016aa358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016aa374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016aa404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016aa35c) */
/* WARNING: Removing unreachable block (ram,0x0001016aa2fc) */
/* WARNING: Removing unreachable block (ram,0x0001016aa238) */
/* WARNING: Removing unreachable block (ram,0x0001016aa310) */
/* WARNING: Removing unreachable block (ram,0x0001016aa394) */
/* WARNING: Removing unreachable block (ram,0x0001016aa420) */
/* WARNING: Removing unreachable block (ram,0x0001016aa39c) */
/* WARNING: Removing unreachable block (ram,0x0001016aa3bc) */
/* WARNING: Removing unreachable block (ram,0x0001016aa3d4) */
/* WARNING: Removing unreachable block (ram,0x0001016aa43c) */
/* WARNING: Removing unreachable block (ram,0x0001016aa440) */
/* WARNING: Removing unreachable block (ram,0x0001016aa320) */
/* WARNING: Removing unreachable block (ram,0x0001016aa3e4) */
/* WARNING: Removing unreachable block (ram,0x0001016aa324) */
/* WARNING: Removing unreachable block (ram,0x0001016aa258) */
/* WARNING: Removing unreachable block (ram,0x0001016aa378) */
/* WARNING: Removing unreachable block (ram,0x0001016aa37c) */
/* WARNING: Removing unreachable block (ram,0x0001016aa408) */

void FUN_1016aa1f4(undefined8 param_1)

{
  func_0x000107c30f20(param_1,0);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016aa458; end: 1016aa463;  */

void FUN_1016aa458(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100945c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1016aa464; end: 1016aa4e7;  */

void FUN_1016aa464(void)

{
  FUN_1016aa1f4();
  return;
}



/* Entry: 1016aa4e8; end: 1016aa50f;  */

undefined1  [16] FUN_1016aa4e8(void)

{
  return ZEXT816(0x1103f5e00);
}



/* Entry: 1016aa510; end: 1016aa6a3;  */

void FUN_1016aa510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x50) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000011;
  func_0x000100029b28(0xd000000000000011,0x800000010efb63b0);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000100083b20(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  lVar3 = lVar4;
  func_0x000107c509b8();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x60) = lVar3;
  func_0x000107c615e8(lVar4);
  func_0x000100083b20(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000103c2b550();
  func_0x000107c61170(uVar1);
  func_0x000107c4f57c();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x68) = lVar3;
  if (lVar3 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    uVar1 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1016aa6a4,uVar2,uVar1);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001e,0x800000010efb6420,
                      "ComposerServicesImplementation/ValdiRuntimeServiceProviders.swift",0x41,2,
                      0x53,0);
  return;
}



/* Entry: 1016aa6a4; end: 1016aa703;  */

void FUN_1016aa6a4(void)

{
  ulong uVar1;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_flushPendingMainThreadLoadOperat_1125ca5e8);
  if ((uVar1 & 1) != 0) {
    func_0x000107c43710(*(undefined8 *)(unaff_x22 + 0x68));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016aa704,0,0);
  return;
}



/* Entry: 1016aa704; end: 1016aa76f;  */

void FUN_1016aa704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(puVar3,unaff_x22 + 0x28,0,0);
  uVar2 = *puVar3;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016aa76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 1016aa770; end: 1016aa7a7;  */

void FUN_1016aa770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f5ea0;
  func_0x0001000285a8(0x112dbfd78,&UNK_10d97ba80);
  func_0x000107c613fc(&UNK_1103f5ea0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1016aab40,puVar1);
  return;
}



/* Entry: 1016aa7a8; end: 1016aa7eb;  */

void FUN_1016aa7a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0xd00000000000002f;
  func_0x0001003a5c84(0xd00000000000002f,0x800000010d97bb50,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *param_1 = uVar1;
  return;
}



/* Entry: 1016aa7ec; end: 1016aa80f;  */

void FUN_1016aa7ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f5ef0;
  func_0x0001000285a8(0x112d6a5b8,&UNK_10d92db30);
  func_0x000107c613fc(&UNK_1103f5ef0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1016aab48,puVar1);
  return;
}



/* Entry: 1016aa810; end: 1016aa8d7;  */

void FUN_1016aa810(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112dbfd78,&UNK_10d97ba80);
  puVar1 = &UNK_1103f6020;
  func_0x000107c613fc(&UNK_1103f6020,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  pcVar2 = FUN_1016aa950;
  func_0x0001000823a8(FUN_1016aa950,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000ad7c4();
  uVar4 = 0;
  func_0x0001000a198c(0);
  func_0x000107c610f8();
  func_0x0001040866ac(pcVar3,uVar4);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 1016aa8d8; end: 1016aa94f;  */

void FUN_1016aa8d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112dbfd78,&UNK_10d97ba80);
  puVar2 = &UNK_1103f6020;
  func_0x000107c613fc(&UNK_1103f6020,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  pcVar3 = FUN_1016aa950;
  func_0x0001000823a8(FUN_1016aa950,puVar2);
  pcVar4 = pcVar3;
  func_0x0001000ad7c4();
  uVar5 = 0;
  func_0x0001000a198c(0);
  func_0x000107c610f8();
  func_0x0001040866ac(pcVar4,uVar5);
  func_0x000107c61574(pcVar3);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016aa950; end: 1016aa977;  */

void FUN_1016aa950(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1016aa978(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Entry: 1016aa978; end: 1016aaa97;  */

undefined * FUN_1016aa978(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 auStack_70 [6];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000014;
  func_0x0001000a9a18(0xd000000000000014,0x800000010efb6390);
  func_0x000107c61170(uVar1);
  func_0x000100083b20(auStack_70);
  uVar1 = auStack_70[0];
  uVar3 = auStack_70[0];
  func_0x000107c509b8(auStack_70[0]);
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  func_0x000100083b20(auStack_70);
  func_0x000103c2b550();
  func_0x000107c61170(auStack_70[0]);
  puVar4 = PTR_PTR_1126a7870;
  func_0x000107c610f8(PTR_PTR_1126a7870);
  func_0x000107c48438();
  func_0x000107c61428(param_1,auStack_70,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar3);
  return puVar4;
}



/* Entry: 1016aaa98; end: 1016aaafb;  */

void FUN_1016aaa98(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016aaafc;
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016aa510,0,0);
  return;
}



/* Entry: 1016aaafc; end: 1016aab3f;  */

void FUN_1016aaafc(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016aab3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016aab40; end: 1016aab4b;  */

void FUN_1016aab40(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1016aa978(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Entry: 1016aab4c; end: 1016aab97;  */

void FUN_1016aab4c(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016aab98,param_1);
  return;
}



/* Entry: 1016aab98; end: 1016aabff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aab98(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016aad10();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbfd90) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016aac00; end: 1016aac4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aac00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfd90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016aac4c; end: 1016aacbb; -[_TtC26CircumstanceEngineServices28ManualExposureCofStorePlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016aac4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c30dd4(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 1016aacbc; end: 1016aacef;  */

void FUN_1016aacbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016aacf0; end: 1016aacff;  */

undefined1  [16] FUN_1016aacf0(void)

{
  return ZEXT816(0x1103f60f0);
}



/* Entry: 1016aad00; end: 1016aad0f; -[_TtC26CircumstanceEngineServices28ManualExposureCofStorePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aad00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfd90));
  return;
}



/* Entry: 1016aad10; end: 1016aad2f;  */

void FUN_1016aad10(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5448);
  return;
}



/* Entry: 1016aad30; end: 1016aad7b;  */

void FUN_1016aad30(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016aad7c,param_1);
  return;
}



/* Entry: 1016aad7c; end: 1016aade3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aad7c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016aaf90();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbfdc0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016aade4; end: 1016aae2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aade4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfdc0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016aae30; end: 1016aaeff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aae30(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5d9b0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    func_0x000107c30efc(param_1);
  }
  else {
    uVar1 = uVar2;
    func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_pushToValdiMarshaller__112624b18);
    if ((uVar1 & 1) == 0) {
      func_0x000107c30efc(param_1);
    }
    else {
      func_0x000107c4f6d8(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1016aaf00; end: 1016aaf3b; -[_TtC30UserInfoProviderPluginProvider22UserInfoProviderPlugin pushToValdiMarshaller:] */

undefined8 FUN_1016aaf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016aae30(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 1016aaf3c; end: 1016aaf6f;  */

void FUN_1016aaf3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016aaf70; end: 1016aaf7f;  */

undefined1  [16] FUN_1016aaf70(void)

{
  return ZEXT816(0x1103f6190);
}



/* Entry: 1016aaf80; end: 1016aaf8f; -[_TtC30UserInfoProviderPluginProvider22UserInfoProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aaf80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfdc0));
  return;
}



/* Entry: 1016aaf90; end: 1016aafaf;  */

void FUN_1016aaf90(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5508);
  return;
}



/* Entry: 1016aafb0; end: 1016aaffb;  */

void FUN_1016aafb0(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016aaffc,param_1);
  return;
}



/* Entry: 1016aaffc; end: 1016ab063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016aaffc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016ab210();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbfdf0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016ab064; end: 1016ab0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ab064(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfdf0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016ab0b0; end: 1016ab17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ab0b0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5da38();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    func_0x000107c30efc(param_1);
  }
  else {
    uVar1 = uVar2;
    func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_pushToValdiMarshaller__112624b18);
    if ((uVar1 & 1) == 0) {
      func_0x000107c30efc(param_1);
    }
    else {
      func_0x000107c4f6d8(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1016ab180; end: 1016ab1bb; -[_TtC26UserProviderPluginProvider18UserProviderPlugin pushToValdiMarshaller:] */

undefined8 FUN_1016ab180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016ab0b0(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 1016ab1bc; end: 1016ab1ef;  */

void FUN_1016ab1bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016ab1f0; end: 1016ab1ff;  */

undefined1  [16] FUN_1016ab1f0(void)

{
  return ZEXT816(0x1103f6230);
}



/* Entry: 1016ab200; end: 1016ab20f; -[_TtC26UserProviderPluginProvider18UserProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ab200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfdf0));
  return;
}



/* Entry: 1016ab210; end: 1016ab22f;  */

void FUN_1016ab210(void)

{
  func_0x000107c61168(&PTR_PTR_1127e55c8);
  return;
}



/* Entry: 1016ab230; end: 1016ab25f;  */

undefined1  [16] FUN_1016ab230(void)

{
  return ZEXT816(0x1103f6320);
}



/* Entry: 1016ab260; end: 1016ab2ef; -[_TtC37CTPInfoStickerViewProviderFactoryImpl37CTPInfoStickerViewProviderFactoryImpl viewForItemInstance:runtime:completion:] */

/* WARNING: Possible PIC construction at 0x0001016ab2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ab2d4) */

void FUN_1016ab260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1016ab324(param_3,param_4,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1016ab2f0; end: 1016ab323;  */

void FUN_1016ab2f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016ab324; end: 1016ab48b;  */

/* WARNING: Possible PIC construction at 0x0001016ab394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ab3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ab458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ab3b0) */
/* WARNING: Removing unreachable block (ram,0x0001016ab3e8) */
/* WARNING: Removing unreachable block (ram,0x0001016ab3b8) */
/* WARNING: Removing unreachable block (ram,0x0001016ab424) */
/* WARNING: Removing unreachable block (ram,0x0001016ab3c0) */
/* WARNING: Removing unreachable block (ram,0x0001016ab40c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001016ab398) */
/* WARNING: Removing unreachable block (ram,0x0001016ab480) */
/* WARNING: Removing unreachable block (ram,0x0001016ab39c) */
/* WARNING: Removing unreachable block (ram,0x0001016ab45c) */

void FUN_1016ab324(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_1103f6428;
  func_0x000107c613fc(&UNK_1103f6428,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c453bc();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x000107c60bd0(param_3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ab480);
  (*pcVar1)();
}



/* Entry: 1016ab48c; end: 1016ab4ab;  */

void FUN_1016ab48c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001016ab498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1016ab4ac; end: 1016ab543;  */

void FUN_1016ab4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1103f65a0;
  func_0x000107c613fc(&UNK_1103f65a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x00010023cad4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1016ab94c;
  func_0x000103eda378(FUN_1016ab94c,puVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1016ab544; end: 1016ab54f;  */

void FUN_1016ab544(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_1103f65a0;
  func_0x000107c613fc(&UNK_1103f65a0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  func_0x00010023cad4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  pcVar4 = FUN_1016ab94c;
  func_0x000103eda378(FUN_1016ab94c,puVar3);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016ab550; end: 1016ab5c7;  */

void FUN_1016ab550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001000cad14();
  uVar1 = param_1;
  func_0x0001000cad14();
  FUN_1016addd0(0);
  func_0x000107c610f8();
  FUN_1016abddc(uStack_38,param_1,uVar1);
  return;
}



/* Entry: 1016ab5c8; end: 1016ab673;  */

void FUN_1016ab5c8(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016ab674; end: 1016ab6a3;  */

bool FUN_1016ab674(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1016ab6a4; end: 1016ab77b;  */

undefined * FUN_1016ab6a4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112dbfe98);
    puVar3 = puVar6;
    func_0x000107c60498();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = *(uint *)(puVar8 + -1);
      uVar7 = (ulong)uVar1;
      uVar9 = *puVar8;
      FUN_1016ad2a4();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ab778);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(uint *)(*(long *)(puVar3 + 0x30) + uVar7 * 4) = uVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ab77c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 1016ab77c; end: 1016ab7b3;  */

undefined1  [16] FUN_1016ab77c(void)

{
  return ZEXT816(0x1103f6540);
}



/* Entry: 1016ab7b4; end: 1016ab7f7;  */

void FUN_1016ab7b4(long param_1,long *param_2,long param_3)

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



/* Entry: 1016ab7f8; end: 1016ab7fb;  */

void FUN_1016ab7f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbfe88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001016ab7a0(0xff);
  puVar2 = &UNK_10d97bfc4;
  func_0x000107c61520(&UNK_10d97bfc4,uVar1);
  puRam0000000112dbfe88 = puVar2;
  return;
}



/* Entry: 1016ab7fc; end: 1016ab83f;  */

void FUN_1016ab7fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbfe88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001016ab7a0(0xff);
  puVar2 = &UNK_10d97bfc4;
  func_0x000107c61520(&UNK_10d97bfc4,uVar1);
  puRam0000000112dbfe88 = puVar2;
  return;
}



/* Entry: 1016ab840; end: 1016ab917;  */

undefined * FUN_1016ab840(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112dbfe90);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined4 *)(param_1 + 0x24);
    do {
      uVar1 = puVar9[-1];
      uVar5 = (ulong)uVar1;
      uVar2 = *puVar9;
      FUN_1016ad2a4();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ab914);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(uint *)(*(long *)(puVar4 + 0x30) + uVar5 * 4) = uVar1;
      *(undefined4 *)(*(long *)(puVar4 + 0x38) + uVar5 * 4) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ab918);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 1016ab918; end: 1016ab94b;  */

void FUN_1016ab918(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016ab94c; end: 1016ab957;  */

void FUN_1016ab94c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000cad14();
  uVar2 = uVar1;
  func_0x0001000cad14();
  FUN_1016addd0(0);
  func_0x000107c610f8();
  FUN_1016abddc(uStack_38,uVar1,uVar2);
  return;
}



/* Entry: 1016ab958; end: 1016ab99f;  */

void FUN_1016ab958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1016abddc(param_1,param_2,param_3);
  return;
}



/* Entry: 1016ab9a0; end: 1016abc47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016ab9a0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar6 = *(undefined8 *)(uStack_48 + _DAT_11302ecd0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(uStack_48);
  uVar1 = 0x112dbffb8;
  func_0x0001000285a8(0x112dbffb8,&UNK_10d97c0b0);
  uVar4 = uVar1;
  func_0x000107c613fc();
  *(undefined8 *)(uVar4 + 0x18) = 0xe;
  *(undefined8 *)(uVar4 + 0x10) = 7;
  *(undefined8 *)(uVar4 + 0x28) = 0x1500000017;
  *(undefined8 *)(uVar4 + 0x20) = 0x900000016;
  *(undefined8 *)(uVar4 + 0x30) = 0x500000007;
  *(undefined4 *)(uVar4 + 0x38) = 0xd;
  uVar2 = uVar6;
  uStack_48 = uVar4;
  func_0x000107c4a49c();
  uVar3 = uVar4;
  if ((int)uVar2 != 0) {
    uVar3 = 1;
    FUN_1016acee4(1,8,1,uVar4);
    *(undefined8 *)(uVar3 + 0x10) = 8;
    *(undefined4 *)(uVar3 + 0x3c) = 0x13;
    uStack_48 = uVar3;
  }
  uVar2 = uVar6;
  func_0x000107c4a3e4();
  uVar4 = uVar3;
  if ((int)uVar2 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1016acee4(uVar4,uVar5 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
    *(undefined4 *)(uVar4 + uVar5 * 4 + 0x20) = 0x11;
    uStack_48 = uVar4;
  }
  uVar2 = uVar6;
  func_0x000107c4a1c8();
  if ((int)uVar2 != 0) {
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1016acee4(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined4 *)(uVar5 + uVar3 * 4 + 0x20) = 0xe;
    uStack_48 = uVar5;
  }
  func_0x000107c61538(uVar1,0x112dbffc8);
  func_0x0001016abb58();
  func_0x000107c615e8(uVar6);
  return uStack_48;
}



/* Entry: 1016abc48; end: 1016abddb;  */

long FUN_1016abc48(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}


