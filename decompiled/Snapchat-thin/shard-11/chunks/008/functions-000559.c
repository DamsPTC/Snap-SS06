/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10895e2bc; end: 10895e447;  */

undefined8 FUN_10895e2bc(void)

{
  return 1;
}



/* Entry: 10895e448; end: 10895e45f;  */

undefined8 FUN_10895e448(void)

{
  func_0x00010895f854();
  return 1;
}



/* Entry: 10895e460; end: 10895e467;  */

undefined8 FUN_10895e460(void)

{
  return 1;
}



/* Entry: 10895e468; end: 10895e47f;  */

undefined8 FUN_10895e468(void)

{
  func_0x00010895f7f0();
  return 1;
}



/* Entry: 10895e480; end: 10895e483;  */

undefined8 FUN_10895e480(void)

{
  return 0;
}



/* Entry: 10895e484; end: 10895e49f;  */

undefined8 FUN_10895e484(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00010895decc(*param_3);
  return 1;
}



/* Entry: 10895e4a0; end: 10895e4a7;  */

undefined8 FUN_10895e4a0(void)

{
  return 0;
}



/* Entry: 10895e4a8; end: 10895e4ef;  */

undefined8
FUN_10895e4a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  func_0x00010895f6bc(*param_5);
  *param_5 = 2;
  FUN_10895de3c(*param_3);
  return 1;
}



/* Entry: 10895e4f0; end: 10895e4f7;  */

undefined8 FUN_10895e4f0(void)

{
  return 0;
}



/* Entry: 10895e4f8; end: 10895e50f;  */

undefined8 FUN_10895e4f8(void)

{
  func_0x00010895f7f0();
  return 1;
}



/* Entry: 10895e510; end: 10895e54b;  */

undefined8 FUN_10895e510(void)

{
  undefined1 *in_x4;
  
  func_0x00010895f6bc(*in_x4);
  *in_x4 = 3;
  return 1;
}



/* Entry: 10895e54c; end: 10895e553;  */

undefined8 FUN_10895e54c(void)

{
  return 0;
}



/* Entry: 10895e554; end: 10895e56b;  */

undefined8 FUN_10895e554(void)

{
  func_0x00010895f7f0();
  return 1;
}



/* Entry: 10895e56c; end: 10895e56f;  */

undefined8 FUN_10895e56c(void)

{
  return 0;
}



/* Entry: 10895e570; end: 10895e68b;  */

undefined8
FUN_10895e570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  code *extraout_x8;
  int extraout_w10;
  byte *unaff_x19;
  long *unaff_x21;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  func_0x00010895f718();
  uStack_60 = param_1;
  (*(code *)(&PTR_FUN_110a9eb80)[*param_5])(&uStack_60);
  *unaff_x19 = 4;
  lVar4 = *unaff_x21;
  puVar2 = *(undefined8 **)(lVar4 + 0xb8);
  uStack_58 = *(undefined8 *)(lVar4 + 0xd0);
  uStack_60 = *(undefined8 *)(lVar4 + 200);
  if (*(long *)(lVar4 + 0xd0) != 0) {
    do {
      func_0x00010895f7b0();
    } while (extraout_w10 != 0);
  }
  (**(code **)*puVar2)(&lStack_48);
  lVar1 = lStack_48;
  lStack_48 = 0;
  lVar3 = *(long *)(lVar4 + 0xe0);
  *(long *)(lVar4 + 0xe0) = lVar1;
  if (lVar3 != 0) {
    func_0x00010895f928();
    lVar1 = lStack_48;
    lStack_48 = 0;
    if (lVar1 != 0) {
      func_0x00010895f928();
    }
  }
  func_0x0001089554c4(&uStack_60);
  (**(code **)(**(long **)(lVar4 + 0xd8) + 0x30))();
  (**(code **)**(undefined8 **)(lVar4 + 0x28))(*(undefined8 **)(lVar4 + 0x28),lVar4 + 0x30);
  uStack_60 = param_1;
  func_0x00010895f708((&PTR_FUN_110a9eba8)[*unaff_x19],&uStack_60,param_2);
  (*extraout_x8)();
  return 1;
}



/* Entry: 10895e68c; end: 10895e68f;  */

undefined8 FUN_10895e68c(void)

{
  return 0;
}



/* Entry: 10895e690; end: 10895e6a7;  */

undefined8 FUN_10895e690(void)

{
  func_0x00010895f7f0();
  return 1;
}



/* Entry: 10895e6a8; end: 10895e6af;  */

undefined8 FUN_10895e6a8(void)

{
  return 1;
}



/* Entry: 10895e6b0; end: 10895e6c7;  */

undefined8 FUN_10895e6b0(void)

{
  func_0x00010895f854();
  return 1;
}



/* Entry: 10895e6c8; end: 10895e6cf;  */

undefined8 FUN_10895e6c8(void)

{
  return 1;
}



/* Entry: 10895e6d0; end: 10895e7a7;  */

undefined8 FUN_10895e6d0(void)

{
  func_0x00010895f64c();
  func_0x00010895f6bc();
  func_0x00010895f618();
  func_0x00010895e748();
  return 1;
}



/* Entry: 10895e7a8; end: 10895e7ab;  */

undefined8 FUN_10895e7a8(void)

{
  return 0;
}



/* Entry: 10895e7ac; end: 10895e7c3;  */

undefined8 FUN_10895e7ac(void)

{
  func_0x00010895f7f0();
  return 1;
}



/* Entry: 10895e7c4; end: 10895e7c7;  */

undefined8 FUN_10895e7c4(void)

{
  return 1;
}



/* Entry: 10895e7c8; end: 10895e7df;  */

undefined8 FUN_10895e7c8(void)

{
  func_0x00010895f854();
  return 1;
}



/* Entry: 10895e7e0; end: 10895e7e7;  */

undefined8 FUN_10895e7e0(void)

{
  return 1;
}



/* Entry: 10895e7e8; end: 10895e817;  */

undefined8 FUN_10895e7e8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(*param_3 + 0x28);
  (**(code **)(*plVar1 + 8))(plVar1,*param_1,*(undefined8 *)(*param_3 + 0xe8));
  return 1;
}



/* Entry: 10895e818; end: 10895e81b;  */

undefined8 FUN_10895e818(void)

{
  return 0;
}



/* Entry: 10895e81c; end: 10895e89b;  */

undefined8 FUN_10895e81c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *extraout_x8;
  long lVar8;
  
  lVar8 = *param_3;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar4 = *(undefined1 *)((long)param_1 + 0x14);
  lVar6 = *(long *)(lVar8 + 0x120);
  if (lVar6 != 0) {
    func_0x00010895f97c();
    iVar5 = (int)lVar6;
    (*extraout_x8)();
    if (iVar5 == 1) {
      return 1;
    }
  }
  plVar7 = *(long **)(lVar8 + 0x28);
  (**(code **)(*plVar7 + 0x20))(plVar7,uVar1,uVar2,uVar3,uVar4);
  return 1;
}



/* Entry: 10895e89c; end: 10895e89f;  */

undefined8 FUN_10895e89c(void)

{
  return 0;
}



/* Entry: 10895e8a0; end: 10895ee73;  */

undefined * FUN_10895e8a0(ulong *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined **ppuStack_20b8;
  undefined4 uStack_20b0;
  undefined8 *puStack_20a8;
  undefined8 *puStack_20a0;
  undefined8 *puStack_2098;
  undefined1 uStack_2090;
  undefined1 auStack_2088 [8];
  undefined4 uStack_2080;
  undefined8 *puStack_2078;
  undefined8 *puStack_2070;
  undefined8 *puStack_2068;
  undefined8 uStack_2060;
  long *plStack_2058;
  undefined8 uStack_2050;
  undefined8 *puStack_2048;
  undefined8 *puStack_2040;
  undefined8 *puStack_2038;
  undefined8 *puStack_2030;
  undefined8 *puStack_2028;
  undefined8 *puStack_2020;
  undefined8 *puStack_2018;
  undefined8 *puStack_2010;
  undefined8 *puStack_2008;
  undefined8 *puStack_2000;
  undefined8 uStack_1ff8;
  undefined4 uStack_1ff0;
  undefined8 *puStack_1fe8;
  undefined8 *puStack_1fe0;
  undefined8 *puStack_1fd8;
  undefined4 uStack_1fd0;
  code *pcStack_1fc8;
  code *pcStack_1fc0;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010895f66c();
  uVar14 = *param_1;
  lVar17 = *param_3;
  uVar6 = uVar14;
  uStack_78 = extraout_x8;
  func_0x00010b4fcc14();
  uVar5 = uVar6 == 0x1f7d;
  if (uVar6 < 0x1f7d) {
    _bzero(&uStack_1ff8,0x1f80);
    uStack_1ff8._0_4_ =
         CONCAT22((ushort)(uVar6 >> 8) & 0xff | (ushort)(((uint)uVar6 & 0xff00ff) << 8),
                  (undefined2)uStack_1ff8);
    func_0x00010b4d1758(uVar14,(long)&uStack_1ff8 + 4,0x1f7c);
    if ((uVar14 & 1) != 0) {
      func_0x00010895f97c(*(undefined8 *)(lVar17 + 0xd8));
      (*extraout_x8_00)();
      ppuStack_20b8 = (undefined **)((ulong)ppuStack_20b8 & 0xffffffffffffff00);
      uStack_2090 = 0;
      goto LAB_10895ed28;
    }
    FUN_108b80b94(&puStack_2020,0x7e9,&UNK_10f4ed645);
    ppuStack_20b8 = &PTR_FUN_110ab4390;
    uStack_20b0 = puStack_2018._0_4_;
    puStack_20a0 = puStack_2008;
    puStack_20a8 = puStack_2010;
    puStack_2098 = puStack_2000;
    puStack_2010 = (undefined8 *)0x0;
    puStack_2008 = (undefined8 *)0x0;
    puStack_2000 = (undefined8 *)0x0;
    func_0x000108b80d84(&puStack_2020);
    uStack_2090 = 1;
  }
  else {
    FUN_108b80b94(&uStack_1ff8,0x7e9,&UNK_10f4ed629);
    ppuStack_20b8 = &PTR_FUN_110ab4390;
    uStack_20b0 = uStack_1ff0;
    puStack_20a0 = puStack_1fe0;
    puStack_20a8 = puStack_1fe8;
    puStack_2098 = puStack_1fd8;
    puStack_1fe8 = (undefined8 *)0x0;
    puStack_1fe0 = (undefined8 *)0x0;
    puStack_1fd8 = (undefined8 *)0x0;
    uStack_2090 = 1;
    func_0x000108b80d84(&uStack_1ff8);
  }
  pppuVar7 = &ppuStack_20b8;
  FUN_108b80d14(auStack_2088);
  plVar18 = (long *)(param_2 + 0x78);
  puVar12 = *(undefined8 **)(param_2 + 0x58);
  puVar13 = *(undefined8 **)(param_2 + 0x60);
  uStack_1fd0 = 8;
  uVar6 = (long)puVar13 - (long)puVar12;
  pcStack_1fc8 = FUN_10895ef6c;
  pcStack_1fc0 = (code *)0x10895ef78;
  uStack_1ff8 = &PTR_FUN_110ab4390;
  uStack_1ff0 = uStack_2080;
  puStack_1fe0 = puStack_2070;
  puStack_1fe8 = puStack_2078;
  puStack_1fd8 = puStack_2068;
  puStack_2078 = (undefined8 *)0x0;
  puStack_2070 = (undefined8 *)0x0;
  puStack_2068 = (undefined8 *)0x0;
  lVar17 = 0;
  if (uVar6 != 0) {
    lVar17 = ((long)puVar13 - (long)puVar12) * 8 + -1;
  }
  uVar14 = *(ulong *)(param_2 + 0x70);
  uVar5 = 0;
  if (lVar17 == *plVar18 + uVar14) {
    if (uVar14 < 0x40) {
      puVar19 = (undefined8 *)(param_2 + 0x68);
      puVar8 = (undefined8 *)*puVar19;
      puVar16 = *(undefined8 **)(param_2 + 0x50);
      if ((ulong)((long)puVar8 - (long)puVar16) <= uVar6) {
        puVar10 = (undefined8 *)((long)puVar8 - (long)puVar16 >> 2);
        if (puVar8 == puVar16) {
          puVar10 = (undefined8 *)0x1;
        }
        puStack_2028 = puVar19;
        func_0x00010895eecc();
        puVar8 = (undefined8 *)((long)puVar10 + uVar6);
        puVar16 = puVar10 + (long)pppuVar7;
        uVar15 = 0x1000;
        pppuVar9 = pppuVar7;
        puStack_2048 = puVar10;
        puStack_2040 = puVar8;
        puStack_2038 = puVar8;
        puStack_2030 = puVar16;
        __Znwm();
        uStack_2050 = 0x40;
        puVar11 = puVar8;
        plStack_2058 = plVar18;
        if (uVar6 == (long)pppuVar7 * 8) {
          if (puVar13 == puVar12) {
            puVar13 = (undefined8 *)0x1;
            uStack_2060 = uVar15;
            puStack_2000 = puVar19;
            func_0x00010895eecc();
            puStack_2008 = puVar13 + (long)pppuVar9;
            puStack_2020 = puVar13;
            puStack_2018 = puVar13;
            puStack_2010 = puVar13;
            func_0x00010895eea4(&puStack_2020,puVar8,puVar8);
            puVar1 = puStack_2008;
            puVar11 = puStack_2010;
            puVar12 = puStack_2018;
            puVar13 = puStack_2020;
            puStack_2048 = puStack_2020;
            puStack_2040 = puStack_2018;
            puStack_2030 = puStack_2008;
            puStack_2020 = puVar10;
            puStack_2018 = puVar8;
            puStack_2010 = puVar8;
            puStack_2008 = puVar16;
            func_0x00010895ef2c(&puStack_2020);
            puVar10 = puVar13;
            puVar8 = puVar12;
            puVar16 = puVar1;
          }
          else {
            puVar8 = puVar8 + (((long)puVar8 - (long)puVar10 >> 3) + 1) / -2;
            puVar11 = puVar8;
            puStack_2040 = puVar8;
          }
        }
        puVar13 = puVar11 + 1;
        *puVar11 = uVar15;
        uStack_2060 = 0;
        puVar12 = *(undefined8 **)(param_2 + 0x60);
        puStack_2038 = puVar13;
        while( true ) {
          puVar11 = *(undefined8 **)(param_2 + 0x58);
          uVar5 = puVar12 == puVar11;
          if ((bool)uVar5) break;
          puVar11 = puVar8;
          if (puVar8 == puVar10) {
            if (puVar13 < puVar16) {
              lVar17 = (long)puVar13 - (long)puVar10;
              puVar1 = puVar13 + (((long)puVar16 - (long)puVar13 >> 3) + 1) / 2;
              puVar11 = (undefined8 *)((long)puVar1 - ((long)puVar13 - (long)puVar10));
              puVar13 = puVar1;
              if (lVar17 != 0) {
                _memmove(puVar11,puVar8,lVar17);
              }
            }
            else {
              lVar17 = (long)puVar16 - (long)puVar10 >> 2;
              if ((long)puVar16 - (long)puVar10 == 0) {
                lVar17 = 1;
              }
              puStack_2000 = puVar19;
              func_0x00010895eecc(lVar17);
              func_0x00010895f8a0(lVar17 << 1);
              func_0x00010895eea4(&puStack_2020,puVar10,puVar13);
              puVar4 = puStack_2008;
              puVar3 = puStack_2010;
              puVar11 = puStack_2018;
              puVar1 = puStack_2020;
              puStack_2020 = puVar10;
              puStack_2018 = puVar8;
              puStack_2010 = puVar13;
              puStack_2008 = puVar16;
              func_0x00010895ef2c(&puStack_2020);
              puVar10 = puVar1;
              puVar13 = puVar3;
              puVar16 = puVar4;
            }
          }
          puVar12 = puVar12 + -1;
          puVar8 = puVar11 + -1;
          *puVar8 = *puVar12;
        }
        puStack_2048 = *(undefined8 **)(param_2 + 0x50);
        *(undefined8 **)(param_2 + 0x50) = puVar10;
        *(undefined8 **)(param_2 + 0x58) = puVar8;
        puStack_2030 = *(undefined8 **)(param_2 + 0x68);
        puStack_2038 = *(undefined8 **)(param_2 + 0x60);
        *(undefined8 **)(param_2 + 0x60) = puVar13;
        *(undefined8 **)(param_2 + 0x68) = puVar16;
        puStack_2040 = puVar11;
        func_0x00010895ef00(&uStack_2060);
        func_0x00010895ef2c(&puStack_2048);
        goto LAB_10895ece8;
      }
      uVar15 = 0x1000;
      __Znwm();
      if (puVar8 == puVar13) {
        if (puVar12 == puVar16) {
          lVar17 = (long)puVar8 - (long)puVar12 >> 2;
          if (puVar13 == puVar12) {
            lVar17 = 1;
          }
          puStack_2000 = puVar19;
          func_0x00010895eecc(lVar17);
          func_0x00010895f8a0(lVar17 << 1);
          func_0x00010895eea4(&puStack_2020,*(undefined8 *)(param_2 + 0x58),
                              *(undefined8 *)(param_2 + 0x60));
          func_0x00010895f804();
          puVar12 = *(undefined8 **)(param_2 + 0x58);
        }
        puVar12[-1] = uVar15;
        puVar8 = *(undefined8 **)(param_2 + 0x58);
        puVar13 = *(undefined8 **)(param_2 + 0x60);
        puVar12 = puVar8 + -1;
        *(undefined8 **)(param_2 + 0x58) = puVar12;
        goto LAB_10895ea88;
      }
      *puVar13 = uVar15;
      uVar5 = 0;
    }
    else {
      *(ulong *)(param_2 + 0x70) = uVar14 - 0x40;
      puVar8 = puVar12 + 1;
LAB_10895ea88:
      uVar15 = *puVar12;
      *(undefined8 **)(param_2 + 0x58) = puVar8;
      uVar5 = 0;
      if (puVar13 == *(undefined8 **)(param_2 + 0x68)) {
        puVar12 = *(undefined8 **)(param_2 + 0x50);
        if (puVar8 < puVar12 || (long)puVar8 - (long)puVar12 == 0) {
          uVar5 = (long)puVar13 - (long)puVar12 == 0;
          puVar13 = (undefined8 *)((long)puVar13 - (long)puVar12 >> 2);
          if ((bool)uVar5) {
            puVar13 = (undefined8 *)0x1;
          }
          puVar12 = puVar13;
          puStack_2000 = (undefined8 *)(param_2 + 0x68);
          func_0x00010895eecc();
          puStack_2018 = puVar12 + ((ulong)puVar13 >> 2);
          puStack_2008 = puVar12 + (long)puVar8;
          puStack_2020 = puVar12;
          puStack_2010 = puStack_2018;
          func_0x00010895eea4(&puStack_2020,*(undefined8 *)(param_2 + 0x58),
                              *(undefined8 *)(param_2 + 0x60));
          func_0x00010895f804();
          puVar13 = *(undefined8 **)(param_2 + 0x60);
        }
        else {
          lVar17 = (((long)puVar8 - (long)puVar12 >> 3) + 1) / -2;
          puVar12 = puVar8 + lVar17;
          lVar2 = (long)puVar13 - (long)puVar8;
          uVar5 = lVar2 == 0;
          if (!(bool)uVar5) {
            _memmove(puVar12,puVar8,lVar2);
            puVar8 = *(undefined8 **)(param_2 + 0x58);
          }
          puVar13 = (undefined8 *)((long)puVar12 + lVar2);
          *(undefined8 **)(param_2 + 0x58) = puVar8 + lVar17;
          *(undefined8 **)(param_2 + 0x60) = puVar13;
        }
      }
      *puVar13 = uVar15;
    }
    *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 8;
  }
LAB_10895ece8:
  param_2 = param_2 + 0x50;
  FUN_10895ee74();
  *(undefined4 *)(param_2 + 0x28) = uStack_1fd0;
  *(code **)(param_2 + 0x30) = pcStack_1fc8;
  *(code **)(param_2 + 0x38) = pcStack_1fc0;
  (*pcStack_1fc0)();
  *plVar18 = *plVar18 + 1;
  FUN_10895ef88(&uStack_1ff8);
  func_0x00010895f7a0();
LAB_10895ed28:
  func_0x000104c05024(&ppuStack_20b8);
  func_0x00010895f5f4(uStack_78);
  if ((bool)uVar5) {
    return (undefined *)0x1;
  }
  ___stack_chk_fail();
  func_0x00010895ef00(&uStack_2060);
  func_0x00010895ef2c(&puStack_2048);
  FUN_10895ef88(&uStack_1ff8);
  func_0x00010895f7a0();
  pppuVar7 = &ppuStack_20b8;
  func_0x000104c05024();
  func_0x00010895f73c();
  if (pppuVar7[2] != pppuVar7[1]) {
    return pppuVar7[1][(ulong)((long)pppuVar7[4] + (long)pppuVar7[5]) >> 6] +
           ((long)pppuVar7[4] + (long)pppuVar7[5] & 0x3fU) * 0x40;
  }
  return (undefined *)0x0;
}



/* Entry: 10895ee74; end: 10895eecb;  */

long FUN_10895ee74(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 6) * 8) + (uVar1 & 0x3f) * 0x40;
  }
  return 0;
}



/* Entry: 10895eecc; end: 10895ef6b;  */

undefined1  [16] FUN_10895eecc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10895ef6c; end: 10895ef87;  */

void FUN_10895ef6c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010895ef74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 10895ef88; end: 10895efaf;  */

long FUN_10895ef88(long param_1)

{
  (**(code **)(param_1 + 0x30))();
  return param_1;
}



/* Entry: 10895efb0; end: 10895efb3;  */

undefined8 FUN_10895efb0(void)

{
  return 0;
}



/* Entry: 10895efb4; end: 10895efff;  */

undefined8 FUN_10895efb4(int *param_1,undefined8 param_2,long *param_3)

{
  code *extraout_x8;
  long lVar1;
  
  lVar1 = *param_3;
  if (*param_1 == 2) {
    func_0x000107c28144();
  }
  else {
    func_0x0001053a4504(lVar1 + 0x108);
  }
  func_0x00010895f97c(*(undefined8 *)(lVar1 + 0x28));
  (*extraout_x8)();
  return 1;
}



/* Entry: 10895f000; end: 10895f003;  */

undefined8 FUN_10895f000(void)

{
  return 0;
}



/* Entry: 10895f004; end: 10895f027;  */

undefined8 FUN_10895f004(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *extraout_x8;
  
  func_0x00010895f85c(*(undefined8 *)(*param_3 + 0x28));
  (*extraout_x8)();
  return 1;
}



/* Entry: 10895f028; end: 10895f02b;  */

undefined8 FUN_10895f028(void)

{
  return 0;
}



/* Entry: 10895f02c; end: 10895f0df;  */

undefined8 FUN_10895f02c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  (**(code **)(**(long **)(lVar1 + 0xd8) + 0x18))();
  (**(code **)(**(long **)(lVar1 + 0xe0) + 0x38))();
  return 1;
}



/* Entry: 10895f0e0; end: 10895f117;  */

void FUN_10895f0e0(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_108b80d54();
    return;
  }
  func_0x00010895f8f4();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10895f118; end: 10895f167;  */

long * FUN_10895f118(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010895f7f8();
  }
  return param_1;
}



/* Entry: 10895f168; end: 10895f17f;  */

void FUN_10895f168(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10895f19c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10895f180; end: 10895f19b;  */

void FUN_10895f180(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10895f19c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895f19c; end: 10895f1c7;  */

long FUN_10895f19c(long param_1)

{
  func_0x000104c05024(param_1 + 0xa0);
  FUN_10895f1c8(param_1 + 0x68);
  return param_1;
}



/* Entry: 10895f1c8; end: 10895f2eb;  */

long * FUN_10895f1c8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)(param_1[1] + ((ulong)param_1[4] >> 6) * 8);
  if (param_1[2] == param_1[1]) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(*plVar7 + (param_1[4] & 0x3fU) * 0x40);
  }
  plVar1 = param_1;
  FUN_10895ee74();
  do {
    plVar8 = plVar4 + -0x200;
    do {
      if (plVar4 == plVar1) {
        param_1[5] = 0;
        puVar5 = (undefined8 *)param_1[1];
        while( true ) {
          puVar6 = (undefined8 *)param_1[2];
          uVar2 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar5;
        }
        if (uVar2 == 1) {
          lVar3 = 0x20;
        }
        else {
          if (uVar2 != 2) goto LAB_10895f2a8;
          lVar3 = 0x40;
        }
        param_1[4] = lVar3;
LAB_10895f2a8:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        lVar3 = param_1[2];
        while (lVar3 != param_1[1]) {
          lVar3 = lVar3 + -8;
          param_1[2] = lVar3;
        }
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      FUN_10895ef88(plVar4);
      plVar4 = plVar4 + 8;
      plVar8 = plVar8 + 8;
    } while ((long *)*plVar7 != plVar8);
    plVar7 = plVar7 + 1;
    plVar4 = (long *)*plVar7;
  } while( true );
}



/* Entry: 10895f2ec; end: 10895f4cb;  */

void FUN_10895f2ec(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_390 [64];
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 *puStack_340;
  undefined8 uStack_338;
  undefined1 auStack_2a0 [72];
  long lStack_258;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [504];
  undefined8 uStack_38;
  
  puVar1 = auStack_390;
  puVar3 = auStack_390;
  func_0x00010895f66c();
  uStack_38 = extraout_x8;
  func_0x000107c2837c(auStack_390);
  func_0x000107c28378(auStack_390,param_2);
  lVar5 = *param_2;
  *param_2 = (long)puVar1;
  param_2[1] = param_2[1] + (lVar5 - (long)puVar1);
  puStack_248 = auStack_230;
  ppuStack_250 = &PTR_DAT_11099bc38;
  uStack_238 = 500;
  uStack_240 = 0;
  lVar5 = param_3[3];
  lStack_258 = lVar5;
  func_0x000107c284f4(auStack_2a0,&ppuStack_250);
  FUN_10895b8b0(&puStack_340,auStack_2a0);
  if (lVar5 != 0) {
    lVar5 = *(long *)(puStack_340 + -0x18);
    func_0x00010bd490d0(auStack_350,&lStack_258);
    FUN_1083d3eac(auStack_348,(long)&puStack_340 + lVar5,auStack_350);
    __ZNSt3__16localeD1Ev(auStack_348);
    __ZNSt3__16localeD1Ev(auStack_350);
  }
  ppuVar2 = &puStack_340;
  func_0x00010549023c(ppuVar2,&DAT_10f62a9e8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x00010549023c();
  (**(code **)(*param_1 + 0x10))(param_1);
  func_0x00010549023c(ppuVar2,param_1);
  func_0x00010549023c();
  FUN_10895b954((long)&puStack_340 + *(long *)(puStack_340 + -0x18),5);
  func_0x000107c283e0(&ppuStack_250,uStack_240);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(&puStack_340);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_2a0);
  puStack_340 = puStack_248;
  uStack_338 = uStack_240;
  func_0x000107c28388(auStack_390,&puStack_340,param_3);
  func_0x000107c283e8(&ppuStack_250);
  *param_3 = puVar3;
  func_0x00010895f5f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__16localeD1Ev(auStack_350);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(&puStack_340);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_2a0);
  pppuVar4 = &ppuStack_250;
  func_0x000107c283e8();
  func_0x00010895f73c();
  *(undefined1 *)(pppuVar4[2] + 0x27) = 0;
  return;
}



/* Entry: 10895f4cc; end: 10895f987;  */

void FUN_10895f4cc(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x138) = 0;
  return;
}



/* Entry: 10895f988; end: 10895fb8f;  */

void FUN_10895f988(undefined8 *param_1,uint *param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar8 = '\x02';
  puVar5 = (undefined8 *)((long)param_1 + 0x1c);
  *puVar5 = 0;
  *(undefined1 *)((long)param_1 + 1) = 2;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  puVar9 = (undefined8 *)((long)param_1 + 0x24);
  *puVar9 = 0;
  *(undefined1 *)((long)param_1 + 0x1d) = 2;
  puVar7 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  puVar3 = param_2;
  puVar6 = puVar7;
  do {
    if (puVar6 == puVar1) {
      cVar8 = *(char *)((long)param_2 + 1);
      puVar6 = param_1;
      if (cVar8 != '\x02') {
        puVar6 = puVar5;
        puVar5 = param_1;
      }
      uVar10 = *(undefined8 *)param_2;
      puVar6[1] = *(undefined8 *)(param_2 + 2);
      *puVar6 = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 3);
      *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)(param_2 + 5);
      *(undefined8 *)((long)puVar6 + 0xc) = uVar10;
      while( true ) {
        if (puVar7 == puVar1) {
          return;
        }
        if ((cVar8 == '\x02') != (*(char *)((long)puVar7 + 1) == '\x02')) break;
        puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
      }
      uVar10 = *puVar7;
      puVar5[1] = puVar7[1];
      *puVar5 = uVar10;
      uVar10 = *(undefined8 *)((long)puVar7 + 0xc);
      *(undefined8 *)((long)puVar5 + 0x14) = *(undefined8 *)((long)puVar7 + 0x14);
      *(undefined8 *)((long)puVar5 + 0xc) = uVar10;
      return;
    }
    if (param_4 ==
        ((uint)(*(ushort *)((long)puVar6 + 2) >> 8) |
        (*(ushort *)((long)puVar6 + 2) & 0xff00ff) << 8)) {
      if (*(char *)((long)puVar6 + 1) == '\x02') {
        if (cVar8 == '\x02') {
          func_0x00010895fbb8();
        }
        else {
          func_0x00010895fb9c();
        }
        func_0x00010895fb90();
        if ((int)puVar3 != 0) {
          uVar10 = *puVar6;
          param_1[1] = puVar6[1];
          *param_1 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar6 + 0xc);
          *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar6 + 0x14);
          *(undefined8 *)((long)param_1 + 0xc) = uVar10;
          cVar8 = *(char *)((long)param_1 + 1);
        }
      }
      else {
        if (*(char *)((long)param_1 + 0x1d) == '\x02') {
          uVar4 = *(undefined4 *)(param_1 + 4);
          uStack_74 = 0;
          uStack_6c = 0;
          uStack_64 = 0;
        }
        else {
          uVar4 = 0;
          uStack_6c = *(undefined8 *)((long)param_1 + 0x2c);
          uStack_74 = *puVar9;
          uStack_64 = *(undefined4 *)((long)param_1 + 0x34);
        }
        func_0x00010895fb90(uVar4);
        if ((int)puVar3 != 0) {
          uVar10 = *puVar6;
          *(undefined8 *)((long)param_1 + 0x24) = puVar6[1];
          *puVar5 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar6 + 0xc);
          param_1[6] = *(undefined8 *)((long)puVar6 + 0x14);
          param_1[5] = uVar10;
        }
      }
    }
    if (cVar8 == '\x02') {
      func_0x00010895fbb8();
    }
    else {
      func_0x00010895fb9c();
    }
    func_0x00010895fb90();
    if (((ulong)puVar3 & 1) == 0) {
      bVar2 = *(char *)((long)param_1 + 0x1d) != '\x02';
      if (bVar2) {
        uStack_94 = 0;
        uStack_88 = *(undefined8 *)((long)param_1 + 0x2c);
        uStack_90 = *puVar9;
        uStack_80 = *(undefined4 *)((long)param_1 + 0x34);
      }
      else {
        uStack_94 = *(undefined4 *)(param_1 + 4);
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      uStack_98 = (uint)bVar2;
      puVar3 = &uStack_98;
      func_0x00010bd43668();
      if (((ulong)puVar3 & 1) == 0) {
        return;
      }
    }
    puVar6 = (undefined8 *)((long)puVar6 + 0x1c);
  } while( true );
}



/* Entry: 10895fb90; end: 10895fbcb;  */

bool FUN_10895fb90(void)

{
  bool bVar1;
  int in_w8;
  int in_w9;
  char cStack000000000000003c;
  char cStack000000000000003d;
  char cStack000000000000003e;
  char cStack000000000000003f;
  char cStack0000000000000040;
  char cStack0000000000000041;
  char cStack0000000000000042;
  char cStack0000000000000043;
  char cStack0000000000000044;
  char cStack0000000000000045;
  char cStack0000000000000046;
  char cStack0000000000000047;
  char cStack0000000000000048;
  char cStack0000000000000049;
  char cStack000000000000004a;
  char cStack000000000000004b;
  
  if (in_w9 == 0) {
    bVar1 = in_w8 == 0;
  }
  else {
    if (((((cStack000000000000003c != '\0') || (cStack000000000000003d != '\0')) ||
         (cStack000000000000003e != '\0')) ||
        (((cStack000000000000003f != '\0' || (cStack0000000000000040 != '\0')) ||
         ((cStack0000000000000041 != '\0' ||
          ((cStack0000000000000042 != '\0' || (cStack0000000000000043 != '\0')))))))) ||
       ((cStack0000000000000044 != '\0' ||
        (((((cStack0000000000000045 != '\0' || (cStack0000000000000046 != '\0')) ||
           (cStack0000000000000047 != '\0')) ||
          ((cStack0000000000000048 != '\0' || (cStack0000000000000049 != '\0')))) ||
         (cStack000000000000004a != '\0')))))) {
      return false;
    }
    bVar1 = cStack000000000000004b == '\0';
  }
  return bVar1;
}



/* Entry: 10895fbcc; end: 10895fbfb;  */

undefined8 * FUN_10895fbcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ee60;
  func_0x000104c04a68(param_1 + 2);
  return param_1;
}



/* Entry: 10895fbfc; end: 10895fbff;  */

undefined8 * FUN_10895fbfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ee60;
  func_0x000104c04a68(param_1 + 2);
  return param_1;
}



/* Entry: 10895fc00; end: 10895fc13;  */

void FUN_10895fc00(void)

{
  FUN_10895fbcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895fc14; end: 10895fcbf;  */

void FUN_10895fc14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = 0x140;
  __Znwm();
  FUN_10895fcf0();
  FUN_108960060(uVar1,in_x3);
  *param_1 = uVar1;
  return;
}



/* Entry: 10895fcc0; end: 10895fcef;  */

void FUN_10895fcc0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10895fcf0; end: 10895febb;  */

void FUN_10895fcf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  
  func_0x000108962b1c();
  func_0x000108962aa8();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = *param_5;
  lVar2 = param_5[1];
  *(long *)(param_1 + 0x30) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108962a18();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = *param_6;
  lVar2 = param_6[1];
  *(long *)(unaff_x19 + 0x40) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108962a18();
    } while (extraout_w10_00 != 0);
  }
  *(undefined **)(unaff_x19 + 0x48) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined **)(unaff_x19 + 0x68) = &UNK_10e52b660;
  *(undefined1 *)(unaff_x19 + 0x108) = 0;
  *(undefined2 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined1 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = param_2;
  func_0x000107c2793c(&UNK_10f4ed696);
  func_0x000107c3173c(unaff_x19 + 0x120);
  plVar1 = (long *)0xd8;
  __Znwm();
  *plVar1 = unaff_x19;
  plVar1[2] = 0;
  plVar1[3] = 0;
  *(undefined4 *)(plVar1 + 4) = 0;
  plVar1[1] = 0;
  *(undefined1 *)((long)plVar1 + 9) = 2;
  plVar1[5] = (long)(plVar1 + 1);
  plVar1[6] = 0;
  plVar1[0xb] = (long)&UNK_10f4ed6b3;
  plVar1[7] = 0;
  plVar1[8] = (long)&DAT_10f36b6d1;
  *(undefined1 *)((long)plVar1 + 0x62) = 0;
  *(undefined2 *)(plVar1 + 0xc) = 0;
  *(undefined2 *)((long)plVar1 + 99) = 0;
  *(undefined1 *)((long)plVar1 + 0x65) = 0;
  plVar1[0xe] = (long)&UNK_10f4ed54b;
  *(undefined2 *)(plVar1 + 0xf) = 0;
  plVar1[0x11] = (long)&UNK_10f684e5a;
  *(undefined2 *)((long)plVar1 + 0x91) = 0;
  plVar1[0x13] = (long)&UNK_10f4ed6be;
  plVar1[0x1a] = 0;
  plVar1[0x19] = 0;
  plVar1[0x18] = 0;
  plVar1[0x17] = 0;
  plVar1[0x16] = 0;
  plVar1[0x15] = 0;
  *(undefined1 *)(plVar1 + 0x14) = 0;
  *(long **)(unaff_x19 + 0x138) = plVar1;
  return;
}



/* Entry: 10895febc; end: 108960037;  */

void FUN_10895febc(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  FUN_108962aa8();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  lVar4 = *(long *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (lVar4 == 0) {
LAB_10895ffe0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x120);
    FUN_1089596b8(unaff_x19 + 0xa0);
    FUN_108960d54(unaff_x19 + 0x98);
    func_0x000108962638(unaff_x19 + 0x88);
    FUN_108960918(unaff_x19 + 0x68);
    FUN_108960940(unaff_x19 + 0x48);
    func_0x000108953b44(unaff_x19 + 0x38);
    func_0x000104c04a68(unaff_x19 + 0x28);
    return;
  }
  plVar8 = (long *)(*(long *)(lVar4 + 0xb0) + (*(ulong *)(lVar4 + 200) >> 5) * 8);
  if (*(long *)(lVar4 + 0xb8) == *(long *)(lVar4 + 0xb0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar8 + (*(ulong *)(lVar4 + 200) & 0x1f) * 0x80;
  }
  lVar1 = lVar4 + 0xa8;
  FUN_108960d80();
  do {
    lVar9 = lVar5 + -0x1000;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(lVar4 + 0xd0) = 0;
        puVar6 = *(undefined8 **)(lVar4 + 0xb0);
        while( true ) {
          puVar7 = *(undefined8 **)(lVar4 + 0xb8);
          uVar2 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb0) + 8);
          *(undefined8 **)(lVar4 + 0xb0) = puVar6;
        }
        if (uVar2 == 1) {
          uVar3 = 0x10;
LAB_10895ff9c:
          *(undefined8 *)(lVar4 + 200) = uVar3;
        }
        else if (uVar2 == 2) {
          uVar3 = 0x20;
          goto LAB_10895ff9c;
        }
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        lVar5 = *(long *)(lVar4 + 0xb8);
        while (lVar5 != *(long *)(lVar4 + 0xb0)) {
          lVar5 = lVar5 + -8;
          *(long *)(lVar4 + 0xb8) = lVar5;
        }
        if (*(long *)(lVar4 + 0xa8) != 0) {
          __ZdlPv();
        }
        __ZdlPv(lVar4);
        goto LAB_10895ffe0;
      }
      FUN_108960db0(lVar5);
      lVar5 = lVar5 + 0x80;
      lVar9 = lVar9 + 0x80;
    } while (*plVar8 != lVar9);
    plVar8 = plVar8 + 1;
    lVar5 = *plVar8;
  } while( true );
}



/* Entry: 108960038; end: 108960043;  */

void FUN_108960038(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  FUN_108962aa8();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  lVar4 = *(long *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (lVar4 == 0) {
LAB_10895ffe0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x120);
    FUN_1089596b8(unaff_x19 + 0xa0);
    FUN_108960d54(unaff_x19 + 0x98);
    func_0x000108962638(unaff_x19 + 0x88);
    FUN_108960918(unaff_x19 + 0x68);
    FUN_108960940(unaff_x19 + 0x48);
    func_0x000108953b44(unaff_x19 + 0x38);
    func_0x000104c04a68(unaff_x19 + 0x28);
    return;
  }
  plVar8 = (long *)(*(long *)(lVar4 + 0xb0) + (*(ulong *)(lVar4 + 200) >> 5) * 8);
  if (*(long *)(lVar4 + 0xb8) == *(long *)(lVar4 + 0xb0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar8 + (*(ulong *)(lVar4 + 200) & 0x1f) * 0x80;
  }
  lVar1 = lVar4 + 0xa8;
  FUN_108960d80();
  do {
    lVar9 = lVar5 + -0x1000;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(lVar4 + 0xd0) = 0;
        puVar6 = *(undefined8 **)(lVar4 + 0xb0);
        while( true ) {
          puVar7 = *(undefined8 **)(lVar4 + 0xb8);
          uVar2 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb0) + 8);
          *(undefined8 **)(lVar4 + 0xb0) = puVar6;
        }
        if (uVar2 == 1) {
          uVar3 = 0x10;
LAB_10895ff9c:
          *(undefined8 *)(lVar4 + 200) = uVar3;
        }
        else if (uVar2 == 2) {
          uVar3 = 0x20;
          goto LAB_10895ff9c;
        }
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        lVar5 = *(long *)(lVar4 + 0xb8);
        while (lVar5 != *(long *)(lVar4 + 0xb0)) {
          lVar5 = lVar5 + -8;
          *(long *)(lVar4 + 0xb8) = lVar5;
        }
        if (*(long *)(lVar4 + 0xa8) != 0) {
          __ZdlPv();
        }
        __ZdlPv(lVar4);
        goto LAB_10895ffe0;
      }
      FUN_108960db0(lVar5);
      lVar5 = lVar5 + 0x80;
      lVar9 = lVar9 + 0x80;
    } while (*plVar8 != lVar9);
    plVar8 = plVar8 + 1;
    lVar5 = *plVar8;
  } while( true );
}



/* Entry: 108960044; end: 108960057;  */

void FUN_108960044(void)

{
  FUN_10895febc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108960058; end: 10896005f;  */

void FUN_108960058(long param_1)

{
  FUN_10895febc(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108960060; end: 10896009b;  */

void FUN_108960060(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10896009c(&uStack_28,param_2,2);
  FUN_10896009c(&uStack_28,param_2 + 0x1c,0x1e);
  return;
}



/* Entry: 10896009c; end: 108960163;  */

void FUN_10896009c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = (int)&uStack_50;
  bVar2 = *(char *)(param_2 + 1) != '\x02';
  if (bVar2) {
    uVar3 = 0;
    uStack_40 = *(undefined8 *)(param_2 + 0x10);
    uStack_48 = *(undefined8 *)(param_2 + 8);
    uStack_38 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  plVar4 = (long *)*param_1;
  uStack_50 = CONCAT44(uVar3,(uint)bVar2);
  uStack_34 = param_3;
  func_0x00010bd43668();
  if (iVar1 == 0) {
    (**(code **)(*plVar4 + 0x60))(&uStack_50,plVar4,param_2);
    FUN_10896099c(plVar4 + 9,&uStack_34);
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10896099c(plVar4 + 9,&uStack_34);
  }
  FUN_1089609c4();
  func_0x000108962a30();
  return;
}



/* Entry: 108960164; end: 10896036f;  */

void FUN_108960164(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x0001089628b8();
  func_0x0001089628a0();
  func_0x000108962840();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar3 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x000108962ad4();
                    /* WARNING: Could not recover jumptable at 0x0001089629e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108960370; end: 10896037b;  */

void FUN_108960370(long param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_50 [32];
  
  param_1 = param_1 + -8;
  uVar2 = param_2 == 2;
  if ((bool)uVar2) {
    func_0x000108962868(param_1);
    func_0x000108962794((&PTR_FUN_110a9f340)[extraout_x8_03],auStack_50);
    func_0x000108962840();
    lVar3 = extraout_x8_04;
    lVar4 = extraout_x8_04;
    do {
      while (lVar3 != 0) {
        func_0x0001089626c0();
        func_0x00010896295c();
        lVar3 = *(long *)(unaff_x20 + 0xd0);
      }
      bVar1 = lVar4 != 0;
      lVar4 = 0;
    } while (bVar1);
  }
  else {
    uVar2 = param_2 == 1;
    if ((bool)uVar2) {
      func_0x000108962868(param_1);
      func_0x000108962794((&PTR_FUN_110a9f2b0)[extraout_x8_01],auStack_50);
      func_0x000108962840();
      lVar3 = extraout_x8_02;
      lVar4 = extraout_x8_02;
      do {
        while (lVar3 != 0) {
          func_0x0001089626c0();
          func_0x00010896295c();
          lVar3 = *(long *)(unaff_x20 + 0xd0);
        }
        bVar1 = lVar4 != 0;
        lVar4 = 0;
      } while (bVar1);
    }
    else {
      if (param_2 != 0) {
        return;
      }
      func_0x000108962868(param_1);
      func_0x000108962794((&PTR_FUN_110a9f220)[extraout_x8],auStack_50);
      func_0x000108962840();
      lVar3 = extraout_x8_00;
      lVar4 = extraout_x8_00;
      do {
        while (lVar3 != 0) {
          func_0x0001089626c0();
          func_0x00010896295c();
          lVar3 = *(long *)(unaff_x20 + 0xd0);
        }
        bVar1 = lVar4 != 0;
        lVar4 = 0;
      } while (bVar1);
    }
  }
  func_0x000108962890();
  if ((bool)uVar2) {
    func_0x0001089627e4();
  }
  return;
}



/* Entry: 10896037c; end: 1089603d7;  */

void FUN_10896037c(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x0001089628b8();
  func_0x0001089628a0();
  func_0x000108962840();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar3 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x000108962ad4();
                    /* WARNING: Could not recover jumptable at 0x0001089629e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1089603d8; end: 1089603df;  */

void FUN_1089603d8(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x0001089628b8(param_1 + -8);
  func_0x0001089628a0();
  func_0x000108962840();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar3 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x000108962ad4();
                    /* WARNING: Could not recover jumptable at 0x0001089629e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1089603e0; end: 1089604ab;  */

void FUN_1089603e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  func_0x000108962804();
  func_0x000108962794((&PTR_DAT_110a9f520)[extraout_x8],&uStack_38);
  func_0x000108962840();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar3 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x0001089627e4();
  }
  return;
}



/* Entry: 1089604ac; end: 1089604b3;  */

void FUN_1089604ac(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 uStack_31;
  
  func_0x000108962804(param_1 + -0x10);
  func_0x000108962794((&PTR_FUN_110a9f460)[extraout_x8],&uStack_31);
  func_0x000108962840();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar3 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x0001089627e4();
  }
  return;
}



/* Entry: 1089604b4; end: 1089605e7;  */

void FUN_1089604b4(undefined8 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  int extraout_w10;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  bVar1 = *(byte *)(param_2 + 0x100);
  lVar2 = 0x5e8;
  __Znwm();
  func_0x000107c278b8(&uStack_60,&UNK_10f4ed69f);
  FUN_108b8183c(lVar2,param_2 + 0xa0,bVar1 & 1,&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = 0x60;
  __Znwm();
  uStack_60 = uVar6;
  uStack_58 = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x000108962a18();
    } while (extraout_w10 != 0);
  }
  lStack_48 = lVar2;
  FUN_1089550e0(uVar3,param_2 + 0x10,uVar4,&uStack_60,&lStack_48);
  if (lStack_48 != 0) {
    func_0x0001089627cc();
  }
  func_0x0001089554c4(&uStack_60);
  *param_1 = uVar3;
  return;
}



/* Entry: 1089605e8; end: 1089606c7;  */

void FUN_1089605e8(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = (undefined8 *)0x1d8;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a9f590;
  puVar1 = puVar2 + 3;
  FUN_108950d54(puVar1,param_3,uVar3,param_2 + 8,uVar4,param_2 + 0x28,param_2 + 0x38,&UNK_10df78a80)
  ;
  puStack_60 = puVar1;
  puStack_58 = puVar2;
  (**(code **)(puVar2[3] + 0x18))(puVar1);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  FUN_108962698(&puStack_60);
  return;
}



/* Entry: 1089606c8; end: 10896071f;  */

void FUN_1089606c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  FUN_108960720();
  while (lVar1 != 0) {
    if ((*(long *)(lVar2 + 8) != 0) && (*(long *)(lVar2 + 8) != *(long *)(param_1 + 0x88))) {
      func_0x000108962aec();
    }
    func_0x000108962ae4();
  }
  return;
}



/* Entry: 108960720; end: 108960747;  */

undefined1  [16] FUN_108960720(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000108960cfc(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 108960748; end: 10896077b;  */

long * FUN_108960748(long *param_1)

{
  param_1[1] = param_1[1] + 0x18;
  *param_1 = *param_1 + 1;
  func_0x000108960cfc();
  return param_1;
}



/* Entry: 10896077c; end: 108960793;  */

int * FUN_10896077c(long param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long extraout_x9;
  ulong extraout_x10;
  ulong uVar9;
  ulong extraout_x10_00;
  ulong extraout_x11;
  long extraout_x11_00;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  ulong uVar13;
  long extraout_x13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  ulong uVar23;
  
  param_2 = param_2 & 0xff;
  uVar5 = param_2 == 2;
  if (!(bool)uVar5) {
    param_2 = 0x1e;
  }
  uVar7 = (ulong)param_2;
  puVar6 = (undefined8 *)(param_1 + 0x48);
  Hint_Prefetch(*puVar6,0,2,0);
  func_0x000108962b50(*puVar6);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = extraout_x11;
  uVar11 = SUB168(auVar3 * auVar4,8) ^ extraout_x10 * extraout_x11;
  uVar13 = extraout_x8 >> 0xc ^ uVar11 >> 7;
  lVar8 = puVar6[1];
  uVar9 = puVar6[2];
  bVar10 = (byte)uVar11 & 0x7f;
  lVar12 = 0x18;
  uVar11 = extraout_x8;
  bVar16 = bVar10;
  bVar17 = bVar10;
  bVar18 = bVar10;
  bVar19 = bVar10;
  bVar20 = bVar10;
  bVar21 = bVar10;
  bVar22 = bVar10;
  while( true ) {
    uVar23 = *(ulong *)(uVar11 + (uVar13 & uVar9));
    for (uVar14 = CONCAT17(-((byte)(uVar23 >> 0x38) == bVar22),
                           CONCAT16(-((byte)(uVar23 >> 0x30) == bVar21),
                                    CONCAT15(-((byte)(uVar23 >> 0x28) == bVar20),
                                             CONCAT14(-((byte)(uVar23 >> 0x20) == bVar19),
                                                      CONCAT13(-((byte)(uVar23 >> 0x18) == bVar18),
                                                               CONCAT12(-((byte)(uVar23 >> 0x10) ==
                                                                         bVar17),CONCAT11(-((byte)(
                                                  uVar23 >> 8) == bVar16),-((byte)uVar23 == bVar10))
                                                  )))))) & 0x8080808080808080; uVar14 != 0;
        uVar14 = uVar14 - 1 & uVar14) {
      uVar2 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      piVar15 = (int *)(lVar8 + ((uVar13 & uVar9) +
                                 ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar9) *
                                lVar12);
      uVar5 = *piVar15 == (int)uVar7;
      if ((bool)uVar5) {
        if (uVar11 != 0) {
          return piVar15 + 2;
        }
        goto LAB_10896084c;
      }
    }
    func_0x000108962b30();
    if ((uVar23 & 1) != 0) break;
    uVar13 = extraout_x9 + 8 + extraout_x13;
    uVar11 = extraout_x8_00;
    uVar9 = extraout_x10_00;
    lVar8 = extraout_x11_00;
    lVar12 = extraout_x12;
  }
LAB_10896084c:
  func_0x000108962b04();
  func_0x000108962804();
  piVar15 = (int *)&stack0xffffffffffffffbf;
  func_0x000108962794((&PTR_FUN_110a9f1c0)[extraout_x8_01],piVar15);
  func_0x000108962840();
  lVar8 = extraout_x8_02;
  lVar12 = extraout_x8_02;
  do {
    while (lVar8 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar8 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar12 != 0;
    lVar12 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)uVar5) {
    func_0x0001089627e4();
  }
  return piVar15;
}



/* Entry: 108960794; end: 10896084f;  */

int * FUN_108960794(undefined8 *param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  long extraout_x9;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  ulong extraout_x11;
  long extraout_x11_00;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  ulong uVar10;
  long extraout_x13;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  ulong uVar20;
  
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000108962b50(*param_1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = extraout_x11;
  uVar8 = SUB168(auVar3 * auVar4,8) ^ extraout_x10 * extraout_x11;
  uVar10 = extraout_x8 >> 0xc ^ uVar8 >> 7;
  lVar5 = param_1[1];
  uVar6 = param_1[2];
  bVar7 = (byte)uVar8 & 0x7f;
  lVar9 = 0x18;
  uVar8 = extraout_x8;
  bVar13 = bVar7;
  bVar14 = bVar7;
  bVar15 = bVar7;
  bVar16 = bVar7;
  bVar17 = bVar7;
  bVar18 = bVar7;
  bVar19 = bVar7;
  while( true ) {
    uVar20 = *(ulong *)(uVar8 + (uVar10 & uVar6));
    for (uVar11 = CONCAT17(-((byte)(uVar20 >> 0x38) == bVar19),
                           CONCAT16(-((byte)(uVar20 >> 0x30) == bVar18),
                                    CONCAT15(-((byte)(uVar20 >> 0x28) == bVar17),
                                             CONCAT14(-((byte)(uVar20 >> 0x20) == bVar16),
                                                      CONCAT13(-((byte)(uVar20 >> 0x18) == bVar15),
                                                               CONCAT12(-((byte)(uVar20 >> 0x10) ==
                                                                         bVar14),CONCAT11(-((byte)(
                                                  uVar20 >> 8) == bVar13),-((byte)uVar20 == bVar7)))
                                                  ))))) & 0x8080808080808080; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      piVar12 = (int *)(lVar5 + ((uVar10 & uVar6) +
                                 ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar6) *
                                lVar9);
      in_ZR = *piVar12 == param_2;
      if ((bool)in_ZR) {
        if (uVar8 != 0) {
          return piVar12 + 2;
        }
        goto LAB_10896084c;
      }
    }
    func_0x000108962b30();
    if ((uVar20 & 1) != 0) break;
    uVar10 = extraout_x9 + 8 + extraout_x13;
    uVar8 = extraout_x8_00;
    uVar6 = extraout_x10_00;
    lVar5 = extraout_x11_00;
    lVar9 = extraout_x12;
  }
LAB_10896084c:
  func_0x000108962b04();
  func_0x000108962804();
  piVar12 = (int *)&stack0xffffffffffffffbf;
  func_0x000108962794((&PTR_FUN_110a9f1c0)[extraout_x8_01],piVar12);
  func_0x000108962840();
  lVar5 = extraout_x8_02;
  lVar9 = extraout_x8_02;
  do {
    while (lVar5 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar5 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar9 != 0;
    lVar9 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x0001089627e4();
  }
  return piVar12;
}



/* Entry: 108960850; end: 108960917;  */

void FUN_108960850(void)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 uStack_31;
  
  func_0x000108962804();
  func_0x000108962794((&PTR_FUN_110a9f1c0)[extraout_x8],&uStack_31);
  func_0x000108962840();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x0001089626c0();
      func_0x00010896295c();
      lVar3 = *(long *)(unaff_x20 + 0xd0);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x000108962890();
  if ((bool)in_ZR) {
    func_0x0001089627e4();
  }
  return;
}



/* Entry: 108960918; end: 10896093f;  */

long FUN_108960918(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000108962af8();
  }
  return param_1;
}



/* Entry: 108960940; end: 10896099b;  */

undefined8 * FUN_108960940(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1] + 8;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x000108962638(lVar2);
      }
      lVar2 = lVar2 + 0x18;
      pcVar1 = pcVar1 + 1;
    }
    func_0x000108962af8();
  }
  return param_1;
}



/* Entry: 10896099c; end: 1089609c3;  */

long FUN_10896099c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1089609fc(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1089609c4; end: 1089609fb;  */

undefined8 * FUN_1089609c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108962a30();
  return param_1;
}



/* Entry: 1089609fc; end: 108960a57;  */

void FUN_1089609fc(long *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = (uint)param_3;
  plVar2 = param_2;
  FUN_108960a58();
  if ((uVar3 & 1) != 0) {
    puVar4 = (undefined4 *)(param_2[1] + (long)plVar2 * 0x18);
    *puVar4 = *param_3;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x18;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 108960a58; end: 108960b33;  */

undefined1  [16] FUN_108960a58(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long extraout_x9;
  ulong uVar7;
  ulong extraout_x10;
  ulong uVar8;
  ulong extraout_x11;
  ulong uVar9;
  ulong extraout_x12;
  byte bVar10;
  long lVar11;
  long extraout_x13;
  long extraout_x14;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  uVar8 = (ulong)*param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + uVar8;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + uVar8) * -0x622015f714c7d297;
  uVar9 = param_1[2];
  uVar5 = uVar3 >> 7 ^ uVar7 >> 0xc;
  bVar10 = (byte)uVar3 & 0x7f;
  lVar11 = 0x18;
  bVar12 = bVar10;
  bVar13 = bVar10;
  bVar14 = bVar10;
  bVar15 = bVar10;
  bVar16 = bVar10;
  bVar17 = bVar10;
  bVar18 = bVar10;
  while( true ) {
    uVar3 = *(ulong *)(uVar7 + (uVar5 & uVar9));
    for (uVar7 = CONCAT17(-((byte)(uVar3 >> 0x38) == bVar18),
                          CONCAT16(-((byte)(uVar3 >> 0x30) == bVar17),
                                   CONCAT15(-((byte)(uVar3 >> 0x28) == bVar16),
                                            CONCAT14(-((byte)(uVar3 >> 0x20) == bVar15),
                                                     CONCAT13(-((byte)(uVar3 >> 0x18) == bVar14),
                                                              CONCAT12(-((byte)(uVar3 >> 0x10) ==
                                                                        bVar13),CONCAT11(-((byte)(
                                                  uVar3 >> 8) == bVar12),-((byte)uVar3 == bVar10))))
                                                  )))) & 0x8080808080808080; uVar7 != 0;
        uVar7 = uVar7 - 1 & uVar7) {
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar6 = (ulong *)((uVar5 & uVar9) + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                        uVar9);
      if (*(int *)(param_1[1] + (long)puVar6 * lVar11) == (int)uVar8) {
        uVar4 = 0;
        goto LAB_108960b18;
      }
    }
    func_0x000108962b30();
    if ((uVar3 & 1) != 0) break;
    uVar5 = extraout_x9 + 8 + extraout_x14;
    uVar7 = extraout_x10;
    uVar8 = extraout_x11;
    uVar9 = extraout_x12;
    lVar11 = extraout_x13;
  }
  FUN_108960b34();
  uVar4 = 1;
  puVar6 = param_1;
LAB_108960b18:
  auVar19._8_8_ = uVar4;
  auVar19._0_8_ = puVar6;
  return auVar19;
}



/* Entry: 108960b34; end: 108960c03;  */

void FUN_108960b34(long *param_1,undefined *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong extraout_x8_00;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  plVar5 = param_1;
  puVar7 = param_2;
  func_0x000108962ac4();
  func_0x000107c2b954();
  lVar8 = *param_1;
  if ((*(long *)(lVar8 + -8) == 0) && (*(char *)(lVar8 + (long)plVar5) != -2)) {
    uVar10 = param_1[2];
    bVar3 = 8 < uVar10;
    if ((bVar3) && (func_0x000108962b3c(), uVar10 = extraout_x8_00, bVar3)) {
      puVar7 = &UNK_110a9f000;
      func_0x000108962b10();
    }
    else {
      puVar7 = (undefined *)(uVar10 << 1 | 1);
      plVar5 = param_1;
      FUN_108960c04();
    }
    func_0x0001089629a8();
    lVar8 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  uVar4 = *(char *)(lVar8 + (long)plVar5) == -0x80;
  *(ulong *)(lVar8 + -8) = *(long *)(lVar8 + -8) - (ulong)(byte)uVar4;
  func_0x000108962900((uint)param_2 & 0x7f);
  func_0x0001089629b4();
  func_0x000108962994(extraout_x8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *plVar5;
  puVar9 = (uint *)plVar5[1];
  lVar11 = plVar5[2];
  plVar5[2] = (long)puVar7;
  func_0x000107810840();
  lVar12 = plVar5[1];
  for (lVar8 = 0; lVar11 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar9;
      uVar10 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar9) * -0x622015f714c7d297;
      plVar6 = plVar5;
      func_0x000107c2b954(plVar5,uVar10);
      func_0x000108962900((uint)uVar10 & 0x7f);
      func_0x0001089629b4();
      FUN_108960cc8(lVar12 + (long)plVar6 * 0x18,puVar9);
    }
    puVar9 = puVar9 + 6;
  }
  if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 108960c04; end: 108960cc7;  */

void FUN_108960c04(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  puVar4 = (uint *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  func_0x000107810840();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar4;
      uVar5 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar4) * -0x622015f714c7d297;
      plVar3 = param_1;
      func_0x000107c2b954(param_1,uVar5);
      func_0x000108962900((uint)uVar5 & 0x7f);
      func_0x0001089629b4();
      FUN_108960cc8(lVar8 + (long)plVar3 * 0x18,puVar4);
    }
    puVar4 = puVar4 + 6;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 108960cc8; end: 108960d53;  */

undefined8 * FUN_108960cc8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  if (*(long *)(param_2 + 4) != 0) {
    func_0x000107c278a0();
  }
  return puVar1;
}



/* Entry: 108960d54; end: 108960d7f;  */

long * FUN_108960d54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001089627cc();
  }
  return param_1;
}



/* Entry: 108960d80; end: 108960daf;  */

long FUN_108960d80(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 5) * 8) + (uVar1 & 0x1f) * 0x80;
  }
  return 0;
}



/* Entry: 108960db0; end: 108960dd7;  */

long FUN_108960db0(long param_1)

{
  (**(code **)(param_1 + 0x70))();
  return param_1;
}



/* Entry: 108960dd8; end: 108960e1f;  */

void FUN_108960dd8(long param_1,long param_2)

{
  FUN_108960720();
  while (param_1 != 0) {
    if (*(long **)(param_2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 8) + 0x38))();
    }
    func_0x000108962ae4();
  }
  return;
}



/* Entry: 108960e20; end: 108960ed3;  */

void FUN_108960e20(undefined8 *param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  pppuVar1 = &ppuStack_70;
  pppuVar2 = &ppuStack_70;
  (**(code **)*param_1)();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_1107eac58;
  uStack_68 = 0;
  uStack_50 = 9;
  FUN_108957fd0(&ppuStack_70,*(char *)(param_2 + 1) != '\x02');
  func_0x000108942850(auStack_48,pppuVar1);
  func_0x000104c03ee4();
  FUN_1089a3c0c();
  (**(code **)((long)**pppuVar2 + 8))(*pppuVar2,auStack_48,1);
  func_0x000104c03ee4(auStack_48);
  return;
}



/* Entry: 108960ed4; end: 108960f27;  */

void FUN_108960ed4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  (**(code **)(*param_1 + 0x58))(&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  lVar2 = param_1[0x13];
  param_1[0x13] = lVar1;
  if (lVar2 != 0) {
    func_0x0001089627cc();
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001089627cc();
    }
  }
  return;
}



/* Entry: 108960f28; end: 10896109b;  */

undefined8 FUN_108960f28(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x60)) {
  case 0:
    break;
  case 1:
  case 4:
    return 0;
  case 2:
    break;
  case 3:
    func_0x00010896285c();
    return 1;
  case 5:
    func_0x000108962780(param_4,param_1);
    func_0x00010896298c();
    return 1;
  default:
    return 0;
  case 8:
    FUN_108961194(*(undefined8 *)(*param_2 + 0x48),*(undefined8 *)(*param_2 + 0x50),param_2,param_3)
    ;
    lStack_38 = *param_2;
    FUN_1089611d4(&lStack_38,2);
    FUN_1089611d4(&lStack_38,0x1e);
    lVar2 = *param_2;
    lVar1 = *param_4;
    if (*(char *)(lVar2 + 0x108) == '\x01') {
      func_0x000107c27cfc(lVar2 + 0xa0,lVar1);
      func_0x000107c27cfc(lVar2 + 0xb8,lVar1 + 0x18);
      func_0x000107c27cfc(lVar2 + 0xd0,lVar1 + 0x30);
      func_0x000107c27cfc(lVar2 + 0xe8,lVar1 + 0x48);
      *(undefined1 *)(lVar2 + 0x100) = *(undefined1 *)(lVar1 + 0x60);
    }
    else {
      FUN_108959604(lVar2 + 0xa0,lVar1);
    }
    return 1;
  }
  return 1;
}



/* Entry: 10896109c; end: 1089610b3;  */

undefined8 FUN_10896109c(void)

{
  func_0x00010896285c();
  return 1;
}



/* Entry: 1089610b4; end: 1089610d3;  */

undefined8 FUN_1089610b4(void)

{
  func_0x000108962780();
  func_0x00010896298c();
  return 1;
}



/* Entry: 1089610d4; end: 1089610d7;  */

undefined8 FUN_1089610d4(void)

{
  return 0;
}



/* Entry: 1089610d8; end: 108961193;  */

undefined8 FUN_1089610d8(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  FUN_108961194(*(undefined8 *)(*param_3 + 0x48),*(undefined8 *)(*param_3 + 0x50));
  lStack_38 = *param_3;
  FUN_1089611d4(&lStack_38,2);
  FUN_1089611d4(&lStack_38,0x1e);
  lVar2 = *param_3;
  lVar1 = *param_1;
  if (*(char *)(lVar2 + 0x108) == '\x01') {
    func_0x000107c27cfc(lVar2 + 0xa0,lVar1);
    func_0x000107c27cfc(lVar2 + 0xb8,lVar1 + 0x18);
    func_0x000107c27cfc(lVar2 + 0xd0,lVar1 + 0x30);
    func_0x000107c27cfc(lVar2 + 0xe8,lVar1 + 0x48);
    *(undefined1 *)(lVar2 + 0x100) = *(undefined1 *)(lVar1 + 0x60);
  }
  else {
    FUN_108959604(lVar2 + 0xa0,lVar1);
  }
  return 1;
}



/* Entry: 108961194; end: 1089611d3;  */

void FUN_108961194(long param_1,long param_2)

{
  FUN_108960720();
  while (param_1 != 0) {
    if (*(long *)(param_2 + 8) != 0) {
      func_0x000108962aec();
    }
    func_0x000108962ae4();
  }
  return;
}



/* Entry: 1089611d4; end: 1089612d7;  */

void FUN_1089611d4(long *param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  ulong extraout_x8;
  undefined8 *puVar9;
  long extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar10;
  ulong extraout_x11_00;
  long extraout_x12;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  ulong uVar22;
  
  plVar5 = (long *)(*param_1 + 0x48);
  FUN_108960794();
  lVar14 = *plVar5;
  lVar13 = *param_1;
  puVar6 = (undefined8 *)(lVar13 + 0x68);
  Hint_Prefetch(*puVar6,0,2,0);
  func_0x000108962b50((long)&PTR_LOOP_110c8acd8 + (ulong)param_2);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = extraout_x11;
  uVar7 = SUB168(auVar3 * auVar4,8) ^ extraout_x8 * extraout_x11;
  uVar10 = *(ulong *)(lVar13 + 0x78);
  bVar8 = (byte)uVar7 & 0x7f;
  uVar7 = extraout_x10 >> 0xc ^ uVar7 >> 7;
  uVar11 = extraout_x10;
  bVar15 = bVar8;
  bVar16 = bVar8;
  bVar17 = bVar8;
  bVar18 = bVar8;
  bVar19 = bVar8;
  bVar20 = bVar8;
  bVar21 = bVar8;
  while( true ) {
    uVar22 = *(ulong *)(uVar11 + (uVar7 & uVar10));
    for (uVar11 = CONCAT17(-((byte)(uVar22 >> 0x38) == bVar21),
                           CONCAT16(-((byte)(uVar22 >> 0x30) == bVar20),
                                    CONCAT15(-((byte)(uVar22 >> 0x28) == bVar19),
                                             CONCAT14(-((byte)(uVar22 >> 0x20) == bVar18),
                                                      CONCAT13(-((byte)(uVar22 >> 0x18) == bVar17),
                                                               CONCAT12(-((byte)(uVar22 >> 0x10) ==
                                                                         bVar16),CONCAT11(-((byte)(
                                                  uVar22 >> 8) == bVar15),-((byte)uVar22 == bVar8)))
                                                  ))))) & 0x8080808080808080; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar12 = *(long *)(lVar13 + 0x70);
      puVar9 = (undefined8 *)
               ((uVar7 & uVar10) + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar10);
      if (*(uint *)(lVar12 + (long)puVar9 * 8) == param_2) goto LAB_1089612c0;
    }
    func_0x000108962b30();
    if ((uVar22 & 1) != 0) break;
    uVar7 = extraout_x9 + 8 + extraout_x12;
    uVar11 = extraout_x10_00;
    uVar10 = extraout_x11_00;
  }
  FUN_1089612d8();
  puVar1 = (uint *)(*(long *)(lVar13 + 0x70) + (long)puVar6 * 8);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  lVar12 = *(long *)(lVar13 + 0x70);
  puVar9 = puVar6;
LAB_1089612c0:
  *(bool *)(lVar12 + (long)puVar9 * 8 + 4) = lVar14 == 0;
  return;
}



/* Entry: 1089612d8; end: 10896139f;  */

void FUN_1089612d8(long *param_1,undefined *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  ulong uVar10;
  ulong extraout_x8_00;
  uint *puVar11;
  long lVar12;
  long lVar13;
  
  plVar6 = param_1;
  puVar8 = param_2;
  func_0x000108962ac4();
  func_0x000107c2b954();
  lVar9 = *param_1;
  if ((*(long *)(lVar9 + -8) == 0) && (*(char *)(lVar9 + (long)plVar6) != -2)) {
    uVar10 = param_1[2];
    bVar4 = 8 < uVar10;
    if ((bVar4) && (func_0x000108962b3c(), uVar10 = extraout_x8_00, bVar4)) {
      puVar8 = &UNK_110a9f080;
      func_0x000108962b10();
    }
    else {
      puVar8 = (undefined *)(uVar10 << 1 | 1);
      plVar6 = param_1;
      FUN_1089613a0();
    }
    func_0x0001089629a8();
    lVar9 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = *(char *)(lVar9 + (long)plVar6) == -0x80;
  *(ulong *)(lVar9 + -8) = *(long *)(lVar9 + -8) - (ulong)(byte)uVar5;
  func_0x000108962900((uint)param_2 & 0x7f);
  func_0x0001089629b4();
  func_0x000108962994(extraout_x8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *plVar6;
  puVar11 = (uint *)plVar6[1];
  lVar12 = plVar6[2];
  plVar6[2] = (long)puVar8;
  plVar7 = plVar6;
  func_0x000107516d6c();
  lVar13 = plVar6[1];
  for (lVar9 = 0; lVar12 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      uVar2 = *puVar11;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar2;
      func_0x0001089629a8();
      func_0x000108962900((SUB164(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar2) * -0x14c7d297) & 0x7f);
      func_0x0001089629b4();
      *(undefined8 *)(lVar13 + (long)plVar7 * 8) = *(undefined8 *)puVar11;
    }
    puVar11 = puVar11 + 2;
  }
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}


