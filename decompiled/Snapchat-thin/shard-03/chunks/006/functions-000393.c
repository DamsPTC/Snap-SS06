/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a45470; end: 102a4550f;  */

int FUN_102a45470(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a45510; end: 102a455bb;  */

void FUN_102a45510(void)

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



/* Entry: 102a455bc; end: 102a455bf;  */

void FUN_102a455bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee4490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0f820;
  func_0x000107c61520(&UNK_10db0f820,&UNK_11058bfc8);
  puRam0000000112ee4490 = puVar1;
  return;
}



/* Entry: 102a455c0; end: 102a455ff;  */

void FUN_102a455c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee4490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0f820;
  func_0x000107c61520(&UNK_10db0f820,&UNK_11058bfc8);
  puRam0000000112ee4490 = puVar1;
  return;
}



/* Entry: 102a45600; end: 102a45777;  */

bool FUN_102a45600(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a45778; end: 102a4581f;  */

long FUN_102a45778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_58;
  
  func_0x000107c613fc();
  uStack_58 = 0;
  func_0x0001000285a8(0x112d53338,&UNK_10d919ae0);
  func_0x000107c613fc();
  puVar1 = &uStack_58;
  func_0x00010006c248();
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 **)(unaff_x20 + 0x40) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return unaff_x20;
}



/* Entry: 102a45820; end: 102a45837;  */

void FUN_102a45820(long *param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_1,1)) {
    *param_1 = *param_1 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a45838);
  (*pcVar1)();
}



/* Entry: 102a45838; end: 102a45df3;  */

undefined8
FUN_102a45838(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
             undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  long lVar13;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar11 = *unaff_x20;
  uVar12 = unaff_x20[8];
  uVar7 = param_2;
  func_0x000107c6157c(uVar12);
  func_0x0001000c74f0(&uStack_88);
  func_0x000107c61574(uVar12);
  if (param_4 == uStack_88) {
    lVar13 = unaff_x20[7];
    lVar2 = lVar13;
    func_0x000107c3dfc0();
    if ((lVar2 == 2) || (func_0x000107c4d668(), lVar13 == 2)) {
      uStack_88 = 0;
      lStack_80 = 0xe000000000000000;
      func_0x000107c602fc(0x2e);
      func_0x000107c6142c(lStack_80);
      uStack_88 = 0xd000000000000016;
      lStack_80 = 0x800000010f0e49b0;
      func_0x000107c5fb78(param_2,param_3);
      pcVar10 = ": UI container unavailable";
      uVar12 = 0xd000000000000016;
    }
    else {
      func_0x0001000d224c(&uStack_88);
      uVar1 = uStack_88;
      if (uStack_88 != 0) {
        uVar3 = uStack_88;
        func_0x000107c3d138();
        func_0x000107c61180();
        if (uVar3 == 0) {
LAB_102a45d5c:
          uStack_88 = 0;
          lStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x32);
          func_0x000107c6142c(lStack_80);
          uStack_88 = 0xd000000000000016;
          lStack_80 = 0x800000010f0e49b0;
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c5fb78(0xd00000000000001a,0x800000010f0e4a10);
          lVar2 = lStack_80;
          func_0x0001007d6c6c(1,uStack_88,lStack_80,uVar11,&PTR_DAT_11058c030);
          func_0x000107c6142c(lVar2);
          func_0x000107c615e8(uVar1);
          return 0;
        }
        uVar4 = uVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5faec();
        uVar8 = uVar7;
        func_0x000107c61170(uVar4);
        if ((uVar5 == param_2) && (uVar7 == param_3)) {
          func_0x000107c6142c(uVar7);
        }
        else {
          uVar8 = uVar7;
          func_0x000107c605b8(uVar5,uVar7,param_2,param_3,0);
          func_0x000107c6142c(uVar7);
          if ((uVar5 & 1) == 0) {
            func_0x000107c61170(uVar3);
            goto LAB_102a45d5c;
          }
        }
        uVar12 = unaff_x20[6];
        func_0x0001000d224c(&uStack_88);
        lVar2 = lStack_80;
        uVar7 = uStack_88;
        uVar4 = uStack_88;
        func_0x000107c614f0();
        uVar5 = uVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        uVar5 = uVar8;
        (**(code **)(lVar2 + 8))(uVar6,uVar8,uVar4);
        func_0x000107c615e8(uVar7);
        func_0x000107c6142c(uVar8);
        func_0x000107c5915c(uVar3);
        uVar7 = uVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (uVar7 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar5);
        }
        func_0x000107c51c34(uVar1);
        func_0x000107c61170(uVar7);
        func_0x0001000d224c(&uStack_88);
        func_0x0001000a8868(&uStack_88,uStack_70);
        uVar9 = unaff_x20[4];
        uVar7 = uVar3;
        FUN_102a45df4(uVar3,uVar9,unaff_x20[5],uVar12,param_5,param_6);
        (**(code **)(lStack_68 + 8))(param_1,uVar7,uVar9,uStack_70,lStack_68);
        func_0x000107c61574(uVar9);
        func_0x0001000834e4(&uStack_88);
        if ((param_1 & 1) == 0) {
          uStack_88 = 0;
          lStack_80 = -0x2000000000000000;
          func_0x000107c602fc(0x42);
          func_0x000107c5fb78(0xd000000000000026,0x800000010f0e4a30);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c5fb78(0xd00000000000001a,0x800000010f0e4a60);
          lVar2 = lStack_80;
          uVar6 = uStack_88;
          func_0x0001007d6c6c(1,uStack_88,lStack_80,uVar11,&PTR_DAT_11058c030);
          func_0x000107c6142c(lVar2);
          func_0x0001000d224c(&uStack_88);
          lVar2 = lStack_80;
          uVar7 = uStack_88;
          uVar4 = uStack_88;
          func_0x000107c614f0(uStack_88);
          uVar5 = uVar3;
          func_0x000107c4b1dc(uVar3);
          func_0x000107c61180();
          uVar8 = uVar5;
          func_0x000107c5faec();
          func_0x000107c61170(uVar5);
          (**(code **)(lVar2 + 0x18))(uVar8,uVar6,uVar4,lVar2);
          func_0x000107c615e8(uVar7);
          func_0x000107c6142c(uVar6);
          func_0x000107c615e8(uVar1);
        }
        else {
          (*param_5)(0);
          func_0x000107c615e8(uVar1);
        }
        func_0x000107c61170(uVar3);
        return 1;
      }
      uStack_88 = 0;
      lStack_80 = 0xe000000000000000;
      func_0x000107c602fc(0x36);
      func_0x000107c5fb78(0xd000000000000016,0x800000010f0e49b0);
      func_0x000107c5fb78(param_2,param_3);
      pcVar10 = ": lens session has ended";
      uVar12 = 0xd00000000000001e;
    }
  }
  else {
    uStack_88 = 0;
    lStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x30);
    func_0x000107c6142c(lStack_80);
    uStack_88 = 0xd000000000000016;
    lStack_80 = 0x800000010f0e49b0;
    func_0x000107c5fb78(param_2,param_3);
    pcVar10 = "Skipping recovery for ";
    uVar12 = 0xd000000000000018;
  }
  func_0x000107c5fb78(uVar12,(ulong)pcVar10 | 0x8000000000000000);
  lVar2 = lStack_80;
  func_0x0001007d6c6c(1,uStack_88,lStack_80,uVar11,&PTR_DAT_11058c030);
  func_0x000107c6142c(lVar2);
  return 0;
}



/* Entry: 102a45df4; end: 102a45e9b;  */

undefined1  [16]
FUN_102a45df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_11058c060;
  func_0x000107c613fc(&UNK_11058c060,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = unaff_x20;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_102a4639c;
  return auVar2;
}



/* Entry: 102a45e9c; end: 102a46227;  */

void FUN_102a45e9c(char param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  code *in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  lVar4 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar8 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  func_0x0001000d224c(&puStack_98);
  puVar2 = puStack_98;
  func_0x000107c614f0(puStack_98);
  (**(code **)(lStack_90 + 0x18))(lVar8,lVar4,puVar2,lStack_90);
  func_0x000107c615e8(puStack_98);
  if (param_1 == '\x01') {
    func_0x0001000d224c(&puStack_98);
    pcVar1 = pcStack_78;
    puVar2 = puStack_80;
    func_0x0001000a8868(&puStack_98,puStack_80);
    lVar3 = lVar8;
    (**(code **)(pcVar1 + 8))(lVar8,lVar4,puVar2,pcVar1);
    func_0x0001000834e4(&puStack_98);
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x36);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010f0e4aa0);
    func_0x000107c5fb78(lVar8,lVar4);
    func_0x000107c6142c(lVar4);
    uVar7 = 0x800000010f0e4ac0;
    func_0x000107c5fb78(0xd000000000000015,0x800000010f0e4ac0);
    if (lVar3 == 0) {
      uVar7 = 0xe700000000000000;
      lVar8 = 0x6e776f6e6b6e75;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c5c1d4(lVar3);
      func_0x000107c61180();
      lVar8 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    func_0x000107c5fb78(lVar8,uVar7);
    func_0x000107c6142c(uVar7);
    lVar8 = lStack_90;
    func_0x0001007d6c6c(1,puStack_98,lStack_90,in_x7,&PTR_DAT_11058c030);
    func_0x000107c6142c(lVar8);
    func_0x0001000d224c(&uStack_68);
    uVar5 = uStack_68;
    func_0x000107c61150(uStack_68,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_presentPaywallForLens_at_onDismi_112621000);
    if ((uVar5 & 1) == 0) {
      func_0x000107c615e8(uStack_68);
      func_0x0001000d224c(&puStack_98);
      puVar2 = puStack_98;
      func_0x000107c4efa4(puStack_98);
      func_0x000107c615e8(puVar2);
    }
    else {
      puVar2 = &UNK_11058c088;
      func_0x000107c613fc(&UNK_11058c088,0x20,7);
      *(code **)(puVar2 + 0x10) = in_x5;
      *(undefined8 *)(puVar2 + 0x18) = in_x6;
      pcStack_78 = FUN_102a463b0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f3aa0;
      puStack_80 = &UNK_11058c0a0;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c6157c(in_x6);
      func_0x000107c4efa8(uStack_68);
      func_0x000107c615e8(uStack_68);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puStack_70);
    }
    (*in_x5)(1);
    func_0x000107c61170(lVar3);
  }
  else {
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(lStack_90);
    puStack_98 = (undefined *)0xd000000000000023;
    lStack_90 = 0x800000010f0e4ae0;
    func_0x000107c5fb78(lVar8,lVar4);
    func_0x000107c6142c(lVar4);
    lVar8 = lStack_90;
    func_0x0001007d6c6c(1,puStack_98,lStack_90,in_x7,&PTR_DAT_11058c030);
    func_0x000107c6142c(lVar8);
  }
  return;
}



/* Entry: 102a46228; end: 102a46293;  */

void FUN_102a46228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102a46294; end: 102a462d7;  */

undefined8 FUN_102a46294(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x40);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  return uStack_28;
}



/* Entry: 102a462d8; end: 102a46333;  */

void FUN_102a462d8(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x40);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_102a45820,0,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102a46334; end: 102a46357;  */

uint FUN_102a46334(uint param_1)

{
  FUN_102a45838();
  return param_1 & 1;
}



/* Entry: 102a46358; end: 102a4637b;  */

void FUN_102a46358(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102a46368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102a4637c; end: 102a4639b;  */

void FUN_102a4637c(void)

{
  func_0x000107c61168(&PTR_PTR_112ee44d8);
  return;
}



/* Entry: 102a4639c; end: 102a463af;  */

void FUN_102a4639c(char param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = lVar4;
  func_0x000107c4b1dc(lVar4,lVar4,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61180();
  lVar11 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  func_0x0001000d224c(&puStack_98);
  puVar5 = puStack_98;
  func_0x000107c614f0(puStack_98);
  (**(code **)(lStack_90 + 0x18))(lVar11,lVar6,puVar5,lStack_90);
  func_0x000107c615e8(puStack_98);
  if (param_1 == '\x01') {
    func_0x0001000d224c(&puStack_98);
    pcVar3 = pcStack_78;
    puVar5 = puStack_80;
    func_0x0001000a8868(&puStack_98,puStack_80);
    lVar4 = lVar11;
    (**(code **)(pcVar3 + 8))(lVar11,lVar6,puVar5,pcVar3);
    func_0x0001000834e4(&puStack_98);
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x36);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010f0e4aa0);
    func_0x000107c5fb78(lVar11,lVar6);
    func_0x000107c6142c(lVar6);
    uVar9 = 0x800000010f0e4ac0;
    func_0x000107c5fb78(0xd000000000000015,0x800000010f0e4ac0);
    if (lVar4 == 0) {
      uVar9 = 0xe700000000000000;
      lVar11 = 0x6e776f6e6b6e75;
    }
    else {
      lVar6 = lVar4;
      func_0x000107c5c1d4(lVar4);
      func_0x000107c61180();
      lVar11 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    func_0x000107c5fb78(lVar11,uVar9);
    func_0x000107c6142c(uVar9);
    lVar11 = lStack_90;
    func_0x0001007d6c6c(1,puStack_98,lStack_90,uVar10,&PTR_DAT_11058c030);
    func_0x000107c6142c(lVar11);
    func_0x0001000d224c(&uStack_68);
    uVar7 = uStack_68;
    func_0x000107c61150(uStack_68,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_presentPaywallForLens_at_onDismi_112621000);
    if ((uVar7 & 1) == 0) {
      func_0x000107c615e8(uStack_68);
      func_0x0001000d224c(&puStack_98);
      puVar5 = puStack_98;
      func_0x000107c4efa4(puStack_98);
      func_0x000107c615e8(puVar5);
    }
    else {
      puVar5 = &UNK_11058c088;
      func_0x000107c613fc(&UNK_11058c088,0x20,7);
      *(code **)(puVar5 + 0x10) = pcVar1;
      *(undefined8 *)(puVar5 + 0x18) = uVar2;
      pcStack_78 = FUN_102a463b0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f3aa0;
      puStack_80 = &UNK_11058c0a0;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c6157c(uVar2);
      func_0x000107c4efa8(uStack_68);
      func_0x000107c615e8(uStack_68);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_70);
    }
    (*pcVar1)(1);
    func_0x000107c61170(lVar4);
  }
  else {
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(lStack_90);
    puStack_98 = (undefined *)0xd000000000000023;
    lStack_90 = 0x800000010f0e4ae0;
    func_0x000107c5fb78(lVar11,lVar6);
    func_0x000107c6142c(lVar6);
    lVar4 = lStack_90;
    func_0x0001007d6c6c(1,puStack_98,lStack_90,uVar10,&PTR_DAT_11058c030);
    func_0x000107c6142c(lVar4);
  }
  return;
}



/* Entry: 102a463b0; end: 102a463db;  */

void FUN_102a463b0(ulong param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),2);
  }
  return;
}



/* Entry: 102a463dc; end: 102a46437;  */

void FUN_102a463dc(long param_1,long param_2)

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



/* Entry: 102a46438; end: 102a4658f;  */

/* WARNING: Possible PIC construction at 0x000102a46560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a46570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a46564) */
/* WARNING: Removing unreachable block (ram,0x000102a46574) */

void FUN_102a46438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_5,param_6);
  if ((param_8 & 0xff) < 0xfe) {
    uVar1 = param_8 >> 6 & 3;
    uVar5 = 0x800000010f0e4b10;
    uVar4 = 0xd000000000000016;
    if (uVar1 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x6e776f6e6b6e75;
    }
    pcVar2 = "lens_plus_limit_reached";
    uVar3 = 0xd000000000000016;
    if (uVar1 != 0) {
      pcVar2 = "platinum_limit_reached";
      uVar3 = 0xd000000000000017;
    }
    if (uVar1 < 2) {
      uVar4 = uVar3;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar4 = 0x73736563637573;
    uVar5 = 0xe700000000000000;
  }
  func_0x000107c5fadc(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fadc(param_3,param_4);
  func_0x0001060da7d0(uVar6,param_1,param_5,uVar4,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a46590; end: 102a466fb;  */

/* WARNING: Possible PIC construction at 0x000102a466c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a466d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a466cc) */
/* WARNING: Removing unreachable block (ram,0x000102a466dc) */

void FUN_102a46590(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  param_9 = param_9 >> 6;
  uVar3 = 0x800000010f0e4b10;
  uVar2 = 0xd000000000000016;
  if (param_9 != 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  pcVar1 = "lens_plus_limit_reached";
  uVar4 = 0xd000000000000016;
  if (param_9 != 0) {
    pcVar1 = "platinum_limit_reached";
    uVar4 = 0xd000000000000017;
  }
  if (param_9 < 2) {
    uVar3 = (ulong)pcVar1 | 0x8000000000000000;
    uVar2 = uVar4;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fadc(param_4,param_5);
  if (param_1 == '\0') {
    func_0x0001060dab04(uVar4,param_2,param_6,uVar2,param_4,1);
  }
  else if (param_1 == '\x01') {
    func_0x0001060dae38();
  }
  else {
    func_0x0001060db16c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102a466fc; end: 102a4671f;  */

void FUN_102a466fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a46720; end: 102a4676f;  */

void FUN_102a46720(void)

{
  FUN_102a46438();
  return;
}



/* Entry: 102a46770; end: 102a4688b;  */

uint FUN_102a46770(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7b < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x7c;
  }
  uVar2 = ((uint)(*(byte *)(param_1 + 2) >> 6) | (*(byte *)(param_1 + 2) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7b < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 102a4688c; end: 102a468ab;  */

void FUN_102a4688c(void)

{
  func_0x000107c61168(&PTR_PTR_112ee45a8);
  return;
}



/* Entry: 102a468ac; end: 102a46923;  */

void FUN_102a468ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 102a46924; end: 102a46f73;  */

undefined * FUN_102a46924(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar13 = *unaff_x20;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a46f74);
    (*pcVar1)();
  }
  puVar3 = param_2;
  func_0x000107c403fc();
  if ((((ulong)puVar3 & 1) == 0) && (puVar3 = param_2, func_0x000107c403f4(), (int)puVar3 == 0)) {
    func_0x0001000d224c(&puStack_a0);
    puVar3 = puStack_a0;
    if (puStack_a0 != (undefined *)0x0) {
      func_0x0001000d224c(&puStack_a0);
      if (puStack_a0 != (undefined *)0x0) {
        puVar16 = param_2;
        func_0x000107c428b4();
        func_0x000107c61180();
        uVar13 = param_3;
        if (puVar16 == (undefined *)0x0) {
          func_0x000107c5faec();
          uVar13 = param_3;
          func_0x000107c5fadc();
          func_0x000107c6142c(param_3);
        }
        puVar8 = param_2;
        func_0x000107c5b6c0();
        func_0x000107c61180();
        uVar12 = uVar13;
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c5faec();
          uVar12 = uVar13;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar13);
        }
        puVar4 = param_2;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar12);
        }
        func_0x000107c4fe1c(puStack_a0);
        func_0x000107c615e8(puStack_a0);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar4);
      }
      FUN_102a46f74(param_2);
      func_0x000107c6071c();
      func_0x0001000d224c(&puStack_a0);
      func_0x0001000a8868(&puStack_a0,puStack_88);
      puVar8 = puStack_88;
      (**(code **)(pcStack_80 + 8))(puStack_88,pcStack_80);
      func_0x0001000834e4(&puStack_a0);
      puVar4 = param_2;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      pcVar1 = pcStack_80;
      if (puVar4 == (undefined *)0x0) {
        pcVar11 = pcStack_80;
        func_0x000107c5faec();
        pcVar1 = pcVar11;
        func_0x000107c5fadc();
        func_0x000107c6142c(pcVar11);
      }
      puVar5 = param_2;
      func_0x000107c428b4();
      func_0x000107c61180();
      pcVar11 = pcVar1;
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c5faec();
        pcVar11 = pcVar1;
        func_0x000107c5fadc();
        func_0x000107c6142c(pcVar1);
      }
      puVar6 = param_2;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(pcVar11);
      }
      func_0x000107c4a558();
      puVar7 = param_2;
      func_0x000107c4e33c();
      func_0x000107c61180();
      puVar14 = PTR___sSSSHsWP_11034da90;
      puVar16 = PTR___sSSN_11034da80;
      puVar15 = puVar7;
      func_0x000107c5f9e8();
      func_0x000107c61170(puVar7);
      puVar7 = puVar15;
      func_0x000107c5f9dc(puVar15,puVar16,puVar16,puVar14);
      func_0x000107c6142c(puVar15);
      puVar14 = param_2;
      func_0x000107c3eb80();
      func_0x000107c61180();
      if (puVar14 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar15 = puVar14;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar14);
        puVar14 = puVar15;
        func_0x000107c5ee20(puVar15,puVar16);
        func_0x00010006c090(puVar15,puVar16);
      }
      puVar16 = param_2;
      func_0x000107c4b678();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        uVar13 = 0;
        FUN_102a481c4(0,0x112d550a8,&PTR_PTR_1126b1d00);
        puVar15 = puVar16;
        func_0x000107c5fc54(puVar16,uVar13);
        func_0x000107c61170(puVar16);
      }
      puVar9 = puVar15;
      FUN_102a47eac();
      func_0x000107c6142c(puVar15);
      if (puVar9 == (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        uVar13 = 0;
        FUN_102a481c4(0,0x112d5d238,&PTR_PTR_1126b1cf0);
        puVar16 = puVar9;
        func_0x000107c5fc48(puVar9,uVar13);
        func_0x000107c6142c(puVar9);
      }
      puVar15 = &UNK_11058c1a0;
      func_0x000107c613fc(&UNK_11058c1a0,0x38,7);
      *(undefined8 *)(puVar15 + 0x10) = param_1;
      *(undefined8 **)(puVar15 + 0x18) = unaff_x20;
      *(undefined **)(puVar15 + 0x20) = param_2;
      *(undefined **)(puVar15 + 0x28) = puVar8;
      *(undefined **)(puVar15 + 0x30) = puVar2;
      pcStack_80 = FUN_102a4817c;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1010ea240;
      puStack_88 = &UNK_11058c1b8;
      ppuVar10 = &puStack_a0;
      puStack_78 = puVar15;
      func_0x000107c60bc4();
      puVar8 = puStack_78;
      func_0x000107c6157c();
      func_0x000107c61174(param_2);
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar8);
      func_0x000107c445b8(puVar3);
      func_0x000107c615e8(puVar3);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar14);
      goto LAB_102a46a70;
    }
    uVar12 = 0xd00000000000001d;
    func_0x0001007d6c6c(3,0xd00000000000001d,0x800000010f0e4b70,uVar13,&PTR_DAT_11058c1e0);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar12);
    }
    puVar16 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar8 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  else {
    uVar12 = 0xd00000000000003e;
    func_0x0001007d6c6c(3,0xd00000000000003e,0x800000010f0e4b90,uVar13,&PTR_DAT_11058c1e0);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar12);
    }
    puVar16 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar8 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c48368(puVar16);
  func_0x000107c6142c(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar8);
  func_0x000107c4d664(puVar2);
LAB_102a46a70:
  func_0x000107c61170(puVar16);
  return puVar2;
}



/* Entry: 102a46f74; end: 102a47033;  */

void FUN_102a46f74(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c4a558();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107c4adb4();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c49e84();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x0001000d224c(&uStack_38);
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (param_1 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
        }
        func_0x000107c5cda0(uStack_38);
        func_0x000107c615e8(uStack_38);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 102a47034; end: 102a47127;  */

void FUN_102a47034(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x000107c6071c();
  dVar2 = (dVar2 - param_1) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4711c);
    (*pcVar1)();
  }
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a47120);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a47124);
    (*pcVar1)();
  }
  if (param_9 != 0) {
    FUN_102a47128(param_9,param_10,param_2,param_3,param_4,param_5,param_6,param_7,(long)dVar2,
                  param_11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a47128);
  (*pcVar1)();
}



/* Entry: 102a47128; end: 102a4795b;  */

void FUN_102a47128(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,ulong param_6,long param_7,undefined *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  
  if (param_8 == (undefined *)0x0) {
    uVar9 = param_2;
    func_0x0001000d224c(&puStack_110);
    puVar4 = puStack_110;
    if (puStack_110 != (undefined *)0x0) {
      lVar2 = param_1;
      func_0x000107c428b4();
      func_0x000107c61180();
      uVar13 = uVar9;
      if (lVar2 == 0) {
        func_0x000107c5faec();
        uVar13 = uVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar9);
      }
      lVar14 = param_1;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      uVar10 = uVar13;
      if (lVar14 == 0) {
        func_0x000107c5faec();
        uVar10 = uVar13;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar13);
      }
      lVar3 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar9 = uVar10;
      if (lVar3 == 0) {
        func_0x000107c5faec();
        uVar9 = uVar10;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar10);
      }
      func_0x000107c4fe24(puVar4);
      func_0x000107c615e8(puVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar3);
    }
    puVar4 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    func_0x000107c61434(param_4);
    FUN_102a48224();
    lVar2 = param_1;
    func_0x000107c50374();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar9);
    }
    puVar5 = puVar4;
    func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_6 >> 0x3c < 0xf) {
      uVar9 = param_5;
      func_0x000107c5ee20(param_5,param_6);
    }
    else {
      uVar9 = 0;
    }
    if (param_7 == 0) {
      lVar14 = 0;
    }
    else {
      uVar13 = 0;
      FUN_102a481c4(0,0x112d550a8,&PTR_PTR_1126b1d00);
      lVar14 = param_7;
      func_0x000107c5fc48(param_7,uVar13);
    }
    puVar6 = PTR_PTR_1126b0278;
    func_0x000107c610f8();
    func_0x000107c48368();
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(param_7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar14);
  }
  else {
    uVar13 = *unaff_x20;
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0xe000000000000000;
    func_0x000107c614b0(param_8);
    func_0x000107c602fc(0x18);
    uVar9 = 0xeb00000000206f74;
    func_0x000107c5fb78(0x2074736575716552,0xeb00000000206f74);
    lVar2 = param_1;
    func_0x000107c428b4(param_1);
    func_0x000107c61180();
    lVar14 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5fb78(lVar14,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0x3a64656c69616620,0xe900000000000020);
    uVar9 = 0x112d393f0;
    puStack_90 = param_8;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&puStack_90,&puStack_110,uVar9,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar9 = uStack_108;
    puVar5 = puStack_110;
    func_0x0001007d6c6c(3,puStack_110,uStack_108,uVar13,&PTR_DAT_11058c1e0);
    func_0x000107c6142c(uVar9);
    func_0x0001000d224c(&puStack_110);
    puVar4 = puStack_110;
    if (puStack_110 != (undefined *)0x0) {
      lVar2 = param_1;
      func_0x000107c428b4();
      func_0x000107c61180();
      puVar6 = puVar5;
      if (lVar2 == 0) {
        func_0x000107c5faec();
        puVar6 = puVar5;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar5);
      }
      lVar14 = param_1;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      puVar8 = puVar6;
      if (lVar14 == 0) {
        func_0x000107c5faec();
        puVar8 = puVar6;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar6);
      }
      lVar3 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar5 = puVar8;
      if (lVar3 == 0) {
        func_0x000107c5faec();
        puVar5 = puVar8;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar8);
      }
      func_0x000107c4fe20(puVar4);
      func_0x000107c615e8(puVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar3);
    }
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar2 = param_1;
    func_0x000107c50374();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    puVar6 = PTR_PTR_1126b0278;
    func_0x000107c610f8();
    puVar5 = puVar4;
    func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c48368();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(param_8);
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c61174();
  puVar4 = puVar6;
  func_0x000107c5bd10();
  FUN_102a47a28(param_1,puVar4 == (undefined *)0x1);
  puVar4 = puVar6;
  func_0x000107c5bd10();
  func_0x000107c61170(puVar6);
  if (puVar4 == (undefined *)0x1) {
    FUN_102a47afc(0,0xfe,param_1);
    func_0x000107c4d664(param_11);
    func_0x000107c61170(puVar6);
  }
  else {
    puVar4 = puVar6;
    func_0x000107c5bd10();
    puStack_90 = puVar4;
    uStack_88 = param_3;
    uStack_80 = param_5;
    uStack_78 = param_6;
    puStack_70 = param_8;
    func_0x000107c614b0();
    func_0x000100de78a0(param_5,param_6);
    func_0x0001000d224c(&puStack_110);
    pcVar1 = pcStack_f0;
    puVar4 = puStack_f8;
    func_0x0001000a8868(&puStack_110,puStack_f8);
    ppuVar7 = &puStack_90;
    (**(code **)(pcVar1 + 8))(ppuVar7,puVar4,pcVar1);
    func_0x0001000834e4(&puStack_110);
    FUN_102a47afc(ppuVar7,puVar4,param_1);
    func_0x0001000d224c(auStack_e0);
    func_0x0001000a8868(auStack_e0,uStack_c8);
    puVar5 = puVar4;
    (**(code **)(lStack_c0 + 8))(&uStack_b8,ppuVar7,puVar4,uStack_c8,lStack_c0);
    if (lStack_b0 == 0) {
      func_0x000107c4d664(param_11);
      func_0x0001000b44c0(param_5,param_6);
      func_0x000107c614ac(param_8);
    }
    else {
      lVar2 = param_1;
      func_0x000107c428b4();
      func_0x000107c61180();
      lVar14 = lVar2;
      func_0x000107c5faec();
      puVar11 = puVar5;
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5faec();
      puVar12 = puVar11;
      func_0x000107c61170(lVar2);
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar9 = unaff_x20[8];
      puVar8 = &UNK_11058c210;
      func_0x000107c613fc(&UNK_11058c210,0x98,7);
      *(undefined8 **)(puVar8 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar8 + 0x18) = uStack_b8;
      *(long *)(puVar8 + 0x20) = lStack_b0;
      *(undefined8 *)(puVar8 + 0x28) = uStack_a8;
      *(undefined8 *)(puVar8 + 0x38) = uStack_98;
      *(undefined8 *)(puVar8 + 0x30) = uStack_a0;
      *(long *)(puVar8 + 0x40) = lVar2;
      *(undefined **)(puVar8 + 0x48) = puVar12;
      *(undefined8 *)(puVar8 + 0x50) = param_2;
      *(long *)(puVar8 + 0x58) = lVar14;
      *(undefined **)(puVar8 + 0x60) = puVar5;
      *(long *)(puVar8 + 0x68) = lVar3;
      *(undefined **)(puVar8 + 0x70) = puVar11;
      *(undefined ***)(puVar8 + 0x78) = ppuVar7;
      puVar8[0x80] = (char)puVar4;
      *(undefined8 *)(puVar8 + 0x88) = param_11;
      *(undefined **)(puVar8 + 0x90) = puVar6;
      pcStack_f0 = FUN_102a484b4;
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0x42000000;
      puStack_100 = &UNK_1000f6b44;
      puStack_f8 = &UNK_11058c228;
      ppuVar7 = &puStack_110;
      puStack_e8 = puVar8;
      func_0x000107c60bc4(ppuVar7);
      puVar4 = puStack_e8;
      func_0x000107c61174(puVar6);
      func_0x000107c6157c(unaff_x20);
      func_0x000107c61174(param_11);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar9);
      func_0x0001000b44c0(param_5,param_6);
      func_0x000107c614ac(param_8);
      func_0x000107c60bd0(ppuVar7);
    }
    func_0x000107c61170(puVar6);
    func_0x0001000834e4(auStack_e0);
  }
  return;
}



/* Entry: 102a4795c; end: 102a479b7; -[_TtC24AILensRemoteApiRPCPlugin25AILensRemoteApiRPCHandler handleRequest:] */

void FUN_102a4795c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_102a46924(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102a479b8; end: 102a47a27; -[_TtC24AILensRemoteApiRPCPlugin25AILensRemoteApiRPCHandler reset] */

void FUN_102a479b8(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 102a47a28; end: 102a47afb;  */

void FUN_102a47a28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uStack_48;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  uVar1 = param_1;
  func_0x000107c4a558();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107c4adb4();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c49e84();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x0001000d224c(&uStack_48);
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (param_1 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(CONCAT44(uVar4,uVar3));
        }
        func_0x000107c5cda0(uStack_48);
        func_0x000107c615e8(uStack_48);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 102a47afc; end: 102a47e13;  */

void FUN_102a47afc(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  uVar4 = uStack_70;
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar1 = param_3;
  func_0x000107c428b4(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c5b6c0(param_3);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c61170(uVar1);
  func_0x000107c4b1dc(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  (**(code **)(lStack_68 + 8))
            (uVar2,uVar4,uVar3,uVar5,uVar1,uVar6,param_1,param_2,uStack_70,lStack_68);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 102a47e14; end: 102a47e87;  */

void FUN_102a47e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102a47e88; end: 102a47eab;  */

void FUN_102a47e88(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102a47e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102a47eac; end: 102a4817b;  */

undefined * FUN_102a47eac(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar2 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    puStack_68 = (undefined *)0x0;
  }
  else {
    uStack_a0 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uStack_a0 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uStack_a0;
      }
      func_0x000107c60480();
    }
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar7 != 0) {
      func_0x0001010ea654(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4817c);
        (*pcVar1)();
      }
      uVar10 = 0;
      uStack_88 = param_1 & 0xc000000000000001;
      uStack_98 = uVar7;
      uStack_90 = param_1;
      do {
        puVar5 = puStack_68;
        uVar7 = uStack_90;
        if (uStack_88 == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102a48160);
            (*pcVar1)();
          }
          if (*(ulong *)(uStack_a0 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102a48164);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uStack_90 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar10;
          func_0x00010101b75c();
        }
        uVar12 = uVar3;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        func_0x000107c5edb4(lVar2);
        func_0x000107c61170(uVar12);
        uVar12 = uVar3;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) {
          uVar11 = 0;
          uVar12 = 0xc000000000000000;
          uVar6 = uVar7;
        }
        else {
          uVar11 = uVar12;
          func_0x000107c5ee30();
          uVar6 = uVar7;
          func_0x000107c61170(uVar12);
          uVar12 = uVar7;
        }
        uVar7 = uVar3;
        func_0x000107c4a804();
        func_0x000107c61180();
        puStack_70 = puVar5;
        if (uVar7 == 0) {
          uVar8 = 0;
          uVar6 = 0xf000000000000000;
        }
        else {
          uVar8 = uVar7;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar7);
        }
        func_0x000107c5ed90();
        uVar4 = uVar11;
        func_0x000107c5ee20(uVar11,uVar12);
        if (uVar6 >> 0x3c < 0xf) {
          uVar9 = uVar8;
          func_0x000107c5ee20(uVar8,uVar6);
          func_0x0001000b44c0(uVar8,uVar6);
        }
        else {
          uVar9 = 0;
        }
        puVar5 = PTR_PTR_1126b1cf0;
        func_0x000107c610f8();
        func_0x000107c49150();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar9);
        func_0x00010006c090(uVar11,uVar12);
        (**(code **)(lStack_80 + 8))(lVar2,lStack_78);
        func_0x000107c61170(uVar3);
        puStack_68 = puStack_70;
        uVar7 = *(ulong *)(puStack_70 + 0x10);
        if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar7) {
          func_0x0001010ea654(1 < *(ulong *)(puStack_70 + 0x18),uVar7 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        *(undefined **)(puStack_68 + uVar7 * 8 + 0x20) = puVar5;
      } while (uStack_98 != uVar10);
    }
  }
  return puStack_68;
}



/* Entry: 102a4817c; end: 102a481a7;  */

void FUN_102a4817c(void)

{
  long unaff_x20;
  
  FUN_102a47034(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a481a8; end: 102a481c3;  */

void FUN_102a481a8(long param_1,long param_2)

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



/* Entry: 102a481c4; end: 102a48203;  */

void FUN_102a481c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a48204; end: 102a48223;  */

void FUN_102a48204(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4648);
  return;
}



/* Entry: 102a48224; end: 102a484b3;  */

undefined * FUN_102a48224(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar3 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    puStack_68 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = param_1;
      if (-1 < (long)param_1) {
        uVar10 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar10 != 0) {
      func_0x0001010ea690(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a484b4);
        (*pcVar2)();
      }
      uVar12 = 0;
      uStack_90 = param_1 & 0xc000000000000001;
      uStack_88 = uVar10;
      uStack_80 = param_1;
      do {
        puVar1 = puStack_68;
        uVar10 = uStack_80;
        if (uStack_90 == 0) {
          uVar4 = *(ulong *)(uStack_80 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          FUN_102a4261c();
        }
        uVar5 = uVar4;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        func_0x000107c5edb4(lVar3);
        func_0x000107c61170(uVar5);
        uVar5 = uVar4;
        func_0x000107c4a8c4(uVar4);
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5ee30();
        uVar11 = uVar10;
        func_0x000107c61170(uVar5);
        uVar5 = uVar4;
        func_0x000107c4a804();
        func_0x000107c61180();
        if (uVar5 == 0) {
          uVar9 = 0;
          uVar11 = 0xf000000000000000;
        }
        else {
          uVar9 = uVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar5);
        }
        func_0x000107c5ed90();
        uVar7 = uVar6;
        func_0x000107c5ee20(uVar6,uVar10);
        func_0x00010006c090(uVar6,uVar10);
        if (uVar11 >> 0x3c < 0xf) {
          uVar10 = uVar9;
          func_0x000107c5ee20(uVar9,uVar11);
          func_0x0001000b44c0(uVar9,uVar11);
        }
        else {
          uVar10 = 0;
        }
        puVar8 = PTR_PTR_1126b1d00;
        func_0x000107c610f8();
        func_0x000107c49150();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar10);
        (**(code **)(lStack_78 + 8))(lVar3,lStack_70);
        uVar10 = *(ulong *)(puVar1 + 0x10);
        puStack_68 = puVar1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
          func_0x0001010ea690(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
        *(undefined **)(puStack_68 + uVar10 * 8 + 0x20) = puVar8;
      } while (uStack_88 != uVar12);
    }
  }
  return puStack_68;
}



/* Entry: 102a484b4; end: 102a48533;  */

void FUN_102a484b4(void)

{
  long unaff_x20;
  
  func_0x000102a47c2c(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined1 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102a48534; end: 102a4853b;  */

void FUN_102a48534(long param_1,long param_2)

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



/* Entry: 102a4853c; end: 102a48ed3;  */

void FUN_102a4853c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  func_0x000100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 0x29;
  *(undefined8 *)(param_1 + 0x10) = 0x14;
  uVar3 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar4 = 0x25;
  func_0x0001044e4b78();
  puVar8 = (undefined8 *)(param_1 + 0x20);
  *puVar8 = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x26;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x27;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x28;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x29;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x2a;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x2b;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x2c;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x2d;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x2e;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x2f;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 3;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x30;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x31;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x32;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x33;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x34;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x35;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x36;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  func_0x000107c610f8(uVar3);
  uVar4 = 0x37;
  func_0x0001044e4b78();
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar5 = 0x14;
  func_0x000107c602e8();
  uVar13 = 0;
  lVar1 = lVar5 + 0x38;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(param_1 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a488dc);
        (*pcVar2)();
      }
      uVar6 = puVar8[uVar13];
      func_0x000107c61174();
    }
    else {
      uVar6 = uVar13;
      func_0x000100f060ac(uVar13,param_1);
    }
    uVar7 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c60114();
    uVar12 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar7 >> 6;
    uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
    uVar11 = 1L << (uVar7 & 0x3f);
    if ((uVar11 & uVar10) != 0) {
      do {
        uVar10 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        uVar9 = uVar10;
        func_0x000107c60118();
        func_0x000107c61170(uVar10);
        if ((uVar9 & 1) != 0) {
          func_0x000107c61170(uVar6);
          goto LAB_102a487ac;
        }
        uVar7 = uVar7 + 1 & ~uVar12;
        uVar9 = uVar7 >> 6;
        uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
        uVar11 = 1L << (uVar7 & 0x3f);
      } while ((uVar11 & uVar10) != 0);
    }
    *(ulong *)(lVar1 + uVar9 * 8) = uVar11 | uVar10;
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar7 * 8) = uVar6;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a488d8);
      (*pcVar2)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
LAB_102a487ac:
    uVar13 = uVar13 + 1;
    if (uVar13 == 0x14) {
      func_0x000107c61588(param_1);
      func_0x000107c61408(puVar8,*(undefined8 *)(param_1 + 0x10),uVar3);
      lRam0000000113804e40 = lVar5;
      return;
    }
  } while( true );
}



/* Entry: 102a48ed4; end: 102a48f07;  */

void FUN_102a48ed4(void)

{
  long unaff_x20;
  
  func_0x000102a48b60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102a48f08; end: 102a48f4b;  */

void FUN_102a48f08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_102a4984c();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    func_0x000107c43d7c();
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102a48f4c; end: 102a491e3;  */

void FUN_102a48f4c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d5d1d8,&UNK_10d923a70);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  uVar1 = uStack_68;
  func_0x000107c4b3ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ee47c8,&UNK_10db0faf8);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c4b3a8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112ee47d0,&UNK_10db0fb00);
  func_0x000107c613fc();
  pcVar5 = FUN_102a491e4;
  func_0x0001000bdd8c(FUN_102a491e4,0);
  func_0x0001000285a8(0x112ee47d8,&UNK_10db0fb08);
  func_0x000107c613fc();
  uVar3 = 0x102a491fc;
  func_0x0001000bdd8c(0x102a491fc,0);
  puVar6 = &UNK_11058c328;
  func_0x000107c613fc(&UNK_11058c328,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_5;
  *(undefined8 *)(puVar6 + 0x20) = param_6;
  *(undefined8 *)(puVar6 + 0x28) = param_7;
  *(undefined8 *)(puVar6 + 0x30) = param_8;
  func_0x0001000285a8(0x112ee47e0,&UNK_10db0fb10);
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar1 = 0x102a49880;
  func_0x0001000bdd8c(0x102a49880,puVar6);
  func_0x0001000285a8(0x112ee47e8,&UNK_10db0fb18);
  func_0x000107c613fc();
  pcVar7 = FUN_102a496dc;
  func_0x0001000bdd8c(FUN_102a496dc,0);
  pcVar8 = 
  "provide(cameraUIServicesLazy:cameraUIScopedLensProcessingServicesLazy:carouselFeatureServicesLazy:circumstanceEngineServicesLazy:lensPlusServicesLazy:paywallPresentationServicesLazy:remoteApiLoggingServicesLazy:remoteApiServicesLazy:systemScopeLazy:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar9 = 0;
  FUN_102a48204();
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar2;
  *(undefined8 *)(lVar9 + 0x18) = uVar4;
  *(code **)(lVar9 + 0x20) = pcVar5;
  *(undefined8 *)(lVar9 + 0x28) = uVar3;
  *(undefined8 *)(lVar9 + 0x30) = uVar1;
  *(code **)(lVar9 + 0x38) = pcVar7;
  *(char **)(lVar9 + 0x40) = pcVar8;
  *(undefined8 *)(lVar9 + 0x48) = param_9;
  *param_1 = lVar9;
  func_0x000107c6157c(param_9);
  return;
}



/* Entry: 102a491e4; end: 102a49213;  */

void FUN_102a491e4(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_11058bea8;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11058bd70;
  return;
}



/* Entry: 102a49214; end: 102a49443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a49214(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar6 = &uStack_80;
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = lStack_68;
  func_0x000107c4ac68();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x0001000285a8(0x112ee47f0,&UNK_10db0fb28);
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  uVar3 = 0x102a49890;
  func_0x0001000bdd8c(0x102a49890,param_3);
  func_0x000100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_113070f60);
  func_0x000107c6157c(uVar9);
  func_0x000107c61170(lStack_68);
  func_0x0001000285a8(0x112ee47f8,&UNK_10db0fb30);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar4 = 0x102a49898;
  func_0x0001000bdd8c(0x102a49898,param_2);
  func_0x000100083b20(&lStack_70);
  uVar8 = *(undefined8 *)(lStack_70 + _DAT_1130364c8);
  func_0x000107c6157c(uVar8);
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&lStack_78);
  uVar7 = *(undefined8 *)(lStack_78 + _DAT_113091b78);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(lStack_78);
  lVar5 = 0;
  FUN_102a4637c();
  lVar1 = lVar5;
  func_0x000107c613fc();
  uStack_80 = 0;
  func_0x0001000285a8(0x112d53338,&UNK_10d919ae0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 *)(lVar1 + 0x38) = uVar7;
  *(undefined8 **)(lVar1 + 0x40) = puVar6;
  *(long *)(lVar1 + 0x10) = lVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar9;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar8;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11058c010;
  *param_1 = lVar1;
  return;
}



/* Entry: 102a49444; end: 102a4957b;  */

void FUN_102a49444(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001000285a8(0x112ee4808,&UNK_10dbf92e0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar1 = 0x102a498a0;
  func_0x0001000bdd8c(0x102a498a0,param_2);
  lVar2 = 0;
  FUN_102a42efc();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11058ba80;
  *param_1 = lVar3;
  return;
}



/* Entry: 102a4957c; end: 102a496db;  */

void FUN_102a4957c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c4ac68();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000107c61170(lStack_48);
    pcVar4 = (code *)0x112ee4800;
    func_0x0001000285a8(0x112ee4800,&UNK_10db0fb40);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    lVar1 = lVar2;
    func_0x000107c4b2e0(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar5 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    pcVar4 = FUN_102a4974c;
    func_0x0001000d5158(FUN_102a4974c,0,uVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(lStack_48);
  }
  uVar5 = 0;
  FUN_102a42750();
  func_0x000107c613fc();
  pcVar6 = pcVar4;
  FUN_102a42630();
  func_0x000107c61574(pcVar4);
  param_1[3] = uVar5;
  param_1[4] = &PTR_DAT_11058b9c8;
  *param_1 = pcVar6;
  return;
}



/* Entry: 102a496dc; end: 102a4973f;  */

void FUN_102a496dc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126abdf0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_102a4688c();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined **)(lVar3 + 0x10) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11058c0d8;
  *param_1 = lVar3;
  return;
}



/* Entry: 102a49740; end: 102a4974b;  */

void FUN_102a49740(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102a4974c; end: 102a49797;  */

void FUN_102a4974c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102a49798; end: 102a4979b; -[_TtC24AILensRemoteApiRPCPluginP33_3BBB2D094018DF04B334EF046844299226NoOpGenAILensUsageTracking trackGenAILoadWithLensId:state:] */

void FUN_102a49798(void)

{
  return;
}



/* Entry: 102a4979c; end: 102a497d7; -[_TtC24AILensRemoteApiRPCPluginP33_3BBB2D094018DF04B334EF046844299226NoOpGenAILensUsageTracking init] */

void FUN_102a4979c(undefined8 param_1)

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



/* Entry: 102a497d8; end: 102a4980b;  */

void FUN_102a497d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a4980c; end: 102a4984b;  */

undefined ** FUN_102a4980c(void)

{
  return &PTR_DAT_112ef4890;
}



/* Entry: 102a4984c; end: 102a4986b;  */

void FUN_102a4984c(void)

{
  func_0x000107c61168(&PTR_PTR_1128826e0);
  return;
}



/* Entry: 102a4986c; end: 102a498a7;  */

void FUN_102a4986c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  char *pcVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000285a8(0x112d5d1d8,&UNK_10d923a70);
  func_0x000100083b20(&uStack_68);
  uVar8 = uStack_68;
  uVar6 = uStack_68;
  func_0x000107c4b3ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar7 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112ee47c8,&UNK_10db0faf8);
  func_0x000100083b20(&uStack_68);
  uVar8 = uStack_68;
  func_0x000107c4b3a8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  uVar6 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  func_0x0001000285a8(0x112ee47d0,&UNK_10db0fb00);
  func_0x000107c613fc();
  pcVar9 = FUN_102a491e4;
  func_0x0001000bdd8c(FUN_102a491e4,0);
  func_0x0001000285a8(0x112ee47d8,&UNK_10db0fb08);
  func_0x000107c613fc();
  uVar8 = 0x102a491fc;
  func_0x0001000bdd8c(0x102a491fc,0);
  puVar10 = &UNK_11058c328;
  func_0x000107c613fc(&UNK_11058c328,0x38,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar11;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  *(undefined8 *)(puVar10 + 0x20) = uVar1;
  *(undefined8 *)(puVar10 + 0x28) = uVar4;
  *(undefined8 *)(puVar10 + 0x30) = uVar2;
  func_0x0001000285a8(0x112ee47e0,&UNK_10db0fb10);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  uVar11 = 0x102a49880;
  func_0x0001000bdd8c(0x102a49880,puVar10);
  func_0x0001000285a8(0x112ee47e8,&UNK_10db0fb18);
  func_0x000107c613fc();
  pcVar12 = FUN_102a496dc;
  func_0x0001000bdd8c(FUN_102a496dc,0);
  pcVar13 = 
  "provide(cameraUIServicesLazy:cameraUIScopedLensProcessingServicesLazy:carouselFeatureServicesLazy:circumstanceEngineServicesLazy:lensPlusServicesLazy:paywallPresentationServicesLazy:remoteApiLoggingServicesLazy:remoteApiServicesLazy:systemScopeLazy:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar14 = 0;
  FUN_102a48204();
  func_0x000107c613fc();
  *(undefined8 *)(lVar14 + 0x10) = uVar7;
  *(undefined8 *)(lVar14 + 0x18) = uVar6;
  *(code **)(lVar14 + 0x20) = pcVar9;
  *(undefined8 *)(lVar14 + 0x28) = uVar8;
  *(undefined8 *)(lVar14 + 0x30) = uVar11;
  *(code **)(lVar14 + 0x38) = pcVar12;
  *(char **)(lVar14 + 0x40) = pcVar13;
  *(undefined8 *)(lVar14 + 0x48) = uVar5;
  *param_1 = lVar14;
  func_0x000107c6157c(uVar5);
  return;
}



/* Entry: 102a498a8; end: 102a4a0a3;  */

undefined1  [16] FUN_102a498a8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd3;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f0e4eb0);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0e4df0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a49974);
  (*pcVar1)();
}



/* Entry: 102a4a0a4; end: 102a4a0db;  */

void FUN_102a4a0a4(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 9;
  func_0x0001044e4b78();
  uRam0000000113804e60 = uVar1;
  return;
}



/* Entry: 102a4a0dc; end: 102a4a2b3;  */

void FUN_102a4a0dc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  func_0x000100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112ee4868 != -1) {
    func_0x000107c61568(0x112ee4868,FUN_102a4a0a4);
  }
  uVar4 = uRam0000000113804e60;
  *(undefined8 *)(param_1 + 0x20) = uRam0000000113804e60;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4a2b4);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    func_0x000100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_102a4a248;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4a2b0);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_102a4a248:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam0000000113804e68 = lVar3;
  return;
}



/* Entry: 102a4a2b4; end: 102a4a537;  */

void FUN_102a4a2b4(void)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
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
  
  puVar8 = &uStack_e0;
  puVar9 = &uStack_e0;
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar7 = 2;
  func_0x000107c602e8();
  puVar5 = PTR_s_num_limit_reached_alert_body_10f0e4fd0_0x10_112ee4850;
  uVar4 = uRam0000000112ee4848;
  lVar1 = lVar7 + 0x38;
  func_0x000107c6068c(&uStack_98,*(undefined8 *)(lVar7 + 0x28));
  uStack_b8 = uStack_70;
  uStack_c0 = uStack_78;
  uStack_a8 = uStack_60;
  uStack_b0 = uStack_68;
  uStack_a0 = uStack_58;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
  uStack_c8 = uStack_80;
  uStack_d0 = uStack_88;
  func_0x000107c61434(puVar5);
  func_0x000107c5fb58(&uStack_e0,uVar4,puVar5);
  func_0x000107c606a8();
  uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar14 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
  uVar10 = uVar14 >> 6;
  uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
  uVar12 = 1L << (uVar14 & 0x3f);
  if ((uVar12 & uVar11) != 0) {
    do {
      puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
      uVar10 = *puVar2;
      puVar3 = (undefined *)puVar2[1];
      if ((uVar10 == uVar4 && puVar3 == puVar5) ||
         (func_0x000107c605b8(uVar10,puVar3,uVar4,puVar5,0), (uVar10 & 1) != 0)) {
        func_0x000107c6142c(puVar5);
        goto LAB_102a4a3f8;
      }
      uVar14 = uVar14 + 1 & ~uVar13;
      uVar10 = uVar14 >> 6;
      uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
      uVar12 = 1L << (uVar14 & 0x3f);
    } while ((uVar12 & uVar11) != 0);
  }
  *(ulong *)(lVar1 + uVar10 * 8) = uVar12 | uVar11;
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
  *puVar2 = uVar4;
  puVar2[1] = (ulong)puVar5;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
LAB_102a4a3f8:
    puVar5 = PTR_s_show_exclusive_lens_upsell_112ee4860;
    uVar4 = uRam0000000112ee4858;
    func_0x000107c6068c(&uStack_98,*(undefined8 *)(lVar7 + 0x28));
    uStack_b8 = uStack_70;
    uStack_c0 = uStack_78;
    uStack_a8 = uStack_60;
    uStack_b0 = uStack_68;
    uStack_a0 = uStack_58;
    uStack_d8 = uStack_90;
    uStack_e0 = uStack_98;
    uStack_c8 = uStack_80;
    uStack_d0 = uStack_88;
    func_0x000107c61434(puVar5);
    func_0x000107c5fb58(&uStack_e0,uVar4,puVar5);
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar14 >> 6;
    uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
    uVar12 = 1L << (uVar14 & 0x3f);
    if ((uVar12 & uVar11) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
        uVar10 = *puVar2;
        puVar3 = (undefined *)puVar2[1];
        if ((uVar10 == uVar4 && puVar3 == puVar5) ||
           (func_0x000107c605b8(uVar10,puVar3,uVar4,puVar5,0), (uVar10 & 1) != 0)) {
          func_0x000107c6142c(puVar5);
          goto LAB_102a4a4f8;
        }
        uVar14 = uVar14 + 1 & ~uVar13;
        uVar10 = uVar14 >> 6;
        uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
        uVar12 = 1L << (uVar14 & 0x3f);
      } while ((uVar12 & uVar11) != 0);
    }
    *(ulong *)(lVar1 + uVar10 * 8) = uVar12 | uVar11;
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = (ulong)puVar5;
    if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
LAB_102a4a4f8:
      func_0x000107c61408(0x112ee4848,2,PTR___sSSN_11034da80);
      lRam0000000113804e58 = lVar7;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102a4a538);
  (*pcVar6)();
}



/* Entry: 102a4a538; end: 102a4a57f;  */

void FUN_102a4a538(void)

{
  if (lRam0000000112ee4878 != -1) {
    func_0x000107c61568(0x112ee4878,FUN_102a4a0dc);
  }
  uRam0000000113804e48 = uRam0000000113804e68;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102a4a580; end: 102a4a5cb;  */

void FUN_102a4a580(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  if (*param_2 != -1) {
    func_0x000107c61568(param_2,param_5);
  }
  *param_4 = *param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102a4a5cc; end: 102a4a5db;  */

undefined1  [16] FUN_102a4a5cc(void)

{
  return ZEXT816(0x11058c438);
}



/* Entry: 102a4a5dc; end: 102a4aa93;  */

undefined * FUN_102a4a5dc(undefined *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4a9cc);
    (*pcVar2)();
  }
  uVar11 = *unaff_x20;
  puVar3 = param_1;
  func_0x000107c4adb4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    FUN_102a4acb4(param_1,0xd000000000000015,0x800000010f0e5030);
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
    goto LAB_102a4a7a0;
  }
  puVar6 = puVar3;
  func_0x000107c4a4c0();
  if ((int)puVar6 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    FUN_102a4acb4(param_1,0xd000000000000020,0x800000010f0e5050);
    func_0x000107c4a8a4(puVar6);
    puVar4 = param_1;
LAB_102a4a78c:
    func_0x000107c61180();
  }
  else {
    puVar6 = param_1;
    func_0x000107c428b4();
    func_0x000107c61180();
    puVar4 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    uVar5 = 0xd000000000000023;
    if (((puVar4 == (undefined *)0xd000000000000023) && (param_2 == -0x7ffffffef0f1b000)) ||
       (func_0x000107c605b8(0xd000000000000023,0x800000010f0e5000,puVar4,param_2,0),
       (uVar5 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      uVar11 = unaff_x20[2];
      lVar1 = unaff_x20[3];
      func_0x000107c614f0(uVar11);
      puVar4 = puVar3;
      (**(code **)(lVar1 + 8))(puVar3,uVar11,lVar1);
      FUN_102a4ae44(param_1,(uint)puVar4 & 1,0x656c626967696c65,0xe800000000000000);
      func_0x000107c4a8a4(puVar6);
      puVar4 = param_1;
      goto LAB_102a4a78c;
    }
    uVar10 = 0x800000010f0e4fe0;
    if ((puVar4 == (undefined *)0xd00000000000001a) && (param_2 == -0x7ffffffef0f1b020)) {
      func_0x000107c6142c(0x800000010f0e4fe0);
LAB_102a4a818:
      uVar12 = unaff_x20[3];
      uVar10 = unaff_x20[2];
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar6 = &UNK_11058c458;
      func_0x000107c613fc(&UNK_11058c458,0x38,7);
      *(undefined8 *)(puVar6 + 0x18) = uVar12;
      *(undefined8 *)(puVar6 + 0x10) = uVar10;
      *(undefined **)(puVar6 + 0x20) = puVar3;
      *(undefined **)(puVar6 + 0x28) = param_1;
      *(undefined8 *)(puVar6 + 0x30) = uVar11;
      pcStack_60 = FUN_102a4ae0c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1004725e8;
      puStack_68 = &UNK_11058c470;
      ppuVar7 = &puStack_80;
      puStack_58 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_58;
      func_0x000107c615f0(uVar10);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar6);
      func_0x000107c408f0(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c60bd0(ppuVar7);
      return puVar4;
    }
    uVar5 = 0;
    func_0x000107c605b8(0xd00000000000001a,0x800000010f0e4fe0,puVar4,param_2,0);
    func_0x000107c6142c(param_2);
    if ((uVar5 & 1) != 0) goto LAB_102a4a818;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar4 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar9 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c48368(puVar4);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar9);
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar4);
  param_1 = puVar3;
LAB_102a4a7a0:
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 102a4aa94; end: 102a4abbb;  */

void FUN_102a4aa94(uint param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if ((param_1 >> 7 & 1) == 0) {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a4abb8);
      (*pcVar4)();
    }
    FUN_102a4ae44(param_3,param_1 & 1,0x6269726373627573,0xea00000000006465);
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a4abbc);
      (*pcVar4)();
    }
    param_1 = param_1 & 0x7f;
    uVar5 = 0x6e6f6f735f6f6f74;
    uVar2 = 0x800000010f0e5080;
    uVar3 = 0xd000000000000015;
    if (param_1 != 2) {
      uVar2 = 0xee00726f7272655f;
      uVar3 = 0x6c616e7265746e69;
    }
    if (param_1 != 0) {
      uVar5 = 0xd000000000000011;
    }
    uVar1 = 0xe800000000000000;
    if (param_1 != 0) {
      uVar1 = 0x800000010f0e50a0;
    }
    if (param_1 < 2) {
      uVar2 = uVar1;
      uVar3 = uVar5;
    }
    FUN_102a4acb4(param_3,uVar3,uVar2);
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c4d664(param_2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 102a4abbc; end: 102a4ac17; -[_TtC23LensPlusUpsellApiPlugin30LensPlusUpsellApiPluginHandler handleRequest:] */

void FUN_102a4abbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_102a4a5dc(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102a4ac18; end: 102a4ac6f; -[_TtC23LensPlusUpsellApiPlugin30LensPlusUpsellApiPluginHandler reset] */

void FUN_102a4ac18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102a4ac70; end: 102a4acb3;  */

void FUN_102a4ac70(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a4acb4; end: 102a4ae0b;  */

undefined * FUN_102a4acb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0x726f727265;
  *(undefined8 *)(lVar1 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  func_0x000107c61434(param_3);
  lVar2 = lVar1;
  func_0x0001001830b8(lVar1);
  func_0x000107c61588(lVar1);
  uVar4 = 0x112d38308;
  FUN_102a4b0b4((undefined8 *)(lVar1 + 0x20),0x112d38308,&UNK_10d902040);
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  puVar3 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  lVar1 = lVar2;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c48368(puVar3);
  func_0x000107c6142c(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar1);
  return puVar3;
}



/* Entry: 102a4ae0c; end: 102a4ae43;  */

void FUN_102a4ae0c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c614f0(uVar4);
  puVar5 = &UNK_11058c4a8;
  func_0x000107c613fc(&UNK_11058c4a8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  pcVar7 = *(code **)(lVar2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c615f0(param_1);
  (*pcVar7)(uVar1,0x102a4ae38,puVar5,uVar4,lVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102a4ae44; end: 102a4b0b3;  */

undefined * FUN_102a4ae44(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar2 = 0x112d7e658;
  func_0x0001000285a8(0x112d7e658,&UNK_10db0fbd0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  *(undefined1 *)(lVar2 + 0x30) = param_2;
  lVar3 = lVar2;
  func_0x0001003d8468();
  func_0x000107c61588(lVar2);
  FUN_102a4b0b4((undefined8 *)(lVar2 + 0x20),0x112d7e660,&UNK_10d93c760);
  lVar2 = lVar3;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sSbN_11034dd40,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar4 = 0;
  func_0x000107c61174(0);
  if (puVar10 == (undefined *)0x0) {
    uVar5 = uVar4;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x000107c614ac(uVar5);
    puVar9 = (undefined *)0x0;
    puVar10 = (undefined *)0xf000000000000000;
    puVar11 = puVar6;
  }
  else {
    puVar9 = puVar10;
    func_0x000107c5ee30(puVar10);
    puVar11 = puVar6;
    func_0x000107c61170(puVar10);
    puVar10 = puVar6;
  }
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar11);
  }
  puVar6 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if ((ulong)puVar10 >> 0x3c < 0xf) {
    puVar11 = puVar9;
    func_0x000107c5ee20(puVar9,puVar10);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  puVar7 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  lVar2 = param_1;
  func_0x000107c48368();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar11);
  func_0x0001000b44c0(puVar9);
  func_0x000107c6142c(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar7;
  }
  func_0x000107c60e78();
  func_0x0001000285a8(puVar10,lVar2);
  (**(code **)(*(long *)(puVar10 + -8) + 8))(puVar1,puVar10);
  return puVar1;
}



/* Entry: 102a4b0b4; end: 102a4b0f3;  */

undefined8 FUN_102a4b0b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102a4b0f4; end: 102a4b173;  */

void FUN_102a4b0f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee4758,&UNK_10db0fa40);
  puVar1 = &UNK_11058c4d0;
  func_0x000107c613fc(&UNK_11058c4d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102a4b388,puVar1);
  return;
}



/* Entry: 102a4b174; end: 102a4b387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4b174(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&puStack_78);
  uVar7 = *(undefined8 *)(puStack_78 + _DAT_113036498);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(puStack_78);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c61574(uVar7);
  uVar7 = uStack_48;
  func_0x000107c4b324();
  func_0x000107c615e8(uStack_48);
  if ((int)uVar7 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    uStack_58 = 0x102a4b460;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1010e92f4;
    puStack_60 = &UNK_11058c530;
    ppuVar2 = &puStack_78;
    uStack_50 = param_3;
    func_0x000107c60bc4(ppuVar2);
    uVar7 = uStack_50;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar7);
    func_0x000107c3e4fc(puVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    if (lRam0000000112ee4810 != -1) {
      func_0x000107c61568(0x112ee4810,FUN_102a4a538);
    }
    uVar7 = uRam0000000113804e48;
    if (lRam0000000112ee4818 != -1) {
      func_0x000107c61568(0x112ee4818,0x102a4a55c);
    }
    uVar5 = uRam0000000113804e50;
    puVar6 = PTR_PTR_1126b0260;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x0001044e4d64(0);
    uVar4 = uVar3;
    func_0x000100f06a9c();
    func_0x000107c5fe08(uVar7,uVar3,uVar4);
    func_0x000107c5fe08(uVar5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c48360();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar5);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 102a4b388; end: 102a4b38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4b388(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&puStack_78,*(undefined8 *)(unaff_x20 + 0x10));
  uVar7 = *(undefined8 *)(puStack_78 + _DAT_113036498);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(puStack_78);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c61574(uVar7);
  uVar7 = uStack_48;
  func_0x000107c4b324();
  func_0x000107c615e8(uStack_48);
  if ((int)uVar7 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    uStack_58 = 0x102a4b460;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1010e92f4;
    puStack_60 = &UNK_11058c530;
    ppuVar2 = &puStack_78;
    uStack_50 = uVar5;
    func_0x000107c60bc4(ppuVar2);
    uVar7 = uStack_50;
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar7);
    func_0x000107c3e4fc(puVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    if (lRam0000000112ee4810 != -1) {
      func_0x000107c61568(0x112ee4810,FUN_102a4a538);
    }
    uVar5 = uRam0000000113804e48;
    if (lRam0000000112ee4818 != -1) {
      func_0x000107c61568(0x112ee4818,0x102a4a55c);
    }
    uVar7 = uRam0000000113804e50;
    puVar6 = PTR_PTR_1126b0260;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x0001044e4d64(0);
    uVar4 = uVar3;
    func_0x000100f06a9c();
    func_0x000107c5fe08(uVar5,uVar3,uVar4);
    func_0x000107c5fe08(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c48360();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 102a4b390; end: 102a4b41f;  */

void FUN_102a4b390(void)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar2 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(lStack_28);
  func_0x0001000d224c(&lStack_38);
  func_0x000107c61574(uVar2);
  if (lStack_38 == 0) {
    FUN_102a4c58c(0);
    func_0x000107c613fc();
  }
  else {
    lVar1 = 0;
    func_0x000102a4ac94();
    func_0x000107c613fc();
    *(long *)(lVar1 + 0x10) = lStack_38;
    *(undefined8 *)(lVar1 + 0x18) = uStack_30;
  }
  return;
}



/* Entry: 102a4b420; end: 102a4b483;  */

undefined ** FUN_102a4b420(void)

{
  return &PTR_DAT_112ef4890;
}



/* Entry: 102a4b484; end: 102a4b4db;  */

void FUN_102a4b484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 102a4b4dc; end: 102a4b8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4b4dc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined1 auStack_68 [24];
  
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113036498);
  func_0x000107c6157c(uVar14);
  func_0x0001000d224c(&puStack_98);
  func_0x000107c61574(uVar14);
  puVar2 = puStack_98;
  func_0x000107c4b324();
  func_0x000107c615e8(puStack_98);
  if ((int)puVar2 != 0) {
    lVar15 = *(long *)(unaff_x20 + 0x18);
    puVar2 = &UNK_11058c578;
    puVar3 = puVar2;
    func_0x000107c613fc(&UNK_11058c578,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar15);
    lVar8 = _DAT_11306fb70;
    uVar14 = *(undefined8 *)(lVar15 + _DAT_11306fb70);
    lVar4 = 0;
    FUN_102a4b940(0);
    func_0x000107c613fc();
    func_0x000107c61644(lVar4 + 0x10,0);
    func_0x000107c61634(lVar4 + 0x10,uVar14);
    func_0x000104343354(0);
    func_0x000107c613fc();
    pcVar5 = FUN_102a4b938;
    func_0x000104341f08(FUN_102a4b938,puVar3,0,0,lVar4,&PTR_DAT_11058c650);
    puVar3 = &UNK_11058c5a0;
    func_0x000107c613fc(&UNK_11058c5a0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    func_0x000107c613fc(&UNK_11058c578,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar15);
    puVar6 = &UNK_11058c5c8;
    func_0x000107c613fc(&UNK_11058c5c8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    *(undefined **)(puVar6 + 0x18) = puVar2;
    *(code **)(puVar6 + 0x20) = pcVar5;
    func_0x0001000285a8(0x112ee40a8,&UNK_10db0fc50);
    func_0x000107c613fc();
    func_0x000107c6157c(pcVar5);
    pcVar7 = FUN_102a4ba18;
    func_0x0001000bdd8c(FUN_102a4ba18,puVar6);
    lVar4 = *(long *)(lVar15 + lVar8);
    lVar8 = 0;
    FUN_102a4ba24();
    func_0x000107c613fc();
    *(code **)(lVar8 + 0x10) = pcVar7;
    func_0x000107c61428(lVar4 + 0x28,auStack_68,1,0);
    uVar14 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar8;
    *(undefined ***)(lVar4 + 0x30) = &PTR_DAT_11058c640;
    func_0x000107c6157c(pcVar7);
    func_0x000107c615e8(uVar14);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    pcStack_78 = FUN_102a4baac;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1010e92f4;
    puStack_80 = &UNK_11058c5e0;
    ppuVar9 = &puStack_98;
    pcStack_70 = pcVar7;
    func_0x000107c60bc4(ppuVar9);
    pcVar1 = pcStack_70;
    func_0x000107c6157c(pcVar7);
    func_0x000107c61574(pcVar1);
    func_0x000107c3e4fc(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c4e9e4(uVar14);
    func_0x000107c61180();
    lVar8 = lRam0000000112ee4878;
    func_0x000107c61174(puVar2);
    if (lVar8 != -1) {
      func_0x000107c61568(0x112ee4878,FUN_102a4a0dc);
    }
    uVar12 = uRam0000000113804e68;
    if (lRam0000000112ee4870 != -1) {
      func_0x000107c61568(0x112ee4870,FUN_102a4a2b4);
    }
    uVar13 = uRam0000000113804e58;
    puVar3 = PTR_PTR_1126b0260;
    func_0x000107c610f8(PTR_PTR_1126b0260);
    uVar10 = 0;
    func_0x0001044e4d64(0);
    uVar11 = uVar10;
    func_0x000100f06a9c();
    func_0x000107c5fe08(uVar12,uVar10,uVar11);
    func_0x000107c5fe08(uVar13,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c48360(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c4fba8(uVar14);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(pcVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 102a4b8c0; end: 102a4b937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a4b8c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11306fb08);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 102a4b938; end: 102a4b93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a4b938(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11306fb08);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 102a4b940; end: 102a4b95f;  */

void FUN_102a4b940(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4ae8);
  return;
}



/* Entry: 102a4b960; end: 102a4ba17;  */

void FUN_102a4b960(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
    param_4 = 0;
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    lVar1 = param_3;
    FUN_102a4c12c();
    func_0x000107c61574(param_2);
    func_0x000107c61170(param_3);
  }
  *param_1 = lVar1;
  param_1[1] = param_4;
  return;
}



/* Entry: 102a4ba18; end: 102a4ba23;  */

void FUN_102a4ba18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_70,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    lVar4 = lVar2;
    FUN_102a4c12c();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar4;
  param_1[1] = lVar3;
  return;
}



/* Entry: 102a4ba24; end: 102a4ba43;  */

void FUN_102a4ba24(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4a48);
  return;
}



/* Entry: 102a4ba44; end: 102a4baab;  */

void FUN_102a4ba44(void)

{
  long lVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&lStack_30);
  if (lStack_30 == 0) {
    FUN_102a4c58c(0);
    func_0x000107c613fc();
  }
  else {
    lVar1 = 0;
    func_0x000102a4ac94();
    func_0x000107c613fc();
    *(long *)(lVar1 + 0x10) = lStack_30;
    *(undefined8 *)(lVar1 + 0x18) = uStack_28;
  }
  return;
}



/* Entry: 102a4baac; end: 102a4bacf;  */

void FUN_102a4baac(void)

{
  long lVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&lStack_30);
  if (lStack_30 == 0) {
    FUN_102a4c58c(0);
    func_0x000107c613fc();
  }
  else {
    lVar1 = 0;
    func_0x000102a4ac94();
    func_0x000107c613fc();
    *(long *)(lVar1 + 0x10) = lStack_30;
    *(undefined8 *)(lVar1 + 0x18) = uStack_28;
  }
  return;
}



/* Entry: 102a4bad0; end: 102a4bbab;  */

undefined8 FUN_102a4bad0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  func_0x000107c4a4c0(param_1);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar1 = uStack_48;
  func_0x000107c49fa4();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_1);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    uVar1 = uStack_50;
    func_0x000107c49fa0(uStack_50);
    func_0x000107c615e8(uStack_50);
  }
  return uVar1;
}



/* Entry: 102a4bbac; end: 102a4bbff;  */

uint FUN_102a4bbac(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 102a4bc00; end: 102a4bc6f;  */

undefined8 FUN_102a4bc00(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 102a4bc70; end: 102a4bcbf;  */

undefined8 FUN_102a4bc70(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 102a4bcc0; end: 102a4bedb;  */

void FUN_102a4bcc0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puStack_68;
  
  uVar13 = *param_2;
  puStack_68 = (undefined *)0x0;
  uVar4 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(uVar13,&puStack_68,uVar4);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar9 = puStack_68;
  }
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar15 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar15 != (undefined *)0x0) {
    puStack_68 = puVar14;
    uVar10 = (ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar10,0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a4bedc);
      (*pcVar3)();
    }
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      puVar17 = (undefined8 *)(puVar9 + 0x20);
      do {
        puVar14 = puStack_68;
        uVar8 = *puVar17;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar4 = uVar8;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar13 = uVar4;
        func_0x000107c5faec();
        uVar12 = uVar10;
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar4);
        uVar2 = *(ulong *)(puVar14 + 0x10);
        uVar1 = uVar2 + 1;
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
          uVar12 = uVar1;
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar1;
        *(undefined8 *)(puStack_68 + uVar2 * 0x10 + 0x20) = uVar13;
        *(ulong *)(puStack_68 + uVar2 * 0x10 + 0x28) = uVar10;
        puVar15 = puVar15 + -1;
        uVar10 = uVar12;
        puVar14 = puStack_68;
        puVar17 = puVar17 + 1;
      } while (puVar15 != (undefined *)0x0);
    }
    else {
      puVar16 = (undefined *)0x0;
      do {
        puVar14 = puStack_68;
        puVar5 = puVar16;
        puVar11 = puVar9;
        func_0x000100ff3f88();
        puVar6 = puVar5;
        func_0x000107c615f0();
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5faec();
        func_0x000107c615ec(puVar5,2);
        func_0x000107c61170(puVar6);
        uVar10 = *(ulong *)(puVar14 + 0x10);
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar10) {
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar10 + 1,1);
        }
        puVar16 = puVar16 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
        *(undefined **)(puStack_68 + uVar10 * 0x10 + 0x20) = puVar7;
        *(undefined **)(puStack_68 + uVar10 * 0x10 + 0x28) = puVar11;
        puVar14 = puStack_68;
      } while (puVar15 != puVar16);
    }
  }
  func_0x000107c6142c(puVar9);
  puVar9 = puVar14;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar14);
  *param_1 = (ulong)puVar9;
  return;
}



/* Entry: 102a4bedc; end: 102a4bf1f;  */

void FUN_102a4bedc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a4bf20; end: 102a4bf3f;  */

void FUN_102a4bf20(void)

{
  FUN_102a4b4dc();
  return;
}



/* Entry: 102a4bf40; end: 102a4bf6b;  */

undefined8 FUN_102a4bf40(void)

{
  return 0;
}


