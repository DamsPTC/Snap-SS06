/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dcd8ac; end: 101dcd8c3;  */

void FUN_101dcd8ac(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4d80c(uVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126a9590;
    func_0x000107c610f8();
    func_0x000107c47a9c();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcd85c);
  (*pcVar1)();
}



/* Entry: 101dcd8c4; end: 101dcd8e7;  */

void FUN_101dcd8c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcd8e8; end: 101dcd8f7;  */

void FUN_101dcd8e8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dcd8f8; end: 101dcd963;  */

void FUN_101dcd8f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dcd964; end: 101dcda9f;  */

undefined8 FUN_101dcd964(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d627d8,&UNK_10d9285c0);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  puVar1 = &UNK_1104865e8;
  func_0x000107c613fc(&UNK_1104865e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  uVar2 = uVar3;
  func_0x000104889654(uVar3,1,0x101dd2e28,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_110486250;
  func_0x000107c613fc(&UNK_110486250,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar3 = uStack_58;
  func_0x0001048898b8(uStack_58,1,0x101dd2e40,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  return uVar3;
}



/* Entry: 101dcdaa0; end: 101dcdd4f;  */

void FUN_101dcdaa0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar8 = *(undefined1 **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    puVar7 = param_2;
  }
  else {
    puVar8 = (undefined1 *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_2) {
      puVar8 = param_2;
    }
    func_0x000107c60480();
    puVar7 = puVar8;
  }
  if (puVar8 == (undefined1 *)0x0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,puVar7,0,0);
    *puVar7 = 0xf;
    func_0x000107c61654();
  }
  else {
    if (((ulong)param_2 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcdd50);
        (*pcVar1)();
      }
      puVar7 = *(undefined1 **)(param_2 + 0x20);
      func_0x000107c615f0(puVar7);
    }
    else {
      puVar7 = (undefined1 *)0x0;
      param_3 = param_2;
      func_0x000100fb0ba0();
    }
    puVar11 = puVar7;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (puVar11 == (undefined1 *)0x0) {
      func_0x000101dcff70();
      func_0x000107c613f8(&UNK_1106c3ba0,puVar11,0,0);
      *puVar11 = 0x10;
      func_0x000107c61654();
      func_0x000107c615e8(puVar7);
    }
    else {
      puVar2 = puVar11;
      func_0x000107c5faec();
      puVar4 = param_3;
      func_0x000107c61170(puVar11);
      lVar6 = 4;
      do {
        puVar11 = (undefined1 *)(lVar6 + -4);
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined1 **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcdccc);
            (*pcVar1)();
          }
          puVar10 = *(undefined1 **)(param_2 + lVar6 * 8);
          func_0x000107c615f0(puVar10);
          puVar5 = puVar4;
        }
        else {
          puVar10 = puVar11;
          puVar5 = param_2;
          func_0x000100fb0ba0();
        }
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dcdcc8);
          (*pcVar1)();
        }
        puVar9 = (undefined1 *)(lVar6 + -3);
        puVar11 = puVar10;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (puVar11 == (undefined1 *)0x0) {
LAB_101dcdc24:
          func_0x000107c6142c();
          func_0x000101dcff70();
          func_0x000107c613f8(&UNK_1106c3ba0,param_3,0,0);
          *param_3 = 0xe;
          func_0x000107c61654();
          func_0x000107c615e8(puVar7);
          func_0x000107c615e8(puVar10);
          return;
        }
        puVar3 = puVar11;
        func_0x000107c5faec();
        puVar4 = puVar5;
        func_0x000107c61170(puVar11);
        if ((puVar3 == puVar2) && (puVar5 == param_3)) {
          func_0x000107c615e8(puVar10);
          func_0x000107c6142c(puVar5);
        }
        else {
          puVar4 = puVar5;
          func_0x000107c605b8(puVar3,puVar5,puVar2,param_3,0);
          func_0x000107c6142c(puVar5);
          if (((ulong)puVar3 & 1) == 0) goto LAB_101dcdc24;
          func_0x000107c615e8(puVar10);
        }
        lVar6 = lVar6 + 1;
      } while (puVar9 != puVar8);
      func_0x000107c6142c(param_3);
      *param_1 = puVar7;
    }
  }
  return;
}



/* Entry: 101dcdd50; end: 101dcde23;  */

undefined8 FUN_101dcdd50(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101dce5a4(uVar1);
    func_0x0001000d224c(&uStack_38);
    uVar2 = uStack_38;
    func_0x000100775264(uStack_38,1,FUN_101dd0024,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uStack_38);
    func_0x000107c61574(param_2);
  }
  return uVar2;
}



/* Entry: 101dcde24; end: 101dcdf67;  */

undefined8 FUN_101dcde24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2de80,&UNK_10da18eb0);
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &UNK_1104865c0;
  func_0x000107c613fc(&UNK_1104865c0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(param_3);
  func_0x00010006c00c(param_1,param_2);
  uVar3 = uVar1;
  func_0x000104889654(uVar1,1,0x101dd2f48,puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101dd03fc,0,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uStack_68);
  return uVar4;
}



/* Entry: 101dcdf68; end: 101dce1fb;  */

undefined8 FUN_101dcdf68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_101dce5a4();
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  uVar1 = 0;
  func_0x000107c5ede0(0);
  uVar2 = uVar4;
  func_0x000100775264(uVar4,1,FUN_101dd0080,0,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(&uStack_48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_110486548;
  func_0x000107c613fc(&UNK_110486548,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  func_0x000107c615f0(uVar4);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101dd2934,puVar3,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 101dce1fc; end: 101dce44f;  */

undefined8 FUN_101dce1fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *unaff_x20;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar7 = unaff_x20[2];
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110486480;
  func_0x000107c613fc(&UNK_110486480,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = puVar1;
  func_0x000101dcff70();
  func_0x000107c615f0(param_1);
  uVar3 = uVar6;
  func_0x0001048893f8(uVar6,1,FUN_101dd2850,puVar1,&UNK_1106c3ba0,puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  puVar1 = &UNK_110486250;
  func_0x000107c613fc(&UNK_110486250,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1104864a8;
  func_0x000107c613fc(&UNK_1104864a8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar1 = &UNK_1104864d0;
  func_0x000107c613fc(&UNK_1104864d0,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_101dd2894;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c615f0(param_1);
  uVar6 = 0x112e2ddb0;
  func_0x0001000285a8(0x112e2ddb0,&UNK_10da16b30);
  uVar4 = uVar5;
  func_0x0001048898b8(uVar5,1,FUN_101dd289c,puVar1,uVar6);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = unaff_x20[7];
  puVar1 = &UNK_1104864f8;
  func_0x000107c613fc(&UNK_1104864f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar8;
  uVar5 = 0;
  FUN_101dd29b8(0,0x112e2de28,&PTR__OBJC_CLASS___AVAsset_1126aff38);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  uVar6 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_101dd2910,puVar1,uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar1);
  return uVar6;
}



/* Entry: 101dce450; end: 101dce4bb;  */

void FUN_101dce450(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_101dd1024();
  func_0x000107c613fc();
  param_2[3] = 3;
  param_2[2] = 1;
  param_2[4] = uVar1;
  *param_1 = (long)param_2;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 101dce4bc; end: 101dce5a3;  */

void FUN_101dce4bc(undefined1 *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar2 = param_2;
  func_0x000107c4ca5c();
  if ((int)uVar2 < 0) {
    uVar3 = 1;
    uVar4 = 0x18;
  }
  else {
    func_0x000107c4ca5c();
    if ((int)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dce538);
      (*pcVar1)();
    }
    if ((param_2 < 0xd) && ((1 << (ulong)(param_2 & 0x1f) & 0x1402U) != 0)) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      uVar4 = 0x19;
    }
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101dce5a4; end: 101dce6cb;  */

undefined8 FUN_101dce5a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2dda8,&UNK_10da16b28);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar4);
  uVar1 = uVar3;
  func_0x000104889654(uVar3,1,FUN_101dcff3c,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar4);
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_110486228;
  func_0x000107c613fc(&UNK_110486228,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar3 = 0x112e2ddb0;
  func_0x0001000285a8(0x112e2ddb0,&UNK_10da16b30);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,0x101dcff58,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 101dce6cc; end: 101dce8bb;  */

undefined * FUN_101dce6cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&puStack_88);
  puVar7 = puStack_88;
  if (puStack_88 == (undefined *)0x0) {
    puVar6 = (undefined1 *)0x112e2de30;
    func_0x0001000285a8(0x112e2de30,&UNK_10da16ba8);
    func_0x000101dcff70();
    puVar7 = &UNK_1106c3ba0;
    func_0x000107c613f8(&UNK_1106c3ba0,puVar6,0,0);
    *puVar6 = 5;
    puVar8 = puVar7;
    func_0x00010488904c();
    func_0x000107c614ac(puVar7);
  }
  else {
    func_0x0001000285a8(0x112e2de38,&UNK_10da16bb0);
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010da16ae0);
    func_0x0001000d224c(&uStack_58);
    uVar4 = 0;
    FUN_101dd29b8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_58);
    pcStack_68 = FUN_101dd292c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10141ff74;
    puStack_70 = &UNK_110486510;
    ppuVar5 = &puStack_88;
    lStack_60 = lVar2;
    func_0x000107c60bc4();
    lVar1 = lStack_60;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c50308(puVar7);
    func_0x000107c615e8(puVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    puVar8 = *(undefined **)(lVar2 + 0x10);
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(lVar2);
  }
  return puVar8;
}



/* Entry: 101dce8bc; end: 101dce957;  */

void FUN_101dce8bc(undefined1 *param_1,undefined *param_2)

{
  undefined1 *puStack_28;
  
  if (param_2 == (undefined *)0x0) {
    if (param_1 != (undefined1 *)0x0) {
      puStack_28 = param_1;
      func_0x000107c61174();
      func_0x000100b60084(&puStack_28);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000101dcff70();
    param_2 = &UNK_1106c3ba0;
    func_0x000107c613f8(&UNK_1106c3ba0,param_1,0,0);
    *param_1 = 10;
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



/* Entry: 101dce958; end: 101dceb9b;  */

undefined8 FUN_101dce958(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  func_0x000101dcea44();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_110486250;
  func_0x000107c613fc(&UNK_110486250,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110486368;
  func_0x000107c613fc(&UNK_110486368,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar4 = 0x112e2de00;
  func_0x0001000285a8(0x112e2de00,&UNK_10da16b78);
  uVar5 = uStack_48;
  func_0x0001048898b8(uStack_48,1,FUN_101dd2758,puVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  return uVar5;
}



/* Entry: 101dceb9c; end: 101dcec53;  */

void FUN_101dceb9c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_48 [3];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112e2de08,&UNK_10da16b80);
    auStack_48[0] = 0;
    func_0x000104888f7c(auStack_48);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c615f0(lVar1);
      FUN_101dcec54();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101dcec54; end: 101dcee5b;  */

undefined8 FUN_101dcec54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  puVar1 = &UNK_110486390;
  func_0x000107c613fc(&UNK_110486390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar2 = uVar4;
  func_0x000104889654(uVar4,1,0x101dd2770,puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar6 = uStack_58;
  puVar1 = &UNK_110486250;
  func_0x000107c613fc(&UNK_110486250,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar3 = &UNK_1104863b8;
  func_0x000107c613fc(&UNK_1104863b8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101dd2788;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  uVar4 = 0x112e2de10;
  func_0x0001000285a8(0x112e2de10,&UNK_10da16b90);
  uVar5 = uVar6;
  func_0x0001048898b8(uVar6,1,FUN_101dd2f0c,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_1104863e0;
  func_0x000107c613fc(&UNK_1104863e0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(param_2);
  uVar4 = 0x112e2de00;
  func_0x0001000285a8(0x112e2de00,&UNK_10da16b78);
  uVar6 = uStack_58;
  func_0x0001048898b8(uStack_58,1,FUN_101dd2790,puVar1,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  return uVar6;
}



/* Entry: 101dcee5c; end: 101dcf103;  */

undefined8 **** FUN_101dcee5c(undefined8 param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 ***pppuStack_68;
  
  func_0x0001000285a8(0x112e2ddc0,&UNK_10da16b38);
  pppuStack_68 = (undefined8 ***)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  ppppuVar3 = &pppuStack_68;
  func_0x000104888f7c(ppppuVar3);
  if (param_2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar8 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dcf104);
      (*pcVar2)();
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    if ((param_2 & 0xc000000000000001) == 0) {
      ppppuVar10 = ppppuVar3;
      puVar13 = (undefined8 *)(param_2 + 0x20);
      do {
        uVar12 = *puVar13;
        func_0x000107c615f0(uVar12);
        func_0x0001000d224c(&pppuStack_68);
        pppuVar1 = pppuStack_68;
        puVar5 = &UNK_110486250;
        func_0x000107c613fc(&UNK_110486250,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar6 = &UNK_1104862a0;
        func_0x000107c613fc(&UNK_1104862a0,0x30,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = param_1;
        *(undefined8 *)(puVar6 + 0x20) = uVar12;
        *(undefined8 *)(puVar6 + 0x28) = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c615f0(param_1);
        func_0x000107c615f0(uVar12);
        uVar7 = 0x112e2ddc8;
        func_0x0001000285a8(0x112e2ddc8,&UNK_10da16b40);
        ppppuVar3 = (undefined8 ****)pppuVar1;
        func_0x0001048898b8(pppuVar1,1,FUN_101dd2ef0,puVar6,uVar7);
        func_0x000107c61574(ppppuVar10);
        func_0x000107c61170(pppuVar1);
        func_0x000107c61574(puVar6);
        func_0x000107c615e8(uVar12);
        uVar8 = uVar8 - 1;
        ppppuVar10 = ppppuVar3;
        puVar13 = puVar13 + 1;
      } while (uVar8 != 0);
    }
    else {
      uVar11 = 0;
      ppppuVar10 = ppppuVar3;
      do {
        uVar4 = uVar11;
        FUN_101dd10a4(uVar11,param_2);
        uVar11 = uVar11 + 1;
        func_0x0001000d224c(&pppuStack_68);
        pppuVar1 = pppuStack_68;
        puVar5 = &UNK_110486250;
        func_0x000107c613fc(&UNK_110486250,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,unaff_x20);
        puVar6 = &UNK_110486278;
        func_0x000107c613fc(&UNK_110486278,0x30,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = param_1;
        *(ulong *)(puVar6 + 0x20) = uVar4;
        *(undefined8 *)(puVar6 + 0x28) = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c615f0(param_1);
        func_0x000107c615f0(uVar4);
        uVar7 = 0x112e2ddc8;
        func_0x0001000285a8(0x112e2ddc8,&UNK_10da16b40);
        ppppuVar3 = (undefined8 ****)pppuVar1;
        func_0x0001048898b8(pppuVar1,1,FUN_101dd1248,puVar6,uVar7);
        func_0x000107c61574(ppppuVar10);
        func_0x000107c61170(pppuVar1);
        func_0x000107c61574(puVar6);
        func_0x000107c615e8(uVar4);
        ppppuVar10 = ppppuVar3;
      } while (uVar8 != uVar11);
    }
  }
  return ppppuVar3;
}



/* Entry: 101dcf104; end: 101dcf22f;  */

undefined8 FUN_101dcf104(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_101dcf230(param_3,param_4);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_48);
    puVar1 = &UNK_1104862c8;
    func_0x000107c613fc(&UNK_1104862c8,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = uVar3;
    func_0x000107c615f0(param_4);
    func_0x000107c61434(uVar3);
    uVar2 = 0x112e2ddc8;
    func_0x0001000285a8(0x112e2ddc8,&UNK_10da16b40);
    uVar3 = uStack_48;
    func_0x000100775264(uStack_48,1,0x101dd1264,puVar1,uVar2);
    func_0x000107c61574(param_3);
    func_0x000107c61170(uStack_48);
    func_0x000107c61574(puVar1);
  }
  return uVar3;
}



/* Entry: 101dcf230; end: 101dcf3fb;  */

undefined8 FUN_101dcf230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e2ddf0,&UNK_10da16b68);
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  puVar1 = &UNK_1104862f0;
  func_0x000107c613fc(&UNK_1104862f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x000107c615f0(param_2);
  uVar2 = uVar4;
  func_0x000104889654(uVar4,1,FUN_101dd26ec,puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar6 = uStack_58;
  puVar1 = &UNK_110486250;
  func_0x000107c613fc(&UNK_110486250,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar3 = &UNK_110486318;
  func_0x000107c613fc(&UNK_110486318,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar4 = 0x112e2ddf8;
  func_0x0001000285a8(0x112e2ddf8,&UNK_10da16b70);
  uVar5 = uVar6;
  func_0x0001048898b8(uVar6,1,0x101dd2704,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_58);
  uVar6 = 0;
  FUN_101dd29b8(0,0x112e2dde8,&PTR_PTR_1126c4ba8);
  uVar4 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_101dcf950,0,uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_58);
  return uVar4;
}



/* Entry: 101dcf3fc; end: 101dcf52b;  */

void FUN_101dcf3fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar4 = *param_2;
  func_0x000107c3e240(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  lVar2 = 0x112e2ddd0;
  func_0x0001000285a8(0x112e2ddd0,&UNK_10da16b48);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = puVar1;
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(uVar4);
  lVar3 = lVar2;
  FUN_101dd25c0(lVar2);
  func_0x000107c61588(lVar2);
  FUN_101dd294c((undefined8 *)(lVar2 + 0x20),0x112e2ddd8,&UNK_10da16b50);
  uStack_48 = param_4;
  func_0x000107c61434(param_4);
  FUN_101dd1420(lVar3,FUN_101dd2318,0,&uStack_48);
  func_0x000107c61170(puVar1);
  if (unaff_x21 == 0) {
    *param_1 = uStack_48;
  }
  else {
    func_0x000107c6142c();
  }
  return;
}



/* Entry: 101dcf52c; end: 101dcf5bf;  */

void FUN_101dcf52c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  func_0x000107c505ac(puVar1,param_3,param_3);
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,puVar1,0,0);
    *puVar1 = 1;
    func_0x000107c61654();
  }
  else {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 101dcf5c0; end: 101dcf65f;  */

void FUN_101dcf5c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_101dcdf68(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
    func_0x00010006c00c(lVar2,param_2);
    FUN_101dcde24(lVar2,param_2,param_1);
    func_0x00010006c090(lVar2,param_2);
    func_0x00010006c090(lVar2,param_2);
  }
  return;
}



/* Entry: 101dcf660; end: 101dcf793;  */

void FUN_101dcf660(void)

{
  func_0x000101dce070();
  return;
}



/* Entry: 101dcf794; end: 101dcf81b;  */

undefined8 FUN_101dcf794(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101dcf81c(param_3,uVar1);
    func_0x000107c61574(param_2);
  }
  return param_3;
}



/* Entry: 101dcf81c; end: 101dcf94f;  */

undefined8 FUN_101dcf81c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e2dda8,&UNK_10da16b28);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar4);
  uVar1 = uVar3;
  func_0x000104889654(uVar3,1,0x101dd2f20,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar4);
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_110486340;
  func_0x000107c613fc(&UNK_110486340,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c615f0(param_1);
  uVar3 = 0x112e2ddf8;
  func_0x0001000285a8(0x112e2ddf8,&UNK_10da16b70);
  uVar4 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_101dd271c,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 101dcf950; end: 101dcfa2f;  */

void FUN_101dcf950(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)*param_2;
  if (puVar3 == (undefined1 *)0x0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,param_2,0,0);
    *(undefined1 *)param_2 = 0x16;
    func_0x000107c61654();
  }
  else {
    puVar1 = puVar3;
    func_0x000107c615f0();
    func_0x000107c49a80();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x000101dcff70();
      func_0x000107c613f8(&UNK_1106c3ba0,puVar1,0,0);
      *puVar1 = 0x17;
      func_0x000107c61654();
      func_0x000107c615e8(puVar3);
    }
    else {
      puVar2 = PTR_PTR_1126c4ba8;
      func_0x000107c61168();
      func_0x000107c3e21c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      *param_1 = puVar2;
    }
  }
  return;
}



/* Entry: 101dcfa30; end: 101dcfbb3;  */

undefined8
FUN_101dcfa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2de80,&UNK_10da18eb0);
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = &UNK_110486570;
  func_0x000107c613fc(&UNK_110486570,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  func_0x00010006c00c(param_1,param_2);
  uVar2 = uVar4;
  func_0x000104889654(uVar4,1,FUN_101dd298c,puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  puVar1 = &UNK_110486598;
  func_0x000107c613fc(&UNK_110486598,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61434(param_4);
  uVar3 = 0x112e2de88;
  func_0x0001000285a8(0x112e2de88,&UNK_10da16bd0);
  uVar4 = uStack_68;
  func_0x000100775264(uStack_68,1,0x101dd29a0,puVar1,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar1);
  return uVar4;
}



/* Entry: 101dcfbb4; end: 101dcff3b;  */

void FUN_101dcfbb4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long lVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_b0 [8];
  
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  puVar3 = (undefined1 *)0x0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(puVar3 + -8);
  puVar9 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined1 *)*param_2;
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar12 = *(undefined1 **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
    if (puVar12 == (undefined1 *)0x0) {
LAB_101dcfee4:
      func_0x000101dcff70();
      func_0x000107c613f8(&UNK_1106c3ba0,puVar9,0,0);
      *puVar9 = 0xb;
      func_0x000107c61654();
      return;
    }
  }
  else {
    puVar12 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar15) {
      puVar12 = puVar15;
    }
    puVar14 = puVar12;
    func_0x000107c60480();
    puVar9 = (undefined1 *)0x0;
    if (puVar14 == (undefined1 *)0x0) goto LAB_101dcfee4;
    func_0x000107c60480();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar12 == (undefined1 *)0x0) goto LAB_101dcfe9c;
  }
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = (undefined1 *)((ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU));
  FUN_101dd1efc(0,puVar9,0);
  if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101dcff3c);
    (*pcVar2)();
  }
  puVar14 = (undefined1 *)0x0;
  do {
    if (((ulong)puVar15 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= (long)puVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dcfeac);
        (*pcVar2)();
      }
      puVar17 = *(undefined1 **)(puVar15 + (long)puVar14 * 8 + 0x20);
      func_0x000107c615f0(puVar17);
    }
    else {
      puVar17 = puVar14;
      puVar9 = puVar15;
      FUN_101dd127c(puVar14,puVar15);
    }
    puVar4 = puVar17;
    func_0x000107c4407c();
    func_0x000107c61180();
    if (puVar4 == (undefined1 *)0x0) {
      uVar13 = 0xc;
      puVar8 = (undefined1 *)0x0;
LAB_101dcfe58:
      func_0x000101dcff70();
      func_0x000107c613f8(&UNK_1106c3ba0,puVar8,0,0);
      *puVar8 = uVar13;
      func_0x000107c61654();
      func_0x000107c61574(puVar16);
      func_0x000107c615e8(puVar17);
      return;
    }
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    func_0x000107c5edd0(puVar8,puVar5,puVar9);
    func_0x000107c6142c(puVar9);
    puVar9 = puVar8;
    (**(code **)(lVar10 + 0x30))(puVar8,1,puVar3);
    if ((int)puVar9 == 1) {
      FUN_101dd294c(puVar8,0x112d36580,&UNK_10d9016d0);
      uVar13 = 0xd;
      goto LAB_101dcfe58;
    }
    (**(code **)(lVar10 + 0x20))(lVar11,puVar8,puVar3);
    puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8();
    puVar7 = puVar6;
    func_0x000107c5ed90();
    func_0x000107c48fd4();
    func_0x000107c615e8(puVar17);
    func_0x000107c61170(puVar7);
    puVar9 = puVar3;
    (**(code **)(lVar10 + 8))(lVar11);
    uVar1 = *(ulong *)(puVar16 + 0x10);
    puVar17 = (undefined1 *)(uVar1 + 1);
    if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
      puVar9 = puVar17;
      FUN_101dd1efc(1 < *(ulong *)(puVar16 + 0x18),puVar17,1);
    }
    puVar14 = puVar14 + 1;
    *(undefined1 **)(puVar16 + 0x10) = puVar17;
    *(undefined **)(puVar16 + uVar1 * 8 + 0x20) = puVar6;
  } while (puVar12 != puVar14);
LAB_101dcfe9c:
  *param_1 = puVar16;
  return;
}



/* Entry: 101dcff3c; end: 101dcffaf;  */

void FUN_101dcff3c(void)

{
  FUN_101dd0f74();
  return;
}



/* Entry: 101dcffb0; end: 101dd0023;  */

void FUN_101dcffb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  func_0x000107c50604(puVar1,param_3,param_3);
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,puVar1,0,0);
    *puVar1 = 0x11;
    func_0x000107c61654();
  }
  else {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 101dd0024; end: 101dd007f;  */

void FUN_101dd0024(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  func_0x000107c49a80();
  if ((int)puVar1 == 0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,puVar1,0,0);
    *puVar1 = 0x1a;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101dd0080; end: 101dd018b;  */

void FUN_101dd0080(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined **ppuVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar2 = *param_2;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f726f8;
  func_0x000107c43470();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 == 0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,ppuVar3,0,0);
    *(undefined1 *)ppuVar3 = 2;
    func_0x000107c61654();
  }
  else {
    func_0x000107c5edb4(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2)
    ;
    func_0x000107c61170(lVar2);
    (**(code **)(lVar4 + 0x20))
              (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  }
  return;
}



/* Entry: 101dd018c; end: 101dd03fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101dd018c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined1 *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *extraout_x8;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  long lVar24;
  undefined1 *puStack_128;
  undefined8 *******pppppppuStack_118;
  undefined1 *puStack_108;
  undefined8 *puStack_b0;
  undefined8 *apuStack_a8 [5];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_58;
  
  ppuVar11 = &puStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar6);
  apuStack_a8[0] = (undefined8 *)0x0;
  func_0x000107c3e388();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar22 = apuStack_a8[0];
  puVar3 = PTR___sypN_11034f1a8;
  if (param_3 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
LAB_101dd03b8:
    func_0x000107c61654();
  }
  else {
    lVar6 = param_3;
    func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c61174(puVar22);
    func_0x000107c61170(param_3);
    puVar22 = *(undefined8 **)PTR__NSFileSize_110345448;
    uVar7 = 0;
    puStack_b0 = puVar22;
    FUN_101a64068();
    uVar9 = 0x112defdc0;
    func_0x000101dd2eb0(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
    func_0x000107c61174(puVar22);
    func_0x000107c602d4(apuStack_a8,&puStack_b0,uVar7,uVar9);
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_101dd0304:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(lVar6);
      ppuVar8 = apuStack_a8;
      func_0x000100df95d0(ppuVar8);
      if ((uVar7 & 1) == 0) {
        func_0x000107c6142c(lVar6);
        goto LAB_101dd0304;
      }
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + (long)ppuVar8 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c6142c(lVar6);
    func_0x0001007bbff0(apuStack_a8);
    if (lStack_68 == 0) {
      ppuVar11 = (undefined8 **)&uStack_80;
      FUN_101dd294c(ppuVar11,0x112d387f8,&UNK_10d902650);
LAB_101dd0390:
      func_0x000101dcff70();
      puVar22 = (undefined8 *)&UNK_1106c3ba0;
      func_0x000107c613f8(&UNK_1106c3ba0,ppuVar11,0,0);
      *(undefined1 *)ppuVar11 = 4;
      goto LAB_101dd03b8;
    }
    uVar9 = 0;
    FUN_101dd29b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6147c(&puStack_b0,&uStack_80,puVar3 + 8,uVar9,6);
    puVar22 = puStack_b0;
    if (((ulong)ppuVar11 & 1) == 0) goto LAB_101dd0390;
    puVar10 = puStack_b0;
    func_0x000107c49820();
    func_0x000107c61170();
    *param_1 = puVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  puVar12 = (undefined1 *)*puVar22;
  func_0x000107c4412c();
  func_0x000107c61180();
  puVar15 = puVar12;
  if (puVar12 == (undefined1 *)0x0) {
LAB_101dd0684:
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,puVar15,0,0);
    *puVar15 = 7;
    func_0x000107c61654();
  }
  else {
    pppppppuVar13 = (undefined8 *******)0x0;
    FUN_101dd29b8(0,0x112d51158,&PTR_PTR_1126bcf20);
    uVar9 = 0x112d51160;
    func_0x0001000285a8(0x112d51160,&UNK_10da11350);
    uVar14 = uVar9;
    func_0x000100fac9e4();
    func_0x000107c5f9e8(puVar12,pppppppuVar13,uVar9,uVar14);
    func_0x000107c61170(puVar12);
    if (((ulong)puVar15 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar15 + 0x10) == 0) goto LAB_101dd067c;
      uVar19 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
      uVar20 = ~uVar19;
      puVar23 = (ulong *)(puVar15 + 0x40);
      uVar19 = -uVar19;
      uVar7 = 0xffffffffffffffff;
      if (uVar19 < 0x40) {
        uVar7 = ~(-1L << (uVar19 & 0x3f));
      }
      uVar7 = uVar7 & *puVar23;
      puVar12 = puVar15;
    }
    else {
      puVar12 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar15) {
        puVar12 = puVar15;
      }
      puVar21 = puVar12;
      func_0x000107c6042c();
      if (puVar21 == (undefined1 *)0x0) {
LAB_101dd067c:
        func_0x000107c6142c();
        goto LAB_101dd0684;
      }
      func_0x000107c60418();
      puVar23 = (ulong *)0x0;
      uVar20 = 0;
      uVar7 = 0;
      puVar12 = (undefined1 *)((ulong)puVar12 | 0x8000000000000000);
    }
    puVar21 = puVar15;
    func_0x000107c61434();
    puStack_128 = (undefined1 *)0x0;
    lVar6 = 0;
    while (uVar19 = uVar7, lVar24 = lVar6, -1 < (long)puVar12) {
      while (uVar19 == 0) {
        lVar1 = lVar24 + 1;
        if (SCARRY8(lVar24,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dd06dc);
          (*pcVar4)();
        }
        if ((long)(uVar20 + 0x40 >> 6) <= lVar1) {
          uVar7 = 0;
          goto LAB_101dd0648;
        }
        lVar24 = lVar1;
        uVar19 = puVar23[lVar1];
      }
      uVar2 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar21 = *(undefined1 **)
                 (*(long *)(puVar12 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 lVar24 * 0x200);
      puStack_108 = puVar21;
      func_0x000107c615f0(puVar21);
      uVar19 = uVar19 - 1 & uVar19;
      if (puVar21 == (undefined1 *)0x0) goto LAB_101dd064c;
LAB_101dd05e4:
      puVar16 = puVar21;
      func_0x000107c43ef0();
      if ((int)puVar16 == 5) {
        puVar16 = puVar21;
        func_0x000107c43fb4();
        func_0x000107c61180();
        if (puVar16 == (undefined1 *)0x0) {
          func_0x000101dcff70();
          func_0x000107c613f8(&UNK_1106c3ba0,puVar16,0,0);
          *puVar16 = 8;
          func_0x000107c61654();
          FUN_101dd26b8(puVar12,puVar23,uVar20,lVar6,uVar7);
          func_0x000107c615e8(puVar21);
          func_0x000107c6142c(puVar15);
          return;
        }
        puVar17 = puVar16;
        func_0x000107c44338();
        func_0x000107c615e8(puVar16);
        func_0x000107c615e8();
        bVar5 = SCARRY8((long)puStack_128,(long)puVar17);
        puStack_128 = puStack_128 + (long)puVar17;
        uVar7 = uVar19;
        lVar6 = lVar24;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dd0644);
          (*pcVar4)();
        }
      }
      else {
        func_0x000107c615e8();
        uVar7 = uVar19;
        lVar6 = lVar24;
      }
    }
    func_0x000107c60444();
    if (puVar21 == (undefined1 *)0x0) {
LAB_101dd0648:
      puStack_108 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c615e8();
      pppppppuVar18 = &pppppppuStack_118;
      pppppppuStack_118 = pppppppuVar13;
      func_0x000107c6147c(&puStack_108,pppppppuVar18,PTR___syXlN_11034f1a0 + 8,uVar9,7);
      pppppppuVar13 = pppppppuVar18;
      puVar21 = puStack_108;
      if (puStack_108 != (undefined1 *)0x0) goto LAB_101dd05e4;
    }
LAB_101dd064c:
    func_0x000107c6142c(puVar15);
    FUN_101dd26b8(puVar12,puVar23,uVar20,lVar6,uVar7);
    *extraout_x8 = puStack_128;
  }
  return;
}



/* Entry: 101dd03fc; end: 101dd0737;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101dd03fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *******pppppppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  undefined1 *puStack_78;
  undefined8 *******pppppppuStack_68;
  undefined1 *puStack_58;
  
  puVar5 = (undefined1 *)*param_2;
  func_0x000107c4412c();
  func_0x000107c61180();
  puVar9 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
LAB_101dd0684:
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,puVar9,0,0);
    *puVar9 = 7;
    func_0x000107c61654();
  }
  else {
    pppppppuVar6 = (undefined8 *******)0x0;
    FUN_101dd29b8(0,0x112d51158,&PTR_PTR_1126bcf20);
    uVar7 = 0x112d51160;
    func_0x0001000285a8(0x112d51160,&UNK_10da11350);
    uVar8 = uVar7;
    func_0x000100fac9e4();
    func_0x000107c5f9e8(puVar5,pppppppuVar6,uVar7,uVar8);
    func_0x000107c61170(puVar5);
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar9 + 0x10) == 0) goto LAB_101dd067c;
      uVar13 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
      uVar14 = ~uVar13;
      puVar17 = (ulong *)(puVar9 + 0x40);
      uVar13 = -uVar13;
      uVar15 = 0xffffffffffffffff;
      if (uVar13 < 0x40) {
        uVar15 = ~(-1L << (uVar13 & 0x3f));
      }
      uVar15 = uVar15 & *puVar17;
      puVar5 = puVar9;
    }
    else {
      puVar5 = (undefined1 *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar9) {
        puVar5 = puVar9;
      }
      puVar16 = puVar5;
      func_0x000107c6042c();
      if (puVar16 == (undefined1 *)0x0) {
LAB_101dd067c:
        func_0x000107c6142c();
        goto LAB_101dd0684;
      }
      func_0x000107c60418();
      puVar17 = (ulong *)0x0;
      uVar14 = 0;
      uVar15 = 0;
      puVar5 = (undefined1 *)((ulong)puVar5 | 0x8000000000000000);
    }
    puVar16 = puVar9;
    func_0x000107c61434();
    puStack_78 = (undefined1 *)0x0;
    lVar18 = 0;
    while (uVar13 = uVar15, lVar19 = lVar18, -1 < (long)puVar5) {
      while (uVar13 == 0) {
        lVar1 = lVar19 + 1;
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd06dc);
          (*pcVar3)();
        }
        if ((long)(uVar14 + 0x40 >> 6) <= lVar1) {
          uVar15 = 0;
          goto LAB_101dd0648;
        }
        lVar19 = lVar1;
        uVar13 = puVar17[lVar1];
      }
      uVar2 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar16 = *(undefined1 **)
                 (*(long *)(puVar5 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 lVar19 * 0x200);
      puStack_58 = puVar16;
      func_0x000107c615f0(puVar16);
      uVar13 = uVar13 - 1 & uVar13;
      if (puVar16 == (undefined1 *)0x0) goto LAB_101dd064c;
LAB_101dd05e4:
      puVar10 = puVar16;
      func_0x000107c43ef0();
      if ((int)puVar10 == 5) {
        puVar10 = puVar16;
        func_0x000107c43fb4();
        func_0x000107c61180();
        if (puVar10 == (undefined1 *)0x0) {
          func_0x000101dcff70();
          func_0x000107c613f8(&UNK_1106c3ba0,puVar10,0,0);
          *puVar10 = 8;
          func_0x000107c61654();
          FUN_101dd26b8(puVar5,puVar17,uVar14,lVar18,uVar15);
          func_0x000107c615e8(puVar16);
          func_0x000107c6142c(puVar9);
          return;
        }
        puVar11 = puVar10;
        func_0x000107c44338();
        func_0x000107c615e8(puVar10);
        func_0x000107c615e8();
        bVar4 = SCARRY8((long)puStack_78,(long)puVar11);
        puStack_78 = puStack_78 + (long)puVar11;
        uVar15 = uVar13;
        lVar18 = lVar19;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd0644);
          (*pcVar3)();
        }
      }
      else {
        func_0x000107c615e8();
        uVar15 = uVar13;
        lVar18 = lVar19;
      }
    }
    func_0x000107c60444();
    if (puVar16 == (undefined1 *)0x0) {
LAB_101dd0648:
      puStack_58 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c615e8();
      pppppppuVar12 = &pppppppuStack_68;
      pppppppuStack_68 = pppppppuVar6;
      func_0x000107c6147c(&puStack_58,pppppppuVar12,PTR___syXlN_11034f1a0 + 8,uVar7,7);
      pppppppuVar6 = pppppppuVar12;
      puVar16 = puStack_58;
      if (puStack_58 != (undefined1 *)0x0) goto LAB_101dd05e4;
    }
LAB_101dd064c:
    func_0x000107c6142c(puVar9);
    FUN_101dd26b8(puVar5,puVar17,uVar14,lVar18,uVar15);
    *param_1 = puStack_78;
  }
  return;
}



/* Entry: 101dd0738; end: 101dd0a1f;  */

void FUN_101dd0738(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  puVar5 = param_3;
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  if (lStack_70 == 0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,param_2,0,0);
    *param_2 = 5;
    func_0x000107c61654();
  }
  else {
    func_0x000107c42c98();
    func_0x000107c61180();
    if (param_3 == (undefined1 *)0x0) {
      func_0x000101dcff70();
      func_0x000107c613f8(&UNK_1106c3ba0,param_3,0,0);
      *param_3 = 6;
      func_0x000107c61654();
    }
    else {
      puVar2 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      func_0x0001000d224c(&lStack_70);
      lVar3 = lStack_70;
      func_0x000107c614f0(lStack_70);
      func_0x000103fbfb2c(param_5,param_6,lVar3,uStack_68);
      func_0x000107c615e8(lStack_70);
      if (((uint)param_6 & 0xff) == 1) {
        uVar4 = 2;
        uStack_51 = (char)param_5;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_101d58f10();
          func_0x000107c61658(&uStack_51,&UNK_11072c980,uVar4);
        }
        func_0x000107c6142c();
        FUN_101d58f10();
        func_0x000107c613f8(&UNK_11072c980,puVar5,0,0);
        *puVar5 = (char)param_5;
      }
      else {
        puVar6 = PTR_PTR_1126b25b8;
        func_0x000107c610f8(PTR_PTR_1126b25b8);
        func_0x000107c5fadc(puVar2,puVar5);
        func_0x000107c6142c(puVar5);
        func_0x000107c46814(puVar6);
        func_0x000107c61170(puVar2);
        uVar4 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        puVar7 = PTR_PTR_1126b1060;
        func_0x000107c610f8(PTR_PTR_1126b1060);
        func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
        func_0x000107c47d08(puVar7);
        func_0x000107c61170(uVar4);
        lVar3 = lVar1;
        func_0x000107c5076c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        lVar8 = lVar3;
        func_0x000107c4403c();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c61170(puVar6);
          func_0x000101d58f7c(param_5,param_6);
          func_0x000107c615e8(lVar1);
          *param_1 = lVar3;
          return;
        }
        func_0x000107c61654();
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar3);
        func_0x000101d58f7c(param_5,param_6);
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 101dd0a20; end: 101dd0b4b;  */

void FUN_101dd0a20(long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x21;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)*param_2;
  puVar1 = puVar6;
  func_0x000107c44314();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000107c4412c();
    func_0x000107c61180();
    if (puVar6 != (undefined1 *)0x0) {
      uVar2 = 0;
      FUN_101dd29b8(0,0x112d51158,&PTR_PTR_1126bcf20);
      uVar3 = 0x112d51160;
      func_0x0001000285a8(0x112d51160,&UNK_10da11350);
      uVar4 = uVar3;
      func_0x000100fac9e4();
      puVar1 = puVar6;
      func_0x000107c5f9e8(puVar6,uVar2,uVar3,uVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61434(param_3);
      puVar6 = puVar1;
      FUN_101dd29f8(puVar1,param_3);
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(param_3);
      if (unaff_x21 != 0) {
        return;
      }
      *param_1 = (long)puVar6;
      return;
    }
    uVar5 = 7;
    puVar1 = (undefined1 *)0x0;
  }
  else {
    uVar5 = 9;
  }
  func_0x000101dcff70();
  func_0x000107c613f8(&UNK_1106c3ba0,puVar1,0,0);
  *puVar1 = uVar5;
  func_0x000107c61654();
  return;
}



/* Entry: 101dd0b4c; end: 101dd0ba3;  */

void FUN_101dd0b4c(undefined1 *param_1)

{
  func_0x000107c49a80();
  if ((int)param_1 == 0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,param_1,0,0);
    *param_1 = 0x12;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101dd0ba4; end: 101dd0c73;  */

undefined8 FUN_101dd0ba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000285a8(0x112e2de18,&UNK_10da16b98);
    func_0x0001000d224c(&uStack_60);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c6157c(uVar2);
    uVar1 = uStack_60;
    func_0x000104889654(uStack_60,1,FUN_101dd281c,uVar2);
    func_0x000107c61170(uStack_60);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_1);
  }
  return uVar1;
}



/* Entry: 101dd0c74; end: 101dd0d5f;  */

undefined8
FUN_101dd0c74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  
  uVar2 = *param_1;
  func_0x0001000285a8(0x112e2de08,&UNK_10da16b80);
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_110486408;
  func_0x000107c613fc(&UNK_110486408,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_2);
  uVar2 = uStack_58;
  func_0x0001048897a0(uStack_58,1,0,FUN_101dd27ec,puVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  return uVar2;
}



/* Entry: 101dd0d60; end: 101dd0e67;  */

void FUN_101dd0d60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  uVar2 = 0;
  FUN_101dd29b8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_58);
  uStack_68 = 0x101dd27f8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  pcStack_78 = FUN_101dd0f04;
  puStack_70 = &UNK_110486420;
  ppuVar3 = &puStack_88;
  uStack_60 = param_1;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_60;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c503d0(param_2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101dd0e68; end: 101dd0f03;  */

void FUN_101dd0e68(undefined1 *param_1,undefined *param_2)

{
  undefined1 *puStack_28;
  
  if (param_2 == (undefined *)0x0) {
    if (param_1 != (undefined1 *)0x0) {
      puStack_28 = param_1;
      func_0x000107c615f0();
      func_0x000100b60084(&puStack_28);
      func_0x000107c615e8(param_1);
      return;
    }
    func_0x000101dcff70();
    param_2 = &UNK_1106c3ba0;
    func_0x000107c613f8(&UNK_1106c3ba0,param_1,0,0);
    *param_1 = 0x13;
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



/* Entry: 101dd0f04; end: 101dd0f73;  */

void FUN_101dd0f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101dd0f74; end: 101dd0ff3;  */

void FUN_101dd0f74(long *param_1,undefined1 *param_2,undefined1 param_3)

{
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000101dcff70();
    func_0x000107c613f8(&UNK_1106c3ba0,param_2,0,0);
    *param_2 = param_3;
    func_0x000107c61654();
  }
  else {
    *param_1 = lStack_38;
  }
  return;
}



/* Entry: 101dd0ff4; end: 101dd1023;  */

bool FUN_101dd0ff4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101dd1024; end: 101dd108f;  */

void FUN_101dd1024(void)

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
    FUN_101dd29b8(0,0x112e2de28,&PTR__OBJC_CLASS___AVAsset_1126aff38);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e2de78;
  plVar5 = (long *)&UNK_10da16bc8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101dd1090; end: 101dd10a3;  */

void FUN_101dd1090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2de90 == (undefined *)0x0 || ((ulong)puRam0000000112e2de90 & 1) != 0) {
    puVar1 = &UNK_10e8b93d0;
    func_0x000107c61518(&UNK_10e8b93d0,0x2b,0,0);
    puRam0000000112e2de90 = puVar1;
  }
  return;
}



/* Entry: 101dd10a4; end: 101dd1247;  */

ulong FUN_101dd10a4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd117c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd1180);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f011000);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd1248);
  (*pcVar2)();
}



/* Entry: 101dd1248; end: 101dd127b;  */

void FUN_101dd1248(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dcf104(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101dd127c; end: 101dd141f;  */

ulong FUN_101dd127c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd1354);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd1358);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f011020);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd1420);
  (*pcVar2)();
}



/* Entry: 101dd1420; end: 101dd1517;  */

void FUN_101dd1420(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  ulong uStack_48;
  
  uVar3 = *param_4;
  if ((uVar3 & 0xc000000000000001) == 0) {
    func_0x000107c61558(uVar3);
    uStack_48 = *param_4;
    FUN_101dd1518(param_1,param_2,param_3,uVar3,&uStack_48);
    *param_4 = uStack_48;
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c61434(uVar3);
    uVar1 = uVar2;
    func_0x000107c6042c(uVar2);
    FUN_101dd18e8(uVar2,uVar1);
    uStack_48 = uVar2;
    FUN_101dd1518(param_1,param_2,param_3,1,&uStack_48);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(uVar3);
      *param_4 = uStack_48;
    }
    else {
      func_0x000107c61574(uStack_48);
    }
  }
  return;
}



/* Entry: 101dd1518; end: 101dd18e7;  */

void FUN_101dd1518(undefined8 param_1,ulong param_2,undefined1 *param_3,uint param_4,long *param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  FUN_101dd2344(&uStack_98);
  func_0x000107c61434(param_1);
  puVar2 = param_3;
  func_0x000107c6157c();
  FUN_101dd23d8();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *param_5;
    puVar3 = puVar2;
    uVar5 = param_2;
    func_0x000100121450();
    lVar8 = *(long *)(lVar10 + 0x10);
    uVar9 = (ulong)~(uint)uVar5 & 1;
    puVar6 = (undefined1 *)(lVar8 + uVar9);
    if (SCARRY8(lVar8,uVar9)) {
LAB_101dd1800:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd1804);
      (*pcVar1)();
    }
    if (*(long *)(lVar10 + 0x18) < (long)puVar6) {
      uVar9 = (ulong)(param_4 & 1);
      FUN_101dd1c94();
      puVar3 = puVar2;
      func_0x000100121450();
      puVar6 = puVar3;
      if (((uint)uVar5 & 1) != ((uint)uVar9 & 1)) {
LAB_101dd1808:
        FUN_101dd29b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c60624();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd1828);
        (*pcVar1)();
      }
    }
    else {
      uVar9 = uVar5;
      if ((param_4 & 1) == 0) {
        FUN_101dd1b30();
      }
    }
    if ((uVar5 & 1) != 0) {
LAB_101dd15ec:
      func_0x000101dcff70();
      puVar4 = &UNK_1106c3ba0;
      func_0x000107c613f8(&UNK_1106c3ba0,puVar6,0,0);
      *puVar6 = 0x14;
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar5 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(param_2);
        func_0x000107c61574(param_3);
        func_0x000107c6142c(param_1);
        func_0x000107c61170(puVar2);
        FUN_101dd26b8(uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
        func_0x000107c61574(uStack_68);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_a8 = 0;
      uStack_a0 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uVar7 = 0;
      puStack_b0 = puVar2;
      FUN_101dd29b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c603d0(&puStack_b0,&uStack_a8,uVar7,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_a8,uStack_a0,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd18e8);
      (*pcVar1)();
    }
    lVar10 = *param_5;
    lVar8 = lVar10 + ((ulong)puVar3 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
    *(undefined1 **)(*(long *)(lVar10 + 0x30) + (long)puVar3 * 8) = puVar2;
    *(ulong *)(*(long *)(lVar10 + 0x38) + (long)puVar3 * 8) = param_2;
    if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
LAB_101dd1804:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd1808);
      (*pcVar1)();
    }
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    FUN_101dd23d8();
    puVar2 = puVar6;
    param_2 = uVar9;
    while (puVar2 != (undefined1 *)0x0) {
      lVar11 = *param_5;
      puVar6 = puVar2;
      uVar5 = param_2;
      func_0x000100121450();
      lVar10 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar5 & 1;
      lVar8 = lVar10 + uVar9;
      if (SCARRY8(lVar10,uVar9)) goto LAB_101dd1800;
      uVar9 = uVar5;
      if (*(long *)(lVar11 + 0x18) < lVar8) {
        uVar9 = 1;
        FUN_101dd1c94(lVar8);
        puVar6 = puVar2;
        func_0x000100121450();
        if (((uint)uVar5 & 1) != ((uint)uVar9 & 1)) goto LAB_101dd1808;
      }
      if ((uVar5 & 1) != 0) goto LAB_101dd15ec;
      lVar10 = *param_5;
      lVar8 = lVar10 + ((ulong)puVar6 >> 6) * 8;
      *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << ((ulong)puVar6 & 0x3f);
      *(undefined1 **)(*(long *)(lVar10 + 0x30) + (long)puVar6 * 8) = puVar2;
      *(ulong *)(*(long *)(lVar10 + 0x38) + (long)puVar6 * 8) = param_2;
      if (SCARRY8(*(long *)(lVar10 + 0x10),1)) goto LAB_101dd1804;
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      FUN_101dd23d8();
      puVar2 = puVar6;
      param_2 = uVar9;
    }
  }
  FUN_101dd26b8(uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
  func_0x000107c61574(param_3);
  func_0x000107c6142c(param_1);
  func_0x000107c61574(uStack_68);
  return;
}



/* Entry: 101dd18e8; end: 101dd1b2f;  */

undefined * FUN_101dd18e8(undefined *param_1,undefined1 **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined1 **)0x0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112e2dde0,&UNK_10da16b58);
    puVar5 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar5;
    func_0x000107c60418();
    puVar7 = param_1;
    func_0x000107c60444();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_101dd29b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar8 = 0;
        puStack_80 = (undefined1 *)param_2;
        FUN_101dd29b8(0,0x112e2dde8,&PTR_PTR_1126c4ba8);
        param_2 = &puStack_80;
        func_0x000107c6147c(&puStack_78,&puStack_80,puVar2 + 8,uVar8,7);
        uVar8 = uStack_70;
        puVar3 = puStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined1 **)0x1;
          FUN_101dd1c94(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101dd1b30);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = uVar8;
        *(undefined **)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = puVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c60444();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 101dd1b30; end: 101dd1c93;  */

void FUN_101dd1b30(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112e2dde0,&UNK_10da16b58);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_101dd1c0c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar9;
        func_0x000107c61174();
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_101dd1c0c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd1c94);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101dd1c6c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101dd1c6c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101dd1c94; end: 101dd1efb;  */

void FUN_101dd1c94(long param_1,ulong param_2)

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
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112e2dde0;
  func_0x0001000285a8(0x112e2dde0,&UNK_10da16b58);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101dd1ec8:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd1ef8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_101dd1ec8;
        }
        uVar16 = puVar13[lVar15];
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
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar14);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd1efc);
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
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101dd1efc; end: 101dd1f17;  */

void FUN_101dd1efc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101dd1f18();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101dd1f18; end: 101dd204b;  */

undefined * FUN_101dd1f18(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd204c);
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
    FUN_101dd1024();
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
    FUN_101dd29b8(0,0x112e2de28,&PTR__OBJC_CLASS___AVAsset_1126aff38);
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



/* Entry: 101dd204c; end: 101dd20cb;  */

undefined * FUN_101dd204c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101dd1090();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101dd20cc; end: 101dd21f3;  */

ulong FUN_101dd20cc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd21f4);
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
  FUN_101dd204c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd21f0);
      (*pcVar1)();
    }
    FUN_101dd21f4(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101dd21f4; end: 101dd2317;  */

long FUN_101dd21f4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd2314);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd2318);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112de64c8;
        func_0x0001000285a8(0x112de64c8,&UNK_10d9b0f20);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112de64c8;
      func_0x0001000285a8(0x112de64c8,&UNK_10d9b0f20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dd2310);
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



/* Entry: 101dd2318; end: 101dd2343;  */

/* WARNING: Possible PIC construction at 0x000101dd2330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dd2334) */

void FUN_101dd2318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101dd2344; end: 101dd23d7;  */

void FUN_101dd2344(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    puVar1 = (ulong *)(param_2 + 0x40);
    uVar2 = ~uVar4;
    uVar4 = -uVar4;
    uVar3 = 0xffffffffffffffff;
    if (uVar4 < 0x40) {
      uVar3 = ~(-1L << (uVar4 & 0x3f));
    }
    uVar3 = uVar3 & *puVar1;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60418();
    puVar1 = (ulong *)0x0;
    uVar2 = 0;
    uVar3 = 0;
    param_2 = uVar4 | 0x8000000000000000;
  }
  *param_1 = param_2;
  param_1[1] = (ulong)puVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = param_3;
  param_1[6] = param_4;
  return;
}



/* Entry: 101dd23d8; end: 101dd25bf;  */

undefined1  [16] FUN_101dd23d8(long param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = *unaff_x20;
  if (lVar3 < 0) {
    func_0x000107c60444();
    if (param_1 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      goto LAB_101dd2584;
    }
    uVar8 = 0;
    lStack_60 = param_1;
    FUN_101dd29b8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar1 = PTR___syXlN_11034f1a0;
    func_0x000107c6147c(&lStack_50,&lStack_60,PTR___syXlN_11034f1a0 + 8,uVar8,7);
    uVar8 = 0;
    lStack_60 = param_2;
    FUN_101dd29b8(0,0x112e2dde8,&PTR_PTR_1126c4ba8);
    func_0x000107c6147c(&uStack_48,&lStack_60,puVar1 + 8,uVar8,7);
    lVar7 = lStack_50;
    uVar8 = uStack_48;
  }
  else {
    lVar4 = unaff_x20[3];
    uVar9 = unaff_x20[4];
    lVar7 = lVar4;
    if (uVar9 == 0) {
      uVar5 = unaff_x20[2] + 0x40U >> 6;
      uVar9 = uVar5;
      if ((long)uVar5 <= lVar4 + 1) {
        uVar9 = lVar4 + 1;
      }
      lVar6 = uVar9 - 1;
      do {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd25c0);
          (*pcVar2)();
        }
        if ((long)uVar5 <= lVar7) {
          lVar7 = 0;
          uVar9 = 0;
          lStack_50 = 0;
          uStack_48 = 0;
          goto LAB_101dd2520;
        }
        uVar9 = *(ulong *)(unaff_x20[1] + lVar7 * 8);
        lVar4 = lVar4 + 1;
      } while (uVar9 == 0);
    }
    lVar6 = lVar7;
    uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar5 = lVar6 << 9 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 3;
    lVar7 = *(long *)(*(long *)(lVar3 + 0x30) + uVar5);
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar5);
    lStack_50 = lVar7;
    uStack_48 = uVar8;
    func_0x000107c61174(lVar7);
    func_0x000107c61174(uVar8);
LAB_101dd2520:
    unaff_x20[3] = lVar6;
    unaff_x20[4] = uVar9;
    uVar8 = uStack_48;
  }
  uStack_48 = uVar8;
  if (lVar7 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    pcVar2 = (code *)unaff_x20[5];
    lStack_60 = lVar7;
    uStack_58 = uVar8;
    func_0x000107c61174(lVar7);
    func_0x000107c61174(uVar8);
    (*pcVar2)(&uStack_70,&lStack_60);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar7);
  }
LAB_101dd2584:
  FUN_101dd26c0();
  auVar10._8_8_ = uStack_68;
  auVar10._0_8_ = uStack_70;
  return auVar10;
}



/* Entry: 101dd25c0; end: 101dd26b7;  */

undefined * FUN_101dd25c0(long param_1)

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
    func_0x0001000285a8(0x112e2dde0);
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
      func_0x000100121450();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd26b4);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd26b8);
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



/* Entry: 101dd26b8; end: 101dd26bf;  */

void FUN_101dd26b8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101dd26c0; end: 101dd26eb;  */

/* WARNING: Possible PIC construction at 0x000101dd26d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dd26d8) */

void FUN_101dd26c0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101dd26ec; end: 101dd271b;  */

void FUN_101dd26ec(void)

{
  long unaff_x20;
  
  func_0x000101dcf720(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dd271c; end: 101dd2757;  */

void FUN_101dd271c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  func_0x000107c505c8(uVar1,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 101dd2758; end: 101dd2787;  */

void FUN_101dd2758(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dceb9c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101dd2788; end: 101dd278f;  */

undefined8 FUN_101dd2788(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001000285a8(0x112e2de18,&UNK_10da16b98);
    func_0x0001000d224c(&uStack_60);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c6157c(uVar3);
    uVar2 = uStack_60;
    func_0x000104889654(uStack_60,1,FUN_101dd281c,uVar3);
    func_0x000107c61170(uStack_60);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(lVar1);
  }
  return uVar2;
}



/* Entry: 101dd2790; end: 101dd27eb;  */

void FUN_101dd2790(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd0c74(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101dd27ec; end: 101dd281b;  */

void FUN_101dd27ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(&uStack_58);
  uVar3 = 0;
  FUN_101dd29b8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_58);
  uStack_68 = 0x101dd27f8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  pcStack_78 = FUN_101dd0f04;
  puStack_70 = &UNK_110486420;
  ppuVar4 = &puStack_88;
  uStack_60 = param_1;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_60;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c503d0(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101dd281c; end: 101dd284f;  */

void FUN_101dd281c(void)

{
  FUN_101dd0f74();
  return;
}



/* Entry: 101dd2850; end: 101dd2857;  */

void FUN_101dd2850(undefined1 *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  
  uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uVar3;
  func_0x000107c4ca5c();
  if ((int)uVar2 < 0) {
    uVar4 = 1;
    uVar5 = 0x18;
  }
  else {
    func_0x000107c4ca5c();
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dce538);
      (*pcVar1)();
    }
    if ((uVar3 < 0xd) && ((1 << (ulong)(uVar3 & 0x1f) & 0x1402U) != 0)) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      uVar5 = 0x19;
    }
  }
  *param_1 = uVar5;
  param_1[1] = uVar4;
  return;
}



/* Entry: 101dd2858; end: 101dd2893;  */

void FUN_101dd2858(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dd2894; end: 101dd289b;  */

undefined8 FUN_101dd2894(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101dce5a4(uVar2);
    func_0x000107c61574(lVar1);
  }
  return uVar2;
}



/* Entry: 101dd289c; end: 101dd28c3;  */

void FUN_101dd289c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dd28c4; end: 101dd290f;  */

void FUN_101dd28c4(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dd2910; end: 101dd292b;  */

void FUN_101dd2910(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dce6cc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101dd292c; end: 101dd2933;  */

void FUN_101dd292c(undefined1 *param_1,undefined *param_2)

{
  undefined1 *puStack_28;
  
  if (param_2 == (undefined *)0x0) {
    if (param_1 != (undefined1 *)0x0) {
      puStack_28 = param_1;
      func_0x000107c61174();
      func_0x000100b60084(&puStack_28);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000101dcff70();
    param_2 = &UNK_1106c3ba0;
    func_0x000107c613f8(&UNK_1106c3ba0,param_1,0,0);
    *param_1 = 10;
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



/* Entry: 101dd2934; end: 101dd294b;  */

void FUN_101dd2934(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd018c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dd294c; end: 101dd298b;  */

undefined8 FUN_101dd294c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101dd298c; end: 101dd29b7;  */

void FUN_101dd298c(void)

{
  func_0x000101dd2e08();
  return;
}



/* Entry: 101dd29b8; end: 101dd29f7;  */

void FUN_101dd29b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dd29f8; end: 101dd2dcb;  */

undefined1 * FUN_101dd29f8(undefined1 *param_1,undefined8 ******param_2)

{
  long lVar1;
  undefined8 ******ppppppuVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar18;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  undefined8 *****apppppuStack_a8 [9];
  undefined1 *puStack_58;
  long lVar17;
  
  ppppppuVar9 = param_2;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar11 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    uVar13 = ~uVar11;
    puVar18 = (ulong *)(param_1 + 0x40);
    uVar11 = -uVar11;
    uVar14 = 0xffffffffffffffff;
    if (uVar11 < 0x40) {
      uVar14 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar14 = uVar14 & *puVar18;
    puVar5 = param_1;
  }
  else {
    puVar5 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_1) {
      puVar5 = param_1;
    }
    func_0x000107c60418();
    puVar18 = (ulong *)0x0;
    uVar13 = 0;
    uVar14 = 0;
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x8000000000000000);
  }
  func_0x000107c61434();
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = 0;
  lVar17 = 0;
  uVar11 = uVar14;
  do {
    uVar15 = uVar14;
    lVar3 = lVar16;
    if ((long)puVar5 < 0) {
      func_0x000107c60444();
      if (param_1 == (undefined1 *)0x0) {
LAB_101dd2d1c:
        puStack_58 = (undefined1 *)0x0;
LAB_101dd2d20:
        FUN_101dd26b8(puVar5,puVar18,uVar13,lVar16,uVar14);
        return puStack_c8;
      }
      func_0x000107c615e8();
      uVar6 = 0x112d51160;
      apppppuStack_a8[0] = ppppppuVar9;
      func_0x0001000285a8(0x112d51160,&UNK_10da11350);
      ppppppuVar9 = apppppuStack_a8;
      func_0x000107c6147c(&puStack_58,ppppppuVar9,PTR___syXlN_11034f1a0 + 8,uVar6,7);
      param_1 = puStack_58;
    }
    else {
      while (uVar15 == 0) {
        lVar1 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dd2dcc);
          (*pcVar4)();
        }
        if ((long)(uVar13 + 0x40 >> 6) <= lVar1) {
          uVar14 = 0;
          goto LAB_101dd2d1c;
        }
        lVar3 = lVar1;
        uVar15 = puVar18[lVar1];
      }
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      param_1 = *(undefined1 **)
                 (*(long *)(puVar5 + 0x38) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 8 +
                 lVar3 * 0x200);
      puStack_58 = param_1;
      func_0x000107c615f0(param_1);
    }
    if (param_1 == (undefined1 *)0x0) goto LAB_101dd2d20;
    lStack_d8 = lVar17;
    uStack_d0 = uVar11;
    if (param_2 == (undefined8 ******)0x0) {
LAB_101dd2c48:
      puVar7 = param_1;
      func_0x000107c43fb4();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
        func_0x000101dcff70();
        func_0x000107c613f8(&UNK_1106c3ba0,puVar7,0,0);
        *puVar7 = 8;
        func_0x000107c61654();
        func_0x000107c615e8(param_1);
        FUN_101dd26b8(puVar5,puVar18,uVar13,lStack_d8,uStack_d0);
        func_0x000107c6142c(puStack_c8);
        return puStack_c8;
      }
      func_0x000107c615e8(param_1);
      param_1 = puStack_c8;
      func_0x000107c61550();
      if ((((int)param_1 == 0) || ((long)puStack_c8 < 0)) || (((ulong)puStack_c8 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_c8 >> 0x3e == 0) {
          puVar8 = *(undefined1 **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined1 *)((ulong)puStack_c8 & 0xffffffffffffff8);
          if ((undefined1 *)0x7fffffffffffffff < puStack_c8) {
            puVar8 = puStack_c8;
          }
          func_0x000107c60480();
        }
        ppppppuVar9 = (undefined8 ******)(puVar8 + 1);
        param_1 = (undefined1 *)0x0;
        FUN_101dd20cc(0,ppppppuVar9,1,puStack_c8);
        puStack_c8 = param_1;
      }
      uVar11 = (ulong)puStack_c8 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar11 + 0x10);
      ppppppuVar2 = (undefined8 ******)(uVar14 + 1);
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar14) {
        param_1 = (undefined1 *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        ppppppuVar9 = ppppppuVar2;
        FUN_101dd20cc(param_1,ppppppuVar2,1,puStack_c8);
        uVar11 = (ulong)param_1 & 0xffffffffffffff8;
        puStack_c8 = param_1;
      }
      *(undefined8 *******)(uVar11 + 0x10) = ppppppuVar2;
      *(undefined1 **)(uVar11 + uVar14 * 8 + 0x20) = puVar7;
      uVar14 = uVar15;
      lVar16 = lVar3;
      lVar17 = lVar3;
      uVar11 = uVar15;
    }
    else {
      puVar7 = param_1;
      func_0x000107c43ef0();
      if (param_2[2] != (undefined8 *****)0x0) {
        func_0x000107c6068c(apppppuStack_a8,param_2[5]);
        puVar8 = puVar7;
        func_0x000107c6069c();
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)*(byte *)(param_2 + 4) & 0x3f);
        uVar10 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
        if (((ulong)param_2[(uVar10 >> 6) + 7] >> (uVar10 & 0x3f) & 1) != 0) {
          do {
            lStack_d8 = lVar16;
            uStack_d0 = uVar14;
            if (*(int *)((long)param_2[6] + uVar10 * 4) == (int)puVar7) goto LAB_101dd2c48;
            uVar10 = uVar10 + 1 & ~uVar12;
          } while (((ulong)param_2[(uVar10 >> 6) + 7] >> (uVar10 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c615e8();
      uVar14 = uVar15;
      lVar16 = lVar3;
    }
  } while( true );
}



/* Entry: 101dd2dcc; end: 101dd2e57;  */

void FUN_101dd2dcc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dd2e58; end: 101dd2e6b;  */

void FUN_101dd2e58(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110486610;
  if (lRam0000000112e2ded0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e2ded0 = param_1;
  }
  return;
}



/* Entry: 101dd2e6c; end: 101dd2eef;  */

void FUN_101dd2e6c(long param_1,long *param_2,long param_3)

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



/* Entry: 101dd2ef0; end: 101dd2f03;  */

void FUN_101dd2ef0(void)

{
  FUN_101dd1248();
  return;
}



/* Entry: 101dd2f04; end: 101dd2f0b;  */

void FUN_101dd2f04(long param_1,long param_2)

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



/* Entry: 101dd2f0c; end: 101dd2f5b;  */

void FUN_101dd2f0c(void)

{
  FUN_101dd289c();
  return;
}



/* Entry: 101dd2f5c; end: 101dd3403;  */

long FUN_101dd2f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110486668;
  func_0x000107c613fc(&UNK_110486668,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  func_0x0001000285a8(0x112e2ded8,&UNK_10da16c60);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  pcVar2 = FUN_101dd3404;
  func_0x0001000bdd8c(FUN_101dd3404,puVar1);
  uVar3 = 0;
  func_0x0001002bda44(0);
  func_0x000107c610f8();
  func_0x000103a6e79c(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101dd3404; end: 101dd3407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd3404(long *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 2;
  func_0x00010043c5c0(2,0xf,0,uStack_70,uStack_68,puVar1);
  func_0x0001000285a8(0x112e28fb8,&UNK_10da11450);
  func_0x000107c4cb54();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x000107c43434();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar10 = *(undefined8 *)(lVar9 + _DAT_11303ea70);
  func_0x0001000285a8(0x112e2dfb0,&UNK_10da19580);
  func_0x000107c6157c(uVar10);
  func_0x000107c42798();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar8 = 0;
  func_0x000101dcd944();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar2;
  *(undefined8 *)(lVar9 + 0x18) = uVar4;
  *(undefined8 *)(lVar9 + 0x20) = uVar5;
  *(undefined8 *)(lVar9 + 0x28) = uVar3;
  *(undefined8 *)(lVar9 + 0x30) = uVar10;
  *(undefined8 *)(lVar9 + 0x38) = uVar6;
  func_0x0001000834e4(auStack_88);
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_1104861d0;
  *param_1 = lVar9;
  return;
}



/* Entry: 101dd3408; end: 101dd3453;  */

void FUN_101dd3408(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dd3454; end: 101dd3473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd3454(long *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 2;
  func_0x00010043c5c0(2,0xf,0,uStack_70,uStack_68,puVar1);
  func_0x0001000285a8(0x112e28fb8,&UNK_10da11450);
  func_0x000107c4cb54();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x000107c43434();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar10 = *(undefined8 *)(lVar9 + _DAT_11303ea70);
  func_0x0001000285a8(0x112e2dfb0,&UNK_10da19580);
  func_0x000107c6157c(uVar10);
  func_0x000107c42798();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar8 = 0;
  func_0x000101dcd944();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar2;
  *(undefined8 *)(lVar9 + 0x18) = uVar4;
  *(undefined8 *)(lVar9 + 0x20) = uVar5;
  *(undefined8 *)(lVar9 + 0x28) = uVar3;
  *(undefined8 *)(lVar9 + 0x30) = uVar10;
  *(undefined8 *)(lVar9 + 0x38) = uVar6;
  func_0x0001000834e4(auStack_88);
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_1104861d0;
  *param_1 = lVar9;
  return;
}



/* Entry: 101dd3474; end: 101dd3513;  */

void FUN_101dd3474(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd3514; end: 101dd3523;  */

void FUN_101dd3514(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dd3524; end: 101dd361b;  */

long FUN_101dd3524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110486750;
  func_0x000107c613fc(&UNK_110486750,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112e2dfb8,&UNK_10da16ca0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pcVar2 = FUN_101dd36c4;
  func_0x0001000bdd8c(FUN_101dd36c4,puVar1);
  uVar3 = 0;
  func_0x0001002c7a44(0);
  func_0x000107c610f8();
  func_0x00010079a74c(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101dd361c; end: 101dd36c3;  */

void FUN_101dd361c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1104867a0;
  func_0x000107c613fc(&UNK_1104867a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = 0x81;
  func_0x000100859150(0x81,0,0x48,4,0,0,&UNK_10da16d30,puVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(puVar1);
  *param_1 = uVar2;
  return;
}


