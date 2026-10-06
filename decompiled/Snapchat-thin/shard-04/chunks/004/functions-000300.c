/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034cc0e4; end: 1034cc13f;  */

void FUN_1034cc0e4(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1034cc140; end: 1034cc1af;  */

undefined8 FUN_1034cc140(undefined8 param_1,undefined8 param_2)

{
  FUN_1035e8734(param_2,param_1);
  return param_2;
}



/* Entry: 1034cc1b0; end: 1034cc1b3;  */

void FUN_1034cc1b0(void)

{
  return;
}



/* Entry: 1034cc1b4; end: 1034cc31b;  */

undefined8 FUN_1034cc1b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1034cc31c; end: 1034cc323;  */

void FUN_1034cc31c(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5)

{
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  func_0x000100d54a38(0,0,0xf000000000000000);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = (ulong)(uint)(float)param_2;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = (ulong)(uint)(float)param_3;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[8] = (ulong)(uint)(float)param_4;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  param_1[0xb] = (ulong)(uint)(float)param_5;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 1034cc324; end: 1034cc8ab;  */

undefined1  [16] FUN_1034cc324(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  
  puVar4 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c();
  func_0x000103bf9204();
  uVar1 = *param_2;
  puVar2 = (ulong *)param_2[1];
  func_0x000107c5fb24();
  if (uVar1 == param_1 && puVar2 == puVar4) {
    func_0x000107c6142c(puVar4);
    puVar4 = puVar2;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c();
    if ((uVar1 & 1) == 0) {
      func_0x000103bf9190();
      uVar1 = *puVar2;
      puVar2 = (ulong *)puVar2[1];
      func_0x000107c5fb24();
      if ((uVar1 == param_1) && (puVar2 == puVar4)) {
        func_0x000107c6142c(puVar4);
        puVar4 = puVar2;
      }
      else {
        func_0x000107c605b8();
        func_0x000107c6142c();
        if ((uVar1 & 1) == 0) {
          func_0x000103bf91c8();
          uVar1 = *puVar2;
          puVar2 = (ulong *)puVar2[1];
          func_0x000107c5fb24();
          if ((uVar1 == param_1) && (puVar2 == puVar4)) {
            func_0x000107c6142c(puVar4);
            puVar4 = puVar2;
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c();
            if ((uVar1 & 1) == 0) {
              func_0x000103bf923c();
              uVar1 = *puVar2;
              puVar2 = (ulong *)puVar2[1];
              func_0x000107c5fb24();
              if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                func_0x000107c6142c(puVar4);
                puVar4 = puVar2;
              }
              else {
                func_0x000107c605b8();
                func_0x000107c6142c();
                if ((uVar1 & 1) == 0) {
                  func_0x000103bf90b0();
                  uVar1 = *puVar2;
                  puVar2 = (ulong *)puVar2[1];
                  func_0x000107c5fb24();
                  if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                    func_0x000107c6142c(puVar4);
                    puVar4 = puVar2;
                  }
                  else {
                    func_0x000107c605b8();
                    func_0x000107c6142c();
                    if ((uVar1 & 1) == 0) {
                      func_0x000103bf90e4();
                      uVar1 = *puVar2;
                      puVar2 = (ulong *)puVar2[1];
                      func_0x000107c5fb24();
                      if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                        func_0x000107c6142c(puVar4);
                        puVar4 = puVar2;
                      }
                      else {
                        func_0x000107c605b8();
                        func_0x000107c6142c();
                        if ((uVar1 & 1) == 0) {
                          func_0x000103bf911c();
                          uVar1 = *puVar2;
                          puVar2 = (ulong *)puVar2[1];
                          func_0x000107c5fb24();
                          if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                            func_0x000107c6142c(puVar4);
                            puVar4 = puVar2;
                          }
                          else {
                            func_0x000107c605b8();
                            func_0x000107c6142c();
                            if ((uVar1 & 1) == 0) {
                              func_0x000103bf9074();
                              uVar1 = *puVar2;
                              puVar2 = (ulong *)puVar2[1];
                              func_0x000107c5fb24();
                              if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                                func_0x000107c6142c(puVar4);
                                puVar4 = puVar2;
                              }
                              else {
                                func_0x000107c605b8();
                                func_0x000107c6142c();
                                if ((uVar1 & 1) == 0) {
                                  func_0x000103bf9314();
                                  uVar1 = *puVar2;
                                  puVar2 = (ulong *)puVar2[1];
                                  func_0x000107c5fb24();
                                  if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                                    func_0x000107c6142c(puVar4);
                                    puVar4 = puVar2;
                                  }
                                  else {
                                    func_0x000107c605b8();
                                    func_0x000107c6142c();
                                    if ((uVar1 & 1) == 0) {
                                      func_0x000103bf9270();
                                      uVar1 = *puVar2;
                                      puVar2 = (ulong *)puVar2[1];
                                      func_0x000107c5fb24();
                                      if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                                        func_0x000107c6142c(puVar4);
                                        puVar4 = puVar2;
                                      }
                                      else {
                                        func_0x000107c605b8();
                                        func_0x000107c6142c();
                                        if ((uVar1 & 1) == 0) {
                                          func_0x000103bf92a8();
                                          uVar1 = *puVar2;
                                          puVar2 = (ulong *)puVar2[1];
                                          func_0x000107c5fb24();
                                          if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                                            func_0x000107c6142c(puVar4);
                                            puVar4 = puVar2;
                                          }
                                          else {
                                            func_0x000107c605b8();
                                            func_0x000107c6142c();
                                            if ((uVar1 & 1) == 0) {
                                              func_0x000103bf9158();
                                              uVar1 = *puVar2;
                                              puVar2 = (ulong *)puVar2[1];
                                              func_0x000107c5fb24();
                                              if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                                                func_0x000107c6142c(puVar4);
                                                puVar4 = puVar2;
                                              }
                                              else {
                                                func_0x000107c605b8();
                                                func_0x000107c6142c();
                                                if ((uVar1 & 1) == 0) {
                                                  func_0x000103bf9350();
                                                  uVar1 = *puVar2;
                                                  puVar2 = (ulong *)puVar2[1];
                                                  func_0x000107c5fb24();
                                                  if ((uVar1 == param_1) && (puVar2 == puVar4)) {
                                                    func_0x000107c6142c(puVar4);
                                                    func_0x000107c6142c(puVar2);
                                                    uVar3 = 0xb;
                                                  }
                                                  else {
                                                    func_0x000107c605b8();
                                                    func_0x000107c6142c(puVar4);
                                                    func_0x000107c6142c(puVar2);
                                                    uVar3 = 0xb;
                                                    if ((uVar1 & 1) == 0) {
                                                      uVar3 = 0;
                                                    }
                                                  }
                                                  goto LAB_1034cc3ac;
                                                }
                                              }
                                              func_0x000107c6142c(puVar4);
                                              uVar3 = 0xe;
                                              goto LAB_1034cc3ac;
                                            }
                                          }
                                          func_0x000107c6142c(puVar4);
                                          uVar3 = 10;
                                          goto LAB_1034cc3ac;
                                        }
                                      }
                                      func_0x000107c6142c(puVar4);
                                      uVar3 = 8;
                                      goto LAB_1034cc3ac;
                                    }
                                  }
                                  func_0x000107c6142c(puVar4);
                                  uVar3 = 9;
                                  goto LAB_1034cc3ac;
                                }
                              }
                              func_0x000107c6142c(puVar4);
                              uVar3 = 1;
                              goto LAB_1034cc3ac;
                            }
                          }
                          func_0x000107c6142c(puVar4);
                          uVar3 = 0x12;
                          goto LAB_1034cc3ac;
                        }
                      }
                      func_0x000107c6142c(puVar4);
                      uVar3 = 3;
                      goto LAB_1034cc3ac;
                    }
                  }
                  func_0x000107c6142c(puVar4);
                  uVar3 = 2;
                  goto LAB_1034cc3ac;
                }
              }
              func_0x000107c6142c(puVar4);
              uVar3 = 7;
              goto LAB_1034cc3ac;
            }
          }
          func_0x000107c6142c(puVar4);
          uVar3 = 5;
          goto LAB_1034cc3ac;
        }
      }
      func_0x000107c6142c(puVar4);
      uVar3 = 4;
      goto LAB_1034cc3ac;
    }
  }
  func_0x000107c6142c(puVar4);
  uVar3 = 6;
LAB_1034cc3ac:
  auVar5._8_8_ = 1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1034cc8ac; end: 1034cc8f7;  */

undefined1  [16] FUN_1034cc8ac(ulong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulong uStack_18;
  
  if (param_1 < 0x23) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dbcec60 + param_1 * 8);
    auVar2._8_8_ = 1;
    return auVar2;
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_11079afa0,&uStack_18,&UNK_11079afa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034cc8f8);
  (*pcVar1)();
}



/* Entry: 1034cc8f8; end: 1034cc91f;  */

undefined1  [16] FUN_1034cc8f8(long param_1)

{
  undefined1 auVar1 [16];
  
  if (0xe < param_1 - 1U) {
    param_1 = 0;
  }
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1034cc920; end: 1034cca47;  */

void FUN_1034cc920(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 0x88);
  cVar3 = *(char *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = 0xf000000000000000;
  func_0x000101571440(0,0,0,0xf000000000000000);
  if (*(char *)(param_2 + 0x20) == -1) {
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if (*(char *)(param_2 + 0x20) != '\x01') {
      uVar4 = 0;
    }
    if (*(char *)(param_2 + 0x30) != '\x01') {
      uVar6 = 0;
    }
    if (*(char *)(param_2 + 0x40) != '\x01') {
      uVar7 = 0;
    }
    if (*(char *)(param_2 + 0x50) != '\x01') {
      uVar8 = 0;
    }
    func_0x00010157145c(0,0,0,0,0,0xf000000000000000);
    uVar5 = 0xc000000000000000;
  }
  uVar9 = 0;
  if (cVar3 != '\x01') {
    uVar9 = uVar12;
  }
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[2] = uVar9;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  param_1[9] = uVar4;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[0xd] = 0;
  param_1[0xe] = uVar5;
  return;
}



/* Entry: 1034cca48; end: 1034ccb57;  */

undefined1  [16] FUN_1034cca48(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  
  puVar4 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c();
  func_0x000103bf9384();
  puVar1 = (ulong *)*param_2;
  if ((puVar1 == param_1 && (ulong *)param_2[1] == puVar4) ||
     (func_0x000107c605b8(puVar1,(ulong *)param_2[1],param_1,puVar4,0), ((ulong)puVar1 & 1) != 0)) {
    func_0x000107c6142c(puVar4);
    uVar2 = 3;
  }
  else {
    func_0x000103bf93f0();
    puVar3 = (ulong *)*puVar1;
    if (((puVar3 == param_1) && ((ulong *)puVar1[1] == puVar4)) ||
       (func_0x000107c605b8(puVar3,(ulong *)puVar1[1],param_1,puVar4,0), ((ulong)puVar3 & 1) != 0))
    {
      func_0x000107c6142c(puVar4);
      uVar2 = 2;
    }
    else {
      func_0x000103bf93b8();
      uVar2 = *puVar3;
      if (((ulong *)uVar2 == param_1) && ((ulong *)puVar3[1] == puVar4)) {
        func_0x000107c6142c(puVar4);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(uVar2,(ulong *)puVar3[1],param_1,puVar4,0);
        func_0x000107c6142c(puVar4);
        uVar2 = uVar2 & 1;
      }
    }
  }
  auVar5._8_8_ = 1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 1034ccb58; end: 1034cdf83;  */

ulong * FUN_1034ccb58(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  code *pcVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  
  uVar14 = param_1[1];
  if (uVar14 == 1) {
    puVar11 = (ulong *)0x0;
  }
  else {
    uVar12 = *param_1;
    uVar1 = param_1[2];
    uVar4 = param_1[3];
    uVar9 = param_1[4];
    bVar6 = *(byte *)((long)param_1 + 0x21);
    bVar7 = *(byte *)((long)param_1 + 0x22);
    bVar8 = *(byte *)((long)param_1 + 0x23);
    uVar17 = param_1[5];
    puVar11 = param_1;
    FUN_10365a03c();
    if ((uVar12 & 0xff) != 2) {
      FUN_103659804((uint)uVar12 & 1,0,0xc000000000000000);
    }
    if ((uVar12 & 0xff00) != 0x200) {
      FUN_1036598cc(uVar12 >> 8 & 1,0,0xc000000000000000);
    }
    if ((uVar14 != 0) && (uVar12 = *(ulong *)(uVar14 + 0x10), uVar12 != 0)) {
      if (uVar12 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034cd0f0);
        (*pcVar10)();
      }
      func_0x000107c61434(uVar14);
      func_0x000103659974(uVar12,0,0xc000000000000000);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001034d91f4(0,uVar12,0);
      puVar13 = (undefined8 *)(uVar14 + 0x28);
      do {
        uVar2 = puVar13[-1];
        uVar5 = *puVar13;
        func_0x000107c61438(uVar5,2);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(uVar5);
        func_0x00010006c090(0,0xc000000000000000);
        uVar3 = *(ulong *)(puVar16 + 0x10);
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar3) {
          func_0x0001034d91f4(1 < *(ulong *)(puVar16 + 0x18),uVar3 + 1,1);
        }
        puVar13 = puVar13 + 2;
        *(ulong *)(puVar16 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar16 + uVar3 * 0x20 + 0x20) = uVar2;
        *(undefined8 *)(puVar16 + uVar3 * 0x20 + 0x28) = uVar5;
        *(undefined8 *)(puVar16 + uVar3 * 0x20 + 0x38) = 0xc000000000000000;
        *(undefined8 *)(puVar16 + uVar3 * 0x20 + 0x30) = 0;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      func_0x000107c6142c(uVar14);
      func_0x000103659bf8(puVar16);
    }
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar17 != 0) && (lVar15 = *(long *)(uVar17 + 0x10), lVar15 != 0)) {
      func_0x000107c61434(uVar17);
      func_0x0001034d91f4(0,lVar15,0);
      puVar13 = (undefined8 *)(uVar17 + 0x28);
      do {
        uVar2 = puVar13[-1];
        uVar5 = *puVar13;
        func_0x000107c61438(uVar5,2);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(uVar5);
        func_0x00010006c090(0,0xc000000000000000);
        uVar14 = *(ulong *)(puVar16 + 0x10);
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar14) {
          func_0x0001034d91f4(1 < *(ulong *)(puVar16 + 0x18),uVar14 + 1,1);
        }
        puVar13 = puVar13 + 2;
        *(ulong *)(puVar16 + 0x10) = uVar14 + 1;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x20) = uVar2;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x28) = uVar5;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x38) = 0xc000000000000000;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x30) = 0;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      func_0x000107c6142c(uVar17);
      func_0x000103659fb0(puVar16);
    }
    if (uVar1 != 0) {
      lVar15 = *(long *)(uVar1 + 0x10);
      func_0x000107c61434(uVar1);
      func_0x000103659a1c(lVar15 != 0,0,0xc000000000000000);
      uVar14 = *(ulong *)(uVar1 + 0x10);
      if (uVar14 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1034cd0ec);
        (*pcVar10)();
      }
      func_0x000103659ac4(uVar14,0,0xc000000000000000);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar14 == 0) {
        func_0x000107c6142c(uVar1);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x0001034d91f4(0,uVar14,0);
        puVar13 = (undefined8 *)(uVar1 + 0x28);
        do {
          uVar2 = puVar13[-1];
          uVar5 = *puVar13;
          func_0x000107c61438(uVar5,2);
          func_0x00010006c00c(0,0xc000000000000000);
          func_0x000107c6142c(uVar5);
          func_0x00010006c090(0,0xc000000000000000);
          uVar12 = *(ulong *)(puVar16 + 0x10);
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar12) {
            func_0x0001034d91f4(1 < *(ulong *)(puVar16 + 0x18),uVar12 + 1,1);
          }
          puVar13 = puVar13 + 2;
          *(ulong *)(puVar16 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar16 + uVar12 * 0x20 + 0x20) = uVar2;
          *(undefined8 *)(puVar16 + uVar12 * 0x20 + 0x28) = uVar5;
          *(undefined8 *)(puVar16 + uVar12 * 0x20 + 0x38) = 0xc000000000000000;
          *(undefined8 *)(puVar16 + uVar12 * 0x20 + 0x30) = 0;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        func_0x000107c6142c(uVar1);
      }
      func_0x000103659b6c(puVar16);
    }
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar4 != 0) && (lVar15 = *(long *)(uVar4 + 0x10), lVar15 != 0)) {
      func_0x000107c61434(uVar4);
      func_0x0001034d91f4(0,lVar15,0);
      puVar13 = (undefined8 *)(uVar4 + 0x28);
      do {
        uVar2 = puVar13[-1];
        uVar5 = *puVar13;
        func_0x000107c61438(uVar5,2);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(uVar5);
        func_0x00010006c090(0,0xc000000000000000);
        uVar14 = *(ulong *)(puVar16 + 0x10);
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar14) {
          func_0x0001034d91f4(1 < *(ulong *)(puVar16 + 0x18),uVar14 + 1,1);
        }
        puVar13 = puVar13 + 2;
        *(ulong *)(puVar16 + 0x10) = uVar14 + 1;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x20) = uVar2;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x28) = uVar5;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x38) = 0xc000000000000000;
        *(undefined8 *)(puVar16 + uVar14 * 0x20 + 0x30) = 0;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      func_0x000107c6142c(uVar4);
      func_0x000103659f24(puVar16);
    }
    if ((byte)uVar9 != 2) {
      FUN_103659c84((byte)uVar9 & 1,0,0xc000000000000000);
    }
    if (bVar6 != 2) {
      func_0x000103659d2c(bVar6 & 1,0,0xc000000000000000);
    }
    if (bVar7 != 2) {
      func_0x000103659dd4(bVar7 & 1,0,0xc000000000000000);
    }
    func_0x0001034ce048(param_1,0x112f732d0,&UNK_10dbced78);
    func_0x000103659e7c(bVar8 & 1,0,0xc000000000000000);
  }
  return puVar11;
}



/* Entry: 1034cdf84; end: 1034ce087;  */

/* WARNING: Possible PIC construction at 0x0001034cdfa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034cdfac) */

void FUN_1034cdf84(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1034ce088; end: 1034ce20b; +[SCUnlockableImpressionDataBridge buildImpressionDataFrom:enableLensAdTrackP0Signals:skAdNetworkClickVersion:skAdNetworkViewThroughVersion:] */

/* WARNING: Removing unreachable block (ram,0x0001034ce164) */

void FUN_1034ce088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_5 == 0) {
    param_5 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar3 = param_2;
  }
  if (param_6 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_1034d0b2c();
  uVar2 = uVar1;
  uStack_68 = uVar1;
  uStack_60 = param_4;
  lStack_58 = param_5;
  func_0x0001018dde30();
  func_0x000100075890(&uStack_78,0,0,&UNK_11065d640,PTR___s10Foundation4DataVN_110350ae0,uVar2,
                      &PTR_DAT_110789f58);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uVar1,param_4);
  func_0x000107c61574(param_5);
  uVar3 = uStack_78;
  func_0x000107c5ee20(uStack_78,uStack_70);
  func_0x00010006c090(uStack_78,uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1034ce20c; end: 1034ce3bb; +[SCUnlockableImpressionDataBridge buildImpressionDataFrom:enableLensAdTrackP0Signals:skAdNetworkClickVersion:skAdNetworkViewThroughVersion:timingSnapshots:] */

/* WARNING: Removing unreachable block (ram,0x0001034ce300) */

void FUN_1034ce20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_5 == 0) {
    param_5 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar3 = param_2;
  }
  if (param_6 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  uVar1 = param_3;
  FUN_1034d0b2c();
  uVar2 = uVar1;
  uStack_78 = uVar1;
  uStack_70 = param_4;
  lStack_68 = param_5;
  func_0x0001018dde30();
  func_0x000100075890(&uStack_88,0,0,&UNK_11065d640,PTR___s10Foundation4DataVN_110350ae0,uVar2,
                      &PTR_DAT_110789f58);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uVar1,param_4);
  func_0x000107c61574(param_5);
  uVar3 = uStack_88;
  func_0x000107c5ee20(uStack_88,uStack_80);
  func_0x00010006c090(uStack_88,uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1034ce3bc; end: 1034ce3f7; -[SCUnlockableImpressionDataBridge init] */

void FUN_1034ce3bc(undefined8 param_1)

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



/* Entry: 1034ce3f8; end: 1034ce44b;  */

void FUN_1034ce3f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034ce44c; end: 1034d09cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034ce44c(undefined8 param_1,undefined8 *param_2,uint param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puStack_a88;
  undefined1 auStack_a70 [416];
  undefined1 auStack_8d0 [416];
  undefined1 auStack_730 [416];
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
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
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
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
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 auStack_218 [52];
  undefined8 auStack_78 [3];
  
  FUN_10355c530(auStack_218);
  func_0x000107c610b4(&puStack_3b8,auStack_218,0x1a0);
  puVar3 = param_2;
  func_0x000107c4b414();
  if ((long)puVar3 < 0x1d) {
    if (puVar3 != (undefined8 *)0x1) {
      if (puVar3 == (undefined8 *)0x2) {
        uStack_3a0 = 9;
        goto LAB_1034ce500;
      }
      if (puVar3 != (undefined8 *)0xb) goto LAB_1034ce4ec;
    }
    uStack_3a0 = 1;
  }
  else {
    if (puVar3 == (undefined8 *)0x24) {
      uStack_3a0 = 3;
      goto LAB_1034ce500;
    }
    if (puVar3 == (undefined8 *)0x1f) {
      uStack_3a0 = 2;
      goto LAB_1034ce500;
    }
    if (puVar3 == (undefined8 *)0x1d) {
      uStack_3a0 = 4;
      goto LAB_1034ce500;
    }
LAB_1034ce4ec:
    uStack_3a0 = 0;
  }
LAB_1034ce500:
  uStack_398 = 1;
  puVar3 = param_2;
  func_0x000107c3f6bc();
  if ((long)puVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034ceb88);
    (*pcVar2)();
  }
  uVar11 = uStack_298;
  func_0x00010159fa64(puStack_2a0,uStack_298,uStack_290);
  uStack_290 = 0xc000000000000000;
  uStack_298 = 0;
  puVar14 = param_2;
  puStack_2a0 = puVar3;
  func_0x000107c52060();
  func_0x000107c61180();
  if (puVar14 != (undefined8 *)0x0) {
    puVar3 = puVar14;
    func_0x000107c5faec();
    func_0x000107c61170(puVar14);
    uVar12 = (ulong)puVar3 & 0xffffffffffff;
    if ((uVar11 & 0x2000000000000000) != 0) {
      uVar12 = uVar11 >> 0x38 & 0xf;
    }
    if (uVar12 == 0) {
      func_0x000107c6142c(uVar11);
    }
    else {
      func_0x000107c61434(uVar11);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(uVar11);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000101597ae4(puStack_2c0,uStack_2b8,uStack_2b0,uStack_2a8);
      uStack_2a8 = 0xc000000000000000;
      uStack_2b0 = 0;
      puStack_2c0 = puVar3;
    }
  }
  puVar3 = param_2;
  func_0x000107c418f4();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = puVar3;
    func_0x000107c49820();
    func_0x000107c61170(puVar3);
  }
  puVar16 = param_2;
  func_0x000107c41978();
  func_0x000107c61180();
  if (puVar16 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar16;
    func_0x000107c49820();
    func_0x000107c61170(puVar16);
  }
  FUN_1034d1f08(&uStack_408,puVar14,puVar3 == (undefined8 *)0x0,puVar5,puVar16 == (undefined8 *)0x0)
  ;
  func_0x0001034d0aac(&uStack_288,0x112f730a8,&UNK_10dbd1870);
  uStack_260 = uStack_3e0;
  uStack_268 = uStack_3e8;
  uStack_250 = uStack_3d0;
  uStack_258 = uStack_3d8;
  uStack_240 = uStack_3c0;
  uStack_248 = uStack_3c8;
  uStack_280 = uStack_400;
  uStack_288 = uStack_408;
  uStack_270 = uStack_3f0;
  uStack_278 = uStack_3f8;
  puVar3 = param_2;
  func_0x000107c5b188();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0001042557b4();
    puVar3 = (undefined8 *)*puVar3;
    func_0x000107c61174(puVar3);
  }
  FUN_1034d5998(&uStack_590);
  func_0x000107c61170(puVar3);
  uStack_448 = uStack_508;
  uStack_450 = uStack_510;
  uStack_438 = uStack_4f8;
  uStack_440 = uStack_500;
  uStack_428 = uStack_4e8;
  uStack_430 = uStack_4f0;
  uStack_418 = uStack_4d8;
  uStack_420 = uStack_4e0;
  uStack_488 = uStack_548;
  uStack_490 = uStack_550;
  uStack_478 = uStack_538;
  uStack_480 = uStack_540;
  uStack_468 = uStack_528;
  uStack_470 = uStack_530;
  uStack_458 = uStack_518;
  uStack_460 = uStack_520;
  uStack_4c8 = uStack_588;
  uStack_4d0 = uStack_590;
  uStack_4b8 = uStack_578;
  uStack_4c0 = uStack_580;
  uStack_4a8 = uStack_568;
  uStack_4b0 = uStack_570;
  uStack_498 = uStack_558;
  uStack_4a0 = uStack_560;
  FUN_1034a2538(&uStack_4d0);
  uVar11 = 0x112f730b0;
  func_0x0001034d0aac(&uStack_380,0x112f730b0,&UNK_10dbce2c0);
  uStack_2f8 = uStack_448;
  uStack_300 = uStack_450;
  uStack_2e8 = uStack_438;
  uStack_2f0 = uStack_440;
  uStack_2d8 = uStack_428;
  uStack_2e0 = uStack_430;
  uStack_2c8 = uStack_418;
  uStack_2d0 = uStack_420;
  uStack_338 = uStack_488;
  uStack_340 = uStack_490;
  uStack_328 = uStack_478;
  uStack_330 = uStack_480;
  uStack_318 = uStack_468;
  uStack_320 = uStack_470;
  uStack_308 = uStack_458;
  uStack_310 = uStack_460;
  uStack_378 = uStack_4c8;
  uStack_380 = uStack_4d0;
  uStack_368 = uStack_4b8;
  uStack_370 = uStack_4c0;
  uStack_358 = uStack_4a8;
  uStack_360 = uStack_4b0;
  uStack_348 = uStack_498;
  uStack_350 = uStack_4a0;
  if ((param_3 & 1) != 0) {
    puVar3 = param_2;
    func_0x000107c4a9e8();
    func_0x000107c61180();
    uVar12 = uVar11;
    if (puVar3 != (undefined8 *)0x0) {
      puVar14 = puVar3;
      func_0x000107c5faec();
      uVar12 = uVar11;
      func_0x000107c61170(puVar3);
      uVar1 = (ulong)puVar14 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar1 = uVar11 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        func_0x000107c6142c(uVar11);
      }
      else {
        func_0x000107c61434(uVar11);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(uVar11);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x000101597ae4(puStack_238,uStack_230,uStack_228,uStack_220);
        uStack_220 = 0xc000000000000000;
        uStack_228 = 0;
        uVar12 = uStack_230;
        puStack_238 = puVar14;
        uStack_230 = uVar11;
      }
    }
    uStack_3a8 = (undefined1)uVar12;
    puVar3 = param_2;
    func_0x000107c3f688();
    FUN_1034a23d4();
    puStack_3b0 = puVar3;
  }
  puVar3 = param_2;
  func_0x000107c5c4dc();
  func_0x000107c61180();
  puVar14 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = 0;
    func_0x0001034d0aec(0,0x112dcf848,&PTR_PTR_1126a7d30);
    puVar14 = puVar3;
    func_0x000107c5fc54(puVar3,uVar4);
    func_0x000107c61170(puVar3);
  }
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar3 = *(undefined8 **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar3 = (undefined8 *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar14) {
      puVar3 = puVar14;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (puVar3 != (undefined8 *)0x0) {
    if ((long)puVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034cec3c);
      (*pcVar2)();
    }
    puVar16 = (undefined8 *)0x0;
    do {
      if (((ulong)puVar14 & 0xc000000000000001) == 0) {
        puVar5 = (undefined8 *)puVar14[(long)((long)puVar16 + 4)];
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar16;
        func_0x0001019285d8(puVar16,puVar14);
      }
      puVar6 = PTR_PTR_1126c8c40;
      func_0x000107c61168();
      puVar7 = puVar5;
      func_0x000107c6148c();
      if (puVar7 == (undefined8 *)0x0) {
        func_0x000107c61170(puVar5);
      }
      else {
        puVar8 = param_2;
        func_0x000107c52060();
        func_0x000107c61180();
        if (puVar8 == (undefined8 *)0x0) {
          puStack_a88 = (undefined8 *)0x0;
          puVar9 = (undefined *)0x0;
          puVar13 = puVar6;
        }
        else {
          puStack_a88 = puVar8;
          func_0x000107c5faec();
          puVar13 = puVar6;
          func_0x000107c61170(puVar8);
          puVar9 = puVar6;
        }
        puVar8 = param_2;
        func_0x000107c418f4();
        func_0x000107c61180();
        if (puVar8 != (undefined8 *)0x0) {
          func_0x000107c49820();
          func_0x000107c61170(puVar8);
        }
        puVar8 = param_2;
        func_0x000107c41978();
        func_0x000107c61180();
        if (puVar8 != (undefined8 *)0x0) {
          func_0x000107c49820();
          func_0x000107c61170(puVar8);
        }
        func_0x000107c4b414(param_2);
        func_0x000107c5ce30();
        puVar8 = (undefined8 *)0x0;
        if (param_4 != 0) {
          lVar15 = *(long *)(param_4 + _DAT_112f73328);
          if ((*(long *)(lVar15 + 0x10) == 0) ||
             (puVar8 = puVar7, func_0x0001000a7158(), ((ulong)puVar13 & 1) == 0)) {
            FUN_1034d62c4(0);
            func_0x000107c610f8();
            puVar8 = puVar7;
            func_0x000107c61174();
            FUN_1034d6a10();
            func_0x000107c61170(puVar5);
          }
          else {
            puVar8 = *(undefined8 **)(*(long *)(lVar15 + 0x38) + (long)puVar8 * 8);
            func_0x000107c61174();
          }
        }
        puVar13 = puVar9;
        FUN_1034d2e4c();
        func_0x000107c61170(puVar8);
        func_0x000107c6142c(puVar9);
        func_0x00010006c00c(puVar7,puStack_a88);
        func_0x000107c6157c(puVar13);
        puVar6 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar6 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_1034d8dec(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
        }
        uVar11 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_1034d8dec(puVar10,uVar11 + 1,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
        *(undefined8 **)(puVar10 + uVar11 * 0x18 + 0x20) = puVar7;
        *(undefined8 **)(puVar10 + uVar11 * 0x18 + 0x28) = puStack_a88;
        *(undefined **)(puVar10 + uVar11 * 0x18 + 0x30) = puVar13;
        func_0x000107c61170(puVar5);
        func_0x00010006c090(puVar7,puStack_a88);
        func_0x000107c61574(puVar13);
      }
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (puVar3 != puVar16);
  }
  func_0x000107c6142c(puVar14);
  auStack_78[0] = auStack_218[0];
  func_0x0001034d0aac(auStack_78,0x112f730b8,&UNK_10dbce2c8);
  puStack_3b8 = puVar10;
  func_0x000107c610b4(auStack_8d0,&puStack_3b8,0x1a0);
  func_0x000107c610b4(auStack_730,&puStack_3b8,0x1a0);
  func_0x0001034a24c8(auStack_8d0,auStack_a70);
  func_0x0001034a2504(auStack_730);
  func_0x000107c610b4(param_1,auStack_8d0,0x1a0);
  return;
}



/* Entry: 1034d09cc; end: 1034d0b2b;  */

undefined8 FUN_1034d09cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1035b421c(param_2,param_1);
  return param_2;
}



/* Entry: 1034d0b2c; end: 1034d0f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1034d0b2c(ulong param_1,byte param_2,ulong param_3,ulong param_4,ulong param_5,
                   ulong param_6,long param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_240;
  ulong uStack_230;
  ulong uStack_228;
  undefined1 auStack_208 [424];
  
  uVar2 = param_1;
  FUN_1034e5fa0();
  uVar5 = param_1;
  func_0x000107c5ce30();
  if (uVar5 == 1) {
    func_0x0001034e3f78(0xd,1);
    func_0x0001034ce44c(auStack_208,param_1,param_2 & 1,param_7);
    func_0x0001034e4310(auStack_208);
  }
  else if (uVar5 == 3) {
    func_0x0001034e3f78(0xc,1);
    func_0x0001034d02a8(auStack_208,param_1,param_7);
    func_0x0001034e43e8(auStack_208);
  }
  else if (uVar5 == 2) {
    if (param_4 != 0) {
      uVar5 = param_3 & 0xffffffffffff;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar5 = param_4 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        func_0x000107c61438(param_4,2);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(param_4);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e5874(param_3,param_4,0,0xc000000000000000);
      }
    }
    if (param_6 != 0) {
      uVar5 = param_5 & 0xffffffffffff;
      if ((param_6 & 0x2000000000000000) != 0) {
        uVar5 = param_6 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        func_0x000107c61438(param_6,2);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(param_6);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x0001034e592c(param_5,param_6,0,0xc000000000000000);
      }
    }
    func_0x0001034e3f78(8,1);
    uVar5 = param_1;
    func_0x000107c5c4dc();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar3 = 0;
      FUN_1034d0f54(0);
      uVar4 = uVar5;
      func_0x000107c5fc54(uVar5,uVar3);
      func_0x000107c61170(uVar5);
      if (uVar4 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar5 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar5 == 0) {
        func_0x000107c6142c(uVar4);
      }
      else {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d0f54);
            (*pcVar1)();
          }
          lVar6 = *(long *)(uVar4 + 0x20);
          func_0x000107c61174();
        }
        else {
          lVar6 = 0;
          func_0x0001019285d8(0,uVar4);
        }
        func_0x000107c6142c(uVar4);
        puVar7 = PTR_PTR_1126c8c40;
        func_0x000107c61168();
        lVar8 = lVar6;
        func_0x000107c6148c();
        if (lVar8 != 0) {
          uVar5 = param_1;
          func_0x000107c52060();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uStack_228 = 0;
            puStack_240 = (undefined *)0x0;
            puVar12 = puVar7;
          }
          else {
            uStack_228 = uVar5;
            func_0x000107c5faec();
            puVar12 = puVar7;
            func_0x000107c61170(uVar5);
            puStack_240 = puVar7;
          }
          uVar5 = param_1;
          func_0x000107c418f4();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uStack_230 = 0;
          }
          else {
            uStack_230 = uVar5;
            func_0x000107c49820();
            func_0x000107c61170(uVar5);
          }
          uVar4 = param_1;
          func_0x000107c41978();
          func_0x000107c61180();
          if (uVar4 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar4;
            func_0x000107c49820();
            func_0x000107c61170(uVar4);
          }
          uVar9 = param_1;
          func_0x000107c4b414(param_1);
          uVar10 = param_1;
          func_0x000107c5ce30();
          func_0x000107c3f688();
          if (param_7 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *(long *)(param_7 + _DAT_112f73328);
            if ((*(long *)(lVar13 + 0x10) == 0) ||
               (lVar11 = lVar8, func_0x0001000a7158(), ((ulong)puVar12 & 1) == 0)) {
              FUN_1034d62c4(0);
              func_0x000107c610f8();
              lVar13 = lVar8;
              func_0x000107c61174();
              FUN_1034d6a10();
              func_0x000107c61170(lVar6);
            }
            else {
              lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + lVar11 * 8);
              func_0x000107c61174();
            }
          }
          puVar7 = puStack_240;
          FUN_1034d2e4c(lVar8,uStack_228,puStack_240,uStack_230,uVar5 == 0,uVar14,uVar4 == 0,uVar9,
                        uVar10,param_1,param_2 & 1);
          func_0x000107c61170(lVar13);
          func_0x000107c6142c(puStack_240);
          func_0x0001034e4588(lVar8,uStack_228,puVar7);
        }
        func_0x000107c61170(lVar6);
      }
    }
  }
  return uVar2;
}



/* Entry: 1034d0f54; end: 1034d0f97;  */

void FUN_1034d0f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcf848 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7d30;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dcf848 = puVar1;
  return;
}



/* Entry: 1034d0f98; end: 1034d10a3;  */

void FUN_1034d0f98(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1034def3c();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112f73320;
      func_0x0001000285a8(0x112f73320,&UNK_10dbcf150);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1034d10a4(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1034d15dc(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1034d10a4; end: 1034d15db;  */

void FUN_1034d10a4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = param_3[1];
  if (0 < lVar13) {
    lVar9 = 0;
    do {
      lVar14 = lVar9 + 1;
      if (lVar14 < lVar13) {
        puVar18 = (undefined8 *)(*param_3 + lVar14 * 0x10);
        uVar21 = *puVar18;
        uVar22 = puVar18[1];
        puVar18 = (undefined8 *)(*param_3 + lVar9 * 0x10);
        uVar16 = *puVar18;
        uVar23 = puVar18[1];
        func_0x000107c61174(uVar21);
        func_0x000107c61174();
        func_0x000107c61174(uVar16);
        func_0x000107c61174();
        uVar3 = uVar22;
        func_0x000107c4eb70();
        uVar4 = uVar23;
        func_0x000107c4eb70();
        func_0x000107c61170(uVar22);
        func_0x000107c61170(uVar21);
        func_0x000107c61170(uVar23);
        func_0x000107c61170(uVar16);
        puVar18 = puVar18 + 3;
        lVar11 = lVar9 + 2;
        do {
          lVar8 = lVar11;
          lVar14 = lVar13;
          if (lVar13 == lVar8) break;
          uVar21 = *puVar18;
          uVar16 = puVar18[1];
          uVar15 = puVar18[2];
          uVar17 = puVar18[-1];
          func_0x000107c61174(uVar16);
          func_0x000107c61174();
          func_0x000107c61174(uVar17);
          func_0x000107c61174();
          uVar22 = uVar15;
          func_0x000107c4eb70();
          uVar23 = uVar21;
          func_0x000107c4eb70();
          func_0x000107c61170(uVar15);
          func_0x000107c61170(uVar16);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(uVar17);
          puVar18 = puVar18 + 2;
          lVar11 = lVar8 + 1;
          lVar14 = lVar8;
        } while ((int)uVar3 < (int)uVar4 != (int)uVar23 <= (int)uVar22);
        if ((int)uVar3 < (int)uVar4) {
          if (lVar14 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15b0);
            (*pcVar1)();
          }
          if (lVar9 < lVar14) {
            lVar8 = *param_3;
            puVar18 = (undefined8 *)(lVar8 + lVar9 * 0x10);
            lVar11 = lVar14;
            lVar13 = lVar9;
            puVar19 = (undefined8 *)(lVar8 + lVar14 * 0x10);
            do {
              puVar10 = puVar19 + -2;
              lVar11 = lVar11 + -1;
              if (lVar13 != lVar11) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15d0);
                  (*pcVar1)();
                }
                uVar16 = puVar18[1];
                uVar21 = *puVar18;
                uVar22 = *puVar10;
                puVar18[1] = puVar19[-1];
                *puVar18 = uVar22;
                puVar19[-1] = uVar16;
                *puVar10 = uVar21;
              }
              lVar13 = lVar13 + 1;
              puVar18 = puVar18 + 2;
              puVar19 = puVar10;
            } while (lVar13 < lVar11);
          }
        }
      }
      lVar13 = param_3[1];
      lVar11 = lVar14;
      if (lVar14 < lVar13) {
        if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15ac);
          (*pcVar1)();
        }
        if (lVar14 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15b4);
            (*pcVar1)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar13 <= lVar9 + param_4) {
            lVar8 = lVar13;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15b8);
            (*pcVar1)();
          }
          if (lVar14 != lVar8) {
            lVar20 = *param_3;
            puVar18 = (undefined8 *)(lVar20 + lVar14 * 0x10 + -0x10);
            lVar13 = lVar9 - lVar14;
            do {
              puVar19 = (undefined8 *)(lVar20 + lVar14 * 0x10);
              uVar21 = *puVar19;
              uVar16 = puVar19[1];
              lVar11 = lVar13;
              puVar19 = puVar18;
              do {
                uVar22 = *puVar19;
                uVar23 = puVar19[1];
                func_0x000107c61174(uVar21);
                func_0x000107c61174();
                func_0x000107c61174(uVar22);
                func_0x000107c61174();
                uVar3 = uVar16;
                func_0x000107c4eb70();
                uVar4 = uVar23;
                func_0x000107c4eb70();
                func_0x000107c61170(uVar16);
                func_0x000107c61170(uVar21);
                func_0x000107c61170(uVar23);
                func_0x000107c61170(uVar22);
                if ((int)uVar4 <= (int)uVar3) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15bc);
                  (*pcVar1)();
                }
                uVar16 = puVar19[3];
                uVar23 = puVar19[1];
                uVar22 = *puVar19;
                uVar21 = puVar19[2];
                puVar19[1] = puVar19[3];
                *puVar19 = uVar21;
                puVar19[3] = uVar23;
                puVar19[2] = uVar22;
                bVar2 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                puVar19 = puVar19 + -2;
              } while (bVar2);
              lVar14 = lVar14 + 1;
              puVar18 = puVar18 + 2;
              lVar13 = lVar13 + -1;
              lVar11 = lVar8;
            } while (lVar14 != lVar8);
          }
        }
      }
      puVar7 = puStack_58;
      if (lVar11 < lVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15a0);
        (*pcVar1)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar12 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar12 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
      *(long *)(puVar7 + uVar12 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar12 * 0x10 + 0x28) = lVar11;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15d4);
        (*pcVar1)();
      }
      FUN_1034d1704(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1034d1570;
      lVar13 = param_3[1];
      lVar9 = lVar11;
    } while (lVar11 < lVar13);
  }
  puVar7 = puStack_58;
  lVar13 = *param_1;
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15dc);
    (*pcVar1)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar12 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar12) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15d8);
      (*pcVar1)();
    }
    lVar8 = uVar12 - 1;
    lVar11 = *(long *)(puVar7 + uVar12 * 0x10);
    lVar14 = *(long *)(puVar7 + lVar8 * 0x10 + 0x28);
    FUN_1034d196c(lVar9 + lVar11 * 0x10,lVar9 + *(long *)(puVar7 + lVar8 * 0x10 + 0x20) * 0x10,
                  lVar9 + lVar14 * 0x10,lVar13);
    if (unaff_x21 != 0) break;
    if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15a4);
      (*pcVar1)();
    }
    puVar5 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar12 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d15a8);
      (*pcVar1)();
    }
    *(long *)(puVar7 + uVar12 * 0x10) = lVar11;
    *(long *)((long)(puVar7 + uVar12 * 0x10) + 8) = lVar14;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar8);
    puVar7 = puStack_58;
    uVar12 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1034d1570:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 1034d15dc; end: 1034d1703;  */

void FUN_1034d15dc(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (undefined8 *)(lVar5 + param_3 * 0x10 + -0x10);
    param_1 = param_1 - param_3;
    do {
      puVar7 = (undefined8 *)(lVar5 + param_3 * 0x10);
      uVar10 = *puVar7;
      uVar9 = puVar7[1];
      puVar7 = puVar6;
      lVar8 = param_1;
      do {
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        func_0x000107c61174(uVar10);
        func_0x000107c61174();
        func_0x000107c61174(uVar11);
        func_0x000107c61174();
        uVar3 = uVar9;
        func_0x000107c4eb70();
        uVar4 = uVar12;
        func_0x000107c4eb70();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar11);
        if ((int)uVar4 <= (int)uVar3) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d1704);
          (*pcVar1)();
        }
        uVar9 = puVar7[3];
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        uVar10 = puVar7[2];
        puVar7[1] = puVar7[3];
        *puVar7 = uVar10;
        puVar7[3] = uVar12;
        puVar7[2] = uVar11;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + -2;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1034d1704; end: 1034d196b;  */

undefined8 FUN_1034d1704(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1034d17d8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1954);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1034d183c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1944);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d194c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d192c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1930);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1938);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1940);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1034d17d8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1934);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d193c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1948);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1950);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1034d183c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1958);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1920);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d196c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1034d196c(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1924);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1034d1928);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1034d196c; end: 1034d1cbb;  */

undefined8
FUN_1034d196c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar9;
  
  lVar12 = (long)param_2 - (long)param_1;
  lVar7 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar7 = lVar12;
  }
  lVar7 = lVar7 >> 4;
  lVar13 = (long)param_3 - (long)param_2;
  lVar10 = lVar13 + 0xf;
  if (-1 < lVar13) {
    lVar10 = lVar13;
  }
  lVar10 = lVar10 >> 4;
  if (lVar7 < lVar10) {
    if (((param_4 < param_1) || (param_1 + lVar7 * 2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar7 << 4);
    }
    puVar9 = param_4 + lVar7 * 2;
    puVar15 = param_1;
    if (0xf < lVar12) {
      do {
        if (param_3 <= param_2) break;
        uVar17 = *param_2;
        uVar2 = param_2[1];
        uVar3 = *param_4;
        uVar4 = param_4[1];
        func_0x000107c61174(uVar17);
        func_0x000107c61174();
        func_0x000107c61174(uVar3);
        func_0x000107c61174();
        uVar5 = uVar2;
        func_0x000107c4eb70();
        uVar6 = uVar4;
        func_0x000107c4eb70();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        if ((int)uVar5 < (int)uVar6) {
          puVar11 = param_4;
          puVar16 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          puVar11 = param_4 + 2;
          puVar16 = param_4;
        }
        param_4 = puVar11;
        if (puVar15 != puVar16) {
          uVar17 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar17;
        }
        puVar15 = puVar15 + 2;
      } while (param_4 < puVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar10 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar10 << 4);
    }
    puVar9 = param_4 + lVar10 * 2;
    puVar15 = param_2;
    if ((param_1 < param_2) && (0xf < lVar13)) {
      do {
        puVar11 = param_2 + -2;
        puVar16 = param_3;
        while( true ) {
          param_3 = puVar16 + -2;
          puVar14 = puVar9 + -2;
          uVar17 = *puVar14;
          uVar2 = puVar9[-1];
          uVar3 = param_2[-2];
          uVar4 = param_2[-1];
          func_0x000107c61174(uVar17);
          func_0x000107c61174();
          func_0x000107c61174(uVar3);
          func_0x000107c61174();
          uVar5 = uVar2;
          func_0x000107c4eb70();
          uVar6 = uVar4;
          func_0x000107c4eb70();
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar17);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar3);
          if ((int)uVar5 < (int)uVar6) break;
          if (puVar16 != puVar9) {
            uVar17 = *puVar14;
            puVar16[-1] = puVar9[-1];
            *param_3 = uVar17;
          }
          puVar9 = puVar14;
          puVar15 = param_2;
          puVar16 = param_3;
          if (puVar14 <= param_4) goto LAB_1034d1c58;
        }
        if (puVar16 != param_2) {
          uVar17 = *puVar11;
          puVar16[-1] = param_2[-1];
          *param_3 = uVar17;
        }
        puVar15 = puVar11;
      } while ((param_1 < puVar11) && (param_2 = puVar11, param_4 < puVar9));
    }
  }
LAB_1034d1c58:
  uVar8 = (long)puVar9 - (long)param_4;
  uVar1 = uVar8 + 0xf;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((puVar15 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar15)) {
    func_0x000107c610b8(puVar15,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 1034d1cbc; end: 1034d1f07;  */

undefined1  [16] FUN_1034d1cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long alStack_a0 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_80 + lVar4;
  uStack_70 = 0x2d;
  uStack_68 = 0xe100000000000000;
  uStack_80 = 0x2b;
  uStack_78 = 0xe100000000000000;
  puStack_60 = (undefined8 *)param_1;
  puStack_58 = (undefined8 *)param_2;
  func_0x000100e8b654();
  puVar1 = PTR___sSSN_11034da80;
  *(long *)((long)alStack_a0 + lVar4 + 0x10) = lVar3;
  *(long *)((long)alStack_a0 + lVar4 + 0x18) = lVar3;
  *(undefined **)((long)alStack_a0 + lVar4) = PTR___sSSN_11034da80;
  *(long *)((long)alStack_a0 + lVar4 + 8) = lVar3;
  puVar6 = &uStack_70;
  puVar9 = &uStack_80;
  func_0x000107c601fc(puVar6,puVar9,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  uStack_70 = 0x5f;
  uStack_68 = 0xe100000000000000;
  uStack_80 = 0x2f;
  uStack_78 = 0xe100000000000000;
  puStack_60 = puVar6;
  puStack_58 = puVar9;
  *(long *)((long)alStack_a0 + lVar4 + 0x10) = lVar3;
  *(long *)((long)alStack_a0 + lVar4 + 0x18) = lVar3;
  puVar6 = &uStack_70;
  puVar8 = &uStack_80;
  *(undefined **)((long)alStack_a0 + lVar4) = puVar1;
  *(long *)((long)alStack_a0 + lVar4 + 8) = lVar3;
  func_0x000107c601fc(puVar6,puVar8,0,0,0,1,puVar1,puVar1);
  func_0x000107c6142c(puVar9);
  puStack_60 = puVar6;
  puStack_58 = puVar8;
  func_0x000107c5eb88(lVar12);
  lVar4 = lVar12;
  func_0x000107c601d8(lVar12,puVar1,lVar3);
  (**(code **)(lVar13 + 8))(lVar12,lVar2);
  func_0x000107c6142c(puVar8);
  uVar10 = 0x112d38270;
  puStack_60 = (undefined8 *)lVar4;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar10;
  func_0x00010011d734();
  puVar6 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0xe000000000000000;
  func_0x000107c5fa80(0,0xe000000000000000,uVar10,uVar5);
  func_0x000107c6142c(lVar4);
  puStack_60 = puVar6;
  puStack_58 = puVar9;
  func_0x000107c61434(puVar9);
  uVar7 = (ulong)puVar6;
  func_0x000107c5fb5c(puVar6,puVar9);
  func_0x000107c6142c(puVar9);
  uVar11 = uVar7 & 3;
  if (-1 < (long)-uVar7) {
    uVar11 = -(-uVar7 & 3);
  }
  if (0 < (long)uVar11) {
    uVar10 = 0xe100000000000000;
    func_0x000107c5fbc0(0x3d,0xe100000000000000,4 - uVar11);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar10);
    puVar6 = puStack_60;
    puVar9 = puStack_58;
  }
  uVar10 = puVar9;
  func_0x000107c5ee08(puVar6,puVar9,1);
  func_0x000107c6142c(puVar9);
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = puVar6;
  return auVar14;
}



/* Entry: 1034d1f08; end: 1034d2077;  */

void FUN_1034d1f08(undefined8 *param_1,ulong param_2,char param_3,ulong param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_140 [64];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = 0xc000000000000000;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0xf000000000000000;
  if (param_3 != '\x01') {
    if ((long)param_2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1034d206c);
      (*pcVar9)();
    }
    if (0x7fffffff < (long)param_2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1034d2074);
      (*pcVar9)();
    }
    func_0x000100d54a70(0,0,0xf000000000000000);
    uStack_60 = 0xc000000000000000;
    uStack_70 = param_2 & 0xffffffff;
  }
  uStack_68 = 0;
  if (param_5 != '\x01') {
    if ((long)param_4 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1034d2070);
      (*pcVar9)();
    }
    if (0x7fffffff < (long)param_4) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1034d2078);
      (*pcVar9)();
    }
    func_0x000100d54a70(0,0,0xf000000000000000);
    uStack_48 = 0xc000000000000000;
    uStack_50 = 0;
    uStack_58 = param_4 & 0xffffffff;
  }
  uVar8 = uStack_48;
  uVar7 = uStack_50;
  uVar6 = uStack_58;
  uVar5 = uStack_60;
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_e8 = uStack_68;
  uStack_f0 = uStack_70;
  uStack_b8 = 0xf000000000000000;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  func_0x0001034a2424(&uStack_100,auStack_140);
  func_0x0001034d5958(&uStack_c0,0x112f730a0,&UNK_10dbe2af0);
  func_0x0001034a2460(&uStack_80);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  return;
}



/* Entry: 1034d2078; end: 1034d2d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d2078(undefined8 *param_1,undefined8 ****param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  long extraout_x8;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 *puStack_9b0;
  undefined8 ***pppuStack_9a8;
  double dStack_9a0;
  double dStack_998;
  undefined1 auStack_988 [184];
  undefined8 **ppuStack_8d0;
  undefined8 uStack_8c8;
  double dStack_8c0;
  double dStack_8b8;
  double dStack_8b0;
  double dStack_8a8;
  double dStack_8a0;
  double dStack_898;
  ulong uStack_890;
  double dStack_888;
  double dStack_880;
  ulong uStack_878;
  double dStack_870;
  double dStack_868;
  double dStack_860;
  double dStack_858;
  double dStack_850;
  double dStack_848;
  double dStack_840;
  double dStack_838;
  undefined8 ***pppuStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 **ppuStack_810;
  undefined8 uStack_808;
  double dStack_800;
  double dStack_7f8;
  double dStack_7f0;
  double dStack_7e8;
  double dStack_7e0;
  double dStack_7d8;
  ulong uStack_7d0;
  double dStack_7c8;
  double dStack_7c0;
  ulong uStack_7b8;
  double dStack_7b0;
  double dStack_7a8;
  double dStack_7a0;
  double dStack_798;
  double dStack_790;
  double dStack_788;
  double dStack_780;
  double dStack_778;
  undefined8 ***pppuStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 **ppuStack_750;
  undefined8 uStack_748;
  double dStack_740;
  double dStack_738;
  double dStack_730;
  double dStack_728;
  double dStack_720;
  double dStack_718;
  ulong uStack_710;
  double dStack_708;
  double dStack_700;
  ulong uStack_6f8;
  double dStack_6f0;
  double dStack_6e8;
  double dStack_6e0;
  double dStack_6d8;
  double dStack_6d0;
  double dStack_6c8;
  double dStack_6c0;
  double dStack_6b8;
  undefined8 ***pppuStack_6b0;
  undefined1 uStack_6a8;
  undefined7 uStack_6a7;
  undefined1 uStack_6a0;
  undefined7 uStack_69f;
  undefined1 uStack_698;
  undefined8 **ppuStack_690;
  undefined8 uStack_688;
  double dStack_680;
  double dStack_678;
  double dStack_670;
  double dStack_668;
  double dStack_660;
  double dStack_658;
  ulong uStack_650;
  double dStack_648;
  double dStack_640;
  ulong uStack_638;
  double dStack_630;
  double dStack_628;
  double dStack_620;
  double dStack_618;
  double dStack_610;
  double dStack_608;
  double dStack_600;
  double dStack_5f8;
  undefined8 ***pppuStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 **ppuStack_5d0;
  undefined8 uStack_5c8;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double dStack_5a8;
  double dStack_5a0;
  double dStack_598;
  ulong uStack_590;
  double dStack_588;
  double dStack_580;
  ulong uStack_578;
  double dStack_570;
  double dStack_568;
  double dStack_560;
  double dStack_558;
  double dStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  undefined8 ***pppuStack_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined7 uStack_51f;
  undefined1 uStack_518;
  undefined8 **ppuStack_510;
  undefined8 uStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  ulong uStack_4d0;
  double dStack_4c8;
  double dStack_4c0;
  ulong uStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  double dStack_480;
  double dStack_478;
  undefined8 ***pppuStack_470;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 uStack_460;
  undefined7 uStack_45f;
  undefined1 uStack_458;
  undefined7 uStack_457;
  undefined8 ***pppuStack_450;
  undefined8 uStack_448;
  double dStack_440;
  double dStack_438;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  double dStack_418;
  ulong uStack_410;
  double dStack_408;
  double dStack_400;
  ulong uStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined8 uStack_39f;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  ulong uStack_100;
  double dStack_f8;
  double dStack_f0;
  ulong uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar6 = 0;
  puStack_9b0 = param_1;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = (long)&puStack_9b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1034a25bc(&ppuStack_140);
  dStack_488 = dStack_b8;
  dStack_490 = dStack_c0;
  dStack_478 = dStack_a8;
  dStack_480 = dStack_b0;
  uStack_468 = uStack_98;
  pppuStack_470 = pppuStack_a0;
  uStack_45f = (undefined7)uStack_8f;
  uStack_458 = (undefined1)((ulong)uStack_8f >> 0x38);
  uStack_467 = uStack_97;
  uStack_460 = uStack_90;
  dStack_4c8 = dStack_f8;
  uStack_4d0 = uStack_100;
  uStack_4b8 = uStack_e8;
  dStack_4c0 = dStack_f0;
  dStack_4a8 = dStack_d8;
  dStack_4b0 = dStack_e0;
  dStack_498 = dStack_c8;
  dStack_4a0 = dStack_d0;
  uStack_508 = uStack_138;
  ppuStack_510 = ppuStack_140;
  dStack_4f8 = dStack_128;
  dStack_500 = dStack_130;
  dStack_4e8 = dStack_118;
  dStack_4f0 = dStack_120;
  dStack_4d8 = dStack_108;
  dStack_4e0 = dStack_110;
  ppppuVar7 = param_2;
  func_0x000107c4b7c0();
  func_0x000107c61180();
  lVar1 = 0;
  if (param_4 != 0) {
    lVar1 = param_3;
  }
  lVar2 = -0x2000000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  func_0x000107c61434(param_4);
  pppuStack_9a8 = param_2;
  func_0x000107c4de5c(param_2);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar14);
  func_0x000107c61170(param_2);
  dVar16 = dStack_120;
  func_0x000107c5ee8c();
  (**(code **)(lVar15 + 8))(lVar14,lVar6);
  dVar16 = dVar16 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1034d2d38);
    (*pcVar5)();
  }
  if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1034d2d3c);
    (*pcVar5)();
  }
  if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1034d2d40);
    (*pcVar5)();
  }
  uVar8 = 0x574549565f424557;
  dVar16 = (double)(long)dVar16;
  if (((((lVar1 == 0x574549565f424557) && (lVar2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x574549565f424557,0xe800000000000000,lVar1,lVar2,0), (uVar8 & 1) != 0))
      || ((uVar8 = 0, lVar1 == 0x5f544c5541464544 && (lVar2 == -0x10adbaaca8b0adbe)))) ||
     (func_0x000107c605b8(0x5f544c5541464544,0xef524553574f5242,lVar1,lVar2,0), (uVar8 & 1) != 0)) {
    func_0x000107c6142c(lVar2);
    dStack_998 = -2.0;
    dStack_9a0 = 0.0;
    uStack_688 = 0xc000000000000000;
    ppuStack_690 = (undefined8 ***)0x0;
    dStack_660 = 0.0;
    dStack_668 = 0.0;
    uStack_650 = 2;
    dStack_658 = -3.105036184601418e+231;
    dStack_640 = 0.0;
    dStack_648 = 0.0;
    uStack_638 = 2;
    dStack_630 = 0.0;
    dStack_628 = 0.0;
    pppuStack_5f0 = (undefined8 ***)0x0;
    uStack_5e0 = 0;
    uStack_5e8 = 0;
    func_0x000100d54a70(0,0,0xf000000000000000);
    ppppuVar12 = (undefined8 ****)pppuStack_9a8;
    dStack_610 = dStack_998;
    dStack_618 = dStack_9a0;
    dVar17 = dStack_9a0;
    dStack_620 = dVar16;
    func_0x000107c5df28(pppuStack_9a8);
    func_0x000100d54a70(0,0,0xf000000000000000);
    dStack_670 = dStack_998;
    dStack_678 = dStack_9a0;
    ppppuVar10 = ppppuVar12;
    dStack_680 = (double)(ulong)(uint)(float)dVar17;
    func_0x000107c4a1b8();
    uVar13 = 0;
    dVar16 = 0.0;
    func_0x000101556278(2);
    dStack_5f8 = dStack_998;
    dStack_600 = dStack_9a0;
    dStack_608 = (double)((ulong)ppppuVar10 & 0xffffffff);
    if (ppppuVar7 != (undefined8 ****)0x0) {
      ppppuVar11 = ppppuVar7;
      func_0x000107c61174();
      ppppuVar10 = ppppuVar11;
      func_0x000107c4b7b4();
      func_0x000101556278(2,0,0);
      dStack_640 = dStack_998;
      dStack_648 = dStack_9a0;
      ppppuVar9 = ppppuVar11;
      uStack_650 = (ulong)ppppuVar10 & 0xffffffff;
      func_0x000107c4b7b8();
      func_0x000101556278(2,0,0);
      dStack_628 = dStack_998;
      dStack_630 = dStack_9a0;
      dVar17 = dStack_9a0;
      uStack_638 = (ulong)ppppuVar9 & 0xffffffff;
      func_0x000107c5dff0(ppppuVar11);
      func_0x000107c61170(ppppuVar11);
      dVar17 = dVar17 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034d2d44);
        (*pcVar5)();
      }
      if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034d2d48);
        (*pcVar5)();
      }
      if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034d2d4c);
        (*pcVar5)();
      }
      uVar13 = 0;
      dVar16 = -3.105036184601418e+231;
      func_0x000100d54a70(0);
      dStack_658 = dStack_998;
      dStack_660 = dStack_9a0;
      dStack_668 = (double)(long)dVar17;
    }
    func_0x000107c5e220();
    func_0x000107c61180();
    if (ppppuVar12 == (undefined8 ****)0x0) {
      func_0x0001036536c4();
      pppuStack_450 = ppppuVar12;
      uStack_448 = uVar13;
      dStack_440 = dVar16;
      FUN_1036524b4(0,0,0xc000000000000000);
      func_0x000107c61170(ppppuVar7);
      dVar16 = dStack_440;
      ppppuVar10 = (undefined8 ****)pppuStack_450;
      uVar13 = uStack_448;
    }
    else {
      func_0x000107c61174();
      func_0x0001042c3e04(&pppuStack_450);
      ppppuVar10 = &pppuStack_450;
      uVar13 = 0;
      func_0x0001034cda38();
      func_0x000107c61170(ppppuVar7);
      func_0x000107c61170(ppppuVar12);
    }
    func_0x0001034d592c(0,0,0);
    puVar4 = puStack_9b0;
    dStack_848 = dStack_608;
    dStack_850 = dStack_610;
    dStack_838 = dStack_5f8;
    dStack_840 = dStack_600;
    dStack_888 = dStack_648;
    uStack_890 = uStack_650;
    uStack_878 = uStack_638;
    dStack_880 = dStack_640;
    dStack_868 = dStack_628;
    dStack_870 = dStack_630;
    dStack_858 = dStack_618;
    dStack_860 = dStack_620;
    uStack_8c8 = uStack_688;
    ppuStack_8d0 = ppuStack_690;
    dStack_8b8 = dStack_678;
    dStack_8c0 = dStack_680;
    dStack_8a8 = dStack_668;
    dStack_8b0 = dStack_670;
    dStack_898 = dStack_658;
    dStack_8a0 = dStack_660;
    dStack_788 = dStack_608;
    dStack_790 = dStack_610;
    dStack_778 = dStack_5f8;
    dStack_780 = dStack_600;
    dStack_7c8 = dStack_648;
    uStack_7d0 = uStack_650;
    uStack_7b8 = uStack_638;
    dStack_7c0 = dStack_640;
    dStack_7a8 = dStack_628;
    dStack_7b0 = dStack_630;
    dStack_798 = dStack_618;
    dStack_7a0 = dStack_620;
    uStack_808 = uStack_688;
    ppuStack_810 = ppuStack_690;
    dStack_7f8 = dStack_678;
    dStack_800 = dStack_680;
    dStack_7e8 = dStack_668;
    dStack_7f0 = dStack_670;
    dStack_7d8 = dStack_658;
    dStack_7e0 = dStack_660;
    pppuStack_830 = ppppuVar10;
    uStack_828 = uVar13;
    uStack_820 = dVar16;
    pppuStack_770 = ppppuVar10;
    uStack_768 = uVar13;
    uStack_760 = dVar16;
    pppuStack_5f0 = ppppuVar10;
    uStack_5e8 = uVar13;
    uStack_5e0 = dVar16;
    FUN_1034a2734(&ppuStack_810);
    dStack_6c8 = dStack_788;
    dStack_6d0 = dStack_790;
    dStack_6b8 = dStack_778;
    dStack_6c0 = dStack_780;
    uStack_6a8 = (undefined1)uStack_768;
    uStack_6a7 = (undefined7)((ulong)uStack_768 >> 8);
    pppuStack_6b0 = pppuStack_770;
    uStack_6a0 = (undefined1)uStack_760;
    uStack_69f = (undefined7)((ulong)uStack_760 >> 8);
    dStack_708 = dStack_7c8;
    uStack_710 = uStack_7d0;
    uStack_6f8 = uStack_7b8;
    dStack_700 = dStack_7c0;
    dStack_6e8 = dStack_7a8;
    dStack_6f0 = dStack_7b0;
    dStack_6d8 = dStack_798;
    dStack_6e0 = dStack_7a0;
    uStack_748 = uStack_808;
    ppuStack_750 = ppuStack_810;
    dStack_738 = dStack_7f8;
    dStack_740 = dStack_800;
    dStack_728 = dStack_7e8;
    dStack_730 = dStack_7f0;
    dStack_718 = dStack_7d8;
    dStack_720 = dStack_7e0;
    func_0x0001034a25f8(&ppuStack_750);
    dStack_548 = dStack_488;
    dStack_550 = dStack_490;
    dStack_538 = dStack_478;
    dStack_540 = dStack_480;
    pppuStack_530 = pppuStack_470;
    uStack_51f = uStack_45f;
    uStack_518 = uStack_458;
    dStack_588 = dStack_4c8;
    uStack_590 = uStack_4d0;
    uStack_578 = uStack_4b8;
    dStack_580 = dStack_4c0;
    dStack_568 = dStack_4a8;
    dStack_570 = dStack_4b0;
    dStack_558 = dStack_498;
    dStack_560 = dStack_4a0;
    uStack_5c8 = uStack_508;
    ppuStack_5d0 = ppuStack_510;
    dStack_5b8 = dStack_4f8;
    dStack_5c0 = dStack_500;
    dStack_5a8 = dStack_4e8;
    dStack_5b0 = dStack_4f0;
    dStack_598 = dStack_4d8;
    dStack_5a0 = dStack_4e0;
    FUN_1034a2748(&ppuStack_8d0,auStack_988);
    func_0x0001034d5958(&ppuStack_5d0,0x112f730c0,&UNK_10dbce2d0);
    dStack_488 = dStack_6c8;
    dStack_490 = dStack_6d0;
    dStack_478 = dStack_6b8;
    dStack_480 = dStack_6c0;
    uStack_468 = uStack_6a8;
    pppuStack_470 = pppuStack_6b0;
    uStack_45f = uStack_69f;
    uStack_458 = uStack_698;
    uStack_467 = uStack_6a7;
    uStack_460 = uStack_6a0;
    dStack_4c8 = dStack_708;
    uStack_4d0 = uStack_710;
    uStack_4b8 = uStack_6f8;
    dStack_4c0 = dStack_700;
    dStack_4a8 = dStack_6e8;
    dStack_4b0 = dStack_6f0;
    dStack_498 = dStack_6d8;
    dStack_4a0 = dStack_6e0;
    uStack_508 = uStack_748;
    ppuStack_510 = ppuStack_750;
    dStack_4f8 = dStack_738;
    dStack_500 = dStack_740;
    dStack_4e8 = dStack_728;
    dStack_4f0 = dStack_730;
    dStack_4d8 = dStack_718;
    dStack_4e0 = dStack_720;
    func_0x0001034a2784(&ppuStack_690);
    puStack_9b0 = puVar4;
  }
  else {
    uVar8 = 0x54534e495f505041;
    if (((lVar1 == 0x54534e495f505041) && (lVar2 == -0x14ffffffffb3b3bf)) ||
       (func_0x000107c605b8(0x54534e495f505041,0xeb000000004c4c41,lVar1,lVar2,0), (uVar8 & 1) != 0))
    {
      func_0x000107c6142c(lVar2);
      dStack_998 = -2.0;
      dStack_9a0 = 0.0;
      uStack_688 = 0xc000000000000000;
      ppuStack_690 = (undefined8 ***)0x0;
      uStack_650 = 2;
      dStack_648 = 0.0;
      dStack_640 = 0.0;
      uStack_638 = 2;
      dVar17 = 0.0;
      dStack_628 = 0.0;
      dStack_630 = 0.0;
      dStack_618 = 0.0;
      dStack_620 = 0.0;
      dStack_610 = -3.105036184601418e+231;
      func_0x000107c5df28(pppuStack_9a8);
      func_0x000100d54a70(0,0,0xf000000000000000);
      dStack_670 = dStack_998;
      dStack_678 = dStack_9a0;
      dStack_680 = (double)(ulong)(uint)(float)dVar17;
      func_0x000100d54a70(0,0,0xf000000000000000);
      dStack_658 = dStack_998;
      dStack_660 = dStack_9a0;
      dStack_668 = dVar16;
      if (ppppuVar7 == (undefined8 ****)0x0) {
        dStack_7a8 = dStack_628;
        dStack_7b0 = dStack_630;
        dStack_798 = dStack_618;
        dStack_7a0 = dStack_620;
        dStack_7f0 = dStack_670;
        dStack_7d8 = dStack_998;
        dStack_7e0 = dStack_9a0;
        dStack_7c8 = dStack_648;
        uStack_7d0 = uStack_650;
        uStack_7b8 = uStack_638;
        dStack_7c0 = dStack_640;
        uStack_808 = uStack_688;
        ppuStack_810 = ppuStack_690;
        dStack_7f8 = dStack_678;
        dStack_800 = dStack_680;
        dStack_6e8 = dStack_628;
        dStack_6f0 = dStack_630;
        dStack_6d8 = dStack_618;
        dStack_6e0 = dStack_620;
        dStack_730 = dStack_670;
        dStack_718 = dStack_998;
        dStack_720 = dStack_9a0;
        dStack_708 = dStack_648;
        uStack_710 = uStack_650;
        uStack_6f8 = uStack_638;
        dStack_700 = dStack_640;
        dStack_790 = dStack_610;
        dStack_6d0 = dStack_610;
        uStack_748 = uStack_688;
        ppuStack_750 = ppuStack_690;
        dStack_738 = dStack_678;
        dStack_740 = dStack_680;
        dStack_7e8 = dVar16;
        dStack_728 = dVar16;
        FUN_1034a26b0(&ppuStack_750);
        dStack_548 = dStack_6c8;
        dStack_550 = dStack_6d0;
        dStack_538 = dStack_6b8;
        dStack_540 = dStack_6c0;
        uStack_528 = uStack_6a8;
        uStack_527 = uStack_6a7;
        pppuStack_530 = pppuStack_6b0;
        uStack_520 = uStack_6a0;
        uStack_51f = uStack_69f;
        dStack_588 = dStack_708;
        uStack_590 = uStack_710;
        uStack_578 = uStack_6f8;
        dStack_580 = dStack_700;
        dStack_568 = dStack_6e8;
        dStack_570 = dStack_6f0;
        dStack_558 = dStack_6d8;
        dStack_560 = dStack_6e0;
        uStack_5c8 = uStack_748;
        ppuStack_5d0 = ppuStack_750;
        dStack_5b8 = dStack_738;
        dStack_5c0 = dStack_740;
        dStack_5a8 = dStack_728;
        dStack_5b0 = dStack_730;
        dStack_598 = dStack_718;
        dStack_5a0 = dStack_720;
        func_0x0001034a25f8(&ppuStack_5d0);
        uStack_39f = CONCAT17(uStack_458,uStack_45f);
      }
      else {
        ppppuVar12 = ppppuVar7;
        func_0x000107c4b7b4();
        func_0x000101556278(uStack_650,dStack_648,dStack_640);
        dStack_640 = dStack_998;
        dStack_648 = dStack_9a0;
        ppppuVar10 = ppppuVar7;
        uStack_650 = (ulong)ppppuVar12 & 0xffffffff;
        func_0x000107c4b7b8();
        func_0x000101556278(uStack_638,dStack_630,dStack_628);
        dStack_628 = dStack_998;
        dStack_630 = dStack_9a0;
        dVar16 = dStack_9a0;
        uStack_638 = (ulong)ppppuVar10 & 0xffffffff;
        func_0x000107c5dff0(ppppuVar7);
        func_0x000107c61170(ppppuVar7);
        dVar16 = (double)(ulong)(uint)(float)(dVar16 * 1000.0);
        func_0x000100d54a70(dStack_620,dStack_618,dStack_610);
        dStack_610 = dStack_998;
        dStack_618 = dStack_9a0;
        dStack_7e8 = dStack_668;
        dStack_7f0 = dStack_670;
        dStack_7d8 = dStack_658;
        dStack_7e0 = dStack_660;
        dStack_7c8 = dStack_648;
        uStack_7d0 = uStack_650;
        uStack_7b8 = uStack_638;
        dStack_7c0 = dStack_640;
        uStack_808 = uStack_688;
        ppuStack_810 = ppuStack_690;
        dStack_7f8 = dStack_678;
        dStack_800 = dStack_680;
        dStack_7a8 = dStack_628;
        dStack_7b0 = dStack_630;
        dStack_798 = dStack_9a0;
        dStack_6e8 = dStack_628;
        dStack_6f0 = dStack_630;
        dStack_6d8 = dStack_9a0;
        dStack_728 = dStack_668;
        dStack_730 = dStack_670;
        dStack_718 = dStack_658;
        dStack_720 = dStack_660;
        dStack_708 = dStack_648;
        uStack_710 = uStack_650;
        uStack_6f8 = uStack_638;
        dStack_700 = dStack_640;
        dStack_790 = dStack_998;
        dStack_6d0 = dStack_998;
        uStack_748 = uStack_688;
        ppuStack_750 = ppuStack_690;
        dStack_738 = dStack_678;
        dStack_740 = dStack_680;
        dStack_7a0 = dVar16;
        dStack_6e0 = dVar16;
        dStack_620 = dVar16;
        FUN_1034a26b0(&ppuStack_750);
        dStack_548 = dStack_6c8;
        dStack_550 = dStack_6d0;
        dStack_538 = dStack_6b8;
        dStack_540 = dStack_6c0;
        uStack_528 = uStack_6a8;
        uStack_527 = uStack_6a7;
        pppuStack_530 = pppuStack_6b0;
        uStack_520 = uStack_6a0;
        uStack_51f = uStack_69f;
        dStack_588 = dStack_708;
        uStack_590 = uStack_710;
        uStack_578 = uStack_6f8;
        dStack_580 = dStack_700;
        dStack_568 = dStack_6e8;
        dStack_570 = dStack_6f0;
        dStack_558 = dStack_6d8;
        dStack_560 = dStack_6e0;
        uStack_5c8 = uStack_748;
        ppuStack_5d0 = ppuStack_750;
        dStack_5b8 = dStack_738;
        dStack_5c0 = dStack_740;
        dStack_5a8 = dStack_728;
        dStack_5b0 = dStack_730;
        dStack_598 = dStack_718;
        dStack_5a0 = dStack_720;
        func_0x0001034a25f8(&ppuStack_5d0);
        uStack_39f = CONCAT17(uStack_458,uStack_45f);
      }
      dStack_408 = dStack_4c8;
      uStack_410 = uStack_4d0;
      uStack_3f8 = uStack_4b8;
      dStack_400 = dStack_4c0;
      dStack_3e8 = dStack_4a8;
      dStack_3f0 = dStack_4b0;
      dStack_3d8 = dStack_498;
      dStack_3e0 = dStack_4a0;
      uStack_448 = uStack_508;
      pppuStack_450 = (undefined8 ***)ppuStack_510;
      dStack_438 = dStack_4f8;
      dStack_440 = dStack_500;
      dStack_428 = dStack_4e8;
      dStack_430 = dStack_4f0;
      dStack_418 = dStack_4d8;
      dStack_420 = dStack_4e0;
      dStack_3d0 = dStack_490;
      dStack_3c8 = dStack_488;
      dStack_3c0 = dStack_480;
      dStack_3b8 = dStack_478;
      pppuStack_3b0 = pppuStack_470;
      FUN_1034a26c4(&ppuStack_810,&ppuStack_8d0);
      func_0x0001034d5958(&pppuStack_450,0x112f730c0,&UNK_10dbce2d0);
      dStack_488 = dStack_548;
      dStack_490 = dStack_550;
      dStack_478 = dStack_538;
      dStack_480 = dStack_540;
      uStack_468 = uStack_528;
      pppuStack_470 = pppuStack_530;
      uStack_45f = uStack_51f;
      uStack_458 = uStack_518;
      uStack_467 = uStack_527;
      uStack_460 = uStack_520;
      dStack_4c8 = dStack_588;
      uStack_4d0 = uStack_590;
      uStack_4b8 = uStack_578;
      dStack_4c0 = dStack_580;
      dStack_4a8 = dStack_568;
      dStack_4b0 = dStack_570;
      dStack_498 = dStack_558;
      dStack_4a0 = dStack_560;
      uStack_508 = uStack_5c8;
      ppuStack_510 = ppuStack_5d0;
      dStack_4f8 = dStack_5b8;
      dStack_500 = dStack_5c0;
      dStack_4e8 = dStack_5a8;
      dStack_4f0 = dStack_5b0;
      dStack_4d8 = dStack_598;
      dStack_4e0 = dStack_5a0;
      func_0x0001034a2700(&ppuStack_690);
    }
    else {
      uVar8 = 0;
      if ((lVar1 == 0x4e494c5f50454544) && (lVar2 == -0x16ffffffffffffb5)) {
        func_0x000107c6142c(0xe90000000000004b);
      }
      else {
        func_0x000107c605b8(0x4e494c5f50454544,0xe90000000000004b,lVar1,lVar2,0);
        func_0x000107c6142c(lVar2);
        if ((uVar8 & 1) == 0) {
          func_0x000107c61170(ppppuVar7);
          goto LAB_1034d2620;
        }
      }
      dStack_998 = -2.0;
      dStack_9a0 = 0.0;
      uStack_688 = 0xc000000000000000;
      ppuStack_690 = (undefined8 ***)0x0;
      dStack_630 = 0.0;
      uStack_638 = 0;
      dStack_620 = 0.0;
      dStack_628 = 0.0;
      dStack_618 = 9.88131291682493e-324;
      func_0x000100d54a70(0,0,0xf000000000000000);
      ppppuVar12 = (undefined8 ****)pppuStack_9a8;
      dStack_670 = dStack_998;
      dStack_678 = dStack_9a0;
      ppppuVar10 = (undefined8 ****)pppuStack_9a8;
      dStack_680 = dVar16;
      func_0x000107c4a308();
      func_0x000101556278(2,0,0);
      dStack_658 = dStack_998;
      dStack_660 = dStack_9a0;
      ppppuVar11 = ppppuVar12;
      dStack_668 = (double)((ulong)ppppuVar10 & 0xffffffff);
      func_0x000107c4a30c();
      func_0x000101556278(2,0,0);
      dStack_640 = dStack_998;
      dStack_648 = dStack_9a0;
      uStack_650 = (ulong)ppppuVar11 & 0xffffffff;
      func_0x000107c414c8();
      func_0x000107c61180();
      if (ppppuVar12 == (undefined8 ****)0x0) {
        dVar16 = 0.0;
      }
      else {
        dVar16 = (double)(ulong)*(byte *)((long)ppppuVar12 + _DAT_11306a658);
        func_0x000107c61170();
      }
      func_0x000101556278(2,0,0);
      dStack_608 = dStack_998;
      dStack_610 = dStack_9a0;
      ppppuVar12 = (undefined8 ****)pppuStack_9a8;
      dStack_618 = dVar16;
      func_0x000107c414c8();
      func_0x000107c61180();
      func_0x000107c61170(ppppuVar7);
      puVar4 = puStack_9b0;
      if (ppppuVar12 != (undefined8 ****)0x0) {
        uVar8 = *(ulong *)((long)ppppuVar12 + _DAT_11306a660);
        dVar16 = (double)((ulong *)((long)ppppuVar12 + _DAT_11306a660))[1];
        func_0x000107c61434(dVar16);
        func_0x000107c61170(ppppuVar12);
        if (dVar16 != 0.0) {
          uVar3 = uVar8 & 0xffffffffffff;
          if (((ulong)dVar16 & 0x2000000000000000) != 0) {
            uVar3 = (ulong)dVar16 >> 0x38 & 0xf;
          }
          if (uVar3 == 0) {
            func_0x000107c6142c(dVar16);
          }
          else {
            func_0x000107c61434(dVar16);
            func_0x00010006c00c(0,0xc000000000000000);
            func_0x000107c6142c(dVar16);
            func_0x00010006c090(0,0xc000000000000000);
            func_0x000101597ae4(0,0,0,0);
            dStack_620 = dStack_998;
            dStack_628 = dStack_9a0;
            uStack_638 = uVar8;
            dStack_630 = dVar16;
          }
        }
      }
      dStack_7a8 = dStack_628;
      dStack_7b0 = dStack_630;
      dStack_798 = dStack_618;
      dStack_7a0 = dStack_620;
      dStack_788 = dStack_608;
      dStack_790 = dStack_610;
      dStack_7e8 = dStack_668;
      dStack_7f0 = dStack_670;
      dStack_7d8 = dStack_658;
      dStack_7e0 = dStack_660;
      dStack_7c8 = dStack_648;
      uStack_7d0 = uStack_650;
      uStack_7b8 = uStack_638;
      dStack_7c0 = dStack_640;
      uStack_808 = uStack_688;
      ppuStack_810 = ppuStack_690;
      dStack_7f8 = dStack_678;
      dStack_800 = dStack_680;
      dStack_6e8 = dStack_628;
      dStack_6f0 = dStack_630;
      dStack_6d8 = dStack_618;
      dStack_6e0 = dStack_620;
      dStack_6c8 = dStack_608;
      dStack_6d0 = dStack_610;
      dStack_728 = dStack_668;
      dStack_730 = dStack_670;
      dStack_718 = dStack_658;
      dStack_720 = dStack_660;
      dStack_708 = dStack_648;
      uStack_710 = uStack_650;
      uStack_6f8 = uStack_638;
      dStack_700 = dStack_640;
      uStack_748 = uStack_688;
      ppuStack_750 = ppuStack_690;
      dStack_738 = dStack_678;
      dStack_740 = dStack_680;
      func_0x0001034a25e8(&ppuStack_750);
      dStack_548 = dStack_6c8;
      dStack_550 = dStack_6d0;
      dStack_538 = dStack_6b8;
      dStack_540 = dStack_6c0;
      uStack_528 = uStack_6a8;
      uStack_527 = uStack_6a7;
      pppuStack_530 = pppuStack_6b0;
      uStack_520 = uStack_6a0;
      uStack_51f = uStack_69f;
      dStack_588 = dStack_708;
      uStack_590 = uStack_710;
      uStack_578 = uStack_6f8;
      dStack_580 = dStack_700;
      dStack_568 = dStack_6e8;
      dStack_570 = dStack_6f0;
      dStack_558 = dStack_6d8;
      dStack_560 = dStack_6e0;
      uStack_5c8 = uStack_748;
      ppuStack_5d0 = ppuStack_750;
      dStack_5b8 = dStack_738;
      dStack_5c0 = dStack_740;
      dStack_5a8 = dStack_728;
      dStack_5b0 = dStack_730;
      dStack_598 = dStack_718;
      dStack_5a0 = dStack_720;
      func_0x0001034a25f8(&ppuStack_5d0);
      dStack_3c8 = dStack_488;
      dStack_3d0 = dStack_490;
      dStack_3b8 = dStack_478;
      dStack_3c0 = dStack_480;
      pppuStack_3b0 = pppuStack_470;
      uStack_39f = CONCAT17(uStack_458,uStack_45f);
      dStack_408 = dStack_4c8;
      uStack_410 = uStack_4d0;
      uStack_3f8 = uStack_4b8;
      dStack_400 = dStack_4c0;
      dStack_3e8 = dStack_4a8;
      dStack_3f0 = dStack_4b0;
      dStack_3d8 = dStack_498;
      dStack_3e0 = dStack_4a0;
      uStack_448 = uStack_508;
      pppuStack_450 = (undefined8 ***)ppuStack_510;
      dStack_438 = dStack_4f8;
      dStack_440 = dStack_500;
      dStack_428 = dStack_4e8;
      dStack_430 = dStack_4f0;
      dStack_418 = dStack_4d8;
      dStack_420 = dStack_4e0;
      FUN_1034a2600(&ppuStack_810,&ppuStack_8d0);
      func_0x0001034d5958(&pppuStack_450,0x112f730c0,&UNK_10dbce2d0);
      dStack_488 = dStack_548;
      dStack_490 = dStack_550;
      dStack_478 = dStack_538;
      dStack_480 = dStack_540;
      uStack_468 = uStack_528;
      pppuStack_470 = pppuStack_530;
      uStack_45f = uStack_51f;
      uStack_458 = uStack_518;
      uStack_467 = uStack_527;
      uStack_460 = uStack_520;
      dStack_4c8 = dStack_588;
      uStack_4d0 = uStack_590;
      uStack_4b8 = uStack_578;
      dStack_4c0 = dStack_580;
      dStack_4a8 = dStack_568;
      dStack_4b0 = dStack_570;
      dStack_498 = dStack_558;
      dStack_4a0 = dStack_560;
      uStack_508 = uStack_5c8;
      ppuStack_510 = ppuStack_5d0;
      dStack_4f8 = dStack_5b8;
      dStack_500 = dStack_5c0;
      dStack_4e8 = dStack_5a8;
      dStack_4f0 = dStack_5b0;
      dStack_4d8 = dStack_598;
      dStack_4e0 = dStack_5a0;
      func_0x0001034a267c(&ppuStack_690);
      puStack_9b0 = puVar4;
    }
  }
LAB_1034d2620:
  puStack_9b0[0x11] = dStack_488;
  puStack_9b0[0x10] = dStack_490;
  puStack_9b0[0x13] = dStack_478;
  puStack_9b0[0x12] = dStack_480;
  puStack_9b0[0x15] = CONCAT71(uStack_467,uStack_468);
  puStack_9b0[0x14] = pppuStack_470;
  puStack_9b0[0x17] = CONCAT71(uStack_457,uStack_458);
  puStack_9b0[0x16] = CONCAT71(uStack_45f,uStack_460);
  puStack_9b0[9] = dStack_4c8;
  puStack_9b0[8] = uStack_4d0;
  puStack_9b0[0xb] = uStack_4b8;
  puStack_9b0[10] = dStack_4c0;
  puStack_9b0[0xd] = dStack_4a8;
  puStack_9b0[0xc] = dStack_4b0;
  puStack_9b0[0xf] = dStack_498;
  puStack_9b0[0xe] = dStack_4a0;
  puStack_9b0[1] = uStack_508;
  *puStack_9b0 = ppuStack_510;
  puStack_9b0[3] = dStack_4f8;
  puStack_9b0[2] = dStack_500;
  puStack_9b0[5] = dStack_4e8;
  puStack_9b0[4] = dStack_4f0;
  puStack_9b0[7] = dStack_4d8;
  puStack_9b0[6] = dStack_4e0;
  puStack_9b0[0x19] = 0xc000000000000000;
  puStack_9b0[0x18] = 0;
  return;
}



/* Entry: 1034d2d4c; end: 1034d2e4b;  */

void FUN_1034d2d4c(undefined8 *param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c3e560();
  if (param_2 <= 0.0) {
    uVar4 = 0;
    uVar5 = 0xf000000000000000;
  }
  else {
    func_0x000107c3e560(param_3);
    uVar4 = (ulong)(uint)param_2;
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar5 = 0xc000000000000000;
  }
  lVar3 = param_3;
  func_0x000107c43900();
  if (lVar3 < 1) {
    lVar3 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    lVar3 = param_3;
    func_0x000107c43900();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar6 = 0xc000000000000000;
  }
  lVar1 = param_3;
  func_0x000107c4adec();
  if (lVar1 < 1) {
    param_3 = 0;
    uVar2 = 0xf000000000000000;
  }
  else {
    func_0x000107c4adec();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar2 = 0xc000000000000000;
  }
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar4;
  param_1[3] = 0;
  param_1[4] = uVar5;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[8] = lVar3;
  param_1[9] = 0;
  param_1[10] = uVar6;
  return;
}



/* Entry: 1034d2e4c; end: 1034d583f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_1034d2e4c(undefined8 *****param_1,ulong param_2,ulong param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 ****param_8,
             ulong param_9,undefined8 param_10,byte param_11,undefined4 param_12,
             undefined8 *****param_13)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar23;
  long lVar24;
  undefined8 *****pppppuVar25;
  undefined8 *****pppppuVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  undefined8 ****ppppuVar27;
  long lVar28;
  code *pcVar29;
  code *pcVar30;
  undefined8 ****ppppuVar31;
  undefined8 ****ppppuVar32;
  ulong uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined8 ****ppppuStack_900;
  long lStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  undefined8 ****ppppuStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  undefined8 ****ppppuStack_8a8;
  undefined8 ****ppppuStack_8a0;
  undefined8 ****ppppuStack_898;
  undefined8 uStack_890;
  ulong uStack_888;
  undefined8 ****ppppuStack_880;
  undefined8 ****ppppuStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_860;
  long lStack_858;
  undefined8 ****ppppuStack_850;
  undefined8 ****ppppuStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 ****ppppuStack_830;
  undefined8 ****ppppuStack_828;
  undefined8 ****ppppuStack_820;
  undefined8 ****ppppuStack_818;
  undefined8 ****ppppuStack_810;
  undefined8 ****ppppuStack_808;
  undefined8 ****ppppuStack_7f0;
  undefined8 ****ppppuStack_7e8;
  undefined1 auStack_7e0 [312];
  undefined8 ***apppuStack_6a8 [4];
  ulong uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_640;
  undefined8 ****ppppuStack_638;
  undefined8 ****ppppuStack_630;
  long lStack_628;
  undefined8 ****ppppuStack_620;
  undefined8 ****ppppuStack_618;
  long lStack_610;
  undefined8 ****ppppuStack_608;
  undefined8 ****ppppuStack_600;
  ulong uStack_5f8;
  undefined8 ****ppppuStack_5f0;
  undefined8 ****ppppuStack_5e8;
  ulong uStack_5a0;
  undefined8 ****ppppuStack_598;
  undefined8 ****ppppuStack_590;
  undefined8 ****ppppuStack_570;
  undefined8 ****ppppuStack_568;
  undefined8 ****ppppuStack_560;
  undefined8 ****ppppuStack_558;
  undefined *puStack_550;
  ulong uStack_548;
  undefined1 auStack_540 [80];
  undefined1 auStack_4f0 [208];
  undefined1 auStack_420 [88];
  undefined8 ****ppppuStack_3c8;
  undefined8 ****ppppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 ****ppppuStack_390;
  undefined8 ****ppppuStack_388;
  undefined8 ****ppppuStack_380;
  undefined8 ****ppppuStack_378;
  ulong uStack_370;
  undefined8 ****ppppuStack_368;
  undefined8 ****ppppuStack_360;
  undefined8 ****ppppuStack_358;
  undefined8 ****ppppuStack_350;
  undefined8 ****ppppuStack_348;
  undefined8 ****ppppuStack_340;
  undefined8 ****ppppuStack_338;
  undefined8 ****ppppuStack_330;
  long lStack_328;
  undefined8 ****ppppuStack_320;
  undefined8 ****ppppuStack_318;
  ulong uStack_310;
  undefined8 ****ppppuStack_308;
  undefined8 ****ppppuStack_300;
  ulong uStack_2f8;
  undefined8 ****ppppuStack_2f0;
  undefined8 ****ppppuStack_2e8;
  ulong uStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  ulong uStack_2c8;
  undefined8 ****ppppuStack_2c0;
  undefined8 ****ppppuStack_2b8;
  long lStack_2b0;
  undefined8 ****ppppuStack_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ****ppppuStack_250;
  undefined8 ****ppppuStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ****ppppuStack_238;
  ulong uStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined8 ****ppppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ****ppppuStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined8 ****ppppuStack_1f0;
  long lStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 ****ppppuStack_1d8;
  ulong uStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  ulong uStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  ulong uStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined8 ****ppppuStack_190;
  ulong uStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  long lStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  long lStack_88;
  
  ppppuStack_818 = (undefined8 ****)CONCAT44(ppppuStack_818._4_4_,param_7);
  ppppuStack_848 = (undefined8 ****)CONCAT44(ppppuStack_848._4_4_,param_5);
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = 0x112d373d8;
  uStack_888 = param_2;
  ppppuStack_880 = (undefined8 ****)param_3;
  ppppuStack_878 = (undefined8 ****)param_4;
  uStack_840 = param_6;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar23 = (long)&ppppuStack_900 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_8b8 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar23 - extraout_x12;
  lStack_8b0 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar23 - extraout_x12_00;
  lStack_8c8 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar23 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar23 - extraout_x12_02;
  lStack_8f0 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar24 - extraout_x12_03;
  lStack_8f8 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar24 - extraout_x12_04;
  lStack_8e8 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar24 - extraout_x12_05;
  lVar14 = 0;
  lStack_8e0 = lVar24;
  func_0x000107c5eea4();
  lStack_860 = *(long *)(lVar14 + -8);
  lStack_858 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_860 + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_8c0 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar24 - extraout_x12_06;
  lStack_868 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar24 - extraout_x12_07;
  lVar14 = 0x112d3bc20;
  puVar20 = &UNK_10d904ef0;
  lStack_870 = lVar24;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  pppppuVar25 = (undefined8 *****)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  ppppuStack_8a0 = pppppuVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppuVar25 = (undefined8 *****)((long)pppppuVar25 - extraout_x12_08);
  ppppuStack_898 = pppppuVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppuVar25 = (undefined8 *****)((long)pppppuVar25 - extraout_x12_09);
  pppppuVar15 = (undefined8 *****)0x0;
  func_0x000107c5eec8();
  ppppuVar31 = pppppuVar15[-1];
  ppppuStack_810 = pppppuVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppuVar31[8]);
  pppppuVar26 = (undefined8 *****)((long)pppppuVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0))
  ;
  ppppuStack_900 = pppppuVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppuVar26 = (undefined8 *****)((long)pppppuVar26 - extraout_x12_10);
  ppppuStack_8a8 = pppppuVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppuVar26 = (undefined8 *****)((long)pppppuVar26 - extraout_x12_11);
  FUN_10355e938();
  pppppuVar22 = param_13;
  ppppuStack_558 = pppppuVar15;
  puStack_550 = puVar20;
  uStack_548 = param_3;
  if (param_13 == (undefined8 *****)0x0) {
    FUN_1034d62c4(0);
    func_0x000107c610f8();
    pppppuVar15 = param_1;
    func_0x000107c61174();
    pppppuVar22 = pppppuVar15;
    FUN_1034d6a10();
    func_0x000107c61170(pppppuVar15);
  }
  func_0x000107c61174(param_13);
  pppppuVar15 = param_1;
  func_0x000107c5b3d0();
  pppppuVar21 = param_1;
  ppppuStack_820 = pppppuVar15;
  func_0x000107c5c01c();
  pppppuVar15 = param_1;
  ppppuStack_828 = pppppuVar21;
  func_0x000107c4cc5c();
  if (((long)param_8 - 5U < 2) || (param_8 == (undefined8 ****)0x18)) {
    uStack_890 = 0;
    uVar35 = 2;
  }
  else if (param_8 == (undefined8 ****)0x0) {
    uStack_890 = 1;
    uVar35 = 1;
  }
  else {
    uVar35 = 0;
    uStack_890 = 1;
  }
  pppppuVar21 = param_1;
  lStack_8d0 = lVar23;
  ppppuStack_830 = pppppuVar15;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (pppppuVar21 != (undefined8 *****)0x0) {
    pppppuVar15 = pppppuVar21;
    ppppuStack_850 = param_8;
    func_0x000107c5faec();
    func_0x000107c61170(pppppuVar21);
    uVar33 = (ulong)pppppuVar15 & 0xffffffffffff;
    if (((ulong)puVar20 & 0x2000000000000000) != 0) {
      uVar33 = (ulong)puVar20 >> 0x38 & 0xf;
    }
    if (uVar33 == 0) {
      func_0x000107c6142c(puVar20);
      param_8 = ppppuStack_850;
    }
    else {
      func_0x000107c61434(puVar20);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(puVar20);
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10355c604(pppppuVar15,puVar20,0,0xc000000000000000);
      param_8 = ppppuStack_850;
    }
  }
  FUN_10355dc14(uVar35,1);
  func_0x000107c49a64(param_1);
  func_0x00010355caac();
  pppppuVar15 = param_1;
  func_0x000107c5b3d0();
  if ((long)pppppuVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d4598);
    (*pcVar29)();
  }
  func_0x00010355d210();
  pppppuVar15 = param_1;
  func_0x000107c5c01c();
  if ((long)pppppuVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d459c);
    (*pcVar29)();
  }
  func_0x00010355d2bc();
  pppppuVar15 = param_1;
  func_0x000107c4cc5c();
  if ((long)pppppuVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45a0);
    (*pcVar29)();
  }
  func_0x00010355d368();
  pppppuVar15 = param_1;
  func_0x000107c41e54();
  if ((long)pppppuVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45a4);
    (*pcVar29)();
  }
  func_0x00010355d164();
  func_0x00010355c6c0(*(undefined8 *)((long)pppppuVar22 + _DAT_112f73330),0,0xc000000000000000);
  dVar36 = *(double *)((long)pppppuVar22 + _DAT_112f73338) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45a8);
    (*pcVar29)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45ac);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45b0);
    (*pcVar29)();
  }
  func_0x00010355c61c((long)dVar36,0,0xc000000000000000);
  dVar36 = *(double *)((long)pppppuVar22 + _DAT_112f73340) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45b4);
    (*pcVar29)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45b8);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45bc);
    (*pcVar29)();
  }
  func_0x00010355d56c((long)dVar36,0,0xc000000000000000);
  dVar36 = *(double *)((long)pppppuVar22 + _DAT_112f73348) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45c0);
    (*pcVar29)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45c4);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45c8);
    (*pcVar29)();
  }
  func_0x00010355d414((long)dVar36,0,0xc000000000000000);
  dVar36 = *(double *)((long)pppppuVar22 + _DAT_112f73350) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45cc);
    (*pcVar29)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45d0);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45d4);
    (*pcVar29)();
  }
  func_0x00010355d4c0((long)dVar36,0,0xc000000000000000);
  dVar36 = *(double *)((long)pppppuVar22 + _DAT_112f73358) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45d8);
    (*pcVar29)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45dc);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45e0);
    (*pcVar29)();
  }
  func_0x00010355d6c4((long)dVar36,0,0xc000000000000000);
  pppppuVar15 = (undefined8 *****)(*(double *)((long)pppppuVar22 + _DAT_112f73360) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS((double)pppppuVar15)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45e4);
    (*pcVar29)();
  }
  if ((double)pppppuVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45e8);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= (double)pppppuVar15) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d45ec);
    (*pcVar29)();
  }
  bVar10 = (undefined8 *****)ppppuStack_830 != (undefined8 *****)0x0;
  bVar11 = (undefined8 *****)ppppuStack_828 != (undefined8 *****)0x0;
  bVar12 = (undefined8 *****)ppppuStack_820 != (undefined8 *****)0x0;
  ppppuStack_8d8 = pppppuVar22;
  ppppuStack_850 = param_1;
  func_0x00010355d618((long)(double)pppppuVar15,0,0xc000000000000000);
  pppppuVar21 = (undefined8 *****)ppppuStack_850;
  func_0x00010355c764(bVar12,0,0xc000000000000000);
  func_0x00010355c80c(bVar11,0,0xc000000000000000);
  func_0x00010355c8b4(bVar10,0,0xc000000000000000);
  func_0x000107c5e8bc(pppppuVar21);
  func_0x00010355ca04();
  func_0x000107c5e77c(pppppuVar21);
  func_0x00010355c95c();
  func_0x000107c4535c(pppppuVar21);
  pppppuVar22 = (undefined8 *****)0x0;
  func_0x00010355cb54();
  pppppuVar16 = pppppuVar21;
  func_0x000107c4d6d8();
  func_0x000107c61180();
  if (pppppuVar16 != (undefined8 *****)0x0) {
    pppppuVar17 = pppppuVar16;
    func_0x000107c5faec();
    func_0x000107c61170(pppppuVar16);
    func_0x000107c5eea8(pppppuVar25,pppppuVar17,pppppuVar22);
    func_0x000107c6142c(pppppuVar22);
    pppppuVar16 = pppppuVar25;
    (*(code *)ppppuVar31[6])(pppppuVar25,1,ppppuStack_810);
    pppppuVar22 = (undefined8 *****)ppppuStack_810;
    if ((int)pppppuVar16 == 1) {
      pppppuVar22 = (undefined8 *****)0x112d3bc20;
      func_0x0001034d5958(pppppuVar25,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      pppppuVar16 = pppppuVar26;
      (*(code *)ppppuVar31[4])(pppppuVar26,pppppuVar25,ppppuStack_810);
      func_0x000107c5eec0();
      ppppuStack_250 = pppppuVar16;
      ppppuStack_248 = pppppuVar25;
      func_0x000107c5eec0();
      func_0x000100e37074(&ppppuStack_250,&ppppuStack_240);
      func_0x00010355dca0();
      (*(code *)ppppuVar31[1])(pppppuVar26);
    }
  }
  pppppuVar25 = pppppuVar21;
  func_0x000107c4b2c4();
  func_0x000107c61180();
  ppppuVar27 = ppppuStack_880;
  uVar33 = uStack_888;
  pppppuVar26 = pppppuVar22;
  if (pppppuVar25 != (undefined8 *****)0x0) {
    pppppuVar16 = pppppuVar25;
    func_0x000107c5faec();
    pppppuVar26 = pppppuVar22;
    func_0x000107c61170(pppppuVar25);
    uVar3 = (ulong)pppppuVar16 & 0xffffffffffff;
    if (((ulong)pppppuVar22 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)pppppuVar22 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      func_0x000107c6142c(pppppuVar22);
    }
    else {
      func_0x000107c61434(pppppuVar22);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(pppppuVar22);
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10355df2c(pppppuVar16,pppppuVar22,0,0xc000000000000000);
      pppppuVar26 = pppppuVar22;
    }
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c4cfc8();
  func_0x000107c61180();
  if (pppppuVar22 != (undefined8 *****)0x0) {
    pppppuVar25 = pppppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(pppppuVar22);
    pppppuVar22 = (undefined8 *****)ppppuStack_898;
    func_0x000107c5eea8(ppppuStack_898,pppppuVar25,pppppuVar26);
    func_0x000107c6142c(pppppuVar26);
    pppppuVar25 = pppppuVar22;
    (*(code *)ppppuVar31[6])(pppppuVar22,1,ppppuStack_810);
    ppppuVar8 = ppppuStack_810;
    ppppuVar32 = ppppuStack_8a8;
    if ((int)pppppuVar25 == 1) {
      func_0x0001034d5958(pppppuVar22,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      pppppuVar25 = (undefined8 *****)ppppuStack_8a8;
      (*(code *)ppppuVar31[4])(ppppuStack_8a8,pppppuVar22,ppppuStack_810);
      func_0x000107c5eec0();
      ppppuStack_250 = pppppuVar25;
      ppppuStack_248 = pppppuVar22;
      func_0x000107c5eec0();
      func_0x000100e37074(&ppppuStack_250,&ppppuStack_240);
      FUN_10355de94();
      (*(code *)ppppuVar31[1])(ppppuVar32,ppppuVar8);
    }
  }
  func_0x000107c4b428(pppppuVar21);
  FUN_10349f860();
  FUN_10355dfe4();
  if (ppppuVar27 != (undefined8 ****)0x0) {
    uVar3 = uVar33 & 0xffffffffffff;
    if (((ulong)ppppuVar27 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)ppppuVar27 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      func_0x000107c61438(ppppuVar27,2);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(ppppuVar27);
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10355e070(uVar33,ppppuVar27,0,0xc000000000000000);
    }
  }
  if ((int)uStack_890 != 0) {
    func_0x000107c49af4(pppppuVar21);
    func_0x00010355e718();
  }
  FUN_1034d1f08(auStack_540,ppppuStack_878,(ulong)ppppuStack_848 & 0xffffffff,uStack_840,
                (ulong)ppppuStack_818 & 0xffffffff);
  FUN_10355e128(auStack_540);
  if ((long)param_8 < 0x1d) {
    if (param_8 == (undefined8 ****)0x1) {
LAB_1034d39a8:
      uVar35 = 1;
    }
    else if (param_8 == (undefined8 ****)0x2) {
      uVar35 = 9;
    }
    else {
      if (param_8 == (undefined8 ****)0xb) goto LAB_1034d39a8;
LAB_1034d39d8:
      uVar35 = 0;
    }
  }
  else if (param_8 == (undefined8 ****)0x24) {
    uVar35 = 3;
  }
  else if (param_8 == (undefined8 ****)0x1f) {
    uVar35 = 2;
  }
  else {
    if (param_8 != (undefined8 ****)0x1d) goto LAB_1034d39d8;
    uVar35 = 4;
  }
  func_0x00010355e210(uVar35,1);
  if (param_9 != 2) {
    param_9 = (ulong)(param_9 == 1);
  }
  pppppuVar22 = (undefined8 *****)0x1;
  func_0x00010355e29c(param_9);
  if ((param_11 & 1) != 0) {
    pppppuVar22 = pppppuVar21;
    func_0x000107c5b400();
    if ((long)pppppuVar22 < 0) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57f8);
      (*pcVar29)();
    }
    pppppuVar22 = (undefined8 *****)0x0;
    FUN_10355dd38();
    FUN_1034a23d4(param_10);
    func_0x00010355e3b4();
  }
  pppppuVar25 = pppppuVar21;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (pppppuVar25 == (undefined8 *****)0x0) {
LAB_1034d3aec:
    pppppuVar25 = pppppuVar21;
    func_0x000107c4d6d0();
    func_0x000107c61180();
    pppppuVar16 = pppppuVar22;
    if (pppppuVar25 != (undefined8 *****)0x0) {
LAB_1034d3b00:
      pppppuVar26 = pppppuVar25;
      func_0x000107c5faec();
      pppppuVar22 = pppppuVar16;
      func_0x000107c61170(pppppuVar25);
      uVar33 = (ulong)pppppuVar26 & 0xffffffffffff;
      if (((ulong)pppppuVar16 & 0x2000000000000000) != 0) {
        uVar33 = (ulong)pppppuVar16 >> 0x38 & 0xf;
      }
      if (uVar33 == 0) {
        func_0x000107c6142c(pppppuVar16);
      }
      else {
        pppppuVar25 = pppppuVar16;
        FUN_1034d1cbc(pppppuVar26);
        pppppuVar22 = pppppuVar25;
        func_0x000107c6142c(pppppuVar16);
        if ((ulong)pppppuVar25 >> 0x3c < 0xf) {
          FUN_10355cbf8(pppppuVar26);
          pppppuVar22 = pppppuVar25;
        }
      }
    }
  }
  else {
    pppppuVar26 = pppppuVar25;
    func_0x000107c4f8e8();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar25);
    if (pppppuVar26 == (undefined8 *****)0x0) goto LAB_1034d3aec;
    pppppuVar25 = pppppuVar26;
    func_0x000107c5faec();
    pppppuVar16 = pppppuVar22;
    func_0x000107c61170(pppppuVar26);
    func_0x000107c6142c(pppppuVar22);
    uVar33 = (ulong)pppppuVar25 & 0xffffffffffff;
    if (((ulong)pppppuVar22 & 0x2000000000000000) != 0) {
      uVar33 = (ulong)pppppuVar22 >> 0x38 & 0xf;
    }
    pppppuVar22 = pppppuVar16;
    if (uVar33 == 0) goto LAB_1034d3aec;
    pppppuVar26 = pppppuVar21;
    func_0x000107c5d2d8();
    func_0x000107c61180();
    pppppuVar22 = pppppuVar16;
    if (pppppuVar26 != (undefined8 *****)0x0) {
      pppppuVar25 = pppppuVar26;
      func_0x000107c4f8e8();
      func_0x000107c61180();
      func_0x000107c61170(pppppuVar26);
      pppppuVar22 = pppppuVar16;
      if (pppppuVar25 == (undefined8 *****)0x0) goto LAB_1034d3b70;
      goto LAB_1034d3b00;
    }
  }
LAB_1034d3b70:
  pppppuVar26 = pppppuVar21;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  pppppuVar25 = pppppuVar22;
  if (pppppuVar26 != (undefined8 *****)0x0) {
    pppppuVar16 = pppppuVar26;
    func_0x000107c427ac();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar26);
    pppppuVar25 = pppppuVar22;
    if (pppppuVar16 != (undefined8 *****)0x0) {
      pppppuVar26 = pppppuVar16;
      func_0x000107c5faec();
      pppppuVar25 = pppppuVar22;
      func_0x000107c61170(pppppuVar16);
      uVar33 = (ulong)pppppuVar26 & 0xffffffffffff;
      if (((ulong)pppppuVar22 & 0x2000000000000000) != 0) {
        uVar33 = (ulong)pppppuVar22 >> 0x38 & 0xf;
      }
      if (uVar33 == 0) {
        func_0x000107c6142c(pppppuVar22);
      }
      else {
        pppppuVar16 = pppppuVar22;
        FUN_1034d1cbc(pppppuVar26);
        pppppuVar25 = pppppuVar16;
        func_0x000107c6142c(pppppuVar22);
        if ((ulong)pppppuVar16 >> 0x3c < 0xf) {
          func_0x00010355cc88(pppppuVar26);
          pppppuVar25 = pppppuVar16;
        }
      }
    }
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (pppppuVar22 != (undefined8 *****)0x0) {
    pppppuVar26 = pppppuVar22;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar22);
    if (pppppuVar26 != (undefined8 *****)0x0) {
      pppppuVar16 = pppppuVar26;
      func_0x000107c5faec(pppppuVar26);
      func_0x000107c61170(pppppuVar26);
      pppppuVar22 = (undefined8 *****)ppppuStack_8a0;
      func_0x000107c5eea8(ppppuStack_8a0,pppppuVar16,pppppuVar25);
      func_0x000107c6142c(pppppuVar25);
      pppppuVar26 = pppppuVar22;
      (*(code *)ppppuVar31[6])(pppppuVar22,1,ppppuStack_810);
      pppppuVar25 = (undefined8 *****)ppppuStack_810;
      ppppuVar27 = ppppuStack_900;
      if ((int)pppppuVar26 == 1) {
        pppppuVar25 = (undefined8 *****)0x112d3bc20;
        func_0x0001034d5958(pppppuVar22,0x112d3bc20,&UNK_10d904ef0);
      }
      else {
        pppppuVar26 = (undefined8 *****)ppppuStack_900;
        (*(code *)ppppuVar31[4])(ppppuStack_900,pppppuVar22,ppppuStack_810);
        func_0x000107c5eec0();
        ppppuStack_250 = pppppuVar26;
        ppppuStack_248 = pppppuVar22;
        func_0x000107c5eec0();
        func_0x000100e37074(&ppppuStack_250,&ppppuStack_240);
        func_0x00010355cd18();
        (*(code *)ppppuVar31[1])(ppppuVar27);
      }
    }
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  pppppuVar26 = pppppuVar25;
  if (pppppuVar22 != (undefined8 *****)0x0) {
    pppppuVar16 = pppppuVar22;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar22);
    pppppuVar26 = pppppuVar25;
    if (pppppuVar16 != (undefined8 *****)0x0) {
      pppppuVar22 = pppppuVar16;
      func_0x000107c5faec();
      pppppuVar26 = pppppuVar25;
      func_0x000107c61170(pppppuVar16);
      uVar33 = (ulong)pppppuVar22 & 0xffffffffffff;
      if (((ulong)pppppuVar25 & 0x2000000000000000) != 0) {
        uVar33 = (ulong)pppppuVar25 >> 0x38 & 0xf;
      }
      if (uVar33 == 0) {
        func_0x000107c6142c(pppppuVar25);
      }
      else {
        pppppuVar16 = pppppuVar25;
        FUN_1034d1cbc(pppppuVar22);
        pppppuVar26 = pppppuVar16;
        func_0x000107c6142c(pppppuVar25);
        if ((ulong)pppppuVar16 >> 0x3c < 0xf) {
          func_0x00010355cda8(pppppuVar22);
          pppppuVar26 = pppppuVar16;
        }
      }
    }
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c427a0();
  func_0x000107c61180();
  if (pppppuVar22 != (undefined8 *****)0x0) {
    pppppuVar25 = pppppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(pppppuVar22);
    uVar33 = (ulong)pppppuVar25 & 0xffffffffffff;
    if (((ulong)pppppuVar26 & 0x2000000000000000) != 0) {
      uVar33 = (ulong)pppppuVar26 >> 0x38 & 0xf;
    }
    if (uVar33 == 0) {
      func_0x000107c6142c(pppppuVar26);
    }
    else {
      pppppuVar22 = pppppuVar26;
      FUN_1034d1cbc(pppppuVar25);
      func_0x000107c6142c(pppppuVar26);
      if ((ulong)pppppuVar22 >> 0x3c < 0xf) {
        FUN_10355cf90(pppppuVar25,pppppuVar22);
      }
    }
  }
  func_0x000107c5e450(pppppuVar21);
  uVar35 = 0;
  FUN_10355d028();
  pppppuVar22 = pppppuVar21;
  func_0x000107c3e318();
  func_0x000107c61180();
  if (pppppuVar22 == (undefined8 *****)0x0) {
    pppppuVar25 = (undefined8 *****)0x0;
    uVar35 = 0;
  }
  else {
    pppppuVar25 = pppppuVar22;
    func_0x000107c5faec();
    func_0x000107c61170(pppppuVar22);
  }
  FUN_10349f548(pppppuVar25,uVar35);
  FUN_10355d0d8();
  pppppuVar22 = pppppuVar21;
  func_0x000107c3e2f0();
  func_0x000107c61180();
  if (pppppuVar22 != (undefined8 *****)0x0) {
    pppppuVar25 = pppppuVar21;
    func_0x000107c3e318();
    func_0x000107c61180();
    if (pppppuVar25 == (undefined8 *****)0x0) {
      pppppuVar26 = (undefined8 *****)0x0;
      uVar35 = 0;
    }
    else {
      pppppuVar26 = pppppuVar25;
      func_0x000107c5faec();
      func_0x000107c61170(pppppuVar25);
    }
    FUN_1034d2078(auStack_4f0,pppppuVar22,pppppuVar26,uVar35);
    func_0x000107c6142c(uVar35);
    FUN_10355ce38(auStack_4f0);
    func_0x000107c61170(pppppuVar22);
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c5d298();
  uVar35 = 2;
  if (pppppuVar22 != (undefined8 *****)0x1) {
    uVar35 = 0;
  }
  if (pppppuVar22 == (undefined8 *****)0x0) {
    uVar35 = 1;
  }
  FUN_10355d770(uVar35,1);
  pppppuVar22 = pppppuVar21;
  func_0x000107c43684();
  func_0x000107c61180();
  if (pppppuVar22 != (undefined8 *****)0x0) {
    ppppuStack_808 = (undefined8 *****)0xc000000000000000;
    ppppuStack_810 = (undefined8 *****)0x0;
    ppppuStack_238 = (undefined8 *****)0xc000000000000000;
    ppppuStack_240 = (undefined8 *****)0x0;
    uStack_230 = 2;
    ppppuStack_220 = (undefined8 ****)0x0;
    ppppuStack_228 = (undefined8 *****)0x0;
    ppppuStack_210 = (undefined8 *****)0x0;
    ppppuStack_218 = (undefined8 *****)0x0;
    ppppuStack_200 = (undefined8 *****)0x0;
    ppppuStack_208 = (undefined8 *****)0x0;
    pppppuVar15 = pppppuVar22;
    func_0x000107c49da0();
    pppppuVar26 = (undefined8 *****)ppppuStack_228;
    func_0x000101556278(uStack_230,ppppuStack_228,ppppuStack_220);
    ppppuStack_220 = ppppuStack_808;
    ppppuStack_228 = ppppuStack_810;
    pppppuVar25 = pppppuVar22;
    uStack_230 = (ulong)pppppuVar15 & 0xffffffff;
    func_0x000107c4368c();
    func_0x000107c61180();
    if (pppppuVar25 == (undefined8 *****)0x0) {
      pppppuVar15 = (undefined8 *****)0x0;
      pppppuVar26 = (undefined8 *****)0x0;
    }
    else {
      pppppuVar15 = pppppuVar25;
      func_0x000107c5faec();
      func_0x000107c61170(pppppuVar25);
    }
    FUN_1034c76a8();
    ppppuStack_248 = (undefined8 ****)CONCAT71(ppppuStack_248._1_7_,(char)pppppuVar26);
    pppppuVar25 = pppppuVar22;
    ppppuStack_250 = pppppuVar15;
    func_0x000107c43688();
    func_0x000107c61180();
    if (pppppuVar25 != (undefined8 *****)0x0) {
      pppppuVar15 = pppppuVar25;
      func_0x000107c5faec();
      func_0x000107c61170(pppppuVar25);
      uVar33 = (ulong)pppppuVar15 & 0xffffffffffff;
      if (((ulong)pppppuVar26 & 0x2000000000000000) != 0) {
        uVar33 = (ulong)pppppuVar26 >> 0x38 & 0xf;
      }
      if (uVar33 == 0) {
        func_0x000107c6142c(pppppuVar26);
      }
      else {
        func_0x000107c61434(pppppuVar26);
        func_0x00010006c00c(0,0xc000000000000000);
        func_0x000107c6142c(pppppuVar26);
        func_0x00010006c090(0,0xc000000000000000);
        func_0x000101597ae4(ppppuStack_218,ppppuStack_210,ppppuStack_208,ppppuStack_200);
        ppppuStack_200 = ppppuStack_808;
        ppppuStack_208 = ppppuStack_810;
        ppppuStack_218 = pppppuVar15;
        ppppuStack_210 = pppppuVar26;
      }
    }
    ppppuStack_b8 = ppppuStack_228;
    uStack_c0 = uStack_230;
    ppppuStack_a8 = ppppuStack_218;
    ppppuStack_b0 = ppppuStack_220;
    ppppuStack_98 = ppppuStack_208;
    ppppuStack_a0 = ppppuStack_210;
    ppppuStack_90 = ppppuStack_200;
    ppppuStack_d8 = ppppuStack_248;
    ppppuStack_e0 = ppppuStack_250;
    ppppuStack_c8 = ppppuStack_238;
    ppppuStack_d0 = ppppuStack_240;
    pppppuVar15 = (undefined8 *****)ppppuStack_250;
    func_0x0001034d0a3c(&ppppuStack_e0,&ppppuStack_390);
    func_0x00010355da64(&ppppuStack_e0);
    func_0x000107c61170(pppppuVar22);
    func_0x0001034d0a78(&ppppuStack_250);
  }
  func_0x000107c43650(pppppuVar21);
  if (0.0 <= (double)pppppuVar15) {
    func_0x000107c43650(pppppuVar21);
    pppppuVar15 = (undefined8 *****)((double)pppppuVar15 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS((double)pppppuVar15)) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57fc);
      (*pcVar29)();
    }
    if ((double)pppppuVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5800);
      (*pcVar29)();
    }
    if (9.223372036854776e+18 <= (double)pppppuVar15) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5808);
      (*pcVar29)();
    }
    func_0x00010355d8a8((long)(double)pppppuVar15,0,0xc000000000000000);
  }
  func_0x000107c43608(pppppuVar21);
  if (0.0 <= (double)pppppuVar15) {
    func_0x000107c43608(pppppuVar21);
    pppppuVar15 = (undefined8 *****)((double)pppppuVar15 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS((double)pppppuVar15)) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5804);
      (*pcVar29)();
    }
    if ((double)pppppuVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d580c);
      (*pcVar29)();
    }
    if (9.223372036854776e+18 <= (double)pppppuVar15) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5810);
      (*pcVar29)();
    }
    func_0x00010355d7fc((long)(double)pppppuVar15,0,0xc000000000000000);
  }
  FUN_1034d2d4c(auStack_420,pppppuVar21);
  func_0x00010355d954(auStack_420);
  func_0x000107c4a320(pppppuVar21);
  func_0x00010355dde4();
  func_0x00010355e328(3,1);
  pppppuVar22 = pppppuVar21;
  func_0x000107c45234();
  if ((undefined *)0x2 < (undefined *)((long)pppppuVar22 + -1)) {
    pppppuVar22 = (undefined8 *****)0x0;
  }
  func_0x00010355e440(pppppuVar22,1);
  pppppuVar22 = pppppuVar21;
  func_0x000107c4c884();
  func_0x000107c61180();
  if (pppppuVar22 != (undefined8 *****)0x0) {
    func_0x000107c436dc();
    func_0x000107c61170(pppppuVar22);
    FUN_10355e4cc(0,0xc000000000000000);
  }
  FUN_10355e628(&ppppuStack_3c8);
  ppppuVar31 = ppppuStack_3c0;
  ppppuStack_878 = ppppuStack_3c8;
  uStack_890 = uStack_3b0;
  uStack_888 = uStack_3b8;
  pppppuVar22 = pppppuVar21;
  func_0x000107c4485c();
  ppppuStack_880 = ppppuVar31;
  ppppuVar31 = (undefined8 ****)uStack_3a0;
  ppppuVar27 = (undefined8 ****)uStack_398;
  ppppuVar32 = (undefined8 ****)uStack_3a8;
  if ((int)pppppuVar22 != 0) {
    func_0x000101556278(uStack_3a8,uStack_3a0,uStack_398);
    ppppuVar31 = (undefined8 ****)0x0;
    ppppuVar27 = (undefined8 ****)0xc000000000000000;
    ppppuVar32 = (undefined8 ****)0x1;
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c40cc4();
  func_0x000107c61180();
  ppppuStack_8a8 = ppppuVar32;
  ppppuStack_8a0 = ppppuVar27;
  ppppuStack_898 = ppppuVar31;
  if (pppppuVar22 != (undefined8 *****)0x0) {
    uVar35 = 0;
    func_0x0001042d75d0(0);
    pppppuVar25 = pppppuVar22;
    func_0x000107c5fc54(pppppuVar22,uVar35);
    func_0x000107c61170(pppppuVar22);
    ppppuStack_818 = pppppuVar25;
    if ((ulong)pppppuVar25 >> 0x3e == 0) {
      pppppuVar22 = *(undefined8 ******)(((ulong)pppppuVar25 & 0xffffffffffffff8) + 0x10);
      if (pppppuVar22 == (undefined8 *****)0x0) {
LAB_1034d4650:
        func_0x000107c6142c(ppppuStack_818);
      }
      else {
LAB_1034d4318:
        ppppuStack_250 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
        ppppuStack_7e8 = ppppuStack_878;
        func_0x0001034d9298(0,(ulong)pppppuVar22 & ((long)pppppuVar22 >> 0x3f ^ 0xffffffffffffffffU)
                            ,0);
        if ((long)pppppuVar22 < 0) {
                    /* WARNING: Does not return */
          pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5814);
          (*pcVar29)();
        }
        pppppuVar15 = (undefined8 *****)0x0;
        uVar33 = (ulong)ppppuStack_818 & 0xc000000000000001;
        ppppuStack_808 = (undefined8 *****)0xc000000000000000;
        ppppuStack_810 = (undefined8 *****)0x0;
        pppppuVar25 = (undefined8 *****)ppppuStack_818;
        do {
          ppppuVar31 = ppppuStack_250;
          if (uVar33 == 0) {
            lVar14 = *(long *)((long)pppppuVar25[(long)((long)pppppuVar15 + 4)] + _DAT_11306bf80);
            uVar34 = *(undefined4 *)
                      ((long)pppppuVar25[(long)((long)pppppuVar15 + 4)] + _DAT_11306bf88);
            if (lVar14 < 5) {
              if (lVar14 < 3) {
                ppppuVar27 = (undefined8 ****)0x1;
                if (lVar14 == 1) goto LAB_1034d44f8;
                if (lVar14 == 2) goto LAB_1034d445c;
              }
              else {
                if (lVar14 == 3) goto LAB_1034d44c4;
                if (lVar14 == 4) goto LAB_1034d44bc;
              }
            }
            else if (lVar14 < 7) {
              if (lVar14 == 5) goto LAB_1034d44e4;
              if (lVar14 == 6) goto LAB_1034d44dc;
            }
            else {
              if (lVar14 == 7) goto LAB_1034d449c;
              if (lVar14 == 8) goto LAB_1034d44a4;
              if (lVar14 == 9) goto LAB_1034d4418;
            }
            ppppuVar27 = (undefined8 ****)0x0;
          }
          else {
            pppppuVar26 = pppppuVar15;
            func_0x000102a28c58(pppppuVar15,pppppuVar25);
            lVar14 = *(long *)((long)pppppuVar26 + _DAT_11306bf80);
            uVar34 = *(undefined4 *)((long)pppppuVar26 + _DAT_11306bf88);
            func_0x000107c615e8();
            ppppuVar27 = (undefined8 ****)0x0;
            pppppuVar25 = (undefined8 *****)ppppuStack_818;
            if (lVar14 < 5) {
              if (lVar14 < 3) {
                if (lVar14 == 1) {
                  ppppuVar27 = (undefined8 ****)0x1;
                }
                else if (lVar14 == 2) {
LAB_1034d445c:
                  ppppuVar27 = (undefined8 ****)0x2;
                }
              }
              else if (lVar14 == 3) {
LAB_1034d44c4:
                ppppuVar27 = (undefined8 ****)0x3;
              }
              else if (lVar14 == 4) {
LAB_1034d44bc:
                ppppuVar27 = (undefined8 ****)0x4;
              }
            }
            else if (lVar14 < 7) {
              if (lVar14 == 5) {
LAB_1034d44e4:
                ppppuVar27 = (undefined8 ****)0x5;
              }
              else if (lVar14 == 6) {
LAB_1034d44dc:
                ppppuVar27 = (undefined8 ****)0x6;
              }
            }
            else if (lVar14 == 7) {
LAB_1034d449c:
              ppppuVar27 = (undefined8 ****)0x7;
            }
            else if (lVar14 == 8) {
LAB_1034d44a4:
              ppppuVar27 = (undefined8 ****)0x8;
            }
            else if (lVar14 == 9) {
LAB_1034d4418:
              ppppuVar27 = (undefined8 ****)0x9;
            }
          }
LAB_1034d44f8:
          ppppuVar32 = (undefined8 ****)ppppuVar31[2];
          ppppuStack_250 = ppppuVar31;
          if ((undefined8 ****)((ulong)ppppuVar31[3] >> 1) <= ppppuVar32) {
            func_0x0001034d9298((undefined8 ****)0x1 < ppppuVar31[3],
                                (undefined8 ****)((long)ppppuVar32 + 1U),1);
            pppppuVar25 = (undefined8 *****)ppppuStack_818;
          }
          ppppuStack_250[2] = (undefined8 ****)((long)ppppuVar32 + 1U);
          ppppuStack_250[(long)ppppuVar32 * 4 + 4] = ppppuVar27;
          pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
          *(undefined1 *)(ppppuStack_250 + (long)ppppuVar32 * 4 + 5) = 1;
          *(undefined4 *)((long)ppppuStack_250 + (long)ppppuVar32 * 0x20 + 0x2c) = uVar34;
          ppppuStack_250[(long)ppppuVar32 * 4 + 7] = ppppuStack_808;
          ppppuStack_250[(long)ppppuVar32 * 4 + 6] = ppppuStack_810;
        } while (pppppuVar22 != pppppuVar15);
        pppppuVar15 = (undefined8 *****)ppppuStack_810;
        ppppuStack_878 = ppppuStack_250;
        func_0x000107c6142c(pppppuVar25);
        func_0x0001034d5958(&ppppuStack_7e8,0x112f73318,&UNK_10dbcede0);
        ppppuVar31 = ppppuStack_898;
        ppppuVar27 = ppppuStack_8a0;
        ppppuVar32 = ppppuStack_8a8;
        pppppuVar21 = (undefined8 *****)ppppuStack_850;
      }
    }
    else {
      pppppuVar22 = (undefined8 *****)((ulong)pppppuVar25 & 0xffffffffffffff8);
      if ((undefined8 *****)0x7fffffffffffffff < pppppuVar25) {
        pppppuVar22 = pppppuVar25;
      }
      pppppuVar25 = pppppuVar22;
      func_0x000107c60480();
      if (pppppuVar25 == (undefined8 *****)0x0) goto LAB_1034d4650;
      func_0x000107c60480();
      ppppuStack_7e8 = ppppuStack_878;
      if (pppppuVar22 != (undefined8 *****)0x0) goto LAB_1034d4318;
      func_0x000107c6142c(ppppuStack_818);
      func_0x0001034d5958(&ppppuStack_7e8,0x112f73318,&UNK_10dbcede0);
      ppppuStack_878 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  pppppuVar22 = pppppuVar21;
  func_0x000107c5aac0();
  func_0x000107c61180();
  if (pppppuVar22 == (undefined8 *****)0x0) goto LAB_1034d4914;
  uVar35 = 0;
  func_0x0001042d857c(0);
  pppppuVar25 = pppppuVar22;
  func_0x000107c5fc54(pppppuVar22,uVar35);
  func_0x000107c61170(pppppuVar22);
  ppppuStack_818 = pppppuVar25;
  if ((ulong)pppppuVar25 >> 0x3e == 0) {
    pppppuVar22 = *(undefined8 ******)(((ulong)pppppuVar25 & 0xffffffffffffff8) + 0x10);
    if (pppppuVar22 == (undefined8 *****)0x0) {
LAB_1034d4908:
      func_0x000107c6142c(ppppuStack_818);
      goto LAB_1034d4914;
    }
    ppppuStack_7f0 = ppppuStack_3c0;
  }
  else {
    pppppuVar22 = (undefined8 *****)((ulong)pppppuVar25 & 0xffffffffffffff8);
    if ((undefined8 *****)0x7fffffffffffffff < pppppuVar25) {
      pppppuVar22 = pppppuVar25;
    }
    pppppuVar25 = pppppuVar22;
    func_0x000107c60480();
    if (pppppuVar25 == (undefined8 *****)0x0) goto LAB_1034d4908;
    func_0x000107c60480();
    ppppuStack_7f0 = ppppuStack_3c0;
    if (pppppuVar22 == (undefined8 *****)0x0) {
      func_0x000107c6142c(ppppuStack_818);
      func_0x0001034d5958(&ppppuStack_7f0,0x112f73310,&UNK_10dbcedd8);
      ppppuStack_880 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1034d4914;
    }
  }
  ppppuStack_250 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001034d9264(0,(ulong)pppppuVar22 & ((long)pppppuVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)pppppuVar22 < 0) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5818);
    (*pcVar29)();
  }
  pppppuVar15 = (undefined8 *****)0x0;
  uVar33 = (ulong)ppppuStack_818 & 0xc000000000000001;
  ppppuStack_808 = (undefined8 *****)0xc000000000000000;
  ppppuStack_810 = (undefined8 *****)0x0;
  pppppuVar25 = (undefined8 *****)ppppuStack_818;
  do {
    ppppuVar31 = ppppuStack_250;
    if (uVar33 == 0) {
      lVar14 = *(long *)((long)pppppuVar25[(long)((long)pppppuVar15 + 4)] + _DAT_11306c008);
      uVar34 = *(undefined4 *)((long)pppppuVar25[(long)((long)pppppuVar15 + 4)] + _DAT_11306c010);
      if (lVar14 < 3) {
        ppppuVar27 = (undefined8 ****)0x1;
        if (lVar14 == 1) goto LAB_1034d4810;
        if (lVar14 == 2) goto LAB_1034d47d8;
      }
      else {
        if (lVar14 == 3) goto LAB_1034d47e8;
        if (lVar14 == 4) goto LAB_1034d47f4;
        if (lVar14 == 5) goto LAB_1034d47a4;
      }
      ppppuVar27 = (undefined8 ****)0x0;
    }
    else {
      pppppuVar26 = pppppuVar15;
      FUN_1034d6874(pppppuVar15,pppppuVar25);
      lVar14 = *(long *)((long)pppppuVar26 + _DAT_11306c008);
      uVar34 = *(undefined4 *)((long)pppppuVar26 + _DAT_11306c010);
      func_0x000107c615e8();
      ppppuVar27 = (undefined8 ****)0x0;
      pppppuVar25 = (undefined8 *****)ppppuStack_818;
      if (lVar14 < 3) {
        if (lVar14 == 1) {
          ppppuVar27 = (undefined8 ****)0x1;
        }
        else if (lVar14 == 2) {
LAB_1034d47d8:
          ppppuVar27 = (undefined8 ****)0x2;
        }
      }
      else if (lVar14 == 3) {
LAB_1034d47e8:
        ppppuVar27 = (undefined8 ****)0x3;
      }
      else if (lVar14 == 4) {
LAB_1034d47f4:
        ppppuVar27 = (undefined8 ****)0x4;
      }
      else if (lVar14 == 5) {
LAB_1034d47a4:
        ppppuVar27 = (undefined8 ****)0x5;
      }
    }
LAB_1034d4810:
    ppppuVar32 = (undefined8 ****)ppppuVar31[2];
    ppppuStack_250 = ppppuVar31;
    if ((undefined8 ****)((ulong)ppppuVar31[3] >> 1) <= ppppuVar32) {
      func_0x0001034d9264((undefined8 ****)0x1 < ppppuVar31[3],
                          (undefined8 ****)((long)ppppuVar32 + 1U),1);
      pppppuVar25 = (undefined8 *****)ppppuStack_818;
    }
    ppppuVar31 = ppppuStack_250;
    ppppuStack_250[2] = (undefined8 ****)((long)ppppuVar32 + 1U);
    ppppuStack_250[(long)ppppuVar32 * 4 + 4] = ppppuVar27;
    pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
    *(undefined1 *)(ppppuStack_250 + (long)ppppuVar32 * 4 + 5) = 1;
    *(undefined4 *)((long)ppppuStack_250 + (long)ppppuVar32 * 0x20 + 0x2c) = uVar34;
    ppppuStack_250[(long)ppppuVar32 * 4 + 7] = ppppuStack_808;
    ppppuStack_250[(long)ppppuVar32 * 4 + 6] = ppppuStack_810;
  } while (pppppuVar22 != pppppuVar15);
  pppppuVar15 = (undefined8 *****)ppppuStack_810;
  func_0x000107c6142c(pppppuVar25);
  func_0x0001034d5958(&ppppuStack_7f0,0x112f73310,&UNK_10dbcedd8);
  ppppuStack_880 = ppppuVar31;
  ppppuVar31 = ppppuStack_898;
  ppppuVar27 = ppppuStack_8a0;
  ppppuVar32 = ppppuStack_8a8;
  pppppuVar21 = (undefined8 *****)ppppuStack_850;
LAB_1034d4914:
  ppppuStack_118 = ppppuStack_878;
  uStack_108 = uStack_888;
  uStack_100 = uStack_890;
  ppppuStack_110 = ppppuStack_880;
  uStack_f8 = ppppuVar32;
  uStack_f0 = ppppuVar31;
  uStack_e8 = ppppuVar27;
  func_0x0001034d5840(&ppppuStack_118,&ppppuStack_250);
  func_0x00010355e650(&ppppuStack_118);
  func_0x000107c4f324();
  func_0x000107c61180();
  ppppuStack_250 = (undefined8 *****)0x0;
  pppppuVar25 = (undefined8 *****)0x0;
  func_0x0001034d587c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar18 = 0;
  func_0x0001034d587c(0,0x112f73308,&PTR_PTR_1126d0f30);
  uVar35 = uVar18;
  func_0x000100120cb0();
  pppppuVar22 = &ppppuStack_250;
  func_0x000107c5f9e4(pppppuVar21,pppppuVar22,pppppuVar25,uVar18,uVar35);
  func_0x000107c61170();
  pppppuVar26 = (undefined8 *****)ppppuStack_250;
  ppppuStack_570 = pppppuVar21;
  if ((undefined8 *****)ppppuStack_250 != (undefined8 *****)0x0) {
    if (((ulong)ppppuStack_250 & 0xc000000000000001) == 0) {
      pppppuVar21 = (undefined8 *****)ppppuStack_250[2];
    }
    else {
      pppppuVar21 = (undefined8 *****)ppppuStack_250;
      if (-1 < (long)ppppuStack_250) {
        pppppuVar21 = (undefined8 *****)((ulong)ppppuStack_250 & 0xffffffffffffff8);
      }
      func_0x000107c6042c();
    }
    if (pppppuVar21 == (undefined8 *****)0x0) {
      func_0x000107c6142c();
      ppppuStack_570 = pppppuVar26;
    }
    else {
      pppppuVar21 = pppppuVar26;
      FUN_1034da570();
      ppppuStack_250 = pppppuVar21;
      FUN_1034d0f98(&ppppuStack_250);
      func_0x000107c6142c(pppppuVar26);
      if ((undefined8 *****)ppppuStack_250[2] == (undefined8 *****)0x0) {
        pppppuVar26 = (undefined8 *****)ppppuStack_250;
        func_0x000107c61574();
        puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        lVar14 = 0x28;
        uStack_838 = 2;
        uStack_840 = 0xf000000000000000;
        ppppuStack_808 = (undefined8 *****)0xc000000000000000;
        ppppuStack_810 = (undefined8 *****)0x0;
        ppppuStack_848 = ppppuStack_250;
        puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
        ppppuStack_818 = (undefined8 ****)ppppuStack_250[2];
        while( true ) {
          ppppuStack_818 = (undefined8 ****)((long)ppppuStack_818 + -1);
          pppppuVar26 = *(undefined8 ******)((long)ppppuStack_848 + lVar14);
          uStack_230 = 0;
          ppppuStack_238 = (undefined8 *****)0x0;
          ppppuStack_220 = (undefined8 *****)0x0;
          ppppuStack_228 = (undefined8 *****)0x0;
          ppppuStack_210 = (undefined8 ****)0x0;
          ppppuStack_218 = (undefined8 ****)0x0;
          ppppuStack_200 = (undefined8 ****)0x0;
          ppppuStack_1f8 = (undefined8 ****)0x0;
          ppppuStack_208 = (undefined8 ****)0xf000000000000000;
          ppppuStack_1f0 = (undefined8 ****)0xf000000000000000;
          lStack_1e8 = 0;
          ppppuStack_1e0 = (undefined8 ****)0x0;
          uStack_1d0 = uStack_838;
          ppppuStack_1d8 = (undefined8 ****)uStack_840;
          ppppuStack_1c8 = (undefined8 ****)0x0;
          ppppuStack_1c0 = (undefined8 ****)0x0;
          ppppuStack_1b0 = (undefined8 ****)0x0;
          ppppuStack_1a8 = (undefined8 ****)0x0;
          uStack_1b8 = 2;
          uStack_1a0 = 2;
          ppppuStack_198 = (undefined8 ****)0x0;
          ppppuStack_190 = (undefined8 *****)0x0;
          ppppuStack_178 = (undefined8 ****)0x0;
          ppppuStack_180 = (undefined8 ****)0x0;
          ppppuStack_168 = (undefined8 *****)0x0;
          lStack_170 = 0;
          uStack_188 = 2;
          ppppuStack_160 = (undefined8 *****)0xf000000000000000;
          ppppuStack_248 = ppppuStack_810;
          ppppuStack_240 = ppppuStack_808;
          func_0x000107c61174();
          pppppuVar22 = pppppuVar26;
          func_0x000107c4eb70();
          ppppuVar31 = ppppuStack_210;
          func_0x000100d54a70(ppppuStack_218,ppppuStack_210,ppppuStack_208);
          ppppuStack_208 = ppppuStack_808;
          ppppuStack_210 = ppppuStack_810;
          pppppuVar15 = pppppuVar26;
          ppppuStack_218 = (undefined8 *****)((ulong)pppppuVar22 & 0xffffffff);
          func_0x000107c4f31c();
          pppppuVar22 = pppppuVar26;
          ppppuStack_250 = pppppuVar15;
          func_0x000107c4f328();
          func_0x000107c61180();
          if (pppppuVar22 != (undefined8 *****)0x0) {
            pppppuVar15 = pppppuVar22;
            func_0x000107c5faec();
            func_0x000107c61170(pppppuVar22);
            uVar33 = (ulong)pppppuVar15 & 0xffffffffffff;
            if (((ulong)ppppuVar31 & 0x2000000000000000) != 0) {
              uVar33 = (ulong)ppppuVar31 >> 0x38 & 0xf;
            }
            if (uVar33 == 0) {
              func_0x000107c6142c(ppppuVar31);
            }
            else {
              func_0x000107c61434(ppppuVar31);
              func_0x00010006c00c(0,0xc000000000000000);
              func_0x000107c6142c(ppppuVar31);
              func_0x00010006c090(0,0xc000000000000000);
              func_0x000101597ae4(ppppuStack_238,uStack_230,ppppuStack_228,ppppuStack_220);
              ppppuStack_220 = ppppuStack_808;
              ppppuStack_228 = ppppuStack_810;
              ppppuStack_238 = pppppuVar15;
              uStack_230 = (ulong)ppppuVar31;
            }
          }
          pppppuVar22 = pppppuVar26;
          func_0x000107c5c510();
          func_0x000100d54a70(ppppuStack_200,ppppuStack_1f8,ppppuStack_1f0);
          ppppuStack_1f0 = ppppuStack_808;
          ppppuStack_1f8 = ppppuStack_810;
          pppppuVar15 = pppppuVar26;
          ppppuStack_200 = (undefined8 *****)((ulong)pppppuVar22 & 0xffffffff);
          func_0x000107c4f338();
          func_0x000101556278(uStack_188,ppppuStack_180,ppppuStack_178);
          ppppuStack_178 = ppppuStack_808;
          ppppuStack_180 = ppppuStack_810;
          pppppuVar22 = pppppuVar26;
          pppppuVar25 = (undefined8 *****)ppppuStack_810;
          uStack_188 = (ulong)pppppuVar15 & 0xffffffff;
          func_0x000107c43644();
          func_0x000107c61180();
          lVar24 = lStack_868;
          if (pppppuVar22 != (undefined8 *****)0x0) {
            func_0x000107c5ee94(lStack_868);
            func_0x000107c61170(pppppuVar22);
            lVar7 = lStack_858;
            lVar6 = lStack_860;
            lVar23 = lStack_870;
            (**(code **)(lStack_860 + 0x20))(lStack_870,lVar24,lStack_858);
            func_0x000107c5ee8c();
            (**(code **)(lVar6 + 8))(lVar23,lVar7);
            dVar36 = (double)pppppuVar25 * 1000.0;
            if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57b8);
              (*pcVar29)();
            }
            if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57bc);
              (*pcVar29)();
            }
            if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57c0);
              (*pcVar29)();
            }
            func_0x000100d54a70(lStack_170,ppppuStack_168,ppppuStack_160);
            ppppuStack_160 = ppppuStack_808;
            ppppuStack_168 = ppppuStack_810;
            pppppuVar25 = (undefined8 *****)ppppuStack_810;
            lStack_170 = (long)dVar36;
          }
          func_0x000107c5cd0c(pppppuVar26);
          dVar36 = (double)pppppuVar25 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
            pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57ac);
            (*pcVar29)();
          }
          if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57b0);
            (*pcVar29)();
          }
          if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
            pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57b4);
            (*pcVar29)();
          }
          func_0x000100d54a70(lStack_1e8,ppppuStack_1e0,ppppuStack_1d8);
          ppppuStack_1d8 = ppppuStack_808;
          ppppuStack_1e0 = ppppuStack_810;
          pppppuVar22 = pppppuVar26;
          lStack_1e8 = (long)dVar36;
          func_0x000107c5dfc8();
          uVar13 = (uint)pppppuVar22;
          uVar2 = 0;
          if ((undefined8 *****)ppppuStack_820 != (undefined8 *****)0x0) {
            uVar2 = uVar13;
          }
          func_0x000101556278(uStack_1d0,ppppuStack_1c8,ppppuStack_1c0);
          ppppuStack_1c0 = ppppuStack_808;
          ppppuStack_1c8 = ppppuStack_810;
          uVar1 = 0;
          if ((undefined8 *****)ppppuStack_828 != (undefined8 *****)0x0) {
            uVar1 = uVar13;
          }
          uStack_1d0 = (ulong)uVar2;
          func_0x000101556278(uStack_1b8,ppppuStack_1b0,ppppuStack_1a8);
          ppppuStack_1a8 = ppppuStack_808;
          ppppuStack_1b0 = ppppuStack_810;
          uVar2 = 0;
          if ((undefined8 *****)ppppuStack_830 != (undefined8 *****)0x0) {
            uVar2 = uVar13;
          }
          pppppuVar25 = (undefined8 *****)ppppuStack_190;
          uStack_1b8 = (ulong)uVar1;
          func_0x000101556278(uStack_1a0,ppppuStack_198);
          ppppuStack_190 = ppppuStack_808;
          ppppuStack_198 = ppppuStack_810;
          ppppuStack_2a8 = ppppuStack_168;
          lStack_2b0 = lStack_170;
          ppppuStack_2a0 = ppppuStack_160;
          ppppuStack_308 = ppppuStack_1c8;
          uStack_310 = uStack_1d0;
          uStack_2f8 = uStack_1b8;
          ppppuStack_300 = ppppuStack_1c0;
          ppppuStack_348 = ppppuStack_208;
          ppppuStack_350 = ppppuStack_210;
          ppppuStack_338 = ppppuStack_1f8;
          ppppuStack_340 = ppppuStack_200;
          lStack_328 = lStack_1e8;
          ppppuStack_330 = ppppuStack_1f0;
          ppppuStack_318 = ppppuStack_1d8;
          ppppuStack_320 = ppppuStack_1e0;
          ppppuStack_388 = ppppuStack_248;
          ppppuStack_390 = ppppuStack_250;
          ppppuStack_378 = ppppuStack_238;
          ppppuStack_380 = ppppuStack_240;
          ppppuStack_368 = ppppuStack_228;
          uStack_370 = uStack_230;
          ppppuStack_358 = ppppuStack_218;
          ppppuStack_360 = ppppuStack_220;
          uStack_2c8 = uStack_188;
          ppppuStack_2d0 = ppppuStack_808;
          ppppuStack_2b8 = ppppuStack_178;
          ppppuStack_2c0 = ppppuStack_180;
          ppppuStack_2e8 = ppppuStack_1a8;
          ppppuStack_2f0 = ppppuStack_1b0;
          ppppuStack_2d8 = ppppuStack_810;
          pppppuVar22 = (undefined8 *****)apppuStack_6a8;
          uStack_2e0 = (ulong)uVar2;
          uStack_1a0 = (ulong)uVar2;
          func_0x0001034d58bc(&ppppuStack_390);
          puVar19 = puVar20;
          func_0x000107c61558();
          if (((ulong)puVar19 & 1) == 0) {
            pppppuVar22 = (undefined8 *****)(*(long *)(puVar20 + 0x10) + 1);
            puVar20 = (undefined *)0x0;
            pppppuVar25 = (undefined8 *****)0x1;
            func_0x0001034d8cc4();
          }
          uVar33 = *(ulong *)(puVar20 + 0x10);
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar33) {
            puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
            pppppuVar25 = (undefined8 *****)0x1;
            pppppuVar22 = (undefined8 *****)(uVar33 + 1);
            func_0x0001034d8cc4();
          }
          *(undefined8 ******)(puVar20 + 0x10) = (undefined8 *****)(uVar33 + 1);
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x48) = ppppuStack_368;
          *(ulong *)(puVar20 + uVar33 * 0xf8 + 0x40) = uStack_370;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x58) = ppppuStack_358;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x50) = ppppuStack_360;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x28) = ppppuStack_388;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x20) = ppppuStack_390;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x38) = ppppuStack_378;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x30) = ppppuStack_380;
          *(long *)(puVar20 + uVar33 * 0xf8 + 0x88) = lStack_328;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x80) = ppppuStack_330;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x98) = ppppuStack_318;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x90) = ppppuStack_320;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x68) = ppppuStack_348;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x60) = ppppuStack_350;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x78) = ppppuStack_338;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x70) = ppppuStack_340;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 200) = ppppuStack_2e8;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xc0) = ppppuStack_2f0;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xd8) = ppppuStack_2d8;
          *(ulong *)(puVar20 + uVar33 * 0xf8 + 0xd0) = uStack_2e0;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xa8) = ppppuStack_308;
          *(ulong *)(puVar20 + uVar33 * 0xf8 + 0xa0) = uStack_310;
          *(ulong *)(puVar20 + uVar33 * 0xf8 + 0xb8) = uStack_2f8;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xb0) = ppppuStack_300;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x110) = ppppuStack_2a0;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xf8) = ppppuStack_2b8;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xf0) = ppppuStack_2c0;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0x108) = ppppuStack_2a8;
          *(long *)(puVar20 + uVar33 * 0xf8 + 0x100) = lStack_2b0;
          *(ulong *)(puVar20 + uVar33 * 0xf8 + 0xe8) = uStack_2c8;
          *(undefined8 *****)(puVar20 + uVar33 * 0xf8 + 0xe0) = ppppuStack_2d0;
          pppppuVar15 = (undefined8 *****)ppppuStack_2d0;
          func_0x000107c61170(pppppuVar26);
          func_0x0001034d58f8(&ppppuStack_250);
          if ((undefined8 *****)ppppuStack_818 == (undefined8 *****)0x0) break;
          lVar14 = lVar14 + 0x10;
        }
        pppppuVar26 = (undefined8 *****)ppppuStack_848;
        func_0x000107c61574(ppppuStack_848);
      }
      FUN_10357a104();
      func_0x000107c61438(puVar20,2);
      func_0x000107c6142c(pppppuVar26);
      func_0x00010006c00c(pppppuVar22,pppppuVar25);
      pppppuVar26 = pppppuVar25;
      func_0x00010355db68(puVar20,pppppuVar22);
      func_0x000107c61430(puVar20,2);
      func_0x00010006c090();
      ppppuStack_570 = pppppuVar22;
      pppppuVar22 = pppppuVar25;
      pppppuVar25 = pppppuVar26;
    }
  }
  lVar7 = lStack_858;
  lVar6 = lStack_860;
  lVar23 = lStack_8b0;
  lVar24 = lStack_8b8;
  lVar14 = lStack_8c0;
  FUN_1035ced54();
  pppppuVar26 = (undefined8 *****)ppppuStack_850;
  ppppuStack_568 = pppppuVar22;
  ppppuStack_560 = pppppuVar25;
  func_0x000107c4e8c8();
  func_0x000107c61180();
  if (pppppuVar26 != (undefined8 *****)0x0) {
    func_0x0001035e182c(&ppppuStack_390);
    func_0x000107c610b4(apppuStack_6a8,&ppppuStack_390,0x138);
    uVar33 = (ulong)*(byte *)((long)pppppuVar26 + _DAT_11306c040);
    func_0x000101556278(uStack_688,uStack_680,uStack_678);
    pppppuVar15 = (undefined8 *****)0x0;
    ppppuStack_808 = (undefined8 *****)0xc000000000000000;
    ppppuStack_810 = (undefined8 *****)0x0;
    uStack_678 = 0xc000000000000000;
    uStack_680 = 0;
    uStack_688 = uVar33;
    if ((char)((long *)((long)pppppuVar26 + _DAT_11306c048))[1] != '\x01') {
      lVar28 = *(long *)((long)pppppuVar26 + _DAT_11306c048);
      if (lVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5824);
        (*pcVar29)();
      }
      func_0x000100d54a70(lStack_640,ppppuStack_638,ppppuStack_630);
      ppppuStack_630 = ppppuStack_808;
      ppppuStack_638 = ppppuStack_810;
      lStack_640 = lVar28;
      func_0x000101556278(uStack_670,uStack_668,uStack_660);
      pppppuVar15 = (undefined8 *****)0x1;
      uStack_668 = 0;
      uStack_670 = 1;
      uStack_660 = 0xc000000000000000;
    }
    if ((char)((long *)((long)pppppuVar26 + _DAT_11306c050))[1] != '\x01') {
      lVar28 = *(long *)((long)pppppuVar26 + _DAT_11306c050);
      if (lVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5828);
        (*pcVar29)();
      }
      func_0x000100d54a70(lStack_628,ppppuStack_620,ppppuStack_618);
      ppppuStack_618 = ppppuStack_808;
      ppppuStack_620 = ppppuStack_810;
      pppppuVar15 = (undefined8 *****)ppppuStack_810;
      lStack_628 = lVar28;
    }
    if ((char)((long *)((long)pppppuVar26 + _DAT_11306c058))[1] != '\x01') {
      lVar28 = *(long *)((long)pppppuVar26 + _DAT_11306c058);
      if (lVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d582c);
        (*pcVar29)();
      }
      func_0x000100d54a70(lStack_610,ppppuStack_608,ppppuStack_600);
      ppppuStack_600 = ppppuStack_808;
      ppppuStack_608 = ppppuStack_810;
      pppppuVar15 = (undefined8 *****)ppppuStack_810;
      lStack_610 = lVar28;
    }
    if ((char)((ulong *)((long)pppppuVar26 + _DAT_11306c060))[1] != '\x01') {
      uVar33 = *(ulong *)((long)pppppuVar26 + _DAT_11306c060);
      if (uVar33 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5830);
        (*pcVar29)();
      }
      func_0x000100d54a70(uStack_5f8,ppppuStack_5f0,ppppuStack_5e8);
      ppppuStack_5e8 = ppppuStack_808;
      ppppuStack_5f0 = ppppuStack_810;
      pppppuVar15 = (undefined8 *****)ppppuStack_810;
      uStack_5f8 = uVar33;
    }
    bVar4 = *(byte *)((long)pppppuVar26 + _DAT_11306c068);
    if (bVar4 != 2) {
      func_0x000101556278(uStack_5a0,ppppuStack_598,ppppuStack_590);
      ppppuStack_590 = ppppuStack_808;
      ppppuStack_598 = ppppuStack_810;
      pppppuVar15 = (undefined8 *****)ppppuStack_810;
      uStack_5a0 = (ulong)bVar4 & 1;
    }
    func_0x000107c610b4(&ppppuStack_250,apppuStack_6a8,0x138);
    func_0x0001034cc004(&ppppuStack_250,auStack_7e0);
    FUN_1035cde3c(&ppppuStack_250);
    func_0x000107c61170(pppppuVar26);
    func_0x0001034cc040(apppuStack_6a8);
  }
  pppppuVar22 = (undefined8 *****)ppppuStack_850;
  func_0x000107c3e2f0();
  func_0x000107c61180();
  if (pppppuVar22 == (undefined8 *****)0x0) {
    FUN_1035cc630();
    dVar36 = 0.0;
  }
  else {
    pppppuVar25 = pppppuVar22;
    func_0x000107c4de5c(pppppuVar22);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar14);
    func_0x000107c61170(pppppuVar25);
    func_0x000107c5ee8c();
    pcVar29 = *(code **)(lVar6 + 8);
    (*pcVar29)(lVar14,lVar7);
    dVar36 = (double)pppppuVar15 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57f4);
      (*pcVar29)();
    }
    if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57c4);
      (*pcVar29)();
    }
    if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57c8);
      (*pcVar29)();
    }
    FUN_1035cc630((long)dVar36,0,0xc000000000000000);
    pppppuVar15 = pppppuVar22;
    func_0x000107c43bcc();
    func_0x000107c61180();
    lVar28 = lStack_8e8;
    if (pppppuVar15 != (undefined8 *****)0x0) {
      func_0x000107c5ee94(lStack_8e8);
      func_0x000107c61170(pppppuVar15);
    }
    (**(code **)(lVar6 + 0x38))(lVar28,pppppuVar15 == (undefined8 *****)0x0,1,lVar7);
    lVar5 = lStack_8e0;
    func_0x0001003a4c00(lVar28,lStack_8e0);
    lVar28 = lVar5;
    (**(code **)(lVar6 + 0x30))(lVar5,1,lVar7);
    if ((int)lVar28 == 1) {
      func_0x0001034d5958(lVar5,0x112d373d8,&UNK_10d9014c0);
      dVar36 = 0.0;
    }
    else {
      func_0x000107c5ee8c();
      (*pcVar29)(lVar5,lVar7);
      dVar36 = dVar36 * 1000.0;
    }
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57cc);
    (*pcVar29)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57d0);
    (*pcVar29)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57d4);
    (*pcVar29)();
  }
  FUN_1035cc7e0((long)dVar36,0,0xc000000000000000);
  dVar37 = 0.0;
  if (pppppuVar22 != (undefined8 *****)0x0) {
    pppppuVar15 = pppppuVar22;
    func_0x000107c42098();
    func_0x000107c61180();
    lVar28 = lStack_8f0;
    if (pppppuVar15 != (undefined8 *****)0x0) {
      func_0x000107c5ee94(lStack_8f0);
      func_0x000107c61170(pppppuVar15);
    }
    (**(code **)(lVar6 + 0x38))(lVar28,pppppuVar15 == (undefined8 *****)0x0,1,lVar7);
    lVar5 = lStack_8f8;
    func_0x0001003a4c00(lVar28,lStack_8f8);
    lVar28 = lVar5;
    (**(code **)(lVar6 + 0x30))(lVar5,1,lVar7);
    if ((int)lVar28 == 1) {
      func_0x0001034d5958(lVar5,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x000107c5ee8c();
      (**(code **)(lVar6 + 8))(lVar5,lVar7);
      dVar37 = dVar36 * 1000.0;
    }
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57d8);
    (*pcVar29)();
  }
  if (dVar37 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57dc);
    (*pcVar29)();
  }
  dVar36 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= dVar37) {
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57e0);
    (*pcVar29)();
  }
  FUN_1035cc990((long)dVar37,0,0xc000000000000000);
  pppppuVar15 = (undefined8 *****)ppppuStack_850;
  func_0x000107c49850();
  func_0x000107c61180();
  lVar28 = lStack_8c8;
  if (pppppuVar15 != (undefined8 *****)0x0) {
    func_0x000107c5ee94(lStack_8c8);
    func_0x000107c61170(pppppuVar15);
  }
  pcVar29 = *(code **)(lVar6 + 0x38);
  (*pcVar29)(lVar28,pppppuVar15 == (undefined8 *****)0x0,1,lVar7);
  lVar5 = lStack_8d0;
  func_0x0001003a4c00(lVar28,lStack_8d0);
  pcVar30 = *(code **)(lVar6 + 0x30);
  lVar28 = lVar5;
  (*pcVar30)(lVar5,1,lVar7);
  if ((int)lVar28 == 0) {
    (**(code **)(lVar6 + 0x10))(lVar14,lVar5,lVar7);
    func_0x0001034d5958(lVar5,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c5ee8c();
    (**(code **)(lVar6 + 8))(lVar14,lVar7);
    dVar36 = dVar36 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d581c);
      (*pcVar29)();
    }
    if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57e4);
      (*pcVar29)();
    }
    if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57e8);
      (*pcVar29)();
    }
  }
  else {
    func_0x0001034d5958(lVar5,0x112d373d8,&UNK_10d9014c0);
    dVar36 = 0.0;
  }
  FUN_1035cc3d4((long)dVar36,0,0xc000000000000000);
  pppppuVar15 = (undefined8 *****)ppppuStack_850;
  func_0x000107c49838();
  func_0x000107c61180();
  if (pppppuVar15 != (undefined8 *****)0x0) {
    func_0x000107c5ee94(lVar24);
    func_0x000107c61170(pppppuVar15);
  }
  (*pcVar29)(lVar24,pppppuVar15 == (undefined8 *****)0x0,1,lVar7);
  func_0x0001003a4c00(lVar24,lVar23);
  lVar24 = lVar23;
  (*pcVar30)(lVar23,1,lVar7);
  if ((int)lVar24 == 0) {
    (**(code **)(lVar6 + 0x10))(lVar14,lVar23,lVar7);
    func_0x0001034d5958(lVar23,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c5ee8c();
    (**(code **)(lVar6 + 8))(lVar14,lVar7);
    dVar36 = dVar36 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5820);
      (*pcVar29)();
    }
    if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57ec);
      (*pcVar29)();
    }
    if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d57f0);
      (*pcVar29)();
    }
  }
  else {
    func_0x0001034d5958(lVar23,0x112d373d8,&UNK_10d9014c0);
    dVar36 = 0.0;
  }
  ppppuVar27 = ppppuStack_898;
  ppppuVar31 = ppppuStack_8a0;
  FUN_1035ccb40((long)dVar36,0,0xc000000000000000);
  ppppuVar9 = ppppuStack_560;
  ppppuVar8 = ppppuStack_568;
  ppppuVar32 = ppppuStack_570;
  func_0x00010006c00c(ppppuStack_570,ppppuStack_568);
  func_0x000107c6157c(ppppuVar9);
  FUN_10355e57c(ppppuVar32,ppppuVar8,ppppuVar9);
  func_0x000107c61170(pppppuVar22);
  func_0x000107c61170(ppppuStack_8d8);
  func_0x00010006c090(ppppuVar32,ppppuVar8);
  func_0x000107c61574(ppppuVar9);
  ppppuVar32 = ppppuStack_558;
  func_0x000107c6142c(ppppuStack_880);
  func_0x000107c6142c(ppppuStack_878);
  func_0x00010006c090(uStack_888,uStack_890);
  func_0x000101556278(ppppuStack_8a8,ppppuVar27,ppppuVar31);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (undefined8 *****)ppppuVar32;
  }
  func_0x000107c60e78();
  func_0x000107c61574(ppppuStack_250);
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x1034d5840);
  (*pcVar29)();
}



/* Entry: 1034d5840; end: 1034d5997;  */

undefined8 FUN_1034d5840(undefined8 param_1,undefined8 param_2)

{
  FUN_1035760e0(param_2,param_1);
  return param_2;
}



/* Entry: 1034d5998; end: 1034d5c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d5998(undefined8 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  lStack_88 = *(long *)(param_2 + _DAT_11306b6b0);
  if (lStack_88 == 0) {
    lStack_88 = 0;
    uVar5 = 0xf000000000000000;
  }
  else {
    func_0x000107c49820();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar5 = 0xc000000000000000;
  }
  bVar1 = *(byte *)(param_2 + _DAT_11306b6b8);
  func_0x000101556278(2,0,0);
  lVar10 = ((undefined8 *)(param_2 + _DAT_11306b6c0))[1];
  if (lVar10 == 0) {
    uVar3 = 1;
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11306b6c0);
    func_0x000107c61434(lVar10);
    FUN_1034a1380();
    uVar3 = (undefined1)lVar10;
  }
  lVar10 = *(long *)(param_2 + _DAT_11306b6d8);
  if (lVar10 == 0) {
    lVar10 = 0;
    uVar8 = 0xf000000000000000;
  }
  else {
    func_0x000107c49820();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar8 = 0xc000000000000000;
  }
  lVar2 = *(long *)(param_2 + _DAT_11306b6c8);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    func_0x000107c49820();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar6 = 0xc000000000000000;
  }
  lStack_70 = *(long *)(param_2 + _DAT_11306b6d0);
  if (lStack_70 == 0) {
    lStack_70 = 0;
    uVar7 = 0xf000000000000000;
  }
  else {
    func_0x000107c49820();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar7 = 0xc000000000000000;
  }
  lStack_80 = *(long *)(param_2 + _DAT_11306b6e0);
  if (lStack_80 == 0) {
    lStack_80 = 0;
    uVar12 = 0xf000000000000000;
  }
  else {
    func_0x000107c49820();
    func_0x000100d54a70(0,0,0xf000000000000000);
    uVar12 = 0xc000000000000000;
  }
  lVar9 = ((undefined8 *)(param_2 + _DAT_11306b6e8))[1];
  if (lVar9 == 0) {
    uVar13 = 0;
    uVar4 = 1;
  }
  else {
    uVar13 = *(undefined8 *)(param_2 + _DAT_11306b6e8);
    func_0x000107c61434(lVar9);
    func_0x0001034a18f8();
    uVar4 = (undefined1)lVar9;
  }
  *param_1 = uVar11;
  *(undefined1 *)(param_1 + 1) = uVar3;
  param_1[2] = uVar13;
  *(undefined1 *)(param_1 + 3) = uVar4;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = lStack_88;
  param_1[7] = 0;
  param_1[8] = uVar5;
  param_1[9] = (ulong)bVar1;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  param_1[0xc] = lStack_70;
  param_1[0xd] = 0;
  param_1[0xe] = uVar7;
  param_1[0xf] = lVar2;
  param_1[0x10] = 0;
  param_1[0x11] = uVar6;
  param_1[0x12] = lStack_80;
  param_1[0x13] = 0;
  param_1[0x14] = uVar12;
  param_1[0x15] = lVar10;
  param_1[0x16] = 0;
  param_1[0x17] = uVar8;
  return;
}



/* Entry: 1034d5c1c; end: 1034d5cd7;  */

/* WARNING: Possible PIC construction at 0x0001034d5c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034d5c74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d5c1c(long param_1,uint param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f73328);
  if ((*(long *)(lVar2 + 0x10) == 0) || (lVar1 = param_1, func_0x0001000a7158(), (param_2 & 1) == 0)
     ) {
    FUN_1034d62c4();
    func_0x000107c610f8();
  }
  else {
    param_1 = *(long *)(*(long *)(lVar2 + 0x38) + lVar1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1034d5cd8; end: 1034d5ce7; -[SCUnlockableSwipeInteractionTimingSnapshot swipedOverCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5cd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73330);
}



/* Entry: 1034d5ce8; end: 1034d5cf7; -[SCUnlockableSwipeInteractionTimingSnapshot totalSwipedViewSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5ce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73338);
}



/* Entry: 1034d5cf8; end: 1034d5d07; -[SCUnlockableSwipeInteractionTimingSnapshot maxSwipeTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73340);
}



/* Entry: 1034d5d08; end: 1034d5d17; -[SCUnlockableSwipeInteractionTimingSnapshot recordingTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73348);
}



/* Entry: 1034d5d18; end: 1034d5d27; -[SCUnlockableSwipeInteractionTimingSnapshot postCaptureTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73350);
}



/* Entry: 1034d5d28; end: 1034d5d37; -[SCUnlockableSwipeInteractionTimingSnapshot totalTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73358);
}



/* Entry: 1034d5d38; end: 1034d5d47; -[SCUnlockableSwipeInteractionTimingSnapshot maxContinuousTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d5d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f73360);
}



/* Entry: 1034d5d48; end: 1034d5d83; -[SCUnlockableSwipeInteractionTimingSnapshot initWithInteraction:] */

undefined8 FUN_1034d5d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1034d6a10();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1034d5d84; end: 1034d5daf; -[SCUnlockableSwipeInteractionTimingSnapshot init] */

void FUN_1034d5d84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataImplementation.UnlockableSwipeInteractionTimingSnapshot"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d5db0);
  (*pcVar1)();
}



/* Entry: 1034d5db0; end: 1034d5db3;  */

void FUN_1034d5db0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034d5db4; end: 1034d5e87; -[SCUnlockableSwipeInteractionTimingSnapshotCollection initWithTrackInfo:] */

undefined8 FUN_1034d5db4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  puVar1 = param_3;
  func_0x000107c5c4dc();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_1034d6f00(0,0x112dcf848,&PTR_PTR_1126a7d30);
    puVar3 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  uVar2 = 0;
  FUN_1034d6f00(0,0x112dcf848,&PTR_PTR_1126a7d30);
  puVar1 = puVar3;
  func_0x000107c5fc48(puVar3,uVar2);
  func_0x000107c6142c(puVar3);
  func_0x000107c48b90(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1034d5e88; end: 1034d5eb7;  */

void FUN_1034d5e88(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1034d5eb8(param_1);
  return;
}



/* Entry: 1034d5eb8; end: 1034d61af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d5eb8(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1034d6dd4();
  puStack_68 = puVar9;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar9 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar9 = param_1;
    }
    func_0x000107c60480(puVar9);
  }
  puVar3 = (undefined *)0x0;
  func_0x0001000285a8(0x112f73368,&UNK_10dbcedf0);
  func_0x000107c5f9f8(puVar9);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar9 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = puStack_68;
  }
  else {
    puVar9 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar9 = param_1;
    }
    func_0x000107c60480();
    puVar12 = puStack_68;
  }
  puStack_68 = puVar12;
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c6142c(param_1);
    puVar12 = puStack_68;
  }
  else {
    uVar11 = 0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d618c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar11;
        puVar3 = param_1;
        FUN_1034d66b8(uVar11,param_1,&PTR_PTR_1126a7d30,0x112dcf848);
      }
      puVar1 = (undefined *)(uVar11 + 1);
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6180);
        (*pcVar2)();
      }
      FUN_1034d62c4();
      func_0x000107c610f8();
      func_0x000107c61174();
      uVar5 = uVar4;
      FUN_1034d6a10();
      func_0x000107c61170(uVar4);
      func_0x000107c61174();
      puVar6 = puVar12;
      func_0x000107c61558();
      uVar7 = uVar4;
      puStack_70 = puVar12;
      func_0x0001000a7158();
      uVar8 = (ulong)~(uint)puVar3 & 1;
      if (SCARRY8(*(long *)(puVar12 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6184);
        (*pcVar2)();
      }
      if (*(long *)(puVar12 + 0x18) < (long)(*(long *)(puVar12 + 0x10) + uVar8)) {
        FUN_1034d6440();
        uVar7 = uVar4;
        func_0x0001000a7158();
        if (((uint)puVar3 & 1) != ((uint)puVar6 & 1)) {
          func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d61b0);
          (*pcVar2)();
        }
joined_r0x0001034d6104:
        uVar8 = (ulong)puVar3 & 1;
        puVar3 = puVar6;
        if (uVar8 != 0) goto LAB_1034d5f60;
LAB_1034d60a8:
        puVar12 = puStack_70;
        *(ulong *)(puStack_70 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_70 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        *(ulong *)(*(long *)(puStack_70 + 0x30) + uVar7 * 8) = uVar4;
        *(ulong *)(*(long *)(puStack_70 + 0x38) + uVar7 * 8) = uVar5;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6188);
          (*pcVar2)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
        puVar3 = puVar6;
      }
      else {
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = puVar3;
          FUN_1034d62e4();
          goto joined_r0x0001034d6104;
        }
        puVar6 = puVar3;
        if (((ulong)puVar3 & 1) == 0) goto LAB_1034d60a8;
LAB_1034d5f60:
        puVar12 = puStack_70;
        uVar10 = *(undefined8 *)(*(long *)(puStack_70 + 0x38) + uVar7 * 8);
        *(ulong *)(*(long *)(puStack_70 + 0x38) + uVar7 * 8) = uVar5;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar10);
      }
      uVar11 = uVar11 + 1;
    } while (puVar1 != puVar9);
    func_0x000107c6142c(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_112f73328) = puVar12;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034d61b0; end: 1034d61f7; -[SCUnlockableSwipeInteractionTimingSnapshotCollection initWithSwipeInteractions:] */

void FUN_1034d61b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1034d6f00(0,0x112dcf848,&PTR_PTR_1126a7d30);
  func_0x000107c5fc54(param_3,uVar1);
  FUN_1034d5eb8();
  return;
}



/* Entry: 1034d61f8; end: 1034d6253; -[SCUnlockableSwipeInteractionTimingSnapshotCollection snapshotForInteraction:] */

void FUN_1034d61f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1034d5c1c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034d6254; end: 1034d62b3; -[SCUnlockableSwipeInteractionTimingSnapshotCollection init] */

void FUN_1034d6254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataImplementation.UnlockableSwipeInteractionTimingSnapshotCollection"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d6280);
  (*pcVar1)();
}



/* Entry: 1034d62b4; end: 1034d62c3; -[SCUnlockableSwipeInteractionTimingSnapshotCollection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d62b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f73328));
  return;
}



/* Entry: 1034d62c4; end: 1034d62e3;  */

void FUN_1034d62c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128de860);
  return;
}



/* Entry: 1034d62e4; end: 1034d643f;  */

void FUN_1034d62e4(void)

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
  
  func_0x0001000285a8(0x112f733c0,&UNK_10dbcee68);
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
    if (uVar6 == 0) goto LAB_1034d63c0;
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
LAB_1034d63c0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1034d6440);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1034d6418;
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
LAB_1034d6418:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1034d6440; end: 1034d66a3;  */

void FUN_1034d6440(long param_1,ulong param_2)

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
  uVar13 = 0x112f733c0;
  func_0x0001000285a8(0x112f733c0,&UNK_10dbcee68);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1034d6670:
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1034d66a0);
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
          goto LAB_1034d6670;
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1034d66a4);
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



/* Entry: 1034d66a4; end: 1034d66b7;  */

ulong FUN_1034d66a4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d679c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d67a0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d2620;
    func_0x000107c61168(PTR_PTR_1126d2620);
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
    puVar4 = PTR_PTR_1126d2620;
    func_0x000107c61168(PTR_PTR_1126d2620);
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
  FUN_1034d6f00(0,0x112f730d8,&PTR_PTR_1126d2620);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6874);
  (*pcVar2)();
}



/* Entry: 1034d66b8; end: 1034d6873;  */

ulong FUN_1034d66b8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d679c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d67a0);
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
  FUN_1034d6f00(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6874);
  (*pcVar2)();
}



/* Entry: 1034d6874; end: 1034d6a0f;  */

ulong FUN_1034d6874(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6944);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6948);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001042d857c(0);
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
    func_0x0001042d857c(0);
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
  func_0x000107c5fb78(0xd000000000000025,0x800000010f154920);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6a10);
  (*pcVar2)();
}



/* Entry: 1034d6a10; end: 1034d6dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d6a10(double param_1,undefined *param_2)

{
  double dVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  func_0x000107c614f0();
  puVar12 = param_2;
  func_0x000107c5c4e4();
  func_0x000107c61180();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar12 == (undefined *)0x0) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) goto LAB_1034d6aa8;
LAB_1034d6b78:
    puVar12 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar12 = puVar4;
    }
    func_0x000107c60480();
    if (puVar12 != (undefined *)0x0) goto LAB_1034d6ab4;
LAB_1034d6b90:
    func_0x000107c6142c(puVar4);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = 0;
    FUN_1034d6f00(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = puVar12;
    func_0x000107c5fc54(puVar12,uVar3);
    func_0x000107c61170(puVar12);
    if ((ulong)puVar4 >> 0x3e != 0) goto LAB_1034d6b78;
LAB_1034d6aa8:
    puVar12 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    if (puVar12 == (undefined *)0x0) goto LAB_1034d6b90;
LAB_1034d6ab4:
    func_0x00010134166c(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d6dd4);
      (*pcVar2)();
    }
    if (((ulong)puVar4 & 0xc000000000000001) == 0) {
      puVar14 = (undefined8 *)(puVar4 + 0x20);
      do {
        func_0x000107c4223c(*puVar14);
        uVar11 = *(ulong *)(puVar10 + 0x10);
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
          func_0x00010134166c(1 < *(ulong *)(puVar10 + 0x18),uVar11 + 1,1);
        }
        *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
        *(double *)(puVar10 + uVar11 * 8 + 0x20) = param_1;
        puVar12 = puVar12 + -1;
        puVar14 = puVar14 + 1;
      } while (puVar12 != (undefined *)0x0);
    }
    else {
      puVar13 = (undefined *)0x0;
      dVar18 = param_1;
      do {
        puVar5 = puVar13;
        FUN_1034d66b8(puVar13,puVar4,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
        func_0x000107c4223c();
        param_1 = dVar18;
        func_0x000107c615e8(puVar5);
        uVar11 = *(ulong *)(puVar10 + 0x10);
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
          func_0x00010134166c(1 < *(ulong *)(puVar10 + 0x18),uVar11 + 1,1);
        }
        puVar13 = puVar13 + 1;
        *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
        *(double *)(puVar10 + uVar11 * 8 + 0x20) = dVar18;
        dVar18 = param_1;
      } while (puVar12 != puVar13);
    }
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c4fac4(param_2);
  dVar15 = param_1;
  func_0x000107c4eb7c(param_2);
  dVar18 = dVar15;
  func_0x000107c4c89c(param_2);
  dVar16 = dVar18;
  func_0x000107c4c824(param_2);
  uVar11 = *(ulong *)(puVar10 + 0x10);
  if (uVar11 == 0) {
    func_0x000107c6142c(puVar10);
    dVar19 = 0.0;
    if (dVar18 <= 0.0) {
      dVar18 = 0.0;
    }
    dVar20 = 0.0;
    goto joined_r0x0001034d6c74;
  }
  if (uVar11 < 4) {
    uVar6 = 0;
    dVar19 = 0.0;
LAB_1034d6cbc:
    lVar8 = uVar11 - uVar6;
    pdVar7 = (double *)(puVar10 + uVar6 * 8 + 0x20);
    do {
      dVar19 = dVar19 + *pdVar7;
      lVar8 = lVar8 + -1;
      pdVar7 = pdVar7 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar6 = uVar11 & 0x7ffffffffffffffc;
    pdVar7 = (double *)(puVar10 + 0x30);
    dVar19 = 0.0;
    uVar9 = uVar6;
    do {
      dVar19 = dVar19 + pdVar7[-2] + pdVar7[-1] + *pdVar7 + pdVar7[1];
      pdVar7 = pdVar7 + 4;
      uVar9 = uVar9 - 4;
    } while (uVar9 != 0);
    if (uVar11 != uVar6) goto LAB_1034d6cbc;
  }
  if (dVar18 <= 0.0) {
    dVar18 = *(double *)(puVar10 + 0x20);
    lVar8 = uVar11 - 1;
    if (lVar8 != 0) {
      pdVar7 = (double *)(puVar10 + 0x28);
      dVar20 = dVar18;
      do {
        dVar17 = *pdVar7;
        dVar1 = dVar17;
        if (dVar17 <= dVar20) {
          dVar17 = dVar20;
          dVar1 = dVar18;
        }
        dVar18 = dVar1;
        lVar8 = lVar8 + -1;
        pdVar7 = pdVar7 + 1;
        dVar20 = dVar17;
      } while (lVar8 != 0);
    }
  }
  dVar20 = *(double *)(puVar10 + uVar11 * 8 + 0x18);
  func_0x000107c6142c(puVar10);
joined_r0x0001034d6c74:
  if ((dVar16 <= 0.0) && (dVar16 = dVar15 + param_1 + dVar20, dVar16 < dVar18)) {
    dVar16 = dVar18;
  }
  *(ulong *)(unaff_x20 + _DAT_112f73330) = uVar11;
  *(double *)(unaff_x20 + _DAT_112f73338) = dVar19;
  *(double *)(unaff_x20 + _DAT_112f73340) = dVar18;
  *(double *)(unaff_x20 + _DAT_112f73348) = param_1;
  *(double *)(unaff_x20 + _DAT_112f73350) = dVar15;
  *(double *)(unaff_x20 + _DAT_112f73358) = dVar15 + param_1 + dVar19;
  *(double *)(unaff_x20 + _DAT_112f73360) = dVar16;
  func_0x000107c61154(&stack0xffffffffffffff58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034d6dd4; end: 1034d6edf;  */

undefined * FUN_1034d6dd4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x112f733c0);
  puVar2 = puVar6;
  func_0x000107c60498();
  uStack_48 = *(ulong *)(param_1 + 0x28);
  uStack_50 = *(ulong *)(param_1 + 0x20);
  uVar3 = uStack_50;
  func_0x0001000a7158();
  if ((uVar4 & 1) == 0) {
    puVar7 = (ulong *)(param_1 + 0x30);
    do {
      puVar6 = puVar6 + -1;
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_50;
      *(ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uStack_48;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d6ee0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c61174(uStack_48);
        return puVar2;
      }
      uVar5 = puVar7[1];
      uStack_50 = *puVar7;
      func_0x000107c61174(uStack_48);
      uVar3 = uStack_50;
      func_0x0001000a7158();
      puVar7 = puVar7 + 2;
      uStack_48 = uVar5;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d6eb0);
  (*pcVar1)();
}



/* Entry: 1034d6ee0; end: 1034d6eff;  */

void FUN_1034d6ee0(void)

{
  func_0x000107c61168(&PTR_PTR_1128de950);
  return;
}



/* Entry: 1034d6f00; end: 1034d6f3f;  */

void FUN_1034d6f00(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1034d6f40; end: 1034d6f57;  */

void FUN_1034d6f40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034d6f58; end: 1034d7003;  */

void FUN_1034d6f58(void)

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



/* Entry: 1034d7004; end: 1034d702b;  */

void FUN_1034d7004(ulong *param_1,ulong *param_2)

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



/* Entry: 1034d702c; end: 1034d703b; -[SCImpressionBuilderResolvedConfig mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034d702c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f733c8);
}



/* Entry: 1034d703c; end: 1034d704b; -[SCImpressionBuilderResolvedConfig shadowSampleRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1034d703c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f733d0);
}



/* Entry: 1034d704c; end: 1034d705b; -[SCImpressionBuilderResolvedConfig safeModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1034d704c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f733d8);
}



/* Entry: 1034d705c; end: 1034d70d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d705c(undefined4 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f733c8) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_112f733d0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f733d8) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034d70d8; end: 1034d7153; -[SCImpressionBuilderResolvedConfig initWithMode:shadowSampleRate:safeModeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d70d8(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112f733c8) = param_4;
  *(undefined4 *)(param_2 + _DAT_112f733d0) = param_1;
  *(undefined1 *)(param_2 + _DAT_112f733d8) = param_5;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034d7154; end: 1034d717f; -[SCImpressionBuilderResolvedConfig init] */

void FUN_1034d7154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataImplementation.ResolvedConfig",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d7180);
  (*pcVar1)();
}



/* Entry: 1034d7180; end: 1034d7183;  */

void FUN_1034d7180(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034d7184; end: 1034d71bf; +[SCImpressionBuilderConfigResolver resolveWithAdConfigProviderV2:] */

void FUN_1034d7184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  func_0x0001034d7304(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034d71c0; end: 1034d71db; +[SCImpressionBuilderConfigResolver resolveFromValuesWithCofModeRawValue:cofShadowSampleRate:cofSafeModeEnabled:] */

void FUN_1034d71c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1034d724c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034d71dc; end: 1034d7217; -[SCImpressionBuilderConfigResolver init] */

void FUN_1034d71dc(undefined8 param_1)

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



/* Entry: 1034d7218; end: 1034d724b;  */

void FUN_1034d7218(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034d724c; end: 1034d73eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d724c(float param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  ulong uStack_50;
  ulong uStack_48;
  
  fVar3 = 0.0;
  if (0.0 < param_1) {
    fVar3 = param_1;
  }
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  fVar4 = 0.0;
  if ((uint)ABS(param_1) < 0x7f800000) {
    fVar4 = fVar3;
  }
  uVar1 = param_2;
  if (param_2 != 2) {
    uVar1 = (ulong)(param_2 == 1);
  }
  func_0x0001034d7470();
  uVar2 = param_2;
  func_0x000107c610f8();
  *(ulong *)(uVar2 + _DAT_112f733c8) = uVar1;
  *(float *)(uVar2 + _DAT_112f733d0) = fVar4;
  *(byte *)(uVar2 + _DAT_112f733d8) = param_3 & 1;
  uStack_50 = uVar2;
  uStack_48 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034d73ec; end: 1034d73ef;  */

void FUN_1034d73ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f733e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcee70;
  func_0x000107c61520(&UNK_10dbcee70,&UNK_11065c6e0);
  puRam0000000112f733e0 = puVar1;
  return;
}



/* Entry: 1034d73f0; end: 1034d742f;  */

void FUN_1034d73f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f733e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcee70;
  func_0x000107c61520(&UNK_10dbcee70,&UNK_11065c6e0);
  puRam0000000112f733e0 = puVar1;
  return;
}



/* Entry: 1034d7430; end: 1034d744f;  */

undefined1  [16] FUN_1034d7430(void)

{
  return ZEXT816(0x11065c6e0);
}



/* Entry: 1034d7450; end: 1034d748f;  */

void FUN_1034d7450(void)

{
  func_0x000107c61168(&PTR_PTR_1128dea10);
  return;
}



/* Entry: 1034d7490; end: 1034d749b;  */

void FUN_1034d7490(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034d749c; end: 1034d7523;  */

undefined8
FUN_1034d749c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_4;
  func_0x0001000c6518(param_4,*(undefined8 *)(param_4 + 0x18));
  FUN_1034da700(param_1,param_2,param_3,lVar1,param_5);
  func_0x0001000834e4(param_4);
  return param_3;
}



/* Entry: 1034d7524; end: 1034d755b;  */

undefined8 FUN_1034d7524(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d755c);
  (*pcVar1)();
}



/* Entry: 1034d755c; end: 1034d757f;  */

void FUN_1034d755c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034d7580; end: 1034d769b;  */

/* WARNING: Possible PIC construction at 0x0001034d764c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034d7650) */

void FUN_1034d7580(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar3 = 0xe600000000000000;
    uVar4 = 0x79636167656c;
  }
  else if (param_3 == 2) {
    uVar3 = 0xe200000000000000;
    uVar4 = 0x3276;
  }
  else {
    if (param_3 != 1) {
      lStack_48 = param_3;
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11065c6e0,&lStack_48,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d769c);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar4 = 0x776f64616873;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000106bc7540(lVar2,uVar4,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1034d769c; end: 1034d76e3;  */

void FUN_1034d769c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034d76e4; end: 1034d7707;  */

void FUN_1034d76e4(void)

{
  FUN_1034db128();
  return;
}



/* Entry: 1034d7708; end: 1034d7747;  */

void FUN_1034d7708(undefined8 param_1,undefined8 param_2)

{
  FUN_1034e0530();
  FUN_1034d7580();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1034d7748; end: 1034d7777;  */

void FUN_1034d7748(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1034d7778; end: 1034d78fb;  */

/* WARNING: Possible PIC construction at 0x0001034d77f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034d7874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034d78a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034d7878) */
/* WARNING: Removing unreachable block (ram,0x0001034d78a8) */

void FUN_1034d7778(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126ad318;
  func_0x000107c610f8(PTR_PTR_1126ad318);
  func_0x000107c615f0(lVar3);
  func_0x000107c453e4(puVar2);
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar4 = 0xe600000000000000;
      param_2 = 0x79636167656c;
    }
    else if (param_4 == 2) {
      uVar4 = 0xe200000000000000;
      param_2 = 0x3276;
    }
    else {
      if (param_4 != 1) {
        lStack_48 = param_4;
        func_0x000107c60614(&UNK_11065c6e0,&lStack_48,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d78fc);
        (*pcVar1)();
      }
      uVar4 = 0xe600000000000000;
      param_2 = 0x776f64616873;
    }
    func_0x000107c5fadc(param_2,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c52e68(puVar2);
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c522e4(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1034d78fc; end: 1034d791f;  */

void FUN_1034d78fc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034d7920; end: 1034d7977;  */

void FUN_1034d7920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1034da84c(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1034d7978; end: 1034d7a97;  */

void FUN_1034d7978(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [40];
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x10) + 0x20;
    do {
      FUN_1034db2ec(lVar4,auStack_98);
      FUN_1034db330(auStack_98,auStack_c0);
      lVar2 = lStack_a0;
      uVar1 = uStack_a8;
      func_0x0001000a8868(auStack_c0,uStack_a8);
      (**(code **)(lVar2 + 8))
                (param_1,param_2 & 1,param_3,param_4 & 1,param_5,param_6,param_7,param_8,uVar1,lVar2
                );
      func_0x0001000834e4(auStack_c0);
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1034d7a98; end: 1034d7b57;  */

void FUN_1034d7a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10) + 0x20;
    do {
      FUN_1034db2ec(lVar3,auStack_88);
      FUN_1034db330(auStack_88,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = uStack_98;
      func_0x0001000a8868(auStack_b0,uStack_98);
      (**(code **)(lVar2 + 0x10))(param_1,param_2,param_3,param_4,uVar1,lVar2);
      func_0x0001000834e4(auStack_b0);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1034d7b58; end: 1034d7b7b;  */

void FUN_1034d7b58(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034d7b7c; end: 1034d7bbb;  */

void FUN_1034d7b7c(void)

{
  FUN_1034d7978();
  return;
}



/* Entry: 1034d7bbc; end: 1034d7bfb;  */

void FUN_1034d7bbc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1034d7bfc(param_1,param_2);
  return;
}



/* Entry: 1034d7bfc; end: 1034d7e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1034d7bfc(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  long unaff_x20;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  
  func_0x000107c614f0();
  plVar2 = (long *)PTR_PTR_1126ad320;
  func_0x000107c610f8();
  func_0x000107c453e4();
  plVar3 = plVar2;
  FUN_1034db348();
  func_0x000107c613fc();
  plVar3[2] = (long)plVar2;
  plVar2 = plVar3;
  func_0x0001034db368();
  plVar4 = plVar2;
  func_0x000107c613fc();
  plVar4[2] = (long)plVar3;
  lVar5 = 0x112f73438;
  func_0x0001000285a8(0x112f73438,&UNK_10dbcf4c0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(long **)(lVar5 + 0x38) = plVar2;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11065c780;
  *(long **)(lVar5 + 0x20) = plVar4;
  if (param_2 == 0) {
    func_0x000107c6157c(plVar3);
    plVar2 = plVar4;
    func_0x000107c6157c();
  }
  else {
    lVar6 = lVar5;
    func_0x0001034db3c8();
    lVar7 = lVar6;
    func_0x000107c613fc();
    *(long *)(lVar7 + 0x10) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(plVar3);
    func_0x000107c6157c(plVar4);
    lVar8 = 1;
    FUN_1034d8f50(1,2,1,lVar5);
    ppuStack_88 = &PTR_DAT_11065c798;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    plVar2 = alStack_a8;
    alStack_a8[0] = lVar7;
    lStack_90 = lVar6;
    FUN_1034db330(plVar2,lVar8 + 0x48);
    lVar5 = lVar8;
  }
  func_0x0001034db388();
  plVar9 = plVar2;
  func_0x000107c613fc();
  plVar9[2] = lVar5;
  plVar10 = plVar9;
  func_0x0001034db3a8();
  func_0x000107c613fc();
  plVar10[8] = (long)plVar2;
  plVar10[9] = (long)&PTR_DAT_11065c7b0;
  plVar10[2] = param_1;
  plVar10[3] = 200;
  plVar10[4] = 0x412e848000000000;
  plVar10[5] = (long)plVar9;
  plVar10[10] = 10;
  *(long **)(unaff_x20 + _DAT_112f73440) = plVar10;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61434(lVar5);
  puVar11 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar11,puVar1);
  func_0x000107c6142c(lVar5);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(plVar4);
  func_0x000107c615e8(param_2);
  return puVar11;
}



/* Entry: 1034d7e14; end: 1034d7e53; -[SCAdImpressionDataDiffLogger initWithUserBlizzard:floatTolerance:] */

void FUN_1034d7e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  FUN_1034d7bfc(param_1,param_4);
  return;
}



/* Entry: 1034d7e54; end: 1034d84fb;  */

/* WARNING: Removing unreachable block (ram,0x0001034d7f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1034d7e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,byte param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_a0;
  byte abStack_90 [8];
  undefined *puStack_88;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  uVar13 = 0x776f64616873;
  lVar15 = *(long *)(unaff_x20 + _DAT_112f73440);
  if ((param_7 == 0x776f64616873) && (param_8 == -0x1a00000000000000)) {
    lVar17 = 1;
  }
  else {
    func_0x000107c605b8(0x776f64616873,0xe600000000000000,param_7,param_8,0);
    if ((uVar13 & 1) == 0) {
      if ((param_7 == 0x3276) && (param_8 == -0x1e00000000000000)) {
        lVar17 = 2;
      }
      else {
        uVar13 = 0;
        func_0x000107c605b8(0x3276,0xe200000000000000,param_7,param_8,0);
        lVar17 = 2;
        if ((uVar13 & 1) == 0) {
          lVar17 = 0;
        }
      }
    }
    else {
      lVar17 = 1;
    }
  }
  FUN_1034db468(abStack_90,*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x20),param_1,
                param_2,param_3,param_4,100,0,*(undefined8 *)(lVar15 + 0x18));
  uVar13 = *(ulong *)(lVar15 + 0x50);
  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1034d84dc);
    (*pcVar6)();
  }
  uVar1 = *(ulong *)(puStack_88 + 0x10);
  if (uVar13 <= *(ulong *)(puStack_88 + 0x10)) {
    uVar1 = uVar13;
  }
  uVar2 = 1;
  if (uVar13 != 0) {
    uVar2 = uVar1 * 2 + 1;
  }
  func_0x000107c615f4(puStack_88,2);
  FUN_1034da7dc(abStack_90,&puStack_208);
  uVar7 = 0;
  func_0x000107c605fc(0);
  puVar8 = puStack_88;
  func_0x000107c61480(puStack_88,uVar7);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c615e8(puStack_88);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar13 = *(ulong *)(puVar8 + 0x10);
  func_0x000107c61574();
  if (uVar13 == uVar2 >> 1) {
    puVar9 = puStack_88;
    func_0x000107c61480(puStack_88,uVar7);
    func_0x000107c615e8(puStack_88);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 != (undefined *)0x0) goto LAB_1034d8054;
  }
  else {
    func_0x000107c615e8();
    puVar8 = puStack_88;
    FUN_1034da61c(puStack_88,puStack_88 + 0x20,0,uVar2);
  }
  func_0x000107c615e8(puStack_88);
  puVar9 = puVar8;
LAB_1034d8054:
  if (((param_9 & 1) != 0) && ((abStack_90[0] & 1) == 0)) {
    lVar16 = *(long *)(puStack_88 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar16 != 0) {
      puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(puStack_88);
      func_0x000100403514(0,lVar16,0);
      puVar18 = (undefined8 *)(puStack_88 + 0x48);
      do {
        puVar5 = puStack_a0;
        puVar8 = (undefined *)puVar18[-5];
        uVar10 = puVar18[-4];
        uVar7 = puVar18[-3];
        uVar12 = puVar18[-2];
        uVar14 = puVar18[-1];
        uVar3 = *puVar18;
        puStack_208 = (undefined *)0x0;
        uStack_200 = 0xe000000000000000;
        func_0x000107c61434(uVar10);
        func_0x000107c61434(uVar12);
        func_0x000107c61434(uVar3);
        func_0x000107c602fc(0x17);
        func_0x000107c6142c(uStack_200);
        puStack_208 = puVar8;
        uStack_200 = uVar10;
        func_0x000107c61434(uVar10);
        func_0x000107c5fb78(0x79636167656c203a,0xe90000000000003d);
        func_0x000107c5fb78(uVar7,uVar12);
        func_0x000107c5fb78(0x3d7466697773202c,0xe800000000000000);
        func_0x000107c5fb78(uVar14,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar10);
        uVar7 = uStack_200;
        puVar4 = puStack_208;
        uVar13 = *(ulong *)(puVar5 + 0x10);
        puStack_a0 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
          func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar13 + 1,1);
        }
        puVar8 = puStack_a0;
        puVar18 = puVar18 + 6;
        *(ulong *)(puStack_a0 + 0x10) = uVar13 + 1;
        *(undefined **)(puStack_a0 + uVar13 * 0x10 + 0x20) = puVar4;
        *(undefined8 *)(puStack_a0 + uVar13 * 0x10 + 0x28) = uVar7;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      func_0x0001034da818(abStack_90);
    }
    lVar16 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar16 + 0x18) = 8;
    *(undefined8 *)(lVar16 + 0x10) = 4;
    puVar5 = PTR___sSSSHsWP_11034da90;
    puVar4 = PTR___sSSN_11034da80;
    puStack_208 = (undefined *)0x69746e6564496461;
    uStack_200 = 0xec00000072656966;
    func_0x000107c602d4(lVar16 + 0x20,&puStack_208,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    *(undefined **)(lVar16 + 0x60) = puVar4;
    uVar7 = 0;
    if (param_6 != 0) {
      uVar7 = param_5;
    }
    lVar11 = -0x2000000000000000;
    if (param_6 != 0) {
      lVar11 = param_6;
    }
    *(undefined8 *)(lVar16 + 0x48) = uVar7;
    *(long *)(lVar16 + 0x50) = lVar11;
    puStack_208 = (undefined *)0x4d7265646c697562;
    uStack_200 = 0xeb0000000065646f;
    func_0x000107c61434(param_6);
    func_0x000107c602d4(lVar16 + 0x68,&puStack_208,puVar4,puVar5);
    if (lVar17 == 0) {
      uVar7 = 0xe600000000000000;
      uVar14 = 0x79636167656c;
    }
    else if (lVar17 == 2) {
      uVar7 = 0xe200000000000000;
      uVar14 = 0x3276;
    }
    else {
      uVar7 = 0xe600000000000000;
      uVar14 = 0x776f64616873;
    }
    *(undefined **)(lVar16 + 0xa8) = puVar4;
    *(undefined8 *)(lVar16 + 0x90) = uVar14;
    *(undefined8 *)(lVar16 + 0x98) = uVar7;
    puStack_208 = (undefined *)0x6e756f4366666964;
    uStack_200 = 0xe900000000000074;
    func_0x000107c602d4(lVar16 + 0xb0,&puStack_208,puVar4,puVar5);
    uVar7 = *(undefined8 *)(puStack_88 + 0x10);
    *(undefined **)(lVar16 + 0xf0) = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar16 + 0xd8) = uVar7;
    puStack_208 = (undefined *)0x7366666944706f74;
    uStack_200 = 0xe800000000000000;
    func_0x000107c602d4(lVar16 + 0xf8,&puStack_208,puVar4,puVar5);
    uVar7 = 0x112d38270;
    puStack_208 = puVar8;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar14 = uVar7;
    func_0x00010011d734();
    uVar10 = 10;
    uVar12 = 0xe100000000000000;
    func_0x000107c5fa80(10,0xe100000000000000,uVar7,uVar14);
    func_0x000107c6142c(puVar8);
    *(undefined **)(lVar16 + 0x138) = puVar4;
    *(undefined8 *)(lVar16 + 0x120) = uVar10;
    *(undefined8 *)(lVar16 + 0x128) = uVar12;
    lVar11 = lVar16;
    func_0x000100dfa3f0(lVar16);
    func_0x000107c61588(lVar16);
    uVar7 = 0x112d377a0;
    func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
    func_0x000107c61408(lVar16 + 0x20,4,uVar7);
    lVar16 = lVar11;
    func_0x000107c5f9dc(lVar11,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar11);
    uVar7 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f154a10);
    func_0x00010b28e718(0x10000,lVar16,uVar7);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar7);
  }
  uVar7 = *(undefined8 *)(lVar15 + 0x40);
  lVar16 = *(long *)(lVar15 + 0x48);
  func_0x0001000a8868(lVar15 + 0x28,uVar7);
  (**(code **)(lVar16 + 8))
            (uStack_70,abStack_90[0],*(undefined8 *)(puStack_88 + 0x10),uStack_78,puVar9,param_5,
             param_6,lVar17,uVar7,lVar16);
  func_0x000107c61574(puVar9);
  func_0x0001034da818(abStack_90);
  return abStack_90[0];
}



/* Entry: 1034d84fc; end: 1034d8663; -[SCAdImpressionDataDiffLogger compareAndLogWithLegacyData:swiftData:adIdentifier:builderMode:isPrimary:] */

uint FUN_1034d84fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c5ee30(param_3);
  uVar4 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c5ee30(param_4);
  uVar2 = uVar4;
  func_0x000107c61170(param_4);
  if (param_5 == 0) {
    lVar7 = 0;
    uVar6 = 0;
    uVar5 = uVar2;
  }
  else {
    lVar7 = param_5;
    func_0x000107c5faec(param_5);
    uVar5 = uVar2;
    func_0x000107c61170(param_5);
    uVar6 = uVar2;
  }
  uVar2 = param_6;
  func_0x000107c5faec(param_6);
  func_0x000107c61170(param_6);
  uVar3 = param_3;
  FUN_1034d7e54(param_3,param_2,uVar1,uVar4,lVar7,uVar6,uVar2,uVar5,param_7);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
  func_0x00010006c090(uVar1,uVar4);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
  return (uint)uVar3 & 1;
}


