/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7eaa00; end: 10b7eaa1b;  */

bool FUN_10b7eaa00(uint param_1)

{
  return param_1 < 0x25 || param_1 == 0x2715;
}



/* Entry: 10b7eaa1c; end: 10b7eaa97;  */

undefined * FUN_10b7eaa1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137faff0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f880d8,
                        &UNK_10e5e3bf4,&UNK_10e5e3e00,0x12,FUN_10b7eaa98,0);
    do {
      if (puRam00000001137faff0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137faff0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137faff0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137faff0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137faff0;
}



/* Entry: 10b7eaa98; end: 10b7eaaa3;  */

bool FUN_10b7eaa98(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 10b7eaaa4; end: 10b7eab1f;  */

undefined * FUN_10b7eaaa4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137faff8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f880f8,
                        &UNK_10e5e3e48,&UNK_10e5e3e78,2,FUN_10b7eab20,0);
    do {
      if (puRam00000001137faff8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137faff8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137faff8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137faff8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137faff8;
}



/* Entry: 10b7eab20; end: 10b7eab2b;  */

bool FUN_10b7eab20(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eab2c; end: 10b7eaba7;  */

undefined * FUN_10b7eab2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb000 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88118,
                        &UNK_10e5e3e80,&UNK_10e5e3eb8,3,FUN_10b7eaba8,0);
    do {
      if (puRam00000001137fb000 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb000;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb000,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb000 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb000;
}



/* Entry: 10b7eaba8; end: 10b7eabb3;  */

bool FUN_10b7eaba8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7eabb4; end: 10b7eac2f;  */

undefined * FUN_10b7eabb4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb008 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88138,
                        &UNK_10e5e3ec4,&UNK_10e5e3edc,2,FUN_10b7eac30,0);
    do {
      if (puRam00000001137fb008 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb008;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb008,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb008 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb008;
}



/* Entry: 10b7eac30; end: 10b7eac3b;  */

bool FUN_10b7eac30(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eac3c; end: 10b7eacb7;  */

undefined * FUN_10b7eac3c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb010 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88158,
                        &UNK_10e5e3ee4,&UNK_10e5e3f10,2,FUN_10b7eacb8,0);
    do {
      if (puRam00000001137fb010 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb010;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb010,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb010 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb010;
}



/* Entry: 10b7eacb8; end: 10b7eacc3;  */

bool FUN_10b7eacb8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eacc4; end: 10b7ead3f;  */

undefined * FUN_10b7eacc4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb018 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ec66f8,
                        &UNK_10e5e3f18,&UNK_10e5e3f58,5,FUN_10b7ead40,0);
    do {
      if (puRam00000001137fb018 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb018;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb018,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb018 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb018;
}



/* Entry: 10b7ead40; end: 10b7ead4b;  */

bool FUN_10b7ead40(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7ead4c; end: 10b7eaddb;  */

undefined * FUN_10b7ead4c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb020 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dec718,
                        &UNK_10e5e3f6c,&UNK_10e5e3f98,2,FUN_10b7eaddc,0,&UNK_10e5e3fa0);
    do {
      if (puRam00000001137fb020 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb020;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb020,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb020 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb020;
}



/* Entry: 10b7eaddc; end: 10b7eade7;  */

bool FUN_10b7eaddc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eade8; end: 10b7eae63;  */

undefined * FUN_10b7eade8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb028 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e4fcd8,
                        &UNK_10e5e3fac,&UNK_10e5e3fd4,2,FUN_10b7eae64,0);
    do {
      if (puRam00000001137fb028 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb028;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb028,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb028 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb028;
}



/* Entry: 10b7eae64; end: 10b7eae6f;  */

bool FUN_10b7eae64(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eae70; end: 10b7eaeff;  */

undefined * FUN_10b7eae70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb030 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e66d38,
                        &UNK_10e5e3fdc,&UNK_10e5e5400,0x98,FUN_10b7eaf00,0,&UNK_10e5e5660);
    do {
      if (puRam00000001137fb030 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb030;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb030,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb030 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb030;
}



/* Entry: 10b7eaf00; end: 10b7eb083;  */

undefined8 FUN_10b7eaf00(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 900) {
    if (param_1 < 500) {
      if (param_1 < 300) {
        if (((0x1d < param_1 - 100U) || ((1 << (ulong)(param_1 - 100U & 0x1f) & 0x3ffe4fffU) == 0))
           && (param_1 != 0)) {
          return 0;
        }
      }
      else if ((6 < param_1 - 300U) && (2 < param_1 - 400U)) {
        return 0;
      }
    }
    else if (param_1 < 700) {
      if (((8 < param_1 - 500U) || (param_1 - 500U == 7)) && (5 < param_1 - 600U)) {
        return 0;
      }
    }
    else if ((0xe < param_1 - 700U) && (7 < param_1 - 800U)) {
      return 0;
    }
    return uVar1;
  }
  if (param_1 < 0x5dc) {
    if (param_1 < 0x44c) {
      if (param_1 - 900U < 0xd) {
        return uVar1;
      }
      if (param_1 - 1000U < 7) {
        return uVar1;
      }
      return 0;
    }
    if (param_1 - 0x44cU < 8) {
      return uVar1;
    }
    if (param_1 - 0x514U < 4) {
      return uVar1;
    }
    if (5 < param_1 - 0x578U) {
      return 0;
    }
    if ((1 << (ulong)(param_1 - 0x578U & 0x1f) & 0x2bU) != 0) {
      return uVar1;
    }
    return 0;
  }
  if (param_1 < 0x708) {
    if (param_1 - 0x6a4U < 0x17) {
      return uVar1;
    }
    if (param_1 - 0x5dcU < 8) {
      return uVar1;
    }
    if (param_1 - 0x640U < 5) {
      return uVar1;
    }
    return 0;
  }
  if (0x76b < param_1) {
    if (param_1 - 0x76cU < 3) {
      return uVar1;
    }
    if (param_1 == 2000) {
      return uVar1;
    }
    return 0;
  }
  if (param_1 == 0x708) {
    return uVar1;
  }
  if (param_1 == 0x726) {
    return uVar1;
  }
  return 0;
}



/* Entry: 10b7eb084; end: 10b7eb0ff;  */

undefined * FUN_10b7eb084(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb038 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88178,
                        &UNK_10e5e5b54,&UNK_10e5e6318,0x3a,FUN_10b7eb100,0);
    do {
      if (puRam00000001137fb038 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb038;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb038,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb038 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb038;
}



/* Entry: 10b7eb100; end: 10b7eb10b;  */

bool FUN_10b7eb100(uint param_1)

{
  return param_1 < 0x3a;
}



/* Entry: 10b7eb10c; end: 10b7eb19b;  */

undefined * FUN_10b7eb10c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dcf0d8,
                        &UNK_10e5e6400,&UNK_10e5e66c8,0x1b,FUN_10b7eb19c,0,&UNK_10e5e6734);
    do {
      if (puRam00000001137fb040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb040;
}



/* Entry: 10b7eb19c; end: 10b7eb1a7;  */

bool FUN_10b7eb19c(uint param_1)

{
  return param_1 < 0x1b;
}



/* Entry: 10b7eb1a8; end: 10b7eb223;  */

undefined * FUN_10b7eb1a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb048 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88198,
                        &UNK_10e5e6740,&UNK_10e5e6874,7,FUN_10b7eb224,0);
    do {
      if (puRam00000001137fb048 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb048;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb048,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb048 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb048;
}



/* Entry: 10b7eb224; end: 10b7eb22f;  */

bool FUN_10b7eb224(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7eb230; end: 10b7eb2ab;  */

undefined * FUN_10b7eb230(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb050 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f881b8,
                        &UNK_10e5e6890,&UNK_10e5e69c4,0xd,FUN_10b7eb2ac,0);
    do {
      if (puRam00000001137fb050 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb050;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb050,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb050 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb050;
}



/* Entry: 10b7eb2ac; end: 10b7eb2b7;  */

bool FUN_10b7eb2ac(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10b7eb2b8; end: 10b7eb333;  */

undefined * FUN_10b7eb2b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb058 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dcee78,
                        &UNK_10e5e69f8,&UNK_10e5e6ad4,0xb,FUN_10b7eb334,0);
    do {
      if (puRam00000001137fb058 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb058;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb058,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb058 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb058;
}



/* Entry: 10b7eb334; end: 10b7eb33f;  */

bool FUN_10b7eb334(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10b7eb340; end: 10b7eb3bb;  */

undefined * FUN_10b7eb340(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb060 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f881d8,
                        &UNK_10e5e6b00,&UNK_10e5e6b58,4,FUN_10b7eb3bc,0);
    do {
      if (puRam00000001137fb060 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb060;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb060,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb060 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb060;
}



/* Entry: 10b7eb3bc; end: 10b7eb3c7;  */

bool FUN_10b7eb3bc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7eb3c8; end: 10b7eb443;  */

undefined * FUN_10b7eb3c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb068 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f881f8,
                        &UNK_10e5e6b68,&UNK_10e5e6c84,0xf,FUN_10b7eb444,0);
    do {
      if (puRam00000001137fb068 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb068;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb068,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb068 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb068;
}



/* Entry: 10b7eb444; end: 10b7eb44f;  */

bool FUN_10b7eb444(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b7eb450; end: 10b7eb4cb;  */

undefined * FUN_10b7eb450(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb070 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88218,
                        &UNK_10e5e6cc0,&UNK_10e5e6d10,4,FUN_10b7eb4cc,0);
    do {
      if (puRam00000001137fb070 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb070;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb070,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb070 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb070;
}



/* Entry: 10b7eb4cc; end: 10b7eb4d7;  */

bool FUN_10b7eb4cc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7eb4d8; end: 10b7eb553;  */

undefined * FUN_10b7eb4d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb078 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e82f18,
                        &UNK_10e5e6d20,&UNK_10e5e6de4,8,FUN_10b7eb554,0);
    do {
      if (puRam00000001137fb078 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb078;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb078,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb078 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb078;
}



/* Entry: 10b7eb554; end: 10b7eb56b;  */

uint FUN_10b7eb554(uint param_1)

{
  return (uint)(param_1 < 9) & 0x1fbU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10b7eb56c; end: 10b7eb5e7;  */

undefined * FUN_10b7eb56c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb080 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88238,
                        &UNK_10e5e6e04,&UNK_10e5e6e24,2,FUN_10b7eb5e8,0);
    do {
      if (puRam00000001137fb080 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb080;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb080,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb080 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb080;
}



/* Entry: 10b7eb5e8; end: 10b7eb5f3;  */

bool FUN_10b7eb5e8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eb5f4; end: 10b7eb66f;  */

undefined * FUN_10b7eb5f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb088 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88258,
                        &UNK_10e5e6e2c,&UNK_10e5e6e54,2,FUN_10b7eb670,0);
    do {
      if (puRam00000001137fb088 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb088;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb088,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb088 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb088;
}



/* Entry: 10b7eb670; end: 10b7eb67b;  */

bool FUN_10b7eb670(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eb67c; end: 10b7eb6f7;  */

undefined * FUN_10b7eb67c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb090 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88278,
                        &UNK_10e5e6e5c,&UNK_10e5e6ea4,4,FUN_10b7eb6f8,0);
    do {
      if (puRam00000001137fb090 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb090;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb090,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb090 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb090;
}



/* Entry: 10b7eb6f8; end: 10b7eb703;  */

bool FUN_10b7eb6f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7eb704; end: 10b7eb77f;  */

undefined * FUN_10b7eb704(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb098 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df1158,
                        &UNK_10e5e6eb4,&UNK_10e5e7078,0xe,FUN_10b7eb780,0);
    do {
      if (puRam00000001137fb098 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb098;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb098,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb098 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb098;
}



/* Entry: 10b7eb780; end: 10b7eb78b;  */

bool FUN_10b7eb780(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b7eb78c; end: 10b7eb807;  */

undefined * FUN_10b7eb78c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88298,
                        &UNK_10e5e70b0,&UNK_10e5e70f0,3,FUN_10b7eb808,0);
    do {
      if (puRam00000001137fb0a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0a0;
}



/* Entry: 10b7eb808; end: 10b7eb813;  */

bool FUN_10b7eb808(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7eb814; end: 10b7eb88f;  */

undefined * FUN_10b7eb814(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f59558,
                        &UNK_10e5e70fc,&UNK_10e5e71d8,0xb,FUN_10b7eb890,0);
    do {
      if (puRam00000001137fb0a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0a8;
}



/* Entry: 10b7eb890; end: 10b7eb89b;  */

bool FUN_10b7eb890(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10b7eb89c; end: 10b7eb917;  */

undefined * FUN_10b7eb89c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f882b8,
                        &UNK_10e5e7204,&UNK_10e5e7258,5,FUN_10b7eb918,0);
    do {
      if (puRam00000001137fb0b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0b0;
}



/* Entry: 10b7eb918; end: 10b7eb923;  */

bool FUN_10b7eb918(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7eb924; end: 10b7eb99f;  */

undefined * FUN_10b7eb924(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f72698,
                        &UNK_10e5e726c,&UNK_10e5e73c4,0x10,FUN_10b7eb9a0,0);
    do {
      if (puRam00000001137fb0b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0b8;
}



/* Entry: 10b7eb9a0; end: 10b7eb9ab;  */

bool FUN_10b7eb9a0(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10b7eb9ac; end: 10b7eba27;  */

undefined * FUN_10b7eb9ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f882d8,
                        &UNK_10e5e7404,&UNK_10e5e7438,4,FUN_10b7eba28,0);
    do {
      if (puRam00000001137fb0c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0c0;
}



/* Entry: 10b7eba28; end: 10b7eba5f;  */

undefined8 FUN_10b7eba28(int param_1)

{
  if (param_1 < 200) {
    if ((param_1 != 0) && (param_1 != 100)) {
      return 0;
    }
  }
  else if ((param_1 != 200) && (param_1 != 300)) {
    return 0;
  }
  return 1;
}



/* Entry: 10b7eba60; end: 10b7ebadb;  */

undefined * FUN_10b7eba60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f882f8,
                        &UNK_10e5e7448,&UNK_10e5e75e0,0xf,FUN_10b7ebadc,0);
    do {
      if (puRam00000001137fb0c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0c8;
}



/* Entry: 10b7ebadc; end: 10b7ebae7;  */

bool FUN_10b7ebadc(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b7ebae8; end: 10b7ebb63;  */

undefined * FUN_10b7ebae8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6aa18,
                        &UNK_10e5e761c,&UNK_10e5e78a8,0x1d,FUN_10b7ebb64,0);
    do {
      if (puRam00000001137fb0d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0d0;
}



/* Entry: 10b7ebb64; end: 10b7ebb6f;  */

bool FUN_10b7ebb64(uint param_1)

{
  return param_1 < 0x1d;
}



/* Entry: 10b7ebb70; end: 10b7ebbeb;  */

undefined * FUN_10b7ebb70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88318,
                        &UNK_10e5e791c,&UNK_10e5e796c,4,FUN_10b7ebbec,0);
    do {
      if (puRam00000001137fb0d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0d8;
}



/* Entry: 10b7ebbec; end: 10b7ebbf7;  */

bool FUN_10b7ebbec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7ebbf8; end: 10b7ebc73;  */

undefined * FUN_10b7ebbf8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88338,
                        &UNK_10e5e797c,&UNK_10e5e7e68,0x25,FUN_10b7ebc74,0);
    do {
      if (puRam00000001137fb0e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0e0;
}



/* Entry: 10b7ebc74; end: 10b7ebc7f;  */

bool FUN_10b7ebc74(uint param_1)

{
  return param_1 < 0x25;
}



/* Entry: 10b7ebc80; end: 10b7ebcfb;  */

undefined * FUN_10b7ebc80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6a258,
                        &UNK_10e5e7efc,&UNK_10e5e7fd8,8,FUN_10b7ebcfc,0);
    do {
      if (puRam00000001137fb0e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0e8;
}



/* Entry: 10b7ebcfc; end: 10b7ebd07;  */

bool FUN_10b7ebcfc(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7ebd08; end: 10b7ebd83;  */

undefined * FUN_10b7ebd08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88358,
                        &UNK_10e5e7ff8,&UNK_10e5e80f8,10,FUN_10b7ebd84,0);
    do {
      if (puRam00000001137fb0f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0f0;
}



/* Entry: 10b7ebd84; end: 10b7ebdab;  */

bool FUN_10b7ebd84(uint param_1)

{
  if ((param_1 < 10) && (param_1 != 5)) {
    return true;
  }
  return param_1 == 100;
}



/* Entry: 10b7ebdac; end: 10b7ebe27;  */

undefined * FUN_10b7ebdac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb0f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88378,
                        &UNK_10e5e8120,&UNK_10e5e8140,2,FUN_10b7ebe28,0);
    do {
      if (puRam00000001137fb0f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb0f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb0f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb0f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb0f8;
}



/* Entry: 10b7ebe28; end: 10b7ebe33;  */

bool FUN_10b7ebe28(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ebe34; end: 10b7ebeaf;  */

undefined * FUN_10b7ebe34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb100 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88398,
                        &UNK_10e5e8148,&UNK_10e5e81ac,5,FUN_10b7ebeb0,0);
    do {
      if (puRam00000001137fb100 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb100;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb100,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb100 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb100;
}



/* Entry: 10b7ebeb0; end: 10b7ebebb;  */

bool FUN_10b7ebeb0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7ebebc; end: 10b7ebf37;  */

undefined * FUN_10b7ebebc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb108 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f883b8,
                        &UNK_10e5e81c0,&UNK_10e5e8334,0xf,FUN_10b7ebf38,0);
    do {
      if (puRam00000001137fb108 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb108;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb108,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb108 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb108;
}



/* Entry: 10b7ebf38; end: 10b7ebf43;  */

bool FUN_10b7ebf38(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b7ebf44; end: 10b7ebfbf;  */

undefined * FUN_10b7ebf44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb110 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f883d8,
                        &UNK_10e5e8370,&UNK_10e5e8398,2,FUN_10b7ebfc0,0);
    do {
      if (puRam00000001137fb110 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb110;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb110,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb110 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb110;
}



/* Entry: 10b7ebfc0; end: 10b7ebfcb;  */

bool FUN_10b7ebfc0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ebfcc; end: 10b7ec047;  */

undefined * FUN_10b7ebfcc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb118 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f883f8,
                        &UNK_10e5e83a0,&UNK_10e5e83ec,3,FUN_10b7ec048,0);
    do {
      if (puRam00000001137fb118 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb118;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb118,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb118 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb118;
}



/* Entry: 10b7ec048; end: 10b7ec053;  */

bool FUN_10b7ec048(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7ec054; end: 10b7ec0cf;  */

undefined * FUN_10b7ec054(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88418,
                        &UNK_10e5e83f8,&UNK_10e5e8464,4,FUN_10b7ec0d0,0);
    do {
      if (puRam00000001137fb120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb120;
}



/* Entry: 10b7ec0d0; end: 10b7ec0db;  */

bool FUN_10b7ec0d0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7ec0dc; end: 10b7ec157;  */

undefined * FUN_10b7ec0dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88438,
                        &UNK_10e5e8474,&UNK_10e5e85f4,0xf,FUN_10b7ec158,0);
    do {
      if (puRam00000001137fb128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb128;
}



/* Entry: 10b7ec158; end: 10b7ec163;  */

bool FUN_10b7ec158(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b7ec164; end: 10b7ec1df;  */

undefined * FUN_10b7ec164(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb130 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88458,
                        &UNK_10e5e8630,&UNK_10e5e8700,6,FUN_10b7ec1e0,0);
    do {
      if (puRam00000001137fb130 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb130;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb130,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb130 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb130;
}



/* Entry: 10b7ec1e0; end: 10b7ec1eb;  */

bool FUN_10b7ec1e0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7ec1ec; end: 10b7ec267;  */

undefined * FUN_10b7ec1ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb138 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f59638,
                        &UNK_10e5e8718,&UNK_10e5e8740,2,FUN_10b7ec268,0);
    do {
      if (puRam00000001137fb138 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb138;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb138,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb138 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb138;
}



/* Entry: 10b7ec268; end: 10b7ec273;  */

bool FUN_10b7ec268(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ec274; end: 10b7ec2ef;  */

undefined * FUN_10b7ec274(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb140 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88478,
                        &UNK_10e5e8748,&UNK_10e5e8790,5,FUN_10b7ec2f0,0);
    do {
      if (puRam00000001137fb140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb140;
}



/* Entry: 10b7ec2f0; end: 10b7ec2fb;  */

bool FUN_10b7ec2f0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7ec2fc; end: 10b7ec377;  */

undefined * FUN_10b7ec2fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb148 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88498,
                        &UNK_10e5e87a4,&UNK_10e5e8800,5,FUN_10b7ec378,0);
    do {
      if (puRam00000001137fb148 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb148;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb148,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb148 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb148;
}



/* Entry: 10b7ec378; end: 10b7ec383;  */

bool FUN_10b7ec378(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7ec384; end: 10b7ec3ff;  */

undefined * FUN_10b7ec384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb150 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f884b8,
                        &UNK_10e5e8814,&UNK_10e5e8848,2,FUN_10b7ec400,0);
    do {
      if (puRam00000001137fb150 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb150;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb150,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb150 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb150;
}



/* Entry: 10b7ec400; end: 10b7ec40b;  */

bool FUN_10b7ec400(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ec40c; end: 10b7ec487;  */

undefined * FUN_10b7ec40c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb158 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f884d8,
                        &UNK_10e5e8850,&UNK_10e5e8868,1,FUN_10b7ec488,0);
    do {
      if (puRam00000001137fb158 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb158;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb158,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb158 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb158;
}



/* Entry: 10b7ec488; end: 10b7ec493;  */

bool FUN_10b7ec488(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10b7ec494; end: 10b7ec50f;  */

undefined * FUN_10b7ec494(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb160 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f884f8,
                        &UNK_10e5e886c,&UNK_10e5e8918,8,FUN_10b7ec510,0);
    do {
      if (puRam00000001137fb160 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb160;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb160,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb160 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb160;
}



/* Entry: 10b7ec510; end: 10b7ec51b;  */

bool FUN_10b7ec510(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7ec51c; end: 10b7ec597;  */

undefined * FUN_10b7ec51c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb168 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88518,
                        &UNK_10e5e8938,&UNK_10e5e8960,2,FUN_10b7ec598,0);
    do {
      if (puRam00000001137fb168 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb168;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb168,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb168 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb168;
}



/* Entry: 10b7ec598; end: 10b7ec5a3;  */

bool FUN_10b7ec598(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ec5a4; end: 10b7ec61f;  */

undefined * FUN_10b7ec5a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb170 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db7938,
                        &UNK_10e5e8968,&UNK_10e5e898c,2,FUN_10b7ec620,0);
    do {
      if (puRam00000001137fb170 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb170;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb170,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb170 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb170;
}



/* Entry: 10b7ec620; end: 10b7ec62b;  */

bool FUN_10b7ec620(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ec62c; end: 10b7ec6bb;  */

undefined * FUN_10b7ec62c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb178 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88538,
                        &UNK_10e5e8994,&UNK_10e5e8d1c,0x12,FUN_10b7ec6bc,0,&UNK_10e5e8d64);
    do {
      if (puRam00000001137fb178 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb178;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb178,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb178 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb178;
}


