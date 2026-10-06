/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e89310; end: 101e8932f;  */

void FUN_101e89310(void)

{
  func_0x000107c61168(&PTR_PTR_112e34b38);
  return;
}



/* Entry: 101e89330; end: 101e893ef;  */

long FUN_101e89330(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101e893f0; end: 101e894b3;  */

undefined8 * FUN_101e893f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  return param_1;
}



/* Entry: 101e894b4; end: 101e8951f;  */

undefined8 * FUN_101e894b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xf];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}



/* Entry: 101e89520; end: 101e898f7;  */

int FUN_101e89520(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x81) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101e898f8; end: 101e89937;  */

void FUN_101e898f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1e13c;
  func_0x000107c61520(&UNK_10da1e13c,&UNK_110491570);
  puRam0000000112e34c58 = puVar1;
  return;
}



/* Entry: 101e89938; end: 101e89cab;  */

void FUN_101e89938(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar12 = *(ulong *)(param_1 + 0x20);
    uVar11 = *(ulong *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *param_3;
    func_0x000107c61434(uVar11);
    uVar14 = uVar12;
    uVar5 = uVar11;
    func_0x000100029284();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_101e89bf4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e89bf8);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      FUN_10195f7e0(lVar1,param_2 & 1);
      uVar14 = uVar12;
      uVar8 = uVar11;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_101e899e4:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e899f4);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      func_0x00010195f508();
    }
    if ((uVar5 & 1) != 0) {
LAB_101e899fc:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar6 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c6142c(uVar11);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar12;
      uStack_78 = uVar11;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e89cac);
      (*pcVar3)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar14 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar14 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar12;
    puVar2[1] = uVar11;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar14 * 8) = uVar13;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_101e89bf8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e89bfc);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar6 != 1) {
      puVar15 = (undefined8 *)(param_1 + 0x48);
      uVar14 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e89c00);
          (*pcVar3)();
        }
        uVar12 = puVar15[-2];
        uVar11 = puVar15[-1];
        uVar13 = *puVar15;
        lVar10 = *param_3;
        func_0x000107c61434(uVar11);
        uVar5 = uVar12;
        uVar8 = uVar11;
        func_0x000100029284();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_101e89bf4;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          FUN_10195f7e0(lVar1,1);
          uVar5 = uVar12;
          uVar9 = uVar11;
          func_0x000100029284();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_101e899e4;
        }
        if ((uVar8 & 1) != 0) goto LAB_101e899fc;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar11;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar13;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_101e89bf8;
        uVar14 = uVar14 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar15 = puVar15 + 3;
      } while (uVar6 != uVar14);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 101e89cac; end: 101e89e6f;  */

undefined8 FUN_101e89cac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (func_0x000107c605b8(uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if ((double)param_1[2] != (double)param_2[2]) {
    return 0;
  }
  if ((double)param_1[3] != (double)param_2[3]) {
    return 0;
  }
  if ((double)param_1[4] != (double)param_2[4]) {
    return 0;
  }
  if ((double)param_1[5] != (double)param_2[5]) {
    return 0;
  }
  if ((double)param_1[6] != (double)param_2[6]) {
    return 0;
  }
  if ((double)param_1[7] == (double)param_2[7]) {
    if ((double)param_1[8] != (double)param_2[8]) {
      return 0;
    }
    if (*(float *)(param_1 + 9) != *(float *)(param_2 + 9)) {
      return 0;
    }
    if (*(float *)((long)param_1 + 0x4c) != *(float *)((long)param_2 + 0x4c)) {
      return 0;
    }
    uVar2 = param_1[0xb];
    uVar1 = param_2[0xb];
    if (uVar2 == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar3 = param_1[10];
      if (((uVar3 != param_2[10]) || (uVar2 != uVar1)) &&
         (func_0x000107c605b8(uVar3,uVar2,param_2[10],uVar1,0), (uVar3 & 1) == 0)) {
        return 0;
      }
    }
    if ((char)param_1[0x10] == '\x01') {
      if ((char)param_2[0x10] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[0x10] != '\x01') &&
            ((((-(param_1[0xc] == param_2[0xc]) & 1U) + (-(param_1[0xd] == param_2[0xd]) & 2U) +
               (-(param_1[0xe] == param_2[0xe]) & 4U) + (-(param_1[0xf] == param_2[0xf]) & 8U) ^
              0xff) & 0xf) == 0)) {
      return 1;
    }
    return 0;
  }
  return 0;
}



/* Entry: 101e89e70; end: 101e89e93;  */

void FUN_101e89e70(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar2 = &UNK_110491408;
  func_0x000107c613fc(&UNK_110491408,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar3);
  func_0x000107c61644(puVar2 + 0x10,lVar3);
  func_0x000107c61574(lVar3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 == 0) {
    puVar5 = &UNK_110491698;
    func_0x000107c613fc(&UNK_110491698,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_101e89ebc;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcStack_58 = FUN_101e89ec4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104916b0;
    ppuVar6 = &puStack_78;
    puStack_50 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_50;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar5);
    func_0x000100162d98("VSR power state change",ppuVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c60bd0(ppuVar6);
  }
  else {
    func_0x000107c61428(puVar2 + 0x10,&puStack_78,0,0);
    puVar5 = puVar2 + 0x10;
    func_0x000107c61648();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c61574(puVar2);
    }
    else {
      puVar4 = puVar2;
      func_0x000107c6157c();
      FUN_101e87fe0();
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000101e87c50();
      }
      func_0x000107c61574(puVar5);
      func_0x000107c61578(puVar2,2);
    }
  }
  return;
}



/* Entry: 101e89e94; end: 101e89ebb;  */

void FUN_101e89e94(void)

{
  FUN_101e882f8();
  return;
}



/* Entry: 101e89ebc; end: 101e89ec3;  */

void FUN_101e89ebc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_101e87fe0();
    if ((uVar2 & 1) != 0) {
      func_0x000101e87c50();
    }
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101e89ec4; end: 101e89ee3;  */

void FUN_101e89ec4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e89ee4; end: 101e89f8f;  */

void FUN_101e89ee4(void)

{
  long unaff_x20;
  
  FUN_101e88364(*(undefined4 *)(unaff_x20 + 0x1c),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined1 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x19),
                *(undefined1 *)(unaff_x20 + 0x1a),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e89f90; end: 101e89fc3;  */

undefined8 FUN_101e89f90(undefined8 param_1)

{
  (*(code *)&DAT_103c14bf4)();
  return param_1;
}



/* Entry: 101e89fc4; end: 101e8a103;  */

void FUN_101e89fc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc66b2c;
  func_0x000107c61520(&DAT_10dc66b2c,&UNK_1106ea328);
  puRam0000000112e34c70 = puVar1;
  return;
}



/* Entry: 101e8a104; end: 101e8a113;  */

ulong FUN_101e8a104(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 101e8a114; end: 101e8a137;  */

void FUN_101e8a114(void)

{
  long unaff_x20;
  
  FUN_101e88888(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101e8a138; end: 101e8a1db;  */

void FUN_101e8a138(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101e8a1cc);
    (*pcVar5)();
  }
  lVar3 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101e8a1d0);
    (*pcVar5)();
  }
  if (lVar3 != 0) {
    lVar6 = *unaff_x20;
    lVar4 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e8a1d4);
      (*pcVar5)();
    }
    uVar1 = lVar6 + 0x20 + param_1 * 8 + param_3 * 8;
    uVar2 = lVar6 + 0x20 + param_2 * 8;
    if (uVar1 != uVar2 || uVar2 + lVar4 * 8 <= uVar1) {
      func_0x000107c610b8(uVar1,uVar2,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e8a1d8);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e8a1dc);
  (*pcVar5)();
}



/* Entry: 101e8a1dc; end: 101e8a297;  */

void FUN_101e8a1dc(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8a288);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8a28c);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8a290);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        func_0x0001014dd0d8();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_101e8a138(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8a298);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8a294);
  (*pcVar2)();
}



/* Entry: 101e8a298; end: 101e8a52b;  */

long FUN_101e8a298(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = param_9;
  lStack_78 = param_7;
  uStack_70 = param_8;
  FUN_101e8a52c(auStack_90);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))();
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_6 + 0x10) = uVar2;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_6 + 0x18) = 5;
  *(undefined **)(param_6 + 0x20) = puVar1;
  *(undefined8 *)(param_6 + 0x28) = 0;
  *(undefined1 *)(param_6 + 0x30) = 0;
  *(undefined8 *)(param_6 + 0x38) = 0;
  *(undefined8 *)(param_6 + 0x40) = 0;
  *(undefined8 *)(param_6 + 0x48) = 0x1e;
  *(undefined1 *)(param_6 + 0x50) = 0;
  *(undefined8 *)(param_6 + 0x60) = 0;
  *(undefined8 *)(param_6 + 0x58) = 0;
  *(undefined8 *)(param_6 + 0x70) = 0;
  *(undefined8 *)(param_6 + 0x68) = 0;
  *(undefined8 *)(param_6 + 0x80) = 0;
  *(undefined8 *)(param_6 + 0x78) = 0;
  *(undefined8 *)(param_6 + 0x90) = 0;
  *(undefined8 *)(param_6 + 0x88) = 0;
  *(undefined8 *)(param_6 + 0xa0) = 0;
  *(undefined8 *)(param_6 + 0x98) = 0;
  *(undefined8 *)(param_6 + 0xb0) = 0;
  *(undefined8 *)(param_6 + 0xa8) = 0;
  *(undefined1 *)(param_6 + 0xb8) = 2;
  uVar2 = 0x112e33e40;
  func_0x0001000285a8(0x112e33e40,&UNK_10da1d350);
  func_0x000107c61538();
  FUN_101e6be28();
  *(undefined8 *)(param_6 + 0xc0) = uVar2;
  *(undefined8 *)(param_6 + 0x128) = 0;
  func_0x000107c61614(param_6 + 0x120,0);
  func_0x000101e830c8(auStack_90,param_6 + 200);
  uVar2 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  *(undefined8 *)(param_6 + 0x198) = param_2[0xd];
  *(undefined8 *)(param_6 + 400) = uVar2;
  *(undefined8 *)(param_6 + 0x1a8) = uVar4;
  *(undefined8 *)(param_6 + 0x1a0) = uVar3;
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  *(undefined8 *)(param_6 + 0x158) = param_2[5];
  *(undefined8 *)(param_6 + 0x150) = uVar2;
  *(undefined8 *)(param_6 + 0x168) = uVar4;
  *(undefined8 *)(param_6 + 0x160) = uVar3;
  uVar4 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  *(undefined8 *)(param_6 + 0x178) = param_2[9];
  *(undefined8 *)(param_6 + 0x170) = uVar4;
  *(undefined8 *)(param_6 + 0x188) = uVar3;
  *(undefined8 *)(param_6 + 0x180) = uVar2;
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(param_6 + 0x138) = param_2[1];
  *(undefined8 *)(param_6 + 0x130) = uVar4;
  *(undefined8 *)(param_6 + 0x148) = uVar3;
  *(undefined8 *)(param_6 + 0x140) = uVar2;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(param_6 + 0x100) = param_5[1];
  *(undefined8 *)(param_6 + 0xf8) = uVar2;
  *(undefined1 *)(param_6 + 0x1b0) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_6 + 0x110) = uVar4;
  *(undefined8 *)(param_6 + 0x108) = uVar3;
  *(undefined8 *)(param_6 + 0x118) = param_5[4];
  *(undefined8 *)(param_6 + 0x128) = param_4;
  func_0x000107c61604(param_6 + 0x120,param_3);
  (**(code **)(param_9 + 8))(param_7,param_9);
  FUN_101e876f0();
  FUN_101e87804();
  func_0x000100dd2718(auStack_90);
  return param_6;
}



/* Entry: 101e8a52c; end: 101e8a567;  */

long * FUN_101e8a52c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    func_0x000107c613f4();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Entry: 101e8a568; end: 101e8a6e7;  */

void FUN_101e8a568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc6694c;
  func_0x000107c61520(&DAT_10dc6694c,&UNK_1106ea128);
  puRam0000000112e34cf8 = puVar1;
  return;
}



/* Entry: 101e8a6e8; end: 101e8a6fb;  */

void FUN_101e8a6e8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101e8a6fc; end: 101e8a77b;  */

void FUN_101e8a6fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc66a3c;
  func_0x000107c61520(&DAT_10dc66a3c,&UNK_1106ea228);
  puRam0000000112e34d28 = puVar1;
  return;
}



/* Entry: 101e8a77c; end: 101e8a78b;  */

void FUN_101e8a77c(long param_1,long param_2)

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



/* Entry: 101e8a78c; end: 101e8a79f;  */

void FUN_101e8a78c(void)

{
  func_0x000101e89004();
  return;
}



/* Entry: 101e8a7a0; end: 101e8a7af;  */

void FUN_101e8a7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101e8a7b0; end: 101e8a7c3;  */

void FUN_101e8a7b0(void)

{
  FUN_101e88fec();
  return;
}



/* Entry: 101e8a7c4; end: 101e8a7c7;  */

void FUN_101e8a7c4(void)

{
  FUN_101e882f8();
  return;
}



/* Entry: 101e8a7c8; end: 101e8a7ef;  */

void FUN_101e8a7c8(void)

{
  FUN_101e88fd8();
  return;
}



/* Entry: 101e8a7f0; end: 101e8a7ff;  */

void FUN_101e8a7f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101e8a800; end: 101e8a827;  */

long FUN_101e8a800(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    func_0x000107c61560(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 101e8a828; end: 101e8a837;  */

void FUN_101e8a828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e8a838; end: 101e8a903;  */

void FUN_101e8a838(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
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
  undefined1 uStack_60;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_60 = 1;
  lVar1 = 0;
  FUN_101e89310();
  func_0x000101e830c8(param_2,auStack_110);
  puVar2 = auStack_110;
  FUN_101e8a800(puVar2,uStack_f8);
  func_0x000101e8a44c();
  func_0x000100dd2718(auStack_110);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110491420;
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 101e8a904; end: 101e8a93f;  */

bool FUN_101e8a904(long *param_1,long *param_2)

{
  if ((*param_1 != *param_2 || param_1[1] != param_2[1]) || param_1[2] != param_2[2]) {
    return false;
  }
  return param_1[3] == param_2[3];
}



/* Entry: 101e8a940; end: 101e8a9bf;  */

uint FUN_101e8a940(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar4 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  uVar7 = param_1[5];
  uVar6 = param_1[4];
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  if (uVar4 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar5 = 0;
    if ((uVar4 & 1) == 0) goto LAB_101e8a9b8;
  }
  auVar1._4_4_ = -(uint)(uVar3 == uVar11);
  auVar1._0_4_ = -(uint)(uVar2 == uVar10);
  auVar1._8_4_ = -(uint)(uVar6 == uVar8);
  auVar1._12_4_ = -(uint)(uVar7 == uVar9);
  uVar5 = NEON_uminv(auVar1,4);
LAB_101e8a9b8:
  return uVar5 & 1;
}



/* Entry: 101e8a9c0; end: 101e8aa23;  */

int FUN_101e8a9c0(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101e8aa24; end: 101e8aa57;  */

undefined8 * FUN_101e8aa24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101e8aa58; end: 101e8aac3;  */

undefined8 * FUN_101e8aa58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101e8aac4; end: 101e8aaff;  */

undefined8 * FUN_101e8aac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 101e8ab00; end: 101e8abab;  */

int FUN_101e8ab00(int *param_1,int param_2)

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



/* Entry: 101e8abac; end: 101e8abdb;  */

void FUN_101e8abac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e8abdc; end: 101e8ac03;  */

void FUN_101e8abdc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a96a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam000000011349fc48 = puVar1;
  return;
}



/* Entry: 101e8ac04; end: 101e8ad03;  */

/* WARNING: Possible PIC construction at 0x000101e8ac78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8ac7c) */

void FUN_101e8ac04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_1,param_2);
  func_0x0001058fe4c8(uVar1,param_3,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101e8ad04; end: 101e8ad1b;  */

void FUN_101e8ad04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 8;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  return;
}



/* Entry: 101e8ad1c; end: 101e8aebf;  */

void FUN_101e8ad1c(byte *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_70 [24];
  ulong uStack_58;
  undefined1 *puStack_48;
  
  puVar5 = auStack_a0;
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  FUN_101e8aec0(param_1 + 8,auStack_70);
  puVar4 = puStack_48;
  uVar6 = uStack_58;
  if (uStack_58 == 0) {
    func_0x000101e8af10(auStack_70);
  }
  else {
    func_0x000100dd26f4(auStack_70,uStack_58);
    (**(code **)(puVar4 + 0x18))(uVar6);
    func_0x000101e8b5e8(auStack_70);
    if (puVar4 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      func_0x000107c5fadc(uVar6,puVar4);
      func_0x000107c6142c(puVar4);
    }
  }
  FUN_101e8aec0(param_1 + 8,auStack_a0);
  if (lStack_88 == 0) {
    func_0x000101e8af10(auStack_a0);
    uVar2 = (ulong)*param_1;
    func_0x000103c11884(uVar2);
  }
  else {
    func_0x000101e8b5d0(auStack_a0,auStack_70);
    func_0x000100dd26f4(auStack_70,uStack_58);
    uVar2 = uStack_58;
    puVar5 = puStack_48;
    (**(code **)(puStack_48 + 0x10))(uStack_58,puStack_48);
    func_0x000101e8b5e8(auStack_70);
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar5);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001058fdf48(uVar1,uVar6,uVar2,uVar3,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101e8aec0; end: 101e8af57;  */

undefined8 FUN_101e8aec0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e34e68;
  func_0x0001000285a8(0x112e34e68,&UNK_10da1e2b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101e8af58; end: 101e8b08b;  */

void FUN_101e8af58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined1 *puStack_48;
  
  puVar6 = auStack_70;
  puVar4 = auStack_70;
  puVar5 = auStack_70;
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  FUN_101e8aec0(param_1 + 8,auStack_70);
  if (lStack_58 == 0) {
    func_0x000101e8af10(auStack_70);
  }
  else {
    func_0x000100dd26f4(auStack_70,lStack_58);
    lVar3 = lStack_58;
    puVar5 = puStack_48;
    (**(code **)(puStack_48 + 0x18))(lStack_58);
    puVar6 = puVar5;
    func_0x000101e8b5e8(auStack_70);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar4;
      lStack_58 = 0;
    }
    else {
      puVar6 = puVar5;
      func_0x000107c5fadc(lVar3,puVar5);
      func_0x000107c6142c(puVar5);
      lStack_58 = lVar3;
    }
  }
  func_0x000103c15394();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar6);
  func_0x0001058fe208(uVar1,uVar2,lStack_58,puVar5,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101e8b08c; end: 101e8b1f3;  */

void FUN_101e8b08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  uVar4 = 0xe200000000000000;
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  uVar2 = 0x800000010f016be0;
  func_0x000107c6142c(0x800000010f016be0);
  FUN_101e8b608(param_1,param_2,param_3);
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001058fd974(uVar1,uVar2,uVar4,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101e8b1f4; end: 101e8b25b;  */

void FUN_101e8b1f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001058fddd4(uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101e8b25c; end: 101e8b33f;  */

void FUN_101e8b25c(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c5fb78(0x20646564616f6c20,0xeb00000000206e69);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(0xec000000206c6564);
  return;
}



/* Entry: 101e8b340; end: 101e8b36b;  */

void FUN_101e8b340(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e8b36c; end: 101e8b3ab;  */

void FUN_101e8b36c(void)

{
  FUN_101e8ad1c();
  return;
}



/* Entry: 101e8b3ac; end: 101e8b3b3;  */

void FUN_101e8b3ac(void)

{
  return;
}



/* Entry: 101e8b3b4; end: 101e8b45f;  */

/* WARNING: Possible PIC construction at 0x000101e8b3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8b3e4) */

void FUN_101e8b3b4(void)

{
  func_0x000107c602fc(0x16);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 101e8b460; end: 101e8b483;  */

void FUN_101e8b460(void)

{
  undefined *puVar1;
  
  func_0x000107c602fc(0x20);
  func_0x000107c6142c(0xe000000000000000);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(0x800000010f016dd0);
  return;
}



/* Entry: 101e8b484; end: 101e8b4ef;  */

void FUN_101e8b484(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(lVar3 + 0x20));
  func_0x0001058fddd4(uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101e8b4f0; end: 101e8b4f7;  */

/* WARNING: Possible PIC construction at 0x000101e8c0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8c0ac) */

void FUN_101e8b4f0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  func_0x000107c602fc(0x59);
  func_0x000107c5fb78(0xd000000000000057,0x800000010f016c10);
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101e8b4f8; end: 101e8b517;  */

void FUN_101e8b4f8(void)

{
  FUN_101e8b08c();
  return;
}



/* Entry: 101e8b518; end: 101e8b523;  */

void FUN_101e8b518(void)

{
  return;
}



/* Entry: 101e8b524; end: 101e8b5cb;  */

/* WARNING: Possible PIC construction at 0x000101e8b590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8b594) */

void FUN_101e8b524(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  FUN_101e8b608();
  if (lRam000000011349fc40 != -1) {
    func_0x000107c61568(0x11349fc40,FUN_101e8abdc);
  }
  uVar1 = uRam000000011349fc48;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(lVar3 + 0x20));
  func_0x0001058fdba4(uVar1,param_1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e8b5cc; end: 101e8b607;  */

/* WARNING: Possible PIC construction at 0x000101e8bf9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8bfa0) */

void FUN_101e8b5cc(void)

{
  func_0x000107c602fc(0x2f);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 101e8b608; end: 101e8b76b;  */

undefined1  [16] FUN_101e8b608(double param_1,double param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b754);
    (*pcVar3)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b758);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b75c);
    (*pcVar3)();
  }
  dVar7 = (double)(long)(param_3 / param_1 + param_3 / param_1);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b760);
    (*pcVar3)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b764);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b768);
    (*pcVar3)();
  }
  if (SUB168(SEXT816((long)dVar7) * SEXT816(5),8) == (long)dVar7 * 5 >> 0x3f) {
    puVar4 = PTR___sSiN_11034deb0;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c();
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c6057c(puVar2,puVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x78,0xe100000000000000);
    auVar1._8_8_ = puVar5;
    auVar1._0_8_ = puVar4;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8b76c);
  (*pcVar3)();
}



/* Entry: 101e8b76c; end: 101e8b8b3;  */

void FUN_101e8b76c(void)

{
  undefined *puVar1;
  
  func_0x000107c602fc(0x20);
  func_0x000107c6142c(0xe000000000000000);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(0x800000010f016dd0);
  return;
}



/* Entry: 101e8b8b4; end: 101e8baa7;  */

undefined1  [16] FUN_101e8b8b4(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  ulong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  uVar6 = 0xe90000000000003e;
  uVar7 = 0x64696c61766e693c;
  uVar4 = param_2;
  func_0x000107c5f974();
  if ((uVar4 & 1) != 0) {
    uStack_60 = (undefined4)param_3;
    uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
    uStack_68 = param_2;
    uStack_58 = param_4;
    func_0x000107c60a3c(&uStack_68);
    if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
      dVar9 = param_1 / 3600.0;
      if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8ba98);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8ba9c);
        (*pcVar3)();
      }
      dVar8 = param_1;
      func_0x000107c60fc4();
      dVar8 = dVar8 / 60.0;
      if ((0x7fefffffffffffff < (ulong)ABS(dVar9)) || (0x7fefffffffffffff < (ulong)ABS(dVar8))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8baa0);
        (*pcVar3)();
      }
      if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8baa4);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e8baa8);
        (*pcVar3)();
      }
      func_0x000107c60fc4(param_1,0x404e000000000000);
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 6;
      *(undefined8 *)(lVar5 + 0x10) = 3;
      puVar2 = PTR___sSis7CVarArgsWP_11034df08;
      puVar1 = PTR___sSiN_11034deb0;
      *(undefined **)(lVar5 + 0x38) = PTR___sSiN_11034deb0;
      *(undefined **)(lVar5 + 0x40) = puVar2;
      *(long *)(lVar5 + 0x20) = (long)dVar9;
      *(undefined **)(lVar5 + 0x60) = puVar1;
      *(undefined **)(lVar5 + 0x68) = puVar2;
      puVar1 = PTR___sSdN_11034dd90;
      *(long *)(lVar5 + 0x48) = (long)dVar8;
      puVar2 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar5 + 0x88) = puVar1;
      *(undefined **)(lVar5 + 0x90) = puVar2;
      *(double *)(lVar5 + 0x70) = param_1;
      uVar6 = 0x800000010f016d30;
      uVar7 = 0xd000000000000010;
      func_0x000107c5fb00(0xd000000000000010,0x800000010f016d30,lVar5);
    }
  }
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 101e8baa8; end: 101e8bbff;  */

void FUN_101e8baa8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e8bbf8);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(0xe000000000000000);
      puVar2 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c5fb78(0x3a5354502820736d,0xe900000000000020);
      FUN_101e8b8b4(param_2,param_3,param_4);
      func_0x000107c5fb78();
      func_0x000107c6142c(param_3);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(0x800000010f016d80);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e8bc00);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e8bbfc);
  (*pcVar1)();
}



/* Entry: 101e8bc00; end: 101e8bca3;  */

void FUN_101e8bc00(void)

{
  undefined *puVar1;
  
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(0xe000000000000000);
  puVar1 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x000107c5fb78(0x736d,0xe200000000000000);
  func_0x000107c6142c(0x800000010f016d50);
  return;
}



/* Entry: 101e8bca4; end: 101e8bd83;  */

/* WARNING: Possible PIC construction at 0x000101e8bce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e8bd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8bcec) */
/* WARNING: Removing unreachable block (ram,0x000101e8bd58) */

void FUN_101e8bca4(void)

{
  func_0x000107c602fc(0x29);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 101e8bd84; end: 101e8be23;  */

void FUN_101e8bd84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x2e);
  func_0x000107c5fb78(0xd00000000000002c,0x800000010f016ce0);
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100f6e330(0);
  func_0x000107c603d0(&uStack_50,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 101e8be24; end: 101e8bf5b;  */

/* WARNING: Possible PIC construction at 0x000101e8be50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e8bea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8be54) */
/* WARNING: Removing unreachable block (ram,0x000101e8bea4) */

void FUN_101e8be24(void)

{
  func_0x000107c602fc(0x16);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 101e8bf5c; end: 101e8c01f;  */

/* WARNING: Possible PIC construction at 0x000101e8bf9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8bfa0) */

void FUN_101e8bf5c(void)

{
  func_0x000107c602fc(0x2f);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 101e8c020; end: 101e8c0bf;  */

/* WARNING: Possible PIC construction at 0x000101e8c0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8c0ac) */

void FUN_101e8c020(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  func_0x000107c602fc(0x59);
  func_0x000107c5fb78(0xd000000000000057,0x800000010f016c10);
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101e8c0c0; end: 101e8c0df;  */

void FUN_101e8c0c0(void)

{
  func_0x000107c61168(&PTR_PTR_112e34eb0);
  return;
}



/* Entry: 101e8c0e0; end: 101e8c133;  */

void FUN_101e8c0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 101e8c134; end: 101e8c15f;  */

/* WARNING: Possible PIC construction at 0x000101e8c140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e8c150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e8c144) */
/* WARNING: Removing unreachable block (ram,0x000101e8c154) */

void FUN_101e8c134(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e8c160; end: 101e8c1df;  */

void FUN_101e8c160(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e8c1e0; end: 101e8c233;  */

undefined8 FUN_101e8c1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006bf1ec(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101e8c234; end: 101e8c2ab;  */

/* WARNING: Removing unreachable block (ram,0x000101e8c314) */
/* WARNING: Removing unreachable block (ram,0x000101e8c31c) */
/* WARNING: Removing unreachable block (ram,0x000101e8c338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101e8c234(long param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined1 param_6,long param_7,undefined1 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar14;
  undefined *puVar15;
  undefined *puVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 uVar19;
  code **ppcVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x20;
  long *unaff_x22;
  long lVar24;
  undefined8 *puVar25;
  ulong unaff_x29;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  code *pcStack_1c0;
  long lStack_1b8;
  code *pcStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  ulong *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e0;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_80;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_50;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x15] = param_7;
  unaff_x22[0x16] = unaff_x20;
  *(undefined1 *)((long)unaff_x22 + 0xe9) = param_8;
  *(undefined1 *)(unaff_x22 + 0x1d) = param_6;
  unaff_x22[0x13] = param_4;
  unaff_x22[0x14] = param_5;
  unaff_x22[0x11] = param_2;
  unaff_x22[0x12] = param_3;
  unaff_x22[0x10] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8c2ac;
  }
  else {
    func_0x000107c60e78();
    uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_28 = FUN_101e8c2ac;
    lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar22 = unaff_x22[0x11];
    FUN_101e8c970(lVar22,unaff_x22[0x12],unaff_x22[0x13],unaff_x22[0x14]);
    unaff_x22[0x17] = lVar22;
    lVar24 = unaff_x22[0x11];
    FUN_101e8e3ac(lVar24,unaff_x22[0x12],lVar22,(char)unaff_x22[0x1d],unaff_x22[0x15],
                  *(undefined1 *)((long)unaff_x22 + 0xe9));
    unaff_x22[0x18] = lVar24;
    puVar25 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    unaff_x22[0x19] = (long)puVar25;
    *puVar25 = unaff_x22;
    puVar25[1] = FUN_101e8c3b0;
    lVar13 = unaff_x22[0x16];
    lVar24 = unaff_x22[0x11];
    lVar8 = unaff_x22[0x12];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_50) {
      func_0x000107c60e78();
      uStack_70 = (ulong)&uStack_30 | 0x1000000000000000;
      pcStack_68 = FUN_101e8c3b0;
      lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar22 = *unaff_x22;
      lVar24 = *unaff_x22;
      *(undefined8 **)(lVar22 + 0xd0) = puVar25;
      *(long *)(lVar22 + 0xd8) = lVar8;
      *(long *)(lVar22 + 0xe0) = lVar13;
      func_0x000107c615c0(*(undefined8 *)(lVar22 + 200));
      if (lVar13 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          UNRECOVERED_JUMPTABLE_00 = FUN_101e8c458;
          goto LAB_107c615e0;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        UNRECOVERED_JUMPTABLE_00 = FUN_101e8c908;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_90 = (ulong)&uStack_70 | 0x1000000000000000;
      pcStack_88 = FUN_101e8c458;
      lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar23 = 0xd000000000000016;
      uVar11 = *(undefined8 *)(lVar24 + 0xd0);
      uVar21 = *(undefined8 *)(lVar24 + 0xd8);
      lVar22 = *(long *)(lVar24 + 0xb0);
      uVar19 = *(undefined8 *)(lVar24 + 0x88);
      uVar2 = *(undefined8 *)(lVar24 + 0x90);
      uStack_f8 = 0;
      plStack_f0 = (long *)0xe000000000000000;
      func_0x000107c602fc(0x22);
      func_0x000107c6142c(plStack_f0);
      uStack_f8 = 0xd000000000000020;
      plStack_f0 = (undefined8 *)0x800000010f016e50;
      func_0x000107c5fb78(uVar11,uVar21);
      plVar5 = plStack_f0;
      func_0x000107c6142c();
      func_0x0001000f11b0();
      puVar25 = plVar5;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar6 = *puVar25;
      uStack_f8 = 0;
      plStack_f0 = (long *)0xe000000000000000;
      puStack_108 = puVar25;
      func_0x000107c61174(uVar6);
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(plStack_f0);
      uStack_f8 = 0xd00000000000002a;
      plStack_f0 = (long *)0x800000010f016e80;
      func_0x000107c5fb78(uVar19,uVar2);
      plVar9 = plStack_f0;
      uVar19 = uStack_f8;
      func_0x000100029b28(uStack_f8,plStack_f0);
      uStack_100 = uVar19;
      func_0x000107c6142c(plVar9);
      func_0x000107c61170(uVar6);
      puVar7 = PTR_PTR_1126a96b0;
      func_0x000107c61168();
      func_0x000107c5fadc(uVar11,uVar21);
      uVar19 = *(undefined8 *)(lVar22 + 0x28);
      func_0x000107c5fadc(uVar19,*(undefined8 *)(lVar22 + 0x30));
      *(long *)(lVar24 + 0x70) = 0;
      func_0x000107c4b74c();
      func_0x000107c61180();
      func_0x000107c61170(uVar19);
      func_0x000107c61170(uVar11);
      lVar8 = *(long *)(lVar24 + 0x70);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar22 = lVar8;
      func_0x0001000f11b0();
      if (SBORROW8(lVar22,(long)plVar5)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8c904);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      if (lVar8 == 0) {
        uVar11 = *(undefined8 *)(lVar24 + 0xd8);
        puVar10 = *(undefined **)(lVar24 + 0xb8);
        uVar19 = *(undefined8 *)(lVar24 + 0xc0);
        puVar25 = *(undefined8 **)(lVar24 + 0x80);
        func_0x000101e90784(*(undefined8 *)(lVar24 + 0xd0),uVar11,(lVar22 - (long)plVar5) / 1000);
        func_0x000107c6142c(uVar11);
        puVar12 = (undefined *)0x0;
        FUN_101e91d64();
        puVar15 = puVar12;
        func_0x000107c613fc();
        lVar13 = 0;
        func_0x00010006a340();
        *(undefined8 *)(puVar15 + 0x28) = 0;
        *(undefined8 *)(puVar15 + 0x20) = 0;
        *(undefined8 *)(puVar15 + 0x38) = 0;
        *(undefined8 *)(puVar15 + 0x30) = 0;
        *(undefined8 *)(puVar15 + 0x40) = 0;
        func_0x000107c613fc();
        uVar11 = uVar19;
        func_0x000107c6157c();
        func_0x00010006a360();
        *(undefined8 *)(puVar15 + 0x48) = uVar11;
        *(undefined8 *)(puVar15 + 0x58) = 0;
        *(undefined8 *)(puVar15 + 0x50) = 0;
        *(undefined8 *)(puVar15 + 0x68) = 0;
        *(undefined8 *)(puVar15 + 0x60) = 0;
        *(undefined8 *)(puVar15 + 0x70) = 0;
        lVar22 = lVar13;
        func_0x000107c613fc(lVar13,0x18,7);
        func_0x00010006a360();
        *(long *)(puVar15 + 0x78) = lVar22;
        lVar8 = _DAT_112e35280;
        lVar22 = 0x112e34ff8;
        func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
        (**(code **)(*(long *)(lVar22 + -8) + 0x38))(puVar15 + lVar8,1,1,lVar22);
        puVar4 = puStack_108;
        *(undefined **)(puVar15 + 0x10) = puVar7;
        *(undefined8 *)(puVar15 + 0x18) = uVar19;
        puVar25[3] = puVar12;
        puVar25[4] = &PTR_DAT_110491e80;
        *puVar25 = puVar15;
        lVar22 = lVar24 + 0x28;
        lVar8 = 0;
        uVar21 = 0;
        func_0x000107c61428(puStack_108,lVar22,0,0);
        uVar11 = *puVar4;
        func_0x000107c61174(uVar11);
        func_0x000100069b5c(uStack_100);
        func_0x000107c61170(uVar11);
        func_0x000107c61574(uVar19);
        func_0x000107c61170(puVar10);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) goto LAB_101e8c8e0;
      }
      else {
        uVar23 = *(undefined8 *)(lVar24 + 0xb8);
        puVar15 = *(undefined **)(lVar24 + 0xc0);
        uVar11 = *(undefined8 *)(lVar24 + 0x88);
        puVar25 = *(undefined8 **)(lVar24 + 0x90);
        func_0x000107c6142c(*(undefined8 *)(lVar24 + 0xd8));
        uStack_f8 = 0;
        plStack_f0 = (long *)0xe000000000000000;
        lVar13 = lVar8;
        func_0x000107c61174();
        func_0x000107c602fc(0x18);
        func_0x000107c6142c(plStack_f0);
        uStack_f8 = 0xd000000000000016;
        plStack_f0 = (long *)0x800000010f016eb0;
        func_0x000107c614cc(lVar13,lVar24 + 0x78,lVar24 + 0x40);
        uVar19 = *(undefined8 *)(lVar24 + 0x50);
        func_0x000107c60640(*(undefined8 *)(lVar24 + 0x48));
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar19);
        func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
        func_0x000107c5fb78(uVar11,puVar25);
        func_0x000107c61170(lVar13);
        plVar9 = plStack_f0;
        func_0x000107c6142c();
        FUN_101e8f380();
        puVar10 = &UNK_110491da8;
        func_0x000107c613f8(&UNK_110491da8,plVar9,0,0);
        *plVar9 = lVar8;
        func_0x000107c61654();
        func_0x000107c615e8(puVar7);
        func_0x000107c61170(lVar13);
        puVar4 = puStack_108;
        lVar22 = lVar24 + 0x58;
        lVar8 = 0;
        uVar21 = 0;
        func_0x000107c61428(puStack_108,lVar22,0,0);
        uVar11 = *puVar4;
        func_0x000107c61174(uVar11);
        func_0x000100069b5c(uStack_100);
        func_0x000107c61170(uVar11);
        func_0x000107c61574(puVar15);
        func_0x000107c61170(uVar23);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
        puVar12 = puVar10;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
LAB_101e8c8e0:
                    /* WARNING: Could not recover jumptable at 0x000101e8c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return UNRECOVERED_JUMPTABLE_00;
        }
      }
      func_0x000107c60e78();
      uStack_120 = (ulong)&uStack_90 | 0x1000000000000000;
      pcStack_118 = FUN_101e8c908;
      lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar11 = *(undefined8 *)(lVar24 + 0xb8);
      lStack_128 = lVar24;
      func_0x000107c61574(*(undefined8 *)(lVar24 + 0xc0));
      func_0x000107c61170(uVar11);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 0xe0);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      pcStack_138 = FUN_101e8c970;
      puStack_190 = puVar25;
      lStack_180 = lVar13;
      puStack_178 = puVar15;
      uStack_170 = uVar19;
      puStack_168 = puVar7;
      puStack_160 = puVar12;
      lStack_158 = lVar24;
      pcStack_150 = UNRECOVERED_JUMPTABLE_00;
      uStack_148 = uVar23;
      puStack_140 = &uStack_120;
      FUN_101e8e0c4(lVar8,uVar21);
      if (puVar10 == (undefined *)0x0) {
        lVar24 = lVar8;
        lStack_188 = lVar22;
        func_0x000107c4d084();
        func_0x000107c61180();
        if (lVar24 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        lVar22 = lVar24;
        func_0x000107c3db60();
        func_0x000107c61180();
        func_0x000107c61170(lVar24);
        puVar10 = PTR___sypN_11034f1a8;
        lVar13 = lVar22;
        func_0x000107c5fc54(lVar22,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(lVar22);
        puVar7 = PTR___sSSN_11034da80;
        lVar22 = *(long *)(lVar13 + 0x10);
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar24 = lVar13;
        if (lVar22 == 0) {
          func_0x000107c6142c();
          puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          do {
            func_0x0001000bb420(lVar24 + 0x20,&pcStack_1b0);
            func_0x000100102924(&pcStack_1b0,&pcStack_1e0);
            ppcVar14 = &pcStack_1c0;
            func_0x000107c6147c(ppcVar14,&pcStack_1e0,puVar10 + 8,puVar7,6);
            lVar3 = lStack_1b8;
            UNRECOVERED_JUMPTABLE_00 = pcStack_1c0;
            if ((((ulong)ppcVar14 & 1) != 0) && (lStack_1b8 != 0)) {
              puVar12 = puVar15;
              func_0x000107c61558();
              puVar16 = puVar15;
              if (((ulong)puVar12 & 1) == 0) {
                puVar16 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
              }
              uVar1 = *(ulong *)(puVar16 + 0x10);
              puVar15 = puVar16;
              if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
                puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
                func_0x0001000d182c(puVar15,uVar1 + 1,1,puVar16);
              }
              *(ulong *)(puVar15 + 0x10) = uVar1 + 1;
              *(code **)(puVar15 + uVar1 * 0x10 + 0x20) = UNRECOVERED_JUMPTABLE_00;
              *(long *)(puVar15 + uVar1 * 0x10 + 0x28) = lVar3;
            }
            lVar22 = lVar22 + -1;
            lVar24 = lVar24 + 0x20;
          } while (lVar22 != 0);
          func_0x000107c6142c(lVar13);
        }
        FUN_101e90128(puVar15);
        func_0x000107c6142c(puVar15);
        lVar24 = lVar8;
        func_0x000107c4d084();
        func_0x000107c61180();
        lVar22 = lStack_188;
        if (lVar24 == 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        lStack_1d8 = lStack_188;
        pcStack_1e0 = UNRECOVERED_JUMPTABLE;
        func_0x000107c61434(lStack_188);
        ppcVar14 = &pcStack_1e0;
        func_0x000107c6061c(ppcVar14,PTR___sSSN_11034da80);
        lVar13 = lVar24;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c61170(lVar24);
        func_0x000107c615e8(ppcVar14);
        if (lVar13 == 0) {
          lStack_1d8 = 0;
          pcStack_1e0 = (code *)0x0;
          lStack_1c8 = 0;
          uStack_1d0 = 0;
        }
        else {
          func_0x000107c60234(&pcStack_1e0,lVar13);
          func_0x000107c615e8(lVar13);
        }
        puStack_1a8 = (undefined8 *)lStack_1d8;
        pcStack_1b0 = pcStack_1e0;
        lStack_198 = lStack_1c8;
        uStack_1a0 = uStack_1d0;
        if (lStack_1c8 == 0) {
          func_0x00010006e7f4(&pcStack_1b0);
        }
        else {
          uVar11 = 0;
          FUN_10196014c(0);
          ppcVar14 = &pcStack_1c0;
          ppcVar20 = &pcStack_1b0;
          func_0x000107c6147c(ppcVar14,ppcVar20,puVar10 + 8,uVar11,6);
          if (((ulong)ppcVar14 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 = pcStack_1c0;
            func_0x000107c40488();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
              UNRECOVERED_JUMPTABLE_00 = (code *)0xe300000000000000;
              uVar11 = 0x6c696e;
            }
            else {
              UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
              func_0x000107c5ee30();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
              uVar11 = 0;
              UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
              func_0x000107c5ee24(0,UNRECOVERED_JUMPTABLE,ppcVar20);
              func_0x00010006c090(UNRECOVERED_JUMPTABLE,ppcVar20);
            }
            UNRECOVERED_JUMPTABLE = pcStack_1c0;
            func_0x000107c5d918();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              UNRECOVERED_JUMPTABLE = (code *)0x0;
            }
            else {
              pcStack_1b0 = (code *)0x0;
              ppcVar20 = &pcStack_1b0;
              func_0x000107c5f9e4();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE);
              UNRECOVERED_JUMPTABLE = pcStack_1b0;
            }
            pcVar17 = pcStack_1c0;
            func_0x000107c4d088();
            func_0x000107c61180();
            if (pcVar17 != (code *)0x0) {
              pcVar18 = pcVar17;
              func_0x000107c5faec();
              func_0x000107c61170(pcVar17);
              FUN_101e90228(pcVar18,ppcVar20,uVar11,UNRECOVERED_JUMPTABLE_00,UNRECOVERED_JUMPTABLE);
              func_0x000107c61170(lVar8);
              func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
              func_0x000107c6142c(ppcVar20);
              func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
              return pcStack_1c0;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
        }
        pcStack_1b0 = (code *)0xd000000000000019;
        puStack_1a8 = (undefined8 *)0x800000010f017050;
        func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
        func_0x000107c5fb78(UNRECOVERED_JUMPTABLE,lVar22);
        puVar25 = puStack_1a8;
        func_0x000107c6142c();
        FUN_101e8f380();
        UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110491da8;
        func_0x000107c613f8(&UNK_110491da8,puVar25,0,0);
        *puVar25 = 7;
        func_0x000107c61654();
        func_0x000107c61170(lVar8);
      }
      return UNRECOVERED_JUMPTABLE_00;
    }
    puVar25[6] = lVar22;
    puVar25[7] = lVar13;
    puVar25[4] = lVar24;
    puVar25[5] = lVar8;
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8cdd8;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 101e8c2ac; end: 101e8c3af;  */

/* WARNING: Removing unreachable block (ram,0x000101e8c314) */
/* WARNING: Removing unreachable block (ram,0x000101e8c31c) */
/* WARNING: Removing unreachable block (ram,0x000101e8c338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101e8c2ac(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar14;
  undefined *puVar15;
  undefined *puVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 uVar19;
  code **ppcVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long *unaff_x22;
  long lVar24;
  undefined8 *puVar25;
  ulong unaff_x29;
  code *pcStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  long lStack_198;
  code *pcStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  ulong *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c0;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_60;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = unaff_x22[0x11];
  FUN_101e8c970(lVar22,unaff_x22[0x12],unaff_x22[0x13],unaff_x22[0x14]);
  unaff_x22[0x17] = lVar22;
  lVar24 = unaff_x22[0x11];
  FUN_101e8e3ac(lVar24,unaff_x22[0x12],lVar22,(char)unaff_x22[0x1d],unaff_x22[0x15],
                *(undefined1 *)((long)unaff_x22 + 0xe9));
  unaff_x22[0x18] = lVar24;
  puVar25 = (undefined8 *)0xa0;
  func_0x000107c615b8();
  unaff_x22[0x19] = (long)puVar25;
  *puVar25 = unaff_x22;
  puVar25[1] = FUN_101e8c3b0;
  lVar13 = unaff_x22[0x16];
  lVar24 = unaff_x22[0x11];
  lVar8 = unaff_x22[0x12];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_30) {
    puVar25[6] = lVar22;
    puVar25[7] = lVar13;
    puVar25[4] = lVar24;
    puVar25[5] = lVar8;
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8cdd8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_48 = FUN_101e8c3b0;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *unaff_x22;
  lVar24 = *unaff_x22;
  *(undefined8 **)(lVar22 + 0xd0) = puVar25;
  *(long *)(lVar22 + 0xd8) = lVar8;
  *(long *)(lVar22 + 0xe0) = lVar13;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 200));
  if (lVar13 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101e8c458;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8c908;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_70 = (ulong)&uStack_50 | 0x1000000000000000;
  pcStack_68 = FUN_101e8c458;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = 0xd000000000000016;
  uVar11 = *(undefined8 *)(lVar24 + 0xd0);
  uVar21 = *(undefined8 *)(lVar24 + 0xd8);
  lVar22 = *(long *)(lVar24 + 0xb0);
  uVar19 = *(undefined8 *)(lVar24 + 0x88);
  uVar2 = *(undefined8 *)(lVar24 + 0x90);
  uStack_d8 = 0;
  plStack_d0 = (long *)0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(plStack_d0);
  uStack_d8 = 0xd000000000000020;
  plStack_d0 = (undefined8 *)0x800000010f016e50;
  func_0x000107c5fb78(uVar11,uVar21);
  plVar5 = plStack_d0;
  func_0x000107c6142c();
  func_0x0001000f11b0();
  puVar25 = plVar5;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar25;
  uStack_d8 = 0;
  plStack_d0 = (long *)0xe000000000000000;
  puStack_e8 = puVar25;
  func_0x000107c61174(uVar6);
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(plStack_d0);
  uStack_d8 = 0xd00000000000002a;
  plStack_d0 = (long *)0x800000010f016e80;
  func_0x000107c5fb78(uVar19,uVar2);
  plVar9 = plStack_d0;
  uVar19 = uStack_d8;
  func_0x000100029b28(uStack_d8,plStack_d0);
  uStack_e0 = uVar19;
  func_0x000107c6142c(plVar9);
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126a96b0;
  func_0x000107c61168();
  func_0x000107c5fadc(uVar11,uVar21);
  uVar19 = *(undefined8 *)(lVar22 + 0x28);
  func_0x000107c5fadc(uVar19,*(undefined8 *)(lVar22 + 0x30));
  *(long *)(lVar24 + 0x70) = 0;
  func_0x000107c4b74c();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  lVar8 = *(long *)(lVar24 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar22 = lVar8;
  func_0x0001000f11b0();
  if (SBORROW8(lVar22,(long)plVar5)) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8c904);
    (*UNRECOVERED_JUMPTABLE_00)();
  }
  if (lVar8 == 0) {
    uVar11 = *(undefined8 *)(lVar24 + 0xd8);
    puVar10 = *(undefined **)(lVar24 + 0xb8);
    uVar19 = *(undefined8 *)(lVar24 + 0xc0);
    puVar25 = *(undefined8 **)(lVar24 + 0x80);
    func_0x000101e90784(*(undefined8 *)(lVar24 + 0xd0),uVar11,(lVar22 - (long)plVar5) / 1000);
    func_0x000107c6142c(uVar11);
    puVar12 = (undefined *)0x0;
    FUN_101e91d64();
    puVar15 = puVar12;
    func_0x000107c613fc();
    lVar13 = 0;
    func_0x00010006a340();
    *(undefined8 *)(puVar15 + 0x28) = 0;
    *(undefined8 *)(puVar15 + 0x20) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    func_0x000107c613fc();
    uVar11 = uVar19;
    func_0x000107c6157c();
    func_0x00010006a360();
    *(undefined8 *)(puVar15 + 0x48) = uVar11;
    *(undefined8 *)(puVar15 + 0x58) = 0;
    *(undefined8 *)(puVar15 + 0x50) = 0;
    *(undefined8 *)(puVar15 + 0x68) = 0;
    *(undefined8 *)(puVar15 + 0x60) = 0;
    *(undefined8 *)(puVar15 + 0x70) = 0;
    lVar22 = lVar13;
    func_0x000107c613fc(lVar13,0x18,7);
    func_0x00010006a360();
    *(long *)(puVar15 + 0x78) = lVar22;
    lVar8 = _DAT_112e35280;
    lVar22 = 0x112e34ff8;
    func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
    (**(code **)(*(long *)(lVar22 + -8) + 0x38))(puVar15 + lVar8,1,1,lVar22);
    puVar4 = puStack_e8;
    *(undefined **)(puVar15 + 0x10) = puVar7;
    *(undefined8 *)(puVar15 + 0x18) = uVar19;
    puVar25[3] = puVar12;
    puVar25[4] = &PTR_DAT_110491e80;
    *puVar25 = puVar15;
    lVar22 = lVar24 + 0x28;
    lVar8 = 0;
    uVar21 = 0;
    func_0x000107c61428(puStack_e8,lVar22,0,0);
    uVar11 = *puVar4;
    func_0x000107c61174(uVar11);
    func_0x000100069b5c(uStack_e0);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar19);
    func_0x000107c61170(puVar10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) goto LAB_101e8c8e0;
  }
  else {
    uVar23 = *(undefined8 *)(lVar24 + 0xb8);
    puVar15 = *(undefined **)(lVar24 + 0xc0);
    uVar11 = *(undefined8 *)(lVar24 + 0x88);
    puVar25 = *(undefined8 **)(lVar24 + 0x90);
    func_0x000107c6142c(*(undefined8 *)(lVar24 + 0xd8));
    uStack_d8 = 0;
    plStack_d0 = (long *)0xe000000000000000;
    lVar13 = lVar8;
    func_0x000107c61174();
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(plStack_d0);
    uStack_d8 = 0xd000000000000016;
    plStack_d0 = (long *)0x800000010f016eb0;
    func_0x000107c614cc(lVar13,lVar24 + 0x78,lVar24 + 0x40);
    uVar19 = *(undefined8 *)(lVar24 + 0x50);
    func_0x000107c60640(*(undefined8 *)(lVar24 + 0x48));
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar19);
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(uVar11,puVar25);
    func_0x000107c61170(lVar13);
    plVar9 = plStack_d0;
    func_0x000107c6142c();
    FUN_101e8f380();
    puVar10 = &UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,plVar9,0,0);
    *plVar9 = lVar8;
    func_0x000107c61654();
    func_0x000107c615e8(puVar7);
    func_0x000107c61170(lVar13);
    puVar4 = puStack_e8;
    lVar22 = lVar24 + 0x58;
    lVar8 = 0;
    uVar21 = 0;
    func_0x000107c61428(puStack_e8,lVar22,0,0);
    uVar11 = *puVar4;
    func_0x000107c61174(uVar11);
    func_0x000100069b5c(uStack_e0);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(puVar15);
    func_0x000107c61170(uVar23);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
    puVar12 = puVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
LAB_101e8c8e0:
                    /* WARNING: Could not recover jumptable at 0x000101e8c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
  func_0x000107c60e78();
  uStack_100 = (ulong)&uStack_70 | 0x1000000000000000;
  pcStack_f8 = FUN_101e8c908;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(lVar24 + 0xb8);
  lStack_108 = lVar24;
  func_0x000107c61574(*(undefined8 *)(lVar24 + 0xc0));
  func_0x000107c61170(uVar11);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 0xe0);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  pcStack_118 = FUN_101e8c970;
  puStack_170 = puVar25;
  lStack_160 = lVar13;
  puStack_158 = puVar15;
  uStack_150 = uVar19;
  puStack_148 = puVar7;
  puStack_140 = puVar12;
  lStack_138 = lVar24;
  pcStack_130 = UNRECOVERED_JUMPTABLE_00;
  uStack_128 = uVar23;
  puStack_120 = &uStack_100;
  FUN_101e8e0c4(lVar8,uVar21);
  if (puVar10 == (undefined *)0x0) {
    lVar24 = lVar8;
    lStack_168 = lVar22;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar24 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar22 = lVar24;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c61170(lVar24);
    puVar10 = PTR___sypN_11034f1a8;
    lVar13 = lVar22;
    func_0x000107c5fc54(lVar22,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(lVar22);
    puVar7 = PTR___sSSN_11034da80;
    lVar22 = *(long *)(lVar13 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar24 = lVar13;
    if (lVar22 == 0) {
      func_0x000107c6142c();
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      do {
        func_0x0001000bb420(lVar24 + 0x20,&pcStack_190);
        func_0x000100102924(&pcStack_190,&pcStack_1c0);
        ppcVar14 = &pcStack_1a0;
        func_0x000107c6147c(ppcVar14,&pcStack_1c0,puVar10 + 8,puVar7,6);
        lVar3 = lStack_198;
        UNRECOVERED_JUMPTABLE_00 = pcStack_1a0;
        if ((((ulong)ppcVar14 & 1) != 0) && (lStack_198 != 0)) {
          puVar12 = puVar15;
          func_0x000107c61558();
          puVar16 = puVar15;
          if (((ulong)puVar12 & 1) == 0) {
            puVar16 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
          }
          uVar1 = *(ulong *)(puVar16 + 0x10);
          puVar15 = puVar16;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
            func_0x0001000d182c(puVar15,uVar1 + 1,1,puVar16);
          }
          *(ulong *)(puVar15 + 0x10) = uVar1 + 1;
          *(code **)(puVar15 + uVar1 * 0x10 + 0x20) = UNRECOVERED_JUMPTABLE_00;
          *(long *)(puVar15 + uVar1 * 0x10 + 0x28) = lVar3;
        }
        lVar22 = lVar22 + -1;
        lVar24 = lVar24 + 0x20;
      } while (lVar22 != 0);
      func_0x000107c6142c(lVar13);
    }
    FUN_101e90128(puVar15);
    func_0x000107c6142c(puVar15);
    lVar24 = lVar8;
    func_0x000107c4d084();
    func_0x000107c61180();
    lVar22 = lStack_168;
    if (lVar24 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lStack_1b8 = lStack_168;
    pcStack_1c0 = UNRECOVERED_JUMPTABLE;
    func_0x000107c61434(lStack_168);
    ppcVar14 = &pcStack_1c0;
    func_0x000107c6061c(ppcVar14,PTR___sSSN_11034da80);
    lVar13 = lVar24;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c61170(lVar24);
    func_0x000107c615e8(ppcVar14);
    if (lVar13 == 0) {
      lStack_1b8 = 0;
      pcStack_1c0 = (code *)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c60234(&pcStack_1c0,lVar13);
      func_0x000107c615e8(lVar13);
    }
    puStack_188 = (undefined8 *)lStack_1b8;
    pcStack_190 = pcStack_1c0;
    lStack_178 = lStack_1a8;
    uStack_180 = uStack_1b0;
    if (lStack_1a8 == 0) {
      func_0x00010006e7f4(&pcStack_190);
    }
    else {
      uVar11 = 0;
      FUN_10196014c(0);
      ppcVar14 = &pcStack_1a0;
      ppcVar20 = &pcStack_190;
      func_0x000107c6147c(ppcVar14,ppcVar20,puVar10 + 8,uVar11,6);
      if (((ulong)ppcVar14 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = pcStack_1a0;
        func_0x000107c40488();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)0xe300000000000000;
          uVar11 = 0x6c696e;
        }
        else {
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          uVar11 = 0;
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee24(0,UNRECOVERED_JUMPTABLE,ppcVar20);
          func_0x00010006c090(UNRECOVERED_JUMPTABLE,ppcVar20);
        }
        UNRECOVERED_JUMPTABLE = pcStack_1a0;
        func_0x000107c5d918();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
        }
        else {
          pcStack_190 = (code *)0x0;
          ppcVar20 = &pcStack_190;
          func_0x000107c5f9e4();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          UNRECOVERED_JUMPTABLE = pcStack_190;
        }
        pcVar17 = pcStack_1a0;
        func_0x000107c4d088();
        func_0x000107c61180();
        if (pcVar17 != (code *)0x0) {
          pcVar18 = pcVar17;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar17);
          FUN_101e90228(pcVar18,ppcVar20,uVar11,UNRECOVERED_JUMPTABLE_00,UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(lVar8);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
          func_0x000107c6142c(ppcVar20);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          return pcStack_1a0;
        }
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
    }
    pcStack_190 = (code *)0xd000000000000019;
    puStack_188 = (undefined8 *)0x800000010f017050;
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(UNRECOVERED_JUMPTABLE,lVar22);
    puVar25 = puStack_188;
    func_0x000107c6142c();
    FUN_101e8f380();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,puVar25,0,0);
    *puVar25 = 7;
    func_0x000107c61654();
    func_0x000107c61170(lVar8);
  }
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 101e8c3b0; end: 101e8c457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101e8c3b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar14;
  undefined *puVar15;
  undefined *puVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 uVar19;
  code **ppcVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x20;
  long *unaff_x22;
  long lVar24;
  undefined8 *puVar25;
  ulong unaff_x29;
  code *pcStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  code *pcStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_80;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *unaff_x22;
  lVar24 = *unaff_x22;
  *(undefined8 *)(lVar22 + 0xd0) = param_1;
  *(undefined8 *)(lVar22 + 0xd8) = param_2;
  *(long *)(lVar22 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar22 + 200));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
      UNRECOVERED_JUMPTABLE_00 = FUN_101e8c458;
      goto LAB_101e8c43c;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101e8c908;
LAB_101e8c43c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101e8c458;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = 0xd000000000000016;
  uVar11 = *(undefined8 *)(lVar24 + 0xd0);
  uVar21 = *(undefined8 *)(lVar24 + 0xd8);
  lVar22 = *(long *)(lVar24 + 0xb0);
  uVar19 = *(undefined8 *)(lVar24 + 0x88);
  uVar2 = *(undefined8 *)(lVar24 + 0x90);
  uStack_98 = 0;
  plStack_90 = (long *)0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(plStack_90);
  uStack_98 = 0xd000000000000020;
  plStack_90 = (undefined8 *)0x800000010f016e50;
  func_0x000107c5fb78(uVar11,uVar21);
  plVar5 = plStack_90;
  func_0x000107c6142c();
  func_0x0001000f11b0();
  puVar25 = plVar5;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar25;
  uStack_98 = 0;
  plStack_90 = (long *)0xe000000000000000;
  puStack_a8 = puVar25;
  func_0x000107c61174(uVar6);
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(plStack_90);
  uStack_98 = 0xd00000000000002a;
  plStack_90 = (long *)0x800000010f016e80;
  func_0x000107c5fb78(uVar19,uVar2);
  plVar9 = plStack_90;
  uVar19 = uStack_98;
  func_0x000100029b28(uStack_98,plStack_90);
  uStack_a0 = uVar19;
  func_0x000107c6142c(plVar9);
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126a96b0;
  func_0x000107c61168();
  func_0x000107c5fadc(uVar11,uVar21);
  uVar19 = *(undefined8 *)(lVar22 + 0x28);
  func_0x000107c5fadc(uVar19,*(undefined8 *)(lVar22 + 0x30));
  *(long *)(lVar24 + 0x70) = 0;
  func_0x000107c4b74c();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  lVar8 = *(long *)(lVar24 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar22 = lVar8;
  func_0x0001000f11b0();
  if (SBORROW8(lVar22,(long)plVar5)) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8c904);
    (*UNRECOVERED_JUMPTABLE_00)();
  }
  if (lVar8 == 0) {
    uVar11 = *(undefined8 *)(lVar24 + 0xd8);
    puVar10 = *(undefined **)(lVar24 + 0xb8);
    uVar19 = *(undefined8 *)(lVar24 + 0xc0);
    puVar25 = *(undefined8 **)(lVar24 + 0x80);
    func_0x000101e90784(*(undefined8 *)(lVar24 + 0xd0),uVar11,(lVar22 - (long)plVar5) / 1000);
    func_0x000107c6142c(uVar11);
    puVar12 = (undefined *)0x0;
    FUN_101e91d64();
    puVar15 = puVar12;
    func_0x000107c613fc();
    lVar13 = 0;
    func_0x00010006a340();
    *(undefined8 *)(puVar15 + 0x28) = 0;
    *(undefined8 *)(puVar15 + 0x20) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    func_0x000107c613fc();
    uVar11 = uVar19;
    func_0x000107c6157c();
    func_0x00010006a360();
    *(undefined8 *)(puVar15 + 0x48) = uVar11;
    *(undefined8 *)(puVar15 + 0x58) = 0;
    *(undefined8 *)(puVar15 + 0x50) = 0;
    *(undefined8 *)(puVar15 + 0x68) = 0;
    *(undefined8 *)(puVar15 + 0x60) = 0;
    *(undefined8 *)(puVar15 + 0x70) = 0;
    lVar22 = lVar13;
    func_0x000107c613fc(lVar13,0x18,7);
    func_0x00010006a360();
    *(long *)(puVar15 + 0x78) = lVar22;
    lVar8 = _DAT_112e35280;
    lVar22 = 0x112e34ff8;
    func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
    (**(code **)(*(long *)(lVar22 + -8) + 0x38))(puVar15 + lVar8,1,1,lVar22);
    puVar4 = puStack_a8;
    *(undefined **)(puVar15 + 0x10) = puVar7;
    *(undefined8 *)(puVar15 + 0x18) = uVar19;
    puVar25[3] = puVar12;
    puVar25[4] = &PTR_DAT_110491e80;
    *puVar25 = puVar15;
    lVar22 = lVar24 + 0x28;
    lVar8 = 0;
    uVar21 = 0;
    func_0x000107c61428(puStack_a8,lVar22,0,0);
    uVar11 = *puVar4;
    func_0x000107c61174(uVar11);
    func_0x000100069b5c(uStack_a0);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar19);
    func_0x000107c61170(puVar10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto LAB_101e8c8e0;
  }
  else {
    uVar23 = *(undefined8 *)(lVar24 + 0xb8);
    puVar15 = *(undefined **)(lVar24 + 0xc0);
    uVar11 = *(undefined8 *)(lVar24 + 0x88);
    puVar25 = *(undefined8 **)(lVar24 + 0x90);
    func_0x000107c6142c(*(undefined8 *)(lVar24 + 0xd8));
    uStack_98 = 0;
    plStack_90 = (long *)0xe000000000000000;
    lVar13 = lVar8;
    func_0x000107c61174();
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(plStack_90);
    uStack_98 = 0xd000000000000016;
    plStack_90 = (long *)0x800000010f016eb0;
    func_0x000107c614cc(lVar13,lVar24 + 0x78,lVar24 + 0x40);
    uVar19 = *(undefined8 *)(lVar24 + 0x50);
    func_0x000107c60640(*(undefined8 *)(lVar24 + 0x48));
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar19);
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(uVar11,puVar25);
    func_0x000107c61170(lVar13);
    plVar9 = plStack_90;
    func_0x000107c6142c();
    FUN_101e8f380();
    puVar10 = &UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,plVar9,0,0);
    *plVar9 = lVar8;
    func_0x000107c61654();
    func_0x000107c615e8(puVar7);
    func_0x000107c61170(lVar13);
    puVar4 = puStack_a8;
    lVar22 = lVar24 + 0x58;
    lVar8 = 0;
    uVar21 = 0;
    func_0x000107c61428(puStack_a8,lVar22,0,0);
    uVar11 = *puVar4;
    func_0x000107c61174(uVar11);
    func_0x000100069b5c(uStack_a0);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(puVar15);
    func_0x000107c61170(uVar23);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 8);
    puVar12 = puVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
LAB_101e8c8e0:
                    /* WARNING: Could not recover jumptable at 0x000101e8c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_30 | 0x1000000000000000;
  pcStack_b8 = FUN_101e8c908;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(lVar24 + 0xb8);
  lStack_c8 = lVar24;
  func_0x000107c61574(*(undefined8 *)(lVar24 + 0xc0));
  func_0x000107c61170(uVar11);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar24 + 0xe0);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  pcStack_d8 = FUN_101e8c970;
  puStack_130 = puVar25;
  lStack_120 = lVar13;
  puStack_118 = puVar15;
  uStack_110 = uVar19;
  puStack_108 = puVar7;
  puStack_100 = puVar12;
  lStack_f8 = lVar24;
  pcStack_f0 = UNRECOVERED_JUMPTABLE_00;
  uStack_e8 = uVar23;
  puStack_e0 = &uStack_c0;
  FUN_101e8e0c4(lVar8,uVar21);
  if (puVar10 == (undefined *)0x0) {
    lVar24 = lVar8;
    lStack_128 = lVar22;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar24 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar22 = lVar24;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c61170(lVar24);
    puVar10 = PTR___sypN_11034f1a8;
    lVar13 = lVar22;
    func_0x000107c5fc54(lVar22,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(lVar22);
    puVar7 = PTR___sSSN_11034da80;
    lVar22 = *(long *)(lVar13 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar24 = lVar13;
    if (lVar22 == 0) {
      func_0x000107c6142c();
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      do {
        func_0x0001000bb420(lVar24 + 0x20,&pcStack_150);
        func_0x000100102924(&pcStack_150,&pcStack_180);
        ppcVar14 = &pcStack_160;
        func_0x000107c6147c(ppcVar14,&pcStack_180,puVar10 + 8,puVar7,6);
        lVar3 = lStack_158;
        UNRECOVERED_JUMPTABLE_00 = pcStack_160;
        if ((((ulong)ppcVar14 & 1) != 0) && (lStack_158 != 0)) {
          puVar12 = puVar15;
          func_0x000107c61558();
          puVar16 = puVar15;
          if (((ulong)puVar12 & 1) == 0) {
            puVar16 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
          }
          uVar1 = *(ulong *)(puVar16 + 0x10);
          puVar15 = puVar16;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
            func_0x0001000d182c(puVar15,uVar1 + 1,1,puVar16);
          }
          *(ulong *)(puVar15 + 0x10) = uVar1 + 1;
          *(code **)(puVar15 + uVar1 * 0x10 + 0x20) = UNRECOVERED_JUMPTABLE_00;
          *(long *)(puVar15 + uVar1 * 0x10 + 0x28) = lVar3;
        }
        lVar22 = lVar22 + -1;
        lVar24 = lVar24 + 0x20;
      } while (lVar22 != 0);
      func_0x000107c6142c(lVar13);
    }
    FUN_101e90128(puVar15);
    func_0x000107c6142c(puVar15);
    lVar24 = lVar8;
    func_0x000107c4d084();
    func_0x000107c61180();
    lVar22 = lStack_128;
    if (lVar24 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lStack_178 = lStack_128;
    pcStack_180 = UNRECOVERED_JUMPTABLE;
    func_0x000107c61434(lStack_128);
    ppcVar14 = &pcStack_180;
    func_0x000107c6061c(ppcVar14,PTR___sSSN_11034da80);
    lVar13 = lVar24;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c61170(lVar24);
    func_0x000107c615e8(ppcVar14);
    if (lVar13 == 0) {
      lStack_178 = 0;
      pcStack_180 = (code *)0x0;
      lStack_168 = 0;
      uStack_170 = 0;
    }
    else {
      func_0x000107c60234(&pcStack_180,lVar13);
      func_0x000107c615e8(lVar13);
    }
    puStack_148 = (undefined8 *)lStack_178;
    pcStack_150 = pcStack_180;
    lStack_138 = lStack_168;
    uStack_140 = uStack_170;
    if (lStack_168 == 0) {
      func_0x00010006e7f4(&pcStack_150);
    }
    else {
      uVar11 = 0;
      FUN_10196014c(0);
      ppcVar14 = &pcStack_160;
      ppcVar20 = &pcStack_150;
      func_0x000107c6147c(ppcVar14,ppcVar20,puVar10 + 8,uVar11,6);
      if (((ulong)ppcVar14 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = pcStack_160;
        func_0x000107c40488();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)0xe300000000000000;
          uVar11 = 0x6c696e;
        }
        else {
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          uVar11 = 0;
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee24(0,UNRECOVERED_JUMPTABLE,ppcVar20);
          func_0x00010006c090(UNRECOVERED_JUMPTABLE,ppcVar20);
        }
        UNRECOVERED_JUMPTABLE = pcStack_160;
        func_0x000107c5d918();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
        }
        else {
          pcStack_150 = (code *)0x0;
          ppcVar20 = &pcStack_150;
          func_0x000107c5f9e4();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          UNRECOVERED_JUMPTABLE = pcStack_150;
        }
        pcVar17 = pcStack_160;
        func_0x000107c4d088();
        func_0x000107c61180();
        if (pcVar17 != (code *)0x0) {
          pcVar18 = pcVar17;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar17);
          FUN_101e90228(pcVar18,ppcVar20,uVar11,UNRECOVERED_JUMPTABLE_00,UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(lVar8);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
          func_0x000107c6142c(ppcVar20);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          return pcStack_160;
        }
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
    }
    pcStack_150 = (code *)0xd000000000000019;
    puStack_148 = (undefined8 *)0x800000010f017050;
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(UNRECOVERED_JUMPTABLE,lVar22);
    puVar25 = puStack_148;
    func_0x000107c6142c();
    FUN_101e8f380();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,puVar25,0,0);
    *puVar25 = 7;
    func_0x000107c61654();
    func_0x000107c61170(lVar8);
  }
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 101e8c458; end: 101e8c907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101e8c458(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  code **ppcVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long unaff_x22;
  long lVar21;
  undefined8 *puVar22;
  code *pcStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  code *pcStack_140;
  long lStack_138;
  code *pcStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_78;
  long *plStack_70;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar21 = *(long *)(unaff_x22 + 0xb0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(0xe000000000000000);
  plStack_70 = (undefined8 *)0x800000010f016e50;
  func_0x000107c5fb78(uVar18,uVar10);
  func_0x000107c6142c();
  func_0x0001000f11b0();
  puVar2 = plStack_70;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(0xe000000000000000);
  uStack_78 = 0xd00000000000002a;
  func_0x000107c5fb78(uVar16,uVar7);
  func_0x000100029b28(0xd00000000000002a,0x800000010f016e80);
  func_0x000107c6142c(0x800000010f016e80);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126a96b0;
  func_0x000107c61168();
  func_0x000107c5fadc(uVar18,uVar10);
  uVar16 = *(undefined8 *)(lVar21 + 0x28);
  func_0x000107c5fadc(uVar16,*(undefined8 *)(lVar21 + 0x30));
  *(long *)(unaff_x22 + 0x70) = 0;
  func_0x000107c4b74c();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  lVar5 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar21 = lVar5;
  func_0x0001000f11b0();
  if (SBORROW8(lVar21,(long)plStack_70)) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8c904);
    (*UNRECOVERED_JUMPTABLE_00)();
  }
  if (lVar5 == 0) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
    puVar6 = *(undefined **)(unaff_x22 + 0xb8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar22 = *(undefined8 **)(unaff_x22 + 0x80);
    func_0x000101e90784(*(undefined8 *)(unaff_x22 + 0xd0),uVar18,(lVar21 - (long)plStack_70) / 1000)
    ;
    func_0x000107c6142c(uVar18);
    puVar8 = (undefined *)0x0;
    FUN_101e91d64();
    puVar12 = puVar8;
    func_0x000107c613fc();
    lVar9 = 0;
    func_0x00010006a340();
    *(undefined8 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    func_0x000107c613fc();
    uVar18 = uVar16;
    func_0x000107c6157c();
    func_0x00010006a360();
    *(undefined8 *)(puVar12 + 0x48) = uVar18;
    *(undefined8 *)(puVar12 + 0x58) = 0;
    *(undefined8 *)(puVar12 + 0x50) = 0;
    *(undefined8 *)(puVar12 + 0x68) = 0;
    *(undefined8 *)(puVar12 + 0x60) = 0;
    *(undefined8 *)(puVar12 + 0x70) = 0;
    lVar21 = lVar9;
    func_0x000107c613fc(lVar9,0x18,7);
    func_0x00010006a360();
    *(long *)(puVar12 + 0x78) = lVar21;
    lVar5 = _DAT_112e35280;
    lVar21 = 0x112e34ff8;
    func_0x0001000285a8(0x112e34ff8,&UNK_10da1e390);
    (**(code **)(*(long *)(lVar21 + -8) + 0x38))(puVar12 + lVar5,1,1,lVar21);
    *(undefined **)(puVar12 + 0x10) = puVar4;
    *(undefined8 *)(puVar12 + 0x18) = uVar16;
    puVar22[3] = puVar8;
    puVar22[4] = &PTR_DAT_110491e80;
    *puVar22 = puVar12;
    lVar21 = unaff_x22 + 0x28;
    lVar5 = 0;
    uVar18 = 0;
    func_0x000107c61428(puVar2,lVar21,0,0);
    uVar10 = *puVar2;
    func_0x000107c61174(uVar10);
    func_0x000100069b5c(uStack_78);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(uVar16);
    func_0x000107c61170(puVar6);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar12 = *(undefined **)(unaff_x22 + 0xc0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar22 = *(undefined8 **)(unaff_x22 + 0x90);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd8));
    lVar9 = lVar5;
    func_0x000107c61174();
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(0xe000000000000000);
    plStack_70 = (long *)0x800000010f016eb0;
    func_0x000107c614cc(lVar9,unaff_x22 + 0x78,unaff_x22 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar16);
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(uVar18,puVar22);
    func_0x000107c61170(lVar9);
    func_0x000107c6142c();
    FUN_101e8f380();
    puVar6 = &UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,plStack_70,0,0);
    *plStack_70 = lVar5;
    func_0x000107c61654();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(lVar9);
    lVar21 = unaff_x22 + 0x58;
    lVar5 = 0;
    uVar18 = 0;
    func_0x000107c61428(puVar2,lVar21,0,0);
    uVar7 = *puVar2;
    func_0x000107c61174(uVar7);
    func_0x000100069b5c(uStack_78);
    func_0x000107c61170(uVar7);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(uVar10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar6;
  }
  if (lVar20 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar10);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 0xe0);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  puStack_110 = puVar22;
  lStack_100 = lVar9;
  puStack_f8 = puVar12;
  uStack_f0 = uVar16;
  puStack_e8 = puVar4;
  puStack_e0 = puVar8;
  FUN_101e8e0c4(lVar5,uVar18);
  if (puVar6 == (undefined *)0x0) {
    lVar19 = lVar5;
    lStack_108 = lVar21;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lVar21 = lVar19;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c61170(lVar19);
    puVar6 = PTR___sypN_11034f1a8;
    lVar9 = lVar21;
    func_0x000107c5fc54(lVar21,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(lVar21);
    puVar4 = PTR___sSSN_11034da80;
    lVar21 = *(long *)(lVar9 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar19 = lVar9;
    if (lVar21 == 0) {
      func_0x000107c6142c();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      do {
        func_0x0001000bb420(lVar19 + 0x20,&pcStack_130);
        func_0x000100102924(&pcStack_130,&pcStack_160);
        ppcVar11 = &pcStack_140;
        func_0x000107c6147c(ppcVar11,&pcStack_160,puVar6 + 8,puVar4,6);
        lVar20 = lStack_138;
        UNRECOVERED_JUMPTABLE_00 = pcStack_140;
        if ((((ulong)ppcVar11 & 1) != 0) && (lStack_138 != 0)) {
          puVar8 = puVar12;
          func_0x000107c61558();
          puVar13 = puVar12;
          if (((ulong)puVar8 & 1) == 0) {
            puVar13 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          }
          uVar1 = *(ulong *)(puVar13 + 0x10);
          puVar12 = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
            func_0x0001000d182c(puVar12,uVar1 + 1,1,puVar13);
          }
          *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
          *(code **)(puVar12 + uVar1 * 0x10 + 0x20) = UNRECOVERED_JUMPTABLE_00;
          *(long *)(puVar12 + uVar1 * 0x10 + 0x28) = lVar20;
        }
        lVar21 = lVar21 + -1;
        lVar19 = lVar19 + 0x20;
      } while (lVar21 != 0);
      func_0x000107c6142c(lVar9);
    }
    FUN_101e90128(puVar12);
    func_0x000107c6142c(puVar12);
    lVar19 = lVar5;
    func_0x000107c4d084();
    func_0x000107c61180();
    lVar21 = lStack_108;
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    lStack_158 = lStack_108;
    pcStack_160 = UNRECOVERED_JUMPTABLE;
    func_0x000107c61434(lStack_108);
    ppcVar11 = &pcStack_160;
    func_0x000107c6061c(ppcVar11,PTR___sSSN_11034da80);
    lVar9 = lVar19;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c61170(lVar19);
    func_0x000107c615e8(ppcVar11);
    if (lVar9 == 0) {
      lStack_158 = 0;
      pcStack_160 = (code *)0x0;
      lStack_148 = 0;
      uStack_150 = 0;
    }
    else {
      func_0x000107c60234(&pcStack_160,lVar9);
      func_0x000107c615e8(lVar9);
    }
    puStack_128 = (undefined8 *)lStack_158;
    pcStack_130 = pcStack_160;
    lStack_118 = lStack_148;
    uStack_120 = uStack_150;
    if (lStack_148 == 0) {
      func_0x00010006e7f4(&pcStack_130);
    }
    else {
      uVar18 = 0;
      FUN_10196014c(0);
      ppcVar11 = &pcStack_140;
      ppcVar17 = &pcStack_130;
      func_0x000107c6147c(ppcVar11,ppcVar17,puVar6 + 8,uVar18,6);
      if (((ulong)ppcVar11 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = pcStack_140;
        func_0x000107c40488();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)0xe300000000000000;
          uVar18 = 0x6c696e;
        }
        else {
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
          func_0x000107c5ee30();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
          uVar18 = 0;
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee24(0,UNRECOVERED_JUMPTABLE,ppcVar17);
          func_0x00010006c090(UNRECOVERED_JUMPTABLE,ppcVar17);
        }
        UNRECOVERED_JUMPTABLE = pcStack_140;
        func_0x000107c5d918();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
        }
        else {
          pcStack_130 = (code *)0x0;
          ppcVar17 = &pcStack_130;
          func_0x000107c5f9e4();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          UNRECOVERED_JUMPTABLE = pcStack_130;
        }
        pcVar14 = pcStack_140;
        func_0x000107c4d088();
        func_0x000107c61180();
        if (pcVar14 != (code *)0x0) {
          pcVar15 = pcVar14;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar14);
          FUN_101e90228(pcVar15,ppcVar17,uVar18,UNRECOVERED_JUMPTABLE_00,UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(lVar5);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE_00);
          func_0x000107c6142c(ppcVar17);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          return pcStack_140;
        }
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
    }
    pcStack_130 = (code *)0xd000000000000019;
    puStack_128 = (undefined8 *)0x800000010f017050;
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(UNRECOVERED_JUMPTABLE,lVar21);
    puVar2 = puStack_128;
    func_0x000107c6142c();
    FUN_101e8f380();
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,puVar2,0,0);
    *puVar2 = 7;
    func_0x000107c61654();
    func_0x000107c61170(lVar5);
  }
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 101e8c908; end: 101e8c96f;  */

code * FUN_101e8c908(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  code **ppcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  code *pcVar14;
  code **ppcVar15;
  long lVar16;
  code *pcVar17;
  long unaff_x21;
  long unaff_x22;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar11);
  pcVar17 = *(code **)(unaff_x22 + 0xe0);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101e8c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  FUN_101e8e0c4(param_3,param_4);
  if (unaff_x21 == 0) {
    lVar16 = param_3;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
      (*pcVar17)();
    }
    lVar5 = lVar16;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    puVar3 = PTR___sypN_11034f1a8;
    lVar6 = lVar5;
    func_0x000107c5fc54(lVar5,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(lVar5);
    puVar2 = PTR___sSSN_11034da80;
    lVar16 = *(long *)(lVar6 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar5 = lVar6;
    if (lVar16 == 0) {
      func_0x000107c6142c();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      do {
        func_0x0001000bb420(lVar5 + 0x20,&pcStack_a0);
        func_0x000100102924(&pcStack_a0,&pcStack_d0);
        ppcVar7 = &pcStack_b0;
        func_0x000107c6147c(ppcVar7,&pcStack_d0,puVar3 + 8,puVar2,6);
        lVar4 = lStack_a8;
        pcVar17 = pcStack_b0;
        if ((((ulong)ppcVar7 & 1) != 0) && (lStack_a8 != 0)) {
          puVar8 = puVar9;
          func_0x000107c61558();
          puVar10 = puVar9;
          if (((ulong)puVar8 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar1 = *(ulong *)(puVar10 + 0x10);
          puVar9 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x0001000d182c(puVar9,uVar1 + 1,1,puVar10);
          }
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(code **)(puVar9 + uVar1 * 0x10 + 0x20) = pcVar17;
          *(long *)(puVar9 + uVar1 * 0x10 + 0x28) = lVar4;
        }
        lVar16 = lVar16 + -1;
        lVar5 = lVar5 + 0x20;
      } while (lVar16 != 0);
      func_0x000107c6142c(lVar6);
    }
    FUN_101e90128(puVar9);
    func_0x000107c6142c(puVar9);
    lVar16 = param_3;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
      (*pcVar17)();
    }
    pcStack_d0 = UNRECOVERED_JUMPTABLE;
    uStack_c8 = param_2;
    func_0x000107c61434(param_2);
    ppcVar7 = &pcStack_d0;
    func_0x000107c6061c(ppcVar7,PTR___sSSN_11034da80);
    lVar5 = lVar16;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    func_0x000107c615e8(ppcVar7);
    if (lVar5 == 0) {
      uStack_c8 = 0;
      pcStack_d0 = (code *)0x0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c60234(&pcStack_d0,lVar5);
      func_0x000107c615e8(lVar5);
    }
    puStack_98 = (undefined8 *)uStack_c8;
    pcStack_a0 = pcStack_d0;
    lStack_88 = lStack_b8;
    uStack_90 = uStack_c0;
    if (lStack_b8 == 0) {
      func_0x00010006e7f4(&pcStack_a0);
    }
    else {
      uVar11 = 0;
      FUN_10196014c(0);
      ppcVar7 = &pcStack_b0;
      ppcVar15 = &pcStack_a0;
      func_0x000107c6147c(ppcVar7,ppcVar15,puVar3 + 8,uVar11,6);
      if (((ulong)ppcVar7 & 1) != 0) {
        pcVar17 = pcStack_b0;
        func_0x000107c40488();
        func_0x000107c61180();
        if (pcVar17 == (code *)0x0) {
          pcVar17 = (code *)0xe300000000000000;
          uVar11 = 0x6c696e;
        }
        else {
          UNRECOVERED_JUMPTABLE = pcVar17;
          func_0x000107c5ee30();
          func_0x000107c61170(pcVar17);
          uVar11 = 0;
          pcVar17 = UNRECOVERED_JUMPTABLE;
          func_0x000107c5ee24(0,UNRECOVERED_JUMPTABLE,ppcVar15);
          func_0x00010006c090(UNRECOVERED_JUMPTABLE,ppcVar15);
        }
        UNRECOVERED_JUMPTABLE = pcStack_b0;
        func_0x000107c5d918();
        func_0x000107c61180();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
        }
        else {
          pcStack_a0 = (code *)0x0;
          ppcVar15 = &pcStack_a0;
          func_0x000107c5f9e4();
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          UNRECOVERED_JUMPTABLE = pcStack_a0;
        }
        pcVar13 = pcStack_b0;
        func_0x000107c4d088();
        func_0x000107c61180();
        if (pcVar13 != (code *)0x0) {
          pcVar14 = pcVar13;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar13);
          FUN_101e90228(pcVar14,ppcVar15,uVar11,pcVar17,UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(param_3);
          func_0x000107c6142c(pcVar17);
          func_0x000107c6142c(ppcVar15);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          return pcStack_b0;
        }
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
        (*pcVar17)();
      }
    }
    pcStack_a0 = (code *)0xd000000000000019;
    puStack_98 = (undefined8 *)0x800000010f017050;
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(UNRECOVERED_JUMPTABLE,param_2);
    puVar12 = puStack_98;
    func_0x000107c6142c();
    FUN_101e8f380();
    pcVar17 = (code *)&UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,puVar12,0,0);
    *puVar12 = 7;
    func_0x000107c61654();
    func_0x000107c61170(param_3);
  }
  return pcVar17;
}



/* Entry: 101e8c970; end: 101e8cdbb;  */

undefined * FUN_101e8c970(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *unaff_x20;
  long unaff_x21;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_101e8e0c4(param_3,param_4);
  if (unaff_x21 == 0) {
    lVar14 = param_3;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8cdb4);
      (*pcVar4)();
    }
    lVar5 = lVar14;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    puVar13 = PTR___sypN_11034f1a8;
    lVar6 = lVar5;
    func_0x000107c5fc54(lVar5,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(lVar5);
    puVar15 = PTR___sSSN_11034da80;
    lVar14 = *(long *)(lVar6 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar5 = lVar6;
    if (lVar14 == 0) {
      func_0x000107c6142c();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      do {
        func_0x0001000bb420(lVar5 + 0x20,&uStack_80);
        func_0x000100102924(&uStack_80,&uStack_b0);
        ppuVar7 = &puStack_90;
        func_0x000107c6147c(ppuVar7,&uStack_b0,puVar13 + 8,puVar15,6);
        lVar3 = lStack_88;
        puVar2 = puStack_90;
        if ((((ulong)ppuVar7 & 1) != 0) && (lStack_88 != 0)) {
          puVar8 = puVar9;
          func_0x000107c61558();
          puVar10 = puVar9;
          if (((ulong)puVar8 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar1 = *(ulong *)(puVar10 + 0x10);
          puVar9 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x0001000d182c(puVar9,uVar1 + 1,1,puVar10);
          }
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(undefined **)(puVar9 + uVar1 * 0x10 + 0x20) = puVar2;
          *(long *)(puVar9 + uVar1 * 0x10 + 0x28) = lVar3;
        }
        lVar14 = lVar14 + -1;
        lVar5 = lVar5 + 0x20;
      } while (lVar14 != 0);
      func_0x000107c6142c(lVar6);
    }
    FUN_101e90128(puVar9);
    func_0x000107c6142c(puVar9);
    lVar14 = param_3;
    func_0x000107c4d084();
    func_0x000107c61180();
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8cdb8);
      (*pcVar4)();
    }
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    func_0x000107c61434(param_2);
    puVar11 = &uStack_b0;
    func_0x000107c6061c(puVar11,PTR___sSSN_11034da80);
    lVar5 = lVar14;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    func_0x000107c615e8(puVar11);
    if (lVar5 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c60234(&uStack_b0,lVar5);
      func_0x000107c615e8(lVar5);
    }
    puStack_78 = (undefined8 *)uStack_a8;
    uStack_80 = uStack_b0;
    lStack_68 = lStack_98;
    uStack_70 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_80);
    }
    else {
      uVar12 = 0;
      FUN_10196014c(0);
      ppuVar7 = &puStack_90;
      puVar11 = &uStack_80;
      func_0x000107c6147c(ppuVar7,puVar11,puVar13 + 8,uVar12,6);
      if (((ulong)ppuVar7 & 1) != 0) {
        puVar15 = puStack_90;
        func_0x000107c40488();
        func_0x000107c61180();
        if (puVar15 == (undefined *)0x0) {
          puVar15 = (undefined *)0xe300000000000000;
          uVar12 = 0x6c696e;
        }
        else {
          puVar13 = puVar15;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar15);
          uVar12 = 0;
          puVar15 = puVar13;
          func_0x000107c5ee24(0,puVar13,puVar11);
          func_0x00010006c090(puVar13,puVar11);
        }
        puVar13 = puStack_90;
        func_0x000107c5d918();
        func_0x000107c61180();
        if (puVar13 == (undefined *)0x0) {
          uVar16 = 0;
        }
        else {
          uStack_80 = 0;
          puVar11 = &uStack_80;
          func_0x000107c5f9e4();
          func_0x000107c61170(puVar13);
          uVar16 = uStack_80;
        }
        puVar13 = puStack_90;
        func_0x000107c4d088();
        func_0x000107c61180();
        if (puVar13 != (undefined *)0x0) {
          puVar9 = puVar13;
          func_0x000107c5faec();
          func_0x000107c61170(puVar13);
          FUN_101e90228(puVar9,puVar11,uVar12,puVar15,uVar16);
          func_0x000107c61170(param_3);
          func_0x000107c6142c(puVar15);
          func_0x000107c6142c(puVar11);
          func_0x000107c6142c(uVar16);
          return puStack_90;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8cdbc);
        (*pcVar4)();
      }
    }
    uStack_80 = 0xd000000000000019;
    puStack_78 = (undefined8 *)0x800000010f017050;
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(param_1,param_2);
    puVar11 = puStack_78;
    func_0x000107c6142c();
    FUN_101e8f380();
    unaff_x20 = &UNK_110491da8;
    func_0x000107c613f8(&UNK_110491da8,puVar11,0,0);
    *puVar11 = 7;
    func_0x000107c61654();
    func_0x000107c61170(param_3);
  }
  return unaff_x20;
}



/* Entry: 101e8cdbc; end: 101e8cdd7;  */

void FUN_101e8cdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8cdd8,0,0);
  return;
}



/* Entry: 101e8cdd8; end: 101e8d007;  */

void FUN_101e8cdd8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c4d088();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8d004);
    (*pcVar2)();
  }
  lVar10 = *(long *)(unaff_x22 + 0x30);
  puVar4 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  func_0x000107c4766c();
  *(undefined **)(unaff_x22 + 0x40) = puVar4;
  func_0x000107c61170(lVar3);
  func_0x000107c40488();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar9 = *(long *)(unaff_x22 + 0x30);
    lVar3 = lVar10;
    func_0x000107c5ee30();
    lVar8 = param_2;
    func_0x000107c61170(lVar10);
    *(long *)(unaff_x22 + 0x48) = lVar3;
    *(long *)(unaff_x22 + 0x50) = param_2;
    func_0x000107c4d088();
    func_0x000107c61180();
    if (lVar9 != 0) {
      lVar10 = lVar9;
      func_0x000107c5faec();
      func_0x000107c61170(lVar9);
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(lVar10,lVar8);
      func_0x000107c6142c(lVar8);
      uVar5 = 0x800000010f016f00;
      func_0x000107c6142c();
      func_0x0001000f11b0();
      *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
      plVar6 = (long *)0x100;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x60) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_101e8d008;
      lVar10 = *(long *)(unaff_x22 + 0x38);
      plVar6[0x19] = param_2;
      plVar6[0x1a] = lVar10;
      plVar6[0x17] = (long)puVar4;
      plVar6[0x18] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8d4f8,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8d008);
    (*pcVar2)();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
  func_0x000107c5fb78(uVar5,uVar1);
  puVar7 = (undefined8 *)0x800000010f016ed0;
  func_0x000107c6142c();
  FUN_101e8f380();
  func_0x000107c613f8(&UNK_110491da8,puVar7,0,0);
  *puVar7 = 3;
  func_0x000107c61654();
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e8cffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e8d008; end: 101e8d06b;  */

void FUN_101e8d008(undefined1 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0x90) = param_1;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e8d06c;
  }
  else {
    pcVar1 = (code *)0x101e8d2f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e8d06c; end: 101e8d23f;  */

void FUN_101e8d06c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000f11b0();
  if (SBORROW8(param_1,lVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8d238);
    (*pcVar4)();
  }
  cVar3 = *(char *)(unaff_x22 + 0x90);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c4d088();
  func_0x000107c61180();
  if (cVar3 == '\x01') {
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      FUN_101e90604(lVar6,param_2,(param_1 - lVar10) / 1000);
      func_0x000107c6142c(param_2);
      plVar7 = (long *)0x100;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x70) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_101e8d240;
      lVar10 = *(long *)(unaff_x22 + 0x38);
      plVar7[0x16] = *(long *)(unaff_x22 + 0x40);
      plVar7[0x17] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8d9fc,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8d23c);
    (*pcVar4)();
  }
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar10 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
    func_0x000107c5fb78(lVar10,param_2);
    func_0x000107c6142c(param_2);
    puVar8 = (undefined8 *)0x800000010f016f20;
    func_0x000107c6142c();
    FUN_101e8f380();
    func_0x000107c613f8(&UNK_110491da8,puVar8,0,0);
    *puVar8 = 4;
    func_0x000107c61654();
    func_0x00010006c090(uVar1,uVar2);
    func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101e8d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e8d240);
  (*pcVar4)();
}



/* Entry: 101e8d240; end: 101e8d2af;  */

void FUN_101e8d240(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_1;
    pcVar1 = FUN_101e8d2b0;
  }
  else {
    pcVar1 = FUN_101e8d334;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e8d2b0; end: 101e8d333;  */

void FUN_101e8d2b0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e8d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 101e8d334; end: 101e8d4db;  */

void FUN_101e8d334(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x22;
  
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c614b0();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar8 = unaff_x22 + 0x18;
  func_0x000107c6147c(lVar8,puVar7,uVar3,&UNK_110491da8,0);
  if ((int)lVar8 != 0) {
    if (*(long *)(unaff_x22 + 0x18) == 2) {
      lVar8 = *(long *)(unaff_x22 + 0x30);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c4d088();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e8d4dc);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar4 = lVar8;
      func_0x000107c5faec();
      puVar5 = puVar7;
      func_0x000107c61170(lVar8);
      FUN_101e8fe80();
      func_0x000107c5fb78(0x646f6d20726f6620,0xeb00000000206c65);
      func_0x000107c5fb78(lVar4,puVar7);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c();
      FUN_101e8f380();
      func_0x000107c613f8(&UNK_110491da8,puVar5,0,0);
      *puVar5 = 2;
      func_0x000107c61654();
      func_0x00010006c090(uVar3,uVar1);
      func_0x000107c61170(uVar6);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
      goto LAB_101e8d4b8;
    }
    FUN_101e8f3c0();
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61654();
  func_0x00010006c090(uVar3,uVar1);
  func_0x000107c61170(uVar6);
LAB_101e8d4b8:
                    /* WARNING: Could not recover jumptable at 0x000101e8d4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e8d4dc; end: 101e8d4f7;  */

void FUN_101e8d4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8d4f8,0,0);
  return;
}



/* Entry: 101e8d4f8; end: 101e8d917;  */

void FUN_101e8d4f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0xd8) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar10 = 0xd00000000000002f;
  func_0x000100029b28(0xd00000000000002f,0x800000010f016f70);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  func_0x000107c61170(uVar1);
  puVar2 = *(undefined8 **)(lVar9 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0xe8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar3 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    func_0x000107c4c950(uVar10);
    uVar10 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar4 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar10,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar4);
    func_0x000107c61170(uVar10);
    func_0x000107c4ed5c();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xf0) = puVar3;
    func_0x000107c61170(puVar4);
    func_0x000107c61644(unaff_x22 + 0xb0,uVar1);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101e8d918;
    lVar9 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar9,0);
    lVar8 = unaff_x22 + 0x98;
    func_0x000107c61428(unaff_x22 + 0xb0,lVar8,0,0);
    lVar5 = unaff_x22 + 0xb0;
    func_0x000107c61648();
    uVar10 = 0;
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c61574();
      func_0x000107c602fc(0x20);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c417f0(uVar1);
      func_0x000107c61180();
      uVar10 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      func_0x000107c5fb78(uVar10,lVar8);
      func_0x000107c6142c(lVar8);
      uVar10 = 0x800000010f016fa0;
      func_0x000107c6142c();
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x22 + 200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x0001000f11b0();
    func_0x000107c5ee20(uVar1,uVar6);
    uVar6 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar7 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puVar3 = &UNK_110491bc0;
    func_0x000107c613fc(&UNK_110491bc0,0x18,7);
    lVar8 = unaff_x22 + 0xb0;
    func_0x000107c61648(lVar8);
    func_0x000107c61644(puVar3 + 0x10,lVar8);
    func_0x000107c61574(lVar8);
    puVar4 = &UNK_110491c38;
    func_0x000107c613fc(&UNK_110491c38,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar10;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(puVar4 + 0x20) = uVar11;
    *(long *)(puVar4 + 0x28) = lVar9;
    *(code **)(unaff_x22 + 0x70) = FUN_101e8f428;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100f17820;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110491c50;
    lVar9 = unaff_x22 + 0x50;
    func_0x000107c60bc4();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61174(uVar11);
    func_0x000107c61574(uVar10);
    func_0x000107c42258(puVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(lVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_101e8f380();
  func_0x000107c613f8(&UNK_110491da8,puVar2,0,0);
  *puVar2 = 1;
  func_0x000107c61654();
  func_0x000107c61428(param_1,unaff_x22 + 0x50,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(uVar10);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e8d914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101e8d918; end: 101e8d957;  */

void FUN_101e8d918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8d958,0,0);
  return;
}



/* Entry: 101e8d958; end: 101e8d9e3;  */

void FUN_101e8d958(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61640(unaff_x22 + 0xb0);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar2);
  uVar4 = *(undefined1 *)(unaff_x22 + 0xf8);
  func_0x000107c61428(puVar1,unaff_x22 + 0x50,0,0);
  uVar5 = *puVar1;
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101e8d9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101e8d9e4; end: 101e8d9fb;  */

void FUN_101e8d9e4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e8d9fc,0,0);
  return;
}



/* Entry: 101e8d9fc; end: 101e8dcb3;  */

void FUN_101e8d9fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0xb8);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0xc0) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd00000000000002b;
  func_0x000100029b28(0xd00000000000002b,0x800000010f016f40);
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  func_0x000107c61170(uVar1);
  puVar3 = *(undefined8 **)(lVar8 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0xd0) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = uVar2;
    func_0x000101e906dc();
    func_0x0001000f11b0();
    puVar5 = &UNK_110491bc0;
    func_0x000107c613fc(&UNK_110491bc0,0x18,7);
    *(undefined **)(unaff_x22 + 0xd8) = puVar5;
    func_0x000107c61644(puVar5 + 0x10,uVar1);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101e8dcb4;
    lVar8 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar8,1);
    uVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar6 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar6);
    func_0x000107c61170(uVar1);
    puVar7 = &UNK_110491be8;
    func_0x000107c613fc(&UNK_110491be8,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar4;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(long *)(puVar7 + 0x28) = lVar8;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x101e8f3d4;
    *(undefined **)(unaff_x22 + 0x78) = puVar7;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100f17d9c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110491c00;
    lVar8 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c6157c(puVar5);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(uVar1);
    func_0x000107c50784(puVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(lVar8);
    func_0x000107c61170(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_101e8f380();
  func_0x000107c613f8(&UNK_110491da8,puVar3,0,0);
  *puVar3 = 1;
  func_0x000107c61654();
  puVar3 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61428(puVar3,unaff_x22 + 0x50,0,0);
  uVar2 = *puVar3;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e8dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e8dcb4; end: 101e8dd1f;  */

void FUN_101e8dcb4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(lVar2 + 0xa0);
    pcVar1 = FUN_101e8dd20;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101e8dd9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e8dd20; end: 101e8dd9b;  */

void FUN_101e8dd20(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615e8(uVar3);
  func_0x000107c61428(puVar1,unaff_x22 + 0x50,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e8dd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Entry: 101e8dd9c; end: 101e8de1b;  */

void FUN_101e8dd9c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c61574(uVar2);
  puVar1 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61428(puVar1,unaff_x22 + 0x98,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e8de18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e8de1c; end: 101e8def7;  */

void FUN_101e8de1c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  func_0x0001000f11b0();
  if (!SBORROW8(lVar2,param_3)) {
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 != 0) {
      uVar3 = *(undefined8 *)(param_4 + 0x20);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(param_4);
      FUN_101e90860(param_5,param_1,(lVar2 - param_3) / 1000);
      func_0x000107c61574(uVar3);
    }
    *(bool *)*(undefined8 *)(*(long *)(param_6 + 0x40) + 0x28) = param_1 == 0;
    func_0x000107c6144c(param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e8def8);
  (*pcVar1)();
}


