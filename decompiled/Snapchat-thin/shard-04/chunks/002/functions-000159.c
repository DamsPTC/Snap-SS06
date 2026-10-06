/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032360d0; end: 10323612b;  */

undefined2 * FUN_1032360d0(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 4));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(*(undefined8 *)(param_1 + 0xc));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10323612c; end: 1032361cb;  */

int FUN_10323612c(int *param_1,int param_2)

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



/* Entry: 1032361cc; end: 103236303;  */

void FUN_1032361cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 auStack_68 [3];
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    auStack_68[0] = 0;
  }
  else {
    func_0x0001000d224c(auStack_68);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_103237a10();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0;
  func_0x000107c61614(lVar3 + 0x10,0);
  *(undefined1 *)(lVar3 + 0x30) = 1;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,1,0);
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  func_0x000107c61604(lVar3 + 0x10,param_2);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107c61434(uVar1);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(auStack_68[0]);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126acde0;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(auStack_68[0]);
  }
  *(undefined **)(lVar3 + 0x20) = puVar5;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1106298d0;
  *param_1 = lVar3;
  return;
}



/* Entry: 103236304; end: 103236323;  */

void FUN_103236304(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 auStack_68 [3];
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    auStack_68[0] = 0;
  }
  else {
    func_0x0001000d224c(auStack_68);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_103237a10();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0;
  func_0x000107c61614(lVar3 + 0x10,0);
  *(undefined1 *)(lVar3 + 0x30) = 1;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,1,0);
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  func_0x000107c61604(lVar3 + 0x10,param_2);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107c61434(uVar1);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(auStack_68[0]);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126acde0;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(auStack_68[0]);
  }
  *(undefined **)(lVar3 + 0x20) = puVar5;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1106298d0;
  *param_1 = lVar3;
  return;
}



/* Entry: 103236324; end: 1032364d7;  */

void FUN_103236324(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xe;
  *(undefined8 *)(lVar1 + 0x10) = 7;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b750;
  lVar2 = lVar1;
  FUN_103231a0c();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x6269726373627573;
  *(undefined8 *)(lVar1 + 0x28) = 0xe900000000000065;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076af50;
  func_0x00010322b060();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0x74616863;
  *(undefined8 *)(lVar1 + 0x50) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0x88) = &UNK_11076b850;
  func_0x00010322b260();
  *(long *)(lVar1 + 0x90) = lVar2;
  *(undefined8 *)(lVar1 + 0x70) = 0x746e656d6d6f63;
  *(undefined8 *)(lVar1 + 0x78) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0xb0) = &UNK_11076b650;
  func_0x00010322b220();
  *(long *)(lVar1 + 0xb8) = lVar2;
  *(undefined8 *)(lVar1 + 0x98) = 0x6572616873;
  *(undefined8 *)(lVar1 + 0xa0) = 0xe500000000000000;
  *(undefined **)(lVar1 + 0xd8) = &UNK_11076acd0;
  func_0x00010322afa0();
  *(long *)(lVar1 + 0xe0) = lVar2;
  *(undefined8 *)(lVar1 + 0xc0) = 0x654d6e6f69746361;
  *(undefined8 *)(lVar1 + 200) = 0xea0000000000756e;
  *(undefined **)(lVar1 + 0x100) = &UNK_11076b250;
  func_0x000103231a4c();
  *(long *)(lVar1 + 0x108) = lVar2;
  *(undefined8 *)(lVar1 + 0xe8) = 0x657469726f766166;
  *(undefined8 *)(lVar1 + 0xf0) = 0xe800000000000000;
  *(undefined **)(lVar1 + 0x128) = &UNK_11076b3d0;
  func_0x000103231a8c();
  *(long *)(lVar1 + 0x130) = lVar2;
  *(undefined8 *)(lVar1 + 0x110) = 0x6163696669746f6e;
  *(undefined8 *)(lVar1 + 0x118) = 0xed0000736e6f6974;
  *param_1 = 0x100;
  *(long *)(param_1 + 4) = lVar1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0xc) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  return;
}



/* Entry: 1032364d8; end: 1032364ef;  */

undefined ** FUN_1032364d8(void)

{
  return &PTR_DAT_11076be48;
}



/* Entry: 1032364f0; end: 103236553;  */

long FUN_1032364f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103236554; end: 10323664b;  */

undefined2 * FUN_103236554(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  func_0x000107c61434();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 10323664c; end: 1032366a7;  */

undefined2 * FUN_10323664c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 4));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(*(undefined8 *)(param_1 + 0xc));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1032366a8; end: 103236747;  */

int FUN_1032366a8(int *param_1,int param_2)

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



/* Entry: 103236748; end: 10323687f;  */

long FUN_103236748(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  undefined *puVar2;
  undefined1 auStack_68 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x10,0);
  *(undefined1 *)(unaff_x20 + 0x30) = 2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  lVar1 = param_4;
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c615e8(param_4);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_5);
    func_0x000107c61170(param_3);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126acdd8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(param_4);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_5);
    func_0x000107c61170(param_3);
  }
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  return unaff_x20;
}



/* Entry: 103236880; end: 10323693b;  */

/* WARNING: Possible PIC construction at 0x00010323690c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103236910) */

void FUN_103236880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c61174(lVar2);
    func_0x000107c453e4(puVar1);
    func_0x000107c5a568();
    func_0x000107c5381c(0x443b8000,lVar2,param_2,0);
    func_0x000107c537fc(0x443b8000,lVar2,param_2,0);
    func_0x000107c3e2c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10323693c; end: 103236a2b;  */

void FUN_10323693c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [40];
  
  pcVar1 = "setRendererViewModel(items:renderingParams:)";
  func_0x0001000c10c0("setRendererViewModel(items:renderingParams:)");
  func_0x000107c61180();
  FUN_10323705c(param_1,auStack_58);
  puVar2 = &UNK_110629888;
  func_0x000107c613fc(&UNK_110629888,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  FUN_1031ddc20(auStack_58,puVar2 + 0x18);
  uStack_68 = 0x1032370b4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1106298a0;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_60;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 103236a2c; end: 103236b63;  */

void FUN_103236a2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
    lVar3 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      lVar4 = lVar3;
      func_0x000107c614f0();
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar1);
      lVar5 = param_2;
      FUN_10323703c();
      ppuStack_88 = &PTR_DAT_110629808;
      puVar6 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      alStack_a8[0] = param_1;
      lStack_90 = lVar5;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      func_0x000107c6157c(param_1);
      func_0x000107c453e4(puVar6);
      (**(code **)(lVar7 + 8))(alStack_a8,param_2,0,1,puVar6,uVar1,uVar2,lVar4,lVar7);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(param_1);
      func_0x0001000834e4(alStack_a8);
    }
  }
  return;
}



/* Entry: 103236b64; end: 103236b97;  */

void FUN_103236b64(void)

{
  long unaff_x20;
  
  FUN_1031de120(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103236b98; end: 103236c13;  */

void FUN_103236b98(void)

{
  FUN_103236c14();
  return;
}



/* Entry: 103236c14; end: 10323703b;  */

void FUN_103236c14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 != 0) {
    lVar15 = *(long *)(param_1 + 0x10);
    lVar16 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61174();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_108 = lVar4;
    lStack_f0 = lVar15;
    if (lVar15 != 0) {
      lVar4 = 0;
      lStack_f8 = param_1 + 0x20;
      lStack_100 = lVar16 + 0x20;
      do {
        lVar15 = lVar4 * 0x28;
        lVar4 = lVar4 + 1;
        FUN_10323705c(lStack_f8 + lVar15,auStack_98);
        lVar14 = *(long *)(lVar16 + 0x10);
        uVar18 = 0xffffffffffffffff;
        lVar15 = lStack_100;
        do {
          if (uVar18 - lVar14 == -1) {
            func_0x0001000834e4(auStack_98);
            goto LAB_103236c84;
          }
          uVar18 = uVar18 + 1;
          if (*(ulong *)(lVar16 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10323703c);
            (*pcVar3)();
          }
          FUN_10323705c(lVar15,apuStack_c0);
          lVar6 = lStack_78;
          uVar2 = uStack_80;
          func_0x0001000a8868(auStack_98,uStack_80);
          lVar5 = 0;
          func_0x000107c614b8(0,lVar6,uVar2,&UNK_10e804840,&UNK_10e804858);
          lVar17 = *(long *)(lVar5 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar19 = auStack_110 + -extraout_x8;
          (**(code **)(lVar6 + 0x28))(puVar19,uVar2,lVar6);
          uVar10 = uStack_a0;
          uVar12 = uStack_a8;
          func_0x0001000a8868(apuStack_c0,uStack_a8);
          func_0x000107c614b4(lVar6,uVar2,lVar5,&UNK_10e804840,&UNK_10e804850);
          puVar7 = puVar19;
          FUN_10322b46c(puVar19,lVar5,uVar12,lVar6,uVar10);
          (**(code **)(lVar17 + 8))(puVar19,lVar5);
          func_0x0001000834e4(apuStack_c0);
          lVar15 = lVar15 + 0x28;
        } while (((ulong)puVar7 & 1) == 0);
        puVar8 = puVar11;
        func_0x000107c61558();
        puStack_70 = puVar11;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_103237a74(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar18 = *(ulong *)(puStack_70 + 0x10);
        if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar18) {
          FUN_103237a74(1 < *(ulong *)(puStack_70 + 0x18),uVar18 + 1,1);
        }
        puVar11 = puStack_70;
        *(ulong *)(puStack_70 + 0x10) = uVar18 + 1;
        FUN_1031ddc20(auStack_98,puStack_70 + uVar18 * 0x28 + 0x20);
LAB_103236c84:
      } while (lVar4 != lStack_f0);
    }
    lVar4 = *(long *)(puVar11 + 0x10);
    if (lVar4 == 0) {
      func_0x000107c61574(puVar11);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_c0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1031ddb68(0,lVar4,0);
      puVar13 = puVar11 + 0x20;
      do {
        puVar1 = apuStack_c0[0];
        FUN_10323705c(puVar13,auStack_98);
        lVar15 = lStack_78;
        uVar12 = uStack_80;
        func_0x0001000a8868(auStack_98,uStack_80);
        puVar8 = &UNK_110629838;
        func_0x000107c613fc(&UNK_110629838,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,unaff_x20);
        puVar9 = &UNK_110629860;
        func_0x000107c613fc(&UNK_110629860,0x30,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar12;
        *(long *)(puVar9 + 0x18) = lVar15;
        *(code **)(puVar9 + 0x20) = FUN_1032370a0;
        *(undefined **)(puVar9 + 0x28) = puVar8;
        func_0x000107c6157c(puVar8);
        uVar10 = 0x1032370a8;
        FUN_103237f50(0x1032370a8,puVar9,uVar12,lVar15);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(puVar9);
        func_0x0001000834e4(auStack_98);
        uVar18 = *(ulong *)(puVar1 + 0x10);
        apuStack_c0[0] = puVar1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar18) {
          FUN_1031ddb68(1 < *(ulong *)(puVar1 + 0x18),uVar18 + 1,1);
        }
        puVar8 = apuStack_c0[0];
        *(ulong *)(apuStack_c0[0] + 0x10) = uVar18 + 1;
        *(undefined8 *)(apuStack_c0[0] + uVar18 * 8 + 0x20) = uVar10;
        puVar13 = puVar13 + 0x28;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      func_0x000107c61574(puVar11);
    }
    puVar11 = PTR_PTR_1126acde8;
    func_0x000107c610f8(PTR_PTR_1126acde8);
    uVar12 = 0;
    FUN_1031ddbdc(0);
    puVar13 = puVar8;
    func_0x000107c5fc48(puVar8,uVar12);
    func_0x000107c6142c(puVar8);
    func_0x000107c4700c(puVar11);
    func_0x000107c61170(puVar13);
    lVar4 = lStack_108;
    func_0x000107c5a588(lStack_108);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar11);
  }
  return;
}



/* Entry: 10323703c; end: 10323705b;  */

void FUN_10323703c(void)

{
  func_0x000107c61168(&PTR_PTR_112f4de58);
  return;
}



/* Entry: 10323705c; end: 10323709f;  */

long FUN_10323705c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1032370a0; end: 1032370db;  */

void FUN_1032370a0(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [40];
  
  pcVar1 = "setRendererViewModel(items:renderingParams:)";
  func_0x0001000c10c0("setRendererViewModel(items:renderingParams:)");
  func_0x000107c61180();
  FUN_10323705c(param_1,auStack_58);
  puVar2 = &UNK_110629888;
  func_0x000107c613fc(&UNK_110629888,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  FUN_1031ddc20(auStack_58,puVar2 + 0x18);
  uStack_68 = 0x1032370b4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_1106298a0;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_60;
  func_0x000107c6157c();
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1032370dc; end: 103237213;  */

long FUN_1032370dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  undefined *puVar2;
  undefined1 auStack_68 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x10,0);
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  lVar1 = param_4;
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c615e8(param_4);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_5);
    func_0x000107c61170(param_3);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126acde0;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(param_4);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_5);
    func_0x000107c61170(param_3);
  }
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  return unaff_x20;
}



/* Entry: 103237214; end: 1032372cf;  */

/* WARNING: Possible PIC construction at 0x0001032372a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032372a4) */

void FUN_103237214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c61174(lVar2);
    func_0x000107c453e4(puVar1);
    func_0x000107c5a568();
    func_0x000107c5381c(0x443b8000,lVar2,param_2,0);
    func_0x000107c537fc(0x443b8000,lVar2,param_2,0);
    func_0x000107c3e2c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1032372d0; end: 103237737;  */

void FUN_1032372d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 != 0) {
    lVar15 = *(long *)(param_1 + 0x10);
    lVar16 = *(long *)(unaff_x20 + 0x28);
    lStack_118 = param_2;
    func_0x000107c61174();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_110 = lVar4;
    lStack_f8 = lVar15;
    if (lVar15 != 0) {
      lVar4 = 0;
      lStack_100 = param_1 + 0x20;
      lStack_108 = lVar16 + 0x20;
      do {
        lVar15 = lVar4 * 0x28;
        lVar4 = lVar4 + 1;
        FUN_103237a30(lStack_100 + lVar15,auStack_98);
        lVar14 = *(long *)(lVar16 + 0x10);
        uVar18 = 0xffffffffffffffff;
        lVar15 = lStack_108;
        do {
          if (uVar18 - lVar14 == -1) {
            func_0x0001000834e4(auStack_98);
            goto LAB_10323734c;
          }
          uVar18 = uVar18 + 1;
          if (*(ulong *)(lVar16 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103237738);
            (*pcVar3)();
          }
          FUN_103237a30(lVar15,apuStack_c0);
          lVar6 = lStack_78;
          uVar2 = uStack_80;
          func_0x0001000a8868(auStack_98,uStack_80);
          lVar5 = 0;
          func_0x000107c614b8(0,lVar6,uVar2,&UNK_10e804840,&UNK_10e804858);
          lVar17 = *(long *)(lVar5 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar19 = auStack_120 + -extraout_x8;
          (**(code **)(lVar6 + 0x28))(puVar19,uVar2,lVar6);
          uVar10 = uStack_a0;
          uVar12 = uStack_a8;
          func_0x0001000a8868(apuStack_c0,uStack_a8);
          func_0x000107c614b4(lVar6,uVar2,lVar5,&UNK_10e804840,&UNK_10e804850);
          puVar7 = puVar19;
          FUN_10322b46c(puVar19,lVar5,uVar12,lVar6,uVar10);
          (**(code **)(lVar17 + 8))(puVar19,lVar5);
          func_0x0001000834e4(apuStack_c0);
          lVar15 = lVar15 + 0x28;
        } while (((ulong)puVar7 & 1) == 0);
        puVar8 = puVar11;
        func_0x000107c61558();
        puStack_70 = puVar11;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_103237a74(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar18 = *(ulong *)(puStack_70 + 0x10);
        if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar18) {
          FUN_103237a74(1 < *(ulong *)(puStack_70 + 0x18),uVar18 + 1,1);
        }
        puVar11 = puStack_70;
        *(ulong *)(puStack_70 + 0x10) = uVar18 + 1;
        FUN_1031ddc20(auStack_98,puStack_70 + uVar18 * 0x28 + 0x20);
LAB_10323734c:
      } while (lVar4 != lStack_f8);
    }
    lVar4 = *(long *)(puVar11 + 0x10);
    if (lVar4 == 0) {
      func_0x000107c61574(puVar11);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_c0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1031ddb68(0,lVar4,0);
      puVar13 = puVar11 + 0x20;
      do {
        puVar1 = apuStack_c0[0];
        FUN_103237a30(puVar13,auStack_98);
        lVar15 = lStack_78;
        uVar12 = uStack_80;
        func_0x0001000a8868(auStack_98,uStack_80);
        puVar8 = &UNK_110629900;
        func_0x000107c613fc(&UNK_110629900,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,unaff_x20);
        puVar9 = &UNK_110629928;
        func_0x000107c613fc(&UNK_110629928,0x30,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar12;
        *(long *)(puVar9 + 0x18) = lVar15;
        *(code **)(puVar9 + 0x20) = FUN_103237bd4;
        *(undefined **)(puVar9 + 0x28) = puVar8;
        func_0x000107c6157c(puVar8);
        uVar10 = 0x103237bdc;
        FUN_103237f50(0x103237bdc,puVar9,uVar12,lVar15);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(puVar9);
        func_0x0001000834e4(auStack_98);
        uVar18 = *(ulong *)(puVar1 + 0x10);
        apuStack_c0[0] = puVar1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar18) {
          FUN_1031ddb68(1 < *(ulong *)(puVar1 + 0x18),uVar18 + 1,1);
        }
        puVar8 = apuStack_c0[0];
        *(ulong *)(apuStack_c0[0] + 0x10) = uVar18 + 1;
        *(undefined8 *)(apuStack_c0[0] + uVar18 * 8 + 0x20) = uVar10;
        puVar13 = puVar13 + 0x28;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      func_0x000107c61574(puVar11);
    }
    puVar11 = PTR_PTR_1126acda8;
    func_0x000107c610f8(PTR_PTR_1126acda8);
    uVar12 = 0;
    FUN_1031ddbdc(0);
    puVar13 = puVar8;
    func_0x000107c5fc48(puVar8,uVar12);
    func_0x000107c6142c(puVar8);
    func_0x000107c4700c(puVar11);
    func_0x000107c61170(puVar13);
    if (*(long *)(lStack_118 + 0x20) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lStack_118 + 0x18);
      func_0x000107c5fadc(uVar12);
    }
    func_0x000107c548c4(puVar11);
    func_0x000107c61170(uVar12);
    lVar4 = lStack_110;
    func_0x000107c5a588(lStack_110);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar11);
  }
  return;
}



/* Entry: 103237738; end: 103237827;  */

void FUN_103237738(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [40];
  
  pcVar1 = "setRendererViewModel(items:renderingParams:)";
  func_0x0001000c10c0("setRendererViewModel(items:renderingParams:)");
  func_0x000107c61180();
  FUN_103237a30(param_1,auStack_58);
  puVar2 = &UNK_110629950;
  func_0x000107c613fc(&UNK_110629950,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  FUN_1031ddc20(auStack_58,puVar2 + 0x18);
  uStack_68 = 0x103237be8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110629968;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_60;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 103237828; end: 10323795f;  */

void FUN_103237828(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
    lVar3 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      lVar4 = lVar3;
      func_0x000107c614f0();
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar1);
      lVar5 = param_2;
      FUN_103237a10();
      ppuStack_88 = &PTR_DAT_1106298d0;
      puVar6 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      alStack_a8[0] = param_1;
      lStack_90 = lVar5;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      func_0x000107c6157c(param_1);
      func_0x000107c453e4(puVar6);
      (**(code **)(lVar7 + 8))(alStack_a8,param_2,0,1,puVar6,uVar1,uVar2,lVar4,lVar7);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(param_1);
      func_0x0001000834e4(alStack_a8);
    }
  }
  return;
}



/* Entry: 103237960; end: 103237993;  */

void FUN_103237960(void)

{
  long unaff_x20;
  
  FUN_1031de120(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103237994; end: 103237a0f;  */

void FUN_103237994(void)

{
  FUN_1032372d0();
  return;
}



/* Entry: 103237a10; end: 103237a2f;  */

void FUN_103237a10(void)

{
  func_0x000107c61168(&PTR_PTR_112f4df10);
  return;
}



/* Entry: 103237a30; end: 103237a73;  */

long FUN_103237a30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103237a74; end: 103237a8f;  */

void FUN_103237a74(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103237a90();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103237a90; end: 103237bd3;  */

undefined * FUN_103237a90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103237bd4);
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
    puVar3 = (undefined *)0x112f4b4c8;
    func_0x0001000285a8(0x112f4b4c8,&UNK_10db9a940);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f4b210;
    func_0x0001000285a8(0x112f4b210,&UNK_10dcf9f80);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103237bd4; end: 103237c23;  */

void FUN_103237bd4(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [40];
  
  pcVar1 = "setRendererViewModel(items:renderingParams:)";
  func_0x0001000c10c0("setRendererViewModel(items:renderingParams:)");
  func_0x000107c61180();
  FUN_103237a30(param_1,auStack_58);
  puVar2 = &UNK_110629950;
  func_0x000107c613fc(&UNK_110629950,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  FUN_1031ddc20(auStack_58,puVar2 + 0x18);
  uStack_68 = 0x103237be8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110629968;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_60;
  func_0x000107c6157c();
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 103237c24; end: 103237c3f;  */

void FUN_103237c24(void)

{
  func_0x000107c5def8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103237c40; end: 103237cd7;  */

void FUN_103237c40(undefined8 param_1)

{
  func_0x000107c5a588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103237cd8; end: 103237daf;  */

undefined8 FUN_103237cd8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return unaff_x20;
}



/* Entry: 103237db0; end: 103237dc3;  */

undefined ** FUN_103237db0(void)

{
  return &PTR_DAT_1106299b8;
}



/* Entry: 103237dc4; end: 103237ddf;  */

void FUN_103237dc4(void)

{
  func_0x000107c5def8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103237de0; end: 103237e77;  */

void FUN_103237de0(undefined8 param_1)

{
  func_0x000107c5a588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103237e78; end: 103237f4f;  */

undefined8 FUN_103237e78(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return unaff_x20;
}



/* Entry: 103237f50; end: 103238223;  */

undefined * FUN_103237f50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_1b0 [12];
  undefined4 uStack_1a4;
  long lStack_1a0;
  undefined4 uStack_194;
  long lStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [224];
  
  lVar11 = *(long *)(param_3 + -8);
  lVar4 = param_4;
  uStack_180 = param_1;
  uStack_178 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  lStack_190 = extraout_x12;
  puStack_188 = auStack_1b0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c614b8(0,lVar4);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_1b0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  (**(code **)(param_4 + 0x28))(lVar10,param_3,param_4);
  lVar4 = param_4;
  func_0x000107c614b4(param_4,param_3,lVar3,&UNK_10e804840,&UNK_10e804850);
  lVar5 = lVar3;
  FUN_103238554(lVar3,lVar4);
  uStack_194 = (undefined4)lVar5;
  (**(code **)(lVar12 + 8))(lVar10,lVar3);
  lVar4 = param_3;
  (**(code **)(param_4 + 0x30))(auStack_140,param_3,param_4);
  FUN_10323827c();
  lStack_1a0 = lVar4;
  func_0x00010322ed34(auStack_140);
  lVar4 = param_3;
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  uStack_1a4 = (undefined4)lVar4;
  lVar4 = param_4;
  (**(code **)(param_4 + 0x48))(param_3);
  if (2 < lVar4 - 1U) {
    func_0x0001031e1b60();
  }
  puVar1 = puStack_188;
  (**(code **)(lVar11 + 0x10))(puStack_188);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar13 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110629a90;
  func_0x000107c613fc(&UNK_110629a90,uVar13 + lStack_190,uVar9 | 7);
  uVar2 = uStack_178;
  *(long *)(puVar6 + 0x10) = param_3;
  *(long *)(puVar6 + 0x18) = param_4;
  *(undefined8 *)(puVar6 + 0x20) = uStack_180;
  *(undefined8 *)(puVar6 + 0x28) = uStack_178;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar13,puVar1,param_3);
  puVar7 = PTR_PTR_1126acdb0;
  func_0x000107c610f8(PTR_PTR_1126acdb0);
  pcStack_150 = FUN_103238224;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0x42000000;
  puStack_160 = &UNK_1000f6b44;
  puStack_158 = &UNK_110629aa8;
  ppuVar8 = &puStack_170;
  puStack_148 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar2);
  lVar4 = lStack_1a0;
  func_0x000107c48eb4(puVar7);
  func_0x000107c61170(lVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puStack_148);
  (**(code **)(param_4 + 0x20))(param_3);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_4);
  }
  func_0x000107c55210(puVar7);
  func_0x000107c61170(param_3);
  return puVar7;
}



/* Entry: 103238224; end: 10323825f;  */

void FUN_103238224(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),
             unaff_x20 + (uVar1 + 0x30 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 103238260; end: 10323827b;  */

void FUN_103238260(long param_1,long param_2)

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



/* Entry: 10323827c; end: 1032383e7;  */

undefined * FUN_10323827c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  puVar2 = PTR_PTR_1126acdf0;
  func_0x000107c610f8(PTR_PTR_1126acdf0);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c48d70(puVar2);
  func_0x000107c61170(uVar3);
  uStack_88 = unaff_x20[0x12];
  uStack_90 = unaff_x20[0x11];
  uStack_78 = unaff_x20[0x14];
  uStack_80 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x15];
  uStack_68 = (undefined1)unaff_x20[0x16];
  uStack_5f = *(undefined8 *)((long)unaff_x20 + 0xb9);
  uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xb1);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xb1) >> 0x38);
  uStack_c8 = unaff_x20[10];
  uStack_d0 = unaff_x20[9];
  uStack_b8 = unaff_x20[0xc];
  uStack_c0 = unaff_x20[0xb];
  uStack_a8 = unaff_x20[0xe];
  uStack_b0 = unaff_x20[0xd];
  uStack_98 = unaff_x20[0x10];
  uStack_a0 = unaff_x20[0xf];
  uStack_f8 = unaff_x20[4];
  uStack_100 = unaff_x20[3];
  uStack_e8 = unaff_x20[6];
  uStack_f0 = unaff_x20[5];
  uStack_d8 = unaff_x20[8];
  uStack_e0 = unaff_x20[7];
  puVar5 = &uStack_100;
  FUN_103233944();
  if ((int)puVar5 == 1) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_1032383e8();
  }
  func_0x000107c55258(puVar2);
  func_0x000107c61170(puVar5);
  lVar4 = unaff_x20[2];
  if (lVar4 != 0) {
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    func_0x000107c59a9c(puVar2);
    func_0x000107c61170(lVar4);
  }
  return puVar2;
}



/* Entry: 1032383e8; end: 103238537;  */

undefined * FUN_1032383e8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  iVar1 = (int)&uStack_e0;
  puVar5 = &uStack_e0;
  puVar2 = PTR_PTR_1126acdf8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000104411f90();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c45160();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x000107c30e3c(puVar4);
      func_0x000107c61180();
      func_0x000107c5292c(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
  }
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_50 = unaff_x20[0x12];
  uStack_48 = (undefined1)unaff_x20[0x13];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0xa1);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x99);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x99) >> 0x38);
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  FUN_103238538();
  if (iVar1 == 6) {
    func_0x000103238544();
    uVar6 = *puVar5;
    func_0x000107c5fadc(uVar6,puVar5[1]);
    func_0x000107c5975c(puVar2);
    func_0x000107c61170(uVar6);
  }
  puVar3 = puVar2;
  func_0x000107c3e214();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5b9c0();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61170(puVar2);
      return (undefined *)0x0;
    }
  }
  func_0x000107c61170();
  return puVar2;
}



/* Entry: 103238538; end: 103238553;  */

byte FUN_103238538(long param_1)

{
  return *(byte *)(param_1 + 0xa8) >> 5;
}



/* Entry: 103238554; end: 103238ba3;  */

undefined8 FUN_103238554(long param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  lVar4 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar2);
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076ac50,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076ad50,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 1;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076af50,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 2;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b050,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 3;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b550,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 4;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b0d0,0);
  if ((int)puVar1 != 0) goto LAB_1032386bc;
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b650,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 6;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b1d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 7;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b4d0,0);
  if ((int)puVar1 != 0) {
LAB_10323874c:
    func_0x000107c6142c(uStack_40);
    uVar3 = 8;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b450,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 9;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076acd0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 10;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b3d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0xb;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b750,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0xc;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b7d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x20;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076add0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0xd;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076ae50,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x1a;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076aed0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0xe;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b250,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0xf;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b2d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x10;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b6d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x11;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b5d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x13;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b850,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x12;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b8d0,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x14;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b950,0);
  if ((int)puVar1 != 0) {
    func_0x000107c6142c(uStack_40);
    uVar3 = 0x15;
    goto LAB_103238a28;
  }
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b150,0);
  if ((int)puVar1 == 0) {
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076ba50,0);
    if ((int)puVar1 != 0) {
      func_0x000107c6142c(uStack_40);
      uVar3 = 0x19;
      goto LAB_103238a28;
    }
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076afd0,0);
    if ((int)puVar1 != 0) {
      func_0x000107c6142c(uStack_40);
      uVar3 = 0x1b;
      goto LAB_103238a28;
    }
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076bb50,0);
    if ((int)puVar1 != 0) goto LAB_1032386bc;
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b350,0);
    if ((int)puVar1 != 0) {
      func_0x000107c6142c(uStack_40);
      uVar3 = 0x1c;
      goto LAB_103238a28;
    }
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b9d0,0);
    if ((int)puVar1 != 0) {
      func_0x000107c6142c(uStack_40);
      uVar3 = 0x1d;
      goto LAB_103238a28;
    }
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076bad0,0);
    if ((int)puVar1 != 0) {
      func_0x000107c6142c(uStack_40);
      uVar3 = 0x1e;
      goto LAB_103238a28;
    }
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076bc50,0);
    if ((int)puVar1 != 0) goto LAB_10323874c;
  }
  else {
LAB_1032386bc:
    func_0x000107c6142c(uStack_40);
  }
  uVar3 = 5;
LAB_103238a28:
  (**(code **)(lVar4 + 8))(puVar2,param_1);
  return uVar3;
}



/* Entry: 103238ba4; end: 103238d33;  */

void FUN_103238ba4(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x12;
  long extraout_x13;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_5 + -8);
  lStack_78 = param_5;
  uStack_70 = param_8;
  uStack_68 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar2 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar5 = lVar2 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x13 + 0x10))(lVar5,extraout_x12);
  lVar1 = lVar5;
  (**(code **)(lVar3 + 0x30))(lVar5,1,lVar7);
  if ((int)lVar1 == 1) {
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar2,lVar5,lVar7);
    (*param_2)(param_1,lVar2,puVar4);
    (**(code **)(lVar3 + 8))(lVar2,lVar7);
    if (unaff_x21 != 0) {
      (**(code **)(lVar6 + 0x20))(uStack_70,puVar4,lStack_78);
    }
  }
  return;
}



/* Entry: 103238d34; end: 103238d9f;  */

undefined8 FUN_103238d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_1032396d0();
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x50),
                      &UNK_10e751ad0,&UNK_10e751ae8);
  lVar2 = 0;
  func_0x000107c60188(0,uVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_3,lVar2);
  return param_1;
}



/* Entry: 103238da0; end: 103238e7f;  */

void FUN_103238da0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,param_5,param_4,&UNK_10e751ad0,&UNK_10e751ae8);
  func_0x000107c60188(0,uVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar3 = *param_2;
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x12,param_3);
  pcVar2 = *(code **)(param_5 + 0x40);
  func_0x000107c615f0(uVar3);
  uVar1 = 0;
  (*pcVar2)(0,&stack0xffffffffffffffb0 + -extraout_x12,uVar3,param_4,param_5);
  *param_1 = uVar1;
  return;
}



/* Entry: 103238e80; end: 103238f53;  */

/* WARNING: Possible PIC construction at 0x000103238f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103238f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103238f14) */
/* WARNING: Removing unreachable block (ram,0x000103238f28) */

void FUN_103238e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c61174(lVar2);
    func_0x000107c453e4(puVar1);
    func_0x000107c61174(lVar2);
    func_0x000107c5a568(puVar1,param_2,lVar2);
    func_0x000107c5381c(0x443b8000,lVar2,param_2,0);
    func_0x000107c537fc(0x443b8000,lVar2,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103238f54; end: 103238f57;  */

/* WARNING: Possible PIC construction at 0x000103239134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103239168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103239138) */
/* WARNING: Removing unreachable block (ram,0x00010323916c) */

void FUN_103238f54(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar6 = (undefined *)unaff_x20[4];
  if (puVar6 == (undefined *)0x0) {
    return;
  }
  lVar10 = *unaff_x20;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c61174(puVar6);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(puVar6);
    FUN_1031ddb68(0,lVar8,0);
    param_1 = param_1 + 0x20;
    do {
      puVar3 = puStack_68;
      FUN_103239190(&uStack_70,param_1);
      uVar7 = uStack_70;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1031ddb68(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 8 + 0x20) = uVar7;
      param_1 = param_1 + 0x28;
      lVar8 = lVar8 + -1;
      puVar3 = puStack_68;
    } while (lVar8 != 0);
  }
  uVar7 = *(undefined8 *)(lVar10 + 0x50);
  lVar8 = *(long *)(lVar10 + 0x58);
  uVar2 = 0;
  func_0x000107c614b8(0,lVar8,uVar7,&UNK_10e751ad0,&UNK_10e751ae0);
  lVar10 = lVar8;
  func_0x000107c614b4(lVar8,uVar7,uVar2,&UNK_10e751ad0,&UNK_10e751ad8);
  (**(code **)(lVar10 + 8))(puVar3,uVar2,lVar10);
  puVar4 = PTR_PTR_1126acda8;
  func_0x000107c61168(PTR_PTR_1126acda8);
  puVar5 = puVar3;
  func_0x000107c6148c(puVar3,puVar4);
  if (puVar5 == (undefined *)0x0) {
    pcVar9 = *(code **)(lVar8 + 0x30);
    func_0x000107c61174(puVar3);
    (*pcVar9)(puVar3,uVar7,lVar8);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 == 0) {
      func_0x000107c61174(puVar3);
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      func_0x000107c61174(puVar3);
      func_0x000107c5fadc(uVar7,lVar8);
    }
    func_0x000107c548c4(puVar5);
    puVar6 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 103238f58; end: 10323918f;  */

/* WARNING: Possible PIC construction at 0x000103239134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103239168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103239138) */
/* WARNING: Removing unreachable block (ram,0x00010323916c) */

void FUN_103238f58(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar6 = (undefined *)unaff_x20[4];
  if (puVar6 == (undefined *)0x0) {
    return;
  }
  lVar10 = *unaff_x20;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c61174(puVar6);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(puVar6);
    FUN_1031ddb68(0,lVar8,0);
    param_1 = param_1 + 0x20;
    do {
      puVar3 = puStack_68;
      FUN_103239190(&uStack_70,param_1);
      uVar7 = uStack_70;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1031ddb68(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 8 + 0x20) = uVar7;
      param_1 = param_1 + 0x28;
      lVar8 = lVar8 + -1;
      puVar3 = puStack_68;
    } while (lVar8 != 0);
  }
  uVar7 = *(undefined8 *)(lVar10 + 0x50);
  lVar8 = *(long *)(lVar10 + 0x58);
  uVar2 = 0;
  func_0x000107c614b8(0,lVar8,uVar7,&UNK_10e751ad0,&UNK_10e751ae0);
  lVar10 = lVar8;
  func_0x000107c614b4(lVar8,uVar7,uVar2,&UNK_10e751ad0,&UNK_10e751ad8);
  (**(code **)(lVar10 + 8))(puVar3,uVar2,lVar10);
  puVar4 = PTR_PTR_1126acda8;
  func_0x000107c61168(PTR_PTR_1126acda8);
  puVar5 = puVar3;
  func_0x000107c6148c(puVar3,puVar4);
  if (puVar5 == (undefined *)0x0) {
    pcVar9 = *(code **)(lVar8 + 0x30);
    func_0x000107c61174(puVar3);
    (*pcVar9)(puVar3,uVar7,lVar8);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 == 0) {
      func_0x000107c61174(puVar3);
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      func_0x000107c61174(puVar3);
      func_0x000107c5fadc(uVar7,lVar8);
    }
    func_0x000107c548c4(puVar5);
    puVar6 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 103239190; end: 10323929f;  */

void FUN_103239190(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *param_3;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  puVar3 = &UNK_110629be0;
  func_0x000107c613fc(&UNK_110629be0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_3);
  puVar4 = &UNK_110629c08;
  func_0x000107c613fc(&UNK_110629c08,0x28,7);
  uVar9 = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  uVar7 = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  puVar5 = &UNK_110629c30;
  func_0x000107c613fc(&UNK_110629c30,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined8 *)(puVar5 + 0x30) = 0x10323979c;
  *(undefined **)(puVar5 + 0x38) = puVar4;
  func_0x000107c6157c(puVar3);
  pcVar6 = FUN_1032397a8;
  FUN_103237f50(FUN_1032397a8,puVar5,uVar1,uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar5);
  *param_1 = pcVar6;
  return;
}



/* Entry: 1032392a0; end: 1032393a3;  */

void FUN_1032392a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [40];
  
  pcVar1 = "setRendererViewModel(items:renderingParams:)";
  func_0x0001000c10c0("setRendererViewModel(items:renderingParams:)");
  func_0x000107c61180();
  FUN_1031ddb84(param_1,auStack_68);
  puVar2 = &UNK_110629c58;
  func_0x000107c613fc(&UNK_110629c58,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  FUN_1031ddc20(auStack_68,puVar2 + 0x28);
  pcStack_78 = FUN_103239810;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_110629c70;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_70;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1032393a4; end: 1032394f7;  */

void FUN_1032393a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
    lVar3 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      lVar4 = lVar3;
      func_0x000107c614f0();
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar1);
      uVar5 = 0;
      FUN_103239790(0,param_3,param_4);
      ppuStack_98 = &PTR_DAT_110629ad0;
      puVar6 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      alStack_b8[0] = param_1;
      uStack_a0 = uVar5;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      func_0x000107c6157c(param_1);
      func_0x000107c453e4(puVar6);
      (**(code **)(lVar7 + 8))(alStack_b8,param_2,0,1,puVar6,uVar1,uVar2,lVar4,lVar7);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(param_1);
      func_0x0001000834e4(alStack_b8);
    }
  }
  return;
}



/* Entry: 1032394f8; end: 103239523;  */

void FUN_1032394f8(void)

{
  long unaff_x20;
  
  FUN_1031de120(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103239524; end: 103239563;  */

void FUN_103239524(void)

{
  FUN_103238f54();
  return;
}



/* Entry: 103239564; end: 10323956f;  */

undefined1 FUN_103239564(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + 0x28);
}



/* Entry: 103239570; end: 1032396cf;  */

/* WARNING: Removing unreachable block (ram,0x0001032396b0) */

void FUN_103239570(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *unaff_x20;
  unaff_x20[3] = 0;
  func_0x000107c61614(unaff_x20 + 2,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x58);
  uVar2 = uVar1;
  (**(code **)(lVar4 + 0x20))(uVar1,lVar4);
  *(char *)(unaff_x20 + 5) = (char)uVar2;
  func_0x000107c61428(unaff_x20 + 2,auStack_78,1,0);
  unaff_x20[3] = param_2;
  func_0x000107c61604(unaff_x20 + 2,param_1);
  uVar3 = param_4;
  func_0x000107c509b4();
  func_0x000107c61180();
  uVar2 = 0x112d51a60;
  uStack_a0 = uVar1;
  lStack_98 = lVar4;
  uStack_90 = param_3;
  uStack_88 = uVar3;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  FUN_103238ba4(&lStack_80,FUN_10323983c,auStack_b0,uVar2,PTR___ss5NeverON_11034ee88,uVar1,
                PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_5);
  unaff_x20[4] = lStack_80;
  return;
}



/* Entry: 1032396d0; end: 103239737;  */

void FUN_1032396d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c613fc();
  FUN_103239570(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 103239738; end: 10323973b;  */

void FUN_103239738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10323973c; end: 10323978f;  */

void FUN_10323973c(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = &UNK_10dba07f0;
  puStack_20 = &UNK_10dba0808;
  puStack_18 = &UNK_10dba0820;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x60);
  return;
}



/* Entry: 103239790; end: 1032397a7;  */

void FUN_103239790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7519f8);
  return;
}



/* Entry: 1032397a8; end: 10323980f;  */

void FUN_1032397a8(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  lStack_40 = lVar2;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
  (*pcVar1)(auStack_58);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103239810; end: 10323983b;  */

void FUN_103239810(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lVar7 = unaff_x20 + 0x28;
  func_0x000107c61428(lVar10 + 0x10,auStack_78,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61648();
  if (lVar10 != 0) {
    func_0x000107c61428(lVar10 + 0x10,auStack_90,0,0);
    lVar5 = lVar10 + 0x10;
    func_0x000107c61618();
    if (lVar5 == 0) {
      func_0x000107c61574(lVar10);
    }
    else {
      lVar11 = *(long *)(lVar10 + 0x18);
      lVar6 = lVar5;
      func_0x000107c614f0();
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
      func_0x0001000a8868(lVar7,uVar1);
      uVar8 = 0;
      FUN_103239790(0,uVar2,uVar4);
      ppuStack_98 = &PTR_DAT_110629ad0;
      puVar9 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      alStack_b8[0] = lVar10;
      uStack_a0 = uVar8;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      func_0x000107c6157c(lVar10);
      func_0x000107c453e4(puVar9);
      (**(code **)(lVar11 + 8))(alStack_b8,lVar7,0,1,puVar9,uVar1,uVar3,lVar6,lVar11);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c61574(lVar10);
      func_0x0001000834e4(alStack_b8);
    }
  }
  return;
}



/* Entry: 10323983c; end: 10323985b;  */

void FUN_10323983c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103238da0(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),param_2);
  return;
}



/* Entry: 10323985c; end: 1032399a7;  */

void FUN_10323985c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = 0xff;
  uStack_68 = param_3;
  func_0x000107c614b8(0xff,uVar1,uVar6,&UNK_10e751ad0,&UNK_10e751ae8);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar7,1,1,lVar2);
  }
  else {
    func_0x0001000d224c(puVar7);
  }
  uVar4 = 0;
  FUN_103239790(0,uVar6,uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0();
  FUN_1032396d0();
  (**(code **)(lVar5 + 8))(puVar7,lVar3);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_110629ad0;
  *param_1 = param_2;
  return;
}



/* Entry: 1032399a8; end: 1032399ef;  */

void FUN_1032399a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = 0xff;
  uStack_68 = param_3;
  func_0x000107c614b8(0xff,uVar1,uVar6,&UNK_10e751ad0,&UNK_10e751ae8);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar7,1,1,lVar2);
  }
  else {
    func_0x0001000d224c(puVar7);
  }
  uVar4 = 0;
  FUN_103239790(0,uVar6,uVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0();
  FUN_1032396d0();
  (**(code **)(lVar5 + 8))(puVar7,lVar3);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_110629ad0;
  *param_1 = param_2;
  return;
}



/* Entry: 1032399f0; end: 103239a53;  */

long FUN_1032399f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103239a54; end: 103239b4b;  */

undefined2 * FUN_103239a54(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  func_0x000107c61434();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 103239b4c; end: 103239ba7;  */

undefined2 * FUN_103239b4c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(*(undefined8 *)(param_1 + 4));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(*(undefined8 *)(param_1 + 0xc));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103239ba8; end: 103239c5b;  */

int FUN_103239ba8(int *param_1,int param_2)

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



/* Entry: 103239c5c; end: 103239c9b;  */

void FUN_103239c5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba0928;
  func_0x000107c61520(&UNK_10dba0928,&UNK_110629de8);
  puRam0000000112f4e168 = puVar1;
  return;
}



/* Entry: 103239c9c; end: 103239d47;  */

void FUN_103239c9c(void)

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



/* Entry: 103239d48; end: 103239d6f;  */

void FUN_103239d48(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103239d70; end: 103239dbf;  */

void FUN_103239d70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4e170 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4e178;
  func_0x00010002969c(0x112f4e178,&UNK_10dba09c8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f4e170 = puVar2;
  return;
}



/* Entry: 103239dc0; end: 103239dff;  */

void FUN_103239dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f4e160;
  func_0x0001000285a8(0x112f4e160,&UNK_10dba0920);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103239e00; end: 103239f63;  */

int FUN_103239e00(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103239e7c;
        goto LAB_103239e60;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103239e60:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103239e7c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103239f64; end: 10323a0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103239f64(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  func_0x0001000285a8(0x112f4e1b8,&UNK_10dba0a80);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x0001000bdd8c(param_1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f4e1b0) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  return puVar1;
}



/* Entry: 10323a0cc; end: 10323a12b; -[SCContextActionItemsConfigurationServices init] */

void FUN_10323a0cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextActionItemsConfigurationServices.SCContextActionItemsConfigurationServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10323a0f8);
  (*pcVar1)();
}



/* Entry: 10323a12c; end: 10323a13b; -[SCContextActionItemsConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323a12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4e1b0));
  return;
}



/* Entry: 10323a13c; end: 10323a15b;  */

void FUN_10323a13c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c29a0);
  return;
}



/* Entry: 10323a15c; end: 10323a1db;  */

void FUN_10323a15c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  puVar1 = &UNK_110629f28;
  func_0x000107c613fc(&UNK_110629f28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10323a1dc,puVar1);
  return;
}



/* Entry: 10323a1dc; end: 10323a3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323a1dc(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  char cStack_51;
  
  func_0x000100083b20(&puStack_88);
  puVar1 = puStack_88;
  lVar4 = _DAT_1130778f0;
  iVar3 = (int)*(undefined8 *)(puStack_88 + _DAT_1130778f0);
  func_0x000108437a30();
  lVar4 = *(long *)(puVar1 + lVar4);
  func_0x000107c61174();
  if (iVar3 != 0) {
    lVar5 = lVar4;
    func_0x000107c42e84();
    func_0x000107c61180();
    if (lVar5 != 0) {
      cStack_51 = '\0';
      puVar6 = &UNK_110629f70;
      func_0x000107c613fc(&UNK_110629f70,0x18,7);
      *(char **)(puVar6 + 0x10) = &cStack_51;
      puVar7 = &UNK_110629f98;
      uVar9 = 0x20;
      func_0x000107c613fc(&UNK_110629f98,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x10323a3d4;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      pcStack_68 = FUN_10323a3e0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_102bb8b54;
      puStack_70 = &UNK_110629fb0;
      ppuVar8 = &puStack_88;
      puStack_60 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_60);
      func_0x000107c4c6a4(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c60bd0(ppuVar8);
      cVar2 = cStack_51;
      func_0x000107c61574(puVar6);
      func_0x000107c61170(lVar4);
      if (cVar2 == '\x01') {
        func_0x000100083b20(&puStack_88);
        puVar6 = puStack_88;
        uVar10 = *(undefined8 *)(puStack_88 + _DAT_113012fb8);
        func_0x000107c6157c(uVar10);
        func_0x000107c61170(puVar6);
        FUN_10323bda4();
        param_1[3] = &UNK_11062a330;
        param_1[4] = &PTR_DAT_112f4e238;
        func_0x000107c61170(puVar1);
        *param_1 = uVar10;
        param_1[1] = uVar9;
        return;
      }
      goto LAB_10323a394;
    }
  }
  func_0x000107c61170(lVar4);
LAB_10323a394:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10323a3c4; end: 10323a3df;  */

undefined1  [16] FUN_10323a3c4(void)

{
  return ZEXT816(0x110629f50);
}



/* Entry: 10323a3e0; end: 10323a417;  */

void FUN_10323a3e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10323a418; end: 10323a433;  */

void FUN_10323a418(long param_1,long param_2)

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



/* Entry: 10323a434; end: 10323a533;  */

/* WARNING: Possible PIC construction at 0x00010323a458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010323a468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010323a45c) */
/* WARNING: Removing unreachable block (ram,0x00010323a46c) */

void FUN_10323a434(long param_1)

{
  func_0x00010404c450();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10323a534; end: 10323a55b;  */

void FUN_10323a534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93370();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10323a55c; end: 10323a5df;  */

long FUN_10323a55c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4c648;
  func_0x0001000285a8(0x112f4c648,&UNK_10db9d6d0);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 10323a5e0; end: 10323a61f;  */

void FUN_10323a5e0(void)

{
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c45114(0x403b000000000000,0x403b000000000000,0,0,0,0x4014000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10323a620; end: 10323a707;  */

void FUN_10323a620(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_2 + 0x38);
  lVar1 = *(long *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  puVar2 = &UNK_10dba0c78;
  func_0x000107c614e0(&UNK_10dba0c78);
  if (lVar1 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(lVar1);
    lVar4 = lVar1;
    FUN_10323b3a8(lVar3,lVar1,uVar5,puVar2);
    func_0x000107c6142c(lVar1);
    func_0x000107c61574(puVar2);
    if (((uint)lVar4 & 0xff) != 1) {
      *param_1 = 0;
      if (lVar3 == 2) {
        param_1[1] = 2;
        return;
      }
      if (lVar3 != 1) {
        if (lVar3 == 0) {
          param_1[1] = 1;
          return;
        }
        param_1[1] = 4;
        return;
      }
      param_1[1] = 3;
      return;
    }
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}



/* Entry: 10323a708; end: 10323a903;  */

void FUN_10323a708(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_d0 = param_2[6];
  puVar7 = &UNK_10dba0c10;
  func_0x000107c614e0(&UNK_10dba0c10);
  uVar6 = uStack_d8;
  uVar5 = uStack_e0;
  uVar4 = uStack_e8;
  uVar3 = uStack_f0;
  lVar2 = lStack_f8;
  uVar1 = uStack_100;
  if (lStack_f8 == 0) {
    func_0x000107c61574();
    *param_1 = 0;
    func_0x000107c614e0(&UNK_10dba0c30);
    func_0x000107c61574();
    param_1[1] = 0;
    func_0x000107c614e0(&UNK_10dba0c50);
    func_0x000107c61574();
    puVar8 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uStack_100;
    lStack_90 = lStack_f8;
    uStack_88 = uStack_f0;
    uStack_80 = uStack_e8;
    uStack_78 = uStack_e0;
    uStack_70 = uStack_d8;
    func_0x000107c61434(lStack_f8);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar6);
    puVar8 = &uStack_98;
    FUN_10323ad3c(puVar8,&uStack_100,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
    puVar7 = &UNK_10dba0c30;
    func_0x000107c614e0(&UNK_10dba0c30);
    *param_1 = (byte)puVar8 & 1;
    uStack_c8 = uVar1;
    lStack_c0 = lVar2;
    uStack_b8 = uVar3;
    uStack_b0 = uVar4;
    uStack_a8 = uVar5;
    uStack_a0 = uVar6;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar6);
    puVar8 = &uStack_c8;
    FUN_10323ad3c(puVar8,&uStack_100,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
    puVar7 = &UNK_10dba0c50;
    func_0x000107c614e0(&UNK_10dba0c50);
    param_1[1] = (byte)puVar8 & 1;
    uStack_130 = uVar1;
    lStack_128 = lVar2;
    uStack_120 = uVar3;
    uStack_118 = uVar4;
    uStack_110 = uVar5;
    uStack_108 = uVar6;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar6);
    puVar8 = &uStack_130;
    puVar9 = &uStack_100;
    FUN_10323ac24(puVar8,puVar9,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
  }
  *(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 0x10) = puVar9;
  return;
}



/* Entry: 10323a904; end: 10323a973;  */

ulong FUN_10323a904(char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  if ((*param_1 == *param_2) && (((param_1[1] ^ param_2[1]) & 1U) == 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_2 + 0x10);
    uVar1 = (ulong)(lVar3 == 0 && lVar2 == 0);
    if (lVar3 != 0 && lVar2 != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      if (uVar1 != *(ulong *)(param_2 + 8) || lVar3 != lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar1,lVar3,*(ulong *)(param_2 + 8),lVar2,0);
        return uVar1;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 10323a974; end: 10323ab93;  */

void FUN_10323a974(undefined8 param_1,ulong param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 uStack_4c0;
  ulong uStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
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
  undefined8 uStack_3ff;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined2 uStack_3c8;
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
  undefined8 uStack_30f;
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
  undefined8 uStack_25f;
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
  undefined8 uStack_1af;
  undefined1 auStack_1a0 [320];
  
  if ((param_2 & 1) == 0) {
    func_0x0001031f4750(auStack_1a0);
  }
  else {
    puVar6 = param_3;
    FUN_10323d648();
    if (param_5 != (undefined8 *)0x0) {
      uVar1 = param_4 & 0xffffffffffff;
      if (((ulong)param_5 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)param_5 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c61434(param_5);
        func_0x000107c6142c(puVar6);
        param_2 = param_4;
        puVar6 = param_5;
      }
    }
    uStack_3b0 = param_6;
    uStack_3a8 = param_6;
    func_0x0001031e8a28(&uStack_3b0);
    uStack_278 = uStack_328;
    uStack_280 = uStack_330;
    uStack_270 = uStack_320;
    uStack_25f = uStack_30f;
    uStack_2b8 = uStack_368;
    uStack_2c0 = uStack_370;
    uStack_2a8 = uStack_358;
    uStack_2b0 = uStack_360;
    uStack_298 = uStack_348;
    uStack_2a0 = uStack_350;
    uStack_288 = uStack_338;
    uStack_290 = uStack_340;
    uStack_2f8 = uStack_3a8;
    uStack_300 = uStack_3b0;
    uStack_2e8 = uStack_398;
    uStack_2f0 = uStack_3a0;
    uStack_2d8 = uStack_388;
    uStack_2e0 = uStack_390;
    uStack_2c8 = uStack_378;
    uStack_2d0 = uStack_380;
    func_0x0001031e6100(&uStack_300);
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1c0 = uStack_270;
    uStack_1af = uStack_25f;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_248 = uStack_2f8;
    uStack_250 = uStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    func_0x000107c61174(param_6);
    func_0x000107c61174();
    puVar4 = puVar6;
    func_0x000107c61434();
    func_0x000103b812e8();
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    func_0x000101c68d90(0);
    func_0x000107c61434(uVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5ff4c();
    if (((ulong)param_3 & 1) == 0) {
      param_7 = 0;
      param_8 = 1;
    }
    else {
      func_0x0001032098fc(param_7,param_8);
    }
    func_0x000107c6142c(puVar6);
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0x6172656d6163;
    uStack_4c8 = 0xe600000000000000;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_418 = uStack_1c8;
    uStack_420 = uStack_1d0;
    uStack_410 = uStack_1c0;
    uStack_3ff = uStack_1af;
    uStack_458 = uStack_208;
    uStack_460 = uStack_210;
    uStack_448 = uStack_1f8;
    uStack_450 = uStack_200;
    uStack_438 = uStack_1e8;
    uStack_440 = uStack_1f0;
    uStack_428 = uStack_1d8;
    uStack_430 = uStack_1e0;
    uStack_498 = uStack_248;
    uStack_4a0 = uStack_250;
    uStack_488 = uStack_238;
    uStack_490 = uStack_240;
    uStack_478 = uStack_228;
    uStack_480 = uStack_230;
    uStack_468 = uStack_218;
    uStack_470 = uStack_220;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3c8 = 0x302;
    uStack_4b8 = param_2;
    puStack_4b0 = puVar6;
    uStack_3e0 = uVar2;
    uStack_3d8 = uVar3;
    puStack_3d0 = puVar5;
    uStack_3c0 = param_7;
    uStack_3b8 = param_8;
    FUN_1031ee258(&uStack_4e0);
    func_0x000107c610b4(auStack_1a0,&uStack_4e0,0x130);
  }
  func_0x000107c610b4(param_1,auStack_1a0,0x130);
  return;
}



/* Entry: 10323ab94; end: 10323abe7;  */

void FUN_10323ab94(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_150 [304];
  
  FUN_10323a974(auStack_150,*param_2,param_2[1],*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  func_0x000107c610b4(param_1,auStack_150,0x130);
  return;
}



/* Entry: 10323abe8; end: 10323abeb;  */

code * FUN_10323abe8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  pcVar1 = FUN_10323a620;
  func_0x0001000d5158(FUN_10323a620,0,&UNK_11076a6f0);
  uStack_48 = 1;
  uStack_50 = 0;
  func_0x0001006c71a4(&uStack_50);
  func_0x000107c61574(pcVar1);
  FUN_1032090e0();
  func_0x0001000c2068();
  func_0x000107c61574(puVar2);
  uVar5 = 0x112f4e230;
  func_0x0001000285a8(0x112f4e230,&UNK_10dba0c08);
  pcVar3 = FUN_10323a708;
  func_0x0001000bfde0(FUN_10323a708,0,uVar5);
  pcVar4 = FUN_10323a904;
  func_0x00010487de38(FUN_10323a904,0);
  func_0x000107c61574(pcVar3);
  puVar2 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar5 = *puVar2;
  func_0x000107c61174(uVar5);
  pcVar3 = FUN_10323a5e0;
  FUN_10326d7dc(FUN_10323a5e0,0,uVar5);
  func_0x000107c61170(uVar5);
  pcVar6 = pcVar3;
  func_0x00010061da28(pcVar3,pcVar1);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar3);
  uVar5 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar3 = FUN_10323ab94;
  func_0x0001000bfde0(FUN_10323ab94,0,uVar5);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(pcVar6);
  return pcVar3;
}



/* Entry: 10323abec; end: 10323ac23;  */

undefined * FUN_10323abec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_10321019c();
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



/* Entry: 10323ac24; end: 10323ad3b;  */

undefined1  [16] FUN_10323ac24(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  iVar1 = (int)&uStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(&uStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_b0,&uStack_90,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  auVar5._8_8_ = uStack_a8;
  auVar5._0_8_ = uStack_b0;
  return auVar5;
}



/* Entry: 10323ad3c; end: 10323ae53;  */

undefined1 FUN_10323ad3c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [32];
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
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 2;
  }
  return auStack_b0[0];
}


